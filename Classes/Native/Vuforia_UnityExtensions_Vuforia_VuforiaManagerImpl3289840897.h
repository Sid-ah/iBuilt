#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.WorldCenterTrackableBehaviour
struct WorldCenterTrackableBehaviour_t2689282255;
// Vuforia.VuMarkAbstractBehaviour
struct VuMarkAbstractBehaviour_t1830666997;
// UnityEngine.Transform
struct Transform_t3275118058;
// Vuforia.VuforiaManagerImpl/TrackableResultData[]
struct TrackableResultDataU5BU5D_t1439643011;
// Vuforia.VuforiaManagerImpl/WordData[]
struct WordDataU5BU5D_t1250596477;
// Vuforia.VuforiaManagerImpl/WordResultData[]
struct WordResultDataU5BU5D_t148237038;
// Vuforia.VuforiaManagerImpl/VuMarkTargetData[]
struct VuMarkTargetDataU5BU5D_t388531058;
// Vuforia.VuforiaManagerImpl/VuMarkTargetResultData[]
struct VuMarkTargetResultDataU5BU5D_t644033633;
// System.Collections.Generic.LinkedList`1<Vuforia.VuforiaManager/TrackableIdPair>
struct LinkedList_1_t1634063505;

#include "Vuforia_UnityExtensions_Vuforia_VuforiaManager2424874861.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaARControlle3506117492.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl3635099966.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl3090691518.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaManagerImpl
struct  VuforiaManagerImpl_t3289840897  : public VuforiaManager_t2424874861
{
public:
	// System.Boolean Vuforia.VuforiaManagerImpl::<VideoBackgroundTextureSet>k__BackingField
	bool ___U3CVideoBackgroundTextureSetU3Ek__BackingField_1;
	// Vuforia.VuforiaARController/WorldCenterMode Vuforia.VuforiaManagerImpl::mWorldCenterMode
	int32_t ___mWorldCenterMode_2;
	// Vuforia.WorldCenterTrackableBehaviour Vuforia.VuforiaManagerImpl::mWorldCenter
	Il2CppObject * ___mWorldCenter_3;
	// Vuforia.VuMarkAbstractBehaviour Vuforia.VuforiaManagerImpl::mVuMarkWorldCenter
	VuMarkAbstractBehaviour_t1830666997 * ___mVuMarkWorldCenter_4;
	// UnityEngine.Transform Vuforia.VuforiaManagerImpl::mARCameraTransform
	Transform_t3275118058 * ___mARCameraTransform_5;
	// UnityEngine.Transform Vuforia.VuforiaManagerImpl::mCentralAnchorPoint
	Transform_t3275118058 * ___mCentralAnchorPoint_6;
	// UnityEngine.Transform Vuforia.VuforiaManagerImpl::mParentAnchorPoint
	Transform_t3275118058 * ___mParentAnchorPoint_7;
	// Vuforia.VuforiaManagerImpl/TrackableResultData[] Vuforia.VuforiaManagerImpl::mTrackableResultDataArray
	TrackableResultDataU5BU5D_t1439643011* ___mTrackableResultDataArray_8;
	// Vuforia.VuforiaManagerImpl/WordData[] Vuforia.VuforiaManagerImpl::mWordDataArray
	WordDataU5BU5D_t1250596477* ___mWordDataArray_9;
	// Vuforia.VuforiaManagerImpl/WordResultData[] Vuforia.VuforiaManagerImpl::mWordResultDataArray
	WordResultDataU5BU5D_t148237038* ___mWordResultDataArray_10;
	// Vuforia.VuforiaManagerImpl/VuMarkTargetData[] Vuforia.VuforiaManagerImpl::mVuMarkDataArray
	VuMarkTargetDataU5BU5D_t388531058* ___mVuMarkDataArray_11;
	// Vuforia.VuforiaManagerImpl/VuMarkTargetResultData[] Vuforia.VuforiaManagerImpl::mVuMarkResultDataArray
	VuMarkTargetResultDataU5BU5D_t644033633* ___mVuMarkResultDataArray_12;
	// System.Collections.Generic.LinkedList`1<Vuforia.VuforiaManager/TrackableIdPair> Vuforia.VuforiaManagerImpl::mTrackableFoundQueue
	LinkedList_1_t1634063505 * ___mTrackableFoundQueue_13;
	// System.IntPtr Vuforia.VuforiaManagerImpl::mImageHeaderData
	IntPtr_t ___mImageHeaderData_14;
	// System.Int32 Vuforia.VuforiaManagerImpl::mNumImageHeaders
	int32_t ___mNumImageHeaders_15;
	// System.Int32 Vuforia.VuforiaManagerImpl::mInjectedFrameIdx
	int32_t ___mInjectedFrameIdx_16;
	// System.IntPtr Vuforia.VuforiaManagerImpl::mLastProcessedFrameStatePtr
	IntPtr_t ___mLastProcessedFrameStatePtr_17;
	// System.Boolean Vuforia.VuforiaManagerImpl::mInitialized
	bool ___mInitialized_18;
	// System.Boolean Vuforia.VuforiaManagerImpl::mPaused
	bool ___mPaused_19;
	// Vuforia.VuforiaManagerImpl/FrameState Vuforia.VuforiaManagerImpl::mFrameState
	FrameState_t3635099966  ___mFrameState_20;
	// Vuforia.VuforiaManagerImpl/AutoRotationState Vuforia.VuforiaManagerImpl::mAutoRotationState
	AutoRotationState_t3090691518  ___mAutoRotationState_21;
	// System.Boolean Vuforia.VuforiaManagerImpl::mVideoBackgroundNeedsRedrawing
	bool ___mVideoBackgroundNeedsRedrawing_22;
	// System.Int32 Vuforia.VuforiaManagerImpl::mDiscardStatesForRendering
	int32_t ___mDiscardStatesForRendering_23;
	// System.Int32 Vuforia.VuforiaManagerImpl::mLastFrameIdx
	int32_t ___mLastFrameIdx_24;
	// System.Boolean Vuforia.VuforiaManagerImpl::mIsSeeThroughDevice
	bool ___mIsSeeThroughDevice_25;

public:
	inline static int32_t get_offset_of_U3CVideoBackgroundTextureSetU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t3289840897, ___U3CVideoBackgroundTextureSetU3Ek__BackingField_1)); }
	inline bool get_U3CVideoBackgroundTextureSetU3Ek__BackingField_1() const { return ___U3CVideoBackgroundTextureSetU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CVideoBackgroundTextureSetU3Ek__BackingField_1() { return &___U3CVideoBackgroundTextureSetU3Ek__BackingField_1; }
	inline void set_U3CVideoBackgroundTextureSetU3Ek__BackingField_1(bool value)
	{
		___U3CVideoBackgroundTextureSetU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_mWorldCenterMode_2() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t3289840897, ___mWorldCenterMode_2)); }
	inline int32_t get_mWorldCenterMode_2() const { return ___mWorldCenterMode_2; }
	inline int32_t* get_address_of_mWorldCenterMode_2() { return &___mWorldCenterMode_2; }
	inline void set_mWorldCenterMode_2(int32_t value)
	{
		___mWorldCenterMode_2 = value;
	}

	inline static int32_t get_offset_of_mWorldCenter_3() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t3289840897, ___mWorldCenter_3)); }
	inline Il2CppObject * get_mWorldCenter_3() const { return ___mWorldCenter_3; }
	inline Il2CppObject ** get_address_of_mWorldCenter_3() { return &___mWorldCenter_3; }
	inline void set_mWorldCenter_3(Il2CppObject * value)
	{
		___mWorldCenter_3 = value;
		Il2CppCodeGenWriteBarrier(&___mWorldCenter_3, value);
	}

	inline static int32_t get_offset_of_mVuMarkWorldCenter_4() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t3289840897, ___mVuMarkWorldCenter_4)); }
	inline VuMarkAbstractBehaviour_t1830666997 * get_mVuMarkWorldCenter_4() const { return ___mVuMarkWorldCenter_4; }
	inline VuMarkAbstractBehaviour_t1830666997 ** get_address_of_mVuMarkWorldCenter_4() { return &___mVuMarkWorldCenter_4; }
	inline void set_mVuMarkWorldCenter_4(VuMarkAbstractBehaviour_t1830666997 * value)
	{
		___mVuMarkWorldCenter_4 = value;
		Il2CppCodeGenWriteBarrier(&___mVuMarkWorldCenter_4, value);
	}

	inline static int32_t get_offset_of_mARCameraTransform_5() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t3289840897, ___mARCameraTransform_5)); }
	inline Transform_t3275118058 * get_mARCameraTransform_5() const { return ___mARCameraTransform_5; }
	inline Transform_t3275118058 ** get_address_of_mARCameraTransform_5() { return &___mARCameraTransform_5; }
	inline void set_mARCameraTransform_5(Transform_t3275118058 * value)
	{
		___mARCameraTransform_5 = value;
		Il2CppCodeGenWriteBarrier(&___mARCameraTransform_5, value);
	}

	inline static int32_t get_offset_of_mCentralAnchorPoint_6() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t3289840897, ___mCentralAnchorPoint_6)); }
	inline Transform_t3275118058 * get_mCentralAnchorPoint_6() const { return ___mCentralAnchorPoint_6; }
	inline Transform_t3275118058 ** get_address_of_mCentralAnchorPoint_6() { return &___mCentralAnchorPoint_6; }
	inline void set_mCentralAnchorPoint_6(Transform_t3275118058 * value)
	{
		___mCentralAnchorPoint_6 = value;
		Il2CppCodeGenWriteBarrier(&___mCentralAnchorPoint_6, value);
	}

	inline static int32_t get_offset_of_mParentAnchorPoint_7() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t3289840897, ___mParentAnchorPoint_7)); }
	inline Transform_t3275118058 * get_mParentAnchorPoint_7() const { return ___mParentAnchorPoint_7; }
	inline Transform_t3275118058 ** get_address_of_mParentAnchorPoint_7() { return &___mParentAnchorPoint_7; }
	inline void set_mParentAnchorPoint_7(Transform_t3275118058 * value)
	{
		___mParentAnchorPoint_7 = value;
		Il2CppCodeGenWriteBarrier(&___mParentAnchorPoint_7, value);
	}

	inline static int32_t get_offset_of_mTrackableResultDataArray_8() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t3289840897, ___mTrackableResultDataArray_8)); }
	inline TrackableResultDataU5BU5D_t1439643011* get_mTrackableResultDataArray_8() const { return ___mTrackableResultDataArray_8; }
	inline TrackableResultDataU5BU5D_t1439643011** get_address_of_mTrackableResultDataArray_8() { return &___mTrackableResultDataArray_8; }
	inline void set_mTrackableResultDataArray_8(TrackableResultDataU5BU5D_t1439643011* value)
	{
		___mTrackableResultDataArray_8 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackableResultDataArray_8, value);
	}

	inline static int32_t get_offset_of_mWordDataArray_9() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t3289840897, ___mWordDataArray_9)); }
	inline WordDataU5BU5D_t1250596477* get_mWordDataArray_9() const { return ___mWordDataArray_9; }
	inline WordDataU5BU5D_t1250596477** get_address_of_mWordDataArray_9() { return &___mWordDataArray_9; }
	inline void set_mWordDataArray_9(WordDataU5BU5D_t1250596477* value)
	{
		___mWordDataArray_9 = value;
		Il2CppCodeGenWriteBarrier(&___mWordDataArray_9, value);
	}

	inline static int32_t get_offset_of_mWordResultDataArray_10() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t3289840897, ___mWordResultDataArray_10)); }
	inline WordResultDataU5BU5D_t148237038* get_mWordResultDataArray_10() const { return ___mWordResultDataArray_10; }
	inline WordResultDataU5BU5D_t148237038** get_address_of_mWordResultDataArray_10() { return &___mWordResultDataArray_10; }
	inline void set_mWordResultDataArray_10(WordResultDataU5BU5D_t148237038* value)
	{
		___mWordResultDataArray_10 = value;
		Il2CppCodeGenWriteBarrier(&___mWordResultDataArray_10, value);
	}

	inline static int32_t get_offset_of_mVuMarkDataArray_11() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t3289840897, ___mVuMarkDataArray_11)); }
	inline VuMarkTargetDataU5BU5D_t388531058* get_mVuMarkDataArray_11() const { return ___mVuMarkDataArray_11; }
	inline VuMarkTargetDataU5BU5D_t388531058** get_address_of_mVuMarkDataArray_11() { return &___mVuMarkDataArray_11; }
	inline void set_mVuMarkDataArray_11(VuMarkTargetDataU5BU5D_t388531058* value)
	{
		___mVuMarkDataArray_11 = value;
		Il2CppCodeGenWriteBarrier(&___mVuMarkDataArray_11, value);
	}

	inline static int32_t get_offset_of_mVuMarkResultDataArray_12() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t3289840897, ___mVuMarkResultDataArray_12)); }
	inline VuMarkTargetResultDataU5BU5D_t644033633* get_mVuMarkResultDataArray_12() const { return ___mVuMarkResultDataArray_12; }
	inline VuMarkTargetResultDataU5BU5D_t644033633** get_address_of_mVuMarkResultDataArray_12() { return &___mVuMarkResultDataArray_12; }
	inline void set_mVuMarkResultDataArray_12(VuMarkTargetResultDataU5BU5D_t644033633* value)
	{
		___mVuMarkResultDataArray_12 = value;
		Il2CppCodeGenWriteBarrier(&___mVuMarkResultDataArray_12, value);
	}

	inline static int32_t get_offset_of_mTrackableFoundQueue_13() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t3289840897, ___mTrackableFoundQueue_13)); }
	inline LinkedList_1_t1634063505 * get_mTrackableFoundQueue_13() const { return ___mTrackableFoundQueue_13; }
	inline LinkedList_1_t1634063505 ** get_address_of_mTrackableFoundQueue_13() { return &___mTrackableFoundQueue_13; }
	inline void set_mTrackableFoundQueue_13(LinkedList_1_t1634063505 * value)
	{
		___mTrackableFoundQueue_13 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackableFoundQueue_13, value);
	}

	inline static int32_t get_offset_of_mImageHeaderData_14() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t3289840897, ___mImageHeaderData_14)); }
	inline IntPtr_t get_mImageHeaderData_14() const { return ___mImageHeaderData_14; }
	inline IntPtr_t* get_address_of_mImageHeaderData_14() { return &___mImageHeaderData_14; }
	inline void set_mImageHeaderData_14(IntPtr_t value)
	{
		___mImageHeaderData_14 = value;
	}

	inline static int32_t get_offset_of_mNumImageHeaders_15() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t3289840897, ___mNumImageHeaders_15)); }
	inline int32_t get_mNumImageHeaders_15() const { return ___mNumImageHeaders_15; }
	inline int32_t* get_address_of_mNumImageHeaders_15() { return &___mNumImageHeaders_15; }
	inline void set_mNumImageHeaders_15(int32_t value)
	{
		___mNumImageHeaders_15 = value;
	}

	inline static int32_t get_offset_of_mInjectedFrameIdx_16() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t3289840897, ___mInjectedFrameIdx_16)); }
	inline int32_t get_mInjectedFrameIdx_16() const { return ___mInjectedFrameIdx_16; }
	inline int32_t* get_address_of_mInjectedFrameIdx_16() { return &___mInjectedFrameIdx_16; }
	inline void set_mInjectedFrameIdx_16(int32_t value)
	{
		___mInjectedFrameIdx_16 = value;
	}

	inline static int32_t get_offset_of_mLastProcessedFrameStatePtr_17() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t3289840897, ___mLastProcessedFrameStatePtr_17)); }
	inline IntPtr_t get_mLastProcessedFrameStatePtr_17() const { return ___mLastProcessedFrameStatePtr_17; }
	inline IntPtr_t* get_address_of_mLastProcessedFrameStatePtr_17() { return &___mLastProcessedFrameStatePtr_17; }
	inline void set_mLastProcessedFrameStatePtr_17(IntPtr_t value)
	{
		___mLastProcessedFrameStatePtr_17 = value;
	}

	inline static int32_t get_offset_of_mInitialized_18() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t3289840897, ___mInitialized_18)); }
	inline bool get_mInitialized_18() const { return ___mInitialized_18; }
	inline bool* get_address_of_mInitialized_18() { return &___mInitialized_18; }
	inline void set_mInitialized_18(bool value)
	{
		___mInitialized_18 = value;
	}

	inline static int32_t get_offset_of_mPaused_19() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t3289840897, ___mPaused_19)); }
	inline bool get_mPaused_19() const { return ___mPaused_19; }
	inline bool* get_address_of_mPaused_19() { return &___mPaused_19; }
	inline void set_mPaused_19(bool value)
	{
		___mPaused_19 = value;
	}

	inline static int32_t get_offset_of_mFrameState_20() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t3289840897, ___mFrameState_20)); }
	inline FrameState_t3635099966  get_mFrameState_20() const { return ___mFrameState_20; }
	inline FrameState_t3635099966 * get_address_of_mFrameState_20() { return &___mFrameState_20; }
	inline void set_mFrameState_20(FrameState_t3635099966  value)
	{
		___mFrameState_20 = value;
	}

	inline static int32_t get_offset_of_mAutoRotationState_21() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t3289840897, ___mAutoRotationState_21)); }
	inline AutoRotationState_t3090691518  get_mAutoRotationState_21() const { return ___mAutoRotationState_21; }
	inline AutoRotationState_t3090691518 * get_address_of_mAutoRotationState_21() { return &___mAutoRotationState_21; }
	inline void set_mAutoRotationState_21(AutoRotationState_t3090691518  value)
	{
		___mAutoRotationState_21 = value;
	}

	inline static int32_t get_offset_of_mVideoBackgroundNeedsRedrawing_22() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t3289840897, ___mVideoBackgroundNeedsRedrawing_22)); }
	inline bool get_mVideoBackgroundNeedsRedrawing_22() const { return ___mVideoBackgroundNeedsRedrawing_22; }
	inline bool* get_address_of_mVideoBackgroundNeedsRedrawing_22() { return &___mVideoBackgroundNeedsRedrawing_22; }
	inline void set_mVideoBackgroundNeedsRedrawing_22(bool value)
	{
		___mVideoBackgroundNeedsRedrawing_22 = value;
	}

	inline static int32_t get_offset_of_mDiscardStatesForRendering_23() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t3289840897, ___mDiscardStatesForRendering_23)); }
	inline int32_t get_mDiscardStatesForRendering_23() const { return ___mDiscardStatesForRendering_23; }
	inline int32_t* get_address_of_mDiscardStatesForRendering_23() { return &___mDiscardStatesForRendering_23; }
	inline void set_mDiscardStatesForRendering_23(int32_t value)
	{
		___mDiscardStatesForRendering_23 = value;
	}

	inline static int32_t get_offset_of_mLastFrameIdx_24() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t3289840897, ___mLastFrameIdx_24)); }
	inline int32_t get_mLastFrameIdx_24() const { return ___mLastFrameIdx_24; }
	inline int32_t* get_address_of_mLastFrameIdx_24() { return &___mLastFrameIdx_24; }
	inline void set_mLastFrameIdx_24(int32_t value)
	{
		___mLastFrameIdx_24 = value;
	}

	inline static int32_t get_offset_of_mIsSeeThroughDevice_25() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t3289840897, ___mIsSeeThroughDevice_25)); }
	inline bool get_mIsSeeThroughDevice_25() const { return ___mIsSeeThroughDevice_25; }
	inline bool* get_address_of_mIsSeeThroughDevice_25() { return &___mIsSeeThroughDevice_25; }
	inline void set_mIsSeeThroughDevice_25(bool value)
	{
		___mIsSeeThroughDevice_25 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
