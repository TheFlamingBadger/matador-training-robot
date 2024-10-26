module drive_logic #(
	parameter AMPLITUDE_THRESHOLD = 4,
	parameter MAX_CLAP_PITCH = 4,
	parameter MIN_WHISTLE_PITCH = 12,
	parameter FOV = 25,
	parameter DEFAULT_DISTANCE = 20, // 2-450
	parameter DEFAULT_LEFT_BOUND = 8,
	parameter DEFAULT_RIGHT_BOUND = 15
	)(
	input wire                 clk,
	input wire 						no_red,
	input wire [$clog2(FOV):0] detected_direction,
	input wire [7:0]           average_distance,
	input wire [3:0]           pitch,
	input wire [3:0]           amplitude,
	input wire [31:0]				ir_command,
	input wire						ir_data_ready,
	output [2:0]               drive_command,
	output [7:0]					follow_distance,
	output                     valid
);
	
	logic command = 0;
	logic bot_off = 1;
	logic too_close;
	logic [8:0] follow_distance_q = DEFAULT_DISTANCE;
	logic [8:0] left_bound = DEFAULT_LEFT_BOUND;
	logic [8:0] right_bound = DEFAULT_RIGHT_BOUND;
	
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

	always_ff begin : ir_logic
	
		// Custom: 68b6
		// Power:  21de
		
		if (ir_data_ready) begin
			
			case( ir_command )
				32'hed126b86: bot_off <= 1;																											// Stop
				32'he9166b86: bot_off <= 0;																											// Go
//				32'he51a6b86: follow_distance_q <= (follow_distance_q < 100) ? (follow_distance_q + 10) : follow_distance_q;			// Increment Follow Distance
//				32'he11e6b86: follow_distance_q <= (follow_distance_q > 20) ? (follow_distance_q - 10) : follow_distance_q;			// Decrement Follow Distance
//				default: 	  bot_off <= 0;
			endcase
			
		end
	
	end
	
	assign follow_distance = follow_distance_q;
	
	always_ff begin : ultrasonic
	
		too_close <= ( average_distance < follow_distance_q );
		
	end
	
	always_ff begin : drive_logic
	
		if( no_red || too_close || bot_off ) begin
		
			next_state <= Stop;
			
		end
		else if (detected_direction < left_bound) begin
		
			next_state <= Left;
			
		end
		else if (detected_direction > right_bound) begin
		
			next_state <= Right;
			
		end
		else begin
		
			next_state <= Straight;
			
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
			