#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "Vuforia_UnityExtensions_Vuforia_VuforiaAbstractCon1223194715.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaAbstractConfiguration/SmartTerrainTrackerConfiguration
struct  SmartTerrainTrackerConfiguration_t3772927073  : public TrackerConfiguration_t1223194715
{
public:
	// System.Boolean Vuforia.VuforiaAbstractConfiguration/SmartTerrainTrackerConfiguration::autoInitBuilder
	bool ___autoInitBuilder_2;
	// System.Single Vuforia.VuforiaAbstractConfiguration/SmartTerrainTrackerConfiguration::sceneUnitsToMillimeter
	float ___sceneUnitsToMillimeter_3;

public:
	inline static int32_t get_offset_of_autoInitBuilder_2() { return static_cast<int32_t>(offsetof(SmartTerrainTrackerConfiguration_t3772927073, ___autoInitBuilder_2)); }
	inline bool get_autoInitBuilder_2() const { return ___autoInitBuilder_2; }
	inline bool* get_address_of_autoInitBuilder_2() { return &___autoInitBuilder_2; }
	inline void set_autoInitBuilder_2(bool value)
	{
		___autoInitBuilder_2 = value;
	}

	inline static int32_t get_offset_of_sceneUnitsToMillimeter_3() { return static_cast<int32_t>(offsetof(SmartTerrainTrackerConfiguration_t3772927073, ___sceneUnitsToMillimeter_3)); }
	inline float get_sceneUnitsToMillimeter_3() const { return ___sceneUnitsToMillimeter_3; }
	inline float* get_address_of_sceneUnitsToMillimeter_3() { return &___sceneUnitsToMillimeter_3; }
	inline void set_sceneUnitsToMillimeter_3(float value)
	{
		___sceneUnitsToMillimeter_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
