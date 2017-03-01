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
// Vuforia.WebCamImpl
struct WebCamImpl_t2771725761;
// Vuforia.WebCamARController
struct WebCamARController_t2804466264;
// System.Object
struct Il2CppObject;

#include "Vuforia_UnityExtensions_Vuforia_ARController2638793709.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WebCamARController
struct  WebCamARController_t2804466264  : public ARController_t2638793709
{
public:
	// System.Int32 Vuforia.WebCamARController::RenderTextureLayer
	int32_t ___RenderTextureLayer_1;
	// System.String Vuforia.WebCamARController::mDeviceNameSetInEditor
	String_t* ___mDeviceNameSetInEditor_2;
	// System.Boolean Vuforia.WebCamARController::mFlipHorizontally
	bool ___mFlipHorizontally_3;
	// Vuforia.WebCamImpl Vuforia.WebCamARController::mWebCamImpl
	WebCamImpl_t2771725761 * ___mWebCamImpl_4;

public:
	inline static int32_t get_offset_of_RenderTextureLayer_1() { return static_cast<int32_t>(offsetof(WebCamARController_t2804466264, ___RenderTextureLayer_1)); }
	inline int32_t get_RenderTextureLayer_1() const { return ___RenderTextureLayer_1; }
	inline int32_t* get_address_of_RenderTextureLayer_1() { return &___RenderTextureLayer_1; }
	inline void set_RenderTextureLayer_1(int32_t value)
	{
		___RenderTextureLayer_1 = value;
	}

	inline static int32_t get_offset_of_mDeviceNameSetInEditor_2() { return static_cast<int32_t>(offsetof(WebCamARController_t2804466264, ___mDeviceNameSetInEditor_2)); }
	inline String_t* get_mDeviceNameSetInEditor_2() const { return ___mDeviceNameSetInEditor_2; }
	inline String_t** get_address_of_mDeviceNameSetInEditor_2() { return &___mDeviceNameSetInEditor_2; }
	inline void set_mDeviceNameSetInEditor_2(String_t* value)
	{
		___mDeviceNameSetInEditor_2 = value;
		Il2CppCodeGenWriteBarrier(&___mDeviceNameSetInEditor_2, value);
	}

	inline static int32_t get_offset_of_mFlipHorizontally_3() { return static_cast<int32_t>(offsetof(WebCamARController_t2804466264, ___mFlipHorizontally_3)); }
	inline bool get_mFlipHorizontally_3() const { return ___mFlipHorizontally_3; }
	inline bool* get_address_of_mFlipHorizontally_3() { return &___mFlipHorizontally_3; }
	inline void set_mFlipHorizontally_3(bool value)
	{
		___mFlipHorizontally_3 = value;
	}

	inline static int32_t get_offset_of_mWebCamImpl_4() { return static_cast<int32_t>(offsetof(WebCamARController_t2804466264, ___mWebCamImpl_4)); }
	inline WebCamImpl_t2771725761 * get_mWebCamImpl_4() const { return ___mWebCamImpl_4; }
	inline WebCamImpl_t2771725761 ** get_address_of_mWebCamImpl_4() { return &___mWebCamImpl_4; }
	inline void set_mWebCamImpl_4(WebCamImpl_t2771725761 * value)
	{
		___mWebCamImpl_4 = value;
		Il2CppCodeGenWriteBarrier(&___mWebCamImpl_4, value);
	}
};

struct WebCamARController_t2804466264_StaticFields
{
public:
	// Vuforia.WebCamARController Vuforia.WebCamARController::mInstance
	WebCamARController_t2804466264 * ___mInstance_5;
	// System.Object Vuforia.WebCamARController::mPadlock
	Il2CppObject * ___mPadlock_6;

public:
	inline static int32_t get_offset_of_mInstance_5() { return static_cast<int32_t>(offsetof(WebCamARController_t2804466264_StaticFields, ___mInstance_5)); }
	inline WebCamARController_t2804466264 * get_mInstance_5() const { return ___mInstance_5; }
	inline WebCamARController_t2804466264 ** get_address_of_mInstance_5() { return &___mInstance_5; }
	inline void set_mInstance_5(WebCamARController_t2804466264 * value)
	{
		___mInstance_5 = value;
		Il2CppCodeGenWriteBarrier(&___mInstance_5, value);
	}

	inline static int32_t get_offset_of_mPadlock_6() { return static_cast<int32_t>(offsetof(WebCamARController_t2804466264_StaticFields, ___mPadlock_6)); }
	inline Il2CppObject * get_mPadlock_6() const { return ___mPadlock_6; }
	inline Il2CppObject ** get_address_of_mPadlock_6() { return &___mPadlock_6; }
	inline void set_mPadlock_6(Il2CppObject * value)
	{
		___mPadlock_6 = value;
		Il2CppCodeGenWriteBarrier(&___mPadlock_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
