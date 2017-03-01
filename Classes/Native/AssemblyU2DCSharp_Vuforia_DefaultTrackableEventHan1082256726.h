#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t1779888572;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DefaultTrackableEventHandler
struct  DefaultTrackableEventHandler_t1082256726  : public MonoBehaviour_t1158329972
{
public:
	// Vuforia.TrackableBehaviour Vuforia.DefaultTrackableEventHandler::mTrackableBehaviour
	TrackableBehaviour_t1779888572 * ___mTrackableBehaviour_2;

public:
	inline static int32_t get_offset_of_mTrackableBehaviour_2() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1082256726, ___mTrackableBehaviour_2)); }
	inline TrackableBehaviour_t1779888572 * get_mTrackableBehaviour_2() const { return ___mTrackableBehaviour_2; }
	inline TrackableBehaviour_t1779888572 ** get_address_of_mTrackableBehaviour_2() { return &___mTrackableBehaviour_2; }
	inline void set_mTrackableBehaviour_2(TrackableBehaviour_t1779888572 * value)
	{
		___mTrackableBehaviour_2 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackableBehaviour_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
