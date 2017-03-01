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

#include "mscorlib_System_Object2689449295.h"
#include "Vuforia_UnityExtensions_Vuforia_DistortionRenderin3766399464.h"
#include "Vuforia_UnityExtensions_Vuforia_DigitalEyewearARCo2121820252.h"
#include "Vuforia_UnityExtensions_Vuforia_DigitalEyewearARCo3746630162.h"
#include "Vuforia_UnityExtensions_Vuforia_DigitalEyewearARCon342269456.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaAbstractConfiguration/DigitalEyewearConfiguration
struct  DigitalEyewearConfiguration_t4173669749  : public Il2CppObject
{
public:
	// System.Single Vuforia.VuforiaAbstractConfiguration/DigitalEyewearConfiguration::cameraOffset
	float ___cameraOffset_0;
	// Vuforia.DistortionRenderingMode Vuforia.VuforiaAbstractConfiguration/DigitalEyewearConfiguration::distortionRenderingMode
	int32_t ___distortionRenderingMode_1;
	// System.Int32 Vuforia.VuforiaAbstractConfiguration/DigitalEyewearConfiguration::distortionRenderingLayer
	int32_t ___distortionRenderingLayer_2;
	// Vuforia.DigitalEyewearARController/EyewearType Vuforia.VuforiaAbstractConfiguration/DigitalEyewearConfiguration::eyewearType
	int32_t ___eyewearType_3;
	// Vuforia.DigitalEyewearARController/StereoFramework Vuforia.VuforiaAbstractConfiguration/DigitalEyewearConfiguration::stereoFramework
	int32_t ___stereoFramework_4;
	// Vuforia.DigitalEyewearARController/SeeThroughConfiguration Vuforia.VuforiaAbstractConfiguration/DigitalEyewearConfiguration::seeThroughConfiguration
	int32_t ___seeThroughConfiguration_5;
	// System.String Vuforia.VuforiaAbstractConfiguration/DigitalEyewearConfiguration::viewerName
	String_t* ___viewerName_6;
	// System.String Vuforia.VuforiaAbstractConfiguration/DigitalEyewearConfiguration::viewerManufacturer
	String_t* ___viewerManufacturer_7;
	// System.Boolean Vuforia.VuforiaAbstractConfiguration/DigitalEyewearConfiguration::useCustomViewer
	bool ___useCustomViewer_8;
	// Vuforia.DigitalEyewearARController/SerializableViewerParameters Vuforia.VuforiaAbstractConfiguration/DigitalEyewearConfiguration::customViewer
	SerializableViewerParameters_t2750347603 * ___customViewer_9;

public:
	inline static int32_t get_offset_of_cameraOffset_0() { return static_cast<int32_t>(offsetof(DigitalEyewearConfiguration_t4173669749, ___cameraOffset_0)); }
	inline float get_cameraOffset_0() const { return ___cameraOffset_0; }
	inline float* get_address_of_cameraOffset_0() { return &___cameraOffset_0; }
	inline void set_cameraOffset_0(float value)
	{
		___cameraOffset_0 = value;
	}

	inline static int32_t get_offset_of_distortionRenderingMode_1() { return static_cast<int32_t>(offsetof(DigitalEyewearConfiguration_t4173669749, ___distortionRenderingMode_1)); }
	inline int32_t get_distortionRenderingMode_1() const { return ___distortionRenderingMode_1; }
	inline int32_t* get_address_of_distortionRenderingMode_1() { return &___distortionRenderingMode_1; }
	inline void set_distortionRenderingMode_1(int32_t value)
	{
		___distortionRenderingMode_1 = value;
	}

	inline static int32_t get_offset_of_distortionRenderingLayer_2() { return static_cast<int32_t>(offsetof(DigitalEyewearConfiguration_t4173669749, ___distortionRenderingLayer_2)); }
	inline int32_t get_distortionRenderingLayer_2() const { return ___distortionRenderingLayer_2; }
	inline int32_t* get_address_of_distortionRenderingLayer_2() { return &___distortionRenderingLayer_2; }
	inline void set_distortionRenderingLayer_2(int32_t value)
	{
		___distortionRenderingLayer_2 = value;
	}

