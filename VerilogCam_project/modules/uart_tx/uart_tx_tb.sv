`timescale 1ns/1ps

module uart_tx_tb;

   // Parameters
   localparam CLKS_PER_BIT = (50_000_000 / 115_200);
   localparam BITS_N = 8;

   // Testbench signals
   reg clk;
   reg reset;
   reg [BITS_N-1:0] data_tx;
   reg valid;
   wire uart_out;
   wire tx_ready;

   // Instantiate the UART TX module
   uart_tx #(
      .CLKS_PER_BIT(CLKS_PER_BIT),
      .BITS_N(BITS_N)
   ) uut (
      .clk(clk),
      .reset(reset),
      .data_tx(data_tx),
      .uart_out(uart_out),
      .valid(valid),
      .tx_ready(tx_ready)
   );

   // Clock generation
   always #10 clk = ~clk; // 50 MHz clock

   // Test sequence
   initial begin
      $dumpfile("waveform.vcd");
      $dumpvars();
      // Initialize signals
      clk = 0;
      reset = 1;
      data_tx = 8'b0;
      valid = 0;

      #1000;


      // Reset the module
      #100 reset = 0;

      // Transmit the characters "a", "b", "c", "d" with ASCII codes
      send_char(8'h61); // 'a'
      send_char(8'h62); // 'b'
      send_char(8'h63); // 'c'
      send_char(8'h64); // 'd'

      #1000;
      $finish;
   end

   // Task to send a character
   task send_char(input [BITS_N-1:0] char);
      begin
         @(posedge clk);
         while (!tx_ready) @(posedge clk); // Wait until tx_ready
         data_tx = char;
         valid = 1;
         @(posedge clk);
         valid = 0;
         @(posedge clk);
      end
   endtask

endmodule
