import lcd_inst_pkg::*;
	
module lcd_display (
    input  logic clk,
    input  logic reset,
	 input  logic [2:0]  filter_number,
    // Avalon-MM signals to LCD_Controller slave:
    output logic address,
    output logic chipselect,
    output logic byteenable,
    output logic read,
    output logic write,
    input  logic waitrequest,
    input  logic [7:0] readdata,
    input  logic [1:0] response,
    output logic [7:0] writedata
);
    // State encoding for FSM
    typedef enum logic [1:0] {IDLE, WRITE_OP} state_t;
    state_t current_state, next_state;

    localparam N_INSTRS = 10;
    logic [8:0] instructions [N_INSTRS] = '{CLEAR_DISPLAY, _F, _i, _l, _t, _e, _r, _COLON, _SPACE, _HASH}; // Clear display then display "Hi".
    
    always_ff @(posedge clk) begin : set_filter_number
        if(instruction_index != N_INSTRS-1) begin
            case(filter_number)
                0: instructions[N_INSTRS-1] = _0;
                1: instructions[N_INSTRS-1] = _1;
                2: instructions[N_INSTRS-1] = _2;
                3: instructions[N_INSTRS-1] = _3;
                4: instructions[N_INSTRS-1] = _4;
                default: instructions[N_INSTRS-1] = _HASH;
            endcase
		end
    end
	

    integer next_instruction_index;
    integer instruction_index = 0;

    assign next_instruction_index = instruction_index + 1;

    always_comb begin : fsm_next_state
        case( current_state ) 
            IDLE:       next_state = ( instruction_index < N_INSTRS ) ? WRITE_OP : IDLE;
//            WRITE_OP:   next_state = ( waitrequest || ( instruction_index >= N_INSTRS-1 )) ? IDLE : WRITE_OP;
				  WRITE_OP:   next_state = ( waitrequest ) ? WRITE_OP : IDLE;
            default:    next_state = IDLE;
        endcase
    end

    always_ff @(posedge clk) begin : registers
        if( reset ) begin
            current_state <= IDLE;
            instruction_index <= 0;
        end
        else begin
            current_state <= next_state;

            if(( !waitrequest ) && ( current_state == WRITE_OP )) begin
                instruction_index <= next_instruction_index;
            end
        end
    end

    always_comb begin : fsm_output        
        byteenable = 1;
        read = 0;

        if( current_state == WRITE_OP ) begin
            chipselect = 1;
            write = 1;
            address = instructions[instruction_index][8];
            writedata = instructions[instruction_index][7:0];
        end
        else begin
            chipselect = 0;
            write = 0;
            address = 0;
            writedata = 8'h00;
        end
    end

endmodule