module image_processor #(
    parameter IMAGE_WIDTH = 320,
    parameter IMAGE_HEIGHT = 240,
    parameter PIXEL_BITS = 12,      // Bits per pixel (e.g., 12 bits for RGB444)
    parameter KERNEL_SIZE = 5,
    parameter KERNEL_BITS = 8,      // Bits per kernel value
    parameter ADDR_BITS = $clog2(IMAGE_WIDTH * IMAGE_HEIGHT)
)(
    input wire clk_25_vga,
    input wire resend,
    input wire vga_ready,
	 input wire [11:0] rddata,
    output reg [ADDR_BITS-1:0] rdaddress, // Address to read from BRAM
    output reg vga_start,
    output reg vga_end,
    output reg [30:0] vga_data,
	 
	 input wire [5:0] r_mod,
	 input wire [5:0] g_mod,
	 input wire [5:0] b_mod,
	 input wire    div_flag,
	 
	 input wire signed [6:0] curr_kernel [24:0]
	 
	 // TODO - need to add a valid signal output
);
    // Image coordinate registers
    int col = 0, col_old = 0;
    int row = 0, row_old = 0;
	 
	 // Convolution shift registers
	 logic [11:0] row_lsfr [4:0][319:0]; // 5 rows of 320 elements of 12 pixels each
	 logic [15:0] row_address;
	 
	  // Address Generator
    always @(posedge clk_25_vga) begin
	 
        if (resend) begin
            col <= 0;
            row <= 0;
            rdaddress <= 0;
        end
		  else if (vga_ready) begin
		  
            // Update pixel coordinates
            if (col >= IMAGE_WIDTH - 1) begin
				
                col <= 0;
					 
                if (row >= IMAGE_HEIGHT - 1) begin
                    row <= 0;
                end
					 else begin
                    row <= row + 1;
                end
            end
				else begin
                col <= col + 1;
            end

            row_old <= row;
            col_old <= col;

            // Provide read address to BRAM
            rdaddress <= row * IMAGE_WIDTH + col;
        end
    end

	 
	 // Shift Register
	 always_ff @(posedge clk_25_vga) begin: build_shift_registers
		// Calculate row index
		row_address = rdaddress%320;
		
		// Load pixel into row
		row_lsfr[0][row_address] <= rddata;
		
		
		// When row full, shift rows downward
		if( (rdaddress + 1)%320 == 0) begin
			row_lsfr[1] <= row_lsfr[0];
			row_lsfr[2] <= row_lsfr[1];
			row_lsfr[3] <= row_lsfr[2];
			row_lsfr[4] <= row_lsfr[3];
		end
	 end
	 
	 // MAX BLUR
//	 logic [5:0] kernel_values [0:24] = '{6'd1, 6'd2, 6'd3, 6'd2, 6'd1, 
//													  6'd2, 6'd5, 6'd8, 6'd5, 6'd2, 
//													  6'd3, 6'd8, 6'd12, 6'd8, 6'd3, 
//													  6'd2, 6'd5, 6'd8, 6'd5, 6'd2, 
//													  6'd1, 6'd2, 6'd3, 6'd2, 6'd1};

////	// MIN BLUR
//	logic [5:0] kernel_values [0:24] = '{6'd1, 6'd1, 6'd2, 6'd1, 6'd1, 
//													  6'd1, 6'd2, 6'd3, 6'd2, 6'd1, 
//													  6'd2, 6'd3, 6'd5, 6'd3, 6'd2, 
//													  6'd1, 6'd2, 6'd3, 6'd2, 6'd1, 
//													  6'd1, 6'd1, 6'd2, 6'd1, 6'd1};
//													  
//	 logic signed [5:0] kernel_values [0:24] = '{6'sd0, 6'sd0, 6'sd0, 6'sd0, 6'sd0, 
//													  6'sd0, 6'sd0, 6'sd0, 6'sd0, 6'sd0, 
//													  6'sd0, 6'sd0, 6'sd1, 6'sd0, 6'sd0, 
//													  6'sd0, 6'sd0, 6'sd0, 6'sd0, 6'sd0, 
//													  6'sd0, 6'sd0, 6'sd0, 6'sd0, 6'sd0};

//	 logic [5:0] kernel_values [0:24] = '{6'd0, 6'd0, 6'd0, 6'd0, 6'd0, 
//													  6'd0, 6'd1, 6'd2, 6'd1, 6'd0, 
//													  6'd0, 6'd2, 6'd4, 6'd2, 6'd0, 
//													  6'd0, 6'd1, 6'd2, 6'd1, 6'd0, 
//													  6'd0, 6'd0, 6'd0, 6'd0, 6'd0};

//	logic [5:0] kernel_values [0:24] = '{6'd1, 6'd1, 6'd1, 6'd1, 6'd1, 
//													  6'd1, 6'd1, 6'd1, 6'd1, 6'd1, 
//													  6'd1, 6'd1, 6'd1, 6'd1, 6'd1, 
//													  6'd1, 6'd1, 6'd1, 6'd1, 6'd1, 
//													  6'd1, 6'd1, 6'd1, 6'd1, 6'd1};
													  
