#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action
struct Action_t3226471752;
// Vuforia.DeviceTrackerARController
struct DeviceTrackerARController_t3939888793;
// System.Object
struct Il2CppObject;

#include "Vuforia_UnityExtensions_Vuforia_ARController2638793709.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "Vuforia_UnityExtensions_Vuforia_RotationalDeviceTra111727860.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DeviceTrackerARController
struct  DeviceTrackerARController_t3939888793  : public ARController_t2638793709
{
public:
	// System.Boolean Vuforia.DeviceTrackerARController::mAutoInitTracker
	bool ___mAutoInitTracker_3;
	// System.Boolean Vuforia.DeviceTrackerARController::mAutoStartTracker
	bool ___mAutoStartTracker_4;
	// System.Boolean Vuforia.DeviceTrackerARController::mPosePrediction
	bool ___mPosePrediction_5;
	// Vuforia.RotationalDeviceTracker/MODEL_CORRECTION_MODE Vuforia.DeviceTrackerARController::mModelCorrectionMode
	int32_t ___mModelCorrectionMode_6;
	// System.Boolean Vuforia.DeviceTrackerARController::mModelTransformEnabled
	bool ___mModelTransformEnabled_7;
	// UnityEngine.Vector3 Vuforia.DeviceTrackerARController::mModelTransform
	Vector3_t2243707580  ___mModelTransform_8;
	// System.Action Vuforia.DeviceTrackerARController::mTrackerStarted
	Action_t3226471752 * ___mTrackerStarted_9;
	// System.Boolean Vuforia.DeviceTrackerARController::mTrackerWasActiveBeforePause
	bool ___mTrackerWasActiveBeforePause_10;
	// System.Boolean Vuforia.DeviceTrackerARController::mTrackerWasActiveBeforeDisabling
	bool ___mTrackerWasActiveBeforeDisabling_11;

public:
	inline static int32_t get_offset_of_mAutoInitTracker_3() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t3939888793, ___mAutoInitTracker_3)); }
	inline bool get_mAutoInitTracker_3() const { return ___mAutoInitTracker_3; }
	inline bool* get_address_of_mAutoInitTracker_3() { return &___mAutoInitTracker_3; }
	inline void set_mAutoInitTracker_3(bool value)
	{
		___mAutoInitTracker_3 = value;
	}

	inline static int32_t get_offset_of_mAutoStartTracker_4() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t3939888793, ___mAutoStartTracker_4)); }
	inline bool get_mAutoStartTracker_4() const { return ___mAutoStartTracker_4; }
	inline bool* get_address_of_mAutoStartTracker_4() { return &___mAutoStartTracker_4; }
	inline void set_mAutoStartTracker_4(bool value)
	{
		___mAutoStartTracker_4 = value;
	}

	inline static int32_t get_offset_of_mPosePrediction_5() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t3939888793, ___mPosePrediction_5)); }
	inline bool get_mPosePrediction_5() const { return ___mPosePrediction_5; }
	inline bool* get_address_of_mPosePrediction_5() { return &___mPosePrediction_5; }
	inline void set_mPosePrediction_5(bool value)
	{
		___mPosePrediction_5 = value;
	}

	inline static int32_t get_offset_of_mModelCorrectionMode_6() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t3939888793, ___mModelCorrectionMode_6)); }
	inline int32_t get_mModelCorrectionMode_6() const { return ___mModelCorrectionMode_6; }
	inline int32_t* get_address_of_mModelCorrectionMode_6() { return &___mModelCorrectionMode_6; }
	inline void set_mModelCorrectionMode_6(int32_t value)
	{
		___mModelCorrectionMode_6 = value;
	}

	inline static int32_t get_offset_of_mModelTransformEnabled_7() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t3939888793, ___mModelTransformEnabled_7)); }
	inline bool get_mModelTransformEnabled_7() const { return ___mModelTransformEnabled_7; }
	inline bool* get_address_of_mModelTransformEnabled_7() { return &___mModelTransformEnabled_7; }
	inline void set_mModelTransformEnabled_7(bool value)
	{
		___mModelTransformEnabled_7 = value;
	}

	inline static int32_t get_offset_of_mModelTransform_8() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t3939888793, ___mModelTransform_8)); }
	inline Vector3_t2243707580  get_mModelTransform_8() const { return ___mModelTransform_8; }
	inline Vector3_t2243707580 * get_address_of_mModelTransform_8() { return &___mModelTransform_8; }
	inline void set_mModelTransform_8(Vector3_t2243707580  value)
	{
		___mModelTransform_8 = value;
	}

	inline static int32_t get_offset_of_mTrackerStarted_9() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t3939888793, ___mTrackerStarted_9)); }
	inline Action_t3226471752 * get_mTrackerStarted_9() const { return ___mTrackerStarted_9; }
	inline Action_t3226471752 ** get_address_of_mTrackerStarted_9() { return &___mTrackerStarted_9; }
	inline void set_mTrackerStarted_9(Action_t3226471752 * value)
	{
		___mTrackerStarted_9 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackerStarted_9, value);
	}

	inline static int32_t get_offset_of_mTrackerWasActiveBeforePause_10() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t3939888793, ___mTrackerWasActiveBeforePause_10)); }
	inline bool get_mTrackerWasActiveBeforePause_10() const { return ___mTrackerWasActiveBeforePause_10; }
	inline bool* get_address_of_mTrackerWasActiveBeforePause_10() { return &___mTrackerWasActiveBeforePause_10; }
	inline void set_mTrackerWasActiveBeforePause_10(bool value)
	{
		___mTrackerWasActiveBeforePause_10 = value;
	}

	inline static int32_t get_offset_of_mTrackerWasActiveBeforeDisabling_11() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t3939888793, ___mTrackerWasActiveBeforeDisabling_11)); }
	inline bool get_mTrackerWasActiveBeforeDisabling_11() const { return ___mTrackerWasActiveBeforeDisabling_11; }
	inline bool* get_address_of_mTrackerWasActiveBeforeDisabling_11() { return &___mTrackerWasActiveBeforeDisabling_11; }
	inline void set_mTrackerWasActiveBeforeDisabling_11(bool value)
	{
		___mTrackerWasActiveBeforeDisabling_11 = value;
	}
};

