module address_generator #(
    parameter IMAGE_WIDTH = 320,
    parameter IMAGE_HEIGHT = 240,
    parameter ADDR_BITS = $clog2(IMAGE_WIDTH * IMAGE_HEIGHT)
)(
    input wire clk,                         // 50 MHz clock signal
    input wire resend,                      // Flag to reset to beginning of frame
    output reg [ADDR_BITS-1:0] rdaddress    // BRAM memory address
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
        else begin
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

            rdaddress <= row * IMAGE_WIDTH + col;
        end
    end
    
endmodule