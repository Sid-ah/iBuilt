#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>
struct Dictionary_2_t923332832;
// System.Collections.Generic.List`1<Vuforia.WordResult>
struct List_1_t1284628329;
// System.Collections.Generic.List`1<Vuforia.Word>
struct List_1_t3241240618;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordAbstractBehaviour>
struct Dictionary_2_t1886284360;
// System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>
struct List_1_t2247579857;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>
struct Dictionary_2_t4162359119;
// Vuforia.VuforiaARController
struct VuforiaARController_t4061728485;

#include "Vuforia_UnityExtensions_Vuforia_WordManager1585193471.h"
#include "Vuforia_UnityExtensions_Vuforia_WordPrefabCreation3171836134.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WordManagerImpl
struct  WordManagerImpl_t4282786523  : public WordManager_t1585193471
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult> Vuforia.WordManagerImpl::mTrackedWords
	Dictionary_2_t923332832 * ___mTrackedWords_0;
	// System.Collections.Generic.List`1<Vuforia.WordResult> Vuforia.WordManagerImpl::mNewWords
	List_1_t1284628329 * ___mNewWords_1;
	// System.Collections.Generic.List`1<Vuforia.Word> Vuforia.WordManagerImpl::mLostWords
	List_1_t3241240618 * ___mLostWords_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordAbstractBehaviour> Vuforia.WordManagerImpl::mActiveWordBehaviours
	Dictionary_2_t1886284360 * ___mActiveWordBehaviours_3;
	// System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour> Vuforia.WordManagerImpl::mWordBehavioursMarkedForDeletion
	List_1_t2247579857 * ___mWordBehavioursMarkedForDeletion_4;
	// System.Collections.Generic.List`1<Vuforia.Word> Vuforia.WordManagerImpl::mWaitingQueue
	List_1_t3241240618 * ___mWaitingQueue_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>> Vuforia.WordManagerImpl::mWordBehaviours
	Dictionary_2_t4162359119 * ___mWordBehaviours_7;
	// System.Boolean Vuforia.WordManagerImpl::mAutomaticTemplate
	bool ___mAutomaticTemplate_8;
	// System.Int32 Vuforia.WordManagerImpl::mMaxInstances
	int32_t ___mMaxInstances_9;
	// Vuforia.WordPrefabCreationMode Vuforia.WordManagerImpl::mWordPrefabCreationMode
	int32_t ___mWordPrefabCreationMode_10;
	// Vuforia.VuforiaARController Vuforia.WordManagerImpl::mVuforiaBehaviour
	VuforiaARController_t4061728485 * ___mVuforiaBehaviour_11;

