module address_generator #(
    parameter IMAGE_WIDTH = 320,
    parameter IMAGE_HEIGHT = 240,
    parameter ADDR_BITS = $clog2(IMAGE_WIDTH * IMAGE_HEIGHT)
)(
    input wire clk,                         // 50 MHz clock signal
    input wire resend,                      // Flag to reset to beginning of frame
	 input wire vga_ready,
    output reg [ADDR_BITS-1:0] rdaddress,    // BRAM memory address
	 output reg vga_start,
    output reg vga_end
);

    // Image coordinate registers
    int col = 0, col_old = 0;
    int row = 0, row_old = 0;

    // Address Generator
    always @(posedge clk) begin
	 
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
	 
	 // Block to detect frame start and end
    always @(*) begin
        vga_start = (col_old == 0 && row_old == 0) ? 1'b1 : 1'b0;
        vga_end = (col_old == IMAGE_WIDTH - 1 && row_old == IMAGE_HEIGHT - 1) ? 1'b1 : 1'b0;
    end
    
endmodule
