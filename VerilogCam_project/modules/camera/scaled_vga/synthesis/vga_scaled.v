// vga_scaled.v

// Generated using ACDS version 20.1 711

`timescale 1 ps / 1 ps
module vga_scaled (
		input  wire        clk_clk,                                         //                                       clk.clk
		input  wire        reset_reset_n,                                   //                                     reset.reset_n
		input  wire        video_scaler_0_avalon_scaler_sink_startofpacket, //         video_scaler_0_avalon_scaler_sink.startofpacket
		input  wire        video_scaler_0_avalon_scaler_sink_endofpacket,   //                                          .endofpacket
		input  wire        video_scaler_0_avalon_scaler_sink_valid,         //                                          .valid
		output wire        video_scaler_0_avalon_scaler_sink_ready,         //                                          .ready
		input  wire [29:0] video_scaler_0_avalon_scaler_sink_data,          //                                          .data
		output wire        video_vga_controller_0_external_interface_CLK,   // video_vga_controller_0_external_interface.CLK
		output wire        video_vga_controller_0_external_interface_HS,    //                                          .HS
		output wire        video_vga_controller_0_external_interface_VS,    //                                          .VS
		output wire        video_vga_controller_0_external_interface_BLANK, //                                          .BLANK
		output wire        video_vga_controller_0_external_interface_SYNC,  //                                          .SYNC
		output wire [7:0]  video_vga_controller_0_external_interface_R,     //                                          .R
		output wire [7:0]  video_vga_controller_0_external_interface_G,     //                                          .G
		output wire [7:0]  video_vga_controller_0_external_interface_B      //                                          .B
	);

	wire         video_scaler_0_avalon_scaler_source_valid;         // video_scaler_0:stream_out_valid -> avalon_st_adapter:in_0_valid
	wire  [29:0] video_scaler_0_avalon_scaler_source_data;          // video_scaler_0:stream_out_data -> avalon_st_adapter:in_0_data
	wire         video_scaler_0_avalon_scaler_source_ready;         // avalon_st_adapter:in_0_ready -> video_scaler_0:stream_out_ready
	wire   [1:0] video_scaler_0_avalon_scaler_source_channel;       // video_scaler_0:stream_out_channel -> avalon_st_adapter:in_0_channel
	wire         video_scaler_0_avalon_scaler_source_startofpacket; // video_scaler_0:stream_out_startofpacket -> avalon_st_adapter:in_0_startofpacket
	wire         video_scaler_0_avalon_scaler_source_endofpacket;   // video_scaler_0:stream_out_endofpacket -> avalon_st_adapter:in_0_endofpacket
	wire         avalon_st_adapter_out_0_valid;                     // avalon_st_adapter:out_0_valid -> video_vga_controller_0:valid
	wire  [29:0] avalon_st_adapter_out_0_data;                      // avalon_st_adapter:out_0_data -> video_vga_controller_0:data
	wire         avalon_st_adapter_out_0_ready;                     // video_vga_controller_0:ready -> avalon_st_adapter:out_0_ready
	wire         avalon_st_adapter_out_0_startofpacket;             // avalon_st_adapter:out_0_startofpacket -> video_vga_controller_0:startofpacket
	wire         avalon_st_adapter_out_0_endofpacket;               // avalon_st_adapter:out_0_endofpacket -> video_vga_controller_0:endofpacket
	wire         rst_controller_reset_out_reset;                    // rst_controller:reset_out -> [avalon_st_adapter:in_rst_0_reset, video_scaler_0:reset, video_vga_controller_0:reset]

	vga_scaled_video_scaler_0 video_scaler_0 (
		.clk                      (clk_clk),                                           //                  clk.clk
		.reset                    (rst_controller_reset_out_reset),                    //                reset.reset
		.stream_in_startofpacket  (video_scaler_0_avalon_scaler_sink_startofpacket),   //   avalon_scaler_sink.startofpacket
		.stream_in_endofpacket    (video_scaler_0_avalon_scaler_sink_endofpacket),     //                     .endofpacket
		.stream_in_valid          (video_scaler_0_avalon_scaler_sink_valid),           //                     .valid
		.stream_in_ready          (video_scaler_0_avalon_scaler_sink_ready),           //                     .ready
		.stream_in_data           (video_scaler_0_avalon_scaler_sink_data),            //                     .data
		.stream_out_ready         (video_scaler_0_avalon_scaler_source_ready),         // avalon_scaler_source.ready
		.stream_out_startofpacket (video_scaler_0_avalon_scaler_source_startofpacket), //                     .startofpacket
		.stream_out_endofpacket   (video_scaler_0_avalon_scaler_source_endofpacket),   //                     .endofpacket
		.stream_out_valid         (video_scaler_0_avalon_scaler_source_valid),         //                     .valid
		.stream_out_data          (video_scaler_0_avalon_scaler_source_data),          //                     .data
		.stream_out_channel       (video_scaler_0_avalon_scaler_source_channel)        //                     .channel
	);

	vga_scaled_video_vga_controller_0 video_vga_controller_0 (
		.clk           (clk_clk),                                         //                clk.clk
		.reset         (rst_controller_reset_out_reset),                  //              reset.reset
		.data          (avalon_st_adapter_out_0_data),                    //    avalon_vga_sink.data
		.startofpacket (avalon_st_adapter_out_0_startofpacket),           //                   .startofpacket
		.endofpacket   (avalon_st_adapter_out_0_endofpacket),             //                   .endofpacket
		.valid         (avalon_st_adapter_out_0_valid),                   //                   .valid
		.ready         (avalon_st_adapter_out_0_ready),                   //                   .ready
		.VGA_CLK       (video_vga_controller_0_external_interface_CLK),   // external_interface.export
		.VGA_HS        (video_vga_controller_0_external_interface_HS),    //                   .export
		.VGA_VS        (video_vga_controller_0_external_interface_VS),    //                   .export
		.VGA_BLANK     (video_vga_controller_0_external_interface_BLANK), //                   .export
		.VGA_SYNC      (video_vga_controller_0_external_interface_SYNC),  //                   .export
		.VGA_R         (video_vga_controller_0_external_interface_R),     //                   .export
		.VGA_G         (video_vga_controller_0_external_interface_G),     //                   .export
		.VGA_B         (video_vga_controller_0_external_interface_B)      //                   .export
	);

	vga_scaled_avalon_st_adapter #(
		.inBitsPerSymbol (10),
		.inUsePackets    (1),
		.inDataWidth     (30),
		.inChannelWidth  (2),
		.inErrorWidth    (0),
		.inUseEmptyPort  (0),
		.inUseValid      (1),
		.inUseReady      (1),
		.inReadyLatency  (0),
		.outDataWidth    (30),
		.outChannelWidth (0),
		.outErrorWidth   (0),
		.outUseEmptyPort (0),
		.outUseValid     (1),
		.outUseReady     (1),
		.outReadyLatency (0)
	) avalon_st_adapter (
		.in_clk_0_clk        (clk_clk),                                           // in_clk_0.clk
		.in_rst_0_reset      (rst_controller_reset_out_reset),                    // in_rst_0.reset
		.in_0_data           (video_scaler_0_avalon_scaler_source_data),          //     in_0.data
		.in_0_valid          (video_scaler_0_avalon_scaler_source_valid),         //         .valid
		.in_0_ready          (video_scaler_0_avalon_scaler_source_ready),         //         .ready
		.in_0_startofpacket  (video_scaler_0_avalon_scaler_source_startofpacket), //         .startofpacket
		.in_0_endofpacket    (video_scaler_0_avalon_scaler_source_endofpacket),   //         .endofpacket
		.in_0_channel        (video_scaler_0_avalon_scaler_source_channel),       //         .channel
		.out_0_data          (avalon_st_adapter_out_0_data),                      //    out_0.data
		.out_0_valid         (avalon_st_adapter_out_0_valid),                     //         .valid
		.out_0_ready         (avalon_st_adapter_out_0_ready),                     //         .ready
		.out_0_startofpacket (avalon_st_adapter_out_0_startofpacket),             //         .startofpacket
		.out_0_endofpacket   (avalon_st_adapter_out_0_endofpacket)                //         .endofpacket
	);

	altera_reset_controller #(
		.NUM_RESET_INPUTS          (1),
		.OUTPUT_RESET_SYNC_EDGES   ("deassert"),
		.SYNC_DEPTH                (2),
		.RESET_REQUEST_PRESENT     (0),
		.RESET_REQ_WAIT_TIME       (1),
		.MIN_RST_ASSERTION_TIME    (3),
		.RESET_REQ_EARLY_DSRT_TIME (1),
		.USE_RESET_REQUEST_IN0     (0),
		.USE_RESET_REQUEST_IN1     (0),
		.USE_RESET_REQUEST_IN2     (0),
		.USE_RESET_REQUEST_IN3     (0),
		.USE_RESET_REQUEST_IN4     (0),
		.USE_RESET_REQUEST_IN5     (0),
		.USE_RESET_REQUEST_IN6     (0),
		.USE_RESET_REQUEST_IN7     (0),
		.USE_RESET_REQUEST_IN8     (0),
		.USE_RESET_REQUEST_IN9     (0),
		.USE_RESET_REQUEST_IN10    (0),
		.USE_RESET_REQUEST_IN11    (0),
		.USE_RESET_REQUEST_IN12    (0),
		.USE_RESET_REQUEST_IN13    (0),
		.USE_RESET_REQUEST_IN14    (0),
		.USE_RESET_REQUEST_IN15    (0),
		.ADAPT_RESET_REQUEST       (0)
	) rst_controller (
		.reset_in0      (~reset_reset_n),                 // reset_in0.reset
		.clk            (clk_clk),                        //       clk.clk
		.reset_out      (rst_controller_reset_out_reset), // reset_out.reset
		.reset_req      (),                               // (terminated)
		.reset_req_in0  (1'b0),                           // (terminated)
		.reset_in1      (1'b0),                           // (terminated)
		.reset_req_in1  (1'b0),                           // (terminated)
		.reset_in2      (1'b0),                           // (terminated)
		.reset_req_in2  (1'b0),                           // (terminated)
		.reset_in3      (1'b0),                           // (terminated)
		.reset_req_in3  (1'b0),                           // (terminated)
		.reset_in4      (1'b0),                           // (terminated)
		.reset_req_in4  (1'b0),                           // (terminated)
		.reset_in5      (1'b0),                           // (terminated)
		.reset_req_in5  (1'b0),                           // (terminated)
		.reset_in6      (1'b0),                           // (terminated)
		.reset_req_in6  (1'b0),                           // (terminated)
		.reset_in7      (1'b0),                           // (terminated)
		.reset_req_in7  (1'b0),                           // (terminated)
		.reset_in8      (1'b0),                           // (terminated)
		.reset_req_in8  (1'b0),                           // (terminated)
		.reset_in9      (1'b0),                           // (terminated)
		.reset_req_in9  (1'b0),                           // (terminated)
		.reset_in10     (1'b0),                           // (terminated)
		.reset_req_in10 (1'b0),                           // (terminated)
		.reset_in11     (1'b0),                           // (terminated)
		.reset_req_in11 (1'b0),                           // (terminated)
		.reset_in12     (1'b0),                           // (terminated)
		.reset_req_in12 (1'b0),                           // (terminated)
		.reset_in13     (1'b0),                           // (terminated)
		.reset_req_in13 (1'b0),                           // (terminated)
		.reset_in14     (1'b0),                           // (terminated)
		.reset_req_in14 (1'b0),                           // (terminated)
		.reset_in15     (1'b0),                           // (terminated)
		.reset_req_in15 (1'b0)                            // (terminated)
	);

endmodule
