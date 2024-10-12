module hello_lcd_tb;

    // Testbench signals
    logic        clk;
    logic        reset;
    logic [2:0]  filter_number;
    // Avalon-MM signals to LCD_Controller slave:
    logic        address;
    logic        chipselect;
    logic        byteenable;
    logic        read;
    logic        write;
    logic        waitrequest;
    logic [7:0]  readdata;    // Unused
    logic [1:0]  response;    // Unused
    logic [7:0]  writedata;

    // Instantiate device under test
    hello_lcd dut (
        .clk(clk),
        .reset(reset),
        .filter_number(filter_number),
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
        $dumpfile("a_waveform.vcd"); // File name
        $dumpvars(0, filter_lcd_tb); // Select all variables in the current scope
        
        // Initialize state and inputs
        reset = 1;
        filter_number = 5;
        waitrequest = 0;
        
        // Test 1: Asserts default "Filter: #" correctly

        // Pulse reset
        #20
        reset = 0;
        #20
        assert( {address, writedata} == _F ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'F'.", writedata); 
        #10
        assert( {address, writedata} == _i ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'i'.", writedata); 
        #10
        assert( {address, writedata} == _l ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'l'.", writedata);
        #10
        assert( {address, writedata} == _t ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 't'.", writedata);
        #10
        assert( {address, writedata} == _e ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'e'.", writedata);
        #10
        assert( {address, writedata} == _r ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'r'.", writedata);
        #10
        assert( {address, writedata} == _COLON ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of ' '.", writedata);
        #10
        assert( {address, writedata} == _SPACE ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of ' '.", writedata);
        #10
        assert( {address, writedata} == _HASH ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of '1'.", writedata);

        // Test 2: Asserts filter number correctly
        reset = 1;
        filter_number = 2;
        #20
        reset = 0;
        #10
        assert( {address, writedata} == CLEAR_DISPLAY ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of clear display.", writedata);
        #10
        assert( {address, writedata} == _F ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'F'.", writedata); 
        #10
        assert( {address, writedata} == _i ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'i'.", writedata); 
        #10
        assert( {address, writedata} == _l ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'l'.", writedata);
        #10
        assert( {address, writedata} == _t ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 't'.", writedata);
        #10
        assert( {address, writedata} == _e ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'e'.", writedata);
        #10
        assert( {address, writedata} == _r ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'r'.", writedata);
        #10
        assert( {address, writedata} == _COLON ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of ' '.", writedata);
        #10
        assert( {address, writedata} == _SPACE ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of ' '.", writedata);
        #10
        assert( {address, writedata} == _2 ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of '2'.", writedata);

        #50
        $finish;
    end

endmodule
