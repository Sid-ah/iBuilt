#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t189460977;
// Vuforia.HideExcessAreaAbstractBehaviour
struct HideExcessAreaAbstractBehaviour_t2687577327;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRIntegrationHelper
struct  VRIntegrationHelper_t556656694  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean VRIntegrationHelper::IsLeft
	bool ___IsLeft_12;
	// UnityEngine.Transform VRIntegrationHelper::TrackableParent
	Transform_t3275118058 * ___TrackableParent_13;

public:
	inline static int32_t get_offset_of_IsLeft_12() { return static_cast<int32_t>(offsetof(VRIntegrationHelper_t556656694, ___IsLeft_12)); }
	inline bool get_IsLeft_12() const { return ___IsLeft_12; }
	inline bool* get_address_of_IsLeft_12() { return &___IsLeft_12; }
	inline void set_IsLeft_12(bool value)
	{
		___IsLeft_12 = value;
	}

	inline static int32_t get_offset_of_TrackableParent_13() { return static_cast<int32_t>(offsetof(VRIntegrationHelper_t556656694, ___TrackableParent_13)); }
	inline Transform_t3275118058 * get_TrackableParent_13() const { return ___TrackableParent_13; }
	inline Transform_t3275118058 ** get_address_of_TrackableParent_13() { return &___TrackableParent_13; }
	inline void set_TrackableParent_13(Transform_t3275118058 * value)
	{
		___TrackableParent_13 = value;
		Il2CppCodeGenWriteBarrier(&___TrackableParent_13, value);
	}
};

struct VRIntegrationHelper_t556656694_StaticFields
{
public:
	// UnityEngine.Matrix4x4 VRIntegrationHelper::mLeftCameraMatrixOriginal
	Matrix4x4_t2933234003  ___mLeftCameraMatrixOriginal_2;
	// UnityEngine.Matrix4x4 VRIntegrationHelper::mRightCameraMatrixOriginal
	Matrix4x4_t2933234003  ___mRightCameraMatrixOriginal_3;
	// UnityEngine.Camera VRIntegrationHelper::mLeftCamera
	Camera_t189460977 * ___mLeftCamera_4;
	// UnityEngine.Camera VRIntegrationHelper::mRightCamera
	Camera_t189460977 * ___mRightCamera_5;
	// Vuforia.HideExcessAreaAbstractBehaviour VRIntegrationHelper::mLeftExcessAreaBehaviour
	HideExcessAreaAbstractBehaviour_t2687577327 * ___mLeftExcessAreaBehaviour_6;
	// Vuforia.HideExcessAreaAbstractBehaviour VRIntegrationHelper::mRightExcessAreaBehaviour
	HideExcessAreaAbstractBehaviour_t2687577327 * ___mRightExcessAreaBehaviour_7;
	// UnityEngine.Rect VRIntegrationHelper::mLeftCameraPixelRect
	Rect_t3681755626  ___mLeftCameraPixelRect_8;
	// UnityEngine.Rect VRIntegrationHelper::mRightCameraPixelRect
	Rect_t3681755626  ___mRightCameraPixelRect_9;
	// System.Boolean VRIntegrationHelper::mLeftCameraDataAcquired
	bool ___mLeftCameraDataAcquired_10;
	// System.Boolean VRIntegrationHelper::mRightCameraDataAcquired
	bool ___mRightCameraDataAcquired_11;

public:
	inline static int32_t get_offset_of_mLeftCameraMatrixOriginal_2() { return static_cast<int32_t>(offsetof(VRIntegrationHelper_t556656694_StaticFields, ___mLeftCameraMatrixOriginal_2)); }
	inline Matrix4x4_t2933234003  get_mLeftCameraMatrixOriginal_2() const { return ___mLeftCameraMatrixOriginal_2; }
	inline Matrix4x4_t2933234003 * get_address_of_mLeftCameraMatrixOriginal_2() { return &___mLeftCameraMatrixOriginal_2; }
	inline void set_mLeftCameraMatrixOriginal_2(Matrix4x4_t2933234003  value)
	{
		___mLeftCameraMatrixOriginal_2 = value;
	}

	inline static int32_t get_offset_of_mRightCameraMatrixOriginal_3() { return static_cast<int32_t>(offsetof(VRIntegrationHelper_t556656694_StaticFields, ___mRightCameraMatrixOriginal_3)); }
	inline Matrix4x4_t2933234003  get_mRightCameraMatrixOriginal_3() const { return ___mRightCameraMatrixOriginal_3; }
	inline Matrix4x4_t2933234003 * get_address_of_mRightCameraMatrixOriginal_3() { return &___mRightCameraMatrixOriginal_3; }
	inline void set_mRightCameraMatrixOriginal_3(Matrix4x4_t2933234003  value)
	{
		___mRightCameraMatrixOriginal_3 = value;
	}

	inline static int32_t get_offset_of_mLeftCamera_4() { return static_cast<int32_t>(offsetof(VRIntegrationHelper_t556656694_StaticFields, ___mLeftCamera_4)); }
	inline Camera_t189460977 * get_mLeftCamera_4() const { return ___mLeftCamera_4; }
	inline Camera_t189460977 ** get_address_of_mLeftCamera_4() { return &___mLeftCamera_4; }
	inline void set_mLeftCamera_4(Camera_t189460977 * value)
	{
		___mLeftCamera_4 = value;
		Il2CppCodeGenWriteBarrier(&___mLeftCamera_4, value);
	}

