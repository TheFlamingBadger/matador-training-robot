module drive_logic #(
	parameter AMPLITUDE_THRESHOLD = 4,
	parameter MAX_CLAP_PITCH = 4,
	parameter MIN_WHISTLE_PITCH = 12,
	parameter FOV = 25
	)(
	input wire                 clk,
	input wire 						no_red,
	input wire [$clog2(FOV):0] detected_direction,
	input wire [7:0]           average_distance,
	input wire [3:0]           pitch,
	input wire [3:0]           amplitude,
	input wire [31:0]				ir_command,
	output [2:0]               drive_command,
	output                     valid
);
	
	logic command = 0;
	
	enum logic [2:0] {Stop, Fast_left, Left, Straight, Right, Fast_right} next_state, current_state = Stop;
	
	always_ff begin
//		if (amplitude > AMPLITUDE_THRESHOLD) begin
//			if (pitch < MAX_CLAP_PITCH) begin
//				command <= 0;
//			end
//			else if (pitch > MIN_WHISTLE_PITCH) begin
//				command <= 1;
//			end
//		end
		if( no_red ) begin
			next_state <= Stop;
		end
//		else if (detected_direction < 6) begin
//			next_state <= Fast_left;
//		end
		else if (detected_direction < 8) begin
			next_state <= Left;
		end
		else if (detected_direction < 16) begin
			next_state <= Straight;
		end
//		else if (detected_direction < 19) begin
		else begin
			next_state <= Right;
		end
//		else begin
//			next_state <= Fast_right;
//		end
		
//		current_state <= command ? next_state : Stop;
		current_state <= next_state;

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
			