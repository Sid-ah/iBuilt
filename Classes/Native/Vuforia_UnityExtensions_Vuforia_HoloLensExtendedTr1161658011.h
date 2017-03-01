#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.HoloLensExtendedTrackingManager/PoseInfo
struct  PoseInfo_t1161658011 
{
public:
	// UnityEngine.Vector3 Vuforia.HoloLensExtendedTrackingManager/PoseInfo::Position
	Vector3_t2243707580  ___Position_0;
	// UnityEngine.Quaternion Vuforia.HoloLensExtendedTrackingManager/PoseInfo::Rotation
	Quaternion_t4030073918  ___Rotation_1;
	// System.Int32 Vuforia.HoloLensExtendedTrackingManager/PoseInfo::NumFramesPoseWasOff
	int32_t ___NumFramesPoseWasOff_2;

public:
	inline static int32_t get_offset_of_Position_0() { return static_cast<int32_t>(offsetof(PoseInfo_t1161658011, ___Position_0)); }
	inline Vector3_t2243707580  get_Position_0() const { return ___Position_0; }
	inline Vector3_t2243707580 * get_address_of_Position_0() { return &___Position_0; }
	inline void set_Position_0(Vector3_t2243707580  value)
	{
		___Position_0 = value;
	}

	inline static int32_t get_offset_of_Rotation_1() { return static_cast<int32_t>(offsetof(PoseInfo_t1161658011, ___Rotation_1)); }
	inline Quaternion_t4030073918  get_Rotation_1() const { return ___Rotation_1; }
	inline Quaternion_t4030073918 * get_address_of_Rotation_1() { return &___Rotation_1; }
	inline void set_Rotation_1(Quaternion_t4030073918  value)
	{
		___Rotation_1 = value;
	}

	inline static int32_t get_offset_of_NumFramesPoseWasOff_2() { return static_cast<int32_t>(offsetof(PoseInfo_t1161658011, ___NumFramesPoseWasOff_2)); }
	inline int32_t get_NumFramesPoseWasOff_2() const { return ___NumFramesPoseWasOff_2; }
	inline int32_t* get_address_of_NumFramesPoseWasOff_2() { return &___NumFramesPoseWasOff_2; }
	inline void set_NumFramesPoseWasOff_2(int32_t value)
	{
		___NumFramesPoseWasOff_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
