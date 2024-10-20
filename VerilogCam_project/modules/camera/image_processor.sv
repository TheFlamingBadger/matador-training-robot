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
    output reg [30:0] vga_data
);
    // Image coordinate registers
    int col = 0, col_old = 0;
    int row = 0, row_old = 0;
	 
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

	 
    // Block to detect frame start and end
    always @(*) begin
        vga_start = (col_old == 0 && row_old == 0) ? 1'b1 : 1'b0;
        vga_end = (col_old == IMAGE_WIDTH - 1 && row_old == IMAGE_HEIGHT - 1) ? 1'b1 : 1'b0;
    end

	 
    // Convert processed data to VGA format
    always @(*) begin
	     if( rddata[11:8] > 3 && rddata[7:4] < rddata[11:8] - 3 && rddata[3:0] < rddata[11:8] - 3 ) begin
		      vga_data = {
                {rddata[PIXEL_BITS-1:PIXEL_BITS-4], rddata[PIXEL_BITS-1:PIXEL_BITS-4], 2'b00},
                {rddata[PIXEL_BITS-5:PIXEL_BITS-8], rddata[PIXEL_BITS-5:PIXEL_BITS-8], 2'b00},
                {rddata[PIXEL_BITS-9:PIXEL_BITS-12], rddata[PIXEL_BITS-9:PIXEL_BITS-12], 2'b00}
            };
		  end
		  else begin
		      vga_data = 30'b0;
		  end
    end

endmodule