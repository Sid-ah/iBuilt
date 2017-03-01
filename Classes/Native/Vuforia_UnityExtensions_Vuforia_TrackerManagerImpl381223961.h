#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.ObjectTracker
struct ObjectTracker_t1568044035;
// Vuforia.TextTracker
struct TextTracker_t89845299;
// Vuforia.SmartTerrainTracker
struct SmartTerrainTracker_t1462833936;
// Vuforia.DeviceTracker
struct DeviceTracker_t2183873360;
// Vuforia.StateManager
struct StateManager_t3369465942;

#include "Vuforia_UnityExtensions_Vuforia_TrackerManager308318605.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerManagerImpl
struct  TrackerManagerImpl_t381223961  : public TrackerManager_t308318605
{
public:
	// Vuforia.ObjectTracker Vuforia.TrackerManagerImpl::mObjectTracker
	ObjectTracker_t1568044035 * ___mObjectTracker_1;
	// Vuforia.TextTracker Vuforia.TrackerManagerImpl::mTextTracker
	TextTracker_t89845299 * ___mTextTracker_2;
	// Vuforia.SmartTerrainTracker Vuforia.TrackerManagerImpl::mSmartTerrainTracker
	SmartTerrainTracker_t1462833936 * ___mSmartTerrainTracker_3;
	// Vuforia.DeviceTracker Vuforia.TrackerManagerImpl::mDeviceTracker
	DeviceTracker_t2183873360 * ___mDeviceTracker_4;
	// Vuforia.StateManager Vuforia.TrackerManagerImpl::mStateManager
	StateManager_t3369465942 * ___mStateManager_5;

public:
	inline static int32_t get_offset_of_mObjectTracker_1() { return static_cast<int32_t>(offsetof(TrackerManagerImpl_t381223961, ___mObjectTracker_1)); }
	inline ObjectTracker_t1568044035 * get_mObjectTracker_1() const { return ___mObjectTracker_1; }
	inline ObjectTracker_t1568044035 ** get_address_of_mObjectTracker_1() { return &___mObjectTracker_1; }
	inline void set_mObjectTracker_1(ObjectTracker_t1568044035 * value)
	{
		___mObjectTracker_1 = value;
		Il2CppCodeGenWriteBarrier(&___mObjectTracker_1, value);
	}

	inline static int32_t get_offset_of_mTextTracker_2() { return static_cast<int32_t>(offsetof(TrackerManagerImpl_t381223961, ___mTextTracker_2)); }
	inline TextTracker_t89845299 * get_mTextTracker_2() const { return ___mTextTracker_2; }
	inline TextTracker_t89845299 ** get_address_of_mTextTracker_2() { return &___mTextTracker_2; }
	inline void set_mTextTracker_2(TextTracker_t89845299 * value)
	{
		___mTextTracker_2 = value;
		Il2CppCodeGenWriteBarrier(&___mTextTracker_2, value);
	}

	inline static int32_t get_offset_of_mSmartTerrainTracker_3() { return static_cast<int32_t>(offsetof(TrackerManagerImpl_t381223961, ___mSmartTerrainTracker_3)); }
	inline SmartTerrainTracker_t1462833936 * get_mSmartTerrainTracker_3() const { return ___mSmartTerrainTracker_3; }
	inline SmartTerrainTracker_t1462833936 ** get_address_of_mSmartTerrainTracker_3() { return &___mSmartTerrainTracker_3; }
	inline void set_mSmartTerrainTracker_3(SmartTerrainTracker_t1462833936 * value)
	{
		___mSmartTerrainTracker_3 = value;
		Il2CppCodeGenWriteBarrier(&___mSmartTerrainTracker_3, value);
	}

	inline static int32_t get_offset_of_mDeviceTracker_4() { return static_cast<int32_t>(offsetof(TrackerManagerImpl_t381223961, ___mDeviceTracker_4)); }
	inline DeviceTracker_t2183873360 * get_mDeviceTracker_4() const { return ___mDeviceTracker_4; }
	inline DeviceTracker_t2183873360 ** get_address_of_mDeviceTracker_4() { return &___mDeviceTracker_4; }
	inline void set_mDeviceTracker_4(DeviceTracker_t2183873360 * value)
	{
		___mDeviceTracker_4 = value;
		Il2CppCodeGenWriteBarrier(&___mDeviceTracker_4, value);
	}

	inline static int32_t get_offset_of_mStateManager_5() { return static_cast<int32_t>(offsetof(TrackerManagerImpl_t381223961, ___mStateManager_5)); }
	inline StateManager_t3369465942 * get_mStateManager_5() const { return ___mStateManager_5; }
	inline StateManager_t3369465942 ** get_address_of_mStateManager_5() { return &___mStateManager_5; }
	inline void set_mStateManager_5(StateManager_t3369465942 * value)
	{
		___mStateManager_5 = value;
		Il2CppCodeGenWriteBarrier(&___mStateManager_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
