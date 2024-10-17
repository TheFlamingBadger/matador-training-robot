module command_translator_tb;
    // Testbench Signals
    logic           clk;
    logic [2:0]     command;
    logic 		    valid;
    logic [7:0]     ascii_out;
    logic           tx_ready;
    logic [199:0]   final_string;   // Max 23 characters

    // Instantiate Module
    command_translator DUT (
        .clk(clk),
        .command(command),
        .valid(valid),
        .ascii_out(ascii_out),
        .tx_ready(tx_ready)
    );

    // Clock Generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk; // 100MHz clock
    end

    // Test Procedure
    initial begin
        $dumpfile("waveform.vcd");
        $dumpvars();

        // NORMAL OPERATION
        valid = 1;
        final_string = 200'b0;
        command = 0;
        #15
        for (int j = 0; j < 25; j++) begin
            #10
            if (tx_ready) begin
                final_string[(j*8) +: 8] = ascii_out; // Concatenate characters
            end
        end
        assert (final_string == "}05.0:\"R\",05.0:\"L\",1:\"T\"{") else $fatal("command 0 JSON failed");    // command is reversed
        
        final_string = 200'b0;
        command = 1;
        #15
        for (int j = 0; j < 25; j++) begin
            #10
            if (tx_ready) begin
                final_string[(j*8) +: 8] = ascii_out;   // Concatenate characters
            end
        end
        assert (final_string == "}00.0:\"R\",00.0:\"L\",0:\"T\"{") else $fatal("Default JSON failed");

        #5
        // TRANSMISSION INTERRUPTED BY CHANGE IN COMMAND
        final_string = 200'b0;
        command = 0;
        #15
        for (int j = 0; j < 25; j++) begin
            #10
            if (tx_ready) begin
                final_string[(j*8) +: 8] = ascii_out; // Concatenate characters
            end
            if (j == 20) begin
                command = 1;                            
            end
        end
        assert (final_string == "}05.0:\"R\",05.0:\"L\",1:\"T\"{") else $fatal("command 0 JSON failed");

        #10      

        $finish();
    end
endmodule