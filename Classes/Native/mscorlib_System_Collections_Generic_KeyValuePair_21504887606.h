#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t189460977;
// Vuforia.VideoBackgroundAbstractBehaviour
struct VideoBackgroundAbstractBehaviour_t395384314;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,Vuforia.VideoBackgroundAbstractBehaviour>
struct  KeyValuePair_2_t1504887606 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Camera_t189460977 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	VideoBackgroundAbstractBehaviour_t395384314 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1504887606, ___key_0)); }
	inline Camera_t189460977 * get_key_0() const { return ___key_0; }
	inline Camera_t189460977 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Camera_t189460977 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1504887606, ___value_1)); }
	inline VideoBackgroundAbstractBehaviour_t395384314 * get_value_1() const { return ___value_1; }
	inline VideoBackgroundAbstractBehaviour_t395384314 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(VideoBackgroundAbstractBehaviour_t395384314 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
