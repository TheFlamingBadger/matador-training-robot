module command_translator (
    input           			clk,
    input     		[5:0] 	left_speed, // 0-50 left speed (maps to 0-0.5)
	 input     		[5:0] 	right_speed,// 0-50 right speed (maps to 0-0.5)
    input           			valid,
	 input 			  			uart_ready,
    output logic 	[7:0] 	ascii_out,  // ASCII output for UART transmission
    output logic      		cmd_ready
);
    // Define a fixed-size byte array to hold the JSON command
    int 			 command_length = 28;
	 logic [7:0] json_command [0:27];
	 
	 logic [7:0] left_hundreths;
	 logic [7:0] right_hundreths;
	 logic [7:0] left_tenths;
	 logic [7:0] right_tenths;
	 
	 localparam L_TENTH_INDEX 		= 14;
	 localparam L_HUNDREDTHS_INDEX 	= 15;
	 localparam R_TENTH_INDEX 		= 23;
	 localparam R_HUNDREDTHS_INDEX	= 24;
	 localparam _NEW_LINE = 8'h0a;

    always_comb begin
	 
		  // Command syntax: {"T":0,"L":00.00,"R":00.00}
			
		  json_command = '{_OPEN_BRACE, _DOUBLE_QUOTE, _T, _DOUBLE_QUOTE, _COLON, _1, _COMMA,
								 _DOUBLE_QUOTE, _L, _DOUBLE_QUOTE, _COLON, _MINUS, _0, _PERIOD, _0, _0, _COMMA,
								 _DOUBLE_QUOTE, _R, _DOUBLE_QUOTE, _COLON, _MINUS, _0, _PERIOD, _0, _0, _CLOSE_BRACE, _NEW_LINE};
	 
        // Construct JSON string based on command
		  left_hundreths  = (left_speed % 10);
		  right_hundreths = (right_speed % 10);
		  left_tenths 	   = (( left_speed - ( left_speed % 10 )) / 10 );
		  right_tenths    = (( right_speed - ( right_speed % 10 )) / 10 );
		  
		  case(left_tenths)
				0: json_command[L_TENTH_INDEX] = _0;
				1: json_command[L_TENTH_INDEX] = _1;
				2: json_command[L_TENTH_INDEX] = _2;
				3: json_command[L_TENTH_INDEX] = _3;
				4: json_command[L_TENTH_INDEX] = _4;
				5: json_command[L_TENTH_INDEX] = _5;
				6: json_command[L_TENTH_INDEX] = _6;
				7: json_command[L_TENTH_INDEX] = _7;
				8: json_command[L_TENTH_INDEX] = _8;
				9: json_command[L_TENTH_INDEX] = _9;
		  endcase
				
		  case(right_tenths)
				0: json_command[R_TENTH_INDEX] = _0;
				1: json_command[R_TENTH_INDEX] = _1;
				2: json_command[R_TENTH_INDEX] = _2;
				3: json_command[R_TENTH_INDEX] = _3;
				4: json_command[R_TENTH_INDEX] = _4;
				5: json_command[R_TENTH_INDEX] = _5;
				6: json_command[R_TENTH_INDEX] = _6;
				7: json_command[R_TENTH_INDEX] = _7;
				8: json_command[R_TENTH_INDEX] = _8;
				9: json_command[R_TENTH_INDEX] = _9;
		  endcase
			
		  case(left_hundreths)
				0: json_command[L_HUNDREDTHS_INDEX] = _0;
				1: json_command[L_HUNDREDTHS_INDEX] = _1;
				2: json_command[L_HUNDREDTHS_INDEX] = _2;
				3: json_command[L_HUNDREDTHS_INDEX] = _3;
				4: json_command[L_HUNDREDTHS_INDEX] = _4;
				5: json_command[L_HUNDREDTHS_INDEX] = _5;
				6: json_command[L_HUNDREDTHS_INDEX] = _6;
				7: json_command[L_HUNDREDTHS_INDEX] = _7;
				8: json_command[L_HUNDREDTHS_INDEX] = _8;
				9: json_command[L_HUNDREDTHS_INDEX] = _9;
		  endcase
			
		  case(right_hundreths)
				0: json_command[R_HUNDREDTHS_INDEX] = _0;
				1: json_command[R_HUNDREDTHS_INDEX] = _1;
				2: json_command[R_HUNDREDTHS_INDEX] = _2;
				3: json_command[R_HUNDREDTHS_INDEX] = _3;
				4: json_command[R_HUNDREDTHS_INDEX] = _4;
				5: json_command[R_HUNDREDTHS_INDEX] = _5;
				6: json_command[R_HUNDREDTHS_INDEX] = _6;
				7: json_command[R_HUNDREDTHS_INDEX] = _7;
				8: json_command[R_HUNDREDTHS_INDEX] = _8;
				9: json_command[R_HUNDREDTHS_INDEX] = _9;
		  endcase
		 
    end

    int i = 0;
    logic ready = 1;

    always_ff @(posedge clk) begin
        if (valid && ready) begin // Command has changed. Ready for transmission.
            cmd_ready <= 1;                      // Assert cmd_ready to 1 to indicate to UART that module is ready to transmit json
            ready <= 0;                         // Deassert ready to indicate module is not ready to receive new command
            i <= 1;                             // Reset index for the new transmission
				ascii_out <= json_command[0];   // Send next ASCII character   
        end else if (cmd_ready && uart_ready) begin
            // Transmission
            if (i < command_length) begin
                ascii_out <= json_command[i];   // Send next ASCII character     
                i <= i + 1;                     // Increment index to send the next character
            end else begin
                cmd_ready <= 0;                  // Set cmd_ready to 0 to indicate to UART that module is not transmitting json
                ascii_out <= 8'b0;              // Terminate transmission
                ready <= 1;                     // Assert ready to indicate to module is ready to receive new command
            end
        end
    end

endmodule
