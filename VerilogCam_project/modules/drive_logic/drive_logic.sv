module drive_logic #(
	parameter AMPLITUDE_THRESHOLD = 4,
	parameter MAX_CLAP_PITCH = 4,
	parameter MIN_WHISTLE_PITCH = 12,
	parameter FOV = 25,
	parameter DEFAULT_DISTANCE = 20, // 2-450
	parameter DEFAULT_LEFT_BOUND = 8,
	parameter DEFAULT_RIGHT_BOUND = 15,
	parameter IMAGE_WIDTH = 320,
   parameter IMAGE_HEIGHT = 240,
	parameter ADDR_BITS = $clog2(IMAGE_WIDTH * IMAGE_HEIGHT),
	parameter STUN_TIME = 50000
	)(
	input wire                 clk,
	input wire 						no_red,
	input 	  [ADDR_BITS-1:0] pixel_count,
	input wire [$clog2(FOV):0] detected_direction,
	input wire [7:0]           average_distance,
	input wire [3:0]           pitch,
	input wire [3:0]           amplitude,
	input wire [31:0]				ir_command,
	input wire						ir_data_ready,
	output [2:0]               drive_command,
	output [7:0]					follow_distance,
	output                     valid,
	output [2:0]					multiplier
);
	
	logic bot_off = 1;
	logic mute_on = 0;
	logic stunned = 0;
	logic too_close;
	logic [6:0] follow_distance_q = DEFAULT_DISTANCE;
	logic [4:0] left_bound = DEFAULT_LEFT_BOUND;
	logic [4:0] right_bound = DEFAULT_RIGHT_BOUND;
	
	enum logic [2:0] {Stop, Fast_left, Left, Straight, Right, Fast_right} next_state, current_state = Stop;

	always_comb begin
		if (pixel_count > 15000) begin
			multiplier = 3;
		end
		else if (pixel_count > 5000) begin
			multiplier = 2;
		end
		else begin
			multiplier = 1;
		end
	end

	always_ff begin : ir_logic
	
		// Custom: 68b6
		// Power:  21de
		
		if (ir_data_ready) begin
			
			case( ir_command )
				32'hed126b86: bot_off <= 1 - bot_off;																								// POWER : Stop
				32'he9166b86: bot_off <= 0;																											// PLAY  : Go
				32'hf30c6b86: mute_on <= 1 - mute_on;																								// MUTE  : Mute/Unmute
//				32'he8176b86: follow_distance_q <= DEFAULT_DISTANCE;																			// RETURN: Distance Reset
//				32'he51a6b86: follow_distance_q <= (follow_distance_q < 7'd100) ? (follow_distance_q + 7'd10) : follow_distance_q;			// Increment Follow Distance
//				32'he11e6b86: follow_distance_q <= (follow_distance_q > 20) ? (follow_distance_q - 7'b10) : follow_distance_q;			// Decrement Follow Distance
//				default: 	  bot_off <= 0;
			endcase
			
		end
	
	end
	
	
	assign follow_distance = follow_distance_q;
	
	
	always_ff begin: mic_logic
	
		if (!mute_on) begin
			
			if( stunned > 0 ) begin
		
				stunned <= (stunned > STUN_TIME) ? 0 : stunned + 1;
			
			end
			else if (amplitude > AMPLITUDE_THRESHOLD) begin
			
				stunned <= 1;
				
			end
		end
	end
	
	
	always_ff begin : ultrasonic
	
		too_close <= ( average_distance < follow_distance_q );
		
	end
	
	
	always_ff begin : drive_logic
	
		if( no_red || too_close || bot_off || stunned ) begin
		
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
			