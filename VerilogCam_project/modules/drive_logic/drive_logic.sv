module drive_logic #(
	parameter FOV = 25,
	parameter DEFAULT_DISTANCE = 20, // 2-450
	parameter DEFAULT_LEFT_BOUND = 8,
	parameter DEFAULT_RIGHT_BOUND = 15,
	parameter IMAGE_WIDTH = 320,
   parameter IMAGE_HEIGHT = 240,
	parameter ADDR_BITS = $clog2(IMAGE_WIDTH * IMAGE_HEIGHT),
	parameter STUN_TIME = 200000000
	)(
	input wire                 clk,
	input wire 						no_red,
	input 	  [ADDR_BITS-1:0] pixel_count,
	input wire [$clog2(FOV)-1:0] detected_direction,
	input wire [7:0]           average_distance,
	input wire [3:0]           pitch,
	input wire [10:0]          amplitude,
	input wire [31:0]				ir_command,
	input wire						ir_data_ready,
	output [2:0]               drive_command,
	output [7:0]					follow_distance,
	output                     valid,
	output [2:0]					multiplier
);
	
	logic bot_off = 1;
	logic mute_on = 0;
	logic stun = 0;
	logic [$clog2(STUN_TIME)-1:0] stun_counter = 0;
	logic too_close;
	logic [6:0] follow_distance_q = DEFAULT_DISTANCE;
	logic [4:0] left_bound = DEFAULT_LEFT_BOUND;
	logic [4:0] right_bound = DEFAULT_RIGHT_BOUND;
	logic [31:0] last_command;
	logic [$clog2(FOV)-1:0] last_direction;
	
	assign follow_distance = follow_distance_q;
	
	enum logic [2:0] {Stop, TurnLeft, Left, Straight, Right, TurnRight} next_state, current_state = Stop;
	
//	always_comb begin
//		if (pixel_count > 15000) begin
//			multiplier = 3;
//		end
//		else if (pixel_count > 5000) begin
//			multiplier = 2;
//		end
//		else begin
//			multiplier = 1;
//		end
//	end

//	assign multiplier = 3'd3;
	
	
	always_ff @(posedge clk) begin : ir_logic
		
		if (ir_data_ready) begin
			
			last_command <= ir_command;	// Prevents repeat increment/decrement (press a different key between increments/decrements)
			
			case( ir_command )
				32'hed126b86: bot_off <= 1;	// POWER : Stop
				32'he9166b86: bot_off <= 0;	// PLAY  : Go
				32'hf30c6b86: mute_on <= 1;	// MUTE  : Mute
				32'he8176b86: begin				// RETURN: Reset to Defaults
									  mute_on <= 0;
									  follow_distance_q <= DEFAULT_DISTANCE;																
								  end
				32'he51a6b86: follow_distance_q <= (( last_command != ir_command ) && (follow_distance_q < 7'd100))	// Increment Follow Distance
																? (follow_distance_q + 7'd10) : follow_distance_q;			
				32'he11e6b86: follow_distance_q <= (( last_command != ir_command ) && (follow_distance_q > 7'd20))		// Decrement Follow Distance
																? (follow_distance_q - 7'd10) : follow_distance_q;			
			endcase
		end
	end
	
	
	always_ff @(posedge clk) begin: stun_logic
	
		if (!mute_on) begin
		
			if ( amplitude > 50 ) begin
			
				stun <= 1;
				stun_counter <= 0;
				
			end
			
			if (stun_counter > STUN_TIME) begin
			
				stun_counter <= 0;
				stun <= 0;
				
			end
			else begin
			
				stun_counter <= stun_counter + 1;
				
			end
		end
	end
	
	
	always_ff @(posedge clk) begin : distance_logic
	
		too_close <= ( average_distance < follow_distance_q );
		
	end
	
	
	always_ff @(posedge clk) begin: last_direction_logic
		
		if( !no_red ) begin
		
			last_direction <= detected_direction;
			
		end
	end
	
	
	always_ff @(posedge clk) begin : drive_logic
	
		if( too_close || bot_off || stun ) begin
			
			next_state <= Stop;
			
		end
		else if( no_red ) begin
		
			next_state <= ( last_direction < 12 ) ? TurnLeft : TurnRight;
			
		end
		else if( detected_direction < left_bound ) begin
		
			next_state <= Left;
			
		end
		else if( detected_direction > right_bound ) begin
		
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
			TurnLeft: 	drive_command = 1;
			Left: 		drive_command = 2;
			Straight: 	drive_command = 3;
			Right: 		drive_command = 4;
			TurnRight:  drive_command = 5;
		endcase 
	end
	
	
	assign valid = 1;
	
endmodule
			