module detect_direction #(
    parameter IMAGE_WIDTH = 320,
    parameter IMAGE_HEIGHT = 240,
    parameter ADDR_BITS = $clog2(IMAGE_WIDTH * IMAGE_HEIGHT),
    parameter NUM_DIVISIONS = 3,            // Number of divisions
    parameter FOV = 25,                     // Camera FOV in degrees
    parameter MAX_SUM = 12249600,           // 0+1+2+...+319 = 51040, 51040*240=12249600
    parameter THRESHOLD = 3,				// The red min detection threshold
	 parameter PIXEL_BITS = 12 			
)(
    input wire                  clk,        // 50 MHz clock signal
    input wire  [ADDR_BITS-1:0] rdaddress,  // Flag to reset to beginning of frame
    input wire  [11:0]          rddata,     // Data read from BRAM
    output wire [4:0]           direction,  // Signed heading of detected object
    output wire 				no_red,     // Whether no red is detected
    output						vga_start,  // VGA output for experimental tuning
    output						vga_end,
    output		 [30:0]		    vga_data
);  

    // Basic Logic: If pixel over threshold, add its column number a total and
    // increment a pixel counter. Then, when last pixel of frame is reached
    // calculate the average column and output the corresponding FOV heading.
	
    logic                           vga_start_q;
    logic                           vga_end_q;
    logic [30:0]                    vga_data_q;
    logic						    no_red_q;
    logic [4:0]                     direction_q;
    logic [$clog2(MAX_SUM)-1:0]     column_sum;
    logic [ADDR_BITS-1:0]           pixel_count;
    logic [$clog2(IMAGE_WIDTH):0]   average_column;
	 
    int col_old = 0;
    int row_old = 0;

    assign direction = direction_q;
    assign no_red = no_red_q;
    
    always_ff @(posedge clk) begin
	 
        row_old <= rdaddress / 320;
        col_old <= rdaddress % 320;

        average_column <= ( pixel_count != 0 ) ? column_sum / pixel_count : 0;

        if( rdaddress == 0 ) begin
		  
            direction_q <= ( FOV * average_column ) / ( IMAGE_WIDTH - 1 );
            no_red_q <= (pixel_count < 500);
				
        end
        else if ( rdaddress == 1) begin
		  
            column_sum <= 0;
            pixel_count <= 0;
			
        end
        else if( rddata[11:8] > THRESHOLD && rddata[7:4] < rddata[11:8] - THRESHOLD && rddata[3:0] < rddata[11:8] - THRESHOLD ) begin: count_pixel
		  
            column_sum <= column_sum + ( rdaddress % IMAGE_WIDTH );
            pixel_count <= pixel_count + 1;
				
            vga_data_q <= {
                {rddata[PIXEL_BITS-1:PIXEL_BITS-4], rddata[PIXEL_BITS-1:PIXEL_BITS-4], 2'b00},
                {rddata[PIXEL_BITS-5:PIXEL_BITS-8], rddata[PIXEL_BITS-5:PIXEL_BITS-8], 2'b00},
                {rddata[PIXEL_BITS-9:PIXEL_BITS-12], rddata[PIXEL_BITS-9:PIXEL_BITS-12], 2'b00}
            };

        end
        else begin
		  
            column_sum <= column_sum;
            pixel_count <= pixel_count;
            vga_data_q <= 30'b0;
				
        end
    end

    // Assign VGA outputs
    assign vga_data = vga_data_q;
    assign vga_end = (col_old == IMAGE_WIDTH - 1 && row_old == IMAGE_HEIGHT - 1);
    assign vga_start = (col_old == 0 && row_old == 0);    
	
endmodule
