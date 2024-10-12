// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vimage_processor_tb__pch.h"
#include "Vimage_processor_tb.h"
#include "Vimage_processor_tb___024root.h"

// FUNCTIONS
Vimage_processor_tb__Syms::~Vimage_processor_tb__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void Vimage_processor_tb__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vimage_processor_tb__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vimage_processor_tb__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

Vimage_processor_tb__Syms::Vimage_processor_tb__Syms(VerilatedContext* contextp, const char* namep, Vimage_processor_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(6386);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_image_processor_tb.configure(this, name(), "image_processor_tb", "image_processor_tb", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_image_processor_tb__unnamedblk1.configure(this, name(), "image_processor_tb.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_image_processor_tb__unnamedblk2.configure(this, name(), "image_processor_tb.unnamedblk2", "unnamedblk2", -12, VerilatedScope::SCOPE_OTHER);
}
