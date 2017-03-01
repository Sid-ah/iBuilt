#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t1022910149;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t164973122;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Object
struct Il2CppObject;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1902082073;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "System_Core_System_Collections_Generic_HashSet_1_g1022910149.h"
#include "System_Core_System_Collections_Generic_HashSet_1_g1022910149MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "mscorlib_System_Object2689449295MethodDeclarations.h"
#include "mscorlib_System_Int322071877448.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "System_Core_System_Collections_Generic_HashSet_1_E3806193287.h"
#include "System_Core_System_Collections_Generic_HashSet_1_E3806193287MethodDeclarations.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_ArgumentOutOfRangeException279959794MethodDeclarations.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_ArgumentOutOfRangeException279959794.h"
#include "mscorlib_System_Collections_Generic_EqualityCompar1263084566MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_EqualityCompar1263084566.h"
#include "System.Core_ArrayTypes.h"
#include "System_Core_System_Collections_Generic_HashSet_1_Li865133271.h"
#include "mscorlib_System_ArgumentNullException628810857MethodDeclarations.h"
#include "mscorlib_System_ArgumentException3259014390MethodDeclarations.h"
#include "mscorlib_System_ArgumentNullException628810857.h"
#include "mscorlib_System_ArgumentException3259014390.h"
#include "mscorlib_System_Array3829468939MethodDeclarations.h"
#include "System_Core_System_Collections_Generic_HashSet_1_P1655716680MethodDeclarations.h"
#include "mscorlib_System_NotImplementedException2785117854MethodDeclarations.h"
#include "mscorlib_System_NotImplementedException2785117854.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C"  void HashSet_1__ctor_m2858247305_gshared (HashSet_1_t1022910149 * __this, const MethodInfo* method)
{
	{
		NullCheck((Il2CppObject *)__this);
		Object__ctor_m2551263788((Il2CppObject *)__this, /*hidden argument*/NULL);
		NullCheck((HashSet_1_t1022910149 *)__this);
		((  void (*) (HashSet_1_t1022910149 *, int32_t, Il2CppObject*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->methodPointer)((HashSet_1_t1022910149 *)__this, (int32_t)((int32_t)10), (Il2CppObject*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void HashSet_1__ctor_m3582855242_gshared (HashSet_1_t1022910149 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method)
{
	{
		NullCheck((Il2CppObject *)__this);
		Object__ctor_m2551263788((Il2CppObject *)__this, /*hidden argument*/NULL);
		SerializationInfo_t228987430 * L_0 = ___info0;
		__this->set_si_12(L_0);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C"  Il2CppObject* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m788997721_gshared (HashSet_1_t1022910149 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3806193287  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Enumerator__ctor_m1279102766(&L_0, (HashSet_1_t1022910149 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		Enumerator_t3806193287  L_1 = L_0;
		Il2CppObject * L_2 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 1), &L_1);
		return (Il2CppObject*)L_2;
	}
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C"  bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m2633171492_gshared (HashSet_1_t1022910149 * __this, const MethodInfo* method)
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
extern "C"  void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m1933244740_gshared (HashSet_1_t1022910149 * __this, ObjectU5BU5D_t3614634134* ___array0, int32_t ___index1, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t3614634134* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck((HashSet_1_t1022910149 *)__this);
		((  void (*) (HashSet_1_t1022910149 *, ObjectU5BU5D_t3614634134*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3)->methodPointer)((HashSet_1_t1022910149 *)__this, (ObjectU5BU5D_t3614634134*)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 3));
		return;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C"  void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m3632050820_gshared (HashSet_1_t1022910149 * __this, Il2CppObject * ___item0, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = ___item0;
		NullCheck((HashSet_1_t1022910149 *)__this);
		((  bool (*) (HashSet_1_t1022910149 *, Il2CppObject *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->methodPointer)((HashSet_1_t1022910149 *)__this, (Il2CppObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m2498631708_gshared (HashSet_1_t1022910149 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3806193287  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Enumerator__ctor_m1279102766(&L_0, (HashSet_1_t1022910149 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		Enumerator_t3806193287  L_1 = L_0;
		Il2CppObject * L_2 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 1), &L_1);
		return (Il2CppObject *)L_2;
	}
}
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
extern "C"  int32_t HashSet_1_get_Count_m4103055329_gshared (HashSet_1_t1022910149 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_count_9();
		return L_0;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
extern Il2CppClass* ArgumentOutOfRangeException_t279959794_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3404069002;
extern const uint32_t HashSet_1_Init_m1258286688_MetadataUsageId;
extern "C"  void HashSet_1_Init_m1258286688_gshared (HashSet_1_t1022910149 * __this, int32_t ___capacity0, Il2CppObject* ___comparer1, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HashSet_1_Init_m1258286688_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppObject* G_B4_0 = NULL;
	HashSet_1_t1022910149 * G_B4_1 = NULL;
	Il2CppObject* G_B3_0 = NULL;
	HashSet_1_t1022910149 * G_B3_1 = NULL;
	{
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t279959794 * L_1 = (ArgumentOutOfRangeException_t279959794 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t279959794_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1595007065(L_1, (String_t*)_stringLiteral3404069002, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0012:
	{
		Il2CppObject* L_2 = ___comparer1;
		Il2CppObject* L_3 = (Il2CppObject*)L_2;
		G_B3_0 = L_3;
		G_B3_1 = ((HashSet_1_t1022910149 *)(__this));
		if (L_3)
		{
			G_B4_0 = L_3;
			G_B4_1 = ((HashSet_1_t1022910149 *)(__this));
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 6));
		EqualityComparer_1_t1263084566 * L_4 = ((  EqualityComparer_1_t1263084566 * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5)->methodPointer)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 5));
		G_B4_0 = ((Il2CppObject*)(L_4));
		G_B4_1 = ((HashSet_1_t1022910149 *)(G_B3_1));
	}

IL_0020:
	{
		NullCheck(G_B4_1);
		G_B4_1->set_comparer_11(G_B4_0);
		int32_t L_5 = ___capacity0;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		___capacity0 = (int32_t)((int32_t)10);
	}

IL_002f:
	{
		int32_t L_6 = ___capacity0;
		___capacity0 = (int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)((float)((float)(((float)((float)L_6)))/(float)(0.9f))))))+(int32_t)1));
		int32_t L_7 = ___capacity0;
		NullCheck((HashSet_1_t1022910149 *)__this);
		((  void (*) (HashSet_1_t1022910149 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 7)->methodPointer)((HashSet_1_t1022910149 *)__this, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 7));
		__this->set_generation_13(0);
		return;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::InitArrays(System.Int32)
extern Il2CppClass* Int32U5BU5D_t3030399641_il2cpp_TypeInfo_var;
extern const uint32_t HashSet_1_InitArrays_m1536879844_MetadataUsageId;
extern "C"  void HashSet_1_InitArrays_m1536879844_gshared (HashSet_1_t1022910149 * __this, int32_t ___size0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HashSet_1_InitArrays_m1536879844_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___size0;
		__this->set_table_4(((Int32U5BU5D_t3030399641*)SZArrayNew(Int32U5BU5D_t3030399641_il2cpp_TypeInfo_var, (uint32_t)L_0)));
		int32_t L_1 = ___size0;
		__this->set_links_5(((LinkU5BU5D_t3597933550*)SZArrayNew(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 8), (uint32_t)L_1)));
		__this->set_empty_slot_8((-1));
		int32_t L_2 = ___size0;
		__this->set_slots_6(((ObjectU5BU5D_t3614634134*)SZArrayNew(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 9), (uint32_t)L_2)));
		__this->set_touched_7(0);
		Int32U5BU5D_t3030399641* L_3 = (Int32U5BU5D_t3030399641*)__this->get_table_4();
		NullCheck(L_3);
		__this->set_threshold_10((((int32_t)((int32_t)((float)((float)(((float)((float)(((int32_t)((int32_t)(((Il2CppArray *)L_3)->max_length)))))))*(float)(0.9f)))))));
		int32_t L_4 = (int32_t)__this->get_threshold_10();
		if (L_4)
		{
			goto IL_0068;
		}
	}
	{
		Int32U5BU5D_t3030399641* L_5 = (Int32U5BU5D_t3030399641*)__this->get_table_4();
		NullCheck(L_5);
		if ((((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_5)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		__this->set_threshold_10(1);
	}

IL_0068:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::SlotsContainsAt(System.Int32,System.Int32,T)
extern "C"  bool HashSet_1_SlotsContainsAt_m219342270_gshared (HashSet_1_t1022910149 * __this, int32_t ___index0, int32_t ___hash1, Il2CppObject * ___item2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Link_t865133271  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	{
		Int32U5BU5D_t3030399641* L_0 = (Int32U5BU5D_t3030399641*)__this->get_table_4();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (int32_t)((int32_t)((int32_t)L_3-(int32_t)1));
		goto IL_00a9;
	}

IL_0010:
	{
		LinkU5BU5D_t3597933550* L_4 = (LinkU5BU5D_t3597933550*)__this->get_links_5();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		V_1 = (Link_t865133271 )(*(Link_t865133271 *)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))));
		int32_t L_6 = (int32_t)(&V_1)->get_HashCode_0();
		int32_t L_7 = ___hash1;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_8 = ___hash1;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)-2147483648LL)))))
		{
			goto IL_0082;
		}
	}
	{
		Il2CppObject * L_9 = ___item2;
		if (!L_9)
		{
			goto IL_005b;
		}
	}
	{
		ObjectU5BU5D_t3614634134* L_10 = (ObjectU5BU5D_t3614634134*)__this->get_slots_6();
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Il2CppObject * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		if (L_13)
		{
			goto IL_0082;
		}
	}

