`timescale 1ps/1ps
module mic_load #(parameter N=16) (
	input bclk, // Assume a 18.432 MHz clock
    input adclrc,
	input adcdat,
    // No ready signal nor handshake: as this module streams live audio data, it cannot be stalled, therefore we only have the valid signal.
    output logic valid,
    output logic [N-1:0] sample_data
);
    // Assume that i2c has already configured the CODEC for LJ data, MSB-first and N-bit samples.

    // Rising edge detect on ADCLRC to sense left channel
    logic redge_adclrc, adclrc_q; 
    logic [N-1:0] temp_rx_data;
    logic [6:0] bit_index;

    always_ff @(posedge  bclk) begin : adclrc_rising_edge_ff
        adclrc_q <= adclrc;
    end
    assign redge_adclrc = ~adclrc_q & adclrc; // rising edge detected!


    /*
     * Implement the Timing diagram.
     * -----------------------------
     * You should use a temporary N-bit RX register to store the ADCDAT bitstream from MSB to LSB.
     * Remember that MSB is first, LSB is last.
     * Use `temp_rx_data[(N-1)-bit_index] <= adcdat;`
     * BCLK rising is your trigger to sample the value of ADCDAT into the register at the appropriate bit index.
     * ADCLRC rising (see `redge_adclrc`) signals that the MSB should be sampled on the next rising edge of BCLK.
     * With the above, think about when and how you would reset your bit_index counter.
     */

     
    always_ff @(posedge bclk) begin
        valid <= 0;

        // Increment bit index
        if (redge_adclrc || bit_index > 0) begin
            bit_index <= bit_index + 1;
        end

        // bit index full!
        if (bit_index < N) begin
            temp_rx_data[(N-1)-bit_index] <= adcdat;

        end else begin
            sample_data <= temp_rx_data;
            bit_index <= 0;
            valid <= 1;
            temp_rx_data <= 0;

        end
    end
    


endmodule

