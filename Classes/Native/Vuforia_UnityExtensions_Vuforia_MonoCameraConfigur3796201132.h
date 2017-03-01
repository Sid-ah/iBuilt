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

#include "Vuforia_UnityExtensions_Vuforia_BaseCameraConfigurat38459502.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.MonoCameraConfiguration
struct  MonoCameraConfiguration_t3796201132  : public BaseCameraConfiguration_t38459502
{
public:
	// UnityEngine.Camera Vuforia.MonoCameraConfiguration::mPrimaryCamera
	Camera_t189460977 * ___mPrimaryCamera_11;
	// System.Int32 Vuforia.MonoCameraConfiguration::mCameraViewPortWidth
	int32_t ___mCameraViewPortWidth_12;
	// System.Int32 Vuforia.MonoCameraConfiguration::mCameraViewPortHeight
	int32_t ___mCameraViewPortHeight_13;
	// System.Single Vuforia.MonoCameraConfiguration::mLastAppliedNearClipPlane
	float ___mLastAppliedNearClipPlane_14;
	// System.Single Vuforia.MonoCameraConfiguration::mLastAppliedFarClipPlane
	float ___mLastAppliedFarClipPlane_15;
	// System.Single Vuforia.MonoCameraConfiguration::mLastAppliedFoV
	float ___mLastAppliedFoV_16;

public:
	inline static int32_t get_offset_of_mPrimaryCamera_11() { return static_cast<int32_t>(offsetof(MonoCameraConfiguration_t3796201132, ___mPrimaryCamera_11)); }
	inline Camera_t189460977 * get_mPrimaryCamera_11() const { return ___mPrimaryCamera_11; }
	inline Camera_t189460977 ** get_address_of_mPrimaryCamera_11() { return &___mPrimaryCamera_11; }
	inline void set_mPrimaryCamera_11(Camera_t189460977 * value)
	{
		___mPrimaryCamera_11 = value;
		Il2CppCodeGenWriteBarrier(&___mPrimaryCamera_11, value);
	}

	inline static int32_t get_offset_of_mCameraViewPortWidth_12() { return static_cast<int32_t>(offsetof(MonoCameraConfiguration_t3796201132, ___mCameraViewPortWidth_12)); }
	inline int32_t get_mCameraViewPortWidth_12() const { return ___mCameraViewPortWidth_12; }
	inline int32_t* get_address_of_mCameraViewPortWidth_12() { return &___mCameraViewPortWidth_12; }
	inline void set_mCameraViewPortWidth_12(int32_t value)
	{
		___mCameraViewPortWidth_12 = value;
	}

	inline static int32_t get_offset_of_mCameraViewPortHeight_13() { return static_cast<int32_t>(offsetof(MonoCameraConfiguration_t3796201132, ___mCameraViewPortHeight_13)); }
	inline int32_t get_mCameraViewPortHeight_13() const { return ___mCameraViewPortHeight_13; }
	inline int32_t* get_address_of_mCameraViewPortHeight_13() { return &___mCameraViewPortHeight_13; }
	inline void set_mCameraViewPortHeight_13(int32_t value)
	{
		___mCameraViewPortHeight_13 = value;
	}

	inline static int32_t get_offset_of_mLastAppliedNearClipPlane_14() { return static_cast<int32_t>(offsetof(MonoCameraConfiguration_t3796201132, ___mLastAppliedNearClipPlane_14)); }
	inline float get_mLastAppliedNearClipPlane_14() const { return ___mLastAppliedNearClipPlane_14; }
	inline float* get_address_of_mLastAppliedNearClipPlane_14() { return &___mLastAppliedNearClipPlane_14; }
	inline void set_mLastAppliedNearClipPlane_14(float value)
	{
		___mLastAppliedNearClipPlane_14 = value;
	}

	inline static int32_t get_offset_of_mLastAppliedFarClipPlane_15() { return static_cast<int32_t>(offsetof(MonoCameraConfiguration_t3796201132, ___mLastAppliedFarClipPlane_15)); }
	inline float get_mLastAppliedFarClipPlane_15() const { return ___mLastAppliedFarClipPlane_15; }
	inline float* get_address_of_mLastAppliedFarClipPlane_15() { return &___mLastAppliedFarClipPlane_15; }
	inline void set_mLastAppliedFarClipPlane_15(float value)
	{
		___mLastAppliedFarClipPlane_15 = value;
	}

	inline static int32_t get_offset_of_mLastAppliedFoV_16() { return static_cast<int32_t>(offsetof(MonoCameraConfiguration_t3796201132, ___mLastAppliedFoV_16)); }
	inline float get_mLastAppliedFoV_16() const { return ___mLastAppliedFoV_16; }
	inline float* get_address_of_mLastAppliedFoV_16() { return &___mLastAppliedFoV_16; }
	inline void set_mLastAppliedFoV_16(float value)
	{
		___mLastAppliedFoV_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
