module command_translator (
    input 		  clk,
    input  [2:0] command,
    input 		  valid,
    output [7:0] ascii_out,	// ASCII output for UART transmission
    output 		  ready
);
    string json_command;    	// To construct JSON string

    always_comb begin 
        // Construct JSON string based on command
        case(command)
            0:          json_command = "{\"T\":1,\"L\":0.5,\"R\":0.5}";
            default:    json_command = "{\"T\":0,\"L\":0.0,\"R\":0.0}";
        endcase
    end

    int i = 0;

    always_ff @(posedge clk) begin
	 
        // Logic for character by character UART transmission
        if (ready) begin
		  
            // Continue sending characters
            if (i < 25 - 1) begin
				
                i <= i + 1;                     // Increment index to send the next character
                ascii_out <= json_command[i];   // Send next ASCII character
					 
            end
            else begin
				
                ready <= 0;                     // Set ready to 0 after transmission complete
					 
            end
        end
        else if (valid) begin
		  
            // Valid transmission when tx_ready is low
            ready <= 1;                         // Set ready to indicate transmission is validing
            i <= 0;                             // Reset index for the new transmission
            ascii_out <= json_command[i];       // Send the first ASCII character
				
        end
    end

endmodule