IL_005b:
	{
		Il2CppObject * L_14 = ___item2;
		if (L_14)
		{
			goto IL_007c;
		}
	}
	{
		ObjectU5BU5D_t3614634134* L_15 = (ObjectU5BU5D_t3614634134*)__this->get_slots_6();
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Il2CppObject * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		G_B8_0 = ((((Il2CppObject*)(Il2CppObject *)NULL) == ((Il2CppObject*)(Il2CppObject *)L_18))? 1 : 0);
		goto IL_007d;
	}

IL_007c:
	{
		G_B8_0 = 0;
	}

IL_007d:
	{
		G_B10_0 = G_B8_0;
		goto IL_009a;
	}

IL_0082:
	{
		Il2CppObject* L_19 = (Il2CppObject*)__this->get_comparer_11();
		Il2CppObject * L_20 = ___item2;
		ObjectU5BU5D_t3614634134* L_21 = (ObjectU5BU5D_t3614634134*)__this->get_slots_6();
		int32_t L_22 = V_0;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		Il2CppObject * L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck((Il2CppObject*)L_19);
		bool L_25 = InterfaceFuncInvoker2< bool, Il2CppObject *, Il2CppObject * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(!0,!0) */, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 11), (Il2CppObject*)L_19, (Il2CppObject *)L_20, (Il2CppObject *)L_24);
		G_B10_0 = ((int32_t)(L_25));
	}

