`timescale 1ns/1ps

module twod_convolution_filt_tb;

    // Parameters
    parameter IMAGE_WIDTH = 320;
    parameter IMAGE_HEIGHT = 240;
    parameter PIXEL_BITS = 12;
    parameter ADDR_BITS = $clog2(IMAGE_WIDTH * IMAGE_HEIGHT);

    // Testbench Signals
    reg clk;
    reg [PIXEL_BITS-1:0] rddata;
    reg [ADDR_BITS-1:0] rdaddress;
    wire [ADDR_BITS-1:0] delayed_address;
    wire [PIXEL_BITS-1:0] filtered_data;

    // Instantiate the DUT
    twod_convolution_filt #(
        .IMAGE_WIDTH(IMAGE_WIDTH),
        .IMAGE_HEIGHT(IMAGE_HEIGHT),
        .PIXEL_BITS(PIXEL_BITS),
        .ADDR_BITS(ADDR_BITS)
    ) dut (
        .clk(clk),
        .rddata(rddata),
        .rdaddress(rdaddress),
        .delayed_address(delayed_address),
        .filtered_data(filtered_data)
    );

    // Clock generation
    always #10 clk = ~clk; // 50 MHz clock

    // Test sequence
    initial begin
        $dumpfile("waveform.vcd");
        $dumpvars(0, twod_convolution_filt_tb);

        // Initialize signals
        clk = 0;
        rddata = 12'b0;
        rdaddress = 0;

        // Test 1: Basic Functionality Test
        test_basic_functionality();

        // Test 2: Edge and Boundary Test
        test_edge_and_boundary();

        // Test 3: Zero and Max Pixel Value Test
        test_zero_and_max_pixel_values();

        // Test 4: Noise Handling Test
        test_noise_handling();

        // Test 5: Random Pixel Pattern Test
        test_random_pixel_pattern();

        #1000 $finish;
    end

    // Test 1: Basic Functionality Test
    task test_basic_functionality;
        integer i;
        $display("Running Basic Functionality Test...");
        for (i = 0; i < 100; i = i + 1) begin
            rddata = i;          // Gradual increase in pixel values
            rdaddress = i;
            #20;                 // Wait for one clock cycle
        end
    endtask

    // Test 2: Edge and Boundary Test
    task test_edge_and_boundary;
        $display("Running Edge and Boundary Test...");
        rddata = 12'hAAA;
        rdaddress = IMAGE_WIDTH - 1; // Right edge
        #20;
        rdaddress = IMAGE_WIDTH * (IMAGE_HEIGHT - 1); // Bottom-left corner
        #20;
        rdaddress = IMAGE_WIDTH * IMAGE_HEIGHT - 1; // Bottom-right corner
        #20;
        rdaddress = 0;            // Top-left corner
        #20;
    endtask

    // Test 3: Zero and Max Pixel Value Test
    task test_zero_and_max_pixel_values;
        $display("Running Zero and Max Pixel Value Test...");
        rddata = 12'h000;          // Minimum pixel value
        rdaddress = 100;
        #20;
        rddata = 12'hFFF;          // Maximum pixel value
        rdaddress = 200;
        #20;
    endtask

    // Test 4: Noise Handling Test
    task test_noise_handling;
        integer i;
        $display("Running Noise Handling Test...");
        for (i = 0; i < 100; i = i + 1) begin
            rddata = $random % 12'hFFF;  // Random noise
            rdaddress = i + 100;
            #20;
        end
    endtask

    // Test 5: Random Pixel Pattern Test
    task test_random_pixel_pattern;
        integer i;
        $display("Running Random Pixel Pattern Test...");
        for (i = 0; i < 20; i = i + 1) begin
            rddata = $random % 12'hFFF;  // Random pixel pattern
            rdaddress = i + 200;
            #20;
        end
    endtask

endmodule
