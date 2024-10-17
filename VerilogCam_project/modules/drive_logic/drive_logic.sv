module drive_logic #(
	parameter AMPLITUDE_THRESHOLD = 4,
	parameter MAX_CLAP_PITCH = 4,
	parameter MIN_WHISTLE_PITCH = 12,
	parameter FOV = 25
	)(
	input wire clk,
	input wire [$clog2(FOV):0] detected_direction,
	input wire average_distance,
	input wire [3:0] pitch,
	input wire [3:0] amplitude,
	output [2:0] drive_command,
	output valid
);
	
	logic command;
	
	enum logic [2:0] {Stop, Fast_left, Left, Straight, Right, Fast_right} next_state, current_state = Stop;
	
	always_ff begin
		if (amplitude > AMPLITUDE_THRESHOLD) begin
			if (pitch < MAX_CLAP_PITCH) begin
				command <= 0;
			end
			else if (pitch > MIN_WHISTLE_PITCH) begin
				command <= 1;
			end
		end
		
		if (detected_direction < 6) begin
			next_state <= Fast_left;
		end
		else if (detected_direction < 12) begin
			next_state <= Left;
		end
		else if (detected_direction < 13) begin
			next_state <= Straight;
		end
		else if (detected_direction < 19) begin
			next_state <= Right;
		end
		else begin
			next_state <= Fast_right;
		end
		
		current_state <= command ? next_state : Stop;
	end
	
	always_comb begin
		case (current_state)
			Stop: drive_command = 0;
			Fast_left: drive_command = 1;
			Left: drive_command = 2;
			Straight: drive_command = 3;
			Right: drive_command = 4;
			Fast_right: drive_command = 5;
		endcase 
	end
	
	assign valid = 1;
	
endmodule
			