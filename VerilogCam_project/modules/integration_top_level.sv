module integration_top_level (
		input  wire clk_50,
		input  wire [17:0] SW,

		input  wire btn_resend,
		output wire led_config_finished,
		output wire vga_hsync,
		output wire vga_vsync,
		output wire [7:0] vga_r,
		output wire [7:0] vga_g,
		output wire [7:0] vga_b,
		output wire vga_blank_N,
		output wire vga_sync_N,
		output wire vga_CLK,
		input  wire ov7670_pclk,
		output wire ov7670_xclk,
		input  wire ov7670_vsync,
		input  wire ov7670_href,
		input  wire [7:0] ov7670_data,
		output wire ov7670_sioc,
		inout  wire ov7670_siod,
		output wire ov7670_pwdn,
		output wire ov7670_reset,
		output wire [17:0] LEDR,
		output wire [7:0] LEDG,
		
		inout [35:0] GPIO,

		output	I2C_SCLK,
		inout		I2C_SDAT,
		output  [6:0] HEX0,
		output  [6:0] HEX1,
		output  [6:0] HEX2,
		output  [6:0] HEX3,
		input   [3:0] KEY,
		input	  AUD_ADCDAT,
		input   AUD_BCLK,
		output  AUD_XCK,
		input   AUD_ADCLRCK,
		input   IRDA_RXD,


		inout  wire [7:0] LCD_DATA,    // external_interface.DATA
		output wire       LCD_ON,      //                   .ON
		output wire       LCD_BLON,    //                   .BLON
		output wire       LCD_EN,      //                   .EN
		output wire       LCD_RS,      //                   .RS
		output wire       LCD_RW       //                   .RW		
);


