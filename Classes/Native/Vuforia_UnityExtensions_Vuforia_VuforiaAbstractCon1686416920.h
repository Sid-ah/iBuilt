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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaAbstractConfiguration/WebCamConfiguration
struct  WebCamConfiguration_t1686416920  : public Il2CppObject
{
public:
	// System.String Vuforia.VuforiaAbstractConfiguration/WebCamConfiguration::deviceNameSetInEditor
	String_t* ___deviceNameSetInEditor_0;
	// System.Boolean Vuforia.VuforiaAbstractConfiguration/WebCamConfiguration::flipHorizontally
	bool ___flipHorizontally_1;
	// System.Boolean Vuforia.VuforiaAbstractConfiguration/WebCamConfiguration::turnOffWebCam
	bool ___turnOffWebCam_2;
	// System.Int32 Vuforia.VuforiaAbstractConfiguration/WebCamConfiguration::renderTextureLayer
	int32_t ___renderTextureLayer_3;

public:
	inline static int32_t get_offset_of_deviceNameSetInEditor_0() { return static_cast<int32_t>(offsetof(WebCamConfiguration_t1686416920, ___deviceNameSetInEditor_0)); }
	inline String_t* get_deviceNameSetInEditor_0() const { return ___deviceNameSetInEditor_0; }
	inline String_t** get_address_of_deviceNameSetInEditor_0() { return &___deviceNameSetInEditor_0; }
	inline void set_deviceNameSetInEditor_0(String_t* value)
	{
		___deviceNameSetInEditor_0 = value;
		Il2CppCodeGenWriteBarrier(&___deviceNameSetInEditor_0, value);
	}

	inline static int32_t get_offset_of_flipHorizontally_1() { return static_cast<int32_t>(offsetof(WebCamConfiguration_t1686416920, ___flipHorizontally_1)); }
	inline bool get_flipHorizontally_1() const { return ___flipHorizontally_1; }
	inline bool* get_address_of_flipHorizontally_1() { return &___flipHorizontally_1; }
	inline void set_flipHorizontally_1(bool value)
	{
		___flipHorizontally_1 = value;
	}

	inline static int32_t get_offset_of_turnOffWebCam_2() { return static_cast<int32_t>(offsetof(WebCamConfiguration_t1686416920, ___turnOffWebCam_2)); }
	inline bool get_turnOffWebCam_2() const { return ___turnOffWebCam_2; }
	inline bool* get_address_of_turnOffWebCam_2() { return &___turnOffWebCam_2; }
	inline void set_turnOffWebCam_2(bool value)
	{
		___turnOffWebCam_2 = value;
	}

	inline static int32_t get_offset_of_renderTextureLayer_3() { return static_cast<int32_t>(offsetof(WebCamConfiguration_t1686416920, ___renderTextureLayer_3)); }
	inline int32_t get_renderTextureLayer_3() const { return ___renderTextureLayer_3; }
	inline int32_t* get_address_of_renderTextureLayer_3() { return &___renderTextureLayer_3; }
	inline void set_renderTextureLayer_3(int32_t value)
	{
		___renderTextureLayer_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
