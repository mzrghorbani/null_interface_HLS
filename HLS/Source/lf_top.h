/**
 * Author Maziar Ghorbani - Brunel University London
 * Based on implementation of Linear-Regression algorithm by Dr Thomas Schuh
 *
 * Top-level function declaration for LR-HLS class
 */

#ifndef L1Trigger_TrackerTFP_lf_top_h
#define L1Trigger_TrackerTFP_lf_top_h

#ifdef CMSSW_GIT_HASH
#include "L1Trigger/TrackerTFP/interface/HLS/lf_types.h"
#include "L1Trigger/TrackerTFP/interface/HLS/lf_mem_fe.h"
#include "L1Trigger/TrackerTFP/interface/HLS/lf_mem_be.h"
#else
#include "lf_types.h"
#include "lf_mem_fe.h"
#include "lf_mem_be.h"
#endif

#ifdef CMSSW_GIT_HASH
namespace trackerTFP {

namespace trackerHLS {
#endif

// Top-level function declaration for LR-HLS class
void lf_top(x_strm &x0, y_strm &y0, z_strm &z0, l_strm &l0, x_strm &x1, y_strm &y1, z_strm &z1, l_strm &l1);

#ifdef CMSSW_GIT_HASH
}

}
#endif

#endif
