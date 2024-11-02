module detect_direction_tb;

    // Parameters
    parameter IMAGE_WIDTH = 320;
    parameter IMAGE_HEIGHT = 240;
    parameter ADDR_BITS = $clog2(IMAGE_WIDTH * IMAGE_HEIGHT);
    parameter NUM_DIVISIONS = 3;            // Number of divisions
    parameter FOV = 25;                     // Camera FOV in degrees
    parameter MAX_SUM = 12249600;           // 0+1+2+...+319 = 51040, 51040*240=12249600
    parameter THRESHOLD = 3;				// The red min detection threshold
    parameter PIXEL_BITS = 12;

    // Inputs
    logic                   clk;            // 50 MHz clock signal
    logic [ADDR_BITS-1:0]   rdaddress;      // BRAM address to read
    logic [11:0]            rddata;         // Data read from BRAM

    // logics
    logic [4:0]             direction;      // Signed heading of detected object
    logic 				    no_red;   		// Whether no red is detected
    logic					vga_start;      // VGA logic for experimental tuning
    logic			        vga_end;        
    logic [30:0]            vga_data;

    // Instantiate device under test
    detect_direction #(
        .IMAGE_WIDTH(IMAGE_WIDTH),
        .IMAGE_HEIGHT(IMAGE_HEIGHT),
        .ADDR_BITS(ADDR_BITS),
        .NUM_DIVISIONS(NUM_DIVISIONS),
        .FOV(FOV),
        .MAX_SUM(MAX_SUM),
        .THRESHOLD(THRESHOLD),
        .PIXEL_BITS(PIXEL_BITS)
    ) dut (
        .clk(clk),
        .rdaddress(rdaddress),
        .rddata(rddata),
        .direction(direction),
        .no_red(no_red),
        .vga_start(vga_start),
        .vga_end(vga_end),
        .vga_data(vga_data)
    );

    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk; // 100MHz clock
    end

    // Test vectors
    initial begin
        $dumpfile("waveform_detect_direction.vcd"); // File name
        $dumpvars(0, detect_direction); // Select all variables in the current scope
        
        // Initialize variables
        rdaddress = 1;
        rddata = 12'h000; #15

        // Test 1: No red to detect
        rdaddress = 0; #10
        assert( direction == 0 ) else $fatal("Error: detected direction incorrect");
        assert( no_red == 1 ) else $fatal("Error: detected red when there was none");
        
        // Test 2: Direction 0 when red on left
        rdaddress = 1; #10      // Reset
        rdaddress = 2;          // Set pixel to LHS
        rddata = 12'hF00; #10   // Set to red
        rddata = 12'h000;       // Set to white
        rdaddress = 0; #20      // Output detected direction

        assert( direction == 0 ) else $fatal("Error: detected direction incorrect");
        assert( no_red == 1 ) else $fatal("Error: detected no red when there some");

        // Test 3: Direction 25 when red on right
        rdaddress = 1; #10      // Reset
        rdaddress = 319;        // Set pixel to RHS
        rddata = 12'hF00; #20   // Set to red
        rddata = 12'h000;       // Set to white
        rdaddress = 0; #10      // Output detected direction

        assert( direction == 25 ) else $fatal("Error: detected direction incorrect");
        assert( no_red == 1 ) else $fatal("Error: detected no red when there some");

        // Test 4: Correct centroid calculation
        rdaddress = 1; #10              // Reset
        // Pixel 1:
        rdaddress = 12;                 // Set pixel address
        rddata = 12'hF00; #10           // Set to red
        // Pixel 2:
        rdaddress = 240 + 320*5; #10    // Set pixel address
        rddata = 12'h000;               // Set to white
        rdaddress = 0; #20              // Output detected direction

        // Heading should be:
        // (12 + 240) / 2 = 126
        // (126 * 25) / 319 = 9.87 -> 9
        assert( direction == 6'sd9 ) else $fatal("Error: detected direction incorrect");

        // Test 5: No red deasserted when 500 pixels detected
        rdaddress = 1;      // Reset
        rddata = 12'hF00;   // Set to red
        for(int i = 2; i<503; i++) begin
            #10
            rdaddress = i;  // Set pixel address
        end
        rdaddress = 0; #10  // Output detected direction

        assert( no_red == 0 ) else $fatal("Error: detected direction incorrect");

        // Test 5: No red deasserted when 500 pixels detected
        rddata = 12'hFFF;   // Set to white
        rdaddress = 1; #10  // Reset
        assert( no_red == 0 ) else $fatal("Error: detected direction incorrect");

        rddata = 12'hFFF;   // Set to blue
        rdaddress++; #10
        assert( no_red == 0 ) else $fatal("Error: detected direction incorrect");

        rddata = 12'h0F0;   // Set to cyan
        rdaddress++; #10
        assert( no_red == 0 ) else $fatal("Error: detected direction incorrect");

        rddata = 12'h0FF;   // Set to green
        rdaddress++; #10
        assert( no_red == 0 ) else $fatal("Error: detected direction incorrect");

        rddata = 12'hFEE;   // Set to light red
        rdaddress++; #10
        assert( no_red == 0 ) else $fatal("Error: detected direction incorrect");

        rddata = 12'hFDD;   // Darken shade of red
        rdaddress++; #10
        assert( no_red == 0 ) else $fatal("Error: detected direction incorrect");

        rddata = 12'hFCC;   // Darken shade of red
        rdaddress++; #10
        assert( no_red == 0 ) else $fatal("Error: detected direction incorrect");

        rddata = 12'hFBB;   // Darken shade of red
        rdaddress++; #10
        assert( no_red == 0 ) else $fatal("Error: detected direction incorrect");

        $finish;
    end

endmodule
