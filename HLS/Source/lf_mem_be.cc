/**
 * Author Maziar Ghorbani - Brunel University London
 * Based on implementation of Linear-Regression algorithm by Dr Thomas Schuh
 *
 * Top-level function definition for LR-HLS class
 */

#ifdef CMSSW_GIT_HASH
#include "L1Trigger/TrackerTFP/interface/HLS/lf_mem_be.h"
#else
#include "lf_mem_be.h"
#endif

#ifdef CMSSW_GIT_HASH
namespace trackerTFP {

namespace trackerHLS {
#endif

void lf_mem_be(dt_x xmap[21], dt_y ymap[21], dt_z zmap[21], dt_v vmap[21], x_strm &x1, y_strm &y1, z_strm &z1, l_strm &l1) {

	for(int i = 0; i < 7; i++) {
		for(int j = 0; j < 3; j++) {
			int temp = 7 * j + i;
			if(vmap[temp] == 1) {
				x1.write(xmap[temp]);
				y1.write(ymap[temp]);
				z1.write(zmap[temp]);
				l1.write(i);
			}
		}
	}

}

#ifdef CMSSW_GIT_HASH
}

}
#endif