IL_009a:
	{
		if (!G_B10_0)
		{
			goto IL_00a1;
		}
	}
	{
		return (bool)1;
	}

IL_00a1:
	{
		int32_t L_26 = (int32_t)(&V_1)->get_Next_1();
		V_0 = (int32_t)L_26;
	}

IL_00a9:
	{
		int32_t L_27 = V_0;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0010;
		}
	}
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C"  void HashSet_1_CopyTo_m1750586488_gshared (HashSet_1_t1022910149 * __this, ObjectU5BU5D_t3614634134* ___array0, int32_t ___index1, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t3614634134* L_0 = ___array0;
		int32_t L_1 = ___index1;
		int32_t L_2 = (int32_t)__this->get_count_9();
		NullCheck((HashSet_1_t1022910149 *)__this);
		((  void (*) (HashSet_1_t1022910149 *, ObjectU5BU5D_t3614634134*, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 12)->methodPointer)((HashSet_1_t1022910149 *)__this, (ObjectU5BU5D_t3614634134*)L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 12));
		return;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32,System.Int32)
extern Il2CppClass* ArgumentNullException_t628810857_il2cpp_TypeInfo_var;
extern Il2CppClass* ArgumentOutOfRangeException_t279959794_il2cpp_TypeInfo_var;
extern Il2CppClass* ArgumentException_t3259014390_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1185213181;
extern Il2CppCodeGenString* _stringLiteral1460639766;
extern Il2CppCodeGenString* _stringLiteral784334942;
extern Il2CppCodeGenString* _stringLiteral3249130820;
extern const uint32_t HashSet_1_CopyTo_m4175866709_MetadataUsageId;
extern "C"  void HashSet_1_CopyTo_m4175866709_gshared (HashSet_1_t1022910149 * __this, ObjectU5BU5D_t3614634134* ___array0, int32_t ___index1, int32_t ___count2, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HashSet_1_CopyTo_m4175866709_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t3614634134* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t628810857 * L_1 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_1, (String_t*)_stringLiteral1185213181, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		int32_t L_2 = ___index1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		ArgumentOutOfRangeException_t279959794 * L_3 = (ArgumentOutOfRangeException_t279959794 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t279959794_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1595007065(L_3, (String_t*)_stringLiteral1460639766, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_0023:
	{
		int32_t L_4 = ___index1;
		ObjectU5BU5D_t3614634134* L_5 = ___array0;
		NullCheck(L_5);
		if ((((int32_t)L_4) <= ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_5)->max_length)))))))
		{
			goto IL_0037;
		}
	}
	{
		ArgumentException_t3259014390 * L_6 = (ArgumentException_t3259014390 *)il2cpp_codegen_object_new(ArgumentException_t3259014390_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3739475201(L_6, (String_t*)_stringLiteral784334942, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6);
	}

IL_0037:
	{
		ObjectU5BU5D_t3614634134* L_7 = ___array0;
		NullCheck(L_7);
		int32_t L_8 = ___index1;
		int32_t L_9 = ___count2;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_7)->max_length))))-(int32_t)L_8))) >= ((int32_t)L_9)))
		{
			goto IL_004d;
		}
	}
	{
		ArgumentException_t3259014390 * L_10 = (ArgumentException_t3259014390 *)il2cpp_codegen_object_new(ArgumentException_t3259014390_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3739475201(L_10, (String_t*)_stringLiteral3249130820, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10);
	}

IL_004d:
	{
		V_0 = (int32_t)0;
		V_1 = (int32_t)0;
		goto IL_007e;
	}

IL_0056:
	{
		int32_t L_11 = V_0;
		NullCheck((HashSet_1_t1022910149 *)__this);
		int32_t L_12 = ((  int32_t (*) (HashSet_1_t1022910149 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 13)->methodPointer)((HashSet_1_t1022910149 *)__this, (int32_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 13));
		if (!L_12)
		{
			goto IL_007a;
		}
	}
	{
		ObjectU5BU5D_t3614634134* L_13 = ___array0;
		int32_t L_14 = ___index1;
		int32_t L_15 = (int32_t)L_14;
		___index1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
		ObjectU5BU5D_t3614634134* L_16 = (ObjectU5BU5D_t3614634134*)__this->get_slots_6();
		int32_t L_17 = V_0;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		Il2CppObject * L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (Il2CppObject *)L_19);
	}

IL_007a:
	{
		int32_t L_20 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_007e:
	{
		int32_t L_21 = V_0;
		int32_t L_22 = (int32_t)__this->get_touched_7();
		if ((((int32_t)L_21) >= ((int32_t)L_22)))
		{
			goto IL_0091;
		}
	}
	{
		int32_t L_23 = V_1;
		int32_t L_24 = ___count2;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0056;
		}
	}

IL_0091:
	{
		return;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Resize()
extern Il2CppClass* Int32U5BU5D_t3030399641_il2cpp_TypeInfo_var;
extern const uint32_t HashSet_1_Resize_m1435308491_MetadataUsageId;
extern "C"  void HashSet_1_Resize_m1435308491_gshared (HashSet_1_t1022910149 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HashSet_1_Resize_m1435308491_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t3030399641* V_1 = NULL;
	LinkU5BU5D_t3597933550* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ObjectU5BU5D_t3614634134* V_7 = NULL;
	int32_t V_8 = 0;
	{
		Int32U5BU5D_t3030399641* L_0 = (Int32U5BU5D_t3030399641*)__this->get_table_4();
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 15));
		int32_t L_1 = ((  int32_t (*) (Il2CppObject * /* static, unused */, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 14)->methodPointer)(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_0)->max_length))))<<(int32_t)1))|(int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 14));
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		V_1 = (Int32U5BU5D_t3030399641*)((Int32U5BU5D_t3030399641*)SZArrayNew(Int32U5BU5D_t3030399641_il2cpp_TypeInfo_var, (uint32_t)L_2));
		int32_t L_3 = V_0;
		V_2 = (LinkU5BU5D_t3597933550*)((LinkU5BU5D_t3597933550*)SZArrayNew(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 8), (uint32_t)L_3));
		V_3 = (int32_t)0;
		goto IL_00a6;
	}

