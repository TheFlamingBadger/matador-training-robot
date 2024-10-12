module image_processor_tb;

    // Parameters:
    parameter IMAGE_WIDTH = 320;
    parameter IMAGE_HEIGHT = 240;
    parameter PIXEL_BITS = 12;      // Bits per pixel (e.g., 12 bits for RGB444)
    parameter KERNEL_SIZE = 5;
    parameter KERNEL_BITS = 8;      // Bits per kernel value
    parameter ADDR_BITS = $clog2(IMAGE_WIDTH * IMAGE_HEIGHT);

    // Testbench Signals:
    // Inputs
    logic                   clk_25_vga;
    logic                   resend;
    logic                   vga_ready;
    logic [11:0]            rddata;
    logic [5:0]             r_mod;
    logic [5:0]             g_mod;
    logic [5:0]             b_mod;
    logic                   div_flag;
    // Outputs
    logic [ADDR_BITS-1:0]   rdaddress; // Address to read from BRAM
    logic                   vga_start;
    logic                   vga_end;
    logic [30:0]            vga_data;

    logic [6:0] curr_kernel [24:0];

    // Internal
    logic [ADDR_BITS-1:0] prev_address;
	
    // Instantiate device under test
    image_processor dut (
        // Inputs
        .clk_25_vga(clk_25_vga),
        .resend(resend),
        .vga_ready(vga_ready),
        .rddata(rddata),
        .r_mod(r_mod),
        .g_mod(g_mod),
        .b_mod(b_mod),
        .div_flag(div_flag),
        .curr_kernel(curr_kernel),
        // Outputs
        .rdaddress(rdaddress),
        .vga_start(vga_start),
        .vga_end(vga_end),
        .vga_data(vga_data)
    );

    // Clock generation
    initial begin
        clk_25_vga = 0;
        forever #20 clk_25_vga = ~clk_25_vga; // 25MHz clock
    end

    // Test vectors
    initial begin
        $dumpfile("a_waveform.vcd"); // File name
        $dumpvars(0, image_processor_tb); // Select all variables in the current scope
        
        // Initialize state and inputs
        resend = 0;
        vga_ready = 1;
        r_mod = 1;
        g_mod = 1;
        b_mod = 1;
        div_flag = 0;

        // Test 1: Address generator iterates over correct range
        rddata = 12'h888;

        for( int i=0; i<IMAGE_WIDTH*IMAGE_HEIGHT+10; i=i+1 ) begin
            assert( rdaddress != prev_address+1 ) else $fatal("Error: address skipped");
            #40
            prev_address = rdaddress;
        end

        // Test 2: Neutral filters (identity convolution) and unity RGB scale-factor
        for( int i=0; i<IMAGE_WIDTH*IMAGE_HEIGHT+10; i=i+1 ) begin
            #40
            assert( vga_data == 30'b100010000010001000001000100000 ) else $fatal("Error: neutral filters affect output");
        end

        // Test 3: Red filter correct
        rddata = 12'hFFF;
        g_mod = 0;
        b_mod = 0;
        
        #3080000 // Wait 1 frame
        assert( vga_data == 30'h3fc00000 ) else $fatal("Error: red filter does not work");

        // Test 4: Brightness filter correct
        r_mod = 2;
        g_mod = 2;
        b_mod = 2;
        div_flag = 1;
        
        #3080000 // Wait 1 frame
        assert( vga_data == 30'h1dc771dc ) else $fatal("Error: darken filter does not work");

        rddata = 12'h888;
        r_mod = 1;
        g_mod = 1;
        b_mod = 1;
        div_flag = 0;

        #3080000 // Wait 1 frame

        r_mod = 2;
        g_mod = 2;
        b_mod = 2;

        #3080000 // Wait 1 frame
        assert( vga_data == 30'h3fcff3fc ) else $fatal("Error: brighten filter does not work");

        // Test 5: Convolution calculation (blur)        
        
        #50
        $finish;
    end

endmodule
