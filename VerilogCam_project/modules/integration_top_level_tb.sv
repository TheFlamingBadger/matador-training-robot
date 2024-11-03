module integration_top_level_tb;

    // Parameters
    parameter IMAGE_HEIGHT = 240;
    parameter IMAGE_WIDTH = 320;

    localparam VOLUME_THRESHOLD = 70;
    localparam PITCH_THRESHOLD = 46;

    localparam IR_POWER = 32'hed126b86;		
    localparam IR_MUTE = 32'hf30c6b86;		
    localparam IR_PLAY_PAUSE = 32'he9166b86;	
    localparam IR_RETURN = 32'he8176b86;	
    localparam IR_1 = 32'hfe016b86;	
    localparam IR_2 = 32'hfd026b86;	
    localparam IR_3 = 32'hfc036b86;	
    localparam IR_CHANNEL_UP = 32'he51a6b86;
    localparam IR_CHANNEL_DOWN = 32'he11e6b86;	

    // User input signals
    logic [15:0] audio_pitch;       // from "fft_pitch_detect"
    logic [32:0] audio_magnitude;   // from "fft_pitch_detect"
    logic [31:0] ir_data;           // from "ir_reader"
    logic        ir_valid;          // from "ir_reader"
    logic [7:0]  avg_distance;      // from "my_softcore" (SoC DSP)
    logic [11:0] rddata;
    logic [16:0] rdaddress;

    // Other inputs
    logic        clk;
    logic        clk_25_vga;
    logic        reset;

    //------------- Start Image Processor Signals -------------------
    logic [11:0] filtered_data;
    logic [16:0] delayed_address;
    logic        no_red;
    logic [4:0]  direction;
    logic [4:0]  avg_direction;
    
    // twod_convolution_filt twod_filt_inst (
    //     .clk            (clk_25_vga),
    //     .rddata         (rddata),
    //     .rdaddress      (rdaddress),
    //     .filtered_data  (filtered_data),
    //     .delayed_address(delayed_address)
    // );
    assign delayed_address = rdaddress;
    assign filtered_data = rddata;
   
    detect_direction detect_direction_inst (
        .clk        (clk),
        .rdaddress  (delayed_address),  // in: from address generator
        .rddata     (filtered_data),	// in: from frame buffer
        .direction  (direction),		// out: to drive logic
        .no_red     (no_red),			// out: to drive logic
        .vga_start  (),
        .vga_end    (),
        .vga_data   ()
    );
  
    oned_convolution_filt oned_filt_inst (
		.clk    (clk),
		.reset  (reset),
		.raw_in (direction),
		.avg_out(avg_direction)
	);
    //------------- End Image Processor Signals ---------------------

    //------------- Start Drive Logic Signals -----------------------
    logic [2:0] command;
    logic [7:0] follow_dist;
    logic [2:0] difficulty;
    logic       valid;
    logic       noise_registered;

    drive_logic drive_logic_inst (
		.clk                (clk),
		.no_red				(no_red),		        // in: from detect direction
		.detected_direction (avg_direction),		// in: from detect direction
		.average_distance   (avg_distance),			// in: from ultrasonic
		.pitch              (audio_pitch),	        // in: from microphone
		.amplitude          (audio_magnitude),		// in: from microphone
		.ir_command			(ir_data),				// in: from ir reader
		.ir_data_ready		(ir_valid),		        // in: from ir reader
		.drive_command      (command),				// out: to command translator
		.follow_distance	(follow_dist),			// out: to lcd display
		.valid              (valid),				// out: to command translator
		.difficulty_disp	(difficulty),			// out: to command translator
		.noise_registered   (noise_registered)		// out: to ledrs
    );
    //------------- End Drive Logic Signals -------------------------

    //------------- Start Command Output ----------------------------
    logic       cmd_ready;
    logic       uart_ready = 1;
    logic [7:0] ascii_out;
    logic       serial_out;
    
    command_translator command_translator_inst (
        .clk        (clk),
        .command    (command),   	// in: from drive logic
        .difficulty (difficulty),	// in: from drive logic
        .valid      (valid),		// in: from drive logic
        .uart_ready (uart_ready),	// in: from UART
        .ascii_out  (ascii_out), 	// out: to UART
        .cmd_ready  (cmd_ready)  	// out: to UART
    );
    
    uart_tx uart_tx_inst (
		.clk        (clk),
        .reset      (reset),
		.data_tx    (ascii_out),	// in: from command translator
		.valid      (cmd_ready),	// in: from command translator
		.uart_out   (serial_out),	// out: to base
		.tx_ready   ()	            // out: to command translator
    );
    //------------- End Command Output ------------------------------

    //------------- LCD Display Start -------------------------------
  	wire       address;     //   avalon_lcd_slave.address
 	wire       chipselect;  //                   .chipselect
	wire       read;        //                   .read
	wire       write;       //                   .write
	wire [7:0] writedata;   //                   .writedata
	wire [7:0] readdata;    //                   .readdata
	wire       waitrequest; //                   .waitrequest

    lcd_display lcd_display_inst (
        .clk(clk),
        .reset(reset),
        .command(command),
        .direction(avg_direction),
        .distance(follow_dist),
        // Avalon-MM signals to LCD_Controller slave
        .address(address),          // Address line for LCD controller
        .chipselect(chipselect),
        .byteenable(),
        .read(),
        .write(write),
        .waitrequest(waitrequest),
        .readdata(),
        .response(),
        .writedata(writedata)
	);
    //------------- LCD Display End ---------------------------------

    // Clock generation
    initial begin
        clk_25_vga = 0;
        forever #20 clk_25_vga = ~clk_25_vga; // 25MHz clock
    end

    initial begin
        clk = 0;
        forever #10 clk = ~clk; // 50MHz clock
    end

    // Test vectors
    initial begin
        $dumpfile("waveform.vcd");
        $dumpvars(0, integration_top_level); // Select all variables in the current scope
        
        // Initialise variables
        audio_pitch = 0;
        audio_magnitude = 0;
        ir_data = 0;
        ir_valid = 0;        
        avg_distance = 40;
        rddata = 0;
        rdaddress = 0;
        reset = 0; // Could be a problem if some modules expect active low
        #40

        // Test 1: Camera and IR on-off controls 
        rdaddress = 1;             // Reset
        rddata = 12'hF00;          // Set to red
        ir_valid = 1;  
        ir_data = IR_PLAY_PAUSE;

        for(int i = 2; i<503; i++) begin // Show red frame
            #20
            rdaddress = i;         // Set pixel address
        end

        rdaddress = 0;      // Output detected direction
        #80
        assert( command == 2 ) else $fatal("Error: detected direction incorrect");
        #400         
        
        ir_data = IR_POWER; // Demo: Resumes moving
        #40
        assert( command == 2 ) else $fatal("Error: detected direction incorrect");
        #400

        // Test 2: Audio and IR mute controls
        ir_data = IR_MUTE;          // Responds to sound, then doesn't
        ir_data = IR_RETURN;        // Responds to sound again
        ir_valid = 1;  
        ir_data = IR_PLAY_PAUSE;

        rdaddress = 1;                   // Reset

        for(int i = 2; i<503; i++) begin // Show red frame
            #20
            rdaddress = i;               // Set pixel address
        end

        rdaddress = 0;      // Output detected direction
        #40
        assert( command == 3 ) else $fatal("Error: detected direction incorrect");
        audio_magnitude = VOLUME_THRESHOLD + 1;
        audio_pitch = PITCH_THRESHOLD + 1;
        #80
        assert( command == 0 ) else $fatal("Error: detected direction incorrect");

        audio_magnitude = VOLUME_THRESHOLD + 1;
        audio_pitch = PITCH_THRESHOLD;
        #80
        assert( command == 3 ) else $fatal("Error: detected direction incorrect");
        #200
        
        // Test 3: IR difficulty selection
        ir_data = IR_1; #600
        ir_data = IR_2; #600
        ir_data = IR_3; #600

        // Test 4: Ultrasonic and IR distance controls
        rdaddress = 1;             // Reset
        rddata = 12'hF00;          // Set to red
        ir_valid = 1;  
        ir_data = IR_PLAY_PAUSE;

        ir_data = IR_CHANNEL_UP; #80
        ir_data = 0; #20
        ir_data = IR_CHANNEL_UP; #80
        ir_data = 0; #20
        ir_data = IR_CHANNEL_DOWN; #80
        
        assert( follow_dist == 30 ) else $fatal("Error: detected direction incorrect");

        rdaddress = 1;             // Reset
        rddata = 12'hF00;          // Set to red
        ir_valid = 1;  
        ir_data = IR_PLAY_PAUSE;
        avg_distance = 40;

        for(int i = 2; i<503; i++) begin // Show red frame
            #20
            rdaddress = i;         // Set pixel address
        end

        rdaddress = 0;
        #80
        assert( command == 3 ) else $fatal("Error: detected direction incorrect");
        #400         
        
        avg_distance = 25;          // Demo: Stops moving when too close
        #40
        assert( command == 3 ) else $fatal("Error: detected direction incorrect");
        #400

        $finish;
    end

endmodule
