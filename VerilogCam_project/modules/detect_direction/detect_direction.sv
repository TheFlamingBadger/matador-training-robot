module detect_direction #(
    parameter IMAGE_WIDTH = 320,
    parameter IMAGE_HEIGHT = 240,
    parameter ADDR_BITS = $clog2(IMAGE_WIDTH * IMAGE_HEIGHT),
    parameter NUM_DIVISIONS = 3,                    // Number of divisions
    parameter FOV = 25,                             // Camera FOV in degrees
    parameter MAX_SUM = 12249600,                   // 0+1+2+...+319 = 51040, 51040*240=12249600
    parameter THRESHOLD = 8                         // The red detection threshold (0-15)
)(
    input wire clk,                                 // 50 MHz clock signal
    input wire [ADDR_BITS-1:0] rdaddress,           // Data read from BRAM (signed)
    input wire [11:0] rddata,                       // Data read from BRAM
    output wire [$clog2(FOV):0] direction           // Signed heading of detected object
);  

    // Basic Logic: If pixel over threshold, add its column number a total and
    // increment a pixel counter. Then, when last pixel of frame is reached
    // calclate the average column and output the corresponding FOV heading.

    logic [$clog2(FOV):0] direction_q = 12;
    logic [$clog2(MAX_SUM)-1:0] column_sum;
    logic [$clog2(ADDR_BITS)-1:0] pixel_count;

    assign direction = direction_q;
    
    always @(posedge clk) begin

        if( rdaddress == 0 ) begin: reset_counters

            column_sum = 0;
            pixel_count = 0;

        end

        if( rddata[11:8] > THRESHOLD ) begin: count_pixel

            column_sum = column_sum + ( rdaddress % IMAGE_WIDTH );
            pixel_count = pixel_count + 1;
            
        end
        
        if( rdaddress == IMAGE_WIDTH*IMAGE_HEIGHT - 1 ) begin: update_output_direction

            // Calculate average column
            int average_column = ( pixel_count != 0 ) ? column_sum/pixel_count : -1;
            
            // Convert to FOV heading in degrees
            direction_q = (average_column >= 0) ? ( FOV * average_column ) / ( IMAGE_WIDTH - 1 ) : -1;

        end
    end
	
endmodule