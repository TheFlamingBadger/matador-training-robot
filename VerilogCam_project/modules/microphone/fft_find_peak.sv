module fft_find_peak #(
    parameter NSamples = 1024, // 1024 N-points
    parameter W        = 33,   // For 16x2 + 1
	parameter NBits    = $clog2(NSamples)

) (
    input                        clk,
    input                        reset,
    input  [W-1:0]               mag,
    input                        mag_valid,
    output logic [W-1:0]         peak = 0,
    output logic [NBits-1:0]     peak_k = 0,
    output logic                 peak_valid
);
    logic [NBits-1:0] i = 0, k;
	always_comb begin
        for (integer j=0; j<NBits; j=j+1) begin
            k[j] = i[NBits-1-j]; // bit-reversed index
        end
    end

    /* Need to implement:
    my_list = [0,1,2,3]
    max_value = 0
    max_value_index = 0
    for i,x in enumerate(my_list):
        if x > max_value:
            max_value = x
            max_value _index = i
    */
	
    logic [NBits-1:0] counter = 0;

    always_ff @(posedge clk) begin : find_peak
        // TODO Find the peak (maximum) value out of a window of 1024 streamed samples, streamed in one at a time.
        // Store the corresponding k-index representing that value in peak_k. Set peak_valid to 1 for 1 clock cycle once all 1024 values have been streamed through.
        // Use the counter i to count from 0 to 1023. Reset all registers after the 1024th value of i, in preparation for the next FFT window.
        // The FFT k-index is represented by bit-reversing i.
        if (reset) begin
            peak <= 0;
            peak_k <= 0;
            i <= 0;
            peak_valid <= 0;
        end
        else if (mag_valid) begin
            // Increment for valid sample
            if (i < NSamples - 1) begin
                i <= i + 1;
            end
            else begin
                i <= 0;
            end
            
            if ((counter == 7) && (mag > 4290000000)) $display("Index: %0d, Mag: %0d, Peak: %0d",i,mag,peak);
            // Check negative k
            if (k[NBits-1] != 1) begin 
                // Check current magnitude against current peak
                if (mag > peak) begin
                    peak <= mag;        // peak is the maximum value from the previous samples
                    peak_k <= k;
                end
            end

            // Reach end of samples
            if (i == NSamples - 1) begin
                $display("Peak at end: %0d\n",peak);
                peak_valid <= 1;        // Assert peak_valid for one cycle
                peak <= 0;
                counter <= counter + 1;
            end
            else begin
                peak_valid <= 0;        // Deassert peak_valid
            end
        end
    end
	 
	 
endmodule