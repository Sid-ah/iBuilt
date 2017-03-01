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
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Camera
struct Camera_t189460977;
// System.Action`1<Vuforia.VuforiaAbstractBehaviour>
struct Action_1_t3121670141;
// System.Action
struct Action_t3226471752;
// System.Action`1<System.Boolean>
struct Action_1_t3627374100;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaARControlle3506117492.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaAbstractBehaviour
struct  VuforiaAbstractBehaviour_t3319870759  : public MonoBehaviour_t1158329972
{
public:
	// Vuforia.VuforiaARController/WorldCenterMode Vuforia.VuforiaAbstractBehaviour::mWorldCenterMode
	int32_t ___mWorldCenterMode_2;
	// Vuforia.TrackableBehaviour Vuforia.VuforiaAbstractBehaviour::mWorldCenter
	TrackableBehaviour_t1779888572 * ___mWorldCenter_3;
	// UnityEngine.Transform Vuforia.VuforiaAbstractBehaviour::mCentralAnchorPoint
	Transform_t3275118058 * ___mCentralAnchorPoint_4;
	// UnityEngine.Transform Vuforia.VuforiaAbstractBehaviour::mParentAnchorPoint
	Transform_t3275118058 * ___mParentAnchorPoint_5;
	// UnityEngine.Camera Vuforia.VuforiaAbstractBehaviour::mPrimaryCamera
	Camera_t189460977 * ___mPrimaryCamera_6;
	// UnityEngine.Camera Vuforia.VuforiaAbstractBehaviour::mSecondaryCamera
	Camera_t189460977 * ___mSecondaryCamera_7;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mWereBindingFieldsExposed
	bool ___mWereBindingFieldsExposed_8;
	// System.Action Vuforia.VuforiaAbstractBehaviour::AwakeEvent
	Action_t3226471752 * ___AwakeEvent_11;
	// System.Action Vuforia.VuforiaAbstractBehaviour::OnEnableEvent
	Action_t3226471752 * ___OnEnableEvent_12;
	// System.Action Vuforia.VuforiaAbstractBehaviour::StartEvent
	Action_t3226471752 * ___StartEvent_13;
	// System.Action Vuforia.VuforiaAbstractBehaviour::UpdateEvent
	Action_t3226471752 * ___UpdateEvent_14;
	// System.Action Vuforia.VuforiaAbstractBehaviour::OnLevelWasLoadedEvent
	Action_t3226471752 * ___OnLevelWasLoadedEvent_15;
	// System.Action`1<System.Boolean> Vuforia.VuforiaAbstractBehaviour::OnApplicationPauseEvent
	Action_1_t3627374100 * ___OnApplicationPauseEvent_16;
	// System.Action Vuforia.VuforiaAbstractBehaviour::OnDisableEvent
	Action_t3226471752 * ___OnDisableEvent_17;
	// System.Action Vuforia.VuforiaAbstractBehaviour::OnDestroyEvent
	Action_t3226471752 * ___OnDestroyEvent_18;

public:
	inline static int32_t get_offset_of_mWorldCenterMode_2() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___mWorldCenterMode_2)); }
	inline int32_t get_mWorldCenterMode_2() const { return ___mWorldCenterMode_2; }
	inline int32_t* get_address_of_mWorldCenterMode_2() { return &___mWorldCenterMode_2; }
	inline void set_mWorldCenterMode_2(int32_t value)
	{
		___mWorldCenterMode_2 = value;
	}

	inline static int32_t get_offset_of_mWorldCenter_3() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___mWorldCenter_3)); }
	inline TrackableBehaviour_t1779888572 * get_mWorldCenter_3() const { return ___mWorldCenter_3; }
	inline TrackableBehaviour_t1779888572 ** get_address_of_mWorldCenter_3() { return &___mWorldCenter_3; }
	inline void set_mWorldCenter_3(TrackableBehaviour_t1779888572 * value)
	{
		___mWorldCenter_3 = value;
		Il2CppCodeGenWriteBarrier(&___mWorldCenter_3, value);
	}

	inline static int32_t get_offset_of_mCentralAnchorPoint_4() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___mCentralAnchorPoint_4)); }
	inline Transform_t3275118058 * get_mCentralAnchorPoint_4() const { return ___mCentralAnchorPoint_4; }
	inline Transform_t3275118058 ** get_address_of_mCentralAnchorPoint_4() { return &___mCentralAnchorPoint_4; }
	inline void set_mCentralAnchorPoint_4(Transform_t3275118058 * value)
	{
		___mCentralAnchorPoint_4 = value;
		Il2CppCodeGenWriteBarrier(&___mCentralAnchorPoint_4, value);
	}

	inline static int32_t get_offset_of_mParentAnchorPoint_5() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___mParentAnchorPoint_5)); }
	inline Transform_t3275118058 * get_mParentAnchorPoint_5() const { return ___mParentAnchorPoint_5; }
	inline Transform_t3275118058 ** get_address_of_mParentAnchorPoint_5() { return &___mParentAnchorPoint_5; }
	inline void set_mParentAnchorPoint_5(Transform_t3275118058 * value)
	{
		___mParentAnchorPoint_5 = value;
		Il2CppCodeGenWriteBarrier(&___mParentAnchorPoint_5, value);
	}

	inline static int32_t get_offset_of_mPrimaryCamera_6() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___mPrimaryCamera_6)); }
	inline Camera_t189460977 * get_mPrimaryCamera_6() const { return ___mPrimaryCamera_6; }
	inline Camera_t189460977 ** get_address_of_mPrimaryCamera_6() { return &___mPrimaryCamera_6; }
	inline void set_mPrimaryCamera_6(Camera_t189460977 * value)
	{
		___mPrimaryCamera_6 = value;
		Il2CppCodeGenWriteBarrier(&___mPrimaryCamera_6, value);
	}

	inline static int32_t get_offset_of_mSecondaryCamera_7() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___mSecondaryCamera_7)); }
	inline Camera_t189460977 * get_mSecondaryCamera_7() const { return ___mSecondaryCamera_7; }
	inline Camera_t189460977 ** get_address_of_mSecondaryCamera_7() { return &___mSecondaryCamera_7; }
	inline void set_mSecondaryCamera_7(Camera_t189460977 * value)
	{
		___mSecondaryCamera_7 = value;
		Il2CppCodeGenWriteBarrier(&___mSecondaryCamera_7, value);
	}

	inline static int32_t get_offset_of_mWereBindingFieldsExposed_8() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___mWereBindingFieldsExposed_8)); }
	inline bool get_mWereBindingFieldsExposed_8() const { return ___mWereBindingFieldsExposed_8; }
	inline bool* get_address_of_mWereBindingFieldsExposed_8() { return &___mWereBindingFieldsExposed_8; }
	inline void set_mWereBindingFieldsExposed_8(bool value)
	{
		___mWereBindingFieldsExposed_8 = value;
	}

	inline static int32_t get_offset_of_AwakeEvent_11() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___AwakeEvent_11)); }
	inline Action_t3226471752 * get_AwakeEvent_11() const { return ___AwakeEvent_11; }
	inline Action_t3226471752 ** get_address_of_AwakeEvent_11() { return &___AwakeEvent_11; }
	inline void set_AwakeEvent_11(Action_t3226471752 * value)
	{
		___AwakeEvent_11 = value;
		Il2CppCodeGenWriteBarrier(&___AwakeEvent_11, value);
	}

	inline static int32_t get_offset_of_OnEnableEvent_12() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___OnEnableEvent_12)); }
	inline Action_t3226471752 * get_OnEnableEvent_12() const { return ___OnEnableEvent_12; }
	inline Action_t3226471752 ** get_address_of_OnEnableEvent_12() { return &___OnEnableEvent_12; }
	inline void set_OnEnableEvent_12(Action_t3226471752 * value)
	{
		___OnEnableEvent_12 = value;
		Il2CppCodeGenWriteBarrier(&___OnEnableEvent_12, value);
	}

	inline static int32_t get_offset_of_StartEvent_13() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___StartEvent_13)); }
	inline Action_t3226471752 * get_StartEvent_13() const { return ___StartEvent_13; }
	inline Action_t3226471752 ** get_address_of_StartEvent_13() { return &___StartEvent_13; }
	inline void set_StartEvent_13(Action_t3226471752 * value)
	{
		___StartEvent_13 = value;
		Il2CppCodeGenWriteBarrier(&___StartEvent_13, value);
	}

	inline static int32_t get_offset_of_UpdateEvent_14() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___UpdateEvent_14)); }
	inline Action_t3226471752 * get_UpdateEvent_14() const { return ___UpdateEvent_14; }
	inline Action_t3226471752 ** get_address_of_UpdateEvent_14() { return &___UpdateEvent_14; }
	inline void set_UpdateEvent_14(Action_t3226471752 * value)
	{
		___UpdateEvent_14 = value;
		Il2CppCodeGenWriteBarrier(&___UpdateEvent_14, value);
	}

	inline static int32_t get_offset_of_OnLevelWasLoadedEvent_15() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___OnLevelWasLoadedEvent_15)); }
	inline Action_t3226471752 * get_OnLevelWasLoadedEvent_15() const { return ___OnLevelWasLoadedEvent_15; }
	inline Action_t3226471752 ** get_address_of_OnLevelWasLoadedEvent_15() { return &___OnLevelWasLoadedEvent_15; }
	inline void set_OnLevelWasLoadedEvent_15(Action_t3226471752 * value)
	{
		___OnLevelWasLoadedEvent_15 = value;
		Il2CppCodeGenWriteBarrier(&___OnLevelWasLoadedEvent_15, value);
	}

	inline static int32_t get_offset_of_OnApplicationPauseEvent_16() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___OnApplicationPauseEvent_16)); }
	inline Action_1_t3627374100 * get_OnApplicationPauseEvent_16() const { return ___OnApplicationPauseEvent_16; }
	inline Action_1_t3627374100 ** get_address_of_OnApplicationPauseEvent_16() { return &___OnApplicationPauseEvent_16; }
	inline void set_OnApplicationPauseEvent_16(Action_1_t3627374100 * value)
	{
		___OnApplicationPauseEvent_16 = value;
		Il2CppCodeGenWriteBarrier(&___OnApplicationPauseEvent_16, value);
	}

	inline static int32_t get_offset_of_OnDisableEvent_17() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___OnDisableEvent_17)); }
	inline Action_t3226471752 * get_OnDisableEvent_17() const { return ___OnDisableEvent_17; }
	inline Action_t3226471752 ** get_address_of_OnDisableEvent_17() { return &___OnDisableEvent_17; }
	inline void set_OnDisableEvent_17(Action_t3226471752 * value)
	{
		___OnDisableEvent_17 = value;
		Il2CppCodeGenWriteBarrier(&___OnDisableEvent_17, value);
	}

	inline static int32_t get_offset_of_OnDestroyEvent_18() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759, ___OnDestroyEvent_18)); }
	inline Action_t3226471752 * get_OnDestroyEvent_18() const { return ___OnDestroyEvent_18; }
	inline Action_t3226471752 ** get_address_of_OnDestroyEvent_18() { return &___OnDestroyEvent_18; }
	inline void set_OnDestroyEvent_18(Action_t3226471752 * value)
	{
		___OnDestroyEvent_18 = value;
		Il2CppCodeGenWriteBarrier(&___OnDestroyEvent_18, value);
	}
};

