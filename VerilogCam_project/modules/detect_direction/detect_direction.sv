module detect_direction #(
    parameter IMAGE_WIDTH = 320,
    parameter IMAGE_HEIGHT = 240,
    parameter ADDR_BITS = $clog2(IMAGE_WIDTH * IMAGE_HEIGHT),
    parameter NUM_DIVISIONS = 3,                    // Number of divisions
    parameter FOV = 25,                             // Camera FOV in degrees
    parameter MAX_COUNT = (ADDR_BITS / NUM_DIVISIONS) + 1
)(
    input wire clk,                                 // 50 MHz clock signal
    input wire start_frame,                         // Flag indicating reset to beginning of frame
    input wire end_frame,                           // Flag indicating reset to beginning of frame
    input wire [$clog2(ADDR_BITS)-1:0] rdaddress,   // Data read from BRAM
    input wire [11:0] rddata,                       // Data read from BRAM
    output wire [$clog2(FOV)-1:0] direction         // Direction object detected in
);  

    // If pixel over threshold
    // Decide which division address is in
    // Update count of corresponding division

    logic [$clog2(FOV)-1:0] direction_q;
    int fov_divison_width = FOV / NUM_DIVISIONS;
    logic [$clog2(MAX_COUNT):0] division_counter [NUM_DIVISIONS];

    assign direction = direction_q;
    
    always @(posedge clk) begin

        if( start_frame ) begin: reset_counters

            for( int i=0; i<NUM_DIVISIONS; i=i+1 ) begin
                division_counter[i] = 0;
            end

        end
        else if( end_frame ) begin: update_output_direction

            // Determine division with highest count
            int direction_index = 0;
            int highest_count = 0;

            for( int i=0; i<NUM_DIVISIONS; i=i+1 ) begin
                if( division_counter[ direction_index ] > highest_count ) begin
                    direction_index = i;
                end
            end

            // Convert to degrees
            direction_q = direction_index*fov_divison_width + fov_divison_width/2;

        end
        else if( rddata[11:9] > 100 ) begin: count_pixels

            // Calculate pixel width of image subdivision
            int division_width = IMAGE_WIDTH / NUM_DIVISIONS;

            // Calculate which subdivision address is located in 
            int division_index = ( rdaddress % IMAGE_HEIGHT ) / division_width;

            // Increment corresponding counter
            division_counter[ division_index ] = division_counter[ division_index ] + 1;

        end
    end
	
endmodule