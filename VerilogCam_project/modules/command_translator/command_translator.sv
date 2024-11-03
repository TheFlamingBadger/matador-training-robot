module command_translator (
    input           clk,
    input     [2:0] command,
	 input 	  [2:0] difficulty,
    input           valid,
	 input 			  uart_ready,
    output logic [7:0] ascii_out,  // ASCII output for UART transmission
    output logic      cmd_ready
);
    // Define a fixed-size byte array to hold the JSON command
    logic [7:0] json_command[0:27];  // Adjust size as needed
    int command_length;

    always_comb begin
//		if (ready) begin
			// Construct JSON string based on command
			case(command)
				 3'd0: begin
					  // Stop - {"T":0,"L":00.00,"R":00.00}
					  json_command = '{8'h7b, 8'h22, 8'h54, 8'h22, 8'h3a, 8'h30, 8'h2c, 8'h22, 8'h4c, 8'h22, 8'h3a, 8'h30, 8'h30, 8'h2e, 8'h30, 8'h30, 8'h2c, 8'h22, 8'h52, 8'h22, 8'h3a, 8'h30, 8'h30, 8'h2e, 8'h30, 8'h30, 8'h7d, 8'h0a};
				 end
				 3'd1: begin
					  // Turn Left
					  case(difficulty)
							// Easy - {"T":1,"L":-0.10,"R":00.10}
							3'd1: json_command = '{8'h7b, 8'h22, 8'h54, 8'h22, 8'h3a, 8'h31, 8'h2c, 8'h22, 8'h4c, 8'h22, 8'h3a, 8'h2d, 8'h30, 8'h2e, 8'h31, 8'h30, 8'h2c, 8'h22, 8'h52, 8'h22, 8'h3a, 8'h30, 8'h30, 8'h2e, 8'h31, 8'h30, 8'h7d, 8'h0a};
							// Medium - {"T":1,"L":-0.30,"R":00.30}
							3'd2: json_command = '{8'h7b, 8'h22, 8'h54, 8'h22, 8'h3a, 8'h31, 8'h2c, 8'h22, 8'h4c, 8'h22, 8'h3a, 8'h2d, 8'h30, 8'h2e, 8'h33, 8'h30, 8'h2c, 8'h22, 8'h52, 8'h22, 8'h3a, 8'h30, 8'h30, 8'h2e, 8'h33, 8'h30, 8'h7d, 8'h0a};
							// Hard - {"T":1,"L":-0.30,"R":00.30}
							3'd3: json_command = '{8'h7b, 8'h22, 8'h54, 8'h22, 8'h3a, 8'h31, 8'h2c, 8'h22, 8'h4c, 8'h22, 8'h3a, 8'h2d, 8'h30, 8'h2e, 8'h33, 8'h30, 8'h2c, 8'h22, 8'h52, 8'h22, 8'h3a, 8'h30, 8'h30, 8'h2e, 8'h33, 8'h30, 8'h7d, 8'h0a};
					  endcase
				 end
				 3'd2: begin
				     // Left
					  case(difficulty)
							// Easy - {"T":1,"L":-0.10,"R":-0.05}
					      3'd1: json_command = '{8'h7b, 8'h22, 8'h54, 8'h22, 8'h3a, 8'h31, 8'h2c, 8'h22, 8'h4c, 8'h22, 8'h3a, 8'h2d, 8'h30, 8'h2e, 8'h31, 8'h30, 8'h2c, 8'h22, 8'h52, 8'h22, 8'h3a, 8'h2d, 8'h30, 8'h2e, 8'h30, 8'h35, 8'h7d, 8'h0a};
							// Medium - {"T":1,"L":-0.20,"R":-0.10}
							3'd2: json_command = '{8'h7b, 8'h22, 8'h54, 8'h22, 8'h3a, 8'h31, 8'h2c, 8'h22, 8'h4c, 8'h22, 8'h3a, 8'h2d, 8'h30, 8'h2e, 8'h32, 8'h30, 8'h2c, 8'h22, 8'h52, 8'h22, 8'h3a, 8'h2d, 8'h30, 8'h2e, 8'h31, 8'h30, 8'h7d, 8'h0a}; 
							// Hard - {"T":1,"L":-0.30,"R":-0.15}
							3'd3: json_command = '{8'h7b, 8'h22, 8'h54, 8'h22, 8'h3a, 8'h31, 8'h2c, 8'h22, 8'h4c, 8'h22, 8'h3a, 8'h2d, 8'h30, 8'h2e, 8'h33, 8'h30, 8'h2c, 8'h22, 8'h52, 8'h22, 8'h3a, 8'h2d, 8'h30, 8'h2e, 8'h31, 8'h35, 8'h7d, 8'h0a}; 
					  endcase
				 end
				 3'd3: begin
				     // Straight
					  case(difficulty)
							// Easy - {"T":1,"L":-0.10,"R":-0.10}
							3'd1: json_command = '{8'h7b, 8'h22, 8'h54, 8'h22, 8'h3a, 8'h31, 8'h2c, 8'h22, 8'h4c, 8'h22, 8'h3a, 8'h2d, 8'h30, 8'h2e, 8'h31, 8'h30, 8'h2c, 8'h22, 8'h52, 8'h22, 8'h3a, 8'h2d, 8'h30, 8'h2e, 8'h31, 8'h30, 8'h7d, 8'h0a}; 
							// Medium - {"T":1,"L":-0.30,"R":-0.30}
							3'd2: json_command = '{8'h7b, 8'h22, 8'h54, 8'h22, 8'h3a, 8'h31, 8'h2c, 8'h22, 8'h4c, 8'h22, 8'h3a, 8'h2d, 8'h30, 8'h2e, 8'h33, 8'h30, 8'h2c, 8'h22, 8'h52, 8'h22, 8'h3a, 8'h2d, 8'h30, 8'h2e, 8'h33, 8'h30, 8'h7d, 8'h0a}; 
							// Hard - {"T":1,"L":-0.50,"R":-0.50}
							3'd3: json_command = '{8'h7b, 8'h22, 8'h54, 8'h22, 8'h3a, 8'h31, 8'h2c, 8'h22, 8'h4c, 8'h22, 8'h3a, 8'h2d, 8'h30, 8'h2e, 8'h35, 8'h30, 8'h2c, 8'h22, 8'h52, 8'h22, 8'h3a, 8'h2d, 8'h30, 8'h2e, 8'h35, 8'h30, 8'h7d, 8'h0a}; 
					  endcase
				 end
				 3'd4: begin
				     // Right
					  case(difficulty)
							// Easy - {"T":1,"L":-0.05,"R":-0.10}
					      3'd1: json_command = '{8'h7b, 8'h22, 8'h54, 8'h22, 8'h3a, 8'h31, 8'h2c, 8'h22, 8'h4c, 8'h22, 8'h3a, 8'h2d, 8'h30, 8'h2e, 8'h30, 8'h35, 8'h2c, 8'h22, 8'h52, 8'h22, 8'h3a, 8'h2d, 8'h30, 8'h2e, 8'h31, 8'h30, 8'h7d, 8'h0a};
							// Medium - {"T":1,"L":-0.10,"R":-0.20}
							3'd2: json_command = '{8'h7b, 8'h22, 8'h54, 8'h22, 8'h3a, 8'h31, 8'h2c, 8'h22, 8'h4c, 8'h22, 8'h3a, 8'h2d, 8'h30, 8'h2e, 8'h31, 8'h30, 8'h2c, 8'h22, 8'h52, 8'h22, 8'h3a, 8'h2d, 8'h30, 8'h2e, 8'h32, 8'h30, 8'h7d, 8'h0a}; 
							// Hard - {"T":1,"L":-0.15,"R":-0.30}
							3'd3: json_command = '{8'h7b, 8'h22, 8'h54, 8'h22, 8'h3a, 8'h31, 8'h2c, 8'h22, 8'h4c, 8'h22, 8'h3a, 8'h2d, 8'h30, 8'h2e, 8'h31, 8'h35, 8'h2c, 8'h22, 8'h52, 8'h22, 8'h3a, 8'h2d, 8'h30, 8'h2e, 8'h33, 8'h30, 8'h7d, 8'h0a}; 
					  endcase
					 
				 end
				 3'd5: begin
				     // Turn Right
					  case(difficulty)
							// Easy - {"T":1,"L":00.10,"R":-0.10}
							3'd1: json_command = '{8'h7b, 8'h22, 8'h54, 8'h22, 8'h3a, 8'h31, 8'h2c, 8'h22, 8'h4c, 8'h22, 8'h3a, 8'h30, 8'h30, 8'h2e, 8'h31, 8'h30, 8'h2c, 8'h22, 8'h52, 8'h22, 8'h3a, 8'h2d, 8'h30, 8'h2e, 8'h31, 8'h30, 8'h7d, 8'h0a};
							// Medium - {"T":1,"L":00.30,"R":-0.30}
							3'd2: json_command = '{8'h7b, 8'h22, 8'h54, 8'h22, 8'h3a, 8'h31, 8'h2c, 8'h22, 8'h4c, 8'h22, 8'h3a, 8'h30, 8'h30, 8'h2e, 8'h33, 8'h30, 8'h2c, 8'h22, 8'h52, 8'h22, 8'h3a, 8'h2d, 8'h30, 8'h2e, 8'h33, 8'h30, 8'h7d, 8'h0a};
							// Hard - {"T":1,"L":00.30,"R":-0.30}
							3'd3: json_command = '{8'h7b, 8'h22, 8'h54, 8'h22, 8'h3a, 8'h31, 8'h2c, 8'h22, 8'h4c, 8'h22, 8'h3a, 8'h30, 8'h30, 8'h2e, 8'h33, 8'h30, 8'h2c, 8'h22, 8'h52, 8'h22, 8'h3a, 8'h2d, 8'h30, 8'h2e, 8'h33, 8'h30, 8'h7d, 8'h0a};
					  endcase
				 end
				 default: begin
				     // Stop - {"T":0,"L":00.00,"R":00.00}
					  json_command = '{8'h7b, 8'h22, 8'h54, 8'h22, 8'h3a, 8'h30, 8'h2c, 8'h22, 8'h4c, 8'h22, 8'h3a, 8'h30, 8'h30, 8'h2e, 8'h30, 8'h30, 8'h2c, 8'h22, 8'h52, 8'h22, 8'h3a, 8'h30, 8'h30, 8'h2e, 8'h30, 8'h30, 8'h7d, 8'h0a};
				 end
			endcase
			command_length = 28;  // Total length of the command
//		end
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
