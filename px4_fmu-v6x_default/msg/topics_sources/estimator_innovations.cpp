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

/* Auto-generated by genmsg_cpp from file /home/factslabegmc/PX4-Autopilot/msg/EstimatorInnovations.msg */


#include <inttypes.h>
#include <px4_platform_common/log.h>
#include <px4_platform_common/defines.h>
#include <uORB/topics/estimator_innovations.h>
#include <uORB/topics/uORBTopics.hpp>
#include <drivers/drv_hrt.h>
#include <lib/drivers/device/Device.hpp>
#include <lib/matrix/matrix/math.hpp>
#include <lib/mathlib/mathlib.h>

constexpr char __orb_estimator_innovations_fields[] = "\x89 timestamp;\x89 timestamp_sample;\x8a[2] gps_hvel;\x8a gps_vvel;\x8a[2] gps_hpos;\x8a gps_vpos;\x8a[2] ev_hvel;\x8a ev_vvel;\x8a[2] ev_hpos;\x8a ev_vpos;\x8a rng_vpos;\x8a baro_vpos;\x8a[2] aux_hvel;\x8a aux_vvel;\x8a[2] flow;\x8a[2] terr_flow;\x8a heading;\x8a[3] mag_field;\x8a[3] gravity;\x8a[2] drag;\x8a airspeed;\x8a beta;\x8a hagl;\x8a hagl_rate;";

ORB_DEFINE(estimator_innovations, struct estimator_innovations_s, 152, __orb_estimator_innovations_fields, static_cast<uint8_t>(ORB_ID::estimator_innovations));
ORB_DEFINE(estimator_innovation_variances, struct estimator_innovations_s, 152, __orb_estimator_innovations_fields, static_cast<uint8_t>(ORB_ID::estimator_innovation_variances));
ORB_DEFINE(estimator_innovation_test_ratios, struct estimator_innovations_s, 152, __orb_estimator_innovations_fields, static_cast<uint8_t>(ORB_ID::estimator_innovation_test_ratios));


void print_message(const orb_metadata *meta, const estimator_innovations_s& message)
{
	if (sizeof(message) != meta->o_size) {
		printf("unexpected message size for %s: %zu != %i\n", meta->o_name, sizeof(message), meta->o_size);
		return;
	}
	orb_print_message_internal(meta, &message, true);
}
