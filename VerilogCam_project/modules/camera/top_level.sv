// File digital_cam_impl1/top_level.vhd translated with vhd2vl v3.0 VHDL to Verilog RTL translator
// vhd2vl settings:
//  * Verilog Module Declaration Style: 2001

// vhd2vl is Free (libre) Software:
//   Copyright (C) 2001 Vincenzo Liguori - Ocean Logic Pty Ltd
//     http://www.ocean-logic.com
//   Modifications Copyright (C) 2006 Mark Gonzales - PMC Sierra Inc
//   Modifications (C) 2010 Shankar Giri
//   Modifications Copyright (C) 2002-2017 Larry Doolittle
//     http://doolittle.icarus.com/~larry/vhd2vl/
//   Modifications (C) 2017 Rodrigo A. Melo
//
//   vhd2vl comes with ABSOLUTELY NO WARRANTY.  Always check the resulting
//   Verilog for correctness, ideally with a formal verification tool.
//
//   You are welcome to redistribute vhd2vl under certain conditions.
//   See the license (GPLv2) file included with the source for details.

// The result of translation follows.  Its copyright status should be
// considered unchanged from the original VHDL.

// cristinel ababei; Jan.29.2015; CopyLeft (CL);
// code name: "digital cam implementation #1";
// project done using Quartus II 13.1 and tested on DE2-115;
//
// this design basically connects a CMOS camera (OV7670 module) to
// DE2-115 board; video frames are picked up from camera, buffered
// on the FPGA (using embedded RAM), and displayed on the VGA monitor,
// which is also connected to the board; clock signals generated
// inside FPGA using ALTPLL's that take as input the board's 50MHz signal
// from on-board oscillator; 
//
// this whole project is an adaptation of Mike Field's original implementation 
// that can be found here:
// http://hamsterworks.co.nz/mediawiki/index.php/OV7670_camera
// no timescale needed

module top_level(
input  wire clk_50,
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
  .c1(clk_25_vga));

// take the inverted push button because KEY0 on DE2-115 board generates
// a signal 111000111; with 1 with not pressed and 0 when pressed/pushed;
//assign resend =  ~btn_resend;
assign resend = ~KEY[0];


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
	 .vga_ready(vga_ready)
	
	 //outputs
    .rdaddress(rdaddress),
    .vga_start(vga_start),
    .vga_end(vga_end),
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

  //------------ MICROPHONE-START ------------//

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

  //------------ MICROPHONE-END --------------//

  //------------ FSM & LCD START -------------//
  
	wire       address;     //   avalon_lcd_slave.address
	wire       chipselect;  //                   .chipselect
	wire       read;        //                   .read
	wire       write;       //                   .write
	wire [7:0] writedata;   //                   .writedata
	wire [7:0] readdata;    //                   .readdata
	wire       waitrequest; //                   .waitrequest
	
	// Next and previous filter buttons
	wire prev_button, next_button;

	debounce debounce_prev (
	  .clk(clk_50),
	  .button(~KEY[2]),
	  .button_pressed(prev_button)
	);

	debounce debounce_next (
	  .clk(clk_50),
	  .button(~KEY[3]),
	  .button_pressed(next_button)
	);

	// Filter select FSM module
	wire [2:0] filter_number;
	wire lcd_reset;

	filter_fsm filter_fsm_inst (
	  .clk(clk_50),
	  .lcd_reset(lcd_reset),		  // to lcd module
	  .next_button(next_button),    // from debounce_next
	  .prev_button(prev_button),    // from debounce_prev
	  .filter_number(filter_number) // to pixel_filter and convolution_filter
	);
	
	lcd_display (
		 .clk(clk_50),
		 .reset(lcd_reset),
		 .filter_number(filter_number),
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
		.reset       (lcd_reset),   //              reset.reset
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
	
	//------------ FSM & LCD END --------------//
  
endmodule
