module detect_direction_tb;

    // Parameters
    parameter IMAGE_WIDTH = 320;
    parameter IMAGE_HEIGHT = 240;
    parameter ADDR_BITS = $clog2(IMAGE_WIDTH * IMAGE_HEIGHT);
    parameter NUM_DIVISIONS = 3;                // Number of divisions
    parameter FOV = 25;                         // Camera FOV in degrees
    parameter MAX_SUM = 12249600;               // 0+1+2+...+319 = 51040, 51040*240=12249600
    parameter THRESHOLD = 4;                    // The red detection threshold (0-8)

    // Inputs
    logic clk;                                  // 50 MHz clock signal
    logic [ADDR_BITS-1:0] rdaddress;            // BRAM address to read
    logic [11:0] rddata;                        // Data read from BRAM

    // Outputs
    logic [$clog2(FOV):0] direction;          // Heading of detected object (0-25) L->R

    // Instantiate device under test
    detect_direction #(
        .IMAGE_WIDTH(IMAGE_WIDTH),
        .IMAGE_HEIGHT(IMAGE_HEIGHT),
        .ADDR_BITS(ADDR_BITS),
        .NUM_DIVISIONS(NUM_DIVISIONS),
        .FOV(FOV)
    ) dut (
        .clk(clk),
        .rdaddress(rdaddress),
        .rddata(rddata),
        .direction(direction)
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

        // Test: -1 (no detected direction) outputted when no red detected
        rdaddress = 0; #10
        assert( direction == -6'sd1 ) else $fatal("Error: detected direction incorrect");
        
        // Test: Output 0 when red detected on left
        rdaddress = 0; #10      // Reset
        rdaddress = 1; #10      // Reset

        rddata = 12'hF00; #10   // Set to red
        rddata = 12'h000;       // Set to white

        rdaddress = 0; #20
        assert( direction == -6'sd0 ) else $fatal("Error: detected direction incorrect");

        // Test: Output 25 when red detected on right
        rdaddress = 0; #10      // Reset

        rdaddress = 319;        // Set pixel to RHS
        rddata = 12'hF00; #10   // Set to red
        rddata = 12'h000;       // Set to white

        rdaddress = 0; #20
        assert( direction == 6'sd25 ) else $fatal("Error: detected direction incorrect");

        // Test: Output correct heading for average position
        rdaddress = 0; #10              // Reset
        // Pixel 1:
        rdaddress = 12;                 // Set pixel address
        rddata = 12'hF00; #10           // Set to red
        // Pixel 2:
        rdaddress = 240 + 320*5; #10    // Set pixel address
        rddata = 12'h000;               // Set to white

        rdaddress = 0; #15
        // Heading should be:
        // (12 + 240) / 2 = 126
        // (126 * 25) / 319 = 9.87 -> 9
        assert( direction == 6'sd9 ) else $fatal("Error: detected direction incorrect");

        $finish;
    end

endmodule
