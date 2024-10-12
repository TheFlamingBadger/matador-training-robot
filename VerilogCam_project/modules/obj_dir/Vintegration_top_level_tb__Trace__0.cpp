// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vintegration_top_level_tb__Syms.h"


void Vintegration_top_level_tb___024root__trace_chg_0_sub_0(Vintegration_top_level_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vintegration_top_level_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegration_top_level_tb___024root__trace_chg_0\n"); );
    // Init
    Vintegration_top_level_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vintegration_top_level_tb___024root*>(voidSelf);
    Vintegration_top_level_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vintegration_top_level_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vintegration_top_level_tb___024root__trace_chg_0_sub_0(Vintegration_top_level_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vintegration_top_level_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegration_top_level_tb___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.image_processor_tb__DOT__vga_ready));
        bufp->chgSData(oldp+1,(vlSelfRef.image_processor_tb__DOT__rddata),12);
        bufp->chgBit(oldp+2,(vlSelfRef.image_processor_tb__DOT__next_button));
        bufp->chgBit(oldp+3,(vlSelfRef.image_processor_tb__DOT__prev_button));
        bufp->chgSData(oldp+4,(vlSelfRef.image_processor_tb__DOT__audio_pitch),16);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+5,(vlSelfRef.image_processor_tb__DOT__rdaddress),17);
        bufp->chgBit(oldp+6,(((0U == vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__col_old) 
                              & (0U == vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__row_old))));
        bufp->chgBit(oldp+7,(((0x13fU == vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__col_old) 
                              & (0xefU == vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__row_old))));
        bufp->chgIData(oldp+8,(((0x3c000000U & ((IData)(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__processed_data) 
                                                << 0x12U)) 
                                | ((0x3c00000U & ((IData)(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__processed_data) 
                                                  << 0xeU)) 
                                   | ((0xf0000U & ((IData)(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__processed_data) 
                                                   << 0xcU)) 
                                      | ((0xf000U & 
                                          ((IData)(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__processed_data) 
                                           << 8U)) 
                                         | ((0x3c0U 
                                             & ((IData)(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__processed_data) 
                                                << 6U)) 
                                            | (0x3cU 
                                               & ((IData)(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__processed_data) 
                                                  << 2U)))))))),31);
        bufp->chgIData(oldp+9,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__col),32);
        bufp->chgIData(oldp+10,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__col_old),32);
        bufp->chgIData(oldp+11,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__row),32);
        bufp->chgIData(oldp+12,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__row_old),32);
        bufp->chgSData(oldp+13,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__row_address),16);
        bufp->chgCData(oldp+14,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__kernel_values[0]),7);
        bufp->chgCData(oldp+15,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__kernel_values[1]),7);
        bufp->chgCData(oldp+16,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__kernel_values[2]),7);
        bufp->chgCData(oldp+17,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__kernel_values[3]),7);
        bufp->chgCData(oldp+18,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__kernel_values[4]),7);
        bufp->chgCData(oldp+19,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__kernel_values[5]),7);
        bufp->chgCData(oldp+20,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__kernel_values[6]),7);
        bufp->chgCData(oldp+21,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__kernel_values[7]),7);
        bufp->chgCData(oldp+22,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__kernel_values[8]),7);
        bufp->chgCData(oldp+23,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__kernel_values[9]),7);
        bufp->chgCData(oldp+24,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__kernel_values[10]),7);
        bufp->chgCData(oldp+25,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__kernel_values[11]),7);
        bufp->chgCData(oldp+26,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__kernel_values[12]),7);
        bufp->chgCData(oldp+27,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__kernel_values[13]),7);
        bufp->chgCData(oldp+28,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__kernel_values[14]),7);
        bufp->chgCData(oldp+29,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__kernel_values[15]),7);
        bufp->chgCData(oldp+30,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__kernel_values[16]),7);
        bufp->chgCData(oldp+31,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__kernel_values[17]),7);
        bufp->chgCData(oldp+32,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__kernel_values[18]),7);
        bufp->chgCData(oldp+33,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__kernel_values[19]),7);
        bufp->chgCData(oldp+34,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__kernel_values[20]),7);
        bufp->chgCData(oldp+35,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__kernel_values[21]),7);
        bufp->chgCData(oldp+36,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__kernel_values[22]),7);
        bufp->chgCData(oldp+37,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__kernel_values[23]),7);
        bufp->chgCData(oldp+38,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__kernel_values[24]),7);
        bufp->chgSData(oldp+39,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__kernel_sum),12);
        bufp->chgSData(oldp+40,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__processed_data),12);
        bufp->chgCData(oldp+41,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_row_l[0]),5);
        bufp->chgCData(oldp+42,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_row_l[1]),5);
        bufp->chgCData(oldp+43,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_row_l[2]),5);
        bufp->chgCData(oldp+44,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_row_l[3]),5);
        bufp->chgCData(oldp+45,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_row_l[4]),5);
        bufp->chgCData(oldp+46,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_row_l[5]),5);
        bufp->chgCData(oldp+47,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_row_l[6]),5);
        bufp->chgCData(oldp+48,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_row_l[7]),5);
        bufp->chgCData(oldp+49,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_row_l[8]),5);
        bufp->chgCData(oldp+50,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_row_l[9]),5);
        bufp->chgCData(oldp+51,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_row_l[10]),5);
        bufp->chgCData(oldp+52,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_row_l[11]),5);
        bufp->chgCData(oldp+53,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_row_l[12]),5);
        bufp->chgCData(oldp+54,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_row_l[13]),5);
        bufp->chgCData(oldp+55,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_row_l[14]),5);
        bufp->chgCData(oldp+56,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_row_l[15]),5);
        bufp->chgCData(oldp+57,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_row_l[16]),5);
        bufp->chgCData(oldp+58,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_row_l[17]),5);
        bufp->chgCData(oldp+59,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_row_l[18]),5);
        bufp->chgCData(oldp+60,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_row_l[19]),5);
        bufp->chgCData(oldp+61,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_row_l[20]),5);
        bufp->chgCData(oldp+62,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_row_l[21]),5);
        bufp->chgCData(oldp+63,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_row_l[22]),5);
        bufp->chgCData(oldp+64,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_row_l[23]),5);
        bufp->chgCData(oldp+65,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_row_l[24]),5);
        bufp->chgCData(oldp+66,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_row_l[0]),5);
        bufp->chgCData(oldp+67,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_row_l[1]),5);
        bufp->chgCData(oldp+68,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_row_l[2]),5);
        bufp->chgCData(oldp+69,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_row_l[3]),5);
        bufp->chgCData(oldp+70,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_row_l[4]),5);
        bufp->chgCData(oldp+71,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_row_l[5]),5);
        bufp->chgCData(oldp+72,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_row_l[6]),5);
        bufp->chgCData(oldp+73,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_row_l[7]),5);
        bufp->chgCData(oldp+74,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_row_l[8]),5);
        bufp->chgCData(oldp+75,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_row_l[9]),5);
        bufp->chgCData(oldp+76,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_row_l[10]),5);
        bufp->chgCData(oldp+77,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_row_l[11]),5);
        bufp->chgCData(oldp+78,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_row_l[12]),5);
        bufp->chgCData(oldp+79,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_row_l[13]),5);
        bufp->chgCData(oldp+80,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_row_l[14]),5);
        bufp->chgCData(oldp+81,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_row_l[15]),5);
        bufp->chgCData(oldp+82,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_row_l[16]),5);
        bufp->chgCData(oldp+83,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_row_l[17]),5);
        bufp->chgCData(oldp+84,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_row_l[18]),5);
        bufp->chgCData(oldp+85,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_row_l[19]),5);
        bufp->chgCData(oldp+86,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_row_l[20]),5);
        bufp->chgCData(oldp+87,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_row_l[21]),5);
        bufp->chgCData(oldp+88,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_row_l[22]),5);
        bufp->chgCData(oldp+89,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_row_l[23]),5);
        bufp->chgCData(oldp+90,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_row_l[24]),5);
        bufp->chgCData(oldp+91,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_row_l[0]),5);
        bufp->chgCData(oldp+92,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_row_l[1]),5);
        bufp->chgCData(oldp+93,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_row_l[2]),5);
        bufp->chgCData(oldp+94,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_row_l[3]),5);
        bufp->chgCData(oldp+95,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_row_l[4]),5);
        bufp->chgCData(oldp+96,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_row_l[5]),5);
        bufp->chgCData(oldp+97,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_row_l[6]),5);
        bufp->chgCData(oldp+98,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_row_l[7]),5);
        bufp->chgCData(oldp+99,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_row_l[8]),5);
        bufp->chgCData(oldp+100,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_row_l[9]),5);
        bufp->chgCData(oldp+101,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_row_l[10]),5);
        bufp->chgCData(oldp+102,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_row_l[11]),5);
        bufp->chgCData(oldp+103,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_row_l[12]),5);
        bufp->chgCData(oldp+104,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_row_l[13]),5);
        bufp->chgCData(oldp+105,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_row_l[14]),5);
        bufp->chgCData(oldp+106,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_row_l[15]),5);
        bufp->chgCData(oldp+107,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_row_l[16]),5);
        bufp->chgCData(oldp+108,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_row_l[17]),5);
        bufp->chgCData(oldp+109,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_row_l[18]),5);
        bufp->chgCData(oldp+110,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_row_l[19]),5);
        bufp->chgCData(oldp+111,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_row_l[20]),5);
        bufp->chgCData(oldp+112,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_row_l[21]),5);
        bufp->chgCData(oldp+113,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_row_l[22]),5);
        bufp->chgCData(oldp+114,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_row_l[23]),5);
        bufp->chgCData(oldp+115,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_row_l[24]),5);
        bufp->chgSData(oldp+116,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_indexed[0]),12);
        bufp->chgSData(oldp+117,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_indexed[1]),12);
        bufp->chgSData(oldp+118,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_indexed[2]),12);
        bufp->chgSData(oldp+119,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_indexed[3]),12);
        bufp->chgSData(oldp+120,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_indexed[4]),12);
        bufp->chgSData(oldp+121,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_indexed[5]),12);
        bufp->chgSData(oldp+122,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_indexed[6]),12);
        bufp->chgSData(oldp+123,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_indexed[7]),12);
        bufp->chgSData(oldp+124,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_indexed[8]),12);
        bufp->chgSData(oldp+125,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_indexed[9]),12);
        bufp->chgSData(oldp+126,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_indexed[10]),12);
        bufp->chgSData(oldp+127,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_indexed[11]),12);
        bufp->chgSData(oldp+128,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_indexed[12]),12);
        bufp->chgSData(oldp+129,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_indexed[13]),12);
        bufp->chgSData(oldp+130,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_indexed[14]),12);
        bufp->chgSData(oldp+131,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_indexed[15]),12);
        bufp->chgSData(oldp+132,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_indexed[16]),12);
        bufp->chgSData(oldp+133,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_indexed[17]),12);
        bufp->chgSData(oldp+134,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_indexed[18]),12);
        bufp->chgSData(oldp+135,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_indexed[19]),12);
        bufp->chgSData(oldp+136,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_indexed[20]),12);
        bufp->chgSData(oldp+137,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_indexed[21]),12);
        bufp->chgSData(oldp+138,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_indexed[22]),12);
        bufp->chgSData(oldp+139,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_indexed[23]),12);
        bufp->chgSData(oldp+140,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_indexed[24]),12);
        bufp->chgSData(oldp+141,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_indexed[0]),12);
        bufp->chgSData(oldp+142,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_indexed[1]),12);
        bufp->chgSData(oldp+143,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_indexed[2]),12);
        bufp->chgSData(oldp+144,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_indexed[3]),12);
        bufp->chgSData(oldp+145,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_indexed[4]),12);
        bufp->chgSData(oldp+146,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_indexed[5]),12);
        bufp->chgSData(oldp+147,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_indexed[6]),12);
        bufp->chgSData(oldp+148,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_indexed[7]),12);
        bufp->chgSData(oldp+149,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_indexed[8]),12);
        bufp->chgSData(oldp+150,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_indexed[9]),12);
        bufp->chgSData(oldp+151,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_indexed[10]),12);
        bufp->chgSData(oldp+152,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_indexed[11]),12);
        bufp->chgSData(oldp+153,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_indexed[12]),12);
        bufp->chgSData(oldp+154,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_indexed[13]),12);
        bufp->chgSData(oldp+155,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_indexed[14]),12);
        bufp->chgSData(oldp+156,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_indexed[15]),12);
        bufp->chgSData(oldp+157,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_indexed[16]),12);
        bufp->chgSData(oldp+158,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_indexed[17]),12);
        bufp->chgSData(oldp+159,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_indexed[18]),12);
        bufp->chgSData(oldp+160,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_indexed[19]),12);
        bufp->chgSData(oldp+161,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_indexed[20]),12);
        bufp->chgSData(oldp+162,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_indexed[21]),12);
        bufp->chgSData(oldp+163,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_indexed[22]),12);
        bufp->chgSData(oldp+164,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_indexed[23]),12);
        bufp->chgSData(oldp+165,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_indexed[24]),12);
        bufp->chgSData(oldp+166,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_indexed[0]),12);
        bufp->chgSData(oldp+167,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_indexed[1]),12);
        bufp->chgSData(oldp+168,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_indexed[2]),12);
        bufp->chgSData(oldp+169,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_indexed[3]),12);
        bufp->chgSData(oldp+170,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_indexed[4]),12);
        bufp->chgSData(oldp+171,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_indexed[5]),12);
        bufp->chgSData(oldp+172,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_indexed[6]),12);
        bufp->chgSData(oldp+173,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_indexed[7]),12);
        bufp->chgSData(oldp+174,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_indexed[8]),12);
        bufp->chgSData(oldp+175,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_indexed[9]),12);
        bufp->chgSData(oldp+176,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_indexed[10]),12);
        bufp->chgSData(oldp+177,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_indexed[11]),12);
        bufp->chgSData(oldp+178,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_indexed[12]),12);
        bufp->chgSData(oldp+179,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_indexed[13]),12);
        bufp->chgSData(oldp+180,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_indexed[14]),12);
        bufp->chgSData(oldp+181,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_indexed[15]),12);
        bufp->chgSData(oldp+182,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_indexed[16]),12);
        bufp->chgSData(oldp+183,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_indexed[17]),12);
        bufp->chgSData(oldp+184,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_indexed[18]),12);
        bufp->chgSData(oldp+185,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_indexed[19]),12);
        bufp->chgSData(oldp+186,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_indexed[20]),12);
        bufp->chgSData(oldp+187,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_indexed[21]),12);
        bufp->chgSData(oldp+188,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_indexed[22]),12);
        bufp->chgSData(oldp+189,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_indexed[23]),12);
        bufp->chgSData(oldp+190,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_indexed[24]),12);
        bufp->chgSData(oldp+191,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_i2[0]),13);
        bufp->chgSData(oldp+192,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_i2[1]),13);
        bufp->chgSData(oldp+193,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_i2[2]),13);
        bufp->chgSData(oldp+194,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_i2[3]),13);
        bufp->chgSData(oldp+195,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_i2[4]),13);
        bufp->chgSData(oldp+196,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_i2[5]),13);
        bufp->chgSData(oldp+197,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_i2[6]),13);
        bufp->chgSData(oldp+198,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_i2[7]),13);
        bufp->chgSData(oldp+199,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_i2[8]),13);
        bufp->chgSData(oldp+200,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_i2[9]),13);
        bufp->chgSData(oldp+201,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_i2[10]),13);
        bufp->chgSData(oldp+202,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_i2[11]),13);
        bufp->chgSData(oldp+203,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_i2[12]),13);
        bufp->chgSData(oldp+204,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_i2[0]),13);
        bufp->chgSData(oldp+205,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_i2[1]),13);
        bufp->chgSData(oldp+206,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_i2[2]),13);
        bufp->chgSData(oldp+207,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_i2[3]),13);
        bufp->chgSData(oldp+208,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_i2[4]),13);
        bufp->chgSData(oldp+209,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_i2[5]),13);
        bufp->chgSData(oldp+210,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_i2[6]),13);
        bufp->chgSData(oldp+211,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_i2[7]),13);
        bufp->chgSData(oldp+212,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_i2[8]),13);
        bufp->chgSData(oldp+213,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_i2[9]),13);
        bufp->chgSData(oldp+214,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_i2[10]),13);
        bufp->chgSData(oldp+215,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_i2[11]),13);
        bufp->chgSData(oldp+216,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_i2[12]),13);
        bufp->chgSData(oldp+217,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_i2[0]),13);
        bufp->chgSData(oldp+218,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_i2[1]),13);
        bufp->chgSData(oldp+219,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_i2[2]),13);
        bufp->chgSData(oldp+220,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_i2[3]),13);
        bufp->chgSData(oldp+221,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_i2[4]),13);
        bufp->chgSData(oldp+222,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_i2[5]),13);
        bufp->chgSData(oldp+223,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_i2[6]),13);
        bufp->chgSData(oldp+224,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_i2[7]),13);
        bufp->chgSData(oldp+225,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_i2[8]),13);
        bufp->chgSData(oldp+226,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_i2[9]),13);
        bufp->chgSData(oldp+227,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_i2[10]),13);
        bufp->chgSData(oldp+228,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_i2[11]),13);
        bufp->chgSData(oldp+229,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_i2[12]),13);
        bufp->chgSData(oldp+230,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_i3[0]),14);
        bufp->chgSData(oldp+231,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_i3[1]),14);
        bufp->chgSData(oldp+232,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_i3[2]),14);
        bufp->chgSData(oldp+233,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_i3[3]),14);
        bufp->chgSData(oldp+234,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_i3[4]),14);
        bufp->chgSData(oldp+235,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_i3[5]),14);
        bufp->chgSData(oldp+236,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_i3[6]),14);
        bufp->chgSData(oldp+237,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_i3[0]),14);
        bufp->chgSData(oldp+238,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_i3[1]),14);
        bufp->chgSData(oldp+239,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_i3[2]),14);
        bufp->chgSData(oldp+240,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_i3[3]),14);
        bufp->chgSData(oldp+241,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_i3[4]),14);
        bufp->chgSData(oldp+242,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_i3[5]),14);
        bufp->chgSData(oldp+243,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_i3[6]),14);
        bufp->chgSData(oldp+244,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_i3[0]),14);
        bufp->chgSData(oldp+245,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_i3[1]),14);
        bufp->chgSData(oldp+246,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_i3[2]),14);
        bufp->chgSData(oldp+247,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_i3[3]),14);
        bufp->chgSData(oldp+248,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_i3[4]),14);
        bufp->chgSData(oldp+249,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_i3[5]),14);
        bufp->chgSData(oldp+250,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_i3[6]),14);
        bufp->chgSData(oldp+251,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_i4[0]),15);
        bufp->chgSData(oldp+252,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_i4[1]),15);
        bufp->chgSData(oldp+253,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_i4[2]),15);
        bufp->chgSData(oldp+254,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_i4[3]),15);
        bufp->chgSData(oldp+255,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_i4[0]),15);
        bufp->chgSData(oldp+256,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_i4[1]),15);
        bufp->chgSData(oldp+257,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_i4[2]),15);
        bufp->chgSData(oldp+258,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_i4[3]),15);
        bufp->chgSData(oldp+259,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_i4[0]),15);
        bufp->chgSData(oldp+260,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_i4[1]),15);
        bufp->chgSData(oldp+261,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_i4[2]),15);
        bufp->chgSData(oldp+262,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_i4[3]),15);
        bufp->chgSData(oldp+263,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_i5[0]),16);
        bufp->chgSData(oldp+264,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_i5[1]),16);
        bufp->chgSData(oldp+265,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_i5[2]),16);
        bufp->chgSData(oldp+266,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_i5[3]),16);
        bufp->chgSData(oldp+267,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_i5[0]),16);
        bufp->chgSData(oldp+268,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_i5[1]),16);
        bufp->chgSData(oldp+269,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_i5[2]),16);
        bufp->chgSData(oldp+270,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_i5[3]),16);
        bufp->chgSData(oldp+271,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_i5[0]),16);
        bufp->chgSData(oldp+272,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_i5[1]),16);
        bufp->chgSData(oldp+273,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_i5[2]),16);
        bufp->chgSData(oldp+274,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_i5[3]),16);
        bufp->chgIData(oldp+275,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total_f),17);
        bufp->chgIData(oldp+276,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total_f),17);
        bufp->chgIData(oldp+277,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total_f),17);
        bufp->chgIData(oldp+278,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_total),17);
        bufp->chgIData(oldp+279,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_total),17);
        bufp->chgIData(oldp+280,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_total),17);
        bufp->chgSData(oldp+281,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_norm),13);
        bufp->chgSData(oldp+282,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_norm),13);
        bufp->chgSData(oldp+283,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_norm),13);
        bufp->chgCData(oldp+284,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__r_out),4);
        bufp->chgCData(oldp+285,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__g_out),4);
        bufp->chgCData(oldp+286,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__b_out),4);
        bufp->chgIData(oldp+287,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__convolute_shift_register__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+288,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__convolute_shift_register__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+289,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__convolute_shift_register__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+290,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__convolute_shift_register__DOT__unnamedblk5__DOT__i),32);
        bufp->chgIData(oldp+291,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__convolute_shift_register__DOT__unnamedblk6__DOT__i),32);
        bufp->chgIData(oldp+292,(vlSelfRef.image_processor_tb__DOT__dut_image_processor__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[4U])) {
        bufp->chgCData(oldp+293,(vlSelfRef.image_processor_tb__DOT__filter_number),3);
        bufp->chgBit(oldp+294,(vlSelfRef.image_processor_tb__DOT__address));
        bufp->chgBit(oldp+295,(vlSelfRef.image_processor_tb__DOT__chipselect));
        bufp->chgBit(oldp+296,(vlSelfRef.image_processor_tb__DOT__write));
        bufp->chgCData(oldp+297,(vlSelfRef.image_processor_tb__DOT__writedata),8);
        bufp->chgCData(oldp+298,(vlSelfRef.image_processor_tb__DOT__curr_kernel[0]),7);
        bufp->chgCData(oldp+299,(vlSelfRef.image_processor_tb__DOT__curr_kernel[1]),7);
        bufp->chgCData(oldp+300,(vlSelfRef.image_processor_tb__DOT__curr_kernel[2]),7);
        bufp->chgCData(oldp+301,(vlSelfRef.image_processor_tb__DOT__curr_kernel[3]),7);
        bufp->chgCData(oldp+302,(vlSelfRef.image_processor_tb__DOT__curr_kernel[4]),7);
        bufp->chgCData(oldp+303,(vlSelfRef.image_processor_tb__DOT__curr_kernel[5]),7);
        bufp->chgCData(oldp+304,(vlSelfRef.image_processor_tb__DOT__curr_kernel[6]),7);
        bufp->chgCData(oldp+305,(vlSelfRef.image_processor_tb__DOT__curr_kernel[7]),7);
        bufp->chgCData(oldp+306,(vlSelfRef.image_processor_tb__DOT__curr_kernel[8]),7);
        bufp->chgCData(oldp+307,(vlSelfRef.image_processor_tb__DOT__curr_kernel[9]),7);
        bufp->chgCData(oldp+308,(vlSelfRef.image_processor_tb__DOT__curr_kernel[10]),7);
        bufp->chgCData(oldp+309,(vlSelfRef.image_processor_tb__DOT__curr_kernel[11]),7);
        bufp->chgCData(oldp+310,(vlSelfRef.image_processor_tb__DOT__curr_kernel[12]),7);
        bufp->chgCData(oldp+311,(vlSelfRef.image_processor_tb__DOT__curr_kernel[13]),7);
        bufp->chgCData(oldp+312,(vlSelfRef.image_processor_tb__DOT__curr_kernel[14]),7);
        bufp->chgCData(oldp+313,(vlSelfRef.image_processor_tb__DOT__curr_kernel[15]),7);
        bufp->chgCData(oldp+314,(vlSelfRef.image_processor_tb__DOT__curr_kernel[16]),7);
        bufp->chgCData(oldp+315,(vlSelfRef.image_processor_tb__DOT__curr_kernel[17]),7);
        bufp->chgCData(oldp+316,(vlSelfRef.image_processor_tb__DOT__curr_kernel[18]),7);
        bufp->chgCData(oldp+317,(vlSelfRef.image_processor_tb__DOT__curr_kernel[19]),7);
        bufp->chgCData(oldp+318,(vlSelfRef.image_processor_tb__DOT__curr_kernel[20]),7);
        bufp->chgCData(oldp+319,(vlSelfRef.image_processor_tb__DOT__curr_kernel[21]),7);
        bufp->chgCData(oldp+320,(vlSelfRef.image_processor_tb__DOT__curr_kernel[22]),7);
        bufp->chgCData(oldp+321,(vlSelfRef.image_processor_tb__DOT__curr_kernel[23]),7);
        bufp->chgCData(oldp+322,(vlSelfRef.image_processor_tb__DOT__curr_kernel[24]),7);
        bufp->chgBit(oldp+323,(vlSelfRef.image_processor_tb__DOT__dut_pixel_filt__DOT__temp_div_flag));
        bufp->chgCData(oldp+324,(vlSelfRef.image_processor_tb__DOT__dut_pixel_filt__DOT__temp_r_mod),6);
        bufp->chgCData(oldp+325,(vlSelfRef.image_processor_tb__DOT__dut_pixel_filt__DOT__temp_g_mod),6);
        bufp->chgCData(oldp+326,(vlSelfRef.image_processor_tb__DOT__dut_pixel_filt__DOT__temp_b_mod),6);
        bufp->chgCData(oldp+327,(vlSelfRef.image_processor_tb__DOT__dut_convolution_filt__DOT__locater),3);
        bufp->chgCData(oldp+328,(vlSelfRef.image_processor_tb__DOT__dut_convolution_filt__DOT__temp_kernel[0]),7);
        bufp->chgCData(oldp+329,(vlSelfRef.image_processor_tb__DOT__dut_convolution_filt__DOT__temp_kernel[1]),7);
        bufp->chgCData(oldp+330,(vlSelfRef.image_processor_tb__DOT__dut_convolution_filt__DOT__temp_kernel[2]),7);
        bufp->chgCData(oldp+331,(vlSelfRef.image_processor_tb__DOT__dut_convolution_filt__DOT__temp_kernel[3]),7);
        bufp->chgCData(oldp+332,(vlSelfRef.image_processor_tb__DOT__dut_convolution_filt__DOT__temp_kernel[4]),7);
        bufp->chgCData(oldp+333,(vlSelfRef.image_processor_tb__DOT__dut_convolution_filt__DOT__temp_kernel[5]),7);
        bufp->chgCData(oldp+334,(vlSelfRef.image_processor_tb__DOT__dut_convolution_filt__DOT__temp_kernel[6]),7);
        bufp->chgCData(oldp+335,(vlSelfRef.image_processor_tb__DOT__dut_convolution_filt__DOT__temp_kernel[7]),7);
        bufp->chgCData(oldp+336,(vlSelfRef.image_processor_tb__DOT__dut_convolution_filt__DOT__temp_kernel[8]),7);
        bufp->chgCData(oldp+337,(vlSelfRef.image_processor_tb__DOT__dut_convolution_filt__DOT__temp_kernel[9]),7);
        bufp->chgCData(oldp+338,(vlSelfRef.image_processor_tb__DOT__dut_convolution_filt__DOT__temp_kernel[10]),7);
        bufp->chgCData(oldp+339,(vlSelfRef.image_processor_tb__DOT__dut_convolution_filt__DOT__temp_kernel[11]),7);
        bufp->chgCData(oldp+340,(vlSelfRef.image_processor_tb__DOT__dut_convolution_filt__DOT__temp_kernel[12]),7);
        bufp->chgCData(oldp+341,(vlSelfRef.image_processor_tb__DOT__dut_convolution_filt__DOT__temp_kernel[13]),7);
        bufp->chgCData(oldp+342,(vlSelfRef.image_processor_tb__DOT__dut_convolution_filt__DOT__temp_kernel[14]),7);
        bufp->chgCData(oldp+343,(vlSelfRef.image_processor_tb__DOT__dut_convolution_filt__DOT__temp_kernel[15]),7);
        bufp->chgCData(oldp+344,(vlSelfRef.image_processor_tb__DOT__dut_convolution_filt__DOT__temp_kernel[16]),7);
        bufp->chgCData(oldp+345,(vlSelfRef.image_processor_tb__DOT__dut_convolution_filt__DOT__temp_kernel[17]),7);
        bufp->chgCData(oldp+346,(vlSelfRef.image_processor_tb__DOT__dut_convolution_filt__DOT__temp_kernel[18]),7);
        bufp->chgCData(oldp+347,(vlSelfRef.image_processor_tb__DOT__dut_convolution_filt__DOT__temp_kernel[19]),7);
        bufp->chgCData(oldp+348,(vlSelfRef.image_processor_tb__DOT__dut_convolution_filt__DOT__temp_kernel[20]),7);
        bufp->chgCData(oldp+349,(vlSelfRef.image_processor_tb__DOT__dut_convolution_filt__DOT__temp_kernel[21]),7);
        bufp->chgCData(oldp+350,(vlSelfRef.image_processor_tb__DOT__dut_convolution_filt__DOT__temp_kernel[22]),7);
        bufp->chgCData(oldp+351,(vlSelfRef.image_processor_tb__DOT__dut_convolution_filt__DOT__temp_kernel[23]),7);
        bufp->chgCData(oldp+352,(vlSelfRef.image_processor_tb__DOT__dut_convolution_filt__DOT__temp_kernel[24]),7);
        bufp->chgIData(oldp+353,(vlSelfRef.image_processor_tb__DOT__dut_convolution_filt__DOT__determine_kernel__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+354,(vlSelfRef.image_processor_tb__DOT__dut_convolution_filt__DOT__determine_kernel__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+355,(vlSelfRef.image_processor_tb__DOT__dut_convolution_filt__DOT__determine_kernel__DOT__unnamedblk3__DOT__i),32);
        bufp->chgBit(oldp+356,(vlSelfRef.image_processor_tb__DOT__dut_filter_fsm__DOT__next_button_q));
        bufp->chgBit(oldp+357,(vlSelfRef.image_processor_tb__DOT__dut_filter_fsm__DOT__prev_button_q));
        bufp->chgCData(oldp+358,(vlSelfRef.image_processor_tb__DOT__dut_filter_fsm__DOT__current_state),4);
        bufp->chgCData(oldp+359,(vlSelfRef.image_processor_tb__DOT__dut_lcd_display__DOT__current_state),2);
        bufp->chgCData(oldp+360,(((0U == (IData)(vlSelfRef.image_processor_tb__DOT__dut_lcd_display__DOT__current_state))
                                   ? (VL_GTS_III(32, 0xaU, vlSelfRef.image_processor_tb__DOT__dut_lcd_display__DOT__instruction_index)
                                       ? 1U : 0U) : 
                                  ((1U == (IData)(vlSelfRef.image_processor_tb__DOT__dut_lcd_display__DOT__current_state))
                                    ? ((IData)(vlSelfRef.image_processor_tb__DOT__waitrequest)
                                        ? 1U : 0U) : 0U))),2);
        bufp->chgSData(oldp+361,(vlSelfRef.image_processor_tb__DOT__dut_lcd_display__DOT__instructions[0]),9);
        bufp->chgSData(oldp+362,(vlSelfRef.image_processor_tb__DOT__dut_lcd_display__DOT__instructions[1]),9);
        bufp->chgSData(oldp+363,(vlSelfRef.image_processor_tb__DOT__dut_lcd_display__DOT__instructions[2]),9);
        bufp->chgSData(oldp+364,(vlSelfRef.image_processor_tb__DOT__dut_lcd_display__DOT__instructions[3]),9);
        bufp->chgSData(oldp+365,(vlSelfRef.image_processor_tb__DOT__dut_lcd_display__DOT__instructions[4]),9);
        bufp->chgSData(oldp+366,(vlSelfRef.image_processor_tb__DOT__dut_lcd_display__DOT__instructions[5]),9);
        bufp->chgSData(oldp+367,(vlSelfRef.image_processor_tb__DOT__dut_lcd_display__DOT__instructions[6]),9);
        bufp->chgSData(oldp+368,(vlSelfRef.image_processor_tb__DOT__dut_lcd_display__DOT__instructions[7]),9);
        bufp->chgSData(oldp+369,(vlSelfRef.image_processor_tb__DOT__dut_lcd_display__DOT__instructions[8]),9);
        bufp->chgSData(oldp+370,(vlSelfRef.image_processor_tb__DOT__dut_lcd_display__DOT__instructions[9]),9);
        bufp->chgIData(oldp+371,(((IData)(1U) + vlSelfRef.image_processor_tb__DOT__dut_lcd_display__DOT__instruction_index)),32);
        bufp->chgIData(oldp+372,(vlSelfRef.image_processor_tb__DOT__dut_lcd_display__DOT__instruction_index),32);
        bufp->chgCData(oldp+373,(vlSelfRef.image_processor_tb__DOT__dut_pixel_filt__DOT__range),3);
    }
    bufp->chgBit(oldp+374,(vlSelfRef.image_processor_tb__DOT__clk_25_vga));
    bufp->chgBit(oldp+375,(vlSelfRef.image_processor_tb__DOT__clk));
    bufp->chgBit(oldp+376,(vlSelfRef.image_processor_tb__DOT__lcd_reset));
    bufp->chgBit(oldp+377,(vlSelfRef.image_processor_tb__DOT__dut_filter_fsm__DOT__next_button_edge));
    bufp->chgBit(oldp+378,(vlSelfRef.image_processor_tb__DOT__dut_filter_fsm__DOT__prev_button_edge));
    bufp->chgCData(oldp+379,(((8U & (IData)(vlSelfRef.image_processor_tb__DOT__dut_filter_fsm__DOT__current_state))
                               ? 0U : ((4U & (IData)(vlSelfRef.image_processor_tb__DOT__dut_filter_fsm__DOT__current_state))
                                        ? ((2U & (IData)(vlSelfRef.image_processor_tb__DOT__dut_filter_fsm__DOT__current_state))
                                            ? 0U : 
                                           ((1U & (IData)(vlSelfRef.image_processor_tb__DOT__dut_filter_fsm__DOT__current_state))
                                             ? 0U : 
                                            ((IData)(vlSelfRef.image_processor_tb__DOT__dut_filter_fsm__DOT__next_button_edge)
                                              ? 0U : 
                                             ((IData)(vlSelfRef.image_processor_tb__DOT__dut_filter_fsm__DOT__prev_button_edge)
                                               ? 3U
                                               : 4U))))
                                        : ((2U & (IData)(vlSelfRef.image_processor_tb__DOT__dut_filter_fsm__DOT__current_state))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.image_processor_tb__DOT__dut_filter_fsm__DOT__current_state))
                                                ? ((IData)(vlSelfRef.image_processor_tb__DOT__dut_filter_fsm__DOT__next_button_edge)
                                                    ? 4U
                                                    : 
                                                   ((IData)(vlSelfRef.image_processor_tb__DOT__dut_filter_fsm__DOT__prev_button_edge)
                                                     ? 2U
                                                     : 3U))
                                                : ((IData)(vlSelfRef.image_processor_tb__DOT__dut_filter_fsm__DOT__next_button_edge)
                                                    ? 3U
                                                    : 
                                                   ((IData)(vlSelfRef.image_processor_tb__DOT__dut_filter_fsm__DOT__prev_button_edge)
                                                     ? 1U
                                                     : 2U)))
                                            : ((1U 
                                                & (IData)(vlSelfRef.image_processor_tb__DOT__dut_filter_fsm__DOT__current_state))
                                                ? ((IData)(vlSelfRef.image_processor_tb__DOT__dut_filter_fsm__DOT__next_button_edge)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlSelfRef.image_processor_tb__DOT__dut_filter_fsm__DOT__prev_button_edge)
                                                     ? 0U
                                                     : 1U))
                                                : ((IData)(vlSelfRef.image_processor_tb__DOT__dut_filter_fsm__DOT__next_button_edge)
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelfRef.image_processor_tb__DOT__dut_filter_fsm__DOT__prev_button_edge)
                                                     ? 4U
                                                     : 0U))))))),4);
}

void Vintegration_top_level_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegration_top_level_tb___024root__trace_cleanup\n"); );
    // Init
    Vintegration_top_level_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vintegration_top_level_tb___024root*>(voidSelf);
    Vintegration_top_level_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
