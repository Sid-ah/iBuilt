#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// Vuforia.Trackable
struct Trackable_t432275407;
// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>
struct List_1_t65927380;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "Vuforia_UnityExtensions_Vuforia_TrackableBehaviour4057911311.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour
struct  TrackableBehaviour_t1779888572  : public MonoBehaviour_t1158329972
{
public:
	// System.Double Vuforia.TrackableBehaviour::<TimeStamp>k__BackingField
	double ___U3CTimeStampU3Ek__BackingField_2;
	// System.String Vuforia.TrackableBehaviour::mTrackableName
	String_t* ___mTrackableName_3;
	// System.Boolean Vuforia.TrackableBehaviour::mPreserveChildSize
	bool ___mPreserveChildSize_4;
	// System.Boolean Vuforia.TrackableBehaviour::mInitializedInEditor
	bool ___mInitializedInEditor_5;
	// UnityEngine.Vector3 Vuforia.TrackableBehaviour::mPreviousScale
	Vector3_t2243707580  ___mPreviousScale_6;
	// Vuforia.TrackableBehaviour/Status Vuforia.TrackableBehaviour::mStatus
	int32_t ___mStatus_7;
	// Vuforia.Trackable Vuforia.TrackableBehaviour::mTrackable
	Il2CppObject * ___mTrackable_8;
	// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler> Vuforia.TrackableBehaviour::mTrackableEventHandlers
	List_1_t65927380 * ___mTrackableEventHandlers_9;

public:
	inline static int32_t get_offset_of_U3CTimeStampU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1779888572, ___U3CTimeStampU3Ek__BackingField_2)); }
	inline double get_U3CTimeStampU3Ek__BackingField_2() const { return ___U3CTimeStampU3Ek__BackingField_2; }
	inline double* get_address_of_U3CTimeStampU3Ek__BackingField_2() { return &___U3CTimeStampU3Ek__BackingField_2; }
	inline void set_U3CTimeStampU3Ek__BackingField_2(double value)
	{
		___U3CTimeStampU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_mTrackableName_3() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1779888572, ___mTrackableName_3)); }
	inline String_t* get_mTrackableName_3() const { return ___mTrackableName_3; }
	inline String_t** get_address_of_mTrackableName_3() { return &___mTrackableName_3; }
	inline void set_mTrackableName_3(String_t* value)
	{
		___mTrackableName_3 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackableName_3, value);
	}

	inline static int32_t get_offset_of_mPreserveChildSize_4() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1779888572, ___mPreserveChildSize_4)); }
	inline bool get_mPreserveChildSize_4() const { return ___mPreserveChildSize_4; }
	inline bool* get_address_of_mPreserveChildSize_4() { return &___mPreserveChildSize_4; }
	inline void set_mPreserveChildSize_4(bool value)
	{
		___mPreserveChildSize_4 = value;
	}

	inline static int32_t get_offset_of_mInitializedInEditor_5() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1779888572, ___mInitializedInEditor_5)); }
	inline bool get_mInitializedInEditor_5() const { return ___mInitializedInEditor_5; }
	inline bool* get_address_of_mInitializedInEditor_5() { return &___mInitializedInEditor_5; }
	inline void set_mInitializedInEditor_5(bool value)
	{
		___mInitializedInEditor_5 = value;
	}

	inline static int32_t get_offset_of_mPreviousScale_6() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1779888572, ___mPreviousScale_6)); }
	inline Vector3_t2243707580  get_mPreviousScale_6() const { return ___mPreviousScale_6; }
	inline Vector3_t2243707580 * get_address_of_mPreviousScale_6() { return &___mPreviousScale_6; }
	inline void set_mPreviousScale_6(Vector3_t2243707580  value)
	{
		___mPreviousScale_6 = value;
	}

	inline static int32_t get_offset_of_mStatus_7() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1779888572, ___mStatus_7)); }
	inline int32_t get_mStatus_7() const { return ___mStatus_7; }
	inline int32_t* get_address_of_mStatus_7() { return &___mStatus_7; }
	inline void set_mStatus_7(int32_t value)
	{
		___mStatus_7 = value;
	}

	inline static int32_t get_offset_of_mTrackable_8() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1779888572, ___mTrackable_8)); }
	inline Il2CppObject * get_mTrackable_8() const { return ___mTrackable_8; }
	inline Il2CppObject ** get_address_of_mTrackable_8() { return &___mTrackable_8; }
	inline void set_mTrackable_8(Il2CppObject * value)
	{
		___mTrackable_8 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackable_8, value);
	}

	inline static int32_t get_offset_of_mTrackableEventHandlers_9() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1779888572, ___mTrackableEventHandlers_9)); }
	inline List_1_t65927380 * get_mTrackableEventHandlers_9() const { return ___mTrackableEventHandlers_9; }
	inline List_1_t65927380 ** get_address_of_mTrackableEventHandlers_9() { return &___mTrackableEventHandlers_9; }
	inline void set_mTrackableEventHandlers_9(List_1_t65927380 * value)
	{
		___mTrackableEventHandlers_9 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackableEventHandlers_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
