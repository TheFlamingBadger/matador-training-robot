module command_translator_tb;
    // Testbench Signals
    logic           clk;
    logic [2:0]     command;
    logic [2:0]     difficulty;
    logic 		    valid;
    logic           uart_ready;
    logic [7:0]     ascii_out;
    logic           cmd_ready;
    logic [223:0]   final_string;   // Max 28 characters
    logic [223:0]   expected_final_string;   // Max 28 characters

    // Instantiate Module
    command_translator DUT (
        .clk(clk),
        .command(command),
        .difficulty(difficulty),
        .valid(valid),
        .uart_ready(uart_ready),
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
        uart_ready = 1;
        final_string = 224'b0;
        expected_final_string = {8'h0a, 8'h7d, 8'h30, 8'h30, 8'h2e, 8'h30, 8'h30, 8'h3a, 8'h22, 8'h52, 8'h22, 8'h2c, 8'h30, 8'h30, 8'h2e, 8'h30, 8'h30, 8'h3a, 8'h22, 8'h4c, 8'h22, 8'h2c, 8'h30, 8'h3a, 8'h22, 8'h54, 8'h22, 8'h7b};
        command = 0;
        difficulty = 1;
        #5
        for (int j = 0; j < 28; j++) begin
            #10
            if (cmd_ready) begin
                final_string[(j*8) +: 8] = ascii_out; // Concatenate characters
            end
        end
        assert (final_string == expected_final_string) else $fatal("command 0 JSON failed");

        #5
        
        // CHANGE COMMAND
        final_string = 224'b0;
        expected_final_string = {8'h0a, 8'h7d, 8'h35, 8'h30, 8'h2e, 8'h30, 8'h2d, 8'h3a, 8'h22, 8'h52, 8'h22, 8'h2c, 8'h30, 8'h31, 8'h2e, 8'h30, 8'h2d, 8'h3a, 8'h22, 8'h4c, 8'h22, 8'h2c, 8'h31, 8'h3a, 8'h22, 8'h54, 8'h22, 8'h7b};
        command = 2;
        difficulty = 1;
        #5
        for (int j = 0; j < 28; j++) begin
            #10
            if (cmd_ready) begin
                final_string[(j*8) +: 8] = ascii_out; // Concatenate characters
            end
        end
        assert (final_string == expected_final_string) else $fatal("change to command 2 JSON failed");

        #5

        // DIFFERENT DIFFICULTY
        final_string = 224'b0;
        expected_final_string = {8'h0a, 8'h7d, 8'h35, 8'h31, 8'h2e, 8'h30, 8'h2d, 8'h3a, 8'h22, 8'h52, 8'h22, 8'h2c, 8'h30, 8'h33, 8'h2e, 8'h30, 8'h2d, 8'h3a, 8'h22, 8'h4c, 8'h22, 8'h2c, 8'h31, 8'h3a, 8'h22, 8'h54, 8'h22, 8'h7b};
        command = 2;
        difficulty = 3;
        #5
        for (int j = 0; j < 28; j++) begin
            #10
            if (cmd_ready) begin
                final_string[(j*8) +: 8] = ascii_out; // Concatenate characters
            end
        end
        assert (final_string == expected_final_string) else $fatal("change to difficulty 3 JSON failed");

        #5

        // DEFAULTING OPERATION FOR UNKNOWN COMMAND
        final_string = 224'b0;
        expected_final_string = {8'h0a, 8'h7d, 8'h30, 8'h30, 8'h2e, 8'h30, 8'h30, 8'h3a, 8'h22, 8'h52, 8'h22, 8'h2c, 8'h30, 8'h30, 8'h2e, 8'h30, 8'h30, 8'h3a, 8'h22, 8'h4c, 8'h22, 8'h2c, 8'h30, 8'h3a, 8'h22, 8'h54, 8'h22, 8'h7b};
        command = 7;
        difficulty = 1;
        #5
        for (int j = 0; j < 28; j++) begin
            #10
            if (cmd_ready) begin
                final_string[(j*8) +: 8] = ascii_out;   // Concatenate characters
            end
        end
        assert (final_string == expected_final_string) else $fatal("Default JSON failed");
        
        #5

        // TRANSMISSION INTERRUPTED BY CHANGE IN COMMAND
        final_string = 224'b0;
        expected_final_string = {8'h0a, 8'h7d, 8'h30, 8'h33, 8'h2e, 8'h30, 8'h2d, 8'h3a, 8'h22, 8'h52, 8'h22, 8'h2c, 8'h30, 8'h33, 8'h2e, 8'h30, 8'h2d, 8'h3a, 8'h22, 8'h4c, 8'h22, 8'h2c, 8'h31, 8'h3a, 8'h22, 8'h54, 8'h22, 8'h7b};
        command = 3;
        difficulty = 2;
        #5
        for (int j = 0; j < 28; j++) begin
            #10
            if (cmd_ready) begin
                final_string[(j*8) +: 8] = ascii_out; // Concatenate characters
            end
            if (j == 20) begin
                command = 1;                            
            end
        end
        assert (final_string == expected_final_string) else $fatal("command interrupt JSON failed");

        #10      

        $finish();
    end
endmodule