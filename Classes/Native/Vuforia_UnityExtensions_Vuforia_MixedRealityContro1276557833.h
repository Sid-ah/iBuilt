#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.MixedRealityController
struct MixedRealityController_t1276557833;
// Vuforia.VuforiaARController
struct VuforiaARController_t4061728485;
// Vuforia.DigitalEyewearARController
struct DigitalEyewearARController_t1398758191;
// Vuforia.VideoBackgroundManager
struct VideoBackgroundManager_t3515346924;
// Vuforia.IViewerParameters
struct IViewerParameters_t2342092655;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Camera
struct Camera_t189460977;

#include "mscorlib_System_Object2689449295.h"
#include "Vuforia_UnityExtensions_Vuforia_DigitalEyewearARCo3746630162.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.MixedRealityController
struct  MixedRealityController_t1276557833  : public Il2CppObject
{
public:
	// Vuforia.VuforiaARController Vuforia.MixedRealityController::mVuforiaBehaviour
	VuforiaARController_t4061728485 * ___mVuforiaBehaviour_1;
	// Vuforia.DigitalEyewearARController Vuforia.MixedRealityController::mDigitalEyewearBehaviour
	DigitalEyewearARController_t1398758191 * ___mDigitalEyewearBehaviour_2;
	// Vuforia.VideoBackgroundManager Vuforia.MixedRealityController::mVideoBackgroundManager
	VideoBackgroundManager_t3515346924 * ___mVideoBackgroundManager_3;
	// System.Boolean Vuforia.MixedRealityController::mViewerHasBeenSetExternally
	bool ___mViewerHasBeenSetExternally_4;
	// Vuforia.IViewerParameters Vuforia.MixedRealityController::mViewerParameters
	Il2CppObject * ___mViewerParameters_5;
	// System.Boolean Vuforia.MixedRealityController::mFrameWorkHasBeenSetExternally
	bool ___mFrameWorkHasBeenSetExternally_6;
	// Vuforia.DigitalEyewearARController/StereoFramework Vuforia.MixedRealityController::mStereoFramework
	int32_t ___mStereoFramework_7;
	// UnityEngine.Transform Vuforia.MixedRealityController::mCentralAnchorPoint
	Transform_t3275118058 * ___mCentralAnchorPoint_8;
	// UnityEngine.Camera Vuforia.MixedRealityController::mLeftCameraOfExternalSDK
	Camera_t189460977 * ___mLeftCameraOfExternalSDK_9;
	// UnityEngine.Camera Vuforia.MixedRealityController::mRightCameraOfExternalSDK
	Camera_t189460977 * ___mRightCameraOfExternalSDK_10;
	// System.Boolean Vuforia.MixedRealityController::mObjectTrackerStopped
	bool ___mObjectTrackerStopped_11;
	// System.Boolean Vuforia.MixedRealityController::mAutoStopCameraIfNotRequired
	bool ___mAutoStopCameraIfNotRequired_12;

public:
	inline static int32_t get_offset_of_mVuforiaBehaviour_1() { return static_cast<int32_t>(offsetof(MixedRealityController_t1276557833, ___mVuforiaBehaviour_1)); }
	inline VuforiaARController_t4061728485 * get_mVuforiaBehaviour_1() const { return ___mVuforiaBehaviour_1; }
	inline VuforiaARController_t4061728485 ** get_address_of_mVuforiaBehaviour_1() { return &___mVuforiaBehaviour_1; }
	inline void set_mVuforiaBehaviour_1(VuforiaARController_t4061728485 * value)
	{
		___mVuforiaBehaviour_1 = value;
		Il2CppCodeGenWriteBarrier(&___mVuforiaBehaviour_1, value);
	}

