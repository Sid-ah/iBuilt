#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>
struct Dictionary_2_t371439919;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t405338302;
// System.Collections.Generic.Dictionary`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseInfo>
struct Dictionary_2_t2395898666;
// System.Collections.Generic.Dictionary`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.TrackableBehaviour/Status>
struct Dictionary_2_t997184670;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.HoloLensExtendedTrackingManager
struct  HoloLensExtendedTrackingManager_t3502001541  : public Il2CppObject
{
public:
	// System.Int32 Vuforia.HoloLensExtendedTrackingManager::mNumFramesStablePose
	int32_t ___mNumFramesStablePose_0;
	// System.Single Vuforia.HoloLensExtendedTrackingManager::mMaxPoseRelDistance
	float ___mMaxPoseRelDistance_1;
	// System.Single Vuforia.HoloLensExtendedTrackingManager::mMaxPoseAngleDiff
	float ___mMaxPoseAngleDiff_2;
	// System.Single Vuforia.HoloLensExtendedTrackingManager::mMaxCamPoseAbsDistance
	float ___mMaxCamPoseAbsDistance_3;
	// System.Single Vuforia.HoloLensExtendedTrackingManager::mMaxCamPoseAngleDiff
	float ___mMaxCamPoseAngleDiff_4;
	// System.Int32 Vuforia.HoloLensExtendedTrackingManager::mMinNumFramesPoseOff
	int32_t ___mMinNumFramesPoseOff_5;
	// System.Single Vuforia.HoloLensExtendedTrackingManager::mMinPoseUpdateRelDistance
	float ___mMinPoseUpdateRelDistance_6;
	// System.Single Vuforia.HoloLensExtendedTrackingManager::mMinPoseUpdateAngleDiff
	float ___mMinPoseUpdateAngleDiff_7;
	// System.Single Vuforia.HoloLensExtendedTrackingManager::mTrackableSizeInViewThreshold
	float ___mTrackableSizeInViewThreshold_8;
	// System.Single Vuforia.HoloLensExtendedTrackingManager::mMaxDistanceFromViewCenterForPoseUpdate
	float ___mMaxDistanceFromViewCenterForPoseUpdate_9;
	// System.Boolean Vuforia.HoloLensExtendedTrackingManager::mSetWorldAnchors
	bool ___mSetWorldAnchors_10;
	// System.Collections.Generic.Dictionary`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry> Vuforia.HoloLensExtendedTrackingManager::mTrackingList
	Dictionary_2_t371439919 * ___mTrackingList_11;
	// System.Collections.Generic.HashSet`1<System.Int32> Vuforia.HoloLensExtendedTrackingManager::mTrackablesExtendedTrackingEnabled
	HashSet_1_t405338302 * ___mTrackablesExtendedTrackingEnabled_12;
	// System.Collections.Generic.Dictionary`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseInfo> Vuforia.HoloLensExtendedTrackingManager::mTrackablesCurrentlyExtendedTracked
	Dictionary_2_t2395898666 * ___mTrackablesCurrentlyExtendedTracked_13;
	// System.Collections.Generic.Dictionary`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.TrackableBehaviour/Status> Vuforia.HoloLensExtendedTrackingManager::mExtendedTrackablesState
	Dictionary_2_t997184670 * ___mExtendedTrackablesState_14;

public:
	inline static int32_t get_offset_of_mNumFramesStablePose_0() { return static_cast<int32_t>(offsetof(HoloLensExtendedTrackingManager_t3502001541, ___mNumFramesStablePose_0)); }
	inline int32_t get_mNumFramesStablePose_0() const { return ___mNumFramesStablePose_0; }
	inline int32_t* get_address_of_mNumFramesStablePose_0() { return &___mNumFramesStablePose_0; }
	inline void set_mNumFramesStablePose_0(int32_t value)
	{
		___mNumFramesStablePose_0 = value;
	}

	inline static int32_t get_offset_of_mMaxPoseRelDistance_1() { return static_cast<int32_t>(offsetof(HoloLensExtendedTrackingManager_t3502001541, ___mMaxPoseRelDistance_1)); }
	inline float get_mMaxPoseRelDistance_1() const { return ___mMaxPoseRelDistance_1; }
	inline float* get_address_of_mMaxPoseRelDistance_1() { return &___mMaxPoseRelDistance_1; }
	inline void set_mMaxPoseRelDistance_1(float value)
	{
		___mMaxPoseRelDistance_1 = value;
	}

