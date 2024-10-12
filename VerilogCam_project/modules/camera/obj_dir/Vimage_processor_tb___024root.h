// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vimage_processor_tb.h for the primary calling header

#ifndef VERILATED_VIMAGE_PROCESSOR_TB___024ROOT_H_
#define VERILATED_VIMAGE_PROCESSOR_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vimage_processor_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vimage_processor_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ image_processor_tb__DOT__clk_25_vga;
        CData/*0:0*/ image_processor_tb__DOT__resend;
        CData/*0:0*/ image_processor_tb__DOT__vga_ready;
        CData/*5:0*/ image_processor_tb__DOT__r_mod;
        CData/*5:0*/ image_processor_tb__DOT__g_mod;
        CData/*5:0*/ image_processor_tb__DOT__b_mod;
        CData/*0:0*/ image_processor_tb__DOT__div_flag;
        CData/*3:0*/ image_processor_tb__DOT__dut__DOT__r_out;
        CData/*3:0*/ image_processor_tb__DOT__dut__DOT__g_out;
        CData/*3:0*/ image_processor_tb__DOT__dut__DOT__b_out;
        CData/*4:0*/ image_processor_tb__DOT__dut__DOT____Vlvbound_hc38d7be4__0;
        CData/*4:0*/ image_processor_tb__DOT__dut__DOT____Vlvbound_h45361261__0;
        CData/*4:0*/ image_processor_tb__DOT__dut__DOT____Vlvbound_h1a443aeb__0;
        CData/*0:0*/ __VdlySet__image_processor_tb__DOT__dut__DOT__r_total_i5__v0;
        CData/*0:0*/ __VdlySet__image_processor_tb__DOT__dut__DOT__g_total_i5__v0;
        CData/*0:0*/ __VdlySet__image_processor_tb__DOT__dut__DOT__b_total_i5__v0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__image_processor_tb__DOT__clk_25_vga__0;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ image_processor_tb__DOT__rddata;
        SData/*15:0*/ image_processor_tb__DOT__dut__DOT__row_address;
        SData/*11:0*/ image_processor_tb__DOT__dut__DOT__kernel_sum;
        SData/*11:0*/ image_processor_tb__DOT__dut__DOT__processed_data;
        SData/*12:0*/ image_processor_tb__DOT__dut__DOT__r_norm;
        SData/*12:0*/ image_processor_tb__DOT__dut__DOT__g_norm;
        SData/*12:0*/ image_processor_tb__DOT__dut__DOT__b_norm;
        SData/*11:0*/ image_processor_tb__DOT__dut__DOT____Vlvbound_hbf167d76__0;
        SData/*11:0*/ image_processor_tb__DOT__dut__DOT____Vlvbound_h467b6c63__0;
        SData/*11:0*/ image_processor_tb__DOT__dut__DOT____Vlvbound_h525641c6__0;
        SData/*12:0*/ image_processor_tb__DOT__dut__DOT____Vlvbound_hd07652d5__0;
        SData/*12:0*/ image_processor_tb__DOT__dut__DOT____Vlvbound_hdf38932d__0;
        SData/*12:0*/ image_processor_tb__DOT__dut__DOT____Vlvbound_h0fbecb6e__0;
        SData/*12:0*/ image_processor_tb__DOT__dut__DOT____Vlvbound_hd07652d5__1;
        SData/*12:0*/ image_processor_tb__DOT__dut__DOT____Vlvbound_hdf38932d__1;
        SData/*12:0*/ image_processor_tb__DOT__dut__DOT____Vlvbound_h0fbecb6e__1;
        SData/*13:0*/ image_processor_tb__DOT__dut__DOT____Vlvbound_h723c879e__0;
        SData/*13:0*/ image_processor_tb__DOT__dut__DOT____Vlvbound_h6cccdc90__0;
        SData/*13:0*/ image_processor_tb__DOT__dut__DOT____Vlvbound_had089f91__0;
        SData/*13:0*/ image_processor_tb__DOT__dut__DOT____Vlvbound_h723c879e__1;
        SData/*13:0*/ image_processor_tb__DOT__dut__DOT____Vlvbound_h6cccdc90__1;
        SData/*13:0*/ image_processor_tb__DOT__dut__DOT____Vlvbound_had089f91__1;
        SData/*15:0*/ __VdlyVal__image_processor_tb__DOT__dut__DOT__r_total_i5__v0;
        SData/*15:0*/ __VdlyVal__image_processor_tb__DOT__dut__DOT__r_total_i5__v1;
        SData/*15:0*/ __VdlyVal__image_processor_tb__DOT__dut__DOT__g_total_i5__v0;
        SData/*15:0*/ __VdlyVal__image_processor_tb__DOT__dut__DOT__g_total_i5__v1;
        SData/*15:0*/ __VdlyVal__image_processor_tb__DOT__dut__DOT__b_total_i5__v0;
        SData/*15:0*/ __VdlyVal__image_processor_tb__DOT__dut__DOT__b_total_i5__v1;
        IData/*16:0*/ image_processor_tb__DOT__rdaddress;
        IData/*16:0*/ image_processor_tb__DOT__prev_address;
        IData/*31:0*/ image_processor_tb__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ image_processor_tb__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ image_processor_tb__DOT__dut__DOT__col;
        IData/*31:0*/ image_processor_tb__DOT__dut__DOT__col_old;
        IData/*31:0*/ image_processor_tb__DOT__dut__DOT__row;
        IData/*31:0*/ image_processor_tb__DOT__dut__DOT__row_old;
        IData/*16:0*/ image_processor_tb__DOT__dut__DOT__r_total_f;
        IData/*16:0*/ image_processor_tb__DOT__dut__DOT__g_total_f;
        IData/*16:0*/ image_processor_tb__DOT__dut__DOT__b_total_f;
        IData/*16:0*/ image_processor_tb__DOT__dut__DOT__r_total;
        IData/*16:0*/ image_processor_tb__DOT__dut__DOT__g_total;
        IData/*16:0*/ image_processor_tb__DOT__dut__DOT__b_total;
        IData/*31:0*/ image_processor_tb__DOT__dut__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ image_processor_tb__DOT__dut__DOT__convolute_shift_register__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ image_processor_tb__DOT__dut__DOT__convolute_shift_register__DOT__unnamedblk3__DOT__i;
    };
    struct {
        IData/*31:0*/ image_processor_tb__DOT__dut__DOT__convolute_shift_register__DOT__unnamedblk4__DOT__i;
        IData/*31:0*/ image_processor_tb__DOT__dut__DOT__convolute_shift_register__DOT__unnamedblk5__DOT__i;
        IData/*31:0*/ image_processor_tb__DOT__dut__DOT__convolute_shift_register__DOT__unnamedblk6__DOT__i;
        IData/*31:0*/ __Vdly__image_processor_tb__DOT__dut__DOT__col;
        IData/*31:0*/ __Vdly__image_processor_tb__DOT__dut__DOT__row;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*6:0*/, 25> image_processor_tb__DOT__curr_kernel;
        VlUnpacked<CData/*6:0*/, 25> image_processor_tb__DOT____Vcellinp__dut__curr_kernel;
        VlUnpacked<VlUnpacked<SData/*11:0*/, 320>, 5> image_processor_tb__DOT__dut__DOT__row_lsfr;
        VlUnpacked<CData/*6:0*/, 25> image_processor_tb__DOT__dut__DOT__kernel_values;
        VlUnpacked<SData/*11:0*/, 25> image_processor_tb__DOT__dut__DOT__r_products;
        VlUnpacked<SData/*11:0*/, 25> image_processor_tb__DOT__dut__DOT__g_products;
        VlUnpacked<SData/*11:0*/, 25> image_processor_tb__DOT__dut__DOT__b_products;
        VlUnpacked<CData/*4:0*/, 25> image_processor_tb__DOT__dut__DOT__r_row_l;
        VlUnpacked<CData/*4:0*/, 25> image_processor_tb__DOT__dut__DOT__g_row_l;
        VlUnpacked<CData/*4:0*/, 25> image_processor_tb__DOT__dut__DOT__b_row_l;
        VlUnpacked<SData/*11:0*/, 25> image_processor_tb__DOT__dut__DOT__r_total_indexed;
        VlUnpacked<SData/*11:0*/, 25> image_processor_tb__DOT__dut__DOT__g_total_indexed;
        VlUnpacked<SData/*11:0*/, 25> image_processor_tb__DOT__dut__DOT__b_total_indexed;
        VlUnpacked<SData/*12:0*/, 13> image_processor_tb__DOT__dut__DOT__r_total_i2;
        VlUnpacked<SData/*12:0*/, 13> image_processor_tb__DOT__dut__DOT__g_total_i2;
        VlUnpacked<SData/*12:0*/, 13> image_processor_tb__DOT__dut__DOT__b_total_i2;
        VlUnpacked<SData/*13:0*/, 7> image_processor_tb__DOT__dut__DOT__r_total_i3;
        VlUnpacked<SData/*13:0*/, 7> image_processor_tb__DOT__dut__DOT__g_total_i3;
        VlUnpacked<SData/*13:0*/, 7> image_processor_tb__DOT__dut__DOT__b_total_i3;
        VlUnpacked<SData/*14:0*/, 4> image_processor_tb__DOT__dut__DOT__r_total_i4;
        VlUnpacked<SData/*14:0*/, 4> image_processor_tb__DOT__dut__DOT__g_total_i4;
        VlUnpacked<SData/*14:0*/, 4> image_processor_tb__DOT__dut__DOT__b_total_i4;
        VlUnpacked<SData/*15:0*/, 4> image_processor_tb__DOT__dut__DOT__r_total_i5;
        VlUnpacked<SData/*15:0*/, 4> image_processor_tb__DOT__dut__DOT__g_total_i5;
        VlUnpacked<SData/*15:0*/, 4> image_processor_tb__DOT__dut__DOT__b_total_i5;
        VlUnpacked<SData/*11:0*/, 5> image_processor_tb__DOT__dut__DOT__r_subtotals;
        VlUnpacked<SData/*11:0*/, 5> image_processor_tb__DOT__dut__DOT__g_subtotals;
        VlUnpacked<SData/*11:0*/, 5> image_processor_tb__DOT__dut__DOT__b_subtotals;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vimage_processor_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vimage_processor_tb___024root(Vimage_processor_tb__Syms* symsp, const char* v__name);
    ~Vimage_processor_tb___024root();
    VL_UNCOPYABLE(Vimage_processor_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
