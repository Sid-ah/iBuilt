#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t193706927;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WireframeBehaviour
struct  WireframeBehaviour_t2494532455  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Material Vuforia.WireframeBehaviour::lineMaterial
	Material_t193706927 * ___lineMaterial_2;
	// System.Boolean Vuforia.WireframeBehaviour::ShowLines
	bool ___ShowLines_3;
	// UnityEngine.Color Vuforia.WireframeBehaviour::LineColor
	Color_t2020392075  ___LineColor_4;
	// UnityEngine.Material Vuforia.WireframeBehaviour::mLineMaterial
	Material_t193706927 * ___mLineMaterial_5;

public:
	inline static int32_t get_offset_of_lineMaterial_2() { return static_cast<int32_t>(offsetof(WireframeBehaviour_t2494532455, ___lineMaterial_2)); }
	inline Material_t193706927 * get_lineMaterial_2() const { return ___lineMaterial_2; }
	inline Material_t193706927 ** get_address_of_lineMaterial_2() { return &___lineMaterial_2; }
	inline void set_lineMaterial_2(Material_t193706927 * value)
	{
		___lineMaterial_2 = value;
		Il2CppCodeGenWriteBarrier(&___lineMaterial_2, value);
	}

	inline static int32_t get_offset_of_ShowLines_3() { return static_cast<int32_t>(offsetof(WireframeBehaviour_t2494532455, ___ShowLines_3)); }
	inline bool get_ShowLines_3() const { return ___ShowLines_3; }
	inline bool* get_address_of_ShowLines_3() { return &___ShowLines_3; }
	inline void set_ShowLines_3(bool value)
	{
		___ShowLines_3 = value;
	}

	inline static int32_t get_offset_of_LineColor_4() { return static_cast<int32_t>(offsetof(WireframeBehaviour_t2494532455, ___LineColor_4)); }
	inline Color_t2020392075  get_LineColor_4() const { return ___LineColor_4; }
	inline Color_t2020392075 * get_address_of_LineColor_4() { return &___LineColor_4; }
	inline void set_LineColor_4(Color_t2020392075  value)
	{
		___LineColor_4 = value;
	}

	inline static int32_t get_offset_of_mLineMaterial_5() { return static_cast<int32_t>(offsetof(WireframeBehaviour_t2494532455, ___mLineMaterial_5)); }
	inline Material_t193706927 * get_mLineMaterial_5() const { return ___mLineMaterial_5; }
	inline Material_t193706927 ** get_address_of_mLineMaterial_5() { return &___mLineMaterial_5; }
	inline void set_mLineMaterial_5(Material_t193706927 * value)
	{
		___mLineMaterial_5 = value;
		Il2CppCodeGenWriteBarrier(&___mLineMaterial_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
