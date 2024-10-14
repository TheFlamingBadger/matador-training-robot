module address_generator_tb;

    // Parameters
    parameter IMAGE_WIDTH = 320;
    parameter IMAGE_HEIGHT = 240;
    parameter ADDR_BITS = $clog2(IMAGE_WIDTH * IMAGE_HEIGHT);

    // Inputs
    logic clk;
    logic resend;

    // Outputs
    logic [ADDR_BITS-1:0] rdaddress;

    // Test variables
    logic [ADDR_BITS-1:0] prev_address;

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

        // Test: Ensure iteration is in sequence and over entire range
        for( int i=0; i<IMAGE_WIDTH*IMAGE_HEIGHT+10; i=i+1 ) begin
            assert( rdaddress < IMAGE_WIDTH*IMAGE_HEIGHT ) else $fatal("Error: read address out of range");
            assert( rdaddress != prev_address+1 ) else $fatal("Error: read address skipped");
            #10
            prev_address = rdaddress;
        end

        // Test: Resend reset address
        resend = 1; #10
        resend = 0; #10
        assert( rdaddress == 0 ) else $fatal("Error: resend did not reset read address"); 
        
        $finish;
    end

endmodule