	inline static int32_t get_offset_of_mDigitalEyewearBehaviour_2() { return static_cast<int32_t>(offsetof(MixedRealityController_t1276557833, ___mDigitalEyewearBehaviour_2)); }
	inline DigitalEyewearARController_t1398758191 * get_mDigitalEyewearBehaviour_2() const { return ___mDigitalEyewearBehaviour_2; }
	inline DigitalEyewearARController_t1398758191 ** get_address_of_mDigitalEyewearBehaviour_2() { return &___mDigitalEyewearBehaviour_2; }
	inline void set_mDigitalEyewearBehaviour_2(DigitalEyewearARController_t1398758191 * value)
	{
		___mDigitalEyewearBehaviour_2 = value;
		Il2CppCodeGenWriteBarrier(&___mDigitalEyewearBehaviour_2, value);
	}

	inline static int32_t get_offset_of_mVideoBackgroundManager_3() { return static_cast<int32_t>(offsetof(MixedRealityController_t1276557833, ___mVideoBackgroundManager_3)); }
	inline VideoBackgroundManager_t3515346924 * get_mVideoBackgroundManager_3() const { return ___mVideoBackgroundManager_3; }
	inline VideoBackgroundManager_t3515346924 ** get_address_of_mVideoBackgroundManager_3() { return &___mVideoBackgroundManager_3; }
	inline void set_mVideoBackgroundManager_3(VideoBackgroundManager_t3515346924 * value)
	{
		___mVideoBackgroundManager_3 = value;
		Il2CppCodeGenWriteBarrier(&___mVideoBackgroundManager_3, value);
	}

	inline static int32_t get_offset_of_mViewerHasBeenSetExternally_4() { return static_cast<int32_t>(offsetof(MixedRealityController_t1276557833, ___mViewerHasBeenSetExternally_4)); }
	inline bool get_mViewerHasBeenSetExternally_4() const { return ___mViewerHasBeenSetExternally_4; }
	inline bool* get_address_of_mViewerHasBeenSetExternally_4() { return &___mViewerHasBeenSetExternally_4; }
	inline void set_mViewerHasBeenSetExternally_4(bool value)
	{
		___mViewerHasBeenSetExternally_4 = value;
	}

	inline static int32_t get_offset_of_mViewerParameters_5() { return static_cast<int32_t>(offsetof(MixedRealityController_t1276557833, ___mViewerParameters_5)); }
	inline Il2CppObject * get_mViewerParameters_5() const { return ___mViewerParameters_5; }
	inline Il2CppObject ** get_address_of_mViewerParameters_5() { return &___mViewerParameters_5; }
	inline void set_mViewerParameters_5(Il2CppObject * value)
	{
		___mViewerParameters_5 = value;
		Il2CppCodeGenWriteBarrier(&___mViewerParameters_5, value);
	}

	inline static int32_t get_offset_of_mFrameWorkHasBeenSetExternally_6() { return static_cast<int32_t>(offsetof(MixedRealityController_t1276557833, ___mFrameWorkHasBeenSetExternally_6)); }
	inline bool get_mFrameWorkHasBeenSetExternally_6() const { return ___mFrameWorkHasBeenSetExternally_6; }
	inline bool* get_address_of_mFrameWorkHasBeenSetExternally_6() { return &___mFrameWorkHasBeenSetExternally_6; }
	inline void set_mFrameWorkHasBeenSetExternally_6(bool value)
	{
		___mFrameWorkHasBeenSetExternally_6 = value;
	}

	inline static int32_t get_offset_of_mStereoFramework_7() { return static_cast<int32_t>(offsetof(MixedRealityController_t1276557833, ___mStereoFramework_7)); }
	inline int32_t get_mStereoFramework_7() const { return ___mStereoFramework_7; }
	inline int32_t* get_address_of_mStereoFramework_7() { return &___mStereoFramework_7; }
	inline void set_mStereoFramework_7(int32_t value)
	{
		___mStereoFramework_7 = value;
	}