	inline static int32_t get_offset_of_mMaxPoseAngleDiff_2() { return static_cast<int32_t>(offsetof(HoloLensExtendedTrackingManager_t3502001541, ___mMaxPoseAngleDiff_2)); }
	inline float get_mMaxPoseAngleDiff_2() const { return ___mMaxPoseAngleDiff_2; }
	inline float* get_address_of_mMaxPoseAngleDiff_2() { return &___mMaxPoseAngleDiff_2; }
	inline void set_mMaxPoseAngleDiff_2(float value)
	{
		___mMaxPoseAngleDiff_2 = value;
	}

	inline static int32_t get_offset_of_mMaxCamPoseAbsDistance_3() { return static_cast<int32_t>(offsetof(HoloLensExtendedTrackingManager_t3502001541, ___mMaxCamPoseAbsDistance_3)); }
	inline float get_mMaxCamPoseAbsDistance_3() const { return ___mMaxCamPoseAbsDistance_3; }
	inline float* get_address_of_mMaxCamPoseAbsDistance_3() { return &___mMaxCamPoseAbsDistance_3; }
	inline void set_mMaxCamPoseAbsDistance_3(float value)
	{
		___mMaxCamPoseAbsDistance_3 = value;
	}

	inline static int32_t get_offset_of_mMaxCamPoseAngleDiff_4() { return static_cast<int32_t>(offsetof(HoloLensExtendedTrackingManager_t3502001541, ___mMaxCamPoseAngleDiff_4)); }
	inline float get_mMaxCamPoseAngleDiff_4() const { return ___mMaxCamPoseAngleDiff_4; }
	inline float* get_address_of_mMaxCamPoseAngleDiff_4() { return &___mMaxCamPoseAngleDiff_4; }
	inline void set_mMaxCamPoseAngleDiff_4(float value)
	{
		___mMaxCamPoseAngleDiff_4 = value;
	}

	inline static int32_t get_offset_of_mMinNumFramesPoseOff_5() { return static_cast<int32_t>(offsetof(HoloLensExtendedTrackingManager_t3502001541, ___mMinNumFramesPoseOff_5)); }
	inline int32_t get_mMinNumFramesPoseOff_5() const { return ___mMinNumFramesPoseOff_5; }
	inline int32_t* get_address_of_mMinNumFramesPoseOff_5() { return &___mMinNumFramesPoseOff_5; }
	inline void set_mMinNumFramesPoseOff_5(int32_t value)
	{
		___mMinNumFramesPoseOff_5 = value;
	}

	inline static int32_t get_offset_of_mMinPoseUpdateRelDistance_6() { return static_cast<int32_t>(offsetof(HoloLensExtendedTrackingManager_t3502001541, ___mMinPoseUpdateRelDistance_6)); }
	inline float get_mMinPoseUpdateRelDistance_6() const { return ___mMinPoseUpdateRelDistance_6; }
	inline float* get_address_of_mMinPoseUpdateRelDistance_6() { return &___mMinPoseUpdateRelDistance_6; }
	inline void set_mMinPoseUpdateRelDistance_6(float value)
	{
		___mMinPoseUpdateRelDistance_6 = value;
	}

	inline static int32_t get_offset_of_mMinPoseUpdateAngleDiff_7() { return static_cast<int32_t>(offsetof(HoloLensExtendedTrackingManager_t3502001541, ___mMinPoseUpdateAngleDiff_7)); }
	inline float get_mMinPoseUpdateAngleDiff_7() const { return ___mMinPoseUpdateAngleDiff_7; }
	inline float* get_address_of_mMinPoseUpdateAngleDiff_7() { return &___mMinPoseUpdateAngleDiff_7; }
	inline void set_mMinPoseUpdateAngleDiff_7(float value)
	{
		___mMinPoseUpdateAngleDiff_7 = value;
	}

	inline static int32_t get_offset_of_mTrackableSizeInViewThreshold_8() { return static_cast<int32_t>(offsetof(HoloLensExtendedTrackingManager_t3502001541, ___mTrackableSizeInViewThreshold_8)); }
	inline float get_mTrackableSizeInViewThreshold_8() const { return ___mTrackableSizeInViewThreshold_8; }
	inline float* get_address_of_mTrackableSizeInViewThreshold_8() { return &___mTrackableSizeInViewThreshold_8; }
	inline void set_mTrackableSizeInViewThreshold_8(float value)
	{
		___mTrackableSizeInViewThreshold_8 = value;
	}

