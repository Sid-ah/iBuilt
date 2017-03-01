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
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl3491121689.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaManagerImpl/WordResultData
#pragma pack(push, tp, 1)
struct  WordResultData_t3742236631 
{
public:
	// Vuforia.VuforiaManagerImpl/PoseData Vuforia.VuforiaManagerImpl/WordResultData::pose
	PoseData_t1264148721  ___pose_0;
	// System.Double Vuforia.VuforiaManagerImpl/WordResultData::timeStamp
	double ___timeStamp_1;
	// System.Int32 Vuforia.VuforiaManagerImpl/WordResultData::statusInteger
	int32_t ___statusInteger_2;
	// System.Int32 Vuforia.VuforiaManagerImpl/WordResultData::id
	int32_t ___id_3;
	// Vuforia.VuforiaManagerImpl/Obb2D Vuforia.VuforiaManagerImpl/WordResultData::orientedBoundingBox
	Obb2D_t3491121689  ___orientedBoundingBox_4;

public:
	inline static int32_t get_offset_of_pose_0() { return static_cast<int32_t>(offsetof(WordResultData_t3742236631, ___pose_0)); }
	inline PoseData_t1264148721  get_pose_0() const { return ___pose_0; }
	inline PoseData_t1264148721 * get_address_of_pose_0() { return &___pose_0; }
	inline void set_pose_0(PoseData_t1264148721  value)
	{
		___pose_0 = value;
	}

	inline static int32_t get_offset_of_timeStamp_1() { return static_cast<int32_t>(offsetof(WordResultData_t3742236631, ___timeStamp_1)); }
	inline double get_timeStamp_1() const { return ___timeStamp_1; }
	inline double* get_address_of_timeStamp_1() { return &___timeStamp_1; }
	inline void set_timeStamp_1(double value)
	{
		___timeStamp_1 = value;
	}

	inline static int32_t get_offset_of_statusInteger_2() { return static_cast<int32_t>(offsetof(WordResultData_t3742236631, ___statusInteger_2)); }
	inline int32_t get_statusInteger_2() const { return ___statusInteger_2; }
	inline int32_t* get_address_of_statusInteger_2() { return &___statusInteger_2; }
	inline void set_statusInteger_2(int32_t value)
	{
		___statusInteger_2 = value;
	}

	inline static int32_t get_offset_of_id_3() { return static_cast<int32_t>(offsetof(WordResultData_t3742236631, ___id_3)); }
	inline int32_t get_id_3() const { return ___id_3; }
	inline int32_t* get_address_of_id_3() { return &___id_3; }
	inline void set_id_3(int32_t value)
	{
		___id_3 = value;
	}

	inline static int32_t get_offset_of_orientedBoundingBox_4() { return static_cast<int32_t>(offsetof(WordResultData_t3742236631, ___orientedBoundingBox_4)); }
	inline Obb2D_t3491121689  get_orientedBoundingBox_4() const { return ___orientedBoundingBox_4; }
	inline Obb2D_t3491121689 * get_address_of_orientedBoundingBox_4() { return &___orientedBoundingBox_4; }
	inline void set_orientedBoundingBox_4(Obb2D_t3491121689  value)
	{
		___orientedBoundingBox_4 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
