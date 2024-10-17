module command_translator_tb;
    // Testbench Signals
    logic           clk;
    logic [2:0]     command;
    logic 		    valid;
    logic [7:0]     ascii_out;
    logic           cmd_ready;
    logic [215:0]   final_string;   // Max 23 characters

    // Instantiate Module
    command_translator DUT (
        .clk(clk),
        .command(command),
        .valid(valid),
        .ascii_out(ascii_out),
        .cmd_ready(cmd_ready)
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
        final_string = 216'b0;
        command = 0;
        #15
        for (int j = 0; j < 27; j++) begin
            #10
            if (cmd_ready) begin
                final_string[(j*8) +: 8] = ascii_out; // Concatenate characters
            end
        end
        assert (final_string == "}00.00:\"R\",00.00:\"L\",0:\"T\"{") else $fatal("command 0 JSON failed");
        // assert (final_string == "}05.00:\"R\",05.00:\"L\",1:\"T\"{") else $fatal("command 0 JSON failed");    // command is reversed
        
        final_string = 216'b0;
        command = 7;
        #15
        for (int j = 0; j < 27; j++) begin
            #10
            if (cmd_ready) begin
                final_string[(j*8) +: 8] = ascii_out;   // Concatenate characters
            end
        end
        assert (final_string == "}00.00:\"R\",00.00:\"L\",0:\"T\"{") else $fatal("Default JSON failed");

        #5
        // TRANSMISSION INTERRUPTED BY CHANGE IN COMMAND
        final_string = 216'b0;
        command = 3;
        #15
        for (int j = 0; j < 27; j++) begin
            #10
            if (cmd_ready) begin
                final_string[(j*8) +: 8] = ascii_out; // Concatenate characters
            end
            if (j == 20) begin
                command = 1;                            
            end
        end
        assert (final_string == "}05.00:\"R\",05.00:\"L\",1:\"T\"{") else $fatal("command 0 JSON failed");

        #10      

        $finish();
    end
endmodule