#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl1863273727.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl3491121690.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl1264148721.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaManagerImpl/PropData
#pragma pack(push, tp, 1)
struct  PropData_t4033919773 
{
public:
	// Vuforia.VuforiaManagerImpl/MeshData Vuforia.VuforiaManagerImpl/PropData::meshData
	MeshData_t1863273727  ___meshData_0;
	// System.Int32 Vuforia.VuforiaManagerImpl/PropData::id
	int32_t ___id_1;
	// System.Int32 Vuforia.VuforiaManagerImpl/PropData::parentID
	int32_t ___parentID_2;
	// Vuforia.VuforiaManagerImpl/Obb3D Vuforia.VuforiaManagerImpl/PropData::boundingBox
	Obb3D_t3491121690  ___boundingBox_3;
	// UnityEngine.Vector2 Vuforia.VuforiaManagerImpl/PropData::localPosition
	Vector2_t2243707579  ___localPosition_4;
	// Vuforia.VuforiaManagerImpl/PoseData Vuforia.VuforiaManagerImpl/PropData::localPose
	PoseData_t1264148721  ___localPose_5;
	// System.Int32 Vuforia.VuforiaManagerImpl/PropData::revision
	int32_t ___revision_6;
	// System.Int32 Vuforia.VuforiaManagerImpl/PropData::unused
	int32_t ___unused_7;

public:
	inline static int32_t get_offset_of_meshData_0() { return static_cast<int32_t>(offsetof(PropData_t4033919773, ___meshData_0)); }
	inline MeshData_t1863273727  get_meshData_0() const { return ___meshData_0; }
	inline MeshData_t1863273727 * get_address_of_meshData_0() { return &___meshData_0; }
	inline void set_meshData_0(MeshData_t1863273727  value)
	{
		___meshData_0 = value;
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(PropData_t4033919773, ___id_1)); }
	inline int32_t get_id_1() const { return ___id_1; }
	inline int32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(int32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_parentID_2() { return static_cast<int32_t>(offsetof(PropData_t4033919773, ___parentID_2)); }
	inline int32_t get_parentID_2() const { return ___parentID_2; }
	inline int32_t* get_address_of_parentID_2() { return &___parentID_2; }
	inline void set_parentID_2(int32_t value)
	{
		___parentID_2 = value;
	}

	inline static int32_t get_offset_of_boundingBox_3() { return static_cast<int32_t>(offsetof(PropData_t4033919773, ___boundingBox_3)); }
	inline Obb3D_t3491121690  get_boundingBox_3() const { return ___boundingBox_3; }
	inline Obb3D_t3491121690 * get_address_of_boundingBox_3() { return &___boundingBox_3; }
	inline void set_boundingBox_3(Obb3D_t3491121690  value)
	{
		___boundingBox_3 = value;
	}

	inline static int32_t get_offset_of_localPosition_4() { return static_cast<int32_t>(offsetof(PropData_t4033919773, ___localPosition_4)); }
	inline Vector2_t2243707579  get_localPosition_4() const { return ___localPosition_4; }
	inline Vector2_t2243707579 * get_address_of_localPosition_4() { return &___localPosition_4; }
	inline void set_localPosition_4(Vector2_t2243707579  value)
	{
		___localPosition_4 = value;
	}

	inline static int32_t get_offset_of_localPose_5() { return static_cast<int32_t>(offsetof(PropData_t4033919773, ___localPose_5)); }
	inline PoseData_t1264148721  get_localPose_5() const { return ___localPose_5; }
	inline PoseData_t1264148721 * get_address_of_localPose_5() { return &___localPose_5; }
	inline void set_localPose_5(PoseData_t1264148721  value)
	{
		___localPose_5 = value;
	}

	inline static int32_t get_offset_of_revision_6() { return static_cast<int32_t>(offsetof(PropData_t4033919773, ___revision_6)); }
	inline int32_t get_revision_6() const { return ___revision_6; }
	inline int32_t* get_address_of_revision_6() { return &___revision_6; }
	inline void set_revision_6(int32_t value)
	{
		___revision_6 = value;
	}

	inline static int32_t get_offset_of_unused_7() { return static_cast<int32_t>(offsetof(PropData_t4033919773, ___unused_7)); }
	inline int32_t get_unused_7() const { return ___unused_7; }
	inline int32_t* get_address_of_unused_7() { return &___unused_7; }
	inline void set_unused_7(int32_t value)
	{
		___unused_7 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
