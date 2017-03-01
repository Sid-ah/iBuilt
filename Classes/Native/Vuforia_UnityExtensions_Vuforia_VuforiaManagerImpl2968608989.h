#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl1863273727.h"
#include "Vuforia_UnityExtensions_Vuforia_RectangleData934532407.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl1264148721.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaManagerImpl/SurfaceData
#pragma pack(push, tp, 1)
struct  SurfaceData_t2968608989 
{
public:
	// System.IntPtr Vuforia.VuforiaManagerImpl/SurfaceData::meshBoundaryArray
	IntPtr_t ___meshBoundaryArray_0;
	// Vuforia.VuforiaManagerImpl/MeshData Vuforia.VuforiaManagerImpl/SurfaceData::meshData
	MeshData_t1863273727  ___meshData_1;
	// Vuforia.VuforiaManagerImpl/MeshData Vuforia.VuforiaManagerImpl/SurfaceData::navMeshData
	MeshData_t1863273727  ___navMeshData_2;
	// Vuforia.RectangleData Vuforia.VuforiaManagerImpl/SurfaceData::boundingBox
	RectangleData_t934532407  ___boundingBox_3;
	// Vuforia.VuforiaManagerImpl/PoseData Vuforia.VuforiaManagerImpl/SurfaceData::localPose
	PoseData_t1264148721  ___localPose_4;
	// System.Int32 Vuforia.VuforiaManagerImpl/SurfaceData::id
	int32_t ___id_5;
	// System.Int32 Vuforia.VuforiaManagerImpl/SurfaceData::parentID
	int32_t ___parentID_6;
	// System.Int32 Vuforia.VuforiaManagerImpl/SurfaceData::numBoundaryIndices
	int32_t ___numBoundaryIndices_7;
	// System.Int32 Vuforia.VuforiaManagerImpl/SurfaceData::revision
	int32_t ___revision_8;

public:
	inline static int32_t get_offset_of_meshBoundaryArray_0() { return static_cast<int32_t>(offsetof(SurfaceData_t2968608989, ___meshBoundaryArray_0)); }
	inline IntPtr_t get_meshBoundaryArray_0() const { return ___meshBoundaryArray_0; }
	inline IntPtr_t* get_address_of_meshBoundaryArray_0() { return &___meshBoundaryArray_0; }
	inline void set_meshBoundaryArray_0(IntPtr_t value)
	{
		___meshBoundaryArray_0 = value;
	}

	inline static int32_t get_offset_of_meshData_1() { return static_cast<int32_t>(offsetof(SurfaceData_t2968608989, ___meshData_1)); }
	inline MeshData_t1863273727  get_meshData_1() const { return ___meshData_1; }
	inline MeshData_t1863273727 * get_address_of_meshData_1() { return &___meshData_1; }
	inline void set_meshData_1(MeshData_t1863273727  value)
	{
		___meshData_1 = value;
	}

	inline static int32_t get_offset_of_navMeshData_2() { return static_cast<int32_t>(offsetof(SurfaceData_t2968608989, ___navMeshData_2)); }
	inline MeshData_t1863273727  get_navMeshData_2() const { return ___navMeshData_2; }
	inline MeshData_t1863273727 * get_address_of_navMeshData_2() { return &___navMeshData_2; }
	inline void set_navMeshData_2(MeshData_t1863273727  value)
	{
		___navMeshData_2 = value;
	}

	inline static int32_t get_offset_of_boundingBox_3() { return static_cast<int32_t>(offsetof(SurfaceData_t2968608989, ___boundingBox_3)); }
	inline RectangleData_t934532407  get_boundingBox_3() const { return ___boundingBox_3; }
	inline RectangleData_t934532407 * get_address_of_boundingBox_3() { return &___boundingBox_3; }
	inline void set_boundingBox_3(RectangleData_t934532407  value)
	{
		___boundingBox_3 = value;
	}

	inline static int32_t get_offset_of_localPose_4() { return static_cast<int32_t>(offsetof(SurfaceData_t2968608989, ___localPose_4)); }
	inline PoseData_t1264148721  get_localPose_4() const { return ___localPose_4; }
	inline PoseData_t1264148721 * get_address_of_localPose_4() { return &___localPose_4; }
	inline void set_localPose_4(PoseData_t1264148721  value)
	{
		___localPose_4 = value;
	}

	inline static int32_t get_offset_of_id_5() { return static_cast<int32_t>(offsetof(SurfaceData_t2968608989, ___id_5)); }
	inline int32_t get_id_5() const { return ___id_5; }
	inline int32_t* get_address_of_id_5() { return &___id_5; }
	inline void set_id_5(int32_t value)
	{
		___id_5 = value;
	}

	inline static int32_t get_offset_of_parentID_6() { return static_cast<int32_t>(offsetof(SurfaceData_t2968608989, ___parentID_6)); }
	inline int32_t get_parentID_6() const { return ___parentID_6; }
	inline int32_t* get_address_of_parentID_6() { return &___parentID_6; }
	inline void set_parentID_6(int32_t value)
	{
		___parentID_6 = value;
	}

	inline static int32_t get_offset_of_numBoundaryIndices_7() { return static_cast<int32_t>(offsetof(SurfaceData_t2968608989, ___numBoundaryIndices_7)); }
	inline int32_t get_numBoundaryIndices_7() const { return ___numBoundaryIndices_7; }
	inline int32_t* get_address_of_numBoundaryIndices_7() { return &___numBoundaryIndices_7; }
	inline void set_numBoundaryIndices_7(int32_t value)
	{
		___numBoundaryIndices_7 = value;
	}

	inline static int32_t get_offset_of_revision_8() { return static_cast<int32_t>(offsetof(SurfaceData_t2968608989, ___revision_8)); }
	inline int32_t get_revision_8() const { return ___revision_8; }
	inline int32_t* get_address_of_revision_8() { return &___revision_8; }
	inline void set_revision_8(int32_t value)
	{
		___revision_8 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
