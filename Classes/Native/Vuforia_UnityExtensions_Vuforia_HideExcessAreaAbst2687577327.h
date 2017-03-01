#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.IExcessAreaClipping
struct IExcessAreaClipping_t3408783853;
// Vuforia.VuforiaARController
struct VuforiaARController_t4061728485;
// Vuforia.VideoBackgroundManager
struct VideoBackgroundManager_t3515346924;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "Vuforia_UnityExtensions_Vuforia_HideExcessAreaAbst2100449024.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.HideExcessAreaAbstractBehaviour
struct  HideExcessAreaAbstractBehaviour_t2687577327  : public MonoBehaviour_t1158329972
{
public:
	// Vuforia.IExcessAreaClipping Vuforia.HideExcessAreaAbstractBehaviour::mClippingImpl
	Il2CppObject * ___mClippingImpl_2;
	// Vuforia.HideExcessAreaAbstractBehaviour/CLIPPING_MODE Vuforia.HideExcessAreaAbstractBehaviour::mClippingMode
	int32_t ___mClippingMode_3;
	// Vuforia.VuforiaARController Vuforia.HideExcessAreaAbstractBehaviour::mVuforiaBehaviour
	VuforiaARController_t4061728485 * ___mVuforiaBehaviour_4;
	// Vuforia.VideoBackgroundManager Vuforia.HideExcessAreaAbstractBehaviour::mVideoBgMgr
	VideoBackgroundManager_t3515346924 * ___mVideoBgMgr_5;
	// UnityEngine.Vector3 Vuforia.HideExcessAreaAbstractBehaviour::mPlaneOffset
	Vector3_t2243707580  ___mPlaneOffset_6;
	// System.Boolean Vuforia.HideExcessAreaAbstractBehaviour::mSceneScaledDown
	bool ___mSceneScaledDown_7;
	// System.Boolean Vuforia.HideExcessAreaAbstractBehaviour::mStarted
	bool ___mStarted_8;

public:
	inline static int32_t get_offset_of_mClippingImpl_2() { return static_cast<int32_t>(offsetof(HideExcessAreaAbstractBehaviour_t2687577327, ___mClippingImpl_2)); }
	inline Il2CppObject * get_mClippingImpl_2() const { return ___mClippingImpl_2; }
	inline Il2CppObject ** get_address_of_mClippingImpl_2() { return &___mClippingImpl_2; }
	inline void set_mClippingImpl_2(Il2CppObject * value)
	{
		___mClippingImpl_2 = value;
		Il2CppCodeGenWriteBarrier(&___mClippingImpl_2, value);
	}

	inline static int32_t get_offset_of_mClippingMode_3() { return static_cast<int32_t>(offsetof(HideExcessAreaAbstractBehaviour_t2687577327, ___mClippingMode_3)); }
	inline int32_t get_mClippingMode_3() const { return ___mClippingMode_3; }
	inline int32_t* get_address_of_mClippingMode_3() { return &___mClippingMode_3; }
	inline void set_mClippingMode_3(int32_t value)
	{
		___mClippingMode_3 = value;
	}

	inline static int32_t get_offset_of_mVuforiaBehaviour_4() { return static_cast<int32_t>(offsetof(HideExcessAreaAbstractBehaviour_t2687577327, ___mVuforiaBehaviour_4)); }
	inline VuforiaARController_t4061728485 * get_mVuforiaBehaviour_4() const { return ___mVuforiaBehaviour_4; }
	inline VuforiaARController_t4061728485 ** get_address_of_mVuforiaBehaviour_4() { return &___mVuforiaBehaviour_4; }
	inline void set_mVuforiaBehaviour_4(VuforiaARController_t4061728485 * value)
	{
		___mVuforiaBehaviour_4 = value;
		Il2CppCodeGenWriteBarrier(&___mVuforiaBehaviour_4, value);
	}

	inline static int32_t get_offset_of_mVideoBgMgr_5() { return static_cast<int32_t>(offsetof(HideExcessAreaAbstractBehaviour_t2687577327, ___mVideoBgMgr_5)); }
	inline VideoBackgroundManager_t3515346924 * get_mVideoBgMgr_5() const { return ___mVideoBgMgr_5; }
	inline VideoBackgroundManager_t3515346924 ** get_address_of_mVideoBgMgr_5() { return &___mVideoBgMgr_5; }
	inline void set_mVideoBgMgr_5(VideoBackgroundManager_t3515346924 * value)
	{
		___mVideoBgMgr_5 = value;
		Il2CppCodeGenWriteBarrier(&___mVideoBgMgr_5, value);
	}

	inline static int32_t get_offset_of_mPlaneOffset_6() { return static_cast<int32_t>(offsetof(HideExcessAreaAbstractBehaviour_t2687577327, ___mPlaneOffset_6)); }
	inline Vector3_t2243707580  get_mPlaneOffset_6() const { return ___mPlaneOffset_6; }
	inline Vector3_t2243707580 * get_address_of_mPlaneOffset_6() { return &___mPlaneOffset_6; }
	inline void set_mPlaneOffset_6(Vector3_t2243707580  value)
	{
		___mPlaneOffset_6 = value;
	}

	inline static int32_t get_offset_of_mSceneScaledDown_7() { return static_cast<int32_t>(offsetof(HideExcessAreaAbstractBehaviour_t2687577327, ___mSceneScaledDown_7)); }
	inline bool get_mSceneScaledDown_7() const { return ___mSceneScaledDown_7; }
	inline bool* get_address_of_mSceneScaledDown_7() { return &___mSceneScaledDown_7; }
	inline void set_mSceneScaledDown_7(bool value)
	{
		___mSceneScaledDown_7 = value;
	}

	inline static int32_t get_offset_of_mStarted_8() { return static_cast<int32_t>(offsetof(HideExcessAreaAbstractBehaviour_t2687577327, ___mStarted_8)); }
	inline bool get_mStarted_8() const { return ___mStarted_8; }
	inline bool* get_address_of_mStarted_8() { return &___mStarted_8; }
	inline void set_mStarted_8(bool value)
	{
		___mStarted_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
