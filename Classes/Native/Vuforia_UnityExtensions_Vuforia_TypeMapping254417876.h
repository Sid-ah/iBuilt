#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>
struct Dictionary_2_t2924240508;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TypeMapping
struct  TypeMapping_t254417876  : public Il2CppObject
{
public:

public:
};

struct TypeMapping_t254417876_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,System.UInt16> Vuforia.TypeMapping::sTypes
	Dictionary_2_t2924240508 * ___sTypes_0;

public:
	inline static int32_t get_offset_of_sTypes_0() { return static_cast<int32_t>(offsetof(TypeMapping_t254417876_StaticFields, ___sTypes_0)); }
	inline Dictionary_2_t2924240508 * get_sTypes_0() const { return ___sTypes_0; }
	inline Dictionary_2_t2924240508 ** get_address_of_sTypes_0() { return &___sTypes_0; }
	inline void set_sTypes_0(Dictionary_2_t2924240508 * value)
	{
		___sTypes_0 = value;
		Il2CppCodeGenWriteBarrier(&___sTypes_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
