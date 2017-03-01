#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"
#include "Vuforia_UnityExtensions_Vuforia_HoloLensExtendedTr1161658011.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry
struct  PoseAgeEntry_t3432166560 
{
public:
	// Vuforia.HoloLensExtendedTrackingManager/PoseInfo Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry::Pose
	PoseInfo_t1161658011  ___Pose_0;
	// Vuforia.HoloLensExtendedTrackingManager/PoseInfo Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry::CameraPose
	PoseInfo_t1161658011  ___CameraPose_1;
	// System.Int32 Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry::Age
	int32_t ___Age_2;

public:
	inline static int32_t get_offset_of_Pose_0() { return static_cast<int32_t>(offsetof(PoseAgeEntry_t3432166560, ___Pose_0)); }
	inline PoseInfo_t1161658011  get_Pose_0() const { return ___Pose_0; }
	inline PoseInfo_t1161658011 * get_address_of_Pose_0() { return &___Pose_0; }
	inline void set_Pose_0(PoseInfo_t1161658011  value)
	{
		___Pose_0 = value;
	}

	inline static int32_t get_offset_of_CameraPose_1() { return static_cast<int32_t>(offsetof(PoseAgeEntry_t3432166560, ___CameraPose_1)); }
	inline PoseInfo_t1161658011  get_CameraPose_1() const { return ___CameraPose_1; }
	inline PoseInfo_t1161658011 * get_address_of_CameraPose_1() { return &___CameraPose_1; }
	inline void set_CameraPose_1(PoseInfo_t1161658011  value)
	{
		___CameraPose_1 = value;
	}

	inline static int32_t get_offset_of_Age_2() { return static_cast<int32_t>(offsetof(PoseAgeEntry_t3432166560, ___Age_2)); }
	inline int32_t get_Age_2() const { return ___Age_2; }
	inline int32_t* get_address_of_Age_2() { return &___Age_2; }
	inline void set_Age_2(int32_t value)
	{
		___Age_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