struct DeviceTrackerARController_t3939888793_StaticFields
{
public:
	// UnityEngine.Vector3 Vuforia.DeviceTrackerARController::DEFAULT_HEAD_PIVOT
	Vector3_t2243707580  ___DEFAULT_HEAD_PIVOT_1;
	// UnityEngine.Vector3 Vuforia.DeviceTrackerARController::DEFAULT_HANDHELD_PIVOT
	Vector3_t2243707580  ___DEFAULT_HANDHELD_PIVOT_2;
	// Vuforia.DeviceTrackerARController Vuforia.DeviceTrackerARController::mInstance
	DeviceTrackerARController_t3939888793 * ___mInstance_12;
	// System.Object Vuforia.DeviceTrackerARController::mPadlock
	Il2CppObject * ___mPadlock_13;

public:
	inline static int32_t get_offset_of_DEFAULT_HEAD_PIVOT_1() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t3939888793_StaticFields, ___DEFAULT_HEAD_PIVOT_1)); }
	inline Vector3_t2243707580  get_DEFAULT_HEAD_PIVOT_1() const { return ___DEFAULT_HEAD_PIVOT_1; }
	inline Vector3_t2243707580 * get_address_of_DEFAULT_HEAD_PIVOT_1() { return &___DEFAULT_HEAD_PIVOT_1; }
	inline void set_DEFAULT_HEAD_PIVOT_1(Vector3_t2243707580  value)
	{
		___DEFAULT_HEAD_PIVOT_1 = value;
	}

	inline static int32_t get_offset_of_DEFAULT_HANDHELD_PIVOT_2() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t3939888793_StaticFields, ___DEFAULT_HANDHELD_PIVOT_2)); }
	inline Vector3_t2243707580  get_DEFAULT_HANDHELD_PIVOT_2() const { return ___DEFAULT_HANDHELD_PIVOT_2; }
	inline Vector3_t2243707580 * get_address_of_DEFAULT_HANDHELD_PIVOT_2() { return &___DEFAULT_HANDHELD_PIVOT_2; }
	inline void set_DEFAULT_HANDHELD_PIVOT_2(Vector3_t2243707580  value)
	{
		___DEFAULT_HANDHELD_PIVOT_2 = value;
	}

	inline static int32_t get_offset_of_mInstance_12() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t3939888793_StaticFields, ___mInstance_12)); }
	inline DeviceTrackerARController_t3939888793 * get_mInstance_12() const { return ___mInstance_12; }
	inline DeviceTrackerARController_t3939888793 ** get_address_of_mInstance_12() { return &___mInstance_12; }
	inline void set_mInstance_12(DeviceTrackerARController_t3939888793 * value)
	{
		___mInstance_12 = value;
		Il2CppCodeGenWriteBarrier(&___mInstance_12, value);
	}

	inline static int32_t get_offset_of_mPadlock_13() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t3939888793_StaticFields, ___mPadlock_13)); }
	inline Il2CppObject * get_mPadlock_13() const { return ___mPadlock_13; }
	inline Il2CppObject ** get_address_of_mPadlock_13() { return &___mPadlock_13; }
	inline void set_mPadlock_13(Il2CppObject * value)
	{
		___mPadlock_13 = value;
		Il2CppCodeGenWriteBarrier(&___mPadlock_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
