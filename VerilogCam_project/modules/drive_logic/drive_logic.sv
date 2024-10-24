module drive_logic #(
	parameter AMPLITUDE_THRESHOLD = 4,
	parameter MAX_CLAP_PITCH = 4,
	parameter MIN_WHISTLE_PITCH = 12,
	parameter FOV = 25,
	parameter DEFAULT_DISTANCE = 20 // 2-450
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
	logic bot_off = 1;
	logic too_close;
	logic [8:0] follow_distance = DEFAULT_DISTANCE;
	
	enum logic [2:0] {Stop, Fast_left, Left, Straight, Right, Fast_right} next_state, current_state = Stop;
	
//	always_ff begin: microphone_logic
//		if (amplitude > AMPLITUDE_THRESHOLD) begin
//			if (pitch < MAX_CLAP_PITCH) begin: clap
//				command <= 0;
//			end
//			else if (pitch > MIN_WHISTLE_PITCH) begin: whistle
//				command <= 1;
//			end
//		end
//   end

//	always_ff begin : ir_logic
	
//		// Custom: 68b6
//		// Power:  21de
//	
//		case( ir_command )
//			// Power
//			32'h68b621de: bot_off <= 0;
//			32'h21de68b6: bot_off <= 0;
//			32'h6b86ed12: bot_off <= 0;
//			32'hed126b86: bot_off <= 0;
//			default: bot_off <= 1;
//		endcase
//	
//	end
	
	always_ff begin : ultrasonic
	
		too_close <= ( average_distance < follow_distance );
		
	end
	
	always_ff begin : drive_logic
	
		if( no_red || too_close || bot_off ) begin
		
			next_state <= Stop;
			
		end
		else if (detected_direction < 8) begin
		
			next_state <= Left;
			
		end
		else if (detected_direction < 16) begin
		
			next_state <= Straight;
			
		end
		else begin
		
			next_state <= Right;
			
		end
	
		current_state <= next_state;

	end
	
	always_comb begin
		case (current_state)
			Stop: 		drive_command = 0;
			Fast_left: 	drive_command = 1;
			Left: 		drive_command = 2;
			Straight: 	drive_command = 3;
			Right: 		drive_command = 4;
			Fast_right: drive_command = 5;
		endcase 
	end
	
	assign valid = 1;
	
endmodule
			