module command_translator (
    input 		        clk,
    input        [2:0]  command,
    input 		        valid,
    output logic [7:0]  ascii_out,	// ASCII output for UART transmission
    output logic        tx_ready
);
    string json_command;    	    // To construct JSON string
    int command_length;

    always_comb begin 
        // Construct JSON string based on command
        if (valid && ready) begin
            case(command)
            0:          json_command = "{\"T\":1,\"L\":0.50,\"R\":0.50}";
            default:    json_command = "{\"T\":0,\"L\":0.00,\"R\":0.00}";
            endcase
            command_length = json_command.len();
        end
    end

    int i = 0;
    logic ready = 1;

    always_ff @(posedge clk) begin

        if (valid && ready) begin // Command has changed. Ready for transmission.
            tx_ready <= 1;                      // Assert tx_ready to 1 to indicate to UART that module is ready to transmit json
            ready <= 0;                         // Deassert ready to indicate module is not ready to receive new command
            i <= 0;                             // Reset index for the new transmission
        end
        else if (tx_ready) begin
            // Transmission
            if (i < command_length) begin
                ascii_out <= json_command[i];   // Send next ASCII character	 
                i <= i + 1;                     // Increment index to send the next character
            end
            else begin
                tx_ready <= 0;                  // Set tx_ready to 0 to indicate to UART that module is not transmitting json
                ascii_out <= 8'b0;              // Terminate transmission
                ready <= 1;                     // Assert ready to indicate to module is ready to receive new command
            end
        end
        
    end

endmodule