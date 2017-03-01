#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl2613089982.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaManagerImpl/VuMarkTargetData
#pragma pack(push, tp, 1)
struct  VuMarkTargetData_t2130450083 
{
public:
	// Vuforia.VuforiaManagerImpl/InstanceIdData Vuforia.VuforiaManagerImpl/VuMarkTargetData::instanceId
	InstanceIdData_t2613089982  ___instanceId_0;
	// System.Int32 Vuforia.VuforiaManagerImpl/VuMarkTargetData::id
	int32_t ___id_1;
	// System.Int32 Vuforia.VuforiaManagerImpl/VuMarkTargetData::templateId
	int32_t ___templateId_2;
	// UnityEngine.Vector3 Vuforia.VuforiaManagerImpl/VuMarkTargetData::size
	Vector3_t2243707580  ___size_3;
	// System.Int32 Vuforia.VuforiaManagerImpl/VuMarkTargetData::unused
	int32_t ___unused_4;

public:
	inline static int32_t get_offset_of_instanceId_0() { return static_cast<int32_t>(offsetof(VuMarkTargetData_t2130450083, ___instanceId_0)); }
	inline InstanceIdData_t2613089982  get_instanceId_0() const { return ___instanceId_0; }
	inline InstanceIdData_t2613089982 * get_address_of_instanceId_0() { return &___instanceId_0; }
	inline void set_instanceId_0(InstanceIdData_t2613089982  value)
	{
		___instanceId_0 = value;
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(VuMarkTargetData_t2130450083, ___id_1)); }
	inline int32_t get_id_1() const { return ___id_1; }
	inline int32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(int32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_templateId_2() { return static_cast<int32_t>(offsetof(VuMarkTargetData_t2130450083, ___templateId_2)); }
	inline int32_t get_templateId_2() const { return ___templateId_2; }
	inline int32_t* get_address_of_templateId_2() { return &___templateId_2; }
	inline void set_templateId_2(int32_t value)
	{
		___templateId_2 = value;
	}

	inline static int32_t get_offset_of_size_3() { return static_cast<int32_t>(offsetof(VuMarkTargetData_t2130450083, ___size_3)); }
	inline Vector3_t2243707580  get_size_3() const { return ___size_3; }
	inline Vector3_t2243707580 * get_address_of_size_3() { return &___size_3; }
	inline void set_size_3(Vector3_t2243707580  value)
	{
		___size_3 = value;
	}

	inline static int32_t get_offset_of_unused_4() { return static_cast<int32_t>(offsetof(VuMarkTargetData_t2130450083, ___unused_4)); }
	inline int32_t get_unused_4() const { return ___unused_4; }
	inline int32_t* get_address_of_unused_4() { return &___unused_4; }
	inline void set_unused_4(int32_t value)
	{
		___unused_4 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
