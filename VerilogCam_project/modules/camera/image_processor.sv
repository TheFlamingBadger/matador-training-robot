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
    output reg vga_start,
    output reg vga_end,
    output reg [30:0] vga_data
);

	 
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