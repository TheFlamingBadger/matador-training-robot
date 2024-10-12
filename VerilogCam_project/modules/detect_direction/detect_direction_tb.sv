module detect_direction_tb;

    // Parameters
    parameter IMAGE_WIDTH = 320;
    parameter IMAGE_HEIGHT = 240;
    parameter ADDR_BITS = $clog2(IMAGE_WIDTH * IMAGE_HEIGHT);
    parameter NUM_DIVISIONS = 3;                    
    parameter FOV = 25;

    // Inputs
    logic clk;                                  // 50 MHz clock signal
    logic start_frame;                          // Flag indicating reset to beginning of frame
    logic end_frame;                            // Flag indicating reset to beginning of frame
    logic [$clog2(ADDR_BITS)-1:0] rdaddress;    // Data read from BRAM
    logic [11:0] rddata;                        // Data read from BRAM

    // Outputs
    logic [$clog2(FOV)-1:0] direction;          // Direction object detected in

    // Instantiate device under test
    detect_direction #(
        .IMAGE_WIDTH(IMAGE_WIDTH),
        .IMAGE_HEIGHT(IMAGE_HEIGHT),
        .ADDR_BITS(ADDR_BITS),
        .NUM_DIVISIONS(NUM_DIVISIONS),
        .FOV(FOV)
    ) dut (
        .clk(clk),
        .start_frame(start_frame),
        .end_frame(end_frame),
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
        $dumpvars(0, address_generator); // Select all variables in the current scope
        
        // Initialize variables
        start_frame = 0;
        end_frame = 0;
        rdaddress = 0;
        rddata = 12'hFFF;
        
        // Tests
        #5000
        $finish;
    end

endmodule
