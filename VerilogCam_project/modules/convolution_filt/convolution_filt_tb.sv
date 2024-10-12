module convolution_filt_tb;
    // Testbench Signals
    logic clk;
    logic [2:0] filter_number;
    logic [15:0] audio_pitch;
	 logic signed [6:0] expected_clarity_kernels [3:0][24:0];
	 logic signed [6:0] expected_sobel_kernels [3:0][24:0];
	 logic signed [6:0] curr_kernel [24:0];
	 logic signed [6:0] temp_kernel [24:0];
	 

    // Instantiate Module
     convolution_filt DUT (
        .clk(clk),
        .filter_number(filter_number),
        .audio_pitch(audio_pitch),
        .curr_kernel(curr_kernel)
    );
	 
	 
	 
	 initial begin
		  expected_clarity_kernels[3] = '{7'sd0, -7'sd1, -7'sd1, -7'sd1, 7'sd0, //sharpen
													 -7'sd1, 7'sd2, 7'sd2, 7'sd2, -7'sd1, 
													 -7'sd1, 7'sd2, 7'sd8, 7'sd2, -7'sd1, 
													 -7'sd1, 7'sd2, 7'sd2, 7'sd2, -7'sd1, 
													 7'sd0, -7'sd1, -7'sd1, -7'sd1, 7'sd0};
                               
		expected_clarity_kernels[2] = '{7'sd0, 7'sd0, 7'sd0, 7'sd0, 7'sd0, // expected clear image
												 7'sd0, 7'sd0, 7'sd0, 7'sd0, 7'sd0,
												 7'sd0, 7'sd0, 7'sd1, 7'sd0, 7'sd0,
												 7'sd0, 7'sd0, 7'sd0, 7'sd0, 7'sd0,
												 7'sd0, 7'sd0, 7'sd0, 7'sd0, 7'sd0};
												 
		expected_clarity_kernels[1] = '{7'sd1, 7'sd1, 7'sd1, 7'sd1, 7'sd1, // expected slight blur
												 7'sd1, 7'sd3, 7'sd3, 7'sd3, 7'sd1,
												 7'sd1, 7'sd3, 7'sd41, 7'sd3, 7'sd1,
												 7'sd1, 7'sd3, 7'sd3, 7'sd3, 7'sd1,
												 7'sd1, 7'sd1, 7'sd1, 7'sd1, 7'sd1};
												 
		expected_clarity_kernels[0] = '{7'sd1, 7'sd4, 7'sd7, 7'sd4, 7'sd1, // expected significant blur
												 7'sd4, 7'sd16, 7'sd26, 7'sd16, 7'sd4,
												 7'sd7, 7'sd26, 7'sd41, 7'sd26, 7'sd7,
												 7'sd4, 7'sd16, 7'sd26, 7'sd16, 7'sd4,
												 7'sd1, 7'sd4, 7'sd7, 7'sd4, 7'sd1};
												 
		expected_sobel_kernels[3] = '{-7'sd2, -7'sd1, 7'sd0, 7'sd1, 7'sd2,  // right sobel -2
												-7'sd4, -7'sd2, 7'sd0, 7'sd2, 7'sd4, 
												-7'sd8, -7'sd4, 7'sd0, 7'sd4, 7'sd8, 
												-7'sd4, -7'sd2, 7'sd0, 7'sd2, 7'sd4, 
												-7'sd2, -7'sd1, 7'sd0, 7'sd1, 7'sd2};
												
		expected_sobel_kernels[2] = '{-7'sd2, -7'sd4, -7'sd8, -7'sd4, -7'sd2,  // bottom sobel -2
												-7'sd1, -7'sd2, -7'sd4, -7'sd2, -7'sd1, 
												7'sd0, 7'sd0, 7'sd0, 7'sd0, 7'sd0, 
												7'sd1, 7'sd2, 7'sd4, 7'sd2, 7'sd1, 
												7'sd2, 7'sd4, 7'sd8, 7'sd4, 7'sd2};
												
		expected_sobel_kernels[1] = '{7'sd2, 7'sd1, 7'sd0, -7'sd1, -7'sd2,  // left sobel 2
												7'sd4, 7'sd2, 7'sd0, -7'sd2, -7'sd4, 
												7'sd8, 7'sd4, 7'sd0, -7'sd4, -7'sd8, 
												7'sd4, 7'sd2, 7'sd0, -7'sd2, -7'sd4, 
												7'sd2, 7'sd1, 7'sd0, -7'sd1, -7'sd2};
												
		expected_sobel_kernels[0] = '{7'sd2, 7'sd4, 7'sd8, 7'sd4, 7'sd2,  // top sobel 2
												7'sd1, 7'sd2, 7'sd4, 7'sd2, 7'sd1, 
												7'sd0, 7'sd0, 7'sd0, 7'sd0, 7'sd0, 
												-7'sd1, -7'sd2, -7'sd4, -7'sd2, -7'sd1, 
												-7'sd2, -7'sd4, -7'sd8, -7'sd4, -7'sd2};

	 end
										 
		
	 
	 
	 initial begin
		clk = 0;
		forever #5 clk = ~clk;
	 end


	initial begin
		$dumpfile("waveform.vcd");
      $dumpvars();
		
		#10;
		filter_number = 0;
		audio_pitch = 0;
		
		#10;
		
		for (int i = 0; i < 5; i++) begin
			#100
			for (int j = 0; j < 25; j++) begin
				assert(curr_kernel[j] == expected_clarity_kernels[1][j]) else $fatal("incorrect index %d, clarity 1", j);
			end
			if (i == 2) begin
				filter_number = 2;
				audio_pitch = 64;
			end
		end
		
		#10;
		
		filter_number = 3;
		
		for (int i = 0; i < 5; i++) begin
			#100
			for (int j = 0; j < 25; j++) begin
				assert(curr_kernel[j] == expected_clarity_kernels[0][j]) else $fatal("incorrect index %d, clarity 0", i);
			end
		end
		
		#10;
		
		audio_pitch = 175;
		
		for (int i = 0; i < 5; i++) begin
			#100
			for (int j = 0; j < 25; j++) begin
				assert(curr_kernel[j] == expected_clarity_kernels[2][j]) else $fatal("incorrect index %d, clarity 2", i);
			end
		end
		
		#10;
		
		filter_number = 4;
		
		for (int i = 0; i < 5; i++) begin
			#100
			for (int j = 0; j < 25; j++) begin
				assert(curr_kernel[j] == expected_sobel_kernels[2][j]) else $fatal("incorrect index %d, sobel 2", i);
			end
		end
		
		#10;
		
		filter_number = 1;
		
		for (int i = 0; i < 5; i++) begin
			#100
			for (int j = 0; j < 25; j++) begin
				assert(curr_kernel[j] == expected_clarity_kernels[1][j]) else $fatal("incorrect index %d, clarity 1", i);
			end
		end
		
		#10;
		
		filter_number = 4;
		
		for (int i = 0; i < 5; i++) begin
			#100
			for (int j = 0; j < 25; j++) begin
				assert(curr_kernel[j] == expected_sobel_kernels[2][j]) else $fatal("incorrect index %d, clarity 2", i);
			end
		end
	
		#10;
		
		filter_number = 3;
		audio_pitch = 200;
		
		for (int i = 0; i < 5; i++) begin
			#100
			for (int j = 0; j < 25; j++) begin
				assert(curr_kernel[j] == expected_clarity_kernels[3][j]) else $fatal("incorrect index %0d, clarity 3", i);
			end
		end
		
		#200
		$finish();
	end
endmodule