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

// Vuforia.BaseStereoViewerCameraConfiguration
struct  BaseStereoViewerCameraConfiguration_t1102239676  : public BaseCameraConfiguration_t38459502
{
public:
	// UnityEngine.Camera Vuforia.BaseStereoViewerCameraConfiguration::mPrimaryCamera
	Camera_t189460977 * ___mPrimaryCamera_10;
	// UnityEngine.Camera Vuforia.BaseStereoViewerCameraConfiguration::mSecondaryCamera
	Camera_t189460977 * ___mSecondaryCamera_11;
	// System.Boolean Vuforia.BaseStereoViewerCameraConfiguration::mSkewFrustum
	bool ___mSkewFrustum_12;
	// System.Int32 Vuforia.BaseStereoViewerCameraConfiguration::mScreenWidth
	int32_t ___mScreenWidth_13;
	// System.Int32 Vuforia.BaseStereoViewerCameraConfiguration::mScreenHeight
	int32_t ___mScreenHeight_14;

public:
	inline static int32_t get_offset_of_mPrimaryCamera_10() { return static_cast<int32_t>(offsetof(BaseStereoViewerCameraConfiguration_t1102239676, ___mPrimaryCamera_10)); }
	inline Camera_t189460977 * get_mPrimaryCamera_10() const { return ___mPrimaryCamera_10; }
	inline Camera_t189460977 ** get_address_of_mPrimaryCamera_10() { return &___mPrimaryCamera_10; }
	inline void set_mPrimaryCamera_10(Camera_t189460977 * value)
	{
		___mPrimaryCamera_10 = value;
		Il2CppCodeGenWriteBarrier(&___mPrimaryCamera_10, value);
	}

	inline static int32_t get_offset_of_mSecondaryCamera_11() { return static_cast<int32_t>(offsetof(BaseStereoViewerCameraConfiguration_t1102239676, ___mSecondaryCamera_11)); }
	inline Camera_t189460977 * get_mSecondaryCamera_11() const { return ___mSecondaryCamera_11; }
	inline Camera_t189460977 ** get_address_of_mSecondaryCamera_11() { return &___mSecondaryCamera_11; }
	inline void set_mSecondaryCamera_11(Camera_t189460977 * value)
	{
		___mSecondaryCamera_11 = value;
		Il2CppCodeGenWriteBarrier(&___mSecondaryCamera_11, value);
	}

	inline static int32_t get_offset_of_mSkewFrustum_12() { return static_cast<int32_t>(offsetof(BaseStereoViewerCameraConfiguration_t1102239676, ___mSkewFrustum_12)); }
	inline bool get_mSkewFrustum_12() const { return ___mSkewFrustum_12; }
	inline bool* get_address_of_mSkewFrustum_12() { return &___mSkewFrustum_12; }
	inline void set_mSkewFrustum_12(bool value)
	{
		___mSkewFrustum_12 = value;
	}

	inline static int32_t get_offset_of_mScreenWidth_13() { return static_cast<int32_t>(offsetof(BaseStereoViewerCameraConfiguration_t1102239676, ___mScreenWidth_13)); }
	inline int32_t get_mScreenWidth_13() const { return ___mScreenWidth_13; }
	inline int32_t* get_address_of_mScreenWidth_13() { return &___mScreenWidth_13; }
	inline void set_mScreenWidth_13(int32_t value)
	{
		___mScreenWidth_13 = value;
	}

	inline static int32_t get_offset_of_mScreenHeight_14() { return static_cast<int32_t>(offsetof(BaseStereoViewerCameraConfiguration_t1102239676, ___mScreenHeight_14)); }
	inline int32_t get_mScreenHeight_14() const { return ___mScreenHeight_14; }
	inline int32_t* get_address_of_mScreenHeight_14() { return &___mScreenHeight_14; }
	inline void set_mScreenHeight_14(int32_t value)
	{
		___mScreenHeight_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
