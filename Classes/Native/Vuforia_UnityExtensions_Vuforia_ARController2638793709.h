#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.VuforiaAbstractBehaviour
struct VuforiaAbstractBehaviour_t3319870759;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ARController
struct  ARController_t2638793709  : public Il2CppObject
{
public:
	// Vuforia.VuforiaAbstractBehaviour Vuforia.ARController::mVuforiaBehaviour
	VuforiaAbstractBehaviour_t3319870759 * ___mVuforiaBehaviour_0;

public:
	inline static int32_t get_offset_of_mVuforiaBehaviour_0() { return static_cast<int32_t>(offsetof(ARController_t2638793709, ___mVuforiaBehaviour_0)); }
	inline VuforiaAbstractBehaviour_t3319870759 * get_mVuforiaBehaviour_0() const { return ___mVuforiaBehaviour_0; }
	inline VuforiaAbstractBehaviour_t3319870759 ** get_address_of_mVuforiaBehaviour_0() { return &___mVuforiaBehaviour_0; }
	inline void set_mVuforiaBehaviour_0(VuforiaAbstractBehaviour_t3319870759 * value)
	{
		___mVuforiaBehaviour_0 = value;
		Il2CppCodeGenWriteBarrier(&___mVuforiaBehaviour_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
