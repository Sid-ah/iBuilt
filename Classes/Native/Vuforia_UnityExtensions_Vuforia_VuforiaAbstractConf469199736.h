#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Shader
struct Shader_t2430389951;

#include "mscorlib_System_Object2689449295.h"
#include "Vuforia_UnityExtensions_Vuforia_HideExcessAreaAbst2100449024.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaAbstractConfiguration/VideoBackgroundConfiguration
struct  VideoBackgroundConfiguration_t469199736  : public Il2CppObject
{
public:
	// Vuforia.HideExcessAreaAbstractBehaviour/CLIPPING_MODE Vuforia.VuforiaAbstractConfiguration/VideoBackgroundConfiguration::clippingMode
	int32_t ___clippingMode_0;
	// UnityEngine.Shader Vuforia.VuforiaAbstractConfiguration/VideoBackgroundConfiguration::matteShader
	Shader_t2430389951 * ___matteShader_1;
	// System.Boolean Vuforia.VuforiaAbstractConfiguration/VideoBackgroundConfiguration::videoBackgroundEnabled
	bool ___videoBackgroundEnabled_2;

public:
	inline static int32_t get_offset_of_clippingMode_0() { return static_cast<int32_t>(offsetof(VideoBackgroundConfiguration_t469199736, ___clippingMode_0)); }
	inline int32_t get_clippingMode_0() const { return ___clippingMode_0; }
	inline int32_t* get_address_of_clippingMode_0() { return &___clippingMode_0; }
	inline void set_clippingMode_0(int32_t value)
	{
		___clippingMode_0 = value;
	}

	inline static int32_t get_offset_of_matteShader_1() { return static_cast<int32_t>(offsetof(VideoBackgroundConfiguration_t469199736, ___matteShader_1)); }
	inline Shader_t2430389951 * get_matteShader_1() const { return ___matteShader_1; }
	inline Shader_t2430389951 ** get_address_of_matteShader_1() { return &___matteShader_1; }
	inline void set_matteShader_1(Shader_t2430389951 * value)
	{
		___matteShader_1 = value;
		Il2CppCodeGenWriteBarrier(&___matteShader_1, value);
	}

	inline static int32_t get_offset_of_videoBackgroundEnabled_2() { return static_cast<int32_t>(offsetof(VideoBackgroundConfiguration_t469199736, ___videoBackgroundEnabled_2)); }
	inline bool get_videoBackgroundEnabled_2() const { return ___videoBackgroundEnabled_2; }
	inline bool* get_address_of_videoBackgroundEnabled_2() { return &___videoBackgroundEnabled_2; }
	inline void set_videoBackgroundEnabled_2(bool value)
	{
		___videoBackgroundEnabled_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
