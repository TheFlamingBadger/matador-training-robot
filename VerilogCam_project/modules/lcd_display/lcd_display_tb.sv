module lcd_display_tb;

    // Control & drive logic signals
    logic       clk;
    logic       reset;
    logic [2:0] command;
    logic [4:0] direction;
    logic [7:0] distance;

    // Avalon-MM signals to LCD_Controller slave:
    logic       address;
    logic       chipselect;
    logic       byteenable;
    logic       read;
    logic       write;
    logic       waitrequest;
    logic [7:0] readdata;
    logic [1:0] response;
    logic [7:0] writedata;

    // Testbench variables
    localparam N_INSTRS = 18;
    logic [8:0] instructions [N_INSTRS];

    // Instantiate device under test
    lcd_display dut (
        .clk(clk),
        .reset(reset),
        .command(command),
        .direction(direction),
        .distance(distance),
        .address(address),
        .chipselect(chipselect),
        .byteenable(byteenable),
        .read(read),
        .write(write),
        .waitrequest(waitrequest),
        .readdata(readdata),
        .response(response),
        .writedata(writedata)
    );

    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk; // 100MHz clock
    end

    // Test vectors
    initial begin
        $dumpfile("waveform.vcd"); // File name
        $dumpvars(0, lcd_display_tb); // Select all variables in the current scope
        
        // Initialize state and inputs
        reset = 1;
        command = 0;
        direction = 0;
        distance = 0;

        // Test 1: "Cmd:0 B:00 D:00" outputs for zeroed inputs
        #20
        reset = 0;
        instructions = '{CLEAR_DISPLAY, CURSOR_OFF, _C, _m, _d, _COLON, _0, _SPACE, _B, _COLON, _0, _0, _SPACE, _D, _COLON, _0, _0, _0};
        for( int i=0; i<N_INSTRS; i++) begin
            #10
            assert( {address, writedata} == instructions[i] ) else $fatal("Wrong character asserted: '%c'", writedata); 
        end

        reset = 1;
        command = 3;
        direction = 12;
        distance = 89;

        // Test 2: "Cmd:3 B:12 D:89" outputs for in range values
        #10
        reset = 0;
        instructions = '{CLEAR_DISPLAY, CURSOR_OFF, _C, _m, _d, _COLON, _3, _SPACE, _B, _COLON, _1, _2, _SPACE, _D, _COLON, _0, _8, _9};
        for( int i=0; i<N_INSTRS; i++) begin
            #10
            assert( {address, writedata} == instructions[i] ) else $fatal("Wrong character asserted: '%c'", writedata); 
        end

        reset = 1;
        command = 7;
        direction = 31;
        distance = 255;

        // Test 4: Output of range values as #
        #10
        reset = 0;
        instructions = '{CLEAR_DISPLAY, CURSOR_OFF, _C, _m, _d, _COLON, _HASH, _SPACE, _B, _COLON, _3, _1, _SPACE, _D, _COLON, _2, _5, _5};
        for( int i=0; i<N_INSTRS; i++) begin
            #10
            assert( {address, writedata} == instructions[i] ) else $fatal("Wrong character asserted: '%c'", writedata); 
        end

        #10
        $finish;
    end

endmodule
