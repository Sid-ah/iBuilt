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

// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_NetworkViewID3942988548.h"
#include "UnityEngine_UnityEngine_NetworkPlayer1243528291.h"
#include "mscorlib_System_Object2689449295.h"

// UnityEngine.NetworkViewID UnityEngine.NetworkViewID::get_unassigned()
extern "C"  NetworkViewID_t3942988548  NetworkViewID_get_unassigned_m2814913999 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NetworkViewID::INTERNAL_get_unassigned(UnityEngine.NetworkViewID&)
extern "C"  void NetworkViewID_INTERNAL_get_unassigned_m132572206 (Il2CppObject * __this /* static, unused */, NetworkViewID_t3942988548 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkViewID::Internal_IsMine(UnityEngine.NetworkViewID)
extern "C"  bool NetworkViewID_Internal_IsMine_m763014699 (Il2CppObject * __this /* static, unused */, NetworkViewID_t3942988548  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkViewID::INTERNAL_CALL_Internal_IsMine(UnityEngine.NetworkViewID&)
extern "C"  bool NetworkViewID_INTERNAL_CALL_Internal_IsMine_m753595398 (Il2CppObject * __this /* static, unused */, NetworkViewID_t3942988548 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NetworkViewID::Internal_GetOwner(UnityEngine.NetworkViewID,UnityEngine.NetworkPlayer&)
extern "C"  void NetworkViewID_Internal_GetOwner_m89862041 (Il2CppObject * __this /* static, unused */, NetworkViewID_t3942988548  ___value0, NetworkPlayer_t1243528291 * ___player1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NetworkViewID::INTERNAL_CALL_Internal_GetOwner(UnityEngine.NetworkViewID&,UnityEngine.NetworkPlayer&)
extern "C"  void NetworkViewID_INTERNAL_CALL_Internal_GetOwner_m874918604 (Il2CppObject * __this /* static, unused */, NetworkViewID_t3942988548 * ___value0, NetworkPlayer_t1243528291 * ___player1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkViewID::Internal_GetString(UnityEngine.NetworkViewID)
extern "C"  String_t* NetworkViewID_Internal_GetString_m403971590 (Il2CppObject * __this /* static, unused */, NetworkViewID_t3942988548  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkViewID::INTERNAL_CALL_Internal_GetString(UnityEngine.NetworkViewID&)
extern "C"  String_t* NetworkViewID_INTERNAL_CALL_Internal_GetString_m346869803 (Il2CppObject * __this /* static, unused */, NetworkViewID_t3942988548 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkViewID::Internal_Compare(UnityEngine.NetworkViewID,UnityEngine.NetworkViewID)
extern "C"  bool NetworkViewID_Internal_Compare_m3248992772 (Il2CppObject * __this /* static, unused */, NetworkViewID_t3942988548  ___lhs0, NetworkViewID_t3942988548  ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkViewID::INTERNAL_CALL_Internal_Compare(UnityEngine.NetworkViewID&,UnityEngine.NetworkViewID&)
extern "C"  bool NetworkViewID_INTERNAL_CALL_Internal_Compare_m61154333 (Il2CppObject * __this /* static, unused */, NetworkViewID_t3942988548 * ___lhs0, NetworkViewID_t3942988548 * ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkViewID::op_Equality(UnityEngine.NetworkViewID,UnityEngine.NetworkViewID)
extern "C"  bool NetworkViewID_op_Equality_m4173239775 (Il2CppObject * __this /* static, unused */, NetworkViewID_t3942988548  ___lhs0, NetworkViewID_t3942988548  ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkViewID::op_Inequality(UnityEngine.NetworkViewID,UnityEngine.NetworkViewID)
extern "C"  bool NetworkViewID_op_Inequality_m309368134 (Il2CppObject * __this /* static, unused */, NetworkViewID_t3942988548  ___lhs0, NetworkViewID_t3942988548  ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkViewID::GetHashCode()
extern "C"  int32_t NetworkViewID_GetHashCode_m3141878442 (NetworkViewID_t3942988548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkViewID::Equals(System.Object)
extern "C"  bool NetworkViewID_Equals_m809788370 (NetworkViewID_t3942988548 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkViewID::get_isMine()
extern "C"  bool NetworkViewID_get_isMine_m1234363003 (NetworkViewID_t3942988548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NetworkPlayer UnityEngine.NetworkViewID::get_owner()
extern "C"  NetworkPlayer_t1243528291  NetworkViewID_get_owner_m1900957708 (NetworkViewID_t3942988548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkViewID::ToString()
extern "C"  String_t* NetworkViewID_ToString_m3348378544 (NetworkViewID_t3942988548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
