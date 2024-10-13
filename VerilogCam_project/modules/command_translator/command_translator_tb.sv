module command_translator_tb;
    // Testbench Signals
    logic clk;
    logic [2:0] direction;
    logic start;
    logic [7:0] ASCII_out;
    logic ready;
    logic [199:0] final_string;   // Max 25 characters

    // Instantiate Module
    command_translator DUT (
        .clk(clk),
        .direction(direction),
        .start(start),
        .ASCII_out(ASCII_out),
        .ready(ready)
    );

    // Clock Generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk; // 100MHz clock
        final_string = 200'b0;
    end

    // Test Procedure
    initial begin
        $dumpfile("waveform.vcd");
        $dumpvars();

        // Initialisation
        direction = 0;
        start = 1;
        #10
        for (int i = 0; i < 25; i++) begin
            if (i == 24) begin
                start = 0;
            end
            #10
            final_string[(i*8) +: 8] = ASCII_out; // Concatenate characters
        end
        assert (final_string == "}5.0:\"R\",5.0:\"L\",1:\"T\"{") else $fatal("Direction 0 JSON failed");    // Direction is reversed
        
        #100
        direction = 7;
        start = 1;
        final_string = 200'b0;
        #20
        for (int i = 0; i < 25; i++) begin
            if (i == 24) begin
                start = 0;
            end
            #10
            final_string[(i*8) +: 8] = ASCII_out; // Concatenate characters
        end
        assert (final_string == "{\"T\":0,\"L\":0.0,\"R\":0.0}") else $fatal("Default JSON failed");

        #200        

        $finish();
    end
endmodule