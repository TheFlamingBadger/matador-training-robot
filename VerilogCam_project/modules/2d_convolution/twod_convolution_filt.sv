`timescale 1ns/1ps

module twod_convolution_filt #(
    parameter IMAGE_WIDTH = 320,
    parameter IMAGE_HEIGHT = 240,
    parameter PIXEL_BITS = 12,      // Bits per pixel (e.g., 12 bits for RGB444)
    parameter KERNEL_SIZE = 5,
    parameter KERNEL_BITS = 8,      // Bits per kernel value
    parameter ADDR_BITS = $clog2(IMAGE_WIDTH * IMAGE_HEIGHT)
)(		
    input wire 						clk,
	input wire  [PIXEL_BITS-1:0] 	rddata,
	input wire  [ADDR_BITS-1:0] 	rdaddress,
	output		[ADDR_BITS-1:0]		delayed_address,
	output 		[PIXEL_BITS-1:0] 	filtered_data
);
	
	logic [7:0] kernel [8:0] = '{8'd1, 8'd1, 8'd1, 8'd1, 8'd1, 8'd1, 8'd1, 8'd1, 8'd1};
	logic [11:0] row_lsfr [2:0][319:0]; // 3 rows of 320 elements of 12 pixels each
	logic [15:0] row_address;
	int col_old = 0;
    int row_old = 0;
	 
	assign filtered_data = filtered_data_q;
	 
	assign delayed_address = ( rdaddress < 321 ) ? IMAGE_WIDTH*IMAGE_HEIGHT - 321 - 1 : rdaddress - 321;
	 
	always_ff @(posedge clk) begin: build_shift_registers
	 
		// Calculate row index
		row_address = rdaddress % 320;
		
		// Load pixel into row
		row_lsfr[0][row_address] <= rddata;
		
		// When row full, shift rows downward
		if( (rdaddress + 1)%320 == 0) begin
			row_lsfr[1] <= row_lsfr[0];
			row_lsfr[2] <= row_lsfr[1];
		end
		
		row_old <= rdaddress / 320;
      	col_old <= rdaddress % 320;
		
	end
	 
	// Calculate and set filter
	logic [11:0] kernel_sum = 8;
	logic [11:0] filtered_data_q;
	 
	logic [4:0] r_pixel_value [7:0];
	logic [4:0] g_pixel_value [7:0];
	logic [4:0] b_pixel_value [7:0]; 
	 
	logic [11:0] r_weighted [7:0];
	logic [11:0] g_weighted [7:0];
	logic [11:0] b_weighted [7:0];
	
	logic [12:0] r_step2 [3:0];
	logic [12:0] g_step2 [3:0];
	logic [12:0] b_step2 [3:0];
	
	logic [13:0] r_step3 [1:0];
	logic [13:0] g_step3 [1:0];
	logic [13:0] b_step3 [1:0];

	logic [16:0] r_total;
	logic [16:0] g_total;
	logic [16:0] b_total;
	
	logic [16:0] r_result;
	logic [16:0] g_result;
	logic [16:0] b_result;
	 
	int j = 0;
	 
	always_ff @(posedge clk) begin: convolute_shift_register
 
		// Convolute kernel centred with current pixel
		if ((row_address > 0) && (row_address < 319)) begin

			for ( int i = 0; i < 4; i++ ) begin: load_from_lsfr
				j = i + 5;
			
				r_pixel_value[i] <= row_lsfr[(i-i%3)/3][row_address - 1 + i%3][11:8];
				g_pixel_value[i] <= row_lsfr[(i-i%3)/3][row_address - 1 + i%3][7:4];
				b_pixel_value[i] <= row_lsfr[(i-i%3)/3][row_address - 1 + i%3][3:0];
				
				r_pixel_value[j-1] <= row_lsfr[(j-j%3)/3][row_address - 1 + j%3][11:8];
				g_pixel_value[j-1] <= row_lsfr[(j-j%3)/3][row_address - 1 + j%3][7:4];
				b_pixel_value[j-1] <= row_lsfr[(j-j%3)/3][row_address - 1 + j%3][3:0];
			end
			
			for ( int i = 0; i < 8; i++ ) begin: load_from_lsfr
				if (i < 4) begin
					r_weighted[i] <= kernel[i] * r_pixel_value[i];
					g_weighted[i] <= kernel[i] * g_pixel_value[i];
					b_weighted[i] <= kernel[i] * b_pixel_value[i];
				end
				else begin
					r_weighted[i] <= kernel[i+1] * r_pixel_value[i];
					g_weighted[i] <= kernel[i+1] * g_pixel_value[i];
					b_weighted[i] <= kernel[i+1] * b_pixel_value[i];
				end
			end
			
			for (int i = 0; i < 4; i++) begin
				r_step2[i] <= r_weighted[i*2] + r_weighted[i*2 + 1];
				g_step2[i] <= g_weighted[i*2] + g_weighted[i*2 + 1];
				b_step2[i] <= b_weighted[i*2] + b_weighted[i*2 + 1];
			end
			
			for (int i = 0; i < 2; i++) begin
				r_step3[i] <= r_step2[i*2] + r_step2[i*2 + 1];
				g_step3[i] <= g_step2[i*2] + g_step2[i*2 + 1];
				b_step3[i] <= b_step2[i*2] + b_step2[i*2 + 1];
			end
			
			r_total <= r_step3[0] + r_step3[1];
			g_total <= g_step3[0] + g_step3[1];
			b_total <= b_step3[0] + b_step3[1];
			
			r_result <= r_total / kernel_sum;
			g_result <= g_total / kernel_sum;
			b_result <= b_total / kernel_sum;
			
			// Concatenate data
			filtered_data_q <= {r_result[3:0], g_result[3:0], b_result[3:0]};
		end
		else begin
			filtered_data_q <= {rddata[11:8], rddata[7:4], rddata[3:0]};
		end
	end

endmodule