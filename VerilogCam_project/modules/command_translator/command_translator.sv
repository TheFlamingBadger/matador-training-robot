module command_translator (
    input 		        clk,
    input        [2:0]  command,
    input 		        valid,
    output logic [7:0]  ascii_out,	// ASCII output for UART transmission
    output logic        tx_ready,
    output logic        rx_ready
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

        if (valid) begin
            // Command has changed. Ready for transmission.
            tx_ready <= 1;                      // Set tx_ready to 1 to indicate to UART that module is ready to transmit json
            rx_ready <= 0;                      // Set rx_ready to 0 to indicate to Drive Logic that module is not ready to receive command
            i <= 0;                             // Reset index for the new transmission
        end
        else if (tx_ready) begin
            // Transmission
            if (i < 25 - 1) begin
                ascii_out <= json_command[i];   // Send next ASCII character	 
                i <= i + 1;                     // Increment index to send the next character
            end
            else begin
                tx_ready <= 0;                  // Set tx_ready to 0 to indicate to UART that module is not transmitting json
            end
        end
        else begin
            // Polling for command
            rx_ready <= 1;                      // Set rx_ready to 1 to indicate to Drive Logic that module is ready to receive new command
        end
        
    end

endmodule