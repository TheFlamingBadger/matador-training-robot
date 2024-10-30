module ema_filt #(
    parameter W = 6,
    parameter W_FRAC = 3,
    parameter ALPHA = 0.5
)(
    input clk,
    input [7:0] curr_in,
    input [7:0] prev_out,
    output [7:0] curr_out
);

    logic [7:0] temp_out;

    always_ff @(posedge clk) begin : difference_eqn
        temp_out <= ALPHA*curr_in + (1-ALPHA)*prev_out;
    end

    assign curr_out = temp_out;
	 
endmodule
