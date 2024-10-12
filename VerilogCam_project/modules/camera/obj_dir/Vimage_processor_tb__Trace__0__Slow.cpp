// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vimage_processor_tb__Syms.h"


VL_ATTR_COLD void Vimage_processor_tb___024root__trace_init_sub__TOP__0(Vimage_processor_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vimage_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimage_processor_tb___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("image_processor_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+325,0,"IMAGE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+326,0,"IMAGE_HEIGHT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+327,0,"PIXEL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+328,0,"KERNEL_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+329,0,"KERNEL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+330,0,"ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+324,0,"clk_25_vga",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"resend",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"vga_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"rddata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+29,0,"r_mod",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+30,0,"g_mod",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+31,0,"b_mod",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+32,0,"div_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"rdaddress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+37,0,"vga_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"vga_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"vga_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 30,0);
    tracep->pushPrefix("curr_kernel", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 25; ++i) {
        tracep->declBus(c+331+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+33,0,"prev_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+325,0,"IMAGE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+326,0,"IMAGE_HEIGHT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+327,0,"PIXEL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+328,0,"KERNEL_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+329,0,"KERNEL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+330,0,"ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+324,0,"clk_25_vga",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"resend",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"vga_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"rddata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+36,0,"rdaddress",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+37,0,"vga_start",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"vga_end",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"vga_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 30,0);
    tracep->declBus(c+29,0,"r_mod",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+30,0,"g_mod",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+31,0,"b_mod",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+32,0,"div_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("curr_kernel", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 25; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+40,0,"col",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+41,0,"col_old",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+42,0,"row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+43,0,"row_old",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+44,0,"row_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("kernel_values", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 25; ++i) {
        tracep->declBus(c+45+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+70,0,"kernel_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+71,0,"processed_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->pushPrefix("r_products", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 25; ++i) {
        tracep->declBus(c+356+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 11,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("g_products", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 25; ++i) {
        tracep->declBus(c+381+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 11,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("b_products", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 25; ++i) {
        tracep->declBus(c+406+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 11,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_row_l", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 25; ++i) {
        tracep->declBus(c+72+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("g_row_l", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 25; ++i) {
        tracep->declBus(c+97+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("b_row_l", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 25; ++i) {
        tracep->declBus(c+122+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_total_indexed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 25; ++i) {
        tracep->declBus(c+147+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 11,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("g_total_indexed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 25; ++i) {
        tracep->declBus(c+172+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 11,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("b_total_indexed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 25; ++i) {
        tracep->declBus(c+197+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 11,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_total_i2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 13; ++i) {
        tracep->declBus(c+222+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 12,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("g_total_i2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 13; ++i) {
        tracep->declBus(c+235+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 12,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("b_total_i2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 13; ++i) {
        tracep->declBus(c+248+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 12,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_total_i3", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+261+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 13,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("g_total_i3", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+268+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 13,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("b_total_i3", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+275+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 13,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_total_i4", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+282+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 14,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("g_total_i4", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+286+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 14,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("b_total_i4", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+290+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 14,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_total_i5", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+294+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("g_total_i5", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+298+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("b_total_i5", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+302+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+306,0,"r_total_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+307,0,"g_total_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+308,0,"b_total_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->pushPrefix("r_subtotals", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+431+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 11,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("g_subtotals", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+436+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 11,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("b_subtotals", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+441+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 11,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+309,0,"r_total",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+310,0,"g_total",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+311,0,"b_total",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+312,0,"r_norm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+313,0,"g_norm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+314,0,"b_norm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+315,0,"r_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+316,0,"g_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+317,0,"b_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("convolute_shift_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+318,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+319,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+320,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+321,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+322,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+323,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+34,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+35,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vimage_processor_tb___024root__trace_init_top(Vimage_processor_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vimage_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimage_processor_tb___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vimage_processor_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vimage_processor_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vimage_processor_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vimage_processor_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vimage_processor_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vimage_processor_tb___024root__trace_register(Vimage_processor_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vimage_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimage_processor_tb___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vimage_processor_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vimage_processor_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vimage_processor_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vimage_processor_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vimage_processor_tb___024root__trace_const_0_sub_0(Vimage_processor_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vimage_processor_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimage_processor_tb___024root__trace_const_0\n"); );
    // Init
    Vimage_processor_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vimage_processor_tb___024root*>(voidSelf);
    Vimage_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vimage_processor_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vimage_processor_tb___024root__trace_const_0_sub_0(Vimage_processor_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vimage_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimage_processor_tb___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+325,(0x140U),32);
    bufp->fullIData(oldp+326,(0xf0U),32);
    bufp->fullIData(oldp+327,(0xcU),32);
    bufp->fullIData(oldp+328,(5U),32);
    bufp->fullIData(oldp+329,(8U),32);
    bufp->fullIData(oldp+330,(0x11U),32);
    bufp->fullCData(oldp+331,(vlSelfRef.image_processor_tb__DOT__curr_kernel[0]),7);
    bufp->fullCData(oldp+332,(vlSelfRef.image_processor_tb__DOT__curr_kernel[1]),7);
    bufp->fullCData(oldp+333,(vlSelfRef.image_processor_tb__DOT__curr_kernel[2]),7);
    bufp->fullCData(oldp+334,(vlSelfRef.image_processor_tb__DOT__curr_kernel[3]),7);
    bufp->fullCData(oldp+335,(vlSelfRef.image_processor_tb__DOT__curr_kernel[4]),7);
    bufp->fullCData(oldp+336,(vlSelfRef.image_processor_tb__DOT__curr_kernel[5]),7);
    bufp->fullCData(oldp+337,(vlSelfRef.image_processor_tb__DOT__curr_kernel[6]),7);
    bufp->fullCData(oldp+338,(vlSelfRef.image_processor_tb__DOT__curr_kernel[7]),7);
    bufp->fullCData(oldp+339,(vlSelfRef.image_processor_tb__DOT__curr_kernel[8]),7);
    bufp->fullCData(oldp+340,(vlSelfRef.image_processor_tb__DOT__curr_kernel[9]),7);
    bufp->fullCData(oldp+341,(vlSelfRef.image_processor_tb__DOT__curr_kernel[10]),7);
    bufp->fullCData(oldp+342,(vlSelfRef.image_processor_tb__DOT__curr_kernel[11]),7);
    bufp->fullCData(oldp+343,(vlSelfRef.image_processor_tb__DOT__curr_kernel[12]),7);
    bufp->fullCData(oldp+344,(vlSelfRef.image_processor_tb__DOT__curr_kernel[13]),7);
    bufp->fullCData(oldp+345,(vlSelfRef.image_processor_tb__DOT__curr_kernel[14]),7);
    bufp->fullCData(oldp+346,(vlSelfRef.image_processor_tb__DOT__curr_kernel[15]),7);
    bufp->fullCData(oldp+347,(vlSelfRef.image_processor_tb__DOT__curr_kernel[16]),7);
    bufp->fullCData(oldp+348,(vlSelfRef.image_processor_tb__DOT__curr_kernel[17]),7);
    bufp->fullCData(oldp+349,(vlSelfRef.image_processor_tb__DOT__curr_kernel[18]),7);
    bufp->fullCData(oldp+350,(vlSelfRef.image_processor_tb__DOT__curr_kernel[19]),7);
    bufp->fullCData(oldp+351,(vlSelfRef.image_processor_tb__DOT__curr_kernel[20]),7);
    bufp->fullCData(oldp+352,(vlSelfRef.image_processor_tb__DOT__curr_kernel[21]),7);
    bufp->fullCData(oldp+353,(vlSelfRef.image_processor_tb__DOT__curr_kernel[22]),7);
    bufp->fullCData(oldp+354,(vlSelfRef.image_processor_tb__DOT__curr_kernel[23]),7);
    bufp->fullCData(oldp+355,(vlSelfRef.image_processor_tb__DOT__curr_kernel[24]),7);
    bufp->fullSData(oldp+356,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_products[0]),12);
    bufp->fullSData(oldp+357,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_products[1]),12);
    bufp->fullSData(oldp+358,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_products[2]),12);
    bufp->fullSData(oldp+359,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_products[3]),12);
    bufp->fullSData(oldp+360,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_products[4]),12);
    bufp->fullSData(oldp+361,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_products[5]),12);
    bufp->fullSData(oldp+362,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_products[6]),12);
    bufp->fullSData(oldp+363,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_products[7]),12);
    bufp->fullSData(oldp+364,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_products[8]),12);
    bufp->fullSData(oldp+365,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_products[9]),12);
    bufp->fullSData(oldp+366,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_products[10]),12);
    bufp->fullSData(oldp+367,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_products[11]),12);
    bufp->fullSData(oldp+368,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_products[12]),12);
    bufp->fullSData(oldp+369,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_products[13]),12);
    bufp->fullSData(oldp+370,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_products[14]),12);
    bufp->fullSData(oldp+371,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_products[15]),12);
    bufp->fullSData(oldp+372,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_products[16]),12);
    bufp->fullSData(oldp+373,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_products[17]),12);
    bufp->fullSData(oldp+374,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_products[18]),12);
    bufp->fullSData(oldp+375,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_products[19]),12);
    bufp->fullSData(oldp+376,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_products[20]),12);
    bufp->fullSData(oldp+377,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_products[21]),12);
    bufp->fullSData(oldp+378,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_products[22]),12);
    bufp->fullSData(oldp+379,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_products[23]),12);
    bufp->fullSData(oldp+380,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_products[24]),12);
    bufp->fullSData(oldp+381,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_products[0]),12);
    bufp->fullSData(oldp+382,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_products[1]),12);
    bufp->fullSData(oldp+383,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_products[2]),12);
    bufp->fullSData(oldp+384,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_products[3]),12);
    bufp->fullSData(oldp+385,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_products[4]),12);
    bufp->fullSData(oldp+386,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_products[5]),12);
    bufp->fullSData(oldp+387,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_products[6]),12);
    bufp->fullSData(oldp+388,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_products[7]),12);
    bufp->fullSData(oldp+389,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_products[8]),12);
    bufp->fullSData(oldp+390,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_products[9]),12);
    bufp->fullSData(oldp+391,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_products[10]),12);
    bufp->fullSData(oldp+392,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_products[11]),12);
    bufp->fullSData(oldp+393,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_products[12]),12);
    bufp->fullSData(oldp+394,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_products[13]),12);
    bufp->fullSData(oldp+395,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_products[14]),12);
    bufp->fullSData(oldp+396,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_products[15]),12);
    bufp->fullSData(oldp+397,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_products[16]),12);
    bufp->fullSData(oldp+398,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_products[17]),12);
    bufp->fullSData(oldp+399,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_products[18]),12);
    bufp->fullSData(oldp+400,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_products[19]),12);
    bufp->fullSData(oldp+401,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_products[20]),12);
    bufp->fullSData(oldp+402,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_products[21]),12);
    bufp->fullSData(oldp+403,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_products[22]),12);
    bufp->fullSData(oldp+404,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_products[23]),12);
    bufp->fullSData(oldp+405,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_products[24]),12);
    bufp->fullSData(oldp+406,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_products[0]),12);
    bufp->fullSData(oldp+407,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_products[1]),12);
    bufp->fullSData(oldp+408,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_products[2]),12);
    bufp->fullSData(oldp+409,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_products[3]),12);
    bufp->fullSData(oldp+410,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_products[4]),12);
    bufp->fullSData(oldp+411,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_products[5]),12);
    bufp->fullSData(oldp+412,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_products[6]),12);
    bufp->fullSData(oldp+413,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_products[7]),12);
    bufp->fullSData(oldp+414,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_products[8]),12);
    bufp->fullSData(oldp+415,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_products[9]),12);
    bufp->fullSData(oldp+416,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_products[10]),12);
    bufp->fullSData(oldp+417,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_products[11]),12);
    bufp->fullSData(oldp+418,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_products[12]),12);
    bufp->fullSData(oldp+419,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_products[13]),12);
    bufp->fullSData(oldp+420,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_products[14]),12);
    bufp->fullSData(oldp+421,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_products[15]),12);
    bufp->fullSData(oldp+422,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_products[16]),12);
    bufp->fullSData(oldp+423,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_products[17]),12);
    bufp->fullSData(oldp+424,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_products[18]),12);
    bufp->fullSData(oldp+425,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_products[19]),12);
    bufp->fullSData(oldp+426,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_products[20]),12);
    bufp->fullSData(oldp+427,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_products[21]),12);
    bufp->fullSData(oldp+428,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_products[22]),12);
    bufp->fullSData(oldp+429,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_products[23]),12);
    bufp->fullSData(oldp+430,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_products[24]),12);
    bufp->fullSData(oldp+431,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_subtotals[0]),12);
    bufp->fullSData(oldp+432,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_subtotals[1]),12);
    bufp->fullSData(oldp+433,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_subtotals[2]),12);
    bufp->fullSData(oldp+434,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_subtotals[3]),12);
    bufp->fullSData(oldp+435,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_subtotals[4]),12);
    bufp->fullSData(oldp+436,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_subtotals[0]),12);
    bufp->fullSData(oldp+437,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_subtotals[1]),12);
    bufp->fullSData(oldp+438,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_subtotals[2]),12);
    bufp->fullSData(oldp+439,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_subtotals[3]),12);
    bufp->fullSData(oldp+440,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_subtotals[4]),12);
    bufp->fullSData(oldp+441,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_subtotals[0]),12);
    bufp->fullSData(oldp+442,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_subtotals[1]),12);
    bufp->fullSData(oldp+443,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_subtotals[2]),12);
    bufp->fullSData(oldp+444,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_subtotals[3]),12);
    bufp->fullSData(oldp+445,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_subtotals[4]),12);
}

