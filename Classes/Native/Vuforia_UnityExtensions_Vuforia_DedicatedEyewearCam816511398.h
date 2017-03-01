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
// Vuforia.EyewearDevice
struct EyewearDevice_t1202635122;

#include "Vuforia_UnityExtensions_Vuforia_BaseCameraConfigurat38459502.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DedicatedEyewearCameraConfiguration
struct  DedicatedEyewearCameraConfiguration_t816511398  : public BaseCameraConfiguration_t38459502
{
public:
	// UnityEngine.Camera Vuforia.DedicatedEyewearCameraConfiguration::mPrimaryCamera
	Camera_t189460977 * ___mPrimaryCamera_11;
	// UnityEngine.Camera Vuforia.DedicatedEyewearCameraConfiguration::mSecondaryCamera
	Camera_t189460977 * ___mSecondaryCamera_12;
	// System.Int32 Vuforia.DedicatedEyewearCameraConfiguration::mScreenWidth
	int32_t ___mScreenWidth_13;
	// System.Int32 Vuforia.DedicatedEyewearCameraConfiguration::mScreenHeight
	int32_t ___mScreenHeight_14;
	// System.Boolean Vuforia.DedicatedEyewearCameraConfiguration::mNeedToCheckStereo
	bool ___mNeedToCheckStereo_15;
	// System.Single Vuforia.DedicatedEyewearCameraConfiguration::mLastAppliedNearClipPlane
	float ___mLastAppliedNearClipPlane_16;
	// System.Single Vuforia.DedicatedEyewearCameraConfiguration::mLastAppliedFarClipPlane
	float ___mLastAppliedFarClipPlane_17;
	// System.Single Vuforia.DedicatedEyewearCameraConfiguration::mLastAppliedVirtualFoV
	float ___mLastAppliedVirtualFoV_18;
	// System.Single Vuforia.DedicatedEyewearCameraConfiguration::mNewNearClipPlane
	float ___mNewNearClipPlane_19;
	// System.Single Vuforia.DedicatedEyewearCameraConfiguration::mNewFarClipPlane
	float ___mNewFarClipPlane_20;
	// System.Single Vuforia.DedicatedEyewearCameraConfiguration::mNewVirtualFoV
	float ___mNewVirtualFoV_21;
	// Vuforia.EyewearDevice Vuforia.DedicatedEyewearCameraConfiguration::mEyewearDevice
	EyewearDevice_t1202635122 * ___mEyewearDevice_22;

public:
	inline static int32_t get_offset_of_mPrimaryCamera_11() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t816511398, ___mPrimaryCamera_11)); }
	inline Camera_t189460977 * get_mPrimaryCamera_11() const { return ___mPrimaryCamera_11; }
	inline Camera_t189460977 ** get_address_of_mPrimaryCamera_11() { return &___mPrimaryCamera_11; }
	inline void set_mPrimaryCamera_11(Camera_t189460977 * value)
	{
		___mPrimaryCamera_11 = value;
		Il2CppCodeGenWriteBarrier(&___mPrimaryCamera_11, value);
	}

	inline static int32_t get_offset_of_mSecondaryCamera_12() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t816511398, ___mSecondaryCamera_12)); }
	inline Camera_t189460977 * get_mSecondaryCamera_12() const { return ___mSecondaryCamera_12; }
	inline Camera_t189460977 ** get_address_of_mSecondaryCamera_12() { return &___mSecondaryCamera_12; }
	inline void set_mSecondaryCamera_12(Camera_t189460977 * value)
	{
		___mSecondaryCamera_12 = value;
		Il2CppCodeGenWriteBarrier(&___mSecondaryCamera_12, value);
	}

	inline static int32_t get_offset_of_mScreenWidth_13() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t816511398, ___mScreenWidth_13)); }
	inline int32_t get_mScreenWidth_13() const { return ___mScreenWidth_13; }
	inline int32_t* get_address_of_mScreenWidth_13() { return &___mScreenWidth_13; }
	inline void set_mScreenWidth_13(int32_t value)
	{
		___mScreenWidth_13 = value;
	}

	inline static int32_t get_offset_of_mScreenHeight_14() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t816511398, ___mScreenHeight_14)); }
	inline int32_t get_mScreenHeight_14() const { return ___mScreenHeight_14; }
	inline int32_t* get_address_of_mScreenHeight_14() { return &___mScreenHeight_14; }
	inline void set_mScreenHeight_14(int32_t value)
	{
		___mScreenHeight_14 = value;
	}

	inline static int32_t get_offset_of_mNeedToCheckStereo_15() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t816511398, ___mNeedToCheckStereo_15)); }
	inline bool get_mNeedToCheckStereo_15() const { return ___mNeedToCheckStereo_15; }
	inline bool* get_address_of_mNeedToCheckStereo_15() { return &___mNeedToCheckStereo_15; }
	inline void set_mNeedToCheckStereo_15(bool value)
	{
		___mNeedToCheckStereo_15 = value;
	}

	inline static int32_t get_offset_of_mLastAppliedNearClipPlane_16() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t816511398, ___mLastAppliedNearClipPlane_16)); }
	inline float get_mLastAppliedNearClipPlane_16() const { return ___mLastAppliedNearClipPlane_16; }
	inline float* get_address_of_mLastAppliedNearClipPlane_16() { return &___mLastAppliedNearClipPlane_16; }
	inline void set_mLastAppliedNearClipPlane_16(float value)
	{
		___mLastAppliedNearClipPlane_16 = value;
	}

	inline static int32_t get_offset_of_mLastAppliedFarClipPlane_17() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t816511398, ___mLastAppliedFarClipPlane_17)); }
	inline float get_mLastAppliedFarClipPlane_17() const { return ___mLastAppliedFarClipPlane_17; }
	inline float* get_address_of_mLastAppliedFarClipPlane_17() { return &___mLastAppliedFarClipPlane_17; }
	inline void set_mLastAppliedFarClipPlane_17(float value)
	{
		___mLastAppliedFarClipPlane_17 = value;
	}

	inline static int32_t get_offset_of_mLastAppliedVirtualFoV_18() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t816511398, ___mLastAppliedVirtualFoV_18)); }
	inline float get_mLastAppliedVirtualFoV_18() const { return ___mLastAppliedVirtualFoV_18; }
	inline float* get_address_of_mLastAppliedVirtualFoV_18() { return &___mLastAppliedVirtualFoV_18; }
	inline void set_mLastAppliedVirtualFoV_18(float value)
	{
		___mLastAppliedVirtualFoV_18 = value;
	}

	inline static int32_t get_offset_of_mNewNearClipPlane_19() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t816511398, ___mNewNearClipPlane_19)); }
	inline float get_mNewNearClipPlane_19() const { return ___mNewNearClipPlane_19; }
	inline float* get_address_of_mNewNearClipPlane_19() { return &___mNewNearClipPlane_19; }
	inline void set_mNewNearClipPlane_19(float value)
	{
		___mNewNearClipPlane_19 = value;
	}

	inline static int32_t get_offset_of_mNewFarClipPlane_20() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t816511398, ___mNewFarClipPlane_20)); }
	inline float get_mNewFarClipPlane_20() const { return ___mNewFarClipPlane_20; }
	inline float* get_address_of_mNewFarClipPlane_20() { return &___mNewFarClipPlane_20; }
	inline void set_mNewFarClipPlane_20(float value)
	{
		___mNewFarClipPlane_20 = value;
	}

	inline static int32_t get_offset_of_mNewVirtualFoV_21() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t816511398, ___mNewVirtualFoV_21)); }
	inline float get_mNewVirtualFoV_21() const { return ___mNewVirtualFoV_21; }
	inline float* get_address_of_mNewVirtualFoV_21() { return &___mNewVirtualFoV_21; }
	inline void set_mNewVirtualFoV_21(float value)
	{
		___mNewVirtualFoV_21 = value;
	}

	inline static int32_t get_offset_of_mEyewearDevice_22() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t816511398, ___mEyewearDevice_22)); }
	inline EyewearDevice_t1202635122 * get_mEyewearDevice_22() const { return ___mEyewearDevice_22; }
	inline EyewearDevice_t1202635122 ** get_address_of_mEyewearDevice_22() { return &___mEyewearDevice_22; }
	inline void set_mEyewearDevice_22(EyewearDevice_t1202635122 * value)
	{
		___mEyewearDevice_22 = value;
		Il2CppCodeGenWriteBarrier(&___mEyewearDevice_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
