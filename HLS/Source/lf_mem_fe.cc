/**
 * Author Maziar Ghorbani - Brunel University London
 * Based on implementation of Linear-Regression algorithm by Dr Thomas Schuh
 *
 * Top-level function definition for LR-HLS class
 */

#ifdef CMSSW_GIT_HASH
#include "L1Trigger/TrackerTFP/interface/HLS/lf_mem_fe.h"
#else
#include "lf_mem_fe.h"
#endif

#ifdef CMSSW_GIT_HASH
namespace trackerTFP {

namespace trackerHLS {
#endif

void lf_mem_fe(x_strm &x0, y_strm &y0, z_strm &z0, l_strm &l0, dt_x xmap[21], dt_y ymap[21], dt_z zmap[21], dt_v vmap[21]) {

	int lp[7];
#pragma HLS ARRAY_PARTITION variable=lp dim=1 complete
	for (int i = 0; i < 7; i++) {
		lp[i] = 0;
	}

	int tmp = 0;
	for (int i = 0; i < 16; i++) {
		switch (l0.read()) {
			case 0:
				tmp = 7 * lp[0];
				xmap[tmp] = x0.read();
				ymap[tmp] = y0.read();
				zmap[tmp] = z0.read();
				vmap[tmp] = 1;
				lp[0]++;
			break;

			case 1:
				tmp = 7 * lp[1] + 1;
				xmap[tmp] = x0.read();
				ymap[tmp] = y0.read();
				zmap[tmp] = z0.read();
				vmap[tmp] = 1;
				lp[1]++;
			break;

			case 2:
				tmp = 7 * lp[2] + 2;
				xmap[tmp] = x0.read();
				ymap[tmp] = y0.read();
				zmap[tmp] = z0.read();
				vmap[tmp] = 1;
				lp[2]++;
			break;

			case 3:
				tmp = 7 * lp[3] + 3;
				xmap[tmp] = x0.read();
				ymap[tmp] = y0.read();
				zmap[tmp] = z0.read();
				vmap[tmp] = 1;
				lp[3]++;
			break;

			case 4:
				tmp = 7 * lp[4] + 4;
				xmap[tmp] = x0.read();
				ymap[tmp] = y0.read();
				zmap[tmp] = z0.read();
				vmap[tmp] = 1;
				lp[4]++;
			break;

			case 5:
				tmp = 7 * lp[5] + 5;
				xmap[tmp] = x0.read();
				ymap[tmp] = y0.read();
				zmap[tmp] = z0.read();
				vmap[tmp] = 1;
				lp[5]++;
			break;

			case 6:
				tmp = 7 * lp[6] + 6;
				xmap[tmp] = x0.read();
				ymap[tmp] = y0.read();
				zmap[tmp] = z0.read();
				vmap[tmp] = 1;
				lp[6]++;
			break;
		}
	}
}

#ifdef CMSSW_GIT_HASH
}

}
#endif
