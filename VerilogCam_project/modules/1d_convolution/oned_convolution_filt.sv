`timescale 1ns/1ps

module oned_convolution_filt (
    input wire clk,            // Clock signal
    input wire reset,          // Reset signal (resets buffer and output)
    input wire [7:0] raw_in,   // 8-bit input data
    output reg [7:0] avg_out   // 8-bit output average
);

    // Define parameters and registers
    parameter BUFFER_SIZE = 50;
    reg [7:0] buffer[0:BUFFER_SIZE-1];  // Buffer to store the last 50 data points
    reg [15:0] sum;                     // Larger sum to avoid overflow (16-bit sum for 8-bit inputs)
    integer i;                          // Loop index
    integer count;                      // Counter to track how many elements are in the buffer
    integer idx;                        // Pointer to the oldest entry in the buffer

    // Initialization
    initial begin
        sum = 0;
        count = 0;
        idx = 0;
        avg_out = 0;
        for (i = 0; i < BUFFER_SIZE; i = i + 1) begin
            buffer[i] = 0;
        end
    end

    // Main logic block
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            // Reset all registers
            sum <= 0;
            count <= 0;
            idx <= 0;
            avg_out <= 0;
            for (i = 0; i < BUFFER_SIZE; i = i + 1) begin
                buffer[i] <= 0;
            end
        end else begin
            if (count < BUFFER_SIZE) begin
                // Buffer is not yet full
                sum <= sum + {8'b0, raw_in};  // Add the new value to the sum, zero-extend raw_in
                buffer[count] <= raw_in;
                count <= count + 1;
                avg_out <= raw_in;            // Output the input data until buffer is full
            end else begin
                // Buffer is full, update sum and output average
                sum <= sum - {8'b0, buffer[idx]} + {8'b0, raw_in};  // Handle width mismatch by zero-extending
                buffer[idx] <= raw_in;              // Replace oldest value with new data
                idx <= (idx + 1) % BUFFER_SIZE;       // Update index (circular buffer)

                // Averaging (Equivalent to Applying Kernel Weights):
                // Compute average by dividing the sum by BUFFER_SIZE
                avg_out <= sum / BUFFER_SIZE;  // Output the average value
            end
        end
    end
endmodule
