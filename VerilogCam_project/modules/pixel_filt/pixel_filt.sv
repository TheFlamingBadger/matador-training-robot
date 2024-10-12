module pixel_filt #(parameter W = 6, W_FRAC = 3) (
    input clk,
    input [2:0] filter_number,
    input [15:0] audio_pitch,   
    output wire [5:0] r_mod,
    output wire [5:0] g_mod,
    output wire [5:0] b_mod,
	 output wire 	  div_flag
);

    logic [2:0] range; 
	logic [31:0] temp_range;
	 logic [5:0] temp_r_mod;
	 logic [5:0] temp_g_mod;
	 logic [5:0] temp_b_mod;
	 logic temp_div_flag;

	 assign div_flag = temp_div_flag;
	 assign r_mod = temp_r_mod;
	 assign g_mod = temp_g_mod;
	 assign b_mod = temp_b_mod;

    always_ff @(posedge clk) begin : modifier_setting        
        // Range Calculation
		temp_range = (32'(audio_pitch) - (32'(audio_pitch)%32'd43))/43;
        range = temp_range[2:0]; 

        // Change Filter 
		  if (filter_number == 1) begin
				 // Brightness
				 
				 if (range == 0) begin
					 temp_div_flag <= 0;
					 temp_r_mod <= 0;
					 temp_g_mod <= 0;
					 temp_b_mod <= 0;
				 end
				 else if (range == 1) begin
					 temp_div_flag <= 1;
					 temp_r_mod <= 4;
					 temp_g_mod <= 4;
					 temp_b_mod <= 4;
				 end
				 else if (range == 2) begin
					 temp_div_flag <= 1;
					 temp_r_mod <= 2;
					 temp_g_mod <= 2;
					 temp_b_mod <= 2;
				 end
				 else if (range == 3) begin
					 temp_div_flag <= 0;
					 temp_r_mod <= 1;
					 temp_g_mod <= 1;
					 temp_b_mod <= 1;
				 end
				 else if (range == 4) begin
					 temp_div_flag <= 0;
					 temp_r_mod <= 2;
					 temp_g_mod <= 2;
					 temp_b_mod <= 2;
				 end
				 else if (range == 5) begin
					 temp_div_flag <= 0;
					 temp_r_mod <= 4;
					 temp_g_mod <= 4;
					 temp_b_mod <= 4;
				 end
				 else begin
					 temp_div_flag <= 0;
					 temp_r_mod <= 1;
					 temp_g_mod <= 1;
					 temp_b_mod <= 1;
				 end
		  end
		  else if (filter_number == 2) 	begin
				 // Police Siren

				 temp_div_flag <= 0;
				 if (range > 2) begin
					  temp_r_mod <= 1;
					  temp_g_mod <= 0;
					  temp_b_mod <= 0;
				 end
				 else begin
					  temp_r_mod <= 0;
					  temp_g_mod <= 0;
					  temp_b_mod <= 1;
				 end
		  end
        else begin
             // No filter

				 temp_div_flag <= 0;
             temp_r_mod <= 1;
             temp_g_mod <= 1;
             temp_b_mod <= 1;
        end
    end

endmodule
