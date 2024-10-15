module US_top_level(
	input CLOCK_50,
	inout [35:0] GPIO,
	input [3:0] KEY,
	output [7:0] LEDR
);

logic start, reset;
logic echo, trigger;
logic pll_clk, locked;
logic [7:0] raw_distance;

assign echo = GPIO[34];
assign GPIO[35] = trigger;

PLL init_PLL(
	.areset(reset),
	.inclk0(CLOCK_50),
	.c0(pll_clk),
	.locked(locked)
);

logic [23:0] pulse_counter;  // 24-bit counter for 50 MHz clock to 4 Hz clock division
localparam integer PULSE_PERIOD = 50_000_000 / (2 * 4);  // Division factor for 4 Hz

always_ff @(posedge CLOCK_50 or posedge reset) begin
    if (reset) begin
        pulse_counter <= 0;
        measure_pulse <= 0;
    end else begin
        pulse_counter <= pulse_counter + 1;
        if (pulse_counter >= PULSE_PERIOD) begin
            measure_pulse <= 1;  // Generate a short pulse
            pulse_counter <= 0;
        end else begin
            measure_pulse <= 0;  // Keep it low otherwise
        end
    end
end

sensor_driver u0(
  .clk(CLOCK_50),
  .rst(measure_pulse),
  .measure(pll_clk),
  .echo(echo),
  .trig(trigger), 
  .distance(raw_distance));
  

oned_convolution_filt (
	.clk(CLOCK_50),
	.reset(reset),
	.distance(raw_distance),
	.avg_out(LEDR)
);
  
endmodule
