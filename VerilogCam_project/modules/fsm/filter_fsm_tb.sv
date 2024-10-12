module filter_fsm_tb;

    // Parameters
    parameter NUM_FILTERS=5;

    // Testbench signals
    logic       clk;
    logic       next_button;    // From debounce
    logic       prev_button;    // From debounce
    logic [2:0] filter_number;	// To lcd display
    logic       lcd_reset;      // To lcd display

    // Instantiate device under test
    filter_fsm #(
        .NUM_FILTERS(NUM_FILTERS)
    ) dut (
        .clk(clk),
        .next_button(next_button),
        .prev_button(prev_button),
        .filter_number(filter_number),
        .lcd_reset(lcd_reset)
    );

    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk; // 100MHz clock
    end

    // Test vectors
    initial begin
        $dumpfile("a_waveform.vcd");        // File name
        $dumpvars(0, filter_select_fsm_tb); // Select all variables in the current scope
        
        // Initialize state and inputs
        next_button = 0;
        prev_button = 0; #50
		
        // Initialise to correct state (Filter1)
        assert(dut.current_state == dut.Filter0) else $fatal("Test 1 Failed: FSM initialised to incorrect state");

        // Filter1 Output Correctness
        assert(filter_number == 0) else $fatal("Test 1 Failed: Filter1 asserting incorrect filter number.");
        
        // Press next button
        next_button = 1; #10
        next_button = 0; #10

        // Test 1: Filter1 transition to Filter2 on next_button press
        assert(dut.current_state == dut.Filter1) else $fatal("Test 1 Failed: Filter1 did not transition to Filter2 on next_button press");

        // Test 2: Filter2 Output Correctness
        assert(filter_number == 1) else $fatal("Test 2 Failed: Filter2 asserting incorrect filter number.");

        // Press next button
        next_button = 1; #10
        next_button = 0; #10

        // Test 3: Filter1 transition to Filter2 on next_button press
        assert(dut.current_state == dut.Filter2) else $fatal("Test 3 Failed: Filter1 did not transition to Filter2 on next_button press");

        // Test 4: Filter2 Output Correctness
        assert(filter_number == 2) else $fatal("Test 4 Failed: Filter2 asserting incorrect filter number.");

        // Press next button
        next_button = 1; #10
        next_button = 0; #10

        // Test 5: Filter2 transition to Filter3 on next_button press
        assert(dut.current_state == dut.Filter3) else $fatal("Test 5 Failed: Filter2 did not transition to Filter3 on next_button press");

        // Test 6: Filter3 Output Correctness
        assert(filter_number == 3) else $fatal("Test 6 Failed: Filter3 asserting incorrect filter number.");

        // Press next button
        next_button = 1; #10
        next_button = 0; #10

        // Test 7: Filter3 transition to Filter4 on next_button press
        assert(dut.current_state == dut.Filter4) else $fatal("Test 7 Failed: Filter3 did not transition to Filter3 on next_button press");

        // Test 8: Filter4 Output Correctness
        assert(filter_number == 4) else $fatal("Test 8 Failed: Filter4 asserting incorrect filter number.");

        // Press next button
        next_button = 1; #10
        next_button = 0; #10

        // Test 9: Filter4 transition to Filter1 on next_button press
        assert(dut.current_state == dut.Filter0) else $fatal("Test 9 Failed: Filter4 did not transition to Filter1 on next_button press");

        // Press prev button
        prev_button = 1; #10
        prev_button = 0; #10

        // Test 10: Filter1 transition to Filter4 on prev_button press
        assert(dut.current_state == dut.Filter4) else $fatal("Test 10 Failed: Filter1 did not transition to Filter4 on prev_button press");

        // Press prev button
        prev_button = 1; #10
        prev_button = 0; #10

        // Test 11: Filter4 transition to Filter3 on prev_button press
        assert(dut.current_state == dut.Filter3) else $fatal("Test 11 Failed: Filter4 did not transition to Filter3 on prev_button press");

        // Press prev button
        prev_button = 1; #10
        prev_button = 0; #10

        // Test 12: Filter3 transition to Filter2 on prev_button press
        assert(dut.current_state == dut.Filter2) else $fatal("Test 12 Failed: Filter3 did not transition to Filter2 on prev_button press");

        // Press prev button
        prev_button = 1; #10
        prev_button = 0; #10

        // Test 13: Filter2 transition to Filter1 on prev_button press
        assert(dut.current_state == dut.Filter1) else $fatal("Test 13 Failed: Filter2 did not transition to Filter1 on prev_button press");

        // Press prev button
        prev_button = 1; #10
        prev_button = 0; #10

        // Test 13: Filter2 transition to Filter1 on prev_button press
        assert(dut.current_state == dut.Filter0) else $fatal("Test 14 Failed: Filter1 did not transition to Filter0 on prev_button press");

        // Finish simulation
        #100;
        $finish;
    end

endmodule