IL_0027:
	{
		Int32U5BU5D_t3030399641* L_4 = (Int32U5BU5D_t3030399641*)__this->get_table_4();
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_4 = (int32_t)((int32_t)((int32_t)L_7-(int32_t)1));
		goto IL_009a;
	}

IL_0038:
	{
		LinkU5BU5D_t3597933550* L_8 = V_2;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		ObjectU5BU5D_t3614634134* L_10 = (ObjectU5BU5D_t3614634134*)__this->get_slots_6();
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Il2CppObject * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck((HashSet_1_t1022910149 *)__this);
		int32_t L_14 = ((  int32_t (*) (HashSet_1_t1022910149 *, Il2CppObject *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 16)->methodPointer)((HashSet_1_t1022910149 *)__this, (Il2CppObject *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 16));
		int32_t L_15 = (int32_t)L_14;
		V_8 = (int32_t)L_15;
		((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->set_HashCode_0(L_15);
		int32_t L_16 = V_8;
		V_5 = (int32_t)L_16;
		int32_t L_17 = V_5;
		int32_t L_18 = V_0;
		V_6 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_17&(int32_t)((int32_t)2147483647LL)))%(int32_t)L_18));
		LinkU5BU5D_t3597933550* L_19 = V_2;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Int32U5BU5D_t3030399641* L_21 = V_1;
		int32_t L_22 = V_6;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		int32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->set_Next_1(((int32_t)((int32_t)L_24-(int32_t)1)));
		Int32U5BU5D_t3030399641* L_25 = V_1;
		int32_t L_26 = V_6;
		int32_t L_27 = V_4;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (int32_t)((int32_t)((int32_t)L_27+(int32_t)1)));
		LinkU5BU5D_t3597933550* L_28 = (LinkU5BU5D_t3597933550*)__this->get_links_5();
		int32_t L_29 = V_4;
		NullCheck(L_28);
		int32_t L_30 = (int32_t)((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->get_Next_1();
		V_4 = (int32_t)L_30;
	}

IL_009a:
	{
		int32_t L_31 = V_4;
		if ((!(((uint32_t)L_31) == ((uint32_t)(-1)))))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_32 = V_3;
		V_3 = (int32_t)((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_00a6:
	{
		int32_t L_33 = V_3;
		Int32U5BU5D_t3030399641* L_34 = (Int32U5BU5D_t3030399641*)__this->get_table_4();
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_34)->max_length)))))))
		{
			goto IL_0027;
		}
	}
	{
		Int32U5BU5D_t3030399641* L_35 = V_1;
		__this->set_table_4(L_35);
		LinkU5BU5D_t3597933550* L_36 = V_2;
		__this->set_links_5(L_36);
		int32_t L_37 = V_0;
		V_7 = (ObjectU5BU5D_t3614634134*)((ObjectU5BU5D_t3614634134*)SZArrayNew(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 9), (uint32_t)L_37));
		ObjectU5BU5D_t3614634134* L_38 = (ObjectU5BU5D_t3614634134*)__this->get_slots_6();
		ObjectU5BU5D_t3614634134* L_39 = V_7;
		int32_t L_40 = (int32_t)__this->get_touched_7();
		Array_Copy_m3808317496(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_38, (int32_t)0, (Il2CppArray *)(Il2CppArray *)L_39, (int32_t)0, (int32_t)L_40, /*hidden argument*/NULL);
		ObjectU5BU5D_t3614634134* L_41 = V_7;
		__this->set_slots_6(L_41);
		int32_t L_42 = V_0;
		__this->set_threshold_10((((int32_t)((int32_t)((float)((float)(((float)((float)L_42)))*(float)(0.9f)))))));
		return;
	}
}
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetLinkHashCode(System.Int32)
extern "C"  int32_t HashSet_1_GetLinkHashCode_m3972670595_gshared (HashSet_1_t1022910149 * __this, int32_t ___index0, const MethodInfo* method)
{
	{
		LinkU5BU5D_t3597933550* L_0 = (LinkU5BU5D_t3597933550*)__this->get_links_5();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_HashCode_0();
		return ((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648LL)));
	}
}
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetItemHashCode(T)
extern "C"  int32_t HashSet_1_GetItemHashCode_m433445195_gshared (HashSet_1_t1022910149 * __this, Il2CppObject * ___item0, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = ___item0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		return ((int32_t)-2147483648LL);
	}

