/**
 * Author Maziar Ghorbani - Brunel University London
 * Based on implementation of Linear-Regression algorithm by Dr Thomas Schuh
 *
 * All-Types and
 * Class 'info' and 'CheckCalc' are based on Dr Ian Tomalin implementation of Kalman filter
 */

#ifndef L1Trigger_TrackerTFP_lf_types_h
#define L1Trigger_TrackerTFP_lf_types_h

#ifdef CMSSW_GIT_HASH
#include <iostream>
#include <ap_int.h>
#include <ap_fixed.h>
#include <hls_stream.h>
#else
#include <ap_int.h>
#include <ap_fixed.h>
#include <hls_stream.h>
#endif

#ifdef CMSSW_GIT_HASH
namespace trackerTFP {

namespace trackerHLS {
#endif

// Native variables
//typedef double dt_x;
//typedef double dt_y;
//typedef double dt_z;
//typedef int dt_l;
//typedef bool dt_v;

// Fixed-point variables
typedef ap_fixed<12,8> dt_x;
typedef ap_fixed<14,3> dt_y;
typedef ap_fixed<14,10> dt_z;
typedef ap_uint<3> dt_l;
typedef ap_uint<1> dt_v;

typedef hls::stream<dt_x> x_strm;
typedef hls::stream<dt_y> y_strm;
typedef hls::stream<dt_z> z_strm;
typedef hls::stream<dt_l> l_strm;

#ifdef CMSSW_GIT_HASH
}

}
#endif

#endif

