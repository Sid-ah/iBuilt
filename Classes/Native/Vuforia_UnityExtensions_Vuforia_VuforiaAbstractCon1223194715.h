#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaAbstractConfiguration/TrackerConfiguration
struct  TrackerConfiguration_t1223194715  : public Il2CppObject
{
public:
	// System.Boolean Vuforia.VuforiaAbstractConfiguration/TrackerConfiguration::autoInitTracker
	bool ___autoInitTracker_0;
	// System.Boolean Vuforia.VuforiaAbstractConfiguration/TrackerConfiguration::autoStartTracker
	bool ___autoStartTracker_1;

public:
	inline static int32_t get_offset_of_autoInitTracker_0() { return static_cast<int32_t>(offsetof(TrackerConfiguration_t1223194715, ___autoInitTracker_0)); }
	inline bool get_autoInitTracker_0() const { return ___autoInitTracker_0; }
	inline bool* get_address_of_autoInitTracker_0() { return &___autoInitTracker_0; }
	inline void set_autoInitTracker_0(bool value)
	{
		___autoInitTracker_0 = value;
	}

	inline static int32_t get_offset_of_autoStartTracker_1() { return static_cast<int32_t>(offsetof(TrackerConfiguration_t1223194715, ___autoStartTracker_1)); }
	inline bool get_autoStartTracker_1() const { return ___autoStartTracker_1; }
	inline bool* get_address_of_autoStartTracker_1() { return &___autoStartTracker_1; }
	inline void set_autoStartTracker_1(bool value)
	{
		___autoStartTracker_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
