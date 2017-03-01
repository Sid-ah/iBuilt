#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ImageTargetData
#pragma pack(push, tp, 1)
struct  ImageTargetData_t1326050618 
{
public:
	// System.Int32 Vuforia.ImageTargetData::id
	int32_t ___id_0;
	// UnityEngine.Vector3 Vuforia.ImageTargetData::size
	Vector3_t2243707580  ___size_1;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(ImageTargetData_t1326050618, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(ImageTargetData_t1326050618, ___size_1)); }
	inline Vector3_t2243707580  get_size_1() const { return ___size_1; }
	inline Vector3_t2243707580 * get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(Vector3_t2243707580  value)
	{
		___size_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
