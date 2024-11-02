`timescale 1ns/1ps

module tb_oned_convolution_filt;

    // Testbench signals
    reg clk;
    reg reset;
    reg [7:0] distance;    // 8-bit input data
    wire [7:0] avg_out;    // Output average from the convolution filter

    // Instantiate the oned_convolution_filt module
    oned_convolution_filt uut (
        .clk(clk),
        .reset(reset),
        .raw_in(distance),  // Ensure this matches your module's input name
        .avg_out(avg_out)
    );

    // Clock generation
    always begin
        #5 clk = ~clk;  // Toggle clock every 5 ns (100 MHz clock)
    end

    // Testbench initialization
    initial begin
        $dumpfile("waveform.vcd");
        $dumpvars();

        // Initialize signals
        clk = 0;
        reset = 0;
        distance = 0;

        // Apply reset
        reset = 1;
        #10;
        reset = 0;

        // Test case 1: Load values into the buffer
        $display("Starting test case 1...");
        
        // Input 50 values to fill the buffer
        for (integer i = 1; i <= 50; i = i + 1) begin
            distance = i;       // Provide a simple increasing sequence
            #10;                // Wait for the next clock cycle
            $display("Input: %d, Output: %d", distance, avg_out);
        end
        
        // Test case 2: Check behavior after buffer is full
        $display("Starting test case 2...");
        
        // Input additional values after the buffer is full
        for (integer i = 51; i <= 55; i = i + 1) begin
            distance = i;
            #10;                // Wait for the next clock cycle
            $display("Input: %d, Output: %d", distance, avg_out);
        end

        // Test case 3: Convergence to 55
        $display("Starting test case 3 (convergence to 55)...");
        
        distance = 55;
        // Input the value 55 for 100 clock cycles to show that the output converges
        for (integer i = 0; i < 100; i = i + 1) begin
            #10;
            $display("Input: %d, Output: %d", distance, avg_out);
        end
        
        // Test case 4: Reset the module
        $display("Starting test case 4 (reset test)...");
        reset = 1;
        #10;
        reset = 0;
        distance = 10;
        #10;
        $display("After reset - Input: %d, Output: %d", distance, avg_out);
        
        // End the simulation
        $finish; // Use $finish instead of $stop to ensure complete simulation and waveform capture
    end
endmodule