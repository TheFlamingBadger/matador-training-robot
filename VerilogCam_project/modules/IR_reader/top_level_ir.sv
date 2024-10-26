module top_level_ir
(
	CLOCK_50,
	KEY,
	HEX4,
	HEX5,
	HEX6,
	HEX7,
	IRDA_RXD,   
);

	input		          		CLOCK_50;
	input		     [3:0]		KEY;
	output		  [6:0]		HEX4;
	output		  [6:0]		HEX5;
	output		  [6:0]		HEX6;
	output		  [6:0]		HEX7;
	input		          		IRDA_RXD;

	wire    data_ready;        //IR data_ready flag
	//reg   data_read;         //read 
	wire    [31:0] hex_data;   //seg data input
	wire    clk50;             //pll 50M output for irda
 
	pll1 u0(
			.inclk0(CLOCK_50),
			//irda clock 50M 
			.c0(clk50),          
			.c1()
	);

	IR_RECEIVE u1(
						///clk 50MHz////
						.iCLK(clk50), 
						//reset          
						.iRST_n(KEY[0]),        
						//IRDA code input
						.iIRDA(IRDA_RXD), 
						//read command      
						//.iREAD(data_read),
						//data ready      					
						.oDATA_READY(data_ready),
						//decoded data 32bit
						.oDATA(hex_data)        
	);
					
	//the key code is display on HEX0 ~ HEX3
	//the custom code is display on HEX4 ~ HEX7
	
	SEG_HEX u7( //display the first hex of key on HEX7
				  .iDIG(hex_data[19:16]),
				  .oHEX_D(HEX7)
	);
	
	SEG_HEX u6( //display the second hex of key on HEX6
				  .iDIG(hex_data[23:20]),
				  .oHEX_D(HEX6)
	);
			  
	SEG_HEX u5( //display the third hex of key on HEX5
				  .iDIG(hex_data[27:24]),
				  .oHEX_D(HEX5)
	);
				  
	SEG_HEX u4( //display the fourth hex of key on HEX4
				.iDIG(hex_data[31:28]),         
				.oHEX_D(HEX4)
	);
         
endmodule