// DE2-115 board has an Altera Cyclone V E, which has ALTPLL's'
	wire clk_50_camera;
	wire clk_25_vga;
	wire wren;
	wire resend;
	wire nBlank;
	wire vSync;
	wire [16:0] wraddress;
	wire [11:0] wrdata;
	reg [16:0] rdaddress;
	wire [11:0] rddata;
	reg [30:0] vga_data;
	reg vga_start, vga_end, vga_ready;
	reg [11:0] filtered_data;
	
	my_altpll Inst_vga_pll(
	  .inclk0(clk_50),
	  .c0(clk_50_camera),
	  .c1(clk_25_vga)
	);
	
	assign resend = ~KEY[0];
	
	//------------ Camera Code Start -------------//
	
	address_generator address_generator_inst (
	 .clk			   (clk_25_vga),
	 .resend 		(resend),		// in: not connected
	 .vga_ready    (vga_ready),	// in: vga_ready
	 .rdaddress 	(rdaddress),	// out: to frame buffer & detect direction
	 .vga_start    (vga_start),
	 .vga_end      (vga_end)
   );
	
	ov7670_controller Inst_ov7670_controller(
    .clk(clk_50_camera),
	 .resend(resend),
	 .config_finished(led_config_finished),
	 .sioc(ov7670_sioc),
	 .siod(ov7670_siod),
	 .reset(ov7670_reset),
	 .pwdn(ov7670_pwdn),
	 .xclk(ov7670_xclk));

	ov7670_capture Inst_ov7670_capture(
	  .pclk(ov7670_pclk),
	  .vsync(ov7670_vsync),
	  .href(ov7670_href),
	  .d(ov7670_data),
	  .addr(wraddress),
	  .dout(wrdata),
	  .we(wren));

	frame_buffer Inst_frame_buffer(
	  .rdaddress(rdaddress),
	  .rdclock(clk_25_vga),
	  .q(rddata),
	  .wrclock(ov7670_pclk),
	  .wraddress(wraddress[16:0]),
	  .data(wrdata),
	  .wren(wren));
	  
  image_processor image_inst (
 
	 //inputs
	 .clk_25_vga(clk_25_vga),
	 .resend(resend),
	 .rddata(rddata),
	 .vga_ready(vga_ready),
	
	 //outputs
	 .vga_data(vga_data)
  );
  
  vga_scaled vga_init(
	  .clk_clk(clk_25_vga),                                         		//                                       clk.clk
	  .reset_reset_n(1'b1), // btn_resend                                  				//                                     reset.reset_n
	  .video_scaler_0_avalon_scaler_sink_startofpacket(vga_start), 		//         video_scaler_0_avalon_scaler_sink.startofpacket
	  .video_scaler_0_avalon_scaler_sink_endofpacket(vga_end),   			//                                          .endofpacket
	  .video_scaler_0_avalon_scaler_sink_valid(1'b1),   //  sink_value???                                           .valid
	  .video_scaler_0_avalon_scaler_sink_ready(vga_ready),         		//                                          .ready
	  .video_scaler_0_avalon_scaler_sink_data(vga_data),         			//                                          .data
	//		.video_scaler_0_avalon_scaler_sink_data(rddata), 
	  .video_vga_controller_0_external_interface_CLK(vga_CLK),   			// video_vga_controller_0_external_interface.CLK
	  .video_vga_controller_0_external_interface_HS(vga_hsync),    		//                                          .HS
	  .video_vga_controller_0_external_interface_VS(vga_vsync),    		//                                          .VS
	  .video_vga_controller_0_external_interface_BLANK(vga_blank_N), 	//                                          .BLANK
	  .video_vga_controller_0_external_interface_SYNC(vga_sync_N),  		//                                          .SYNC
	  .video_vga_controller_0_external_interface_R(vga_r),     			//                                          .R
	  .video_vga_controller_0_external_interface_G(vga_g),     			//                                          .G
	  .video_vga_controller_0_external_interface_B(vga_b)      			//                                          .B
	);
	
	//------------ Camera Code End ---------------//
	
	//------------ Microphone Start ----------------//
  
  logic [32:0] magnitude;

  localparam W        = 16;   //NOTE: To change this, you must also change the Twiddle factor initialisations in r22sdf/Twiddle.v. You can use r22sdf/twiddle_gen.pl.
  localparam NSamples = 1024; //NOTE: To change this, you must also change the SdfUnit instantiations in r22sdf/FFT.v accordingly.

  logic adc_clk; adc_pll adc_pll_u (.areset(1'b0),.inclk0(clk_50),.c0(adc_clk)); // generate 18.432 MHz clock
  logic i2c_clk; i2c_pll i2c_pll_u (.areset(1'b0),.inclk0(clk_50),.c0(i2c_clk)); // generate 20 kHz clock

  set_audio_encoder set_codec_u (.i2c_clk(i2c_clk), .I2C_SCLK(I2C_SCLK), .I2C_SDAT(I2C_SDAT));

  dstream #(.N(W))                audio_input ();
  dstream #(.N($clog2(NSamples))) pitch_output ();

  mic_load #(.N(W)) u_mic_load (
    .adclrc(AUD_ADCLRCK),
    .bclk(AUD_BCLK),
    .adcdat(AUD_ADCDAT),
    .sample_data(audio_input.data),
    .valid(audio_input.valid)
  );
    
  assign AUD_XCK = adc_clk;

  fft_pitch_detect #(.W(W), .NSamples(NSamples)) DUT (
    .clk(adc_clk),
    .audio_clk(AUD_BCLK),
    .reset(~KEY[0]),
    .audio_input(audio_input),
    .pitch_output(pitch_output),
	 .magnitude(magnitude)
  );

  display u_display (.clk(adc_clk),.value(pitch_output.data),.display0(HEX0),.display1(HEX1),.display2(HEX2),.display3(HEX3));

  //------------ Microphone End ------------------//
  
  //------------ IR Reader Begin ---------//
  
  wire [31:0] hex_data; 
  
  IR_RECEIVE IR_Reader(
					.iCLK(CLOCK_50), 
					.iRST_n(reset),        
					.iIRDA(IRDA_RXD),	// in: IR sensor from the board					
					.oDATA_READY(1),	// in: Ready for reading
					.oDATA(hex_data) 	// out: Unique button signature      
					);
					
  //------------ IR Reader End ---------//
  
  //------------ Ultrasonic Sensor Begin ---------//
  
	logic start, reset;
	logic echo, trigger;
	logic pll_clk, locked;
	logic [7:0] raw_distance;
	logic [7:0] avg_distance;

	assign echo = GPIO[34];
	assign GPIO[35] = trigger;

	PLL PPL_inst (
		.areset(reset),
		.inclk0(clk_50),
		.c0(pll_clk),
		.locked(locked)
	);

	logic [23:0] pulse_counter;  // 24-bit counter for 50 MHz clock to 4 Hz clock division
	localparam integer PULSE_PERIOD = 50_000_000 / (2 * 4);  // Division factor for 4 Hz

	always_ff @(posedge clk_50 or posedge reset) begin
		 if (reset) begin
			  pulse_counter <= 0;
			  measure_pulse <= 0;
		 end else begin
			  pulse_counter <= pulse_counter + 1;
			  if (pulse_counter >= PULSE_PERIOD) begin
					measure_pulse <= 1;  // Generate a short pulse
					pulse_counter <= 0;
			  end else begin
					measure_pulse <= 0;  // Keep it low otherwise
			  end
		 end
	end

	sensor_driver u0 (
	  .clk(clk_50),
	  .rst(measure_pulse),
	  .measure(pll_clk),
	  .echo(echo),
	  .trig(trigger), 
	  .distance(raw_distance)
	);
	  

	oned_convolution_filt ultra_oned (
		.clk(clk_50),
		.reset(reset),
		.distance(raw_distance),
		.avg_out(avg_distance)
	);
	
	assign LEDR = avg_distance;
  
  //------------ Ultrasonic Sensor End -----------//
  
  //------------ Direction Detection Start -------//
  
  parameter FOV = 25;
  reg [$clog2(FOV):0] 	direction;
  reg [$clog2(FOV):0] 	avg_direction;

  assign LEDG[7:1] = avg_direction;
  
  detect_direction detect_direction_inst (
		.clk 			(clk_50),
		.rdaddress 	(rdaddress),	// in: from address generator
		.rddata 		(rddata),		// in: from frame buffer
		.direction 	(direction)		// out: to drive logic
  );
  
  oned_convolution_filt direction_oned (
		.clk(clk_50),
		.reset(reset),
		.distance(direction),
		.avg_out(avg_direction)
	);
  
  //------------ Direction Detection End ---------//
  
  //------------ Drive Logic Begin ---------------//
  
  logic     valid;
  wire [2:0] command;

  
  drive_logic drive_logic_inst (
		.clk                (clk),
		.detected_direction (avg_direction),		// in: from detect direction
		.average_distance   (avg_distance),			// in: from ultrasonic
		.pitch              (pitch_output.data),	// in: from microphone
		.amplitude          (magnitude),				// in: from microphone
		.ir_command			  (hex_data),
		.drive_command      (command),				// out: to command translator - TODO: connect to command translator
		.valid              (valid)					// out: to command translator
	);
  
  //------------ Drive Logic End -----------------//
  
  //------------ Command Translator Start --------//
  
  logic cmd_ready;
  logic uart_ready;
  logic [7:0] ascii_out;

//  assign command = 3'd0;
  
  command_translator command_translator_inst (
		.clk       (clk_50),
		.command   (command),   // in: from drive logic
		.valid     (valid),		// in: from drive logic
		.uart_ready(uart_ready),// in: from UART
		.ascii_out (ascii_out), // out: to UART
		.cmd_ready (cmd_ready)  // out: to UART
	);
  
  
  uart_tx uart_tx_inst (
		.clk (clk_50),
		.data_tx (ascii_out),	// in: from command translator
		.valid (cmd_ready),		   // in: from command translator
		.uart_out(GPIO[5]),		// out: to base
		.tx_ready(uart_ready)	// out: to command translator
  );
  
  //------------ Command Translator End ----------//

  //------------ LCD Display Start ---------------//
  
  	wire       address;     //   avalon_lcd_slave.address
 	wire       chipselect;  //                   .chipselect
	wire       read;        //                   .read
	wire       write;       //                   .write
	wire [7:0] writedata;   //                   .writedata
	wire [7:0] readdata;    //                   .readdata
	wire       waitrequest; //                   .waitrequest

  lcd_display (
		 .clk(clk_50),
		 .reset(resend),
		 .command(command),
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

	char_display u_char_display (
		.clk         (clk_50),    //                clk.clk
		.reset       (resend),   //              reset.reset
		.address     (address),     //   avalon_lcd_slave.address
		.chipselect  (chipselect),  //                   .chipselect
		.read        (read),        //                   .read
		.write       (write),       //                   .write
		.writedata   (writedata),   //                   .writedata
		.readdata    (readdata),    //                   .readdata
		.waitrequest (waitrequest), //                   .waitrequest
		.LCD_DATA    (LCD_DATA),    // external_interface.export
		.LCD_ON      (LCD_ON),      //                   .export
		.LCD_BLON    (LCD_BLON),    //                   .export
		.LCD_EN      (LCD_EN),      //                   .export
		.LCD_RS      (LCD_RS),      //                   .export
		.LCD_RW      (LCD_RW)       //                   .export
	);

  //------------ LCD Display End -----------------//
  
endmodule
