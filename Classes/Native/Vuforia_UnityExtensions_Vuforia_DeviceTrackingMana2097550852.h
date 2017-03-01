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

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DeviceTrackingManager
struct  DeviceTrackingManager_t2097550852  : public Il2CppObject
{
public:
	// UnityEngine.Vector3 Vuforia.DeviceTrackingManager::mDeviceTrackerPositonOffset
	Vector3_t2243707580  ___mDeviceTrackerPositonOffset_0;
	// UnityEngine.Quaternion Vuforia.DeviceTrackingManager::mDeviceTrackerRotationOffset
	Quaternion_t4030073918  ___mDeviceTrackerRotationOffset_1;
	// System.Action Vuforia.DeviceTrackingManager::mBeforeDevicePoseUpdated
	Action_t3226471752 * ___mBeforeDevicePoseUpdated_2;
	// System.Action Vuforia.DeviceTrackingManager::mAfterDevicePoseUpdated
	Action_t3226471752 * ___mAfterDevicePoseUpdated_3;

public:
	inline static int32_t get_offset_of_mDeviceTrackerPositonOffset_0() { return static_cast<int32_t>(offsetof(DeviceTrackingManager_t2097550852, ___mDeviceTrackerPositonOffset_0)); }
	inline Vector3_t2243707580  get_mDeviceTrackerPositonOffset_0() const { return ___mDeviceTrackerPositonOffset_0; }
	inline Vector3_t2243707580 * get_address_of_mDeviceTrackerPositonOffset_0() { return &___mDeviceTrackerPositonOffset_0; }
	inline void set_mDeviceTrackerPositonOffset_0(Vector3_t2243707580  value)
	{
		___mDeviceTrackerPositonOffset_0 = value;
	}

	inline static int32_t get_offset_of_mDeviceTrackerRotationOffset_1() { return static_cast<int32_t>(offsetof(DeviceTrackingManager_t2097550852, ___mDeviceTrackerRotationOffset_1)); }
	inline Quaternion_t4030073918  get_mDeviceTrackerRotationOffset_1() const { return ___mDeviceTrackerRotationOffset_1; }
	inline Quaternion_t4030073918 * get_address_of_mDeviceTrackerRotationOffset_1() { return &___mDeviceTrackerRotationOffset_1; }
	inline void set_mDeviceTrackerRotationOffset_1(Quaternion_t4030073918  value)
	{
		___mDeviceTrackerRotationOffset_1 = value;
	}

	inline static int32_t get_offset_of_mBeforeDevicePoseUpdated_2() { return static_cast<int32_t>(offsetof(DeviceTrackingManager_t2097550852, ___mBeforeDevicePoseUpdated_2)); }
	inline Action_t3226471752 * get_mBeforeDevicePoseUpdated_2() const { return ___mBeforeDevicePoseUpdated_2; }
	inline Action_t3226471752 ** get_address_of_mBeforeDevicePoseUpdated_2() { return &___mBeforeDevicePoseUpdated_2; }
	inline void set_mBeforeDevicePoseUpdated_2(Action_t3226471752 * value)
	{
		___mBeforeDevicePoseUpdated_2 = value;
		Il2CppCodeGenWriteBarrier(&___mBeforeDevicePoseUpdated_2, value);
	}

	inline static int32_t get_offset_of_mAfterDevicePoseUpdated_3() { return static_cast<int32_t>(offsetof(DeviceTrackingManager_t2097550852, ___mAfterDevicePoseUpdated_3)); }
	inline Action_t3226471752 * get_mAfterDevicePoseUpdated_3() const { return ___mAfterDevicePoseUpdated_3; }
	inline Action_t3226471752 ** get_address_of_mAfterDevicePoseUpdated_3() { return &___mAfterDevicePoseUpdated_3; }
	inline void set_mAfterDevicePoseUpdated_3(Action_t3226471752 * value)
	{
		___mAfterDevicePoseUpdated_3 = value;
		Il2CppCodeGenWriteBarrier(&___mAfterDevicePoseUpdated_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
