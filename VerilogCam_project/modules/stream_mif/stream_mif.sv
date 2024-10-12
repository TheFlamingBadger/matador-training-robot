module stream_mif #(
    parameter IMAGE_WIDTH = 320,
    parameter IMAGE_HEIGHT = 240,
	 parameter ADDR_BITS = $clog2(IMAGE_WIDTH * IMAGE_HEIGHT)
)(
    input  logic                 clk,                       
	 input  logic [ADDR_BITS-1:0] rdaddress,
    output logic [11:0]          data            
);

    localparam NumPixels     = IMAGE_WIDTH * IMAGE_HEIGHT; // Total number of pixels on the 640x480 screen
    localparam NumColourBits = 3;         // We are using a 3-bit colour space to fit 3 images within the 3.888 Mbits of BRAM on our FPGA.

    // (Quartus Only) Load image into BRAM
    (* ram_init_file = "image.mif" *)   logic [NumColourBits-1:0] image_file   [NumPixels];
	 
	 // (Verilator Only) Load image into BRAM
    `ifdef VERILATOR
    initial begin : memset /* The 'ifdef VERILATOR' means this initial block is ignored in Quartus */
        $readmemh("image.hex", image_file);
    end
    `endif

    logic [NumColourBits-1:0] image_file_q; // Registers for storing read data
      
    always_ff @(posedge clk) begin : bram_read // This block is for correctly inferring BRAM in Quartus - we need read registers!
	    image_file_q   <= image_file[rdaddress];
    end

    // Create continous assignment of image_file_q
	 logic [NumColourBits-1:0] current_pixel;
    
    always_comb begin
        current_pixel = image_file_q;
    end
    
    // Keep in mind, each RGB channel should be 10 bits like so: {8 bits of colour data, 2 bits of zero padding}.
    // Remember, our 3-bit wide image ROMs only have 1-bit for each colour channel!! (Hint: use the replication operator to convert from 1-bit to 8-bit colour).
    assign data = {{4{current_pixel[2]}}, {4{current_pixel[1]}}, {4{current_pixel[0]}}};

endmodule
