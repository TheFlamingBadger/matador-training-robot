module drive_logic_tb();

//parameter CLK_PERIOD = 20;
parameter FOV = 25;

logic clk;
logic [4:0] 	detected_direction;
logic [7:0]   average_distance;
logic [8:0]   pitch;
logic [10:0]  amplitude;
logic [31:0]	ir_command;
logic [2:0] drive_command;
logic [7:0]	follow_distance;
logic no_red;
logic [6:0] follow_distance_q;

logic valid;

sensor_driver u0(
    .clk(clk),
    .detected_direction(detected_direction),
    .average_distance(average_distance),
    .pitch(pitch),
    .amplitude(amplitude),
    .drive_command(drive_command),
	 .valid(valid)
);


initial clk = 1'b0;

always begin
    #10 
    clk = ~clk;
end
  
initial begin
	detected_direction = 12;
	pitch = 0;
	amplitude = 0;
	no_red = 0;
	follow_distance_q = 20;
	average_distance = 30;
	
	
	#10
	
	for (int i = 0; i < 5; i++) begin
		#100
		assert(drive_command == 0) else $fatal("incorrect command %d, should be 0", drive_command);
	end
	
	ir_command = 32'he9166b86;
	
	for (int i = 0; i < 5; i++) begin
		#100
		assert(drive_command == 3) else $fatal("incorrect command %d, should be 3", drive_command);
	end
	
	amplitude = 50;
	pitch = 70;
	
	for (int i = 0; i < 5; i++) begin
		#100
		assert(drive_command == 3) else $fatal("incorrect command %d, should be 3", drive_command);
	end
	
	detected_direction = 21;
	
	for (int i = 0; i < 5; i++) begin
		#100
		assert(drive_command == 5) else $fatal("incorrect command %d, should be 5", drive_command);
	end
	
	amplitude = 80;
	
	for (int i = 0; i < 5; i++) begin
		#100
		assert(drive_command == 0) else $fatal("incorrect command %d, should be 0", drive_command);
	end
	
	pitch = 8;
	
	for (int i = 0; i < 5; i++) begin
		#100
		assert(drive_command == 5) else $fatal("incorrect command %d, should be 0", drive_command);
	end
	
	ir_command = 32'hf30c6b86;
	pitch = 75;
	
	for (int i = 0; i < 5; i++) begin
		#100
		assert(drive_command == 5) else $fatal("incorrect command %d, should be 2", drive_command);
	end
	
	detected_direction = 7;
	
	for (int i = 0; i < 5; i++) begin
		#100
		assert(drive_command == 2) else $fatal("incorrect command %d, should be 0", drive_command);
	end
	
	no_red = 1;
	
	for (int i = 0; i < 5; i++) begin
		#100
		assert(drive_command == 1) else $fatal("incorrect command %d, should be 0", drive_command);
	end
	
	average_distance = 10;
	
	for (int i = 0; i < 5; i++) begin
		#100
		assert(drive_command == 0) else $fatal("incorrect command %d, should be 0", drive_command);
	end
	
	average_distance = 30;
	
	for (int i = 0; i < 5; i++) begin
		#100
		assert(drive_command == 1) else $fatal("incorrect command %d, should be 0", drive_command);
	end
	
	ir_command = 32'hed126b86;
	
	for (int i = 0; i < 5; i++) begin
		#100
		assert(drive_command == 1) else $fatal("incorrect command %d, should be 0", drive_command);
	end
	
	
	
	#200
	$finish();
	end
endmodule
	
	
	
	
	