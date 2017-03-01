#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t1779888572;
// System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>
struct List_1_t2369737851;
// System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>
struct List_1_t2978368948;
// System.Action
struct Action_t3226471752;
// System.Action`1<System.Boolean>
struct Action_1_t3627374100;
// Vuforia.ICameraConfiguration
struct ICameraConfiguration_t2507317352;
// Vuforia.DigitalEyewearARController
struct DigitalEyewearARController_t1398758191;
// Vuforia.VideoBackgroundManager
struct VideoBackgroundManager_t3515346924;
// UnityEngine.Material
struct Material_t193706927;
// System.Collections.Generic.List`1<System.Type>
struct List_1_t672924358;
// Vuforia.VuforiaARController
struct VuforiaARController_t4061728485;
// System.Object
struct Il2CppObject;

#include "Vuforia_UnityExtensions_Vuforia_ARController2638793709.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Camer2705300828.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Camer1654543970.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vi4106934884.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaARControlle3506117492.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaARController
struct  VuforiaARController_t4061728485  : public ARController_t2638793709
{
public:
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.VuforiaARController::CameraDeviceModeSetting
	int32_t ___CameraDeviceModeSetting_1;
	// System.Int32 Vuforia.VuforiaARController::MaxSimultaneousImageTargets
	int32_t ___MaxSimultaneousImageTargets_2;
	// System.Int32 Vuforia.VuforiaARController::MaxSimultaneousObjectTargets
	int32_t ___MaxSimultaneousObjectTargets_3;
	// System.Boolean Vuforia.VuforiaARController::UseDelayedLoadingObjectTargets
	bool ___UseDelayedLoadingObjectTargets_4;
	// Vuforia.CameraDevice/CameraDirection Vuforia.VuforiaARController::CameraDirection
	int32_t ___CameraDirection_5;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaARController::MirrorVideoBackground
	int32_t ___MirrorVideoBackground_6;
	// Vuforia.VuforiaARController/WorldCenterMode Vuforia.VuforiaARController::mWorldCenterMode
	int32_t ___mWorldCenterMode_7;
	// Vuforia.TrackableBehaviour Vuforia.VuforiaARController::mWorldCenter
	TrackableBehaviour_t1779888572 * ___mWorldCenter_8;
	// System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler> Vuforia.VuforiaARController::mTrackerEventHandlers
	List_1_t2369737851 * ___mTrackerEventHandlers_9;
	// System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler> Vuforia.VuforiaARController::mVideoBgEventHandlers
	List_1_t2978368948 * ___mVideoBgEventHandlers_10;
	// System.Action Vuforia.VuforiaARController::mOnVuforiaInitialized
	Action_t3226471752 * ___mOnVuforiaInitialized_11;
	// System.Action Vuforia.VuforiaARController::mOnVuforiaStarted
	Action_t3226471752 * ___mOnVuforiaStarted_12;
	// System.Action Vuforia.VuforiaARController::mOnVuforiaDeinitialized
	Action_t3226471752 * ___mOnVuforiaDeinitialized_13;
	// System.Action Vuforia.VuforiaARController::mOnTrackablesUpdated
	Action_t3226471752 * ___mOnTrackablesUpdated_14;
	// System.Action Vuforia.VuforiaARController::mRenderOnUpdate
	Action_t3226471752 * ___mRenderOnUpdate_15;
	// System.Action`1<System.Boolean> Vuforia.VuforiaARController::mOnPause
	Action_1_t3627374100 * ___mOnPause_16;
	// System.Boolean Vuforia.VuforiaARController::mPaused
	bool ___mPaused_17;
	// System.Action Vuforia.VuforiaARController::mOnBackgroundTextureChanged
	Action_t3226471752 * ___mOnBackgroundTextureChanged_18;
	// System.Boolean Vuforia.VuforiaARController::mStartHasBeenInvoked
	bool ___mStartHasBeenInvoked_19;
	// System.Boolean Vuforia.VuforiaARController::mHasStarted
	bool ___mHasStarted_20;
	// System.Boolean Vuforia.VuforiaARController::mBackgroundTextureHasChanged
	bool ___mBackgroundTextureHasChanged_21;
	// Vuforia.ICameraConfiguration Vuforia.VuforiaARController::mCameraConfiguration
	Il2CppObject * ___mCameraConfiguration_22;
	// Vuforia.DigitalEyewearARController Vuforia.VuforiaARController::mEyewearBehaviour
	DigitalEyewearARController_t1398758191 * ___mEyewearBehaviour_23;
	// Vuforia.VideoBackgroundManager Vuforia.VuforiaARController::mVideoBackgroundMgr
	VideoBackgroundManager_t3515346924 * ___mVideoBackgroundMgr_24;
	// System.Boolean Vuforia.VuforiaARController::mCheckStopCamera
	bool ___mCheckStopCamera_25;
	// UnityEngine.Material Vuforia.VuforiaARController::mClearMaterial
	Material_t193706927 * ___mClearMaterial_26;
	// System.Boolean Vuforia.VuforiaARController::mMetalRendering
	bool ___mMetalRendering_27;
	// System.Boolean Vuforia.VuforiaARController::mHasStartedOnce
	bool ___mHasStartedOnce_28;
	// System.Boolean Vuforia.VuforiaARController::mWasEnabledBeforePause
	bool ___mWasEnabledBeforePause_29;
	// System.Boolean Vuforia.VuforiaARController::mObjectTrackerWasActiveBeforePause
	bool ___mObjectTrackerWasActiveBeforePause_30;
	// System.Boolean Vuforia.VuforiaARController::mObjectTrackerWasActiveBeforeDisabling
	bool ___mObjectTrackerWasActiveBeforeDisabling_31;
	// System.Int32 Vuforia.VuforiaARController::mLastUpdatedFrame
	int32_t ___mLastUpdatedFrame_32;
	// System.Collections.Generic.List`1<System.Type> Vuforia.VuforiaARController::mTrackersRequestedToDeinit
	List_1_t672924358 * ___mTrackersRequestedToDeinit_33;
	// System.Boolean Vuforia.VuforiaARController::mMissedToApplyLeftProjectionMatrix
	bool ___mMissedToApplyLeftProjectionMatrix_34;
	// System.Boolean Vuforia.VuforiaARController::mMissedToApplyRightProjectionMatrix
	bool ___mMissedToApplyRightProjectionMatrix_35;
	// UnityEngine.Matrix4x4 Vuforia.VuforiaARController::mLeftProjectMatrixToApply
	Matrix4x4_t2933234003  ___mLeftProjectMatrixToApply_36;
	// UnityEngine.Matrix4x4 Vuforia.VuforiaARController::mRightProjectMatrixToApply
	Matrix4x4_t2933234003  ___mRightProjectMatrixToApply_37;

public:
	inline static int32_t get_offset_of_CameraDeviceModeSetting_1() { return static_cast<int32_t>(offsetof(VuforiaARController_t4061728485, ___CameraDeviceModeSetting_1)); }
	inline int32_t get_CameraDeviceModeSetting_1() const { return ___CameraDeviceModeSetting_1; }
	inline int32_t* get_address_of_CameraDeviceModeSetting_1() { return &___CameraDeviceModeSetting_1; }
	inline void set_CameraDeviceModeSetting_1(int32_t value)
	{
		___CameraDeviceModeSetting_1 = value;
	}

