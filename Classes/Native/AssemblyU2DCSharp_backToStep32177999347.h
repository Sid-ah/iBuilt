#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Button
struct Button_t2872111280;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// backToStep3
struct  backToStep3_t2177999347  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Button backToStep3::Previous
	Button_t2872111280 * ___Previous_2;

public:
	inline static int32_t get_offset_of_Previous_2() { return static_cast<int32_t>(offsetof(backToStep3_t2177999347, ___Previous_2)); }
	inline Button_t2872111280 * get_Previous_2() const { return ___Previous_2; }
	inline Button_t2872111280 ** get_address_of_Previous_2() { return &___Previous_2; }
	inline void set_Previous_2(Button_t2872111280 * value)
	{
		___Previous_2 = value;
		Il2CppCodeGenWriteBarrier(&___Previous_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