public:
	inline static int32_t get_offset_of_mTrackedWords_0() { return static_cast<int32_t>(offsetof(WordManagerImpl_t4282786523, ___mTrackedWords_0)); }
	inline Dictionary_2_t923332832 * get_mTrackedWords_0() const { return ___mTrackedWords_0; }
	inline Dictionary_2_t923332832 ** get_address_of_mTrackedWords_0() { return &___mTrackedWords_0; }
	inline void set_mTrackedWords_0(Dictionary_2_t923332832 * value)
	{
		___mTrackedWords_0 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackedWords_0, value);
	}

	inline static int32_t get_offset_of_mNewWords_1() { return static_cast<int32_t>(offsetof(WordManagerImpl_t4282786523, ___mNewWords_1)); }
	inline List_1_t1284628329 * get_mNewWords_1() const { return ___mNewWords_1; }
	inline List_1_t1284628329 ** get_address_of_mNewWords_1() { return &___mNewWords_1; }
	inline void set_mNewWords_1(List_1_t1284628329 * value)
	{
		___mNewWords_1 = value;
		Il2CppCodeGenWriteBarrier(&___mNewWords_1, value);
	}

	inline static int32_t get_offset_of_mLostWords_2() { return static_cast<int32_t>(offsetof(WordManagerImpl_t4282786523, ___mLostWords_2)); }
	inline List_1_t3241240618 * get_mLostWords_2() const { return ___mLostWords_2; }
	inline List_1_t3241240618 ** get_address_of_mLostWords_2() { return &___mLostWords_2; }
	inline void set_mLostWords_2(List_1_t3241240618 * value)
	{
		___mLostWords_2 = value;
		Il2CppCodeGenWriteBarrier(&___mLostWords_2, value);
	}

	inline static int32_t get_offset_of_mActiveWordBehaviours_3() { return static_cast<int32_t>(offsetof(WordManagerImpl_t4282786523, ___mActiveWordBehaviours_3)); }
	inline Dictionary_2_t1886284360 * get_mActiveWordBehaviours_3() const { return ___mActiveWordBehaviours_3; }
	inline Dictionary_2_t1886284360 ** get_address_of_mActiveWordBehaviours_3() { return &___mActiveWordBehaviours_3; }
	inline void set_mActiveWordBehaviours_3(Dictionary_2_t1886284360 * value)
	{
		___mActiveWordBehaviours_3 = value;
		Il2CppCodeGenWriteBarrier(&___mActiveWordBehaviours_3, value);
	}

	inline static int32_t get_offset_of_mWordBehavioursMarkedForDeletion_4() { return static_cast<int32_t>(offsetof(WordManagerImpl_t4282786523, ___mWordBehavioursMarkedForDeletion_4)); }
	inline List_1_t2247579857 * get_mWordBehavioursMarkedForDeletion_4() const { return ___mWordBehavioursMarkedForDeletion_4; }
	inline List_1_t2247579857 ** get_address_of_mWordBehavioursMarkedForDeletion_4() { return &___mWordBehavioursMarkedForDeletion_4; }
	inline void set_mWordBehavioursMarkedForDeletion_4(List_1_t2247579857 * value)
	{
		___mWordBehavioursMarkedForDeletion_4 = value;
		Il2CppCodeGenWriteBarrier(&___mWordBehavioursMarkedForDeletion_4, value);
	}

	inline static int32_t get_offset_of_mWaitingQueue_5() { return static_cast<int32_t>(offsetof(WordManagerImpl_t4282786523, ___mWaitingQueue_5)); }
	inline List_1_t3241240618 * get_mWaitingQueue_5() const { return ___mWaitingQueue_5; }
	inline List_1_t3241240618 ** get_address_of_mWaitingQueue_5() { return &___mWaitingQueue_5; }
	inline void set_mWaitingQueue_5(List_1_t3241240618 * value)
	{
		___mWaitingQueue_5 = value;
		Il2CppCodeGenWriteBarrier(&___mWaitingQueue_5, value);
	}

	inline static int32_t get_offset_of_mWordBehaviours_7() { return static_cast<int32_t>(offsetof(WordManagerImpl_t4282786523, ___mWordBehaviours_7)); }
	inline Dictionary_2_t4162359119 * get_mWordBehaviours_7() const { return ___mWordBehaviours_7; }
	inline Dictionary_2_t4162359119 ** get_address_of_mWordBehaviours_7() { return &___mWordBehaviours_7; }
	inline void set_mWordBehaviours_7(Dictionary_2_t4162359119 * value)
	{
		___mWordBehaviours_7 = value;
		Il2CppCodeGenWriteBarrier(&___mWordBehaviours_7, value);
	}

	inline static int32_t get_offset_of_mAutomaticTemplate_8() { return static_cast<int32_t>(offsetof(WordManagerImpl_t4282786523, ___mAutomaticTemplate_8)); }
	inline bool get_mAutomaticTemplate_8() const { return ___mAutomaticTemplate_8; }
	inline bool* get_address_of_mAutomaticTemplate_8() { return &___mAutomaticTemplate_8; }
	inline void set_mAutomaticTemplate_8(bool value)
	{
		___mAutomaticTemplate_8 = value;
	}

	inline static int32_t get_offset_of_mMaxInstances_9() { return static_cast<int32_t>(offsetof(WordManagerImpl_t4282786523, ___mMaxInstances_9)); }
	inline int32_t get_mMaxInstances_9() const { return ___mMaxInstances_9; }
	inline int32_t* get_address_of_mMaxInstances_9() { return &___mMaxInstances_9; }
	inline void set_mMaxInstances_9(int32_t value)
	{
		___mMaxInstances_9 = value;
	}

	inline static int32_t get_offset_of_mWordPrefabCreationMode_10() { return static_cast<int32_t>(offsetof(WordManagerImpl_t4282786523, ___mWordPrefabCreationMode_10)); }
	inline int32_t get_mWordPrefabCreationMode_10() const { return ___mWordPrefabCreationMode_10; }
	inline int32_t* get_address_of_mWordPrefabCreationMode_10() { return &___mWordPrefabCreationMode_10; }
	inline void set_mWordPrefabCreationMode_10(int32_t value)
	{
		___mWordPrefabCreationMode_10 = value;
	}

	inline static int32_t get_offset_of_mVuforiaBehaviour_11() { return static_cast<int32_t>(offsetof(WordManagerImpl_t4282786523, ___mVuforiaBehaviour_11)); }
	inline VuforiaARController_t4061728485 * get_mVuforiaBehaviour_11() const { return ___mVuforiaBehaviour_11; }
	inline VuforiaARController_t4061728485 ** get_address_of_mVuforiaBehaviour_11() { return &___mVuforiaBehaviour_11; }
	inline void set_mVuforiaBehaviour_11(VuforiaARController_t4061728485 * value)
	{
		___mVuforiaBehaviour_11 = value;
		Il2CppCodeGenWriteBarrier(&___mVuforiaBehaviour_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
