#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.String
struct String_t;

#include "Vuforia_UnityExtensions_Vuforia_WebCamTexAdaptor2106169489.h"
#include "mscorlib_System_DateTime693205669.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.NullWebCamTexAdaptor
struct  NullWebCamTexAdaptor_t2136158928  : public WebCamTexAdaptor_t2106169489
{
public:
	// UnityEngine.Texture2D Vuforia.NullWebCamTexAdaptor::mTexture
	Texture2D_t3542995729 * ___mTexture_0;
	// System.Boolean Vuforia.NullWebCamTexAdaptor::mPseudoPlaying
	bool ___mPseudoPlaying_1;
	// System.Double Vuforia.NullWebCamTexAdaptor::mMsBetweenFrames
	double ___mMsBetweenFrames_2;
	// System.DateTime Vuforia.NullWebCamTexAdaptor::mLastFrame
	DateTime_t693205669  ___mLastFrame_3;

public:
	inline static int32_t get_offset_of_mTexture_0() { return static_cast<int32_t>(offsetof(NullWebCamTexAdaptor_t2136158928, ___mTexture_0)); }
	inline Texture2D_t3542995729 * get_mTexture_0() const { return ___mTexture_0; }
	inline Texture2D_t3542995729 ** get_address_of_mTexture_0() { return &___mTexture_0; }
	inline void set_mTexture_0(Texture2D_t3542995729 * value)
	{
		___mTexture_0 = value;
		Il2CppCodeGenWriteBarrier(&___mTexture_0, value);
	}

	inline static int32_t get_offset_of_mPseudoPlaying_1() { return static_cast<int32_t>(offsetof(NullWebCamTexAdaptor_t2136158928, ___mPseudoPlaying_1)); }
	inline bool get_mPseudoPlaying_1() const { return ___mPseudoPlaying_1; }
	inline bool* get_address_of_mPseudoPlaying_1() { return &___mPseudoPlaying_1; }
	inline void set_mPseudoPlaying_1(bool value)
	{
		___mPseudoPlaying_1 = value;
	}

	inline static int32_t get_offset_of_mMsBetweenFrames_2() { return static_cast<int32_t>(offsetof(NullWebCamTexAdaptor_t2136158928, ___mMsBetweenFrames_2)); }
	inline double get_mMsBetweenFrames_2() const { return ___mMsBetweenFrames_2; }
	inline double* get_address_of_mMsBetweenFrames_2() { return &___mMsBetweenFrames_2; }
	inline void set_mMsBetweenFrames_2(double value)
	{
		___mMsBetweenFrames_2 = value;
	}

	inline static int32_t get_offset_of_mLastFrame_3() { return static_cast<int32_t>(offsetof(NullWebCamTexAdaptor_t2136158928, ___mLastFrame_3)); }
	inline DateTime_t693205669  get_mLastFrame_3() const { return ___mLastFrame_3; }
	inline DateTime_t693205669 * get_address_of_mLastFrame_3() { return &___mLastFrame_3; }
	inline void set_mLastFrame_3(DateTime_t693205669  value)
	{
		___mLastFrame_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
