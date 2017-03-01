#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<Vuforia.VuforiaUnity/InitError>
struct Action_1_t1951195598;
// Vuforia.VuforiaRuntime
struct VuforiaRuntime_t2075282796;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaUnity_InitE2149396216.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRuntime
struct  VuforiaRuntime_t2075282796  : public Il2CppObject
{
public:
	// System.Action`1<Vuforia.VuforiaUnity/InitError> Vuforia.VuforiaRuntime::mOnVuforiaInitError
	Action_1_t1951195598 * ___mOnVuforiaInitError_0;
	// System.Boolean Vuforia.VuforiaRuntime::mFailedToInitialize
	bool ___mFailedToInitialize_1;
	// Vuforia.VuforiaUnity/InitError Vuforia.VuforiaRuntime::mInitError
	int32_t ___mInitError_2;
	// System.Boolean Vuforia.VuforiaRuntime::mHasInitialized
	bool ___mHasInitialized_3;

public:
	inline static int32_t get_offset_of_mOnVuforiaInitError_0() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t2075282796, ___mOnVuforiaInitError_0)); }
	inline Action_1_t1951195598 * get_mOnVuforiaInitError_0() const { return ___mOnVuforiaInitError_0; }
	inline Action_1_t1951195598 ** get_address_of_mOnVuforiaInitError_0() { return &___mOnVuforiaInitError_0; }
	inline void set_mOnVuforiaInitError_0(Action_1_t1951195598 * value)
	{
		___mOnVuforiaInitError_0 = value;
		Il2CppCodeGenWriteBarrier(&___mOnVuforiaInitError_0, value);
	}

	inline static int32_t get_offset_of_mFailedToInitialize_1() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t2075282796, ___mFailedToInitialize_1)); }
	inline bool get_mFailedToInitialize_1() const { return ___mFailedToInitialize_1; }
	inline bool* get_address_of_mFailedToInitialize_1() { return &___mFailedToInitialize_1; }
	inline void set_mFailedToInitialize_1(bool value)
	{
		___mFailedToInitialize_1 = value;
	}

	inline static int32_t get_offset_of_mInitError_2() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t2075282796, ___mInitError_2)); }
	inline int32_t get_mInitError_2() const { return ___mInitError_2; }
	inline int32_t* get_address_of_mInitError_2() { return &___mInitError_2; }
	inline void set_mInitError_2(int32_t value)
	{
		___mInitError_2 = value;
	}

	inline static int32_t get_offset_of_mHasInitialized_3() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t2075282796, ___mHasInitialized_3)); }
	inline bool get_mHasInitialized_3() const { return ___mHasInitialized_3; }
	inline bool* get_address_of_mHasInitialized_3() { return &___mHasInitialized_3; }
	inline void set_mHasInitialized_3(bool value)
	{
		___mHasInitialized_3 = value;
	}
};

struct VuforiaRuntime_t2075282796_StaticFields
{
public:
	// Vuforia.VuforiaRuntime Vuforia.VuforiaRuntime::mInstance
	VuforiaRuntime_t2075282796 * ___mInstance_4;
	// System.Object Vuforia.VuforiaRuntime::mPadlock
	Il2CppObject * ___mPadlock_5;

public:
	inline static int32_t get_offset_of_mInstance_4() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t2075282796_StaticFields, ___mInstance_4)); }
	inline VuforiaRuntime_t2075282796 * get_mInstance_4() const { return ___mInstance_4; }
	inline VuforiaRuntime_t2075282796 ** get_address_of_mInstance_4() { return &___mInstance_4; }
	inline void set_mInstance_4(VuforiaRuntime_t2075282796 * value)
	{
		___mInstance_4 = value;
		Il2CppCodeGenWriteBarrier(&___mInstance_4, value);
	}

	inline static int32_t get_offset_of_mPadlock_5() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t2075282796_StaticFields, ___mPadlock_5)); }
	inline Il2CppObject * get_mPadlock_5() const { return ___mPadlock_5; }
	inline Il2CppObject ** get_address_of_mPadlock_5() { return &___mPadlock_5; }
	inline void set_mPadlock_5(Il2CppObject * value)
	{
		___mPadlock_5 = value;
		Il2CppCodeGenWriteBarrier(&___mPadlock_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
