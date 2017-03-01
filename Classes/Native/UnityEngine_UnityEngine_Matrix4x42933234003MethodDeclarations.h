#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"

// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Inverse(UnityEngine.Matrix4x4)
extern "C"  Matrix4x4_t2933234003  Matrix4x4_Inverse_m146029241 (Il2CppObject * __this /* static, unused */, Matrix4x4_t2933234003  ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::INTERNAL_CALL_Inverse(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)
extern "C"  void Matrix4x4_INTERNAL_CALL_Inverse_m4134773479 (Il2CppObject * __this /* static, unused */, Matrix4x4_t2933234003 * ___m0, Matrix4x4_t2933234003 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
extern "C"  Matrix4x4_t2933234003  Matrix4x4_get_inverse_m2479387736 (Matrix4x4_t2933234003 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C"  Matrix4x4_t2933234003  Matrix4x4_TRS_m1913765359 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___pos0, Quaternion_t4030073918  ___q1, Vector3_t2243707580  ___s2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::INTERNAL_CALL_TRS(UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&,UnityEngine.Matrix4x4&)
extern "C"  void Matrix4x4_INTERNAL_CALL_TRS_m2077933669 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580 * ___pos0, Quaternion_t4030073918 * ___q1, Vector3_t2243707580 * ___s2, Matrix4x4_t2933234003 * ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Ortho(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  Matrix4x4_t2933234003  Matrix4x4_Ortho_m462958343 (Il2CppObject * __this /* static, unused */, float ___left0, float ___right1, float ___bottom2, float ___top3, float ___zNear4, float ___zFar5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::INTERNAL_CALL_Ortho(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,UnityEngine.Matrix4x4&)
extern "C"  void Matrix4x4_INTERNAL_CALL_Ortho_m1536476527 (Il2CppObject * __this /* static, unused */, float ___left0, float ___right1, float ___bottom2, float ___top3, float ___zNear4, float ___zFar5, Matrix4x4_t2933234003 * ___value6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32,System.Int32)
extern "C"  float Matrix4x4_get_Item_m312280350 (Matrix4x4_t2933234003 * __this, int32_t ___row0, int32_t ___column1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Int32,System.Single)
extern "C"  void Matrix4x4_set_Item_m1035113911 (Matrix4x4_t2933234003 * __this, int32_t ___row0, int32_t ___column1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32)
extern "C"  float Matrix4x4_get_Item_m3317262185 (Matrix4x4_t2933234003 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Single)
extern "C"  void Matrix4x4_set_Item_m870949794 (Matrix4x4_t2933234003 * __this, int32_t ___index0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Matrix4x4::GetHashCode()
extern "C"  int32_t Matrix4x4_GetHashCode_m3649708037 (Matrix4x4_t2933234003 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::Equals(System.Object)
extern "C"  bool Matrix4x4_Equals_m1321236479 (Matrix4x4_t2933234003 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern "C"  Matrix4x4_t2933234003  Matrix4x4_op_Multiply_m2352863493 (Il2CppObject * __this /* static, unused */, Matrix4x4_t2933234003  ___lhs0, Matrix4x4_t2933234003  ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Vector4)
extern "C"  Vector4_t2243707581  Matrix4x4_op_Multiply_m2780874321 (Il2CppObject * __this /* static, unused */, Matrix4x4_t2933234003  ___lhs0, Vector4_t2243707581  ___v1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
extern "C"  Vector4_t2243707581  Matrix4x4_GetColumn_m1367096730 (Matrix4x4_t2933234003 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint(UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Matrix4x4_MultiplyPoint_m2903385193 (Matrix4x4_t2933234003 * __this, Vector3_t2243707580  ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Matrix4x4_MultiplyPoint3x4_m1007952212 (Matrix4x4_t2933234003 * __this, Vector3_t2243707580  ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_zero()
extern "C"  Matrix4x4_t2933234003  Matrix4x4_get_zero_m2893472556 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
extern "C"  Matrix4x4_t2933234003  Matrix4x4_get_identity_m3039560904 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Matrix4x4::ToString()
extern "C"  String_t* Matrix4x4_ToString_m1982554457 (Matrix4x4_t2933234003 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
