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
// Vuforia.SmartTerrainTrackerARController
struct SmartTerrainTrackerARController_t2540312039;
// System.Object
struct Il2CppObject;

#include "Vuforia_UnityExtensions_Vuforia_ARController2638793709.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.SmartTerrainTrackerARController
struct  SmartTerrainTrackerARController_t2540312039  : public ARController_t2638793709
{
public:
	// System.Boolean Vuforia.SmartTerrainTrackerARController::mAutoInitTracker
	bool ___mAutoInitTracker_1;
	// System.Boolean Vuforia.SmartTerrainTrackerARController::mAutoStartTracker
	bool ___mAutoStartTracker_2;
	// System.Boolean Vuforia.SmartTerrainTrackerARController::mAutoInitBuilder
	bool ___mAutoInitBuilder_3;
	// System.Single Vuforia.SmartTerrainTrackerARController::mSceneUnitsToMillimeter
	float ___mSceneUnitsToMillimeter_4;
	// System.Action Vuforia.SmartTerrainTrackerARController::mTrackerStarted
	Action_t3226471752 * ___mTrackerStarted_5;
	// System.Boolean Vuforia.SmartTerrainTrackerARController::mTrackerWasActiveBeforePause
	bool ___mTrackerWasActiveBeforePause_6;
	// System.Boolean Vuforia.SmartTerrainTrackerARController::mTrackerWasActiveBeforeDisabling
	bool ___mTrackerWasActiveBeforeDisabling_7;

public:
	inline static int32_t get_offset_of_mAutoInitTracker_1() { return static_cast<int32_t>(offsetof(SmartTerrainTrackerARController_t2540312039, ___mAutoInitTracker_1)); }
	inline bool get_mAutoInitTracker_1() const { return ___mAutoInitTracker_1; }
	inline bool* get_address_of_mAutoInitTracker_1() { return &___mAutoInitTracker_1; }
	inline void set_mAutoInitTracker_1(bool value)
	{
		___mAutoInitTracker_1 = value;
	}

	inline static int32_t get_offset_of_mAutoStartTracker_2() { return static_cast<int32_t>(offsetof(SmartTerrainTrackerARController_t2540312039, ___mAutoStartTracker_2)); }
	inline bool get_mAutoStartTracker_2() const { return ___mAutoStartTracker_2; }
	inline bool* get_address_of_mAutoStartTracker_2() { return &___mAutoStartTracker_2; }
	inline void set_mAutoStartTracker_2(bool value)
	{
		___mAutoStartTracker_2 = value;
	}

	inline static int32_t get_offset_of_mAutoInitBuilder_3() { return static_cast<int32_t>(offsetof(SmartTerrainTrackerARController_t2540312039, ___mAutoInitBuilder_3)); }
	inline bool get_mAutoInitBuilder_3() const { return ___mAutoInitBuilder_3; }
	inline bool* get_address_of_mAutoInitBuilder_3() { return &___mAutoInitBuilder_3; }
	inline void set_mAutoInitBuilder_3(bool value)
	{
		___mAutoInitBuilder_3 = value;
	}

	inline static int32_t get_offset_of_mSceneUnitsToMillimeter_4() { return static_cast<int32_t>(offsetof(SmartTerrainTrackerARController_t2540312039, ___mSceneUnitsToMillimeter_4)); }
	inline float get_mSceneUnitsToMillimeter_4() const { return ___mSceneUnitsToMillimeter_4; }
	inline float* get_address_of_mSceneUnitsToMillimeter_4() { return &___mSceneUnitsToMillimeter_4; }
	inline void set_mSceneUnitsToMillimeter_4(float value)
	{
		___mSceneUnitsToMillimeter_4 = value;
	}

	inline static int32_t get_offset_of_mTrackerStarted_5() { return static_cast<int32_t>(offsetof(SmartTerrainTrackerARController_t2540312039, ___mTrackerStarted_5)); }
	inline Action_t3226471752 * get_mTrackerStarted_5() const { return ___mTrackerStarted_5; }
	inline Action_t3226471752 ** get_address_of_mTrackerStarted_5() { return &___mTrackerStarted_5; }
	inline void set_mTrackerStarted_5(Action_t3226471752 * value)
	{
		___mTrackerStarted_5 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackerStarted_5, value);
	}

	inline static int32_t get_offset_of_mTrackerWasActiveBeforePause_6() { return static_cast<int32_t>(offsetof(SmartTerrainTrackerARController_t2540312039, ___mTrackerWasActiveBeforePause_6)); }
	inline bool get_mTrackerWasActiveBeforePause_6() const { return ___mTrackerWasActiveBeforePause_6; }
	inline bool* get_address_of_mTrackerWasActiveBeforePause_6() { return &___mTrackerWasActiveBeforePause_6; }
	inline void set_mTrackerWasActiveBeforePause_6(bool value)
	{
		___mTrackerWasActiveBeforePause_6 = value;
	}

	inline static int32_t get_offset_of_mTrackerWasActiveBeforeDisabling_7() { return static_cast<int32_t>(offsetof(SmartTerrainTrackerARController_t2540312039, ___mTrackerWasActiveBeforeDisabling_7)); }
	inline bool get_mTrackerWasActiveBeforeDisabling_7() const { return ___mTrackerWasActiveBeforeDisabling_7; }
	inline bool* get_address_of_mTrackerWasActiveBeforeDisabling_7() { return &___mTrackerWasActiveBeforeDisabling_7; }
	inline void set_mTrackerWasActiveBeforeDisabling_7(bool value)
	{
		___mTrackerWasActiveBeforeDisabling_7 = value;
	}
};

struct SmartTerrainTrackerARController_t2540312039_StaticFields
{
public:
	// Vuforia.SmartTerrainTrackerARController Vuforia.SmartTerrainTrackerARController::mInstance
	SmartTerrainTrackerARController_t2540312039 * ___mInstance_8;
	// System.Object Vuforia.SmartTerrainTrackerARController::mPadlock
	Il2CppObject * ___mPadlock_9;

public:
	inline static int32_t get_offset_of_mInstance_8() { return static_cast<int32_t>(offsetof(SmartTerrainTrackerARController_t2540312039_StaticFields, ___mInstance_8)); }
	inline SmartTerrainTrackerARController_t2540312039 * get_mInstance_8() const { return ___mInstance_8; }
	inline SmartTerrainTrackerARController_t2540312039 ** get_address_of_mInstance_8() { return &___mInstance_8; }
	inline void set_mInstance_8(SmartTerrainTrackerARController_t2540312039 * value)
	{
		___mInstance_8 = value;
		Il2CppCodeGenWriteBarrier(&___mInstance_8, value);
	}

	inline static int32_t get_offset_of_mPadlock_9() { return static_cast<int32_t>(offsetof(SmartTerrainTrackerARController_t2540312039_StaticFields, ___mPadlock_9)); }
	inline Il2CppObject * get_mPadlock_9() const { return ___mPadlock_9; }
	inline Il2CppObject ** get_address_of_mPadlock_9() { return &___mPadlock_9; }
	inline void set_mPadlock_9(Il2CppObject * value)
	{
		___mPadlock_9 = value;
		Il2CppCodeGenWriteBarrier(&___mPadlock_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
