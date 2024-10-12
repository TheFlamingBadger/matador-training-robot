module convolution_filt #(parameter W = 6, W_FRAC = 3) (
    input clk,
    input [2:0] filter_number,
    input [15:0] audio_pitch,   
    output logic signed [6:0] curr_kernel [24:0]
);

	 logic [2:0] locater;
	 logic signed [6:0] temp_kernel [24:0];
	 
//	 logic signed [6:0] clarity_kernels [99:0] = '{-6'sd1, -6'sd1, -6'sd1, -6'sd1, -6'sd1, //sharpen
//															  -6'sd1, -6'sd1, -6'sd1, -6'sd1, -6'sd1, 
//															  -6'sd1, -6'sd1, 6'sd25, -6'sd1, -6'sd1, 
//															  -6'sd1, -6'sd1, -6'sd1, -6'sd1, -6'sd1, 
//															  -6'sd1, -6'sd1, -6'sd1, -6'sd1, -6'sd1,
//															  
//															  6'sd0, 6'sd0, 6'sd0, 6'sd0, 6'sd0, //clear image
//															  6'sd0, 6'sd0, 6'sd0, 6'sd0, 6'sd0, 
//															  6'sd0, 6'sd0, 6'sd1, 6'sd0, 6'sd0, 
//															  6'sd0, 6'sd0, 6'sd0, 6'sd0, 6'sd0, 
//															  6'sd0, 6'sd0, 6'sd0, 6'sd0, 6'sd0,
//															  
//															  6'sd1, 6'sd1, 6'sd1, 6'sd1, 6'sd1, //slight blur
//															  6'sd1, 6'sd3, 6'sd3, 6'sd3, 6'sd1, 
//															  6'sd1, 6'sd3, 6'sd41, 6'sd3, 6'sd1, 
//															  6'sd1, 6'sd3, 6'sd3, 6'sd3, 6'sd1, 
//															  6'sd1, 6'sd1, 6'sd1, 6'sd1, 6'sd1,															  
//														 
//															  6'sd1, 6'sd4, 6'sd7, 6'sd4, 6'sd1, //significant blur
//															  6'sd4, 6'sd16, 6'sd26, 6'sd16, 6'sd4, 
//															  6'sd7, 6'sd26, 6'sd41, 6'sd26, 6'sd7, 
//															  6'sd4, 6'sd16, 6'sd26, 6'sd16, 6'sd4, 
//															  6'sd1, 6'sd4, 6'sd7, 6'sd4, 6'sd1
//															  };

