module uart_tx #(
      parameter CLKS_PER_BIT = (50_000_000/115_200), // E.g. Baud_rate = 115200 with FPGA clk = 50MHz
      parameter BITS_N       = 8 // Number of data bits per UART frame
) (
      input clk,
      input reset,
      input [BITS_N-1:0] data_tx,
      output logic uart_out,
      input valid,            // Handshake protocol: valid (when `data_tx` is valid to be sent onto the UART).
      output logic tx_ready      // Handshake protocol: tx_ready (when this UART module is tx_ready to send data).
 );

   logic [BITS_N-1:0]               data_tx_temp;
   logic [2:0]                      bit_n;
   logic [$clog2(CLKS_PER_BIT)+2:0] counter = 0;
   

   enum {IDLE, START_BIT, DATA_BITS, STOP_BIT} current_state, next_state;

   always_comb begin : fsm_next_state
         case (current_state)
            IDLE:        next_state = valid ? START_BIT : IDLE;                           // Handshake protocol: Only start sending data when valid data comes through.
            START_BIT:   next_state = (counter == CLKS_PER_BIT) ? DATA_BITS : START_BIT;
            DATA_BITS:   next_state = (counter == CLKS_PER_BIT) ? ((bit_n == 3'(BITS_N - 1)) ? STOP_BIT : DATA_BITS) : DATA_BITS;
            STOP_BIT:    next_state = (counter == CLKS_PER_BIT) ? IDLE : STOP_BIT;
            default:     next_state = IDLE;
         endcase
   end

   
   always_ff @( posedge clk ) begin : fsm_ff
      if (reset) begin
         current_state <= IDLE;
         data_tx_temp <= 0;
         bit_n <= 0;
         counter <= 0;
      end
      else begin
         current_state <= next_state;
         case (current_state)
            IDLE:      begin // Idle -- register the data to send (in case it gets corrupted by an external module). Reset counters.
               data_tx_temp <= data_tx;
               bit_n <= 0;
            end
            START_BIT: begin
               counter <= (counter == CLKS_PER_BIT) ? 0 : counter + 1;
            end
            DATA_BITS: begin // Data transfer -- Count up the bit-index to send.
               bit_n <= (counter == CLKS_PER_BIT) ? bit_n + 1'b1 : bit_n;
               counter <= (counter == CLKS_PER_BIT) ? 0 : counter + 1;
            end
            STOP_BIT:   begin
               counter <= (counter == CLKS_PER_BIT) ? 0 : counter + 1;
            end
         endcase
      end
   end


   always_comb begin : fsm_output
         uart_out = 1'b1; // Default: The UART line is high.
         tx_ready = 1'b0;    // Default: This UART module is only tx_ready for new data when in the IDLE state.

         case (current_state)
            IDLE:       tx_ready = 1'b1;  // Handshake protocol: This UART module is tx_ready for new data to send.
            DATA_BITS:  uart_out = data_tx_temp[bit_n];     // Set the UART TX line to the current bit being sent.
            START_BIT:  uart_out = 1'b0; // The start condition is a zero.
         endcase
   end 

endmodule