module filter_fsm #(
    parameter NUM_FILTERS=5
)(
    input               clk,            // 50 MHz clock
    input  logic 	    next_button,    // From debounce
    input  logic 	    prev_button,    // From debounce
    output logic [2:0]  filter_number,	// To lcd & filter modules
    output logic 	    lcd_reset		// To lcd module
); 

    // Button edge detection
    logic next_button_q, prev_button_q;
    logic next_button_edge, prev_button_edge;
	 
    always_ff @(posedge clk) begin : button_edge_detect
        next_button_q <= next_button;
        prev_button_q <= prev_button;
    end

    assign next_button_edge = next_button > next_button_q;
    assign prev_button_edge = prev_button > prev_button_q;
    assign lcd_reset = next_button_edge || prev_button_edge;

	// State Typedef Enum
    enum logic [3:0] { Filter0, Filter1, Filter2, Filter3, Filter4 } next_state, current_state = Filter0;
    
    // Next State Logic
    always_comb begin : next_state_logic
        case (current_state) /* verilator lint_off CASEINCOMPLETE */
            Filter0: next_state = next_button_edge ? Filter1 : (prev_button_edge ? Filter4 : Filter0);
            Filter1: next_state = next_button_edge ? Filter2 : (prev_button_edge ? Filter0 : Filter1);
            Filter2: next_state = next_button_edge ? Filter3 : (prev_button_edge ? Filter1 : Filter2);
            Filter3: next_state = next_button_edge ? Filter4 : (prev_button_edge ? Filter2 : Filter3);
            Filter4: next_state = next_button_edge ? Filter0 : (prev_button_edge ? Filter3 : Filter4);
            default: next_state = Filter0;
        endcase
    end
    
    // FSM State Variable Flip-Flops
    always_ff @(posedge clk) begin : fsm_ff
		current_state <= next_state;
    end

    // Continuous Output Assignments
    always_comb begin : output_assignments
		case (current_state)
            Filter0: filter_number = 3'd0;
            Filter1: filter_number = 3'd1;
            Filter2: filter_number = 3'd2;
            Filter3: filter_number = 3'd3;
            Filter4: filter_number = 3'd4;
	    endcase
    end

endmodule