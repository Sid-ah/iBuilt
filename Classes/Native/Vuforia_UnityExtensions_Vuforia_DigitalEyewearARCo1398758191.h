#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// Vuforia.DigitalEyewearARController/SerializableViewerParameters
struct SerializableViewerParameters_t2750347603;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Camera
struct Camera_t189460977;
// Vuforia.VuforiaARController
struct VuforiaARController_t4061728485;
// Vuforia.DistortionRenderingBehaviour
struct DistortionRenderingBehaviour_t2945034146;
// Vuforia.DigitalEyewearARController
struct DigitalEyewearARController_t1398758191;
// System.Object
struct Il2CppObject;

#include "Vuforia_UnityExtensions_Vuforia_ARController2638793709.h"
#include "Vuforia_UnityExtensions_Vuforia_DistortionRenderin3766399464.h"
#include "Vuforia_UnityExtensions_Vuforia_DigitalEyewearARCo2121820252.h"
#include "Vuforia_UnityExtensions_Vuforia_DigitalEyewearARCo3746630162.h"
#include "Vuforia_UnityExtensions_Vuforia_DigitalEyewearARCon342269456.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DigitalEyewearARController
struct  DigitalEyewearARController_t1398758191  : public ARController_t2638793709
{
public:
	// System.Single Vuforia.DigitalEyewearARController::mCameraOffset
	float ___mCameraOffset_7;
	// Vuforia.DistortionRenderingMode Vuforia.DigitalEyewearARController::mDistortionRenderingMode
	int32_t ___mDistortionRenderingMode_8;
	// System.Int32 Vuforia.DigitalEyewearARController::mDistortionRenderingLayer
	int32_t ___mDistortionRenderingLayer_9;
	// Vuforia.DigitalEyewearARController/EyewearType Vuforia.DigitalEyewearARController::mEyewearType
	int32_t ___mEyewearType_10;
	// Vuforia.DigitalEyewearARController/StereoFramework Vuforia.DigitalEyewearARController::mStereoFramework
	int32_t ___mStereoFramework_11;
	// Vuforia.DigitalEyewearARController/SeeThroughConfiguration Vuforia.DigitalEyewearARController::mSeeThroughConfiguration
	int32_t ___mSeeThroughConfiguration_12;
	// System.String Vuforia.DigitalEyewearARController::mViewerName
	String_t* ___mViewerName_13;
	// System.String Vuforia.DigitalEyewearARController::mViewerManufacturer
	String_t* ___mViewerManufacturer_14;
	// System.Boolean Vuforia.DigitalEyewearARController::mUseCustomViewer
	bool ___mUseCustomViewer_15;
	// Vuforia.DigitalEyewearARController/SerializableViewerParameters Vuforia.DigitalEyewearARController::mCustomViewer
	SerializableViewerParameters_t2750347603 * ___mCustomViewer_16;
	// UnityEngine.Transform Vuforia.DigitalEyewearARController::mCentralAnchorPoint
	Transform_t3275118058 * ___mCentralAnchorPoint_17;
	// UnityEngine.Transform Vuforia.DigitalEyewearARController::mParentAnchorPoint
	Transform_t3275118058 * ___mParentAnchorPoint_18;
	// UnityEngine.Camera Vuforia.DigitalEyewearARController::mPrimaryCamera
	Camera_t189460977 * ___mPrimaryCamera_19;
	// UnityEngine.Rect Vuforia.DigitalEyewearARController::mPrimaryCameraOriginalRect
	Rect_t3681755626  ___mPrimaryCameraOriginalRect_20;
	// UnityEngine.Camera Vuforia.DigitalEyewearARController::mSecondaryCamera
	Camera_t189460977 * ___mSecondaryCamera_21;
	// UnityEngine.Rect Vuforia.DigitalEyewearARController::mSecondaryCameraOriginalRect
	Rect_t3681755626  ___mSecondaryCameraOriginalRect_22;
	// System.Boolean Vuforia.DigitalEyewearARController::mSecondaryCameraDisabledLocally
	bool ___mSecondaryCameraDisabledLocally_23;
	// Vuforia.VuforiaARController Vuforia.DigitalEyewearARController::mVuforiaBehaviour
	VuforiaARController_t4061728485 * ___mVuforiaBehaviour_24;
	// Vuforia.DistortionRenderingBehaviour Vuforia.DigitalEyewearARController::mDistortionRenderingBhvr
	DistortionRenderingBehaviour_t2945034146 * ___mDistortionRenderingBhvr_25;
	// System.Boolean Vuforia.DigitalEyewearARController::mSetFocusPlaneAutomatically
	bool ___mSetFocusPlaneAutomatically_26;

public:
	inline static int32_t get_offset_of_mCameraOffset_7() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1398758191, ___mCameraOffset_7)); }
	inline float get_mCameraOffset_7() const { return ___mCameraOffset_7; }
	inline float* get_address_of_mCameraOffset_7() { return &___mCameraOffset_7; }
	inline void set_mCameraOffset_7(float value)
	{
		___mCameraOffset_7 = value;
	}

	inline static int32_t get_offset_of_mDistortionRenderingMode_8() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1398758191, ___mDistortionRenderingMode_8)); }
	inline int32_t get_mDistortionRenderingMode_8() const { return ___mDistortionRenderingMode_8; }
	inline int32_t* get_address_of_mDistortionRenderingMode_8() { return &___mDistortionRenderingMode_8; }
	inline void set_mDistortionRenderingMode_8(int32_t value)
	{
		___mDistortionRenderingMode_8 = value;
	}

	inline static int32_t get_offset_of_mDistortionRenderingLayer_9() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1398758191, ___mDistortionRenderingLayer_9)); }
	inline int32_t get_mDistortionRenderingLayer_9() const { return ___mDistortionRenderingLayer_9; }
	inline int32_t* get_address_of_mDistortionRenderingLayer_9() { return &___mDistortionRenderingLayer_9; }
	inline void set_mDistortionRenderingLayer_9(int32_t value)
	{
		___mDistortionRenderingLayer_9 = value;
	}

	inline static int32_t get_offset_of_mEyewearType_10() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1398758191, ___mEyewearType_10)); }
	inline int32_t get_mEyewearType_10() const { return ___mEyewearType_10; }
	inline int32_t* get_address_of_mEyewearType_10() { return &___mEyewearType_10; }
	inline void set_mEyewearType_10(int32_t value)
	{
		___mEyewearType_10 = value;
	}

	inline static int32_t get_offset_of_mStereoFramework_11() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1398758191, ___mStereoFramework_11)); }
	inline int32_t get_mStereoFramework_11() const { return ___mStereoFramework_11; }
	inline int32_t* get_address_of_mStereoFramework_11() { return &___mStereoFramework_11; }
	inline void set_mStereoFramework_11(int32_t value)
	{
		___mStereoFramework_11 = value;
	}

	inline static int32_t get_offset_of_mSeeThroughConfiguration_12() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1398758191, ___mSeeThroughConfiguration_12)); }
	inline int32_t get_mSeeThroughConfiguration_12() const { return ___mSeeThroughConfiguration_12; }
	inline int32_t* get_address_of_mSeeThroughConfiguration_12() { return &___mSeeThroughConfiguration_12; }
	inline void set_mSeeThroughConfiguration_12(int32_t value)
	{
		___mSeeThroughConfiguration_12 = value;
	}

	inline static int32_t get_offset_of_mViewerName_13() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1398758191, ___mViewerName_13)); }
	inline String_t* get_mViewerName_13() const { return ___mViewerName_13; }
	inline String_t** get_address_of_mViewerName_13() { return &___mViewerName_13; }
	inline void set_mViewerName_13(String_t* value)
	{
		___mViewerName_13 = value;
		Il2CppCodeGenWriteBarrier(&___mViewerName_13, value);
	}

	inline static int32_t get_offset_of_mViewerManufacturer_14() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1398758191, ___mViewerManufacturer_14)); }
	inline String_t* get_mViewerManufacturer_14() const { return ___mViewerManufacturer_14; }
	inline String_t** get_address_of_mViewerManufacturer_14() { return &___mViewerManufacturer_14; }
	inline void set_mViewerManufacturer_14(String_t* value)
	{
		___mViewerManufacturer_14 = value;
		Il2CppCodeGenWriteBarrier(&___mViewerManufacturer_14, value);
	}

	inline static int32_t get_offset_of_mUseCustomViewer_15() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1398758191, ___mUseCustomViewer_15)); }
	inline bool get_mUseCustomViewer_15() const { return ___mUseCustomViewer_15; }
	inline bool* get_address_of_mUseCustomViewer_15() { return &___mUseCustomViewer_15; }
	inline void set_mUseCustomViewer_15(bool value)
	{
		___mUseCustomViewer_15 = value;
	}

	inline static int32_t get_offset_of_mCustomViewer_16() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1398758191, ___mCustomViewer_16)); }
	inline SerializableViewerParameters_t2750347603 * get_mCustomViewer_16() const { return ___mCustomViewer_16; }
	inline SerializableViewerParameters_t2750347603 ** get_address_of_mCustomViewer_16() { return &___mCustomViewer_16; }
	inline void set_mCustomViewer_16(SerializableViewerParameters_t2750347603 * value)
	{
		___mCustomViewer_16 = value;
		Il2CppCodeGenWriteBarrier(&___mCustomViewer_16, value);
	}

	inline static int32_t get_offset_of_mCentralAnchorPoint_17() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1398758191, ___mCentralAnchorPoint_17)); }
	inline Transform_t3275118058 * get_mCentralAnchorPoint_17() const { return ___mCentralAnchorPoint_17; }
	inline Transform_t3275118058 ** get_address_of_mCentralAnchorPoint_17() { return &___mCentralAnchorPoint_17; }
	inline void set_mCentralAnchorPoint_17(Transform_t3275118058 * value)
	{
		___mCentralAnchorPoint_17 = value;
		Il2CppCodeGenWriteBarrier(&___mCentralAnchorPoint_17, value);
	}

	inline static int32_t get_offset_of_mParentAnchorPoint_18() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1398758191, ___mParentAnchorPoint_18)); }
	inline Transform_t3275118058 * get_mParentAnchorPoint_18() const { return ___mParentAnchorPoint_18; }
	inline Transform_t3275118058 ** get_address_of_mParentAnchorPoint_18() { return &___mParentAnchorPoint_18; }
	inline void set_mParentAnchorPoint_18(Transform_t3275118058 * value)
	{
		___mParentAnchorPoint_18 = value;
		Il2CppCodeGenWriteBarrier(&___mParentAnchorPoint_18, value);
	}

	inline static int32_t get_offset_of_mPrimaryCamera_19() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1398758191, ___mPrimaryCamera_19)); }
	inline Camera_t189460977 * get_mPrimaryCamera_19() const { return ___mPrimaryCamera_19; }
	inline Camera_t189460977 ** get_address_of_mPrimaryCamera_19() { return &___mPrimaryCamera_19; }
	inline void set_mPrimaryCamera_19(Camera_t189460977 * value)
	{
		___mPrimaryCamera_19 = value;
		Il2CppCodeGenWriteBarrier(&___mPrimaryCamera_19, value);
	}

	inline static int32_t get_offset_of_mPrimaryCameraOriginalRect_20() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1398758191, ___mPrimaryCameraOriginalRect_20)); }
	inline Rect_t3681755626  get_mPrimaryCameraOriginalRect_20() const { return ___mPrimaryCameraOriginalRect_20; }
	inline Rect_t3681755626 * get_address_of_mPrimaryCameraOriginalRect_20() { return &___mPrimaryCameraOriginalRect_20; }
	inline void set_mPrimaryCameraOriginalRect_20(Rect_t3681755626  value)
	{
		___mPrimaryCameraOriginalRect_20 = value;
	}

	inline static int32_t get_offset_of_mSecondaryCamera_21() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1398758191, ___mSecondaryCamera_21)); }
	inline Camera_t189460977 * get_mSecondaryCamera_21() const { return ___mSecondaryCamera_21; }
	inline Camera_t189460977 ** get_address_of_mSecondaryCamera_21() { return &___mSecondaryCamera_21; }
	inline void set_mSecondaryCamera_21(Camera_t189460977 * value)
	{
		___mSecondaryCamera_21 = value;
		Il2CppCodeGenWriteBarrier(&___mSecondaryCamera_21, value);
	}

	inline static int32_t get_offset_of_mSecondaryCameraOriginalRect_22() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1398758191, ___mSecondaryCameraOriginalRect_22)); }
	inline Rect_t3681755626  get_mSecondaryCameraOriginalRect_22() const { return ___mSecondaryCameraOriginalRect_22; }
	inline Rect_t3681755626 * get_address_of_mSecondaryCameraOriginalRect_22() { return &___mSecondaryCameraOriginalRect_22; }
	inline void set_mSecondaryCameraOriginalRect_22(Rect_t3681755626  value)
	{
		___mSecondaryCameraOriginalRect_22 = value;
	}

	inline static int32_t get_offset_of_mSecondaryCameraDisabledLocally_23() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1398758191, ___mSecondaryCameraDisabledLocally_23)); }
	inline bool get_mSecondaryCameraDisabledLocally_23() const { return ___mSecondaryCameraDisabledLocally_23; }
	inline bool* get_address_of_mSecondaryCameraDisabledLocally_23() { return &___mSecondaryCameraDisabledLocally_23; }
	inline void set_mSecondaryCameraDisabledLocally_23(bool value)
	{
		___mSecondaryCameraDisabledLocally_23 = value;
	}

	inline static int32_t get_offset_of_mVuforiaBehaviour_24() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1398758191, ___mVuforiaBehaviour_24)); }
	inline VuforiaARController_t4061728485 * get_mVuforiaBehaviour_24() const { return ___mVuforiaBehaviour_24; }
	inline VuforiaARController_t4061728485 ** get_address_of_mVuforiaBehaviour_24() { return &___mVuforiaBehaviour_24; }
	inline void set_mVuforiaBehaviour_24(VuforiaARController_t4061728485 * value)
	{
		___mVuforiaBehaviour_24 = value;
		Il2CppCodeGenWriteBarrier(&___mVuforiaBehaviour_24, value);
	}

	inline static int32_t get_offset_of_mDistortionRenderingBhvr_25() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1398758191, ___mDistortionRenderingBhvr_25)); }
	inline DistortionRenderingBehaviour_t2945034146 * get_mDistortionRenderingBhvr_25() const { return ___mDistortionRenderingBhvr_25; }
	inline DistortionRenderingBehaviour_t2945034146 ** get_address_of_mDistortionRenderingBhvr_25() { return &___mDistortionRenderingBhvr_25; }
	inline void set_mDistortionRenderingBhvr_25(DistortionRenderingBehaviour_t2945034146 * value)
	{
		___mDistortionRenderingBhvr_25 = value;
		Il2CppCodeGenWriteBarrier(&___mDistortionRenderingBhvr_25, value);
	}

	inline static int32_t get_offset_of_mSetFocusPlaneAutomatically_26() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1398758191, ___mSetFocusPlaneAutomatically_26)); }
	inline bool get_mSetFocusPlaneAutomatically_26() const { return ___mSetFocusPlaneAutomatically_26; }
	inline bool* get_address_of_mSetFocusPlaneAutomatically_26() { return &___mSetFocusPlaneAutomatically_26; }
	inline void set_mSetFocusPlaneAutomatically_26(bool value)
	{
		___mSetFocusPlaneAutomatically_26 = value;
	}
};

