module command_translator (
    input           clk,
    input     [2:0] command,
    input           valid,
    output logic [7:0] ascii_out,  // ASCII output for UART transmission
    output logic      cmd_ready
);
    // Define a fixed-size byte array to hold the JSON command
    logic [7:0] json_command[0:26];  // Adjust size as needed
    int command_length;

    always_comb begin 
        // Construct JSON string based on command
			case(command)
				 3'd0: begin
					  // STOP
					  json_command = '{"{", "\"", "T", "\"", ":", "0", ",", "\"", "L", "\"", ":", "0", "0", ".", "0", "0", ",", "\"", "R", "\"", ":", "0", "0", ".", "0", "0", "}"};
				 end
				 3'd1: begin
				     // Fast Left
					  json_command = '{"{", "\"", "T", "\"", ":", "1", ",", "\"", "L", "\"", ":", "-", "0", ".", "5", "0", ",", "\"", "R", "\"", ":", "0", "0", ".", "5", "0", "}"};
				 end
				 3'd2: begin
				     // Left
					  json_command = '{"{", "\"", "T", "\"", ":", "1", ",", "\"", "L", "\"", ":", "-", "0", ".", "2", "5", ",", "\"", "R", "\"", ":", "0", "0", ".", "2", "5", "}"};
				 end
				 3'd3: begin
				     // Straight
					  json_command = '{"{", "\"", "T", "\"", ":", "1", ",", "\"", "L", "\"", ":", "0", "0", ".", "5", "0", ",", "\"", "R", "\"", ":", "0", "0", ".", "5", "0", "}"};
				 end
				 3'd4: begin
				     // Right
					  json_command = '{"{", "\"", "T", "\"", ":", "1", ",", "\"", "L", "\"", ":", "0", "0", ".", "2", "5", ",", "\"", "R", "\"", ":", "-", "0", ".", "2", "5", "}"};
				 end
				 3'd5: begin
				     // Hard Right
					  json_command = '{"{", "\"", "T", "\"", ":", "1", ",", "\"", "L", "\"", ":", "0", "0", ".", "5", "0", ",", "\"", "R", "\"", ":", "-", "0", ".", "5", "0", "}"};
				 end
				 default: begin
				     // STOP
					  json_command = '{"{", "\"", "T", "\"", ":", "0", ",", "\"", "L", "\"", ":", "0", "0", ".", "0", "0", ",", "\"", "R", "\"", ":", "0", "0", ".", "0", "0", "}"};
				 end
			endcase
			command_length = 27;  // Total length of the command
    end

    int i = 0;
    logic ready = 1;

    always_ff @(posedge clk) begin
        if (valid && ready) begin // Command has changed. Ready for transmission.
            cmd_ready <= 1;                      // Assert cmd_ready to 1 to indicate to UART that module is ready to transmit json
            ready <= 0;                         // Deassert ready to indicate module is not ready to receive new command
            i <= 0;                             // Reset index for the new transmission
        end else if (cmd_ready) begin
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
