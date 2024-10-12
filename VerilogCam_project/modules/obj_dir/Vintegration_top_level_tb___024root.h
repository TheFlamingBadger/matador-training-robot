// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vintegration_top_level_tb.h for the primary calling header

#ifndef VERILATED_VINTEGRATION_TOP_LEVEL_TB___024ROOT_H_
#define VERILATED_VINTEGRATION_TOP_LEVEL_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vintegration_top_level_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vintegration_top_level_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ image_processor_tb__DOT__clk_25_vga;
        CData/*0:0*/ image_processor_tb__DOT__clk;
        CData/*0:0*/ image_processor_tb__DOT__resend;
        CData/*0:0*/ image_processor_tb__DOT__vga_ready;
        CData/*0:0*/ image_processor_tb__DOT__next_button;
        CData/*0:0*/ image_processor_tb__DOT__prev_button;
        CData/*2:0*/ image_processor_tb__DOT__filter_number;
        CData/*0:0*/ image_processor_tb__DOT__lcd_reset;
        CData/*0:0*/ image_processor_tb__DOT__address;
        CData/*0:0*/ image_processor_tb__DOT__chipselect;
        CData/*0:0*/ image_processor_tb__DOT__write;
        CData/*0:0*/ image_processor_tb__DOT__waitrequest;
        CData/*7:0*/ image_processor_tb__DOT__readdata;
        CData/*1:0*/ image_processor_tb__DOT__response;
        CData/*7:0*/ image_processor_tb__DOT__writedata;
        CData/*2:0*/ image_processor_tb__DOT__dut_pixel_filt__DOT__range;
        CData/*5:0*/ image_processor_tb__DOT__dut_pixel_filt__DOT__temp_r_mod;
        CData/*5:0*/ image_processor_tb__DOT__dut_pixel_filt__DOT__temp_g_mod;
        CData/*5:0*/ image_processor_tb__DOT__dut_pixel_filt__DOT__temp_b_mod;
        CData/*0:0*/ image_processor_tb__DOT__dut_pixel_filt__DOT__temp_div_flag;
        CData/*2:0*/ image_processor_tb__DOT__dut_convolution_filt__DOT__locater;
        CData/*6:0*/ image_processor_tb__DOT__dut_convolution_filt__DOT____Vlvbound_h1510fb4b__0;
        CData/*6:0*/ image_processor_tb__DOT__dut_convolution_filt__DOT____Vlvbound_h9d72ff70__0;
        CData/*6:0*/ image_processor_tb__DOT__dut_convolution_filt__DOT____Vlvbound_h8b5708fe__0;
        CData/*1:0*/ image_processor_tb__DOT__dut_lcd_display__DOT__current_state;
        CData/*1:0*/ image_processor_tb__DOT__dut_lcd_display__DOT__next_state;
        CData/*0:0*/ image_processor_tb__DOT__dut_filter_fsm__DOT__next_button_q;
        CData/*0:0*/ image_processor_tb__DOT__dut_filter_fsm__DOT__prev_button_q;
        CData/*0:0*/ image_processor_tb__DOT__dut_filter_fsm__DOT__next_button_edge;
        CData/*0:0*/ image_processor_tb__DOT__dut_filter_fsm__DOT__prev_button_edge;
        CData/*3:0*/ image_processor_tb__DOT__dut_filter_fsm__DOT__next_state;
        CData/*3:0*/ image_processor_tb__DOT__dut_filter_fsm__DOT__current_state;
        CData/*3:0*/ image_processor_tb__DOT__dut_image_processor__DOT__r_out;
        CData/*3:0*/ image_processor_tb__DOT__dut_image_processor__DOT__g_out;
        CData/*3:0*/ image_processor_tb__DOT__dut_image_processor__DOT__b_out;
        CData/*4:0*/ image_processor_tb__DOT__dut_image_processor__DOT____Vlvbound_hc38d7be4__0;
        CData/*4:0*/ image_processor_tb__DOT__dut_image_processor__DOT____Vlvbound_h45361261__0;
        CData/*4:0*/ image_processor_tb__DOT__dut_image_processor__DOT____Vlvbound_h1a443aeb__0;
        CData/*0:0*/ __VdlySet__image_processor_tb__DOT__dut_image_processor__DOT__r_total_i5__v0;
        CData/*0:0*/ __VdlySet__image_processor_tb__DOT__dut_image_processor__DOT__g_total_i5__v0;
        CData/*0:0*/ __VdlySet__image_processor_tb__DOT__dut_image_processor__DOT__b_total_i5__v0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__image_processor_tb__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__image_processor_tb__DOT__clk_25_vga__0;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ image_processor_tb__DOT__rddata;
        SData/*15:0*/ image_processor_tb__DOT__audio_pitch;
        SData/*15:0*/ image_processor_tb__DOT__dut_image_processor__DOT__row_address;
        SData/*11:0*/ image_processor_tb__DOT__dut_image_processor__DOT__kernel_sum;
        SData/*11:0*/ image_processor_tb__DOT__dut_image_processor__DOT__processed_data;
        SData/*12:0*/ image_processor_tb__DOT__dut_image_processor__DOT__r_norm;
        SData/*12:0*/ image_processor_tb__DOT__dut_image_processor__DOT__g_norm;
        SData/*12:0*/ image_processor_tb__DOT__dut_image_processor__DOT__b_norm;
        SData/*11:0*/ image_processor_tb__DOT__dut_image_processor__DOT____Vlvbound_hbf167d76__0;
        SData/*11:0*/ image_processor_tb__DOT__dut_image_processor__DOT____Vlvbound_h467b6c63__0;
        SData/*11:0*/ image_processor_tb__DOT__dut_image_processor__DOT____Vlvbound_h525641c6__0;
        SData/*12:0*/ image_processor_tb__DOT__dut_image_processor__DOT____Vlvbound_hd07652d5__0;
        SData/*12:0*/ image_processor_tb__DOT__dut_image_processor__DOT____Vlvbound_hdf38932d__0;
        SData/*12:0*/ image_processor_tb__DOT__dut_image_processor__DOT____Vlvbound_h0fbecb6e__0;
        SData/*12:0*/ image_processor_tb__DOT__dut_image_processor__DOT____Vlvbound_hd07652d5__1;
        SData/*12:0*/ image_processor_tb__DOT__dut_image_processor__DOT____Vlvbound_hdf38932d__1;
        SData/*12:0*/ image_processor_tb__DOT__dut_image_processor__DOT____Vlvbound_h0fbecb6e__1;
        SData/*13:0*/ image_processor_tb__DOT__dut_image_processor__DOT____Vlvbound_h723c879e__0;
        SData/*13:0*/ image_processor_tb__DOT__dut_image_processor__DOT____Vlvbound_h6cccdc90__0;
    };
    struct {
        SData/*13:0*/ image_processor_tb__DOT__dut_image_processor__DOT____Vlvbound_had089f91__0;
        SData/*13:0*/ image_processor_tb__DOT__dut_image_processor__DOT____Vlvbound_h723c879e__1;
        SData/*13:0*/ image_processor_tb__DOT__dut_image_processor__DOT____Vlvbound_h6cccdc90__1;
        SData/*13:0*/ image_processor_tb__DOT__dut_image_processor__DOT____Vlvbound_had089f91__1;
        SData/*15:0*/ __VdlyVal__image_processor_tb__DOT__dut_image_processor__DOT__r_total_i5__v0;
        SData/*15:0*/ __VdlyVal__image_processor_tb__DOT__dut_image_processor__DOT__r_total_i5__v1;
        SData/*15:0*/ __VdlyVal__image_processor_tb__DOT__dut_image_processor__DOT__g_total_i5__v0;
        SData/*15:0*/ __VdlyVal__image_processor_tb__DOT__dut_image_processor__DOT__g_total_i5__v1;
        SData/*15:0*/ __VdlyVal__image_processor_tb__DOT__dut_image_processor__DOT__b_total_i5__v0;
        SData/*15:0*/ __VdlyVal__image_processor_tb__DOT__dut_image_processor__DOT__b_total_i5__v1;
        IData/*16:0*/ image_processor_tb__DOT__rdaddress;
        IData/*31:0*/ image_processor_tb__DOT__dut_convolution_filt__DOT__determine_kernel__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ image_processor_tb__DOT__dut_convolution_filt__DOT__determine_kernel__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ image_processor_tb__DOT__dut_convolution_filt__DOT__determine_kernel__DOT__unnamedblk3__DOT__i;
        IData/*31:0*/ image_processor_tb__DOT__dut_lcd_display__DOT__next_instruction_index;
        IData/*31:0*/ image_processor_tb__DOT__dut_lcd_display__DOT__instruction_index;
        IData/*31:0*/ image_processor_tb__DOT__dut_image_processor__DOT__col;
        IData/*31:0*/ image_processor_tb__DOT__dut_image_processor__DOT__col_old;
        IData/*31:0*/ image_processor_tb__DOT__dut_image_processor__DOT__row;
        IData/*31:0*/ image_processor_tb__DOT__dut_image_processor__DOT__row_old;
        IData/*16:0*/ image_processor_tb__DOT__dut_image_processor__DOT__r_total_f;
        IData/*16:0*/ image_processor_tb__DOT__dut_image_processor__DOT__g_total_f;
        IData/*16:0*/ image_processor_tb__DOT__dut_image_processor__DOT__b_total_f;
        IData/*16:0*/ image_processor_tb__DOT__dut_image_processor__DOT__r_total;
        IData/*16:0*/ image_processor_tb__DOT__dut_image_processor__DOT__g_total;
        IData/*16:0*/ image_processor_tb__DOT__dut_image_processor__DOT__b_total;
        IData/*31:0*/ image_processor_tb__DOT__dut_image_processor__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ image_processor_tb__DOT__dut_image_processor__DOT__convolute_shift_register__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ image_processor_tb__DOT__dut_image_processor__DOT__convolute_shift_register__DOT__unnamedblk3__DOT__i;
        IData/*31:0*/ image_processor_tb__DOT__dut_image_processor__DOT__convolute_shift_register__DOT__unnamedblk4__DOT__i;
        IData/*31:0*/ image_processor_tb__DOT__dut_image_processor__DOT__convolute_shift_register__DOT__unnamedblk5__DOT__i;
        IData/*31:0*/ image_processor_tb__DOT__dut_image_processor__DOT__convolute_shift_register__DOT__unnamedblk6__DOT__i;
        IData/*31:0*/ __Vdly__image_processor_tb__DOT__dut_image_processor__DOT__col;
        IData/*31:0*/ __Vdly__image_processor_tb__DOT__dut_image_processor__DOT__row;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*6:0*/, 25> image_processor_tb__DOT__curr_kernel;
        VlUnpacked<CData/*6:0*/, 25> image_processor_tb__DOT__dut_convolution_filt__DOT__temp_kernel;
        VlUnpacked<VlUnpacked<CData/*6:0*/, 25>, 4> image_processor_tb__DOT__dut_convolution_filt__DOT__clarity_kernels;
        VlUnpacked<VlUnpacked<CData/*6:0*/, 25>, 4> image_processor_tb__DOT__dut_convolution_filt__DOT__sobel_kernels;
        VlUnpacked<SData/*8:0*/, 10> image_processor_tb__DOT__dut_lcd_display__DOT__instructions;
        VlUnpacked<VlUnpacked<SData/*11:0*/, 320>, 5> image_processor_tb__DOT__dut_image_processor__DOT__row_lsfr;
        VlUnpacked<CData/*6:0*/, 25> image_processor_tb__DOT__dut_image_processor__DOT__kernel_values;
        VlUnpacked<SData/*11:0*/, 25> image_processor_tb__DOT__dut_image_processor__DOT__r_products;
        VlUnpacked<SData/*11:0*/, 25> image_processor_tb__DOT__dut_image_processor__DOT__g_products;
        VlUnpacked<SData/*11:0*/, 25> image_processor_tb__DOT__dut_image_processor__DOT__b_products;
        VlUnpacked<CData/*4:0*/, 25> image_processor_tb__DOT__dut_image_processor__DOT__r_row_l;
        VlUnpacked<CData/*4:0*/, 25> image_processor_tb__DOT__dut_image_processor__DOT__g_row_l;
        VlUnpacked<CData/*4:0*/, 25> image_processor_tb__DOT__dut_image_processor__DOT__b_row_l;
        VlUnpacked<SData/*11:0*/, 25> image_processor_tb__DOT__dut_image_processor__DOT__r_total_indexed;
        VlUnpacked<SData/*11:0*/, 25> image_processor_tb__DOT__dut_image_processor__DOT__g_total_indexed;
        VlUnpacked<SData/*11:0*/, 25> image_processor_tb__DOT__dut_image_processor__DOT__b_total_indexed;
        VlUnpacked<SData/*12:0*/, 13> image_processor_tb__DOT__dut_image_processor__DOT__r_total_i2;
        VlUnpacked<SData/*12:0*/, 13> image_processor_tb__DOT__dut_image_processor__DOT__g_total_i2;
        VlUnpacked<SData/*12:0*/, 13> image_processor_tb__DOT__dut_image_processor__DOT__b_total_i2;
        VlUnpacked<SData/*13:0*/, 7> image_processor_tb__DOT__dut_image_processor__DOT__r_total_i3;
        VlUnpacked<SData/*13:0*/, 7> image_processor_tb__DOT__dut_image_processor__DOT__g_total_i3;
        VlUnpacked<SData/*13:0*/, 7> image_processor_tb__DOT__dut_image_processor__DOT__b_total_i3;
        VlUnpacked<SData/*14:0*/, 4> image_processor_tb__DOT__dut_image_processor__DOT__r_total_i4;
        VlUnpacked<SData/*14:0*/, 4> image_processor_tb__DOT__dut_image_processor__DOT__g_total_i4;
        VlUnpacked<SData/*14:0*/, 4> image_processor_tb__DOT__dut_image_processor__DOT__b_total_i4;
        VlUnpacked<SData/*15:0*/, 4> image_processor_tb__DOT__dut_image_processor__DOT__r_total_i5;
        VlUnpacked<SData/*15:0*/, 4> image_processor_tb__DOT__dut_image_processor__DOT__g_total_i5;
        VlUnpacked<SData/*15:0*/, 4> image_processor_tb__DOT__dut_image_processor__DOT__b_total_i5;
        VlUnpacked<SData/*11:0*/, 5> image_processor_tb__DOT__dut_image_processor__DOT__r_subtotals;
    };
    struct {
        VlUnpacked<SData/*11:0*/, 5> image_processor_tb__DOT__dut_image_processor__DOT__g_subtotals;
        VlUnpacked<SData/*11:0*/, 5> image_processor_tb__DOT__dut_image_processor__DOT__b_subtotals;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vintegration_top_level_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vintegration_top_level_tb___024root(Vintegration_top_level_tb__Syms* symsp, const char* v__name);
    ~Vintegration_top_level_tb___024root();
    VL_UNCOPYABLE(Vintegration_top_level_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