IL_0011:
	{
		Il2CppObject* L_1 = (Il2CppObject*)__this->get_comparer_11();
		Il2CppObject * L_2 = ___item0;
		NullCheck((Il2CppObject*)L_1);
		int32_t L_3 = InterfaceFuncInvoker1< int32_t, Il2CppObject * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(!0) */, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 11), (Il2CppObject*)L_1, (Il2CppObject *)L_2);
		return ((int32_t)((int32_t)L_3|(int32_t)((int32_t)-2147483648LL)));
	}
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
extern "C"  bool HashSet_1_Add_m2918921714_gshared (HashSet_1_t1022910149 * __this, Il2CppObject * ___item0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Il2CppObject * L_0 = ___item0;
		NullCheck((HashSet_1_t1022910149 *)__this);
		int32_t L_1 = ((  int32_t (*) (HashSet_1_t1022910149 *, Il2CppObject *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 16)->methodPointer)((HashSet_1_t1022910149 *)__this, (Il2CppObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 16));
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t3030399641* L_3 = (Int32U5BU5D_t3030399641*)__this->get_table_4();
		NullCheck(L_3);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)2147483647LL)))%(int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_3)->max_length))))));
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		Il2CppObject * L_6 = ___item0;
		NullCheck((HashSet_1_t1022910149 *)__this);
		bool L_7 = ((  bool (*) (HashSet_1_t1022910149 *, int32_t, int32_t, Il2CppObject *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 17)->methodPointer)((HashSet_1_t1022910149 *)__this, (int32_t)L_4, (int32_t)L_5, (Il2CppObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 17));
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		int32_t L_8 = (int32_t)__this->get_count_9();
		int32_t L_9 = (int32_t)((int32_t)((int32_t)L_8+(int32_t)1));
		V_3 = (int32_t)L_9;
		__this->set_count_9(L_9);
		int32_t L_10 = V_3;
		int32_t L_11 = (int32_t)__this->get_threshold_10();
		if ((((int32_t)L_10) <= ((int32_t)L_11)))
		{
			goto IL_005c;
		}
	}
	{
		NullCheck((HashSet_1_t1022910149 *)__this);
		((  void (*) (HashSet_1_t1022910149 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 18)->methodPointer)((HashSet_1_t1022910149 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 18));
		int32_t L_12 = V_0;
		Int32U5BU5D_t3030399641* L_13 = (Int32U5BU5D_t3030399641*)__this->get_table_4();
		NullCheck(L_13);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)2147483647LL)))%(int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_13)->max_length))))));
	}

