/**
 * Author Maziar Ghorbani - Brunel University London
 * Based on implementation of Linear-Regression algorithm by Dr Thomas Schuh
 *
 * Top-level function definition for LR-HLS class
 */

#ifdef CMSSW_GIT_HASH
#include "L1Trigger/TrackerTFP/interface/HLS/lf_top.h"
#else
#include "lf_top.h"
#endif

#ifdef CMSSW_GIT_HASH
namespace trackerTFP {

namespace trackerHLS {
#endif

void lf_top(x_strm &x0, y_strm &y0, z_strm &z0, l_strm &l0, x_strm &x1, y_strm &y1, z_strm &z1, l_strm &l1) {
#pragma HLS PIPELINE

	dt_x xmap[21];
	dt_y ymap[21];
	dt_z zmap[21];
	dt_v vmap[21];

	for(int i = 0; i < 21; i++) {
		xmap[i] = 0;
		ymap[i] = 0;
		zmap[i] = 0;
		vmap[i] = 0;
	}

	lf_mem_fe(x0, y0, z0, l0, xmap, ymap, zmap, vmap);

	lf_mem_be(xmap, ymap, zmap, vmap, x1, y1, z1, l1);
}

#ifdef CMSSW_GIT_HASH
}

}
#endif