	inline static int32_t get_offset_of_MaxSimultaneousImageTargets_2() { return static_cast<int32_t>(offsetof(VuforiaARController_t4061728485, ___MaxSimultaneousImageTargets_2)); }
	inline int32_t get_MaxSimultaneousImageTargets_2() const { return ___MaxSimultaneousImageTargets_2; }
	inline int32_t* get_address_of_MaxSimultaneousImageTargets_2() { return &___MaxSimultaneousImageTargets_2; }
	inline void set_MaxSimultaneousImageTargets_2(int32_t value)
	{
		___MaxSimultaneousImageTargets_2 = value;
	}

	inline static int32_t get_offset_of_MaxSimultaneousObjectTargets_3() { return static_cast<int32_t>(offsetof(VuforiaARController_t4061728485, ___MaxSimultaneousObjectTargets_3)); }
	inline int32_t get_MaxSimultaneousObjectTargets_3() const { return ___MaxSimultaneousObjectTargets_3; }
	inline int32_t* get_address_of_MaxSimultaneousObjectTargets_3() { return &___MaxSimultaneousObjectTargets_3; }
	inline void set_MaxSimultaneousObjectTargets_3(int32_t value)
	{
		___MaxSimultaneousObjectTargets_3 = value;
	}

	inline static int32_t get_offset_of_UseDelayedLoadingObjectTargets_4() { return static_cast<int32_t>(offsetof(VuforiaARController_t4061728485, ___UseDelayedLoadingObjectTargets_4)); }
	inline bool get_UseDelayedLoadingObjectTargets_4() const { return ___UseDelayedLoadingObjectTargets_4; }
	inline bool* get_address_of_UseDelayedLoadingObjectTargets_4() { return &___UseDelayedLoadingObjectTargets_4; }
	inline void set_UseDelayedLoadingObjectTargets_4(bool value)
	{
		___UseDelayedLoadingObjectTargets_4 = value;
	}