	inline static int32_t get_offset_of_mCentralAnchorPoint_8() { return static_cast<int32_t>(offsetof(MixedRealityController_t1276557833, ___mCentralAnchorPoint_8)); }
	inline Transform_t3275118058 * get_mCentralAnchorPoint_8() const { return ___mCentralAnchorPoint_8; }
	inline Transform_t3275118058 ** get_address_of_mCentralAnchorPoint_8() { return &___mCentralAnchorPoint_8; }
	inline void set_mCentralAnchorPoint_8(Transform_t3275118058 * value)
	{
		___mCentralAnchorPoint_8 = value;
		Il2CppCodeGenWriteBarrier(&___mCentralAnchorPoint_8, value);
	}

	inline static int32_t get_offset_of_mLeftCameraOfExternalSDK_9() { return static_cast<int32_t>(offsetof(MixedRealityController_t1276557833, ___mLeftCameraOfExternalSDK_9)); }
	inline Camera_t189460977 * get_mLeftCameraOfExternalSDK_9() const { return ___mLeftCameraOfExternalSDK_9; }
	inline Camera_t189460977 ** get_address_of_mLeftCameraOfExternalSDK_9() { return &___mLeftCameraOfExternalSDK_9; }
	inline void set_mLeftCameraOfExternalSDK_9(Camera_t189460977 * value)
	{
		___mLeftCameraOfExternalSDK_9 = value;
		Il2CppCodeGenWriteBarrier(&___mLeftCameraOfExternalSDK_9, value);
	}

	inline static int32_t get_offset_of_mRightCameraOfExternalSDK_10() { return static_cast<int32_t>(offsetof(MixedRealityController_t1276557833, ___mRightCameraOfExternalSDK_10)); }
	inline Camera_t189460977 * get_mRightCameraOfExternalSDK_10() const { return ___mRightCameraOfExternalSDK_10; }
	inline Camera_t189460977 ** get_address_of_mRightCameraOfExternalSDK_10() { return &___mRightCameraOfExternalSDK_10; }
	inline void set_mRightCameraOfExternalSDK_10(Camera_t189460977 * value)
	{
		___mRightCameraOfExternalSDK_10 = value;
		Il2CppCodeGenWriteBarrier(&___mRightCameraOfExternalSDK_10, value);
	}

	inline static int32_t get_offset_of_mObjectTrackerStopped_11() { return static_cast<int32_t>(offsetof(MixedRealityController_t1276557833, ___mObjectTrackerStopped_11)); }
	inline bool get_mObjectTrackerStopped_11() const { return ___mObjectTrackerStopped_11; }
	inline bool* get_address_of_mObjectTrackerStopped_11() { return &___mObjectTrackerStopped_11; }
	inline void set_mObjectTrackerStopped_11(bool value)
	{
		___mObjectTrackerStopped_11 = value;
	}

	inline static int32_t get_offset_of_mAutoStopCameraIfNotRequired_12() { return static_cast<int32_t>(offsetof(MixedRealityController_t1276557833, ___mAutoStopCameraIfNotRequired_12)); }
	inline bool get_mAutoStopCameraIfNotRequired_12() const { return ___mAutoStopCameraIfNotRequired_12; }
	inline bool* get_address_of_mAutoStopCameraIfNotRequired_12() { return &___mAutoStopCameraIfNotRequired_12; }
	inline void set_mAutoStopCameraIfNotRequired_12(bool value)
	{
		___mAutoStopCameraIfNotRequired_12 = value;
	}
};

struct MixedRealityController_t1276557833_StaticFields
{
public:
	// Vuforia.MixedRealityController Vuforia.MixedRealityController::mInstance
	MixedRealityController_t1276557833 * ___mInstance_0;

public:
	inline static int32_t get_offset_of_mInstance_0() { return static_cast<int32_t>(offsetof(MixedRealityController_t1276557833_StaticFields, ___mInstance_0)); }
	inline MixedRealityController_t1276557833 * get_mInstance_0() const { return ___mInstance_0; }
	inline MixedRealityController_t1276557833 ** get_address_of_mInstance_0() { return &___mInstance_0; }
	inline void set_mInstance_0(MixedRealityController_t1276557833 * value)
	{
		___mInstance_0 = value;
		Il2CppCodeGenWriteBarrier(&___mInstance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