//	logic signed [5:0] kernel_values [0:24] = '{6'sd1, 6'sd4, 6'sd7, 6'sd4, 6'sd1, 
//													  6'sd4, 6'sd16, 6'sd26, 6'sd16, 6'sd4, 
//													  6'sd7, 6'sd26, 6'sd41, 6'sd26, 6'sd7, 
//													  6'sd4, 6'sd16, 6'sd26, 6'sd16, 6'sd4, 
//													  6'sd1, 6'sd4, 6'sd7, 6'sd4, 6'sd1};


//	 logic signed [5:0] kernel_values [0:24] = '{6'sd0, 6'sd0, 6'sd0, 6'sd0, 6'sd0, 
//													  6'sd0, -6'sd1, -6'sd1, -6'sd1, 6'sd0, 
//													  6'sd0, -6'sd1, 6'sd8, -6'sd1, 6'sd0, 
//													  6'sd0, -6'sd1, -6'sd1, -6'sd1, 6'sd0, 
//													  6'sd0, 6'sd0, 6'sd0, 6'sd0, 6'sd0};
													  
													  

													  
//	 logic [10:0] kernel_sum = 45;
//	 logic [10:0] kernel_sum = 25;
//	 logic [10:0] kernel_sum = 273;
//	 logic [10:0] kernel_sum = 0;
//	 logic [10:0] kernel_sum = 1;
	 
	 // Set Current Convolution Kernel 
	 logic signed [6:0] kernel_values [24:0];
	 logic signed [11:0] kernel_sum;
	 
	 always_ff @(posedge clk_25_vga) begin
		kernel_sum = 0;
		for (int i=0; i<25; i++) begin
			kernel_values[i] <= curr_kernel[i];
			kernel_sum = kernel_sum + curr_kernel[i];
		end
	 end
	 
	 // Calculate and set filter
	 logic [11:0] processed_data;
	 
	 logic signed [11:0] r_products [24:0];
	 logic signed [11:0] g_products [24:0];
	 logic signed [11:0] b_products [24:0];
	 logic signed [4:0] r_row_l [24:0];
	 logic signed [4:0] g_row_l [24:0];
	 logic signed [4:0] b_row_l [24:0]; 
	 logic signed [11:0] r_total_indexed [24:0];
	 logic signed [11:0] g_total_indexed [24:0];
	 logic signed [11:0] b_total_indexed [24:0];
	 
	 logic signed [12:0] r_total_i2 [12:0];
	 logic signed [12:0] g_total_i2 [12:0];
	 logic signed [12:0] b_total_i2 [12:0];
	 
	 logic signed [13:0] r_total_i3 [6:0];
	 logic signed [13:0] g_total_i3 [6:0];
	 logic signed [13:0] b_total_i3 [6:0];
	 
	 logic signed [14:0] r_total_i4 [3:0];
	 logic signed [14:0] g_total_i4 [3:0];
	 logic signed [14:0] b_total_i4 [3:0];
	 
	 logic signed [15:0] r_total_i5 [3:0];
	 logic signed [15:0] g_total_i5 [3:0];
	 logic signed [15:0] b_total_i5 [3:0];
	 
	 logic signed [16:0] r_total_f;
	 logic signed [16:0] g_total_f;
	 logic signed [16:0] b_total_f;
	 
	 logic signed [11:0] r_subtotals [4:0];
	 logic signed [11:0] g_subtotals [4:0];
	 logic signed [11:0] b_subtotals [4:0];
	 
	 logic signed [16:0] r_total;
	 logic signed [16:0] g_total;
	 logic signed [16:0] b_total;
	 
	 logic signed [12:0] r_norm;  // todo increase size
	 logic signed [12:0] g_norm;
	 logic signed [12:0] b_norm;
	 
	 logic [3:0] r_out;
	 logic [3:0] g_out;
	 logic [3:0] b_out;
		
	 
	 always_ff @(posedge clk_25_vga) begin: convolute_shift_register
 
		// Convolute kernel centred with current pixel
		if ((row_address > 1) && (row_address < 320)) begin
