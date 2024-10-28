
module my_softcore (
	clk_clk,
	pio_out_external_connection_in_port,
	pio_out_external_connection_out_port,
	reset_reset_n);	

	input		clk_clk;
	input	[31:0]	pio_out_external_connection_in_port;
	output	[31:0]	pio_out_external_connection_out_port;
	input		reset_reset_n;
endmodule
