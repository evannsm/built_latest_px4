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

/* Auto-generated by genmsg_cpp from file /home/factslabegmc/PX4-Autopilot/msg/EstimatorAidSource3d.msg */


#include <inttypes.h>
#include <px4_platform_common/log.h>
#include <px4_platform_common/defines.h>
#include <uORB/topics/estimator_aid_source3d.h>
#include <uORB/topics/uORBTopics.hpp>
#include <drivers/drv_hrt.h>
#include <lib/drivers/device/Device.hpp>
#include <lib/matrix/matrix/math.hpp>
#include <lib/mathlib/mathlib.h>

constexpr char __orb_estimator_aid_source3d_fields[] = "\x89 timestamp;\x89 timestamp_sample;\x89 time_last_fuse;\x88 device_id;\x8a[3] observation;\x8a[3] observation_variance;\x8a[3] innovation;\x8a[3] innovation_variance;\x8a[3] test_ratio;\x86 estimator_instance;\x8c fusion_enabled;\x8c innovation_rejected;\x8c fused;\x86[4] _padding0;";

ORB_DEFINE(estimator_aid_src_ev_vel, struct estimator_aid_source3d_s, 92, __orb_estimator_aid_source3d_fields, static_cast<uint8_t>(ORB_ID::estimator_aid_src_ev_vel));
ORB_DEFINE(estimator_aid_src_gnss_vel, struct estimator_aid_source3d_s, 92, __orb_estimator_aid_source3d_fields, static_cast<uint8_t>(ORB_ID::estimator_aid_src_gnss_vel));
ORB_DEFINE(estimator_aid_src_gravity, struct estimator_aid_source3d_s, 92, __orb_estimator_aid_source3d_fields, static_cast<uint8_t>(ORB_ID::estimator_aid_src_gravity));
ORB_DEFINE(estimator_aid_src_mag, struct estimator_aid_source3d_s, 92, __orb_estimator_aid_source3d_fields, static_cast<uint8_t>(ORB_ID::estimator_aid_src_mag));


void print_message(const orb_metadata *meta, const estimator_aid_source3d_s& message)
{
	if (sizeof(message) != meta->o_size) {
		printf("unexpected message size for %s: %zu != %i\n", meta->o_name, sizeof(message), meta->o_size);
		return;
	}
	orb_print_message_internal(meta, &message, true);
}