	inline static int32_t get_offset_of_CameraDirection_5() { return static_cast<int32_t>(offsetof(VuforiaARController_t4061728485, ___CameraDirection_5)); }
	inline int32_t get_CameraDirection_5() const { return ___CameraDirection_5; }
	inline int32_t* get_address_of_CameraDirection_5() { return &___CameraDirection_5; }
	inline void set_CameraDirection_5(int32_t value)
	{
		___CameraDirection_5 = value;
	}

	inline static int32_t get_offset_of_MirrorVideoBackground_6() { return static_cast<int32_t>(offsetof(VuforiaARController_t4061728485, ___MirrorVideoBackground_6)); }
	inline int32_t get_MirrorVideoBackground_6() const { return ___MirrorVideoBackground_6; }
	inline int32_t* get_address_of_MirrorVideoBackground_6() { return &___MirrorVideoBackground_6; }
	inline void set_MirrorVideoBackground_6(int32_t value)
	{
		___MirrorVideoBackground_6 = value;
	}

	inline static int32_t get_offset_of_mWorldCenterMode_7() { return static_cast<int32_t>(offsetof(VuforiaARController_t4061728485, ___mWorldCenterMode_7)); }
	inline int32_t get_mWorldCenterMode_7() const { return ___mWorldCenterMode_7; }
	inline int32_t* get_address_of_mWorldCenterMode_7() { return &___mWorldCenterMode_7; }
	inline void set_mWorldCenterMode_7(int32_t value)
	{
		___mWorldCenterMode_7 = value;
	}

	inline static int32_t get_offset_of_mWorldCenter_8() { return static_cast<int32_t>(offsetof(VuforiaARController_t4061728485, ___mWorldCenter_8)); }
	inline TrackableBehaviour_t1779888572 * get_mWorldCenter_8() const { return ___mWorldCenter_8; }
	inline TrackableBehaviour_t1779888572 ** get_address_of_mWorldCenter_8() { return &___mWorldCenter_8; }
	inline void set_mWorldCenter_8(TrackableBehaviour_t1779888572 * value)
	{
		___mWorldCenter_8 = value;
		Il2CppCodeGenWriteBarrier(&___mWorldCenter_8, value);
	}