struct DigitalEyewearARController_t1398758191_StaticFields
{
public:
	// Vuforia.DigitalEyewearARController Vuforia.DigitalEyewearARController::mInstance
	DigitalEyewearARController_t1398758191 * ___mInstance_27;
	// System.Object Vuforia.DigitalEyewearARController::mPadlock
	Il2CppObject * ___mPadlock_28;

public:
	inline static int32_t get_offset_of_mInstance_27() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1398758191_StaticFields, ___mInstance_27)); }
	inline DigitalEyewearARController_t1398758191 * get_mInstance_27() const { return ___mInstance_27; }
	inline DigitalEyewearARController_t1398758191 ** get_address_of_mInstance_27() { return &___mInstance_27; }
	inline void set_mInstance_27(DigitalEyewearARController_t1398758191 * value)
	{
		___mInstance_27 = value;
		Il2CppCodeGenWriteBarrier(&___mInstance_27, value);
	}

	inline static int32_t get_offset_of_mPadlock_28() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1398758191_StaticFields, ___mPadlock_28)); }
	inline Il2CppObject * get_mPadlock_28() const { return ___mPadlock_28; }
	inline Il2CppObject ** get_address_of_mPadlock_28() { return &___mPadlock_28; }
	inline void set_mPadlock_28(Il2CppObject * value)
	{
		___mPadlock_28 = value;
		Il2CppCodeGenWriteBarrier(&___mPadlock_28, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
