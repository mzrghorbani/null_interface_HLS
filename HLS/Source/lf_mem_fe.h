/**
 * Author Maziar Ghorbani - Brunel University London
 * Based on implementation of Linear-Regression algorithm by Dr Thomas Schuh
 *
 * Top-level function definition for LR-HLS class
 */

#ifndef L1Trigger_TrackerTFP_lf_mem_fe_h
#define L1Trigger_TrackerTFP_lf_mem_fe_h

#ifdef CMSSW_GIT_HASH
#include "L1Trigger/TrackerTFP/interface/HLS/lf_types.h"
#else
#include "lf_types.h"
#endif

#ifdef CMSSW_GIT_HASH
namespace trackerTFP {

namespace trackerHLS {
#endif

void lf_mem_fe(x_strm &x0, y_strm &y0, z_strm &z0, l_strm &l0, dt_x xmap[21], dt_y ymap[21], dt_z zmap[21], dt_v vmap[21]);

#ifdef CMSSW_GIT_HASH
}

}
#endif

#endif