IL_005c:
	{
		int32_t L_14 = (int32_t)__this->get_empty_slot_8();
		V_2 = (int32_t)L_14;
		int32_t L_15 = V_2;
		if ((!(((uint32_t)L_15) == ((uint32_t)(-1)))))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_16 = (int32_t)__this->get_touched_7();
		int32_t L_17 = (int32_t)L_16;
		V_3 = (int32_t)L_17;
		__this->set_touched_7(((int32_t)((int32_t)L_17+(int32_t)1)));
		int32_t L_18 = V_3;
		V_2 = (int32_t)L_18;
		goto IL_0098;
	}

IL_0081:
	{
		LinkU5BU5D_t3597933550* L_19 = (LinkU5BU5D_t3597933550*)__this->get_links_5();
		int32_t L_20 = V_2;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->get_Next_1();
		__this->set_empty_slot_8(L_21);
	}

IL_0098:
	{
		LinkU5BU5D_t3597933550* L_22 = (LinkU5BU5D_t3597933550*)__this->get_links_5();
		int32_t L_23 = V_2;
		NullCheck(L_22);
		int32_t L_24 = V_0;
		((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->set_HashCode_0(L_24);
		LinkU5BU5D_t3597933550* L_25 = (LinkU5BU5D_t3597933550*)__this->get_links_5();
		int32_t L_26 = V_2;
		NullCheck(L_25);
		Int32U5BU5D_t3030399641* L_27 = (Int32U5BU5D_t3030399641*)__this->get_table_4();
		int32_t L_28 = V_1;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		int32_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->set_Next_1(((int32_t)((int32_t)L_30-(int32_t)1)));
		Int32U5BU5D_t3030399641* L_31 = (Int32U5BU5D_t3030399641*)__this->get_table_4();
		int32_t L_32 = V_1;
		int32_t L_33 = V_2;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)((int32_t)L_33+(int32_t)1)));
		ObjectU5BU5D_t3614634134* L_34 = (ObjectU5BU5D_t3614634134*)__this->get_slots_6();
		int32_t L_35 = V_2;
		Il2CppObject * L_36 = ___item0;
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (Il2CppObject *)L_36);
		int32_t L_37 = (int32_t)__this->get_generation_13();
		__this->set_generation_13(((int32_t)((int32_t)L_37+(int32_t)1)));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
