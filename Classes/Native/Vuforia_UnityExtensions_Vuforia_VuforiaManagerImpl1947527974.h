#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl1264148721.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaManagerImpl/TrackableResultData
#pragma pack(push, tp, 1)
struct  TrackableResultData_t1947527974 
{
public:
	// Vuforia.VuforiaManagerImpl/PoseData Vuforia.VuforiaManagerImpl/TrackableResultData::pose
	PoseData_t1264148721  ___pose_0;
	// System.Double Vuforia.VuforiaManagerImpl/TrackableResultData::timeStamp
	double ___timeStamp_1;
	// System.Int32 Vuforia.VuforiaManagerImpl/TrackableResultData::statusInteger
	int32_t ___statusInteger_2;
	// System.Int32 Vuforia.VuforiaManagerImpl/TrackableResultData::id
	int32_t ___id_3;

public:
	inline static int32_t get_offset_of_pose_0() { return static_cast<int32_t>(offsetof(TrackableResultData_t1947527974, ___pose_0)); }
	inline PoseData_t1264148721  get_pose_0() const { return ___pose_0; }
	inline PoseData_t1264148721 * get_address_of_pose_0() { return &___pose_0; }
	inline void set_pose_0(PoseData_t1264148721  value)
	{
		___pose_0 = value;
	}

	inline static int32_t get_offset_of_timeStamp_1() { return static_cast<int32_t>(offsetof(TrackableResultData_t1947527974, ___timeStamp_1)); }
	inline double get_timeStamp_1() const { return ___timeStamp_1; }
	inline double* get_address_of_timeStamp_1() { return &___timeStamp_1; }
	inline void set_timeStamp_1(double value)
	{
		___timeStamp_1 = value;
	}

	inline static int32_t get_offset_of_statusInteger_2() { return static_cast<int32_t>(offsetof(TrackableResultData_t1947527974, ___statusInteger_2)); }
	inline int32_t get_statusInteger_2() const { return ___statusInteger_2; }
	inline int32_t* get_address_of_statusInteger_2() { return &___statusInteger_2; }
	inline void set_statusInteger_2(int32_t value)
	{
		___statusInteger_2 = value;
	}

	inline static int32_t get_offset_of_id_3() { return static_cast<int32_t>(offsetof(TrackableResultData_t1947527974, ___id_3)); }
	inline int32_t get_id_3() const { return ___id_3; }
	inline int32_t* get_address_of_id_3() { return &___id_3; }
	inline void set_id_3(int32_t value)
	{
		___id_3 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