	inline static int32_t get_offset_of_mTrackerEventHandlers_9() { return static_cast<int32_t>(offsetof(VuforiaARController_t4061728485, ___mTrackerEventHandlers_9)); }
	inline List_1_t2369737851 * get_mTrackerEventHandlers_9() const { return ___mTrackerEventHandlers_9; }
	inline List_1_t2369737851 ** get_address_of_mTrackerEventHandlers_9() { return &___mTrackerEventHandlers_9; }
	inline void set_mTrackerEventHandlers_9(List_1_t2369737851 * value)
	{
		___mTrackerEventHandlers_9 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackerEventHandlers_9, value);
	}

	inline static int32_t get_offset_of_mVideoBgEventHandlers_10() { return static_cast<int32_t>(offsetof(VuforiaARController_t4061728485, ___mVideoBgEventHandlers_10)); }
	inline List_1_t2978368948 * get_mVideoBgEventHandlers_10() const { return ___mVideoBgEventHandlers_10; }
	inline List_1_t2978368948 ** get_address_of_mVideoBgEventHandlers_10() { return &___mVideoBgEventHandlers_10; }
	inline void set_mVideoBgEventHandlers_10(List_1_t2978368948 * value)
	{
		___mVideoBgEventHandlers_10 = value;
		Il2CppCodeGenWriteBarrier(&___mVideoBgEventHandlers_10, value);
	}

	inline static int32_t get_offset_of_mOnVuforiaInitialized_11() { return static_cast<int32_t>(offsetof(VuforiaARController_t4061728485, ___mOnVuforiaInitialized_11)); }
	inline Action_t3226471752 * get_mOnVuforiaInitialized_11() const { return ___mOnVuforiaInitialized_11; }
	inline Action_t3226471752 ** get_address_of_mOnVuforiaInitialized_11() { return &___mOnVuforiaInitialized_11; }
	inline void set_mOnVuforiaInitialized_11(Action_t3226471752 * value)
	{
		___mOnVuforiaInitialized_11 = value;
		Il2CppCodeGenWriteBarrier(&___mOnVuforiaInitialized_11, value);
	}

	inline static int32_t get_offset_of_mOnVuforiaStarted_12() { return static_cast<int32_t>(offsetof(VuforiaARController_t4061728485, ___mOnVuforiaStarted_12)); }
	inline Action_t3226471752 * get_mOnVuforiaStarted_12() const { return ___mOnVuforiaStarted_12; }
	inline Action_t3226471752 ** get_address_of_mOnVuforiaStarted_12() { return &___mOnVuforiaStarted_12; }
	inline void set_mOnVuforiaStarted_12(Action_t3226471752 * value)
	{
		___mOnVuforiaStarted_12 = value;
		Il2CppCodeGenWriteBarrier(&___mOnVuforiaStarted_12, value);
	}

	inline static int32_t get_offset_of_mOnVuforiaDeinitialized_13() { return static_cast<int32_t>(offsetof(VuforiaARController_t4061728485, ___mOnVuforiaDeinitialized_13)); }
	inline Action_t3226471752 * get_mOnVuforiaDeinitialized_13() const { return ___mOnVuforiaDeinitialized_13; }
	inline Action_t3226471752 ** get_address_of_mOnVuforiaDeinitialized_13() { return &___mOnVuforiaDeinitialized_13; }
	inline void set_mOnVuforiaDeinitialized_13(Action_t3226471752 * value)
	{
		___mOnVuforiaDeinitialized_13 = value;
		Il2CppCodeGenWriteBarrier(&___mOnVuforiaDeinitialized_13, value);
	}

	inline static int32_t get_offset_of_mOnTrackablesUpdated_14() { return static_cast<int32_t>(offsetof(VuforiaARController_t4061728485, ___mOnTrackablesUpdated_14)); }
	inline Action_t3226471752 * get_mOnTrackablesUpdated_14() const { return ___mOnTrackablesUpdated_14; }
	inline Action_t3226471752 ** get_address_of_mOnTrackablesUpdated_14() { return &___mOnTrackablesUpdated_14; }
	inline void set_mOnTrackablesUpdated_14(Action_t3226471752 * value)
	{
		___mOnTrackablesUpdated_14 = value;
		Il2CppCodeGenWriteBarrier(&___mOnTrackablesUpdated_14, value);
	}

	inline static int32_t get_offset_of_mRenderOnUpdate_15() { return static_cast<int32_t>(offsetof(VuforiaARController_t4061728485, ___mRenderOnUpdate_15)); }
	inline Action_t3226471752 * get_mRenderOnUpdate_15() const { return ___mRenderOnUpdate_15; }
	inline Action_t3226471752 ** get_address_of_mRenderOnUpdate_15() { return &___mRenderOnUpdate_15; }
	inline void set_mRenderOnUpdate_15(Action_t3226471752 * value)
	{
		___mRenderOnUpdate_15 = value;
		Il2CppCodeGenWriteBarrier(&___mRenderOnUpdate_15, value);
	}

	inline static int32_t get_offset_of_mOnPause_16() { return static_cast<int32_t>(offsetof(VuforiaARController_t4061728485, ___mOnPause_16)); }
	inline Action_1_t3627374100 * get_mOnPause_16() const { return ___mOnPause_16; }
	inline Action_1_t3627374100 ** get_address_of_mOnPause_16() { return &___mOnPause_16; }
	inline void set_mOnPause_16(Action_1_t3627374100 * value)
	{
		___mOnPause_16 = value;
		Il2CppCodeGenWriteBarrier(&___mOnPause_16, value);
	}

	inline static int32_t get_offset_of_mPaused_17() { return static_cast<int32_t>(offsetof(VuforiaARController_t4061728485, ___mPaused_17)); }
	inline bool get_mPaused_17() const { return ___mPaused_17; }
	inline bool* get_address_of_mPaused_17() { return &___mPaused_17; }
	inline void set_mPaused_17(bool value)
	{
		___mPaused_17 = value;
	}

	inline static int32_t get_offset_of_mOnBackgroundTextureChanged_18() { return static_cast<int32_t>(offsetof(VuforiaARController_t4061728485, ___mOnBackgroundTextureChanged_18)); }
	inline Action_t3226471752 * get_mOnBackgroundTextureChanged_18() const { return ___mOnBackgroundTextureChanged_18; }
	inline Action_t3226471752 ** get_address_of_mOnBackgroundTextureChanged_18() { return &___mOnBackgroundTextureChanged_18; }
	inline void set_mOnBackgroundTextureChanged_18(Action_t3226471752 * value)
	{
		___mOnBackgroundTextureChanged_18 = value;
		Il2CppCodeGenWriteBarrier(&___mOnBackgroundTextureChanged_18, value);
	}

	inline static int32_t get_offset_of_mStartHasBeenInvoked_19() { return static_cast<int32_t>(offsetof(VuforiaARController_t4061728485, ___mStartHasBeenInvoked_19)); }
	inline bool get_mStartHasBeenInvoked_19() const { return ___mStartHasBeenInvoked_19; }
	inline bool* get_address_of_mStartHasBeenInvoked_19() { return &___mStartHasBeenInvoked_19; }
	inline void set_mStartHasBeenInvoked_19(bool value)
	{
		___mStartHasBeenInvoked_19 = value;
	}

	inline static int32_t get_offset_of_mHasStarted_20() { return static_cast<int32_t>(offsetof(VuforiaARController_t4061728485, ___mHasStarted_20)); }
	inline bool get_mHasStarted_20() const { return ___mHasStarted_20; }
	inline bool* get_address_of_mHasStarted_20() { return &___mHasStarted_20; }
	inline void set_mHasStarted_20(bool value)
	{
		___mHasStarted_20 = value;
	}

	inline static int32_t get_offset_of_mBackgroundTextureHasChanged_21() { return static_cast<int32_t>(offsetof(VuforiaARController_t4061728485, ___mBackgroundTextureHasChanged_21)); }
	inline bool get_mBackgroundTextureHasChanged_21() const { return ___mBackgroundTextureHasChanged_21; }
	inline bool* get_address_of_mBackgroundTextureHasChanged_21() { return &___mBackgroundTextureHasChanged_21; }
	inline void set_mBackgroundTextureHasChanged_21(bool value)
	{
		___mBackgroundTextureHasChanged_21 = value;
	}

	inline static int32_t get_offset_of_mCameraConfiguration_22() { return static_cast<int32_t>(offsetof(VuforiaARController_t4061728485, ___mCameraConfiguration_22)); }
	inline Il2CppObject * get_mCameraConfiguration_22() const { return ___mCameraConfiguration_22; }
	inline Il2CppObject ** get_address_of_mCameraConfiguration_22() { return &___mCameraConfiguration_22; }
	inline void set_mCameraConfiguration_22(Il2CppObject * value)
	{
		___mCameraConfiguration_22 = value;
		Il2CppCodeGenWriteBarrier(&___mCameraConfiguration_22, value);
	}

	inline static int32_t get_offset_of_mEyewearBehaviour_23() { return static_cast<int32_t>(offsetof(VuforiaARController_t4061728485, ___mEyewearBehaviour_23)); }
	inline DigitalEyewearARController_t1398758191 * get_mEyewearBehaviour_23() const { return ___mEyewearBehaviour_23; }
	inline DigitalEyewearARController_t1398758191 ** get_address_of_mEyewearBehaviour_23() { return &___mEyewearBehaviour_23; }
	inline void set_mEyewearBehaviour_23(DigitalEyewearARController_t1398758191 * value)
	{
		___mEyewearBehaviour_23 = value;
		Il2CppCodeGenWriteBarrier(&___mEyewearBehaviour_23, value);
	}

	inline static int32_t get_offset_of_mVideoBackgroundMgr_24() { return static_cast<int32_t>(offsetof(VuforiaARController_t4061728485, ___mVideoBackgroundMgr_24)); }
	inline VideoBackgroundManager_t3515346924 * get_mVideoBackgroundMgr_24() const { return ___mVideoBackgroundMgr_24; }
	inline VideoBackgroundManager_t3515346924 ** get_address_of_mVideoBackgroundMgr_24() { return &___mVideoBackgroundMgr_24; }
	inline void set_mVideoBackgroundMgr_24(VideoBackgroundManager_t3515346924 * value)
	{
		___mVideoBackgroundMgr_24 = value;
		Il2CppCodeGenWriteBarrier(&___mVideoBackgroundMgr_24, value);
	}

	inline static int32_t get_offset_of_mCheckStopCamera_25() { return static_cast<int32_t>(offsetof(VuforiaARController_t4061728485, ___mCheckStopCamera_25)); }
	inline bool get_mCheckStopCamera_25() const { return ___mCheckStopCamera_25; }
	inline bool* get_address_of_mCheckStopCamera_25() { return &___mCheckStopCamera_25; }
	inline void set_mCheckStopCamera_25(bool value)
	{
		___mCheckStopCamera_25 = value;
	}

	inline static int32_t get_offset_of_mClearMaterial_26() { return static_cast<int32_t>(offsetof(VuforiaARController_t4061728485, ___mClearMaterial_26)); }
	inline Material_t193706927 * get_mClearMaterial_26() const { return ___mClearMaterial_26; }
	inline Material_t193706927 ** get_address_of_mClearMaterial_26() { return &___mClearMaterial_26; }
	inline void set_mClearMaterial_26(Material_t193706927 * value)
	{
		___mClearMaterial_26 = value;
		Il2CppCodeGenWriteBarrier(&___mClearMaterial_26, value);
	}

	inline static int32_t get_offset_of_mMetalRendering_27() { return static_cast<int32_t>(offsetof(VuforiaARController_t4061728485, ___mMetalRendering_27)); }
	inline bool get_mMetalRendering_27() const { return ___mMetalRendering_27; }
	inline bool* get_address_of_mMetalRendering_27() { return &___mMetalRendering_27; }
	inline void set_mMetalRendering_27(bool value)
	{
		___mMetalRendering_27 = value;
	}

	inline static int32_t get_offset_of_mHasStartedOnce_28() { return static_cast<int32_t>(offsetof(VuforiaARController_t4061728485, ___mHasStartedOnce_28)); }
	inline bool get_mHasStartedOnce_28() const { return ___mHasStartedOnce_28; }
	inline bool* get_address_of_mHasStartedOnce_28() { return &___mHasStartedOnce_28; }
	inline void set_mHasStartedOnce_28(bool value)
	{
		___mHasStartedOnce_28 = value;
	}

	inline static int32_t get_offset_of_mWasEnabledBeforePause_29() { return static_cast<int32_t>(offsetof(VuforiaARController_t4061728485, ___mWasEnabledBeforePause_29)); }
	inline bool get_mWasEnabledBeforePause_29() const { return ___mWasEnabledBeforePause_29; }
	inline bool* get_address_of_mWasEnabledBeforePause_29() { return &___mWasEnabledBeforePause_29; }
	inline void set_mWasEnabledBeforePause_29(bool value)
	{
		___mWasEnabledBeforePause_29 = value;
	}

	inline static int32_t get_offset_of_mObjectTrackerWasActiveBeforePause_30() { return static_cast<int32_t>(offsetof(VuforiaARController_t4061728485, ___mObjectTrackerWasActiveBeforePause_30)); }
	inline bool get_mObjectTrackerWasActiveBeforePause_30() const { return ___mObjectTrackerWasActiveBeforePause_30; }
	inline bool* get_address_of_mObjectTrackerWasActiveBeforePause_30() { return &___mObjectTrackerWasActiveBeforePause_30; }
	inline void set_mObjectTrackerWasActiveBeforePause_30(bool value)
	{
		___mObjectTrackerWasActiveBeforePause_30 = value;
	}

	inline static int32_t get_offset_of_mObjectTrackerWasActiveBeforeDisabling_31() { return static_cast<int32_t>(offsetof(VuforiaARController_t4061728485, ___mObjectTrackerWasActiveBeforeDisabling_31)); }
	inline bool get_mObjectTrackerWasActiveBeforeDisabling_31() const { return ___mObjectTrackerWasActiveBeforeDisabling_31; }
	inline bool* get_address_of_mObjectTrackerWasActiveBeforeDisabling_31() { return &___mObjectTrackerWasActiveBeforeDisabling_31; }
	inline void set_mObjectTrackerWasActiveBeforeDisabling_31(bool value)
	{
		___mObjectTrackerWasActiveBeforeDisabling_31 = value;
	}

	inline static int32_t get_offset_of_mLastUpdatedFrame_32() { return static_cast<int32_t>(offsetof(VuforiaARController_t4061728485, ___mLastUpdatedFrame_32)); }
	inline int32_t get_mLastUpdatedFrame_32() const { return ___mLastUpdatedFrame_32; }
	inline int32_t* get_address_of_mLastUpdatedFrame_32() { return &___mLastUpdatedFrame_32; }
	inline void set_mLastUpdatedFrame_32(int32_t value)
	{
		___mLastUpdatedFrame_32 = value;
	}

	inline static int32_t get_offset_of_mTrackersRequestedToDeinit_33() { return static_cast<int32_t>(offsetof(VuforiaARController_t4061728485, ___mTrackersRequestedToDeinit_33)); }
	inline List_1_t672924358 * get_mTrackersRequestedToDeinit_33() const { return ___mTrackersRequestedToDeinit_33; }
	inline List_1_t672924358 ** get_address_of_mTrackersRequestedToDeinit_33() { return &___mTrackersRequestedToDeinit_33; }
	inline void set_mTrackersRequestedToDeinit_33(List_1_t672924358 * value)
	{
		___mTrackersRequestedToDeinit_33 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackersRequestedToDeinit_33, value);
	}

	inline static int32_t get_offset_of_mMissedToApplyLeftProjectionMatrix_34() { return static_cast<int32_t>(offsetof(VuforiaARController_t4061728485, ___mMissedToApplyLeftProjectionMatrix_34)); }
	inline bool get_mMissedToApplyLeftProjectionMatrix_34() const { return ___mMissedToApplyLeftProjectionMatrix_34; }
	inline bool* get_address_of_mMissedToApplyLeftProjectionMatrix_34() { return &___mMissedToApplyLeftProjectionMatrix_34; }
	inline void set_mMissedToApplyLeftProjectionMatrix_34(bool value)
	{
		___mMissedToApplyLeftProjectionMatrix_34 = value;
	}

	inline static int32_t get_offset_of_mMissedToApplyRightProjectionMatrix_35() { return static_cast<int32_t>(offsetof(VuforiaARController_t4061728485, ___mMissedToApplyRightProjectionMatrix_35)); }
	inline bool get_mMissedToApplyRightProjectionMatrix_35() const { return ___mMissedToApplyRightProjectionMatrix_35; }
	inline bool* get_address_of_mMissedToApplyRightProjectionMatrix_35() { return &___mMissedToApplyRightProjectionMatrix_35; }
	inline void set_mMissedToApplyRightProjectionMatrix_35(bool value)
	{
		___mMissedToApplyRightProjectionMatrix_35 = value;
	}

	inline static int32_t get_offset_of_mLeftProjectMatrixToApply_36() { return static_cast<int32_t>(offsetof(VuforiaARController_t4061728485, ___mLeftProjectMatrixToApply_36)); }
	inline Matrix4x4_t2933234003  get_mLeftProjectMatrixToApply_36() const { return ___mLeftProjectMatrixToApply_36; }
	inline Matrix4x4_t2933234003 * get_address_of_mLeftProjectMatrixToApply_36() { return &___mLeftProjectMatrixToApply_36; }
	inline void set_mLeftProjectMatrixToApply_36(Matrix4x4_t2933234003  value)
	{
		___mLeftProjectMatrixToApply_36 = value;
	}

	inline static int32_t get_offset_of_mRightProjectMatrixToApply_37() { return static_cast<int32_t>(offsetof(VuforiaARController_t4061728485, ___mRightProjectMatrixToApply_37)); }
	inline Matrix4x4_t2933234003  get_mRightProjectMatrixToApply_37() const { return ___mRightProjectMatrixToApply_37; }
	inline Matrix4x4_t2933234003 * get_address_of_mRightProjectMatrixToApply_37() { return &___mRightProjectMatrixToApply_37; }
	inline void set_mRightProjectMatrixToApply_37(Matrix4x4_t2933234003  value)
	{
		___mRightProjectMatrixToApply_37 = value;
	}
};