extern "C"  void HashSet_1_Clear_m350367572_gshared (HashSet_1_t1022910149 * __this, const MethodInfo* method)
{
	{
		__this->set_count_9(0);
		Int32U5BU5D_t3030399641* L_0 = (Int32U5BU5D_t3030399641*)__this->get_table_4();
		Int32U5BU5D_t3030399641* L_1 = (Int32U5BU5D_t3030399641*)__this->get_table_4();
		NullCheck(L_1);
		Array_Clear_m782967417(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_0, (int32_t)0, (int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_1)->max_length)))), /*hidden argument*/NULL);
		ObjectU5BU5D_t3614634134* L_2 = (ObjectU5BU5D_t3614634134*)__this->get_slots_6();
		ObjectU5BU5D_t3614634134* L_3 = (ObjectU5BU5D_t3614634134*)__this->get_slots_6();
		NullCheck(L_3);
		Array_Clear_m782967417(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_2, (int32_t)0, (int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_3)->max_length)))), /*hidden argument*/NULL);
		LinkU5BU5D_t3597933550* L_4 = (LinkU5BU5D_t3597933550*)__this->get_links_5();
		LinkU5BU5D_t3597933550* L_5 = (LinkU5BU5D_t3597933550*)__this->get_links_5();
		NullCheck(L_5);
		Array_Clear_m782967417(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_4, (int32_t)0, (int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_5)->max_length)))), /*hidden argument*/NULL);
		__this->set_empty_slot_8((-1));
		__this->set_touched_7(0);
		int32_t L_6 = (int32_t)__this->get_generation_13();
		__this->set_generation_13(((int32_t)((int32_t)L_6+(int32_t)1)));
		return;
	}
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
extern "C"  bool HashSet_1_Contains_m1075264948_gshared (HashSet_1_t1022910149 * __this, Il2CppObject * ___item0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Il2CppObject * L_0 = ___item0;
		NullCheck((HashSet_1_t1022910149 *)__this);
		int32_t L_1 = ((  int32_t (*) (HashSet_1_t1022910149 *, Il2CppObject *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 16)->methodPointer)((HashSet_1_t1022910149 *)__this, (Il2CppObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 16));
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t3030399641* L_3 = (Int32U5BU5D_t3030399641*)__this->get_table_4();
		NullCheck(L_3);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)2147483647LL)))%(int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_3)->max_length))))));
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		Il2CppObject * L_6 = ___item0;
		NullCheck((HashSet_1_t1022910149 *)__this);
		bool L_7 = ((  bool (*) (HashSet_1_t1022910149 *, int32_t, int32_t, Il2CppObject *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 17)->methodPointer)((HashSet_1_t1022910149 *)__this, (int32_t)L_4, (int32_t)L_5, (Il2CppObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 17));
		return L_7;
	}
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
extern Il2CppClass* Il2CppObject_il2cpp_TypeInfo_var;
extern const uint32_t HashSet_1_Remove_m4157587527_MetadataUsageId;
extern "C"  bool HashSet_1_Remove_m4157587527_gshared (HashSet_1_t1022910149 * __this, Il2CppObject * ___item0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HashSet_1_Remove_m4157587527_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Link_t865133271  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Il2CppObject * V_5 = NULL;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	{
		Il2CppObject * L_0 = ___item0;
		NullCheck((HashSet_1_t1022910149 *)__this);
		int32_t L_1 = ((  int32_t (*) (HashSet_1_t1022910149 *, Il2CppObject *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 16)->methodPointer)((HashSet_1_t1022910149 *)__this, (Il2CppObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 16));
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t3030399641* L_3 = (Int32U5BU5D_t3030399641*)__this->get_table_4();
		NullCheck(L_3);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)2147483647LL)))%(int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_3)->max_length))))));
		Int32U5BU5D_t3030399641* L_4 = (Int32U5BU5D_t3030399641*)__this->get_table_4();
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = (int32_t)((int32_t)((int32_t)L_7-(int32_t)1));
		int32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)(-1)))))
		{
			goto IL_002d;
		}
	}
	{
		return (bool)0;
	}

IL_002d:
	{
		V_3 = (int32_t)(-1);
	}

IL_002f:
	{
		LinkU5BU5D_t3597933550* L_9 = (LinkU5BU5D_t3597933550*)__this->get_links_5();
		int32_t L_10 = V_2;
		NullCheck(L_9);
		V_4 = (Link_t865133271 )(*(Link_t865133271 *)((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10))));
		int32_t L_11 = (int32_t)(&V_4)->get_HashCode_0();
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-2147483648LL)))))
		{
			goto IL_00a2;
		}
	}
	{
		Il2CppObject * L_14 = ___item0;
		if (!L_14)
		{
			goto IL_007b;
		}
	}
	{
		ObjectU5BU5D_t3614634134* L_15 = (ObjectU5BU5D_t3614634134*)__this->get_slots_6();
		int32_t L_16 = V_2;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Il2CppObject * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		if (L_18)
		{
			goto IL_00a2;
		}
	}

IL_007b:
	{
		Il2CppObject * L_19 = ___item0;
		if (L_19)
		{
			goto IL_009c;
		}
	}
	{
		ObjectU5BU5D_t3614634134* L_20 = (ObjectU5BU5D_t3614634134*)__this->get_slots_6();
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		Il2CppObject * L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		G_B10_0 = ((((Il2CppObject*)(Il2CppObject *)NULL) == ((Il2CppObject*)(Il2CppObject *)L_23))? 1 : 0);
		goto IL_009d;
	}

IL_009c:
	{
		G_B10_0 = 0;
	}

IL_009d:
	{
		G_B12_0 = G_B10_0;
		goto IL_00ba;
	}

IL_00a2:
	{
		Il2CppObject* L_24 = (Il2CppObject*)__this->get_comparer_11();
		ObjectU5BU5D_t3614634134* L_25 = (ObjectU5BU5D_t3614634134*)__this->get_slots_6();
		int32_t L_26 = V_2;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		Il2CppObject * L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		Il2CppObject * L_29 = ___item0;
		NullCheck((Il2CppObject*)L_24);
		bool L_30 = InterfaceFuncInvoker2< bool, Il2CppObject *, Il2CppObject * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(!0,!0) */, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 11), (Il2CppObject*)L_24, (Il2CppObject *)L_28, (Il2CppObject *)L_29);
		G_B12_0 = ((int32_t)(L_30));
	}

