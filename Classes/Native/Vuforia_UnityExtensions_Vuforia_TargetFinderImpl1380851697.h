#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>
struct List_1_t1327847638;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>
struct Dictionary_2_t1098403117;

#include "Vuforia_UnityExtensions_Vuforia_TargetFinder1347637805.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "Vuforia_UnityExtensions_Vuforia_TargetFinderImpl_T3807887646.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TargetFinderImpl
struct  TargetFinderImpl_t1380851697  : public TargetFinder_t1347637805
{
public:
	// System.IntPtr Vuforia.TargetFinderImpl::mTargetFinderStatePtr
	IntPtr_t ___mTargetFinderStatePtr_0;
	// Vuforia.TargetFinderImpl/TargetFinderState Vuforia.TargetFinderImpl::mTargetFinderState
	TargetFinderState_t3807887646  ___mTargetFinderState_1;
	// System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult> Vuforia.TargetFinderImpl::mNewResults
	List_1_t1327847638 * ___mNewResults_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget> Vuforia.TargetFinderImpl::mImageTargets
	Dictionary_2_t1098403117 * ___mImageTargets_3;

public:
	inline static int32_t get_offset_of_mTargetFinderStatePtr_0() { return static_cast<int32_t>(offsetof(TargetFinderImpl_t1380851697, ___mTargetFinderStatePtr_0)); }
	inline IntPtr_t get_mTargetFinderStatePtr_0() const { return ___mTargetFinderStatePtr_0; }
	inline IntPtr_t* get_address_of_mTargetFinderStatePtr_0() { return &___mTargetFinderStatePtr_0; }
	inline void set_mTargetFinderStatePtr_0(IntPtr_t value)
	{
		___mTargetFinderStatePtr_0 = value;
	}

	inline static int32_t get_offset_of_mTargetFinderState_1() { return static_cast<int32_t>(offsetof(TargetFinderImpl_t1380851697, ___mTargetFinderState_1)); }
	inline TargetFinderState_t3807887646  get_mTargetFinderState_1() const { return ___mTargetFinderState_1; }
	inline TargetFinderState_t3807887646 * get_address_of_mTargetFinderState_1() { return &___mTargetFinderState_1; }
	inline void set_mTargetFinderState_1(TargetFinderState_t3807887646  value)
	{
		___mTargetFinderState_1 = value;
	}

	inline static int32_t get_offset_of_mNewResults_2() { return static_cast<int32_t>(offsetof(TargetFinderImpl_t1380851697, ___mNewResults_2)); }
	inline List_1_t1327847638 * get_mNewResults_2() const { return ___mNewResults_2; }
	inline List_1_t1327847638 ** get_address_of_mNewResults_2() { return &___mNewResults_2; }
	inline void set_mNewResults_2(List_1_t1327847638 * value)
	{
		___mNewResults_2 = value;
		Il2CppCodeGenWriteBarrier(&___mNewResults_2, value);
	}

	inline static int32_t get_offset_of_mImageTargets_3() { return static_cast<int32_t>(offsetof(TargetFinderImpl_t1380851697, ___mImageTargets_3)); }
	inline Dictionary_2_t1098403117 * get_mImageTargets_3() const { return ___mImageTargets_3; }
	inline Dictionary_2_t1098403117 ** get_address_of_mImageTargets_3() { return &___mImageTargets_3; }
	inline void set_mImageTargets_3(Dictionary_2_t1098403117 * value)
	{
		___mImageTargets_3 = value;
		Il2CppCodeGenWriteBarrier(&___mImageTargets_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
