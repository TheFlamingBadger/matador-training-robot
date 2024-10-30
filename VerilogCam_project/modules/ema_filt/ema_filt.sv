module ema_filt #(
    parameter W = 6,
    parameter W_FRAC = 3,
    parameter ALPHA = 25,
	 parameter SCALAR = 100
)(
    input clk,
	 input reset,
    input [7:0] curr_in,
    input [7:0] prev_out,
	 output [7:0] new_prev_out,
    output [7:0] curr_out
);

    logic [7:0] temp_out;
	 logic [7:0] temp_prev_out;

    always_ff @(posedge clk) begin : difference_eqn
		  if (reset) begin
			  temp_out <= 0;
			  temp_prev_out <= 0;
		  end
		  else begin
		     temp_out <= (ALPHA*curr_in/SCALAR) + ((SCALAR-ALPHA)*prev_out/SCALAR);
// 		  temp_out <= 7*curr_in/8 + prev_out/8;
    		  temp_prev_out <= temp_out;
		  end
    end

    assign curr_out = temp_out;
	 assign new_prev_out = temp_prev_out;
	 
endmodule
