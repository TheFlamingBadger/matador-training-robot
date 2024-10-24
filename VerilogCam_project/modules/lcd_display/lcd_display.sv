import lcd_inst_pkg::*;
	
module lcd_display #(
	 parameter FOV = 25                             // Camera FOV in degrees
)(
    input  logic clk,
    input  logic reset,
	 input  logic [2:0] command,
	 input  logic [$clog2(FOV):0] direction,
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

    localparam N_INSTRS = 13;
	 localparam CMD_IDX = 6;
	 localparam DIR_TENS_IDX = N_INSTRS-2;
	 localparam DIR_ONES_IDX = N_INSTRS-1;
    logic [8:0] instructions [N_INSTRS] = '{CLEAR_DISPLAY, CURSOR_OFF, _C, _m, _d, _COLON, _HASH, _SPACE, _D, _r, _COLON, _HASH, _HASH};
	 
	 int dir_ones;
	 int dir_tens;
	 assign dir_ones = direction % 10;
	 assign dir_tens = (direction - (direction % 10))/10;
    
    always_ff @(posedge clk) begin : set_command
        if(instruction_index != N_INSTRS-1) begin
            case(command)
                0: instructions[CMD_IDX] = _0;
                1: instructions[CMD_IDX] = _1;
                2: instructions[CMD_IDX] = _2;
                3: instructions[CMD_IDX] = _3;
                4: instructions[CMD_IDX] = _4;
                5: instructions[CMD_IDX] = _5;
                default: instructions[CMD_IDX] = _HASH;
            endcase
				
            case(dir_tens)
                0: instructions[DIR_TENS_IDX] = _0;
                1: instructions[DIR_TENS_IDX] = _1;
                2: instructions[DIR_TENS_IDX] = _2;
                3: instructions[DIR_TENS_IDX] = _3;
                4: instructions[DIR_TENS_IDX] = _4;
                5: instructions[DIR_TENS_IDX] = _5;
					 6: instructions[DIR_TENS_IDX] = _6;
					 7: instructions[DIR_TENS_IDX] = _7;
					 8: instructions[DIR_TENS_IDX] = _8;
					 9: instructions[DIR_TENS_IDX] = _9;
                default: instructions[DIR_TENS_IDX] = _HASH;
            endcase
				
				case(dir_ones)
                0: instructions[DIR_ONES_IDX] = _0;
                1: instructions[DIR_ONES_IDX] = _1;
                2: instructions[DIR_ONES_IDX] = _2;
                3: instructions[DIR_ONES_IDX] = _3;
                4: instructions[DIR_ONES_IDX] = _4;
                5: instructions[DIR_ONES_IDX] = _5;
					 6: instructions[DIR_ONES_IDX] = _6;
					 7: instructions[DIR_ONES_IDX] = _7;
					 8: instructions[DIR_ONES_IDX] = _8;
					 9: instructions[DIR_ONES_IDX] = _9;
                default: instructions[DIR_ONES_IDX] = _HASH;
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