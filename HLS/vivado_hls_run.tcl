############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
delete_project LF_HLS
open_project LF_HLS
set_top lf_top
add_files lf_mem_be.cc -cflags "-std=c++11" -csimflags "-std=c++14"
add_files lf_mem_be.h  -cflags "-std=c++11" -csimflags "-std=c++14"
add_files lf_mem_fe.cc -cflags "-std=c++11" -csimflags "-std=c++14"
add_files lf_mem_fe.h  -cflags "-std=c++11" -csimflags "-std=c++14"
add_files lf_top.cc    -cflags "-std=c++11" -csimflags "-std=c++14"
add_files lf_top.h     -cflags "-std=c++11" -csimflags "-std=c++14"
add_files lf_types.h   -cflags "-std=c++11" -csimflags "-std=c++14"
add_files -tb input.txt -cflags "-Wno-unknown-pragmas"
add_files -tb lf_testbench.cc -cflags "-Wno-unknown-pragmas"
add_files -tb output.txt -cflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xcvu9p-flga2104-2L-e}
create_clock -period 2.77 -name default
config_sdx -optimization_level none -target none
config_schedule -effort medium -relax_ii_for_timing=0
source "./vivado_hls_directives.tcl"
csim_design
csynth_design
cosim_design -trace_level all -rtl vhdl
export_design -rtl vhdl -format ip_catalog
exit
