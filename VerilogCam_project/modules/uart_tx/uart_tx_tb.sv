module uart_tx_tb;

   // Testbench Parameters
   localparam CLK_PERIOD = 20; // 50 MHz clock (20ns period)
   localparam BITS_N = 8; // Number of data bits

   // DUT Parameters
   localparam CLKS_PER_BIT_115200 = 434; // baud rate
   localparam RANDOM_TESTS = 5;
   localparam MAX_TEST_CYCLES = RANDOM_TESTS * 12 * CLKS_PER_BIT_115200 * CLK_PERIOD * 2; // Should not take longer than 2x all random tests with 12 UART bits.

   // Testbench signals
   logic clk;
   logic reset;
   logic [BITS_N-1:0] data_tx;
   logic valid;
   logic uart_out;
   logic tx_ready;

   // DUT instantiation:
   uart_tx #(
       .CLKS_PER_BIT(CLKS_PER_BIT_115200),
       .BITS_N(BITS_N)
   ) dut (
       .clk(clk),
       .reset(reset),
       .data_tx(data_tx),
       .uart_out(uart_out),
       .valid(valid),
       .tx_ready(tx_ready)
   );

   // Clock generation
   initial begin
       clk = 0;
       forever #(CLK_PERIOD/2) clk = ~clk;
   end

   initial #(MAX_TEST_CYCLES) $error("Test took too long! Is the ready signal never high?");

   // Test sequences
   initial begin
       $dumpfile("waveform.fst");
       $dumpvars();
       // Initialize signals
       reset = 1;
       valid = 0;
       data_tx = 8'b00000000;

       // Release reset
       #(5 * CLK_PERIOD);
       reset = 0;

       repeat(RANDOM_TESTS) begin
           #(10 * CLK_PERIOD);
           send_data(8'($urandom()&32'hFF));
       end
       // Test complete
       #(100 * CLK_PERIOD);
       $finish();
   end

   // Task to send data
   task send_data(input [BITS_N-1:0] data);
       begin
           if (tx_ready) begin
             data_tx = data;
             valid = 1;
             #(CLK_PERIOD);
             valid = 0;
             @(posedge tx_ready); // Wait until UART transmitter has finished.
           end
       end
   endtask

endmodule