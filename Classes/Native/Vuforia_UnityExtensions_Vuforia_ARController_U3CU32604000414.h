#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.ARController
struct ARController_t2638793709;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ARController/<>c__DisplayClass11_0
struct  U3CU3Ec__DisplayClass11_0_t2604000414  : public Il2CppObject
{
public:
	// Vuforia.ARController Vuforia.ARController/<>c__DisplayClass11_0::controller
	ARController_t2638793709 * ___controller_0;

public:
	inline static int32_t get_offset_of_controller_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_t2604000414, ___controller_0)); }
	inline ARController_t2638793709 * get_controller_0() const { return ___controller_0; }
	inline ARController_t2638793709 ** get_address_of_controller_0() { return &___controller_0; }
	inline void set_controller_0(ARController_t2638793709 * value)
	{
		___controller_0 = value;
		Il2CppCodeGenWriteBarrier(&___controller_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
