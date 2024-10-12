module image_processor_tb;

    // Parameters:
    parameter NUM_FILTERS = 5;
    parameter IMAGE_WIDTH = 320;
    parameter IMAGE_HEIGHT = 240;
    parameter PIXEL_BITS = 12;      // Bits per pixel (e.g., 12 bits for RGB444)
    parameter KERNEL_SIZE = 5;
    parameter KERNEL_BITS = 8;      // Bits per kernel value
    parameter ADDR_BITS = $clog2(IMAGE_WIDTH * IMAGE_HEIGHT);

    // Image processor signals
    logic                   clk_25_vga;
    logic                   resend;
    logic                   vga_ready;
    logic [11:0]            rddata;
    logic [ADDR_BITS-1:0]   rdaddress; // Address to read from BRAM
    logic                   vga_start;
    logic                   vga_end;
    logic [30:0]            vga_data;

    // FSM signals
    logic       clk;
    logic       next_button;    // From debounce
    logic       prev_button;    // From debounce
    logic [2:0] filter_number;	// To lcd display
    logic       lcd_reset;      // To lcd display

    // LCD Testbench signals
    logic        address;
    logic        chipselect;
    logic        byteenable;
    logic        read;
    logic        write;
    logic        waitrequest;
    logic [7:0]  readdata;    // Unused
    logic [1:0]  response;    // Unused
    logic [7:0]  writedata;
    
    // Convolution filter signals
    logic [15:0] audio_pitch;
    logic signed [6:0] curr_kernel [24:0];

    // Pixel filter signals
    logic div_flag;
    logic [5:0] r_mod;
    logic [5:0] g_mod;
    logic [5:0] b_mod;

    // "Show evidence that the VGA output (not input) changes with different input
    // frequencies. You should also show the LCD controller output with user input."

    // Instantiate devices under test
    pixel_filt dut_pixel_filt (
        .clk(clk),
        .filter_number(filter_number),
        .div_flag(div_flag),
        .audio_pitch(audio_pitch),
        .r_mod(r_mod),
        .g_mod(g_mod),
        .b_mod(b_mod)
    );

    convolution_filt dut_convolution_filt (
        .clk(clk),
        .filter_number(filter_number),
        .audio_pitch(audio_pitch),
        .curr_kernel(curr_kernel)
    );

    lcd_display dut_lcd_display (
        .clk(clk),
        .reset(lcd_reset),
        .filter_number(filter_number),
        .address(address),
        .chipselect(chipselect),
        .byteenable(byteenable),
        .read(read),
        .write(write),
        .waitrequest(waitrequest),
        .readdata(readdata),
        .response(response),
        .writedata(writedata)
    );

    filter_fsm #(
        .NUM_FILTERS(NUM_FILTERS)
    ) dut_filter_fsm (
        .clk(clk),
        .next_button(next_button),
        .prev_button(prev_button),
        .filter_number(filter_number),
        .lcd_reset(lcd_reset)
    );

    image_processor dut_image_processor (
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

    initial begin
        clk = 0;
        forever #5 clk = ~clk; // 100MHz clock
    end

    // Test vectors
    initial begin
        $dumpfile("waveform.vcd"); // File name
        $dumpvars(0, image_processor_tb); // Select all variables in the current scope
        
        // Initialize state and inputs
        rddata = 12'h888;
        vga_ready = 1;
        audio_pitch = 0;
        next_button = 0;
        prev_button = 0; #10

        // Test 1: Correct initialisation
        // Correct filter number
        assert( filter_number == 0 ) else $fatal("FSM initialised to incorrect state");
        // Correct LCD output
        assert( {address, writedata} == CLEAR_DISPLAY ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'F'.", writedata); 
        #20
        assert( {address, writedata} == _F ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'F'.", writedata); 
        #20
        assert( {address, writedata} == _i ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'i'.", writedata); 
        #20
        assert( {address, writedata} == _l ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'l'.", writedata);
        #20
        assert( {address, writedata} == _t ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 't'.", writedata);
        #20
        assert( {address, writedata} == _e ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'e'.", writedata);
        #20
        assert( {address, writedata} == _r ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'r'.", writedata);
        #20
        assert( {address, writedata} == _COLON ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of ' '.", writedata);
        #20
        assert( {address, writedata} == _SPACE ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of ' '.", writedata);
        #20
        assert( {address, writedata} == _0 ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of '1'.", writedata);
        
        // Correct filter output
        #92000 // Wait for buffer to fill
        assert( vga_data == 30'b100010000010001000001000100000 ) else $fatal("Error: image modified by filter 0");
        
        // Assert change in pitch 
        audio_pitch = 200;
        #92000
        assert( vga_data == 30'b100010000010001000001000100000 ) else $fatal("Error: image modified by filter 0");

        // Test 2: Button pressed changes filter and updates LCD
        next_button = 1; #10
        next_button = 0; #10

        // Correct filter number
        assert( filter_number == 1 ) else $fatal("FSM initialised to incorrect state");
        // Correct LCD output
        assert( {address, writedata} == CLEAR_DISPLAY ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'F'.", writedata); 
        #20
        assert( {address, writedata} == _F ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'F'.", writedata); 
        #20
        assert( {address, writedata} == _i ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'i'.", writedata); 
        #20
        assert( {address, writedata} == _l ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'l'.", writedata);
        #20
        assert( {address, writedata} == _t ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 't'.", writedata);
        #20
        assert( {address, writedata} == _e ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'e'.", writedata);
        #20
        assert( {address, writedata} == _r ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'r'.", writedata);
        #20
        assert( {address, writedata} == _COLON ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of ' '.", writedata);
        #20
        assert( {address, writedata} == _SPACE ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of ' '.", writedata);
        #20
        assert( {address, writedata} == _1 ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of '1'.", writedata);            
        
        // Test effect of pitch
        #92000
        assert( vga_data == 30'b111111110011111111001111111100 ) else $fatal("Error: image modified by filter 0");

        // Test 2: Button pressed changes filter and updates LCD
        next_button = 1; #10
        next_button = 0; #10

        // Assert change in pitch 
        audio_pitch = 250;
        #92000
        // assert( vga_data == 30'b0 ) else $fatal("Error: image modified by filter 0");

        // Assert change in pitch 
        audio_pitch = 100;
        #92000
        // assert( vga_data == 30'b0 ) else $fatal("Error: image modified by filter 0");

        #20
        $finish;
    end

endmodule