IL_00ba:
	{
		if (!G_B12_0)
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_00d5;
	}

IL_00c4:
	{
		int32_t L_31 = V_2;
		V_3 = (int32_t)L_31;
		int32_t L_32 = (int32_t)(&V_4)->get_Next_1();
		V_2 = (int32_t)L_32;
		int32_t L_33 = V_2;
		if ((!(((uint32_t)L_33) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}

IL_00d5:
	{
		int32_t L_34 = V_2;
		if ((!(((uint32_t)L_34) == ((uint32_t)(-1)))))
		{
			goto IL_00de;
		}
	}
	{
		return (bool)0;
	}

IL_00de:
	{
		int32_t L_35 = (int32_t)__this->get_count_9();
		__this->set_count_9(((int32_t)((int32_t)L_35-(int32_t)1)));
		int32_t L_36 = V_3;
		if ((!(((uint32_t)L_36) == ((uint32_t)(-1)))))
		{
			goto IL_0113;
		}
	}
	{
		Int32U5BU5D_t3030399641* L_37 = (Int32U5BU5D_t3030399641*)__this->get_table_4();
		int32_t L_38 = V_1;
		LinkU5BU5D_t3597933550* L_39 = (LinkU5BU5D_t3597933550*)__this->get_links_5();
		int32_t L_40 = V_2;
		NullCheck(L_39);
		int32_t L_41 = (int32_t)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->get_Next_1();
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)((int32_t)L_41+(int32_t)1)));
		goto IL_0135;
	}

IL_0113:
	{
		LinkU5BU5D_t3597933550* L_42 = (LinkU5BU5D_t3597933550*)__this->get_links_5();
		int32_t L_43 = V_3;
		NullCheck(L_42);
		LinkU5BU5D_t3597933550* L_44 = (LinkU5BU5D_t3597933550*)__this->get_links_5();
		int32_t L_45 = V_2;
		NullCheck(L_44);
		int32_t L_46 = (int32_t)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->get_Next_1();
		((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_43)))->set_Next_1(L_46);
	}

IL_0135:
	{
		LinkU5BU5D_t3597933550* L_47 = (LinkU5BU5D_t3597933550*)__this->get_links_5();
		int32_t L_48 = V_2;
		NullCheck(L_47);
		int32_t L_49 = (int32_t)__this->get_empty_slot_8();
		((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->set_Next_1(L_49);
		int32_t L_50 = V_2;
		__this->set_empty_slot_8(L_50);
		LinkU5BU5D_t3597933550* L_51 = (LinkU5BU5D_t3597933550*)__this->get_links_5();
		int32_t L_52 = V_2;
		NullCheck(L_51);
		((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->set_HashCode_0(0);
		ObjectU5BU5D_t3614634134* L_53 = (ObjectU5BU5D_t3614634134*)__this->get_slots_6();
		int32_t L_54 = V_2;
		Initobj (Il2CppObject_il2cpp_TypeInfo_var, (&V_5));
		Il2CppObject * L_55 = V_5;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(L_54), (Il2CppObject *)L_55);
		int32_t L_56 = (int32_t)__this->get_generation_13();
		__this->set_generation_13(((int32_t)((int32_t)L_56+(int32_t)1)));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern Il2CppClass* NotImplementedException_t2785117854_il2cpp_TypeInfo_var;
extern const uint32_t HashSet_1_GetObjectData_m2935317189_MetadataUsageId;
extern "C"  void HashSet_1_GetObjectData_m2935317189_gshared (HashSet_1_t1022910149 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HashSet_1_GetObjectData_m2935317189_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t2785117854 * L_0 = (NotImplementedException_t2785117854 *)il2cpp_codegen_object_new(NotImplementedException_t2785117854_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m808189835(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::OnDeserialization(System.Object)
extern Il2CppClass* NotImplementedException_t2785117854_il2cpp_TypeInfo_var;
extern const uint32_t HashSet_1_OnDeserialization_m1222146673_MetadataUsageId;
extern "C"  void HashSet_1_OnDeserialization_m1222146673_gshared (HashSet_1_t1022910149 * __this, Il2CppObject * ___sender0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HashSet_1_OnDeserialization_m1222146673_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t228987430 * L_0 = (SerializationInfo_t228987430 *)__this->get_si_12();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		NotImplementedException_t2785117854 * L_1 = (NotImplementedException_t2785117854 *)il2cpp_codegen_object_new(NotImplementedException_t2785117854_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m808189835(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}
}
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t3806193287  HashSet_1_GetEnumerator_m623886159_gshared (HashSet_1_t1022910149 * __this, const MethodInfo* method)
{
	{
		Enumerator_t3806193287  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Enumerator__ctor_m1279102766(&L_0, (HashSet_1_t1022910149 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 2));
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