	inline static int32_t get_offset_of_mRightCamera_5() { return static_cast<int32_t>(offsetof(VRIntegrationHelper_t556656694_StaticFields, ___mRightCamera_5)); }
	inline Camera_t189460977 * get_mRightCamera_5() const { return ___mRightCamera_5; }
	inline Camera_t189460977 ** get_address_of_mRightCamera_5() { return &___mRightCamera_5; }
	inline void set_mRightCamera_5(Camera_t189460977 * value)
	{
		___mRightCamera_5 = value;
		Il2CppCodeGenWriteBarrier(&___mRightCamera_5, value);
	}

	inline static int32_t get_offset_of_mLeftExcessAreaBehaviour_6() { return static_cast<int32_t>(offsetof(VRIntegrationHelper_t556656694_StaticFields, ___mLeftExcessAreaBehaviour_6)); }
	inline HideExcessAreaAbstractBehaviour_t2687577327 * get_mLeftExcessAreaBehaviour_6() const { return ___mLeftExcessAreaBehaviour_6; }
	inline HideExcessAreaAbstractBehaviour_t2687577327 ** get_address_of_mLeftExcessAreaBehaviour_6() { return &___mLeftExcessAreaBehaviour_6; }
	inline void set_mLeftExcessAreaBehaviour_6(HideExcessAreaAbstractBehaviour_t2687577327 * value)
	{
		___mLeftExcessAreaBehaviour_6 = value;
		Il2CppCodeGenWriteBarrier(&___mLeftExcessAreaBehaviour_6, value);
	}

	inline static int32_t get_offset_of_mRightExcessAreaBehaviour_7() { return static_cast<int32_t>(offsetof(VRIntegrationHelper_t556656694_StaticFields, ___mRightExcessAreaBehaviour_7)); }
	inline HideExcessAreaAbstractBehaviour_t2687577327 * get_mRightExcessAreaBehaviour_7() const { return ___mRightExcessAreaBehaviour_7; }
	inline HideExcessAreaAbstractBehaviour_t2687577327 ** get_address_of_mRightExcessAreaBehaviour_7() { return &___mRightExcessAreaBehaviour_7; }
	inline void set_mRightExcessAreaBehaviour_7(HideExcessAreaAbstractBehaviour_t2687577327 * value)
	{
		___mRightExcessAreaBehaviour_7 = value;
		Il2CppCodeGenWriteBarrier(&___mRightExcessAreaBehaviour_7, value);
	}

	inline static int32_t get_offset_of_mLeftCameraPixelRect_8() { return static_cast<int32_t>(offsetof(VRIntegrationHelper_t556656694_StaticFields, ___mLeftCameraPixelRect_8)); }
	inline Rect_t3681755626  get_mLeftCameraPixelRect_8() const { return ___mLeftCameraPixelRect_8; }
	inline Rect_t3681755626 * get_address_of_mLeftCameraPixelRect_8() { return &___mLeftCameraPixelRect_8; }
	inline void set_mLeftCameraPixelRect_8(Rect_t3681755626  value)
	{
		___mLeftCameraPixelRect_8 = value;
	}

	inline static int32_t get_offset_of_mRightCameraPixelRect_9() { return static_cast<int32_t>(offsetof(VRIntegrationHelper_t556656694_StaticFields, ___mRightCameraPixelRect_9)); }
	inline Rect_t3681755626  get_mRightCameraPixelRect_9() const { return ___mRightCameraPixelRect_9; }
	inline Rect_t3681755626 * get_address_of_mRightCameraPixelRect_9() { return &___mRightCameraPixelRect_9; }
	inline void set_mRightCameraPixelRect_9(Rect_t3681755626  value)
	{
		___mRightCameraPixelRect_9 = value;
	}

	inline static int32_t get_offset_of_mLeftCameraDataAcquired_10() { return static_cast<int32_t>(offsetof(VRIntegrationHelper_t556656694_StaticFields, ___mLeftCameraDataAcquired_10)); }
	inline bool get_mLeftCameraDataAcquired_10() const { return ___mLeftCameraDataAcquired_10; }
	inline bool* get_address_of_mLeftCameraDataAcquired_10() { return &___mLeftCameraDataAcquired_10; }
	inline void set_mLeftCameraDataAcquired_10(bool value)
	{
		___mLeftCameraDataAcquired_10 = value;
	}

	inline static int32_t get_offset_of_mRightCameraDataAcquired_11() { return static_cast<int32_t>(offsetof(VRIntegrationHelper_t556656694_StaticFields, ___mRightCameraDataAcquired_11)); }
	inline bool get_mRightCameraDataAcquired_11() const { return ___mRightCameraDataAcquired_11; }
	inline bool* get_address_of_mRightCameraDataAcquired_11() { return &___mRightCameraDataAcquired_11; }
	inline void set_mRightCameraDataAcquired_11(bool value)
	{
		___mRightCameraDataAcquired_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