struct VuforiaARController_t4061728485_StaticFields
{
public:
	// Vuforia.VuforiaARController Vuforia.VuforiaARController::mInstance
	VuforiaARController_t4061728485 * ___mInstance_38;
	// System.Object Vuforia.VuforiaARController::mPadlock
	Il2CppObject * ___mPadlock_39;

public:
	inline static int32_t get_offset_of_mInstance_38() { return static_cast<int32_t>(offsetof(VuforiaARController_t4061728485_StaticFields, ___mInstance_38)); }
	inline VuforiaARController_t4061728485 * get_mInstance_38() const { return ___mInstance_38; }
	inline VuforiaARController_t4061728485 ** get_address_of_mInstance_38() { return &___mInstance_38; }
	inline void set_mInstance_38(VuforiaARController_t4061728485 * value)
	{
		___mInstance_38 = value;
		Il2CppCodeGenWriteBarrier(&___mInstance_38, value);
	}

	inline static int32_t get_offset_of_mPadlock_39() { return static_cast<int32_t>(offsetof(VuforiaARController_t4061728485_StaticFields, ___mPadlock_39)); }
	inline Il2CppObject * get_mPadlock_39() const { return ___mPadlock_39; }
	inline Il2CppObject ** get_address_of_mPadlock_39() { return &___mPadlock_39; }
	inline void set_mPadlock_39(Il2CppObject * value)
	{
		___mPadlock_39 = value;
		Il2CppCodeGenWriteBarrier(&___mPadlock_39, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
