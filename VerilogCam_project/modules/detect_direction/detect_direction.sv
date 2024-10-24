module detect_direction #(
    parameter IMAGE_WIDTH = 320,
    parameter IMAGE_HEIGHT = 240,
    parameter ADDR_BITS = $clog2(IMAGE_WIDTH * IMAGE_HEIGHT),
    parameter NUM_DIVISIONS = 3,                    // Number of divisions
    parameter FOV = 25,                             // Camera FOV in degrees
    parameter MAX_SUM = 12249600,                   // 0+1+2+...+319 = 51040, 51040*240=12249600
    parameter THRESHOLD = 3                         // The red min detection threshold
)(
    input wire                   clk,               // 50 MHz clock signal
    input wire  [ADDR_BITS-1:0]  rdaddress,         // Flag to reset to beginning of frame
    input wire  [11:0]           rddata,            // Data read from BRAM
    output wire [4:0]            direction,         // Signed heading of detected object
	 output wire 						no_red				 // Whether no red is detected
);  

    // Basic Logic: If pixel over threshold, add its column number a total and
    // increment a pixel counter. Then, when last pixel of frame is reached
    // calclate the average column and output the corresponding FOV heading.
	 
	 logic								 no_red_q;
    logic [4:0]                   direction_q;
    logic [$clog2(MAX_SUM)-1:0]   column_sum;
    logic [ADDR_BITS-1:0]         pixel_count;
    logic [$clog2(IMAGE_WIDTH):0] average_column;

    assign direction = direction_q;
	 assign no_red = no_red_q;
    
    always_ff @(posedge clk) begin

        average_column <= ( pixel_count != 0 ) ? column_sum / pixel_count : 0;

        if( rdaddress == 0 ) begin
		  
				direction_q <= ( FOV * average_column ) / ( IMAGE_WIDTH - 1 );
				no_red_q <= (pixel_count < 1000);
				
        end
		  else if ( rdaddress == 1) begin
		  
		      column_sum <= 0;
			   pixel_count <= 0;
			
		  end
		  else if( rddata[11:8] > THRESHOLD && rddata[7:4] < rddata[11:8] - THRESHOLD && rddata[3:0] < rddata[11:8] - THRESHOLD ) begin: count_pixel
		  
            column_sum <= column_sum + ( rdaddress % IMAGE_WIDTH );
            pixel_count <= pixel_count + 1;

        end
		  else begin
		  
		      column_sum <= column_sum;
            pixel_count <= pixel_count;
				
		  end
    end
	
endmodule