VL_ATTR_COLD void Vimage_processor_tb___024root__trace_full_0_sub_0(Vimage_processor_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vimage_processor_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimage_processor_tb___024root__trace_full_0\n"); );
    // Init
    Vimage_processor_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vimage_processor_tb___024root*>(voidSelf);
    Vimage_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vimage_processor_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vimage_processor_tb___024root__trace_full_0_sub_0(Vimage_processor_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vimage_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimage_processor_tb___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[0]),7);
    bufp->fullCData(oldp+2,(vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[1]),7);
    bufp->fullCData(oldp+3,(vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[2]),7);
    bufp->fullCData(oldp+4,(vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[3]),7);
    bufp->fullCData(oldp+5,(vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[4]),7);
    bufp->fullCData(oldp+6,(vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[5]),7);
    bufp->fullCData(oldp+7,(vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[6]),7);
    bufp->fullCData(oldp+8,(vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[7]),7);
    bufp->fullCData(oldp+9,(vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[8]),7);
    bufp->fullCData(oldp+10,(vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[9]),7);
    bufp->fullCData(oldp+11,(vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[10]),7);
    bufp->fullCData(oldp+12,(vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[11]),7);
    bufp->fullCData(oldp+13,(vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[12]),7);
    bufp->fullCData(oldp+14,(vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[13]),7);
    bufp->fullCData(oldp+15,(vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[14]),7);
    bufp->fullCData(oldp+16,(vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[15]),7);
    bufp->fullCData(oldp+17,(vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[16]),7);
    bufp->fullCData(oldp+18,(vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[17]),7);
    bufp->fullCData(oldp+19,(vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[18]),7);
    bufp->fullCData(oldp+20,(vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[19]),7);
    bufp->fullCData(oldp+21,(vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[20]),7);
    bufp->fullCData(oldp+22,(vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[21]),7);
    bufp->fullCData(oldp+23,(vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[22]),7);
    bufp->fullCData(oldp+24,(vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[23]),7);
    bufp->fullCData(oldp+25,(vlSelfRef.image_processor_tb__DOT____Vcellinp__dut__curr_kernel[24]),7);
    bufp->fullBit(oldp+26,(vlSelfRef.image_processor_tb__DOT__resend));
    bufp->fullBit(oldp+27,(vlSelfRef.image_processor_tb__DOT__vga_ready));
    bufp->fullSData(oldp+28,(vlSelfRef.image_processor_tb__DOT__rddata),12);
    bufp->fullCData(oldp+29,(vlSelfRef.image_processor_tb__DOT__r_mod),6);
    bufp->fullCData(oldp+30,(vlSelfRef.image_processor_tb__DOT__g_mod),6);
    bufp->fullCData(oldp+31,(vlSelfRef.image_processor_tb__DOT__b_mod),6);
    bufp->fullBit(oldp+32,(vlSelfRef.image_processor_tb__DOT__div_flag));
    bufp->fullIData(oldp+33,(vlSelfRef.image_processor_tb__DOT__prev_address),17);
    bufp->fullIData(oldp+34,(vlSelfRef.image_processor_tb__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+35,(vlSelfRef.image_processor_tb__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+36,(vlSelfRef.image_processor_tb__DOT__rdaddress),17);
    bufp->fullBit(oldp+37,(((0U == vlSelfRef.image_processor_tb__DOT__dut__DOT__col_old) 
                            & (0U == vlSelfRef.image_processor_tb__DOT__dut__DOT__row_old))));
    bufp->fullBit(oldp+38,(((0x13fU == vlSelfRef.image_processor_tb__DOT__dut__DOT__col_old) 
                            & (0xefU == vlSelfRef.image_processor_tb__DOT__dut__DOT__row_old))));
    bufp->fullIData(oldp+39,(((0x3c000000U & ((IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__processed_data) 
                                              << 0x12U)) 
                              | ((0x3c00000U & ((IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__processed_data) 
                                                << 0xeU)) 
                                 | ((0xf0000U & ((IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__processed_data) 
                                                 << 0xcU)) 
                                    | ((0xf000U & ((IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__processed_data) 
                                                   << 8U)) 
                                       | ((0x3c0U & 
                                           ((IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__processed_data) 
                                            << 6U)) 
                                          | (0x3cU 
                                             & ((IData)(vlSelfRef.image_processor_tb__DOT__dut__DOT__processed_data) 
                                                << 2U)))))))),31);
    bufp->fullIData(oldp+40,(vlSelfRef.image_processor_tb__DOT__dut__DOT__col),32);
    bufp->fullIData(oldp+41,(vlSelfRef.image_processor_tb__DOT__dut__DOT__col_old),32);
    bufp->fullIData(oldp+42,(vlSelfRef.image_processor_tb__DOT__dut__DOT__row),32);
    bufp->fullIData(oldp+43,(vlSelfRef.image_processor_tb__DOT__dut__DOT__row_old),32);
    bufp->fullSData(oldp+44,(vlSelfRef.image_processor_tb__DOT__dut__DOT__row_address),16);
    bufp->fullCData(oldp+45,(vlSelfRef.image_processor_tb__DOT__dut__DOT__kernel_values[0]),7);
    bufp->fullCData(oldp+46,(vlSelfRef.image_processor_tb__DOT__dut__DOT__kernel_values[1]),7);
    bufp->fullCData(oldp+47,(vlSelfRef.image_processor_tb__DOT__dut__DOT__kernel_values[2]),7);
    bufp->fullCData(oldp+48,(vlSelfRef.image_processor_tb__DOT__dut__DOT__kernel_values[3]),7);
    bufp->fullCData(oldp+49,(vlSelfRef.image_processor_tb__DOT__dut__DOT__kernel_values[4]),7);
    bufp->fullCData(oldp+50,(vlSelfRef.image_processor_tb__DOT__dut__DOT__kernel_values[5]),7);
    bufp->fullCData(oldp+51,(vlSelfRef.image_processor_tb__DOT__dut__DOT__kernel_values[6]),7);
    bufp->fullCData(oldp+52,(vlSelfRef.image_processor_tb__DOT__dut__DOT__kernel_values[7]),7);
    bufp->fullCData(oldp+53,(vlSelfRef.image_processor_tb__DOT__dut__DOT__kernel_values[8]),7);
    bufp->fullCData(oldp+54,(vlSelfRef.image_processor_tb__DOT__dut__DOT__kernel_values[9]),7);
    bufp->fullCData(oldp+55,(vlSelfRef.image_processor_tb__DOT__dut__DOT__kernel_values[10]),7);
    bufp->fullCData(oldp+56,(vlSelfRef.image_processor_tb__DOT__dut__DOT__kernel_values[11]),7);
    bufp->fullCData(oldp+57,(vlSelfRef.image_processor_tb__DOT__dut__DOT__kernel_values[12]),7);
    bufp->fullCData(oldp+58,(vlSelfRef.image_processor_tb__DOT__dut__DOT__kernel_values[13]),7);
    bufp->fullCData(oldp+59,(vlSelfRef.image_processor_tb__DOT__dut__DOT__kernel_values[14]),7);
    bufp->fullCData(oldp+60,(vlSelfRef.image_processor_tb__DOT__dut__DOT__kernel_values[15]),7);
    bufp->fullCData(oldp+61,(vlSelfRef.image_processor_tb__DOT__dut__DOT__kernel_values[16]),7);
    bufp->fullCData(oldp+62,(vlSelfRef.image_processor_tb__DOT__dut__DOT__kernel_values[17]),7);
    bufp->fullCData(oldp+63,(vlSelfRef.image_processor_tb__DOT__dut__DOT__kernel_values[18]),7);
    bufp->fullCData(oldp+64,(vlSelfRef.image_processor_tb__DOT__dut__DOT__kernel_values[19]),7);
    bufp->fullCData(oldp+65,(vlSelfRef.image_processor_tb__DOT__dut__DOT__kernel_values[20]),7);
    bufp->fullCData(oldp+66,(vlSelfRef.image_processor_tb__DOT__dut__DOT__kernel_values[21]),7);
    bufp->fullCData(oldp+67,(vlSelfRef.image_processor_tb__DOT__dut__DOT__kernel_values[22]),7);
    bufp->fullCData(oldp+68,(vlSelfRef.image_processor_tb__DOT__dut__DOT__kernel_values[23]),7);
    bufp->fullCData(oldp+69,(vlSelfRef.image_processor_tb__DOT__dut__DOT__kernel_values[24]),7);
    bufp->fullSData(oldp+70,(vlSelfRef.image_processor_tb__DOT__dut__DOT__kernel_sum),12);
    bufp->fullSData(oldp+71,(vlSelfRef.image_processor_tb__DOT__dut__DOT__processed_data),12);
    bufp->fullCData(oldp+72,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_row_l[0]),5);
    bufp->fullCData(oldp+73,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_row_l[1]),5);
    bufp->fullCData(oldp+74,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_row_l[2]),5);
    bufp->fullCData(oldp+75,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_row_l[3]),5);
    bufp->fullCData(oldp+76,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_row_l[4]),5);
    bufp->fullCData(oldp+77,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_row_l[5]),5);
    bufp->fullCData(oldp+78,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_row_l[6]),5);
    bufp->fullCData(oldp+79,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_row_l[7]),5);
    bufp->fullCData(oldp+80,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_row_l[8]),5);
    bufp->fullCData(oldp+81,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_row_l[9]),5);
    bufp->fullCData(oldp+82,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_row_l[10]),5);
    bufp->fullCData(oldp+83,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_row_l[11]),5);
    bufp->fullCData(oldp+84,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_row_l[12]),5);
    bufp->fullCData(oldp+85,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_row_l[13]),5);
    bufp->fullCData(oldp+86,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_row_l[14]),5);
    bufp->fullCData(oldp+87,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_row_l[15]),5);
    bufp->fullCData(oldp+88,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_row_l[16]),5);
    bufp->fullCData(oldp+89,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_row_l[17]),5);
    bufp->fullCData(oldp+90,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_row_l[18]),5);
    bufp->fullCData(oldp+91,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_row_l[19]),5);
    bufp->fullCData(oldp+92,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_row_l[20]),5);
    bufp->fullCData(oldp+93,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_row_l[21]),5);
    bufp->fullCData(oldp+94,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_row_l[22]),5);
    bufp->fullCData(oldp+95,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_row_l[23]),5);
    bufp->fullCData(oldp+96,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_row_l[24]),5);
    bufp->fullCData(oldp+97,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_row_l[0]),5);
    bufp->fullCData(oldp+98,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_row_l[1]),5);
    bufp->fullCData(oldp+99,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_row_l[2]),5);
    bufp->fullCData(oldp+100,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_row_l[3]),5);
    bufp->fullCData(oldp+101,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_row_l[4]),5);
    bufp->fullCData(oldp+102,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_row_l[5]),5);
    bufp->fullCData(oldp+103,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_row_l[6]),5);
    bufp->fullCData(oldp+104,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_row_l[7]),5);
    bufp->fullCData(oldp+105,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_row_l[8]),5);
    bufp->fullCData(oldp+106,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_row_l[9]),5);
    bufp->fullCData(oldp+107,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_row_l[10]),5);
    bufp->fullCData(oldp+108,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_row_l[11]),5);
    bufp->fullCData(oldp+109,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_row_l[12]),5);
    bufp->fullCData(oldp+110,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_row_l[13]),5);
    bufp->fullCData(oldp+111,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_row_l[14]),5);
    bufp->fullCData(oldp+112,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_row_l[15]),5);
    bufp->fullCData(oldp+113,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_row_l[16]),5);
    bufp->fullCData(oldp+114,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_row_l[17]),5);
    bufp->fullCData(oldp+115,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_row_l[18]),5);
    bufp->fullCData(oldp+116,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_row_l[19]),5);
    bufp->fullCData(oldp+117,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_row_l[20]),5);
    bufp->fullCData(oldp+118,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_row_l[21]),5);
    bufp->fullCData(oldp+119,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_row_l[22]),5);
    bufp->fullCData(oldp+120,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_row_l[23]),5);
    bufp->fullCData(oldp+121,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_row_l[24]),5);
    bufp->fullCData(oldp+122,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_row_l[0]),5);
    bufp->fullCData(oldp+123,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_row_l[1]),5);
    bufp->fullCData(oldp+124,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_row_l[2]),5);
    bufp->fullCData(oldp+125,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_row_l[3]),5);
    bufp->fullCData(oldp+126,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_row_l[4]),5);
    bufp->fullCData(oldp+127,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_row_l[5]),5);
    bufp->fullCData(oldp+128,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_row_l[6]),5);
    bufp->fullCData(oldp+129,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_row_l[7]),5);
    bufp->fullCData(oldp+130,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_row_l[8]),5);
    bufp->fullCData(oldp+131,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_row_l[9]),5);
    bufp->fullCData(oldp+132,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_row_l[10]),5);
    bufp->fullCData(oldp+133,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_row_l[11]),5);
    bufp->fullCData(oldp+134,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_row_l[12]),5);
    bufp->fullCData(oldp+135,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_row_l[13]),5);
    bufp->fullCData(oldp+136,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_row_l[14]),5);
    bufp->fullCData(oldp+137,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_row_l[15]),5);
    bufp->fullCData(oldp+138,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_row_l[16]),5);
    bufp->fullCData(oldp+139,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_row_l[17]),5);
    bufp->fullCData(oldp+140,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_row_l[18]),5);
    bufp->fullCData(oldp+141,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_row_l[19]),5);
    bufp->fullCData(oldp+142,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_row_l[20]),5);
    bufp->fullCData(oldp+143,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_row_l[21]),5);
    bufp->fullCData(oldp+144,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_row_l[22]),5);
    bufp->fullCData(oldp+145,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_row_l[23]),5);
    bufp->fullCData(oldp+146,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_row_l[24]),5);
    bufp->fullSData(oldp+147,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_indexed[0]),12);
    bufp->fullSData(oldp+148,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_indexed[1]),12);
    bufp->fullSData(oldp+149,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_indexed[2]),12);
    bufp->fullSData(oldp+150,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_indexed[3]),12);
    bufp->fullSData(oldp+151,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_indexed[4]),12);
    bufp->fullSData(oldp+152,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_indexed[5]),12);
    bufp->fullSData(oldp+153,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_indexed[6]),12);
    bufp->fullSData(oldp+154,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_indexed[7]),12);
    bufp->fullSData(oldp+155,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_indexed[8]),12);
    bufp->fullSData(oldp+156,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_indexed[9]),12);
    bufp->fullSData(oldp+157,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_indexed[10]),12);
    bufp->fullSData(oldp+158,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_indexed[11]),12);
    bufp->fullSData(oldp+159,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_indexed[12]),12);
    bufp->fullSData(oldp+160,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_indexed[13]),12);
    bufp->fullSData(oldp+161,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_indexed[14]),12);
    bufp->fullSData(oldp+162,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_indexed[15]),12);
    bufp->fullSData(oldp+163,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_indexed[16]),12);
    bufp->fullSData(oldp+164,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_indexed[17]),12);
    bufp->fullSData(oldp+165,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_indexed[18]),12);
    bufp->fullSData(oldp+166,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_indexed[19]),12);
    bufp->fullSData(oldp+167,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_indexed[20]),12);
    bufp->fullSData(oldp+168,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_indexed[21]),12);
    bufp->fullSData(oldp+169,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_indexed[22]),12);
    bufp->fullSData(oldp+170,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_indexed[23]),12);
    bufp->fullSData(oldp+171,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_indexed[24]),12);
    bufp->fullSData(oldp+172,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_indexed[0]),12);
    bufp->fullSData(oldp+173,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_indexed[1]),12);
    bufp->fullSData(oldp+174,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_indexed[2]),12);
    bufp->fullSData(oldp+175,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_indexed[3]),12);
    bufp->fullSData(oldp+176,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_indexed[4]),12);
    bufp->fullSData(oldp+177,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_indexed[5]),12);
    bufp->fullSData(oldp+178,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_indexed[6]),12);
    bufp->fullSData(oldp+179,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_indexed[7]),12);
    bufp->fullSData(oldp+180,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_indexed[8]),12);
    bufp->fullSData(oldp+181,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_indexed[9]),12);
    bufp->fullSData(oldp+182,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_indexed[10]),12);
    bufp->fullSData(oldp+183,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_indexed[11]),12);
    bufp->fullSData(oldp+184,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_indexed[12]),12);
    bufp->fullSData(oldp+185,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_indexed[13]),12);
    bufp->fullSData(oldp+186,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_indexed[14]),12);
    bufp->fullSData(oldp+187,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_indexed[15]),12);
    bufp->fullSData(oldp+188,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_indexed[16]),12);
    bufp->fullSData(oldp+189,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_indexed[17]),12);
    bufp->fullSData(oldp+190,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_indexed[18]),12);
    bufp->fullSData(oldp+191,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_indexed[19]),12);
    bufp->fullSData(oldp+192,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_indexed[20]),12);
    bufp->fullSData(oldp+193,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_indexed[21]),12);
    bufp->fullSData(oldp+194,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_indexed[22]),12);
    bufp->fullSData(oldp+195,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_indexed[23]),12);
    bufp->fullSData(oldp+196,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_indexed[24]),12);
    bufp->fullSData(oldp+197,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_indexed[0]),12);
    bufp->fullSData(oldp+198,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_indexed[1]),12);
    bufp->fullSData(oldp+199,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_indexed[2]),12);
    bufp->fullSData(oldp+200,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_indexed[3]),12);
    bufp->fullSData(oldp+201,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_indexed[4]),12);
    bufp->fullSData(oldp+202,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_indexed[5]),12);
    bufp->fullSData(oldp+203,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_indexed[6]),12);
    bufp->fullSData(oldp+204,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_indexed[7]),12);
    bufp->fullSData(oldp+205,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_indexed[8]),12);
    bufp->fullSData(oldp+206,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_indexed[9]),12);
    bufp->fullSData(oldp+207,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_indexed[10]),12);
    bufp->fullSData(oldp+208,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_indexed[11]),12);
    bufp->fullSData(oldp+209,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_indexed[12]),12);
    bufp->fullSData(oldp+210,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_indexed[13]),12);
    bufp->fullSData(oldp+211,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_indexed[14]),12);
    bufp->fullSData(oldp+212,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_indexed[15]),12);
    bufp->fullSData(oldp+213,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_indexed[16]),12);
    bufp->fullSData(oldp+214,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_indexed[17]),12);
    bufp->fullSData(oldp+215,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_indexed[18]),12);
    bufp->fullSData(oldp+216,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_indexed[19]),12);
    bufp->fullSData(oldp+217,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_indexed[20]),12);
    bufp->fullSData(oldp+218,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_indexed[21]),12);
    bufp->fullSData(oldp+219,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_indexed[22]),12);
    bufp->fullSData(oldp+220,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_indexed[23]),12);
    bufp->fullSData(oldp+221,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_indexed[24]),12);
    bufp->fullSData(oldp+222,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_i2[0]),13);
    bufp->fullSData(oldp+223,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_i2[1]),13);
    bufp->fullSData(oldp+224,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_i2[2]),13);
    bufp->fullSData(oldp+225,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_i2[3]),13);
    bufp->fullSData(oldp+226,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_i2[4]),13);
    bufp->fullSData(oldp+227,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_i2[5]),13);
    bufp->fullSData(oldp+228,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_i2[6]),13);
    bufp->fullSData(oldp+229,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_i2[7]),13);
    bufp->fullSData(oldp+230,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_i2[8]),13);
    bufp->fullSData(oldp+231,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_i2[9]),13);
    bufp->fullSData(oldp+232,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_i2[10]),13);
    bufp->fullSData(oldp+233,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_i2[11]),13);
    bufp->fullSData(oldp+234,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_i2[12]),13);
    bufp->fullSData(oldp+235,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_i2[0]),13);
    bufp->fullSData(oldp+236,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_i2[1]),13);
    bufp->fullSData(oldp+237,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_i2[2]),13);
    bufp->fullSData(oldp+238,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_i2[3]),13);
    bufp->fullSData(oldp+239,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_i2[4]),13);
    bufp->fullSData(oldp+240,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_i2[5]),13);
    bufp->fullSData(oldp+241,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_i2[6]),13);
    bufp->fullSData(oldp+242,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_i2[7]),13);
    bufp->fullSData(oldp+243,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_i2[8]),13);
    bufp->fullSData(oldp+244,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_i2[9]),13);
    bufp->fullSData(oldp+245,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_i2[10]),13);
    bufp->fullSData(oldp+246,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_i2[11]),13);
    bufp->fullSData(oldp+247,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_i2[12]),13);
    bufp->fullSData(oldp+248,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_i2[0]),13);
    bufp->fullSData(oldp+249,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_i2[1]),13);
    bufp->fullSData(oldp+250,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_i2[2]),13);
    bufp->fullSData(oldp+251,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_i2[3]),13);
    bufp->fullSData(oldp+252,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_i2[4]),13);
    bufp->fullSData(oldp+253,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_i2[5]),13);
    bufp->fullSData(oldp+254,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_i2[6]),13);
    bufp->fullSData(oldp+255,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_i2[7]),13);
    bufp->fullSData(oldp+256,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_i2[8]),13);
    bufp->fullSData(oldp+257,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_i2[9]),13);
    bufp->fullSData(oldp+258,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_i2[10]),13);
    bufp->fullSData(oldp+259,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_i2[11]),13);
    bufp->fullSData(oldp+260,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_i2[12]),13);
    bufp->fullSData(oldp+261,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_i3[0]),14);
    bufp->fullSData(oldp+262,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_i3[1]),14);
    bufp->fullSData(oldp+263,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_i3[2]),14);
    bufp->fullSData(oldp+264,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_i3[3]),14);
    bufp->fullSData(oldp+265,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_i3[4]),14);
    bufp->fullSData(oldp+266,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_i3[5]),14);
    bufp->fullSData(oldp+267,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_i3[6]),14);
    bufp->fullSData(oldp+268,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_i3[0]),14);
    bufp->fullSData(oldp+269,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_i3[1]),14);
    bufp->fullSData(oldp+270,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_i3[2]),14);
    bufp->fullSData(oldp+271,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_i3[3]),14);
    bufp->fullSData(oldp+272,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_i3[4]),14);
    bufp->fullSData(oldp+273,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_i3[5]),14);
    bufp->fullSData(oldp+274,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_i3[6]),14);
    bufp->fullSData(oldp+275,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_i3[0]),14);
    bufp->fullSData(oldp+276,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_i3[1]),14);
    bufp->fullSData(oldp+277,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_i3[2]),14);
    bufp->fullSData(oldp+278,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_i3[3]),14);
    bufp->fullSData(oldp+279,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_i3[4]),14);
    bufp->fullSData(oldp+280,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_i3[5]),14);
    bufp->fullSData(oldp+281,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_i3[6]),14);
    bufp->fullSData(oldp+282,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_i4[0]),15);
    bufp->fullSData(oldp+283,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_i4[1]),15);
    bufp->fullSData(oldp+284,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_i4[2]),15);
    bufp->fullSData(oldp+285,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_i4[3]),15);
    bufp->fullSData(oldp+286,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_i4[0]),15);
    bufp->fullSData(oldp+287,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_i4[1]),15);
    bufp->fullSData(oldp+288,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_i4[2]),15);
    bufp->fullSData(oldp+289,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_i4[3]),15);
    bufp->fullSData(oldp+290,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_i4[0]),15);
    bufp->fullSData(oldp+291,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_i4[1]),15);
    bufp->fullSData(oldp+292,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_i4[2]),15);
    bufp->fullSData(oldp+293,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_i4[3]),15);
    bufp->fullSData(oldp+294,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_i5[0]),16);
    bufp->fullSData(oldp+295,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_i5[1]),16);
    bufp->fullSData(oldp+296,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_i5[2]),16);
    bufp->fullSData(oldp+297,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_i5[3]),16);
    bufp->fullSData(oldp+298,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_i5[0]),16);
    bufp->fullSData(oldp+299,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_i5[1]),16);
    bufp->fullSData(oldp+300,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_i5[2]),16);
    bufp->fullSData(oldp+301,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_i5[3]),16);
    bufp->fullSData(oldp+302,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_i5[0]),16);
    bufp->fullSData(oldp+303,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_i5[1]),16);
    bufp->fullSData(oldp+304,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_i5[2]),16);
    bufp->fullSData(oldp+305,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_i5[3]),16);
    bufp->fullIData(oldp+306,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total_f),17);
    bufp->fullIData(oldp+307,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total_f),17);
    bufp->fullIData(oldp+308,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total_f),17);
    bufp->fullIData(oldp+309,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_total),17);
    bufp->fullIData(oldp+310,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_total),17);
    bufp->fullIData(oldp+311,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_total),17);
    bufp->fullSData(oldp+312,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_norm),13);
    bufp->fullSData(oldp+313,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_norm),13);
    bufp->fullSData(oldp+314,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_norm),13);
    bufp->fullCData(oldp+315,(vlSelfRef.image_processor_tb__DOT__dut__DOT__r_out),4);
    bufp->fullCData(oldp+316,(vlSelfRef.image_processor_tb__DOT__dut__DOT__g_out),4);
    bufp->fullCData(oldp+317,(vlSelfRef.image_processor_tb__DOT__dut__DOT__b_out),4);
    bufp->fullIData(oldp+318,(vlSelfRef.image_processor_tb__DOT__dut__DOT__convolute_shift_register__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+319,(vlSelfRef.image_processor_tb__DOT__dut__DOT__convolute_shift_register__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+320,(vlSelfRef.image_processor_tb__DOT__dut__DOT__convolute_shift_register__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+321,(vlSelfRef.image_processor_tb__DOT__dut__DOT__convolute_shift_register__DOT__unnamedblk5__DOT__i),32);
    bufp->fullIData(oldp+322,(vlSelfRef.image_processor_tb__DOT__dut__DOT__convolute_shift_register__DOT__unnamedblk6__DOT__i),32);
    bufp->fullIData(oldp+323,(vlSelfRef.image_processor_tb__DOT__dut__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+324,(vlSelfRef.image_processor_tb__DOT__clk_25_vga));
}
