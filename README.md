# null_interface_HLS

The commands to run the algorithm in null_interface repository:

	git clone ln -f -s Source/lf_mem.be.cc $dirname/lf_mem_be.cc

	cd null_interface_HLS/HLS

	sh add_links

	cd workspace

	vivado_hls -f vivado_hls_run.tcl

Visit vivado_hls.log file to review utilisation and timing reports. 
