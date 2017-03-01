#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t1642385972;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaAbstractConfiguration/DatabaseLoadConfiguration
struct  DatabaseLoadConfiguration_t3088048772  : public Il2CppObject
{
public:
	// System.String[] Vuforia.VuforiaAbstractConfiguration/DatabaseLoadConfiguration::dataSetsToLoad
	StringU5BU5D_t1642385972* ___dataSetsToLoad_0;
	// System.String[] Vuforia.VuforiaAbstractConfiguration/DatabaseLoadConfiguration::dataSetsToActivate
	StringU5BU5D_t1642385972* ___dataSetsToActivate_1;

public:
	inline static int32_t get_offset_of_dataSetsToLoad_0() { return static_cast<int32_t>(offsetof(DatabaseLoadConfiguration_t3088048772, ___dataSetsToLoad_0)); }
	inline StringU5BU5D_t1642385972* get_dataSetsToLoad_0() const { return ___dataSetsToLoad_0; }
	inline StringU5BU5D_t1642385972** get_address_of_dataSetsToLoad_0() { return &___dataSetsToLoad_0; }
	inline void set_dataSetsToLoad_0(StringU5BU5D_t1642385972* value)
	{
		___dataSetsToLoad_0 = value;
		Il2CppCodeGenWriteBarrier(&___dataSetsToLoad_0, value);
	}

	inline static int32_t get_offset_of_dataSetsToActivate_1() { return static_cast<int32_t>(offsetof(DatabaseLoadConfiguration_t3088048772, ___dataSetsToActivate_1)); }
	inline StringU5BU5D_t1642385972* get_dataSetsToActivate_1() const { return ___dataSetsToActivate_1; }
	inline StringU5BU5D_t1642385972** get_address_of_dataSetsToActivate_1() { return &___dataSetsToActivate_1; }
	inline void set_dataSetsToActivate_1(StringU5BU5D_t1642385972* value)
	{
		___dataSetsToActivate_1 = value;
		Il2CppCodeGenWriteBarrier(&___dataSetsToActivate_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
