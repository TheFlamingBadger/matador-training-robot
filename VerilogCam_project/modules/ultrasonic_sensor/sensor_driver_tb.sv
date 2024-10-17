module sensor_driver_tb();

parameter CLK_PERIOD = 20;

logic clk;
logic echo;
logic trigger;
logic start;
logic reset;
logic [7:0] LEDR;

sensor_driver u0(
    .clk(clk),
    .echo(echo),
    .measure(start),
    .rst(reset),
    .trig(trigger),
    .distance(LEDR)
);

initial clk = 1'b0;

always begin
    #10 
    clk = ~clk;
end
  
initial begin
    // Initialize
    #(1 * CLK_PERIOD)
    reset = 1;
    start = 0;
    LEDR = 0;

    // Reset release
    #(1 * CLK_PERIOD)
    reset = 0; 
    start = 1;
    
    #(1 * CLK_PERIOD)
    start = 0;
    
//    // Simulate random distance
//    #(500 * CLK_PERIOD)
//    echo = 1;
//    #(1000000 * CLK_PERIOD) // Simulate the time delay for a random distance
//    
//    #(1 * CLK_PERIOD)
//    echo = 0;
    
    // Simulate very close distance
    #10 start = 1;
    #1 start = 0;
    #(5 * CLK_PERIOD); // Short delay for very close distance
    
    echo = 1;
    #(14550 * CLK_PERIOD); // Echo high for 14550 cycles (very close)
    echo = 0;
    // Check LEDR value for very close distance (should be around 5 cm)
    $display("LEDR for very close distance: %d", LEDR);

    // Simulate very far distance
    #10 start = 1;
    #1 start = 0;
    #(5000 * CLK_PERIOD); // Longer delay for very far distance
    
    echo = 1;
    #(1167000 * CLK_PERIOD); // Echo high for 1167000 cycles (very far)
    echo = 0;
    // Check LEDR value for very far distance (should be around 4 meters)
    $display("LEDR for very far distance: %d", LEDR);

    #10 $finish();
end
endmodule
