#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>
struct Dictionary_2_t3085942560;

#include "mscorlib_System_ValueType3507792607.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_843287782.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>
struct  Enumerator_t110999966 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t3085942560 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t843287782  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t110999966, ___dictionary_0)); }
	inline Dictionary_2_t3085942560 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t3085942560 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t3085942560 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier(&___dictionary_0, value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t110999966, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t110999966, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t110999966, ___current_3)); }
	inline KeyValuePair_2_t843287782  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t843287782 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t843287782  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
