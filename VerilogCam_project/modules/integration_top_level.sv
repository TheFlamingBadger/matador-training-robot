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

	// take the inverted push button because KEY0 on DE2-115 board generates
	// a signal 111000111; with 1 with not pressed and 0 when pressed/pushed;
	assign resend =  0;
		
  //------------ Stream Mif Start ----------------//

	stream_mif stream_mif_inst (
		.clk           (clk_25_vga),  // Same clk domain as image processor
		.data          (rddata),      // To image processor
		.rdaddress     (rdaddress)    // From image processor
	);

  //------------ Stream Mif End ------------------//
  
  //------------ Address Generator Start ---------//
	 
  
  
  //------------ Address Generator End -----------//
  
  //------------ Command Translator Start --------//
	 
  command_translator command_translator_inst (
		.clk       (clk_50),
		.command   (command),   // in: from drive logic
		.valid     (valid),		// in: from drive logic
		.ascii_out (ascii_out), // out: to UART
		.ready     (ready)      // out: to UART
	);
  
  //------------ Command Translator End ----------//

  //------------ Microphone Start ----------------//

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
    .pitch_output(pitch_output)
  );

  display u_display (.clk(adc_clk),.value(pitch_output.data),.display0(HEX0),.display1(HEX1),.display2(HEX2),.display3(HEX3));

  //------------ Microphone End ------------------//
  
endmodule
