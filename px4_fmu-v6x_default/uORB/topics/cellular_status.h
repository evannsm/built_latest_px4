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

/* Auto-generated by genmsg_cpp from file /home/factslabegmc/PX4-Autopilot/msg/CellularStatus.msg */


#pragma once


#include <uORB/uORB.h>


#ifndef __cplusplus
#define CELLULAR_STATUS_CELLULAR_STATUS_FLAG_UNKNOWN 0
#define CELLULAR_STATUS_CELLULAR_STATUS_FLAG_FAILED 1
#define CELLULAR_STATUS_CELLULAR_STATUS_FLAG_INITIALIZING 2
#define CELLULAR_STATUS_CELLULAR_STATUS_FLAG_LOCKED 3
#define CELLULAR_STATUS_CELLULAR_STATUS_FLAG_DISABLED 4
#define CELLULAR_STATUS_CELLULAR_STATUS_FLAG_DISABLING 5
#define CELLULAR_STATUS_CELLULAR_STATUS_FLAG_ENABLING 6
#define CELLULAR_STATUS_CELLULAR_STATUS_FLAG_ENABLED 7
#define CELLULAR_STATUS_CELLULAR_STATUS_FLAG_SEARCHING 8
#define CELLULAR_STATUS_CELLULAR_STATUS_FLAG_REGISTERED 9
#define CELLULAR_STATUS_CELLULAR_STATUS_FLAG_DISCONNECTING 10
#define CELLULAR_STATUS_CELLULAR_STATUS_FLAG_CONNECTING 11
#define CELLULAR_STATUS_CELLULAR_STATUS_FLAG_CONNECTED 12
#define CELLULAR_STATUS_CELLULAR_NETWORK_FAILED_REASON_NONE 0
#define CELLULAR_STATUS_CELLULAR_NETWORK_FAILED_REASON_UNKNOWN 1
#define CELLULAR_STATUS_CELLULAR_NETWORK_FAILED_REASON_SIM_MISSING 2
#define CELLULAR_STATUS_CELLULAR_NETWORK_FAILED_REASON_SIM_ERROR 3

#endif


#ifdef __cplusplus
struct __EXPORT cellular_status_s {
#else
struct cellular_status_s {
#endif
	uint64_t timestamp;
	uint16_t status;
	uint16_t mcc;
	uint16_t mnc;
	uint16_t lac;
	uint8_t failure_reason;
	uint8_t type;
	uint8_t quality;
	uint8_t _padding0[5]; // required for logger


#ifdef __cplusplus
	static constexpr uint8_t CELLULAR_STATUS_FLAG_UNKNOWN = 0;
	static constexpr uint8_t CELLULAR_STATUS_FLAG_FAILED = 1;
	static constexpr uint8_t CELLULAR_STATUS_FLAG_INITIALIZING = 2;
	static constexpr uint8_t CELLULAR_STATUS_FLAG_LOCKED = 3;
	static constexpr uint8_t CELLULAR_STATUS_FLAG_DISABLED = 4;
	static constexpr uint8_t CELLULAR_STATUS_FLAG_DISABLING = 5;
	static constexpr uint8_t CELLULAR_STATUS_FLAG_ENABLING = 6;
	static constexpr uint8_t CELLULAR_STATUS_FLAG_ENABLED = 7;
	static constexpr uint8_t CELLULAR_STATUS_FLAG_SEARCHING = 8;
	static constexpr uint8_t CELLULAR_STATUS_FLAG_REGISTERED = 9;
	static constexpr uint8_t CELLULAR_STATUS_FLAG_DISCONNECTING = 10;
	static constexpr uint8_t CELLULAR_STATUS_FLAG_CONNECTING = 11;
	static constexpr uint8_t CELLULAR_STATUS_FLAG_CONNECTED = 12;
	static constexpr uint8_t CELLULAR_NETWORK_FAILED_REASON_NONE = 0;
	static constexpr uint8_t CELLULAR_NETWORK_FAILED_REASON_UNKNOWN = 1;
	static constexpr uint8_t CELLULAR_NETWORK_FAILED_REASON_SIM_MISSING = 2;
	static constexpr uint8_t CELLULAR_NETWORK_FAILED_REASON_SIM_ERROR = 3;

#endif
};

#ifdef __cplusplus
namespace px4 {
	namespace msg {
		using CellularStatus = cellular_status_s;
	} // namespace msg
} // namespace px4
#endif

/* register this as object request broker structure */
ORB_DECLARE(cellular_status);


#ifdef __cplusplus
void print_message(const orb_metadata *meta, const cellular_status_s& message);
#endif