struct VuforiaAbstractBehaviour_t3319870759_StaticFields
{
public:
	// System.Action`1<Vuforia.VuforiaAbstractBehaviour> Vuforia.VuforiaAbstractBehaviour::BehaviourCreated
	Action_1_t3121670141 * ___BehaviourCreated_9;
	// System.Action`1<Vuforia.VuforiaAbstractBehaviour> Vuforia.VuforiaAbstractBehaviour::BehaviourDestroyed
	Action_1_t3121670141 * ___BehaviourDestroyed_10;

public:
	inline static int32_t get_offset_of_BehaviourCreated_9() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759_StaticFields, ___BehaviourCreated_9)); }
	inline Action_1_t3121670141 * get_BehaviourCreated_9() const { return ___BehaviourCreated_9; }
	inline Action_1_t3121670141 ** get_address_of_BehaviourCreated_9() { return &___BehaviourCreated_9; }
	inline void set_BehaviourCreated_9(Action_1_t3121670141 * value)
	{
		___BehaviourCreated_9 = value;
		Il2CppCodeGenWriteBarrier(&___BehaviourCreated_9, value);
	}

	inline static int32_t get_offset_of_BehaviourDestroyed_10() { return static_cast<int32_t>(offsetof(VuforiaAbstractBehaviour_t3319870759_StaticFields, ___BehaviourDestroyed_10)); }
	inline Action_1_t3121670141 * get_BehaviourDestroyed_10() const { return ___BehaviourDestroyed_10; }
	inline Action_1_t3121670141 ** get_address_of_BehaviourDestroyed_10() { return &___BehaviourDestroyed_10; }
	inline void set_BehaviourDestroyed_10(Action_1_t3121670141 * value)
	{
		___BehaviourDestroyed_10 = value;
		Il2CppCodeGenWriteBarrier(&___BehaviourDestroyed_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