//	 logic signed [6:0] sobel_kernels [99:0] = '{-6'sd2, -6'sd1, 6'sd0, 6'sd1, 6'sd2, //right sobel
//															  -6'sd4, -6'sd2, 6'sd0, 6'sd2, 6'sd4, 
//															  -6'sd8, -6'sd4, 6'sd0, 6'sd4, 6'sd8, 
//															  -6'sd4, -6'sd2, 6'sd0, 6'sd2, 6'sd4, 
//															  -6'sd2, -6'sd1, 6'sd0, 6'sd1, 6'sd2,  
//															  
//															  -6'sd2, -6'sd4, -6'sd8, -6'sd4, -6'sd2, //bottom sobel
//															  -6'sd1, -6'sd2, -6'sd4, -6'sd2, -6'sd1, 
//															  6'sd0, 6'sd0, 6'sd0, 6'sd0, 6'sd0, 
//															  6'sd1, 6'sd2, 6'sd4, 6'sd2, 6'sd1, 
//															  6'sd2, 6'sd4, 6'sd8, 6'sd4, 6'sd2,
//															  
//															  6'sd2, 6'sd1, 6'sd0, -6'sd1, -6'sd2, //left sobel
//															  6'sd4, 6'sd2, 6'sd0, -6'sd2, -6'sd4, 
//															  6'sd8, 6'sd4, 6'sd0, -6'sd4, -6'sd8, 
//															  6'sd4, 6'sd2, 6'sd0, -6'sd2, -6'sd4, 
//															  6'sd2, 6'sd1, 6'sd0, -6'sd1, -6'sd2,
//															  
//															  6'sd2, 6'sd4, 6'sd8, 6'sd4, 6'sd2, // top sobel
//															  6'sd1, 6'sd2, 6'sd4, 6'sd2, 6'sd1,
//															  6'sd0, 6'sd0, 6'sd0, 6'sd0, 6'sd0,
//															  -6'sd1, -6'sd2, -6'sd4, -6'sd2, -6'sd1,
//															  -6'sd2, -6'sd4, -6'sd8, -6'sd4, -6'sd2
//															  };

	 logic signed [6:0] clarity_kernels [3:0][24:0] = '{
															
															  '{7'sd0, -7'sd1, -7'sd1, -7'sd1, 7'sd0, //sharpen
															    -7'sd1, 7'sd2, 7'sd2, 7'sd2, -7'sd1, 
															    -7'sd1, 7'sd2, 7'sd8, 7'sd2, -7'sd1, 
															    -7'sd1, 7'sd2, 7'sd2, 7'sd2, -7'sd1, 
															    7'sd0, -7'sd1, -7'sd1, -7'sd1, 7'sd0},
																 
															  '{7'sd0, 7'sd0, 7'sd0, 7'sd0, 7'sd0, //clear image
															    7'sd0, 7'sd0, 7'sd0, 7'sd0, 7'sd0, 
															    7'sd0, 7'sd0, 7'sd1, 7'sd0, 7'sd0, 
															    7'sd0, 7'sd0, 7'sd0, 7'sd0, 7'sd0, 
															    7'sd0, 7'sd0, 7'sd0, 7'sd0, 7'sd0},
															   
															  '{7'sd1, 7'sd1, 7'sd1, 7'sd1, 7'sd1, //slight blur
															    7'sd1, 7'sd3, 7'sd3, 7'sd3, 7'sd1, 
															    7'sd1, 7'sd3, 7'sd41, 7'sd3, 7'sd1, 
															    7'sd1, 7'sd3, 7'sd3, 7'sd3, 7'sd1, 
															    7'sd1, 7'sd1, 7'sd1, 7'sd1, 7'sd1},															  
														   
															  '{7'sd1, 7'sd4, 7'sd7, 7'sd4, 7'sd1, //significant blur
															    7'sd4, 7'sd16, 7'sd26, 7'sd16, 7'sd4, 
															    7'sd7, 7'sd26, 7'sd41, 7'sd26, 7'sd7, 
															    7'sd4, 7'sd16, 7'sd26, 7'sd16, 7'sd4, 
															    7'sd1, 7'sd4, 7'sd7, 7'sd4, 7'sd1}
															  };
															  
															  
	 logic signed [6:0] sobel_kernels [3:0][24:0] = '{
															'{-7'sd2, -7'sd1, 7'sd0, 7'sd1, 7'sd2, //right sobel
															  -7'sd4, -7'sd2, 7'sd0, 7'sd2, 7'sd4, 
															  -7'sd8, -7'sd4, 7'sd0, 7'sd4, 7'sd8, 
															  -7'sd4, -7'sd2, 7'sd0, 7'sd2, 7'sd4, 
															  -7'sd2, -7'sd1, 7'sd0, 7'sd1, 7'sd2},  
															  
															  '{-7'sd2, -7'sd4, -7'sd8, -7'sd4, -7'sd2, //bottom sobel
															    -7'sd1, -7'sd2, -7'sd4, -7'sd2, -7'sd1, 
															     7'sd0, 7'sd0, 7'sd0, 7'sd0, 7'sd0, 
															     7'sd1, 7'sd2, 7'sd4, 7'sd2, 7'sd1, 
															     7'sd2, 7'sd4, 7'sd8, 7'sd4, 7'sd2},
															  
															  '{7'sd2, 7'sd1, 7'sd0, -7'sd1, -7'sd2, //left sobel
															    7'sd4, 7'sd2, 7'sd0, -7'sd2, -7'sd4, 
															    7'sd8, 7'sd4, 7'sd0, -7'sd4, -7'sd8, 
															    7'sd4, 7'sd2, 7'sd0, -7'sd2, -7'sd4, 
															    7'sd2, 7'sd1, 7'sd0, -7'sd1, -7'sd2},
															  
															  '{7'sd2, 7'sd4, 7'sd8, 7'sd4, 7'sd2, // top sobel
															    7'sd1, 7'sd2, 7'sd4, 7'sd2, 7'sd1,
															    7'sd0, 7'sd0, 7'sd0, 7'sd0, 7'sd0,
															   -7'sd1, -7'sd2, -7'sd4, -7'sd2, -7'sd1,
															   -7'sd2, -7'sd4, -7'sd8, -7'sd4, -7'sd2}
															  };
	 
//															  6'sd0, 6'sd0, 6'sd0, 6'sd0, 6'sd0, 
//															  6'sd0, -6'sd1, -6'sd1, -6'sd1, 6'sd0, 
//															  6'sd0, -6'sd1, 6'sd8, -6'sd1, 6'sd0, 
//															  6'sd0, -6'sd1, -6'sd1, -6'sd1, 6'sd0, 
//															  6'sd0, 6'sd0, 6'sd0, 6'sd0, 6'sd0,
															  
															  
//															  6'sd1, 6'sd1, 6'sd1, 6'sd1, 6'sd1,
//															  6'sd1, 6'sd1, 6'sd1, 6'sd1, 6'sd1, 
//															  6'sd1, 6'sd1, 6'sd1, 6'sd1, 6'sd1, 
//															  6'sd1, 6'sd1, 6'sd1, 6'sd1, 6'sd1, 
//															  6'sd1, 6'sd1, 6'sd1, 6'sd1, 6'sd1,
//															  };

    always_ff @(posedge clk) begin : determine_kernel        

		  if (filter_number < 3) begin
			   for (int i = 0; i < 25; ++i) begin
					temp_kernel[i] <= clarity_kernels[1][i];
		      end
		  end
		  else begin
			  if (audio_pitch <  65) begin
				  locater <= 0;
			  end
			  else if (audio_pitch < 130) begin
				  locater <= 1;
			  end
			  else if (audio_pitch < 199) begin
				  locater <= 2;
			  end
			  else begin
				  locater <= 3;
			  end
			  
			  if (filter_number == 3) begin
				  for (int i = 0; i < 25; ++i) begin
					  temp_kernel[i] <= clarity_kernels[locater][i];
		        end
			  end
			  else if (filter_number == 4) begin
				  for (int i = 0; i < 25; ++i) begin
					  temp_kernel[i] <= sobel_kernels[locater][i];
		        end
			  end
		  end
    end
	 
	 always_comb begin
		for (int i = 0; i < 25; i++) begin
			curr_kernel[i] = temp_kernel[i];
		end
	 end
	 
endmodule
