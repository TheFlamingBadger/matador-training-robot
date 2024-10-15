transcript on
if {[file exists rtl_work]} {
	vdel -lib rtl_work -all
}
vlib rtl_work
vmap work rtl_work

vlog -vlog01compat -work work +incdir+C:/Users/joshn/iCloudDrive/Desktop/Uni/MTRX3700/test_Workspaces/Ultrasonic-distance-bounded {C:/Users/joshn/iCloudDrive/Desktop/Uni/MTRX3700/test_Workspaces/Ultrasonic-distance-bounded/PLL.v}
vlog -vlog01compat -work work +incdir+C:/Users/joshn/iCloudDrive/Desktop/Uni/MTRX3700/test_Workspaces/Ultrasonic-distance-bounded/db {C:/Users/joshn/iCloudDrive/Desktop/Uni/MTRX3700/test_Workspaces/Ultrasonic-distance-bounded/db/pll_altpll.v}
vlog -sv -work work +incdir+C:/Users/joshn/iCloudDrive/Desktop/Uni/MTRX3700/test_Workspaces/Ultrasonic-distance-bounded {C:/Users/joshn/iCloudDrive/Desktop/Uni/MTRX3700/test_Workspaces/Ultrasonic-distance-bounded/sensor_driver.sv}
vlog -sv -work work +incdir+C:/Users/joshn/iCloudDrive/Desktop/Uni/MTRX3700/test_Workspaces/Ultrasonic-distance-bounded {C:/Users/joshn/iCloudDrive/Desktop/Uni/MTRX3700/test_Workspaces/Ultrasonic-distance-bounded/top_level.sv}
vlog -sv -work work +incdir+C:/Users/joshn/iCloudDrive/Desktop/Uni/MTRX3700/test_Workspaces/Ultrasonic-distance-bounded {C:/Users/joshn/iCloudDrive/Desktop/Uni/MTRX3700/test_Workspaces/Ultrasonic-distance-bounded/debounce.sv}

vlog -sv -work work +incdir+C:/Users/joshn/iCloudDrive/Desktop/Uni/MTRX3700/test_Workspaces/Ultrasonic-distance-bounded {C:/Users/joshn/iCloudDrive/Desktop/Uni/MTRX3700/test_Workspaces/Ultrasonic-distance-bounded/sensor_driver_tb.sv}

vsim -t 1ps -L altera_ver -L lpm_ver -L sgate_ver -L altera_mf_ver -L altera_lnsim_ver -L cycloneive_ver -L rtl_work -L work -voptargs="+acc"  sensor_driver_tb

add wave *
view structure
view signals
run -all