//			r_norm = rddata[11:8];
//			g_norm = rddata[7:4];
//			b_norm = rddata[3:0];

			for ( int i = 0; i < 25; i++ ) begin
				r_row_l[i] <= row_lsfr[(i-i%5)/5][row_address - 4 + i%5][11:8];
				g_row_l[i] <= row_lsfr[(i-i%5)/5][row_address - 4 + i%5][7:4];
				b_row_l[i] <= row_lsfr[(i-i%5)/5][row_address - 4 + i%5][3:0];
				r_total_indexed[i] <= kernel_values[i] * r_row_l[i];
				g_total_indexed[i] <= kernel_values[i] * g_row_l[i];
				b_total_indexed[i] <= kernel_values[i] * b_row_l[i];
			end
			
			for (int i = 0; i < 13; i++) begin
				if (i < 12) begin
					r_total_i2[i] <= r_total_indexed[i*2] + r_total_indexed[i*2 + 1];
					g_total_i2[i] <= g_total_indexed[i*2] + g_total_indexed[i*2 + 1];
					b_total_i2[i] <= b_total_indexed[i*2] + b_total_indexed[i*2 + 1];
				end
				else begin
					r_total_i2[i] <= r_total_indexed[i*2];
					g_total_i2[i] <= g_total_indexed[i*2];
					b_total_i2[i] <= b_total_indexed[i*2];
				end
			end
			
			for (int i = 0; i < 7; i++) begin
				if (i > 0) begin
					r_total_i3[i] <= r_total_i2[i*2] + r_total_i2[i*2 - 1];
					g_total_i3[i] <= g_total_i2[i*2] + g_total_i2[i*2 - 1];
					b_total_i3[i] <= b_total_i2[i*2] + b_total_i2[i*2 - 1];
				end
				else begin
					r_total_i3[i] <= r_total_i2[i];
					g_total_i3[i] <= g_total_i2[i];
					b_total_i3[i] <= b_total_i2[i];
				end
			end
			
			for (int i = 0; i < 4; i++) begin
				if (i < 3) begin
					r_total_i4[i] <= r_total_i3[i*2] + r_total_i3[i*2 + 1];
					g_total_i4[i] <= g_total_i3[i*2] + g_total_i3[i*2 + 1];
					b_total_i4[i] <= b_total_i3[i*2] + b_total_i3[i*2 + 1];
				end
				else begin
					r_total_i4[i] <= r_total_i3[i*2];
					g_total_i4[i] <= g_total_i3[i*2];
					b_total_i4[i] <= b_total_i3[i*2];
				end
			end
			
			for (int i = 0; i < 2; i++) begin
				r_total_i5[i] <= r_total_i4[i*2] + r_total_i4[i*2 + 1];
				g_total_i5[i] <= g_total_i4[i*2] + g_total_i4[i*2 + 1];
				b_total_i5[i] <= b_total_i4[i*2] + b_total_i4[i*2 + 1];
			end		
			
			r_total_f <= r_total_i5[0] + r_total_i5[1];
			g_total_f <= g_total_i5[0] + g_total_i5[1];
			b_total_f <= b_total_i5[0] + b_total_i5[1];
				
			if (kernel_sum != 0) begin
			
				if (div_flag == 0) begin					
					r_total <= $signed(r_mod) * r_total_f;
					g_total <= $signed(g_mod) * g_total_f;
					b_total <= $signed(b_mod) * b_total_f;
				end
				else if (div_flag == 1) begin
					r_total <= r_total_f/$signed(r_mod);
					g_total <= g_total_f/$signed(g_mod);
					b_total <= b_total_f/$signed(b_mod);
				end
				
				r_norm <= r_total / kernel_sum;
				g_norm <= g_total / kernel_sum;
				b_norm <= b_total / kernel_sum;	
			end
			else begin
				if (r_total_f > 0 && g_total_f > 0 && b_total_f > 0) begin
					r_norm <= 15;
					g_norm <= 15;
					b_norm <= 15;
					
					// for coloured edges
//					r_norm <= r_total_f;
//					g_norm <= g_total_f;
//					b_norm <= b_total_f;	
				end
				else begin
					r_norm <= 0;
					g_norm <= 0;
					b_norm <= 0;	
				end
			end
			
			// Clamp value r,g,b components
			r_out <= ( r_norm > 4'b1111 ) ? 4'b1111 : (( $signed(r_norm) < 0 ) ? 4'b0 : r_norm[3:0] );
			g_out <= ( g_norm > 4'b1111 ) ? 4'b1111 : (( $signed(g_norm) < 0 ) ? 4'b0 : g_norm[3:0] );
			b_out <= ( b_norm > 4'b1111 ) ? 4'b1111 : (( $signed(b_norm) < 0 ) ? 4'b0 : b_norm[3:0] );
			
			// Concatenate data
			processed_data <= {r_out[3:0], g_out[3:0], b_out[3:0]};
			
			
		end
		else begin
			processed_data <= {rddata[11:8], rddata[7:4], rddata[3:0]};
		end
	 end

	 
    // Block to detect frame start and end
    always @(*) begin
        vga_start = (col_old == 0 && row_old == 0) ? 1'b1 : 1'b0;
        vga_end = (col_old == IMAGE_WIDTH - 1 && row_old == IMAGE_HEIGHT - 1) ? 1'b1 : 1'b0;
    end

	 
    // Convert processed data to VGA format
    always @(*) begin
        vga_data = {
            {processed_data[PIXEL_BITS-1:PIXEL_BITS-4], processed_data[PIXEL_BITS-1:PIXEL_BITS-4], 2'b00},
            {processed_data[PIXEL_BITS-5:PIXEL_BITS-8], processed_data[PIXEL_BITS-5:PIXEL_BITS-8], 2'b00},
            {processed_data[PIXEL_BITS-9:PIXEL_BITS-12], processed_data[PIXEL_BITS-9:PIXEL_BITS-12], 2'b00}
        };
    end

endmodule