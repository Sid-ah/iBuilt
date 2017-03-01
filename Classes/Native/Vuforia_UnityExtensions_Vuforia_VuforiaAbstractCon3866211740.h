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

#include "mscorlib_System_Object2689449295.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Camer2705300828.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Camer1654543970.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vi4106934884.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaAbstractConfiguration/GenericVuforiaConfiguration
struct  GenericVuforiaConfiguration_t3866211740  : public Il2CppObject
{
public:
	// System.String Vuforia.VuforiaAbstractConfiguration/GenericVuforiaConfiguration::vuforiaLicenseKey
	String_t* ___vuforiaLicenseKey_0;
	// System.Boolean Vuforia.VuforiaAbstractConfiguration/GenericVuforiaConfiguration::delayedInitialization
	bool ___delayedInitialization_1;
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.VuforiaAbstractConfiguration/GenericVuforiaConfiguration::cameraDeviceModeSetting
	int32_t ___cameraDeviceModeSetting_2;
	// System.Int32 Vuforia.VuforiaAbstractConfiguration/GenericVuforiaConfiguration::maxSimultaneousImageTargets
	int32_t ___maxSimultaneousImageTargets_3;
	// System.Int32 Vuforia.VuforiaAbstractConfiguration/GenericVuforiaConfiguration::maxSimultaneousObjectTargets
	int32_t ___maxSimultaneousObjectTargets_4;
	// System.Boolean Vuforia.VuforiaAbstractConfiguration/GenericVuforiaConfiguration::useDelayedLoadingObjectTargets
	bool ___useDelayedLoadingObjectTargets_5;
	// Vuforia.CameraDevice/CameraDirection Vuforia.VuforiaAbstractConfiguration/GenericVuforiaConfiguration::cameraDirection
	int32_t ___cameraDirection_6;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaAbstractConfiguration/GenericVuforiaConfiguration::mirrorVideoBackground
	int32_t ___mirrorVideoBackground_7;

public:
	inline static int32_t get_offset_of_vuforiaLicenseKey_0() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3866211740, ___vuforiaLicenseKey_0)); }
	inline String_t* get_vuforiaLicenseKey_0() const { return ___vuforiaLicenseKey_0; }
	inline String_t** get_address_of_vuforiaLicenseKey_0() { return &___vuforiaLicenseKey_0; }
	inline void set_vuforiaLicenseKey_0(String_t* value)
	{
		___vuforiaLicenseKey_0 = value;
		Il2CppCodeGenWriteBarrier(&___vuforiaLicenseKey_0, value);
	}

	inline static int32_t get_offset_of_delayedInitialization_1() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3866211740, ___delayedInitialization_1)); }
	inline bool get_delayedInitialization_1() const { return ___delayedInitialization_1; }
	inline bool* get_address_of_delayedInitialization_1() { return &___delayedInitialization_1; }
	inline void set_delayedInitialization_1(bool value)
	{
		___delayedInitialization_1 = value;
	}

	inline static int32_t get_offset_of_cameraDeviceModeSetting_2() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3866211740, ___cameraDeviceModeSetting_2)); }
	inline int32_t get_cameraDeviceModeSetting_2() const { return ___cameraDeviceModeSetting_2; }
	inline int32_t* get_address_of_cameraDeviceModeSetting_2() { return &___cameraDeviceModeSetting_2; }
	inline void set_cameraDeviceModeSetting_2(int32_t value)
	{
		___cameraDeviceModeSetting_2 = value;
	}

	inline static int32_t get_offset_of_maxSimultaneousImageTargets_3() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3866211740, ___maxSimultaneousImageTargets_3)); }
	inline int32_t get_maxSimultaneousImageTargets_3() const { return ___maxSimultaneousImageTargets_3; }
	inline int32_t* get_address_of_maxSimultaneousImageTargets_3() { return &___maxSimultaneousImageTargets_3; }
	inline void set_maxSimultaneousImageTargets_3(int32_t value)
	{
		___maxSimultaneousImageTargets_3 = value;
	}

	inline static int32_t get_offset_of_maxSimultaneousObjectTargets_4() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3866211740, ___maxSimultaneousObjectTargets_4)); }
	inline int32_t get_maxSimultaneousObjectTargets_4() const { return ___maxSimultaneousObjectTargets_4; }
	inline int32_t* get_address_of_maxSimultaneousObjectTargets_4() { return &___maxSimultaneousObjectTargets_4; }
	inline void set_maxSimultaneousObjectTargets_4(int32_t value)
	{
		___maxSimultaneousObjectTargets_4 = value;
	}

	inline static int32_t get_offset_of_useDelayedLoadingObjectTargets_5() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3866211740, ___useDelayedLoadingObjectTargets_5)); }
	inline bool get_useDelayedLoadingObjectTargets_5() const { return ___useDelayedLoadingObjectTargets_5; }
	inline bool* get_address_of_useDelayedLoadingObjectTargets_5() { return &___useDelayedLoadingObjectTargets_5; }
	inline void set_useDelayedLoadingObjectTargets_5(bool value)
	{
		___useDelayedLoadingObjectTargets_5 = value;
	}

	inline static int32_t get_offset_of_cameraDirection_6() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3866211740, ___cameraDirection_6)); }
	inline int32_t get_cameraDirection_6() const { return ___cameraDirection_6; }
	inline int32_t* get_address_of_cameraDirection_6() { return &___cameraDirection_6; }
	inline void set_cameraDirection_6(int32_t value)
	{
		___cameraDirection_6 = value;
	}

	inline static int32_t get_offset_of_mirrorVideoBackground_7() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3866211740, ___mirrorVideoBackground_7)); }
	inline int32_t get_mirrorVideoBackground_7() const { return ___mirrorVideoBackground_7; }
	inline int32_t* get_address_of_mirrorVideoBackground_7() { return &___mirrorVideoBackground_7; }
	inline void set_mirrorVideoBackground_7(int32_t value)
	{
		___mirrorVideoBackground_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
