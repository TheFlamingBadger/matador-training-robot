module lcd_display_tb;

    // Parameters
	parameter FOV = 25;

    // Control & Drive Logic Signals
    input  logic clk;
    input  logic reset;
    input  logic [2:0] command;
    input  logic [$clog2(FOV):0] direction;
    input  logic [7:0] distance;

    // Avalon-MM signals to LCD_Controller slave:
    output logic address;
    output logic chipselect;
    output logic byteenable;
    output logic read;
    output logic write;
    input  logic waitrequest;
    input  logic [7:0] readdata;
    input  logic [1:0] response;
    output logic [7:0] writedata;

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
        $dumpfile("a_waveform.vcd"); // File name
        $dumpvars(0, lcd_display_tb); // Select all variables in the current scope
        
        // Initialize state and inputs
        reset = 0;
        command = 0;
        direction = 0;
        distance = 0;

        #2000
        // // Test 1: "Filter #" outputs correctly
        // #5
        // assert( {address, writedata} == _F ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'F'.", writedata); 
        // #10
        // assert( {address, writedata} == _i ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'i'.", writedata); 
        // #10
        // assert( {address, writedata} == _l ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'l'.", writedata);
        // #10
        // assert( {address, writedata} == _t ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 't'.", writedata);
        // #10
        // assert( {address, writedata} == _e ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'e'.", writedata);
        // #10
        // assert( {address, writedata} == _r ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'r'.", writedata);
        // #10
        // assert( {address, writedata} == _SPACE ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of ' '.", writedata);
        // #10
        // assert( {address, writedata} == _1 ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of '1'.", writedata);

        // // Test 2: "Filter #" outputs correctly
        // filter_number = 1;
        // #5
        // assert( {address, writedata} == _F ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'F'.", writedata); 
        // #10
        // assert( {address, writedata} == _i ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'i'.", writedata); 
        // #10
        // assert( {address, writedata} == _l ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'l'.", writedata);
        // #10
        // assert( {address, writedata} == _t ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 't'.", writedata);
        // #10
        // assert( {address, writedata} == _e ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'e'.", writedata);
        // #10
        // assert( {address, writedata} == _r ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'r'.", writedata);
        // #10
        // assert( {address, writedata} == _SPACE ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of ' '.", writedata);
        // #10
        // assert( {address, writedata} == _1 ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of '1'.", writedata);

        // // Test 3: "Filter #" outputs correctly
        // filter_number = 2;
        // #10
        // assert( {address, writedata} == CLEAR_DISPLAY ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of clear display.", writedata);
        // #10
        // assert( {address, writedata} == _F ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'F'.", writedata); 
        // #10
        // assert( {address, writedata} == _i ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'i'.", writedata); 
        // #10
        // assert( {address, writedata} == _l ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'l'.", writedata);
        // #10
        // assert( {address, writedata} == _t ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 't'.", writedata);
        // #10
        // assert( {address, writedata} == _e ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'e'.", writedata);
        // #10
        // assert( {address, writedata} == _r ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'r'.", writedata);
        // #10
        // assert( {address, writedata} == _SPACE ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of ' '.", writedata);
        // #10
        // assert( {address, writedata} == _2 ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of '2'.", writedata);

        // // Test 4: "Filter #" outputs correctly
        // filter_number = 3;
        // #10
        // assert( {address, writedata} == CLEAR_DISPLAY ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of clear display.", writedata);
        // #10
        // assert( {address, writedata} == _F ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'F'.", writedata); 
        // #10
        // assert( {address, writedata} == _i ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'i'.", writedata); 
        // #10
        // assert( {address, writedata} == _l ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'l'.", writedata);
        // #10
        // assert( {address, writedata} == _t ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 't'.", writedata);
        // #10
        // assert( {address, writedata} == _e ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'e'.", writedata);
        // #10
        // assert( {address, writedata} == _r ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'r'.", writedata);
        // #10
        // assert( {address, writedata} == _SPACE ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of ' '.", writedata);
        // #10
        // assert( {address, writedata} == _3 ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of '3'.", writedata);

        // // Test 5: "Filter #" outputs correctly
        // filter_number = 4;
        // #10
        // assert( {address, writedata} == CLEAR_DISPLAY ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of clear display.", writedata);
        // #10
        // assert( {address, writedata} == _F ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'F'.", writedata); 
        // #10
        // assert( {address, writedata} == _i ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'i'.", writedata); 
        // #10
        // assert( {address, writedata} == _l ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'l'.", writedata);
        // #10
        // assert( {address, writedata} == _t ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 't'.", writedata);
        // #10
        // assert( {address, writedata} == _e ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'e'.", writedata);
        // #10
        // assert( {address, writedata} == _r ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of 'r'.", writedata);
        // #10
        // assert( {address, writedata} == _SPACE ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of ' '.", writedata);
        // #10
        // assert( {address, writedata} == _4 ) else $fatal("Test 2 Failed: Wrong character asserted. '%c' instead of '4'.", writedata);

        $finish;
    end

endmodule