	inline static int32_t get_offset_of_eyewearType_3() { return static_cast<int32_t>(offsetof(DigitalEyewearConfiguration_t4173669749, ___eyewearType_3)); }
	inline int32_t get_eyewearType_3() const { return ___eyewearType_3; }
	inline int32_t* get_address_of_eyewearType_3() { return &___eyewearType_3; }
	inline void set_eyewearType_3(int32_t value)
	{
		___eyewearType_3 = value;
	}

	inline static int32_t get_offset_of_stereoFramework_4() { return static_cast<int32_t>(offsetof(DigitalEyewearConfiguration_t4173669749, ___stereoFramework_4)); }
	inline int32_t get_stereoFramework_4() const { return ___stereoFramework_4; }
	inline int32_t* get_address_of_stereoFramework_4() { return &___stereoFramework_4; }
	inline void set_stereoFramework_4(int32_t value)
	{
		___stereoFramework_4 = value;
	}

	inline static int32_t get_offset_of_seeThroughConfiguration_5() { return static_cast<int32_t>(offsetof(DigitalEyewearConfiguration_t4173669749, ___seeThroughConfiguration_5)); }
	inline int32_t get_seeThroughConfiguration_5() const { return ___seeThroughConfiguration_5; }
	inline int32_t* get_address_of_seeThroughConfiguration_5() { return &___seeThroughConfiguration_5; }
	inline void set_seeThroughConfiguration_5(int32_t value)
	{
		___seeThroughConfiguration_5 = value;
	}

	inline static int32_t get_offset_of_viewerName_6() { return static_cast<int32_t>(offsetof(DigitalEyewearConfiguration_t4173669749, ___viewerName_6)); }
	inline String_t* get_viewerName_6() const { return ___viewerName_6; }
	inline String_t** get_address_of_viewerName_6() { return &___viewerName_6; }
	inline void set_viewerName_6(String_t* value)
	{
		___viewerName_6 = value;
		Il2CppCodeGenWriteBarrier(&___viewerName_6, value);
	}

	inline static int32_t get_offset_of_viewerManufacturer_7() { return static_cast<int32_t>(offsetof(DigitalEyewearConfiguration_t4173669749, ___viewerManufacturer_7)); }
	inline String_t* get_viewerManufacturer_7() const { return ___viewerManufacturer_7; }
	inline String_t** get_address_of_viewerManufacturer_7() { return &___viewerManufacturer_7; }
	inline void set_viewerManufacturer_7(String_t* value)
	{
		___viewerManufacturer_7 = value;
		Il2CppCodeGenWriteBarrier(&___viewerManufacturer_7, value);
	}

	inline static int32_t get_offset_of_useCustomViewer_8() { return static_cast<int32_t>(offsetof(DigitalEyewearConfiguration_t4173669749, ___useCustomViewer_8)); }
	inline bool get_useCustomViewer_8() const { return ___useCustomViewer_8; }
	inline bool* get_address_of_useCustomViewer_8() { return &___useCustomViewer_8; }
	inline void set_useCustomViewer_8(bool value)
	{
		___useCustomViewer_8 = value;
	}

	inline static int32_t get_offset_of_customViewer_9() { return static_cast<int32_t>(offsetof(DigitalEyewearConfiguration_t4173669749, ___customViewer_9)); }
	inline SerializableViewerParameters_t2750347603 * get_customViewer_9() const { return ___customViewer_9; }
	inline SerializableViewerParameters_t2750347603 ** get_address_of_customViewer_9() { return &___customViewer_9; }
	inline void set_customViewer_9(SerializableViewerParameters_t2750347603 * value)
	{
		___customViewer_9 = value;
		Il2CppCodeGenWriteBarrier(&___customViewer_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
