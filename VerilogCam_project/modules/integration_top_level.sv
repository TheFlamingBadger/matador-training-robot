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
		output wire [3:0] LEDG,
		
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

	// take the inverted push button because KEY0 on DE2-115 board generates
	// a signal 111000111; with 1 with not pressed and 0 when pressed/pushed;
	assign resend =  0;
  
  //------------ Direction Detection Start -------//
  
  parameter FOV = 25;
  reg [$clog2(FOV):0] 	direction;
  reg [2:0]			  		command;
  reg 						tx_ready;
	 
  address_generator address_generator_inst (
		.clk			(clk_50),
		.resend 		(resend),	// in: not connected
		.rdaddress 	(rdaddress)	// out: to frame buffer & detect direction
  );
  
  
  detect_direction detect_direction_inst (
		.clk 			(clk_50),
		.rdaddress 	(rdaddress),	// in: from address generator
		.rddata 		(rddata),		// in: from frame buffer
		.direction 	(direction)		// out: to drive logic
  );
  
  //------------ Direction Detection End ---------//
  
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

	sensor_driver u0(
	  .clk(clk_50),
	  .rst(measure_pulse),
	  .measure(pll_clk),
	  .echo(echo),
	  .trig(trigger), 
	  .distance(raw_distance)
	);
	  

	oned_convolution_filt (
		.clk(clk_50),
		.reset(reset),
		.distance(raw_distance),
		.avg_out(avg_distance)
	);
	
	assign LEDR = avg_distance;
  
  //------------ Ultrasonic Sensor End -----------//
  
  //------------ Drive Logic Begin ---------------//
  
  logic valid;
  
  drive_logic drive_logic_inst (
		.clk                (clk),
		.detected_direction (direction),				// in: from detect direction
		.average_distance   (avg_distance),			// in: from ultrasonic
		.pitch              (pitch_output.data),	// in: from microphone
		.amplitude          (magnitude),				// in: from microphone
		.drive_command      (),				// out: to command translator
		.valid              (valid)					// out: to command translator
	);
  
  //------------ Drive Logic End -----------------//
  
  //------------ Command Translator Start --------//
  
  logic cmd_ready;
  
  assign command = 3'b0;
  
  command_translator command_translator_inst (
		.clk       (clk_50),
		.command   (command),   // in: from drive logic
		.valid     (valid),		// in: from drive logic
		.ascii_out (ascii_out), // out: to UART
		.cmd_ready (cmd_ready)  // out: to UART
	);
  
  logic [7:0] test_ascii;
  assign test_ascii = 8'd38;
  logic test_valid;
//  assign test_valid = 1;
  
  initial test_valid = 1'b0;

	always begin
		 #10 
		 test_valid = ~test_valid;
//		 if (test_valid) begin
//			test_ascii = 8'd36;
//		 end
//		 else begin
//			test_ascii = 8'd38;
//		 end
	end
  
  uart_tx uart_tx_inst (
		.clk (clk_50),
		.data_tx (ascii_out),	// in: from command translator
		.valid (valid),		   // in: from command translator
		.uart_out(GPIO[5])		// out: to base
  );
  
  //------------ Command Translator End ----------//
  
endmodule