	inline static int32_t get_offset_of_mMaxDistanceFromViewCenterForPoseUpdate_9() { return static_cast<int32_t>(offsetof(HoloLensExtendedTrackingManager_t3502001541, ___mMaxDistanceFromViewCenterForPoseUpdate_9)); }
	inline float get_mMaxDistanceFromViewCenterForPoseUpdate_9() const { return ___mMaxDistanceFromViewCenterForPoseUpdate_9; }
	inline float* get_address_of_mMaxDistanceFromViewCenterForPoseUpdate_9() { return &___mMaxDistanceFromViewCenterForPoseUpdate_9; }
	inline void set_mMaxDistanceFromViewCenterForPoseUpdate_9(float value)
	{
		___mMaxDistanceFromViewCenterForPoseUpdate_9 = value;
	}

	inline static int32_t get_offset_of_mSetWorldAnchors_10() { return static_cast<int32_t>(offsetof(HoloLensExtendedTrackingManager_t3502001541, ___mSetWorldAnchors_10)); }
	inline bool get_mSetWorldAnchors_10() const { return ___mSetWorldAnchors_10; }
	inline bool* get_address_of_mSetWorldAnchors_10() { return &___mSetWorldAnchors_10; }
	inline void set_mSetWorldAnchors_10(bool value)
	{
		___mSetWorldAnchors_10 = value;
	}

	inline static int32_t get_offset_of_mTrackingList_11() { return static_cast<int32_t>(offsetof(HoloLensExtendedTrackingManager_t3502001541, ___mTrackingList_11)); }
	inline Dictionary_2_t371439919 * get_mTrackingList_11() const { return ___mTrackingList_11; }
	inline Dictionary_2_t371439919 ** get_address_of_mTrackingList_11() { return &___mTrackingList_11; }
	inline void set_mTrackingList_11(Dictionary_2_t371439919 * value)
	{
		___mTrackingList_11 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackingList_11, value);
	}

	inline static int32_t get_offset_of_mTrackablesExtendedTrackingEnabled_12() { return static_cast<int32_t>(offsetof(HoloLensExtendedTrackingManager_t3502001541, ___mTrackablesExtendedTrackingEnabled_12)); }
	inline HashSet_1_t405338302 * get_mTrackablesExtendedTrackingEnabled_12() const { return ___mTrackablesExtendedTrackingEnabled_12; }
	inline HashSet_1_t405338302 ** get_address_of_mTrackablesExtendedTrackingEnabled_12() { return &___mTrackablesExtendedTrackingEnabled_12; }
	inline void set_mTrackablesExtendedTrackingEnabled_12(HashSet_1_t405338302 * value)
	{
		___mTrackablesExtendedTrackingEnabled_12 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackablesExtendedTrackingEnabled_12, value);
	}

	inline static int32_t get_offset_of_mTrackablesCurrentlyExtendedTracked_13() { return static_cast<int32_t>(offsetof(HoloLensExtendedTrackingManager_t3502001541, ___mTrackablesCurrentlyExtendedTracked_13)); }
	inline Dictionary_2_t2395898666 * get_mTrackablesCurrentlyExtendedTracked_13() const { return ___mTrackablesCurrentlyExtendedTracked_13; }
	inline Dictionary_2_t2395898666 ** get_address_of_mTrackablesCurrentlyExtendedTracked_13() { return &___mTrackablesCurrentlyExtendedTracked_13; }
	inline void set_mTrackablesCurrentlyExtendedTracked_13(Dictionary_2_t2395898666 * value)
	{
		___mTrackablesCurrentlyExtendedTracked_13 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackablesCurrentlyExtendedTracked_13, value);
	}

	inline static int32_t get_offset_of_mExtendedTrackablesState_14() { return static_cast<int32_t>(offsetof(HoloLensExtendedTrackingManager_t3502001541, ___mExtendedTrackablesState_14)); }
	inline Dictionary_2_t997184670 * get_mExtendedTrackablesState_14() const { return ___mExtendedTrackablesState_14; }
	inline Dictionary_2_t997184670 ** get_address_of_mExtendedTrackablesState_14() { return &___mExtendedTrackablesState_14; }
	inline void set_mExtendedTrackablesState_14(Dictionary_2_t997184670 * value)
	{
		___mExtendedTrackablesState_14 = value;
		Il2CppCodeGenWriteBarrier(&___mExtendedTrackablesState_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
