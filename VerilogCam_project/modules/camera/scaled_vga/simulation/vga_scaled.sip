set_global_assignment -entity "vga_scaled" -library "lib_vga_scaled" -name IP_TOOL_NAME "Qsys"
set_global_assignment -entity "vga_scaled" -library "lib_vga_scaled" -name IP_TOOL_VERSION "20.1"
set_global_assignment -entity "vga_scaled" -library "lib_vga_scaled" -name IP_TOOL_ENV "Qsys"
set_global_assignment -library "lib_vga_scaled" -name SPD_FILE [file join $::quartus(sip_path) "../vga_scaled.spd"]
set_global_assignment -library "lib_vga_scaled" -name MISC_FILE [file join $::quartus(sip_path) "../../vga_scaled.qsys"]

set_global_assignment -library "lib_vga_scaled" -name MISC_FILE [file join $::quartus(sip_path) "vga_scaled.v"]
set_global_assignment -library "lib_vga_scaled" -name MISC_FILE [file join $::quartus(sip_path) "submodules/altera_reset_controller.v"]
set_global_assignment -library "lib_vga_scaled" -name MISC_FILE [file join $::quartus(sip_path) "submodules/altera_reset_synchronizer.v"]
set_global_assignment -library "lib_vga_scaled" -name MISC_FILE [file join $::quartus(sip_path) "submodules/altera_reset_controller.sdc"]
set_global_assignment -library "lib_vga_scaled" -name MISC_FILE [file join $::quartus(sip_path) "submodules/vga_scaled_avalon_st_adapter.v"]
set_global_assignment -library "lib_vga_scaled" -name MISC_FILE [file join $::quartus(sip_path) "submodules/vga_scaled_avalon_st_adapter_channel_adapter_0.sv"]
set_global_assignment -library "lib_vga_scaled" -name MISC_FILE [file join $::quartus(sip_path) "submodules/altera_up_avalon_video_vga_timing.v"]
set_global_assignment -library "lib_vga_scaled" -name MISC_FILE [file join $::quartus(sip_path) "submodules/vga_scaled_video_vga_controller_0.v"]
set_global_assignment -library "lib_vga_scaled" -name MISC_FILE [file join $::quartus(sip_path) "submodules/altera_up_video_scaler_shrink.v"]
set_global_assignment -library "lib_vga_scaled" -name MISC_FILE [file join $::quartus(sip_path) "submodules/altera_up_video_scaler_multiply_width.v"]
set_global_assignment -library "lib_vga_scaled" -name MISC_FILE [file join $::quartus(sip_path) "submodules/altera_up_video_scaler_multiply_height.v"]
set_global_assignment -library "lib_vga_scaled" -name MISC_FILE [file join $::quartus(sip_path) "submodules/vga_scaled_video_scaler_0.v"]
