module address_generator_tb;

    // Parameters
    parameter IMAGE_WIDTH = 320;
    parameter IMAGE_HEIGHT = 240;
    parameter ADDR_BITS = $clog2(IMAGE_WIDTH * IMAGE_HEIGHT);

    // Inputs
    logic clk;
    logic resend;

    // Outputs
    logic [$clog2(ADDR_BITS)-1:0] rdaddress;

    // Instantiate device under test
    address_generator #(
        .IMAGE_WIDTH(IMAGE_WIDTH),
        .IMAGE_HEIGHT(IMAGE_HEIGHT),
        .ADDR_BITS(ADDR_BITS)
    ) dut (
        .clk(clk),
        .resend(resend),
        .rdaddress(rdaddress)
    );

    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk; // 100MHz clock
    end

    // Test vectors
    initial begin
        $dumpfile("waveform_address_generator.vcd"); // File name
        $dumpvars(0, address_generator); // Select all variables in the current scope
        
        // Initialize variables
        resend = 0;
        
        // Tests
        #5000
        $finish;
    end

endmodule
