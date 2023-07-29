/****************************************************************************
 *
 *   Copyright (C) 2013-2022 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/* Auto-generated by genmsg_cpp from file /home/factslabegmc/PX4-Autopilot/msg/EstimatorStatusFlags.msg */


#pragma once


#include <uORB/uORB.h>


#ifndef __cplusplus

#endif


#ifdef __cplusplus
struct __EXPORT estimator_status_flags_s {
#else
struct estimator_status_flags_s {
#endif
	uint64_t timestamp;
	uint64_t timestamp_sample;
	uint32_t control_status_changes;
	uint32_t fault_status_changes;
	uint32_t innovation_fault_status_changes;
	bool cs_tilt_align;
	bool cs_yaw_align;
	bool cs_gps;
	bool cs_opt_flow;
	bool cs_mag_hdg;
	bool cs_mag_3d;
	bool cs_mag_dec;
	bool cs_in_air;
	bool cs_wind;
	bool cs_baro_hgt;
	bool cs_rng_hgt;
	bool cs_gps_hgt;
	bool cs_ev_pos;
	bool cs_ev_yaw;
	bool cs_ev_hgt;
	bool cs_fuse_beta;
	bool cs_mag_field_disturbed;
	bool cs_fixed_wing;
	bool cs_mag_fault;
	bool cs_fuse_aspd;
	bool cs_gnd_effect;
	bool cs_rng_stuck;
	bool cs_gps_yaw;
	bool cs_mag_aligned_in_flight;
	bool cs_ev_vel;
	bool cs_synthetic_mag_z;
	bool cs_vehicle_at_rest;
	bool cs_gps_yaw_fault;
	bool cs_rng_fault;
	bool cs_inertial_dead_reckoning;
	bool cs_wind_dead_reckoning;
	bool cs_rng_kin_consistent;
	bool cs_fake_pos;
	bool cs_fake_hgt;
	bool cs_gravity_vector;
	bool fs_bad_mag_x;
	bool fs_bad_mag_y;
	bool fs_bad_mag_z;
	bool fs_bad_hdg;
	bool fs_bad_mag_decl;
	bool fs_bad_airspeed;
	bool fs_bad_sideslip;
	bool fs_bad_optflow_x;
	bool fs_bad_optflow_y;
	bool fs_bad_vel_n;
	bool fs_bad_vel_e;
	bool fs_bad_vel_d;
	bool fs_bad_pos_n;
	bool fs_bad_pos_e;
	bool fs_bad_pos_d;
	bool fs_bad_acc_bias;
	bool fs_bad_acc_vertical;
	bool fs_bad_acc_clipping;
	bool reject_hor_vel;
	bool reject_ver_vel;
	bool reject_hor_pos;
	bool reject_ver_pos;
	bool reject_yaw;
	bool reject_airspeed;
	bool reject_sideslip;
	bool reject_hagl;
	bool reject_optflow_x;
	bool reject_optflow_y;
	uint8_t _padding0[5]; // required for logger


#ifdef __cplusplus

#endif
};

#ifdef __cplusplus
namespace px4 {
	namespace msg {
		using EstimatorStatusFlags = estimator_status_flags_s;
	} // namespace msg
} // namespace px4
#endif

/* register this as object request broker structure */
ORB_DECLARE(estimator_status_flags);


#ifdef __cplusplus
void print_message(const orb_metadata *meta, const estimator_status_flags_s& message);
#endif
