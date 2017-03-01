#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.SmartTerrainBuilderImpl
struct SmartTerrainBuilderImpl_t447373045;

#include "Vuforia_UnityExtensions_Vuforia_SmartTerrainTracke1462833936.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.SmartTerrainTrackerImpl
struct  SmartTerrainTrackerImpl_t2474837022  : public SmartTerrainTracker_t1462833936
{
public:
	// System.Single Vuforia.SmartTerrainTrackerImpl::mScaleToMillimeter
	float ___mScaleToMillimeter_1;
	// Vuforia.SmartTerrainBuilderImpl Vuforia.SmartTerrainTrackerImpl::mSmartTerrainBuilder
	SmartTerrainBuilderImpl_t447373045 * ___mSmartTerrainBuilder_2;

public:
	inline static int32_t get_offset_of_mScaleToMillimeter_1() { return static_cast<int32_t>(offsetof(SmartTerrainTrackerImpl_t2474837022, ___mScaleToMillimeter_1)); }
	inline float get_mScaleToMillimeter_1() const { return ___mScaleToMillimeter_1; }
	inline float* get_address_of_mScaleToMillimeter_1() { return &___mScaleToMillimeter_1; }
	inline void set_mScaleToMillimeter_1(float value)
	{
		___mScaleToMillimeter_1 = value;
	}

	inline static int32_t get_offset_of_mSmartTerrainBuilder_2() { return static_cast<int32_t>(offsetof(SmartTerrainTrackerImpl_t2474837022, ___mSmartTerrainBuilder_2)); }
	inline SmartTerrainBuilderImpl_t447373045 * get_mSmartTerrainBuilder_2() const { return ___mSmartTerrainBuilder_2; }
	inline SmartTerrainBuilderImpl_t447373045 ** get_address_of_mSmartTerrainBuilder_2() { return &___mSmartTerrainBuilder_2; }
	inline void set_mSmartTerrainBuilder_2(SmartTerrainBuilderImpl_t447373045 * value)
	{
		___mSmartTerrainBuilder_2 = value;
		Il2CppCodeGenWriteBarrier(&___mSmartTerrainBuilder_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
