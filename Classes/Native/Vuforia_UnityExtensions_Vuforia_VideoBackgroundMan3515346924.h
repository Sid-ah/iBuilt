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
// UnityEngine.Texture
struct Texture_t2243626319;
// Vuforia.VideoBackgroundManager
struct VideoBackgroundManager_t3515346924;
// System.Object
struct Il2CppObject;

#include "Vuforia_UnityExtensions_Vuforia_ARController2638793709.h"
#include "Vuforia_UnityExtensions_Vuforia_HideExcessAreaAbst2100449024.h"
#include "mscorlib_System_IntPtr2504060609.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VideoBackgroundManager
struct  VideoBackgroundManager_t3515346924  : public ARController_t2638793709
{
public:
	// Vuforia.HideExcessAreaAbstractBehaviour/CLIPPING_MODE Vuforia.VideoBackgroundManager::mClippingMode
	int32_t ___mClippingMode_1;
	// UnityEngine.Shader Vuforia.VideoBackgroundManager::mMatteShader
	Shader_t2430389951 * ___mMatteShader_2;
	// System.Boolean Vuforia.VideoBackgroundManager::mVideoBackgroundEnabled
	bool ___mVideoBackgroundEnabled_3;
	// UnityEngine.Texture Vuforia.VideoBackgroundManager::mTexture
	Texture_t2243626319 * ___mTexture_4;
	// System.Boolean Vuforia.VideoBackgroundManager::mVideoBgConfigChanged
	bool ___mVideoBgConfigChanged_5;
	// System.IntPtr Vuforia.VideoBackgroundManager::mNativeTexturePtr
	IntPtr_t ___mNativeTexturePtr_6;

public:
	inline static int32_t get_offset_of_mClippingMode_1() { return static_cast<int32_t>(offsetof(VideoBackgroundManager_t3515346924, ___mClippingMode_1)); }
	inline int32_t get_mClippingMode_1() const { return ___mClippingMode_1; }
	inline int32_t* get_address_of_mClippingMode_1() { return &___mClippingMode_1; }
	inline void set_mClippingMode_1(int32_t value)
	{
		___mClippingMode_1 = value;
	}

	inline static int32_t get_offset_of_mMatteShader_2() { return static_cast<int32_t>(offsetof(VideoBackgroundManager_t3515346924, ___mMatteShader_2)); }
	inline Shader_t2430389951 * get_mMatteShader_2() const { return ___mMatteShader_2; }
	inline Shader_t2430389951 ** get_address_of_mMatteShader_2() { return &___mMatteShader_2; }
	inline void set_mMatteShader_2(Shader_t2430389951 * value)
	{
		___mMatteShader_2 = value;
		Il2CppCodeGenWriteBarrier(&___mMatteShader_2, value);
	}

	inline static int32_t get_offset_of_mVideoBackgroundEnabled_3() { return static_cast<int32_t>(offsetof(VideoBackgroundManager_t3515346924, ___mVideoBackgroundEnabled_3)); }
	inline bool get_mVideoBackgroundEnabled_3() const { return ___mVideoBackgroundEnabled_3; }
	inline bool* get_address_of_mVideoBackgroundEnabled_3() { return &___mVideoBackgroundEnabled_3; }
	inline void set_mVideoBackgroundEnabled_3(bool value)
	{
		___mVideoBackgroundEnabled_3 = value;
	}

	inline static int32_t get_offset_of_mTexture_4() { return static_cast<int32_t>(offsetof(VideoBackgroundManager_t3515346924, ___mTexture_4)); }
	inline Texture_t2243626319 * get_mTexture_4() const { return ___mTexture_4; }
	inline Texture_t2243626319 ** get_address_of_mTexture_4() { return &___mTexture_4; }
	inline void set_mTexture_4(Texture_t2243626319 * value)
	{
		___mTexture_4 = value;
		Il2CppCodeGenWriteBarrier(&___mTexture_4, value);
	}

	inline static int32_t get_offset_of_mVideoBgConfigChanged_5() { return static_cast<int32_t>(offsetof(VideoBackgroundManager_t3515346924, ___mVideoBgConfigChanged_5)); }
	inline bool get_mVideoBgConfigChanged_5() const { return ___mVideoBgConfigChanged_5; }
	inline bool* get_address_of_mVideoBgConfigChanged_5() { return &___mVideoBgConfigChanged_5; }
	inline void set_mVideoBgConfigChanged_5(bool value)
	{
		___mVideoBgConfigChanged_5 = value;
	}

	inline static int32_t get_offset_of_mNativeTexturePtr_6() { return static_cast<int32_t>(offsetof(VideoBackgroundManager_t3515346924, ___mNativeTexturePtr_6)); }
	inline IntPtr_t get_mNativeTexturePtr_6() const { return ___mNativeTexturePtr_6; }
	inline IntPtr_t* get_address_of_mNativeTexturePtr_6() { return &___mNativeTexturePtr_6; }
	inline void set_mNativeTexturePtr_6(IntPtr_t value)
	{
		___mNativeTexturePtr_6 = value;
	}
};

struct VideoBackgroundManager_t3515346924_StaticFields
{
public:
	// Vuforia.VideoBackgroundManager Vuforia.VideoBackgroundManager::mInstance
	VideoBackgroundManager_t3515346924 * ___mInstance_7;
	// System.Object Vuforia.VideoBackgroundManager::mPadlock
	Il2CppObject * ___mPadlock_8;

public:
	inline static int32_t get_offset_of_mInstance_7() { return static_cast<int32_t>(offsetof(VideoBackgroundManager_t3515346924_StaticFields, ___mInstance_7)); }
	inline VideoBackgroundManager_t3515346924 * get_mInstance_7() const { return ___mInstance_7; }
	inline VideoBackgroundManager_t3515346924 ** get_address_of_mInstance_7() { return &___mInstance_7; }
	inline void set_mInstance_7(VideoBackgroundManager_t3515346924 * value)
	{
		___mInstance_7 = value;
		Il2CppCodeGenWriteBarrier(&___mInstance_7, value);
	}

	inline static int32_t get_offset_of_mPadlock_8() { return static_cast<int32_t>(offsetof(VideoBackgroundManager_t3515346924_StaticFields, ___mPadlock_8)); }
	inline Il2CppObject * get_mPadlock_8() const { return ___mPadlock_8; }
	inline Il2CppObject ** get_address_of_mPadlock_8() { return &___mPadlock_8; }
	inline void set_mPadlock_8(Il2CppObject * value)
	{
		___mPadlock_8 = value;
		Il2CppCodeGenWriteBarrier(&___mPadlock_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
