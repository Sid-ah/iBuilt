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
#include "UnityEngine_UnityEngine_NetworkPlayer1243528291.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void UnityEngine.NetworkPlayer::.ctor(System.String,System.Int32)
extern "C"  void NetworkPlayer__ctor_m3970319947 (NetworkPlayer_t1243528291 * __this, String_t* ___ip0, int32_t ___port1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::Internal_GetIPAddress(System.Int32)
extern "C"  String_t* NetworkPlayer_Internal_GetIPAddress_m2394140501 (Il2CppObject * __this /* static, unused */, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkPlayer::Internal_GetPort(System.Int32)
extern "C"  int32_t NetworkPlayer_Internal_GetPort_m3852797570 (Il2CppObject * __this /* static, unused */, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::Internal_GetExternalIP()
extern "C"  String_t* NetworkPlayer_Internal_GetExternalIP_m2789058499 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkPlayer::Internal_GetExternalPort()
extern "C"  int32_t NetworkPlayer_Internal_GetExternalPort_m2755622672 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::Internal_GetLocalIP()
extern "C"  String_t* NetworkPlayer_Internal_GetLocalIP_m2626871687 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkPlayer::Internal_GetLocalPort()
extern "C"  int32_t NetworkPlayer_Internal_GetLocalPort_m2373269974 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkPlayer::Internal_GetPlayerIndex()
extern "C"  int32_t NetworkPlayer_Internal_GetPlayerIndex_m2582225917 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::Internal_GetGUID(System.Int32)
extern "C"  String_t* NetworkPlayer_Internal_GetGUID_m281231101 (Il2CppObject * __this /* static, unused */, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::Internal_GetLocalGUID()
extern "C"  String_t* NetworkPlayer_Internal_GetLocalGUID_m49665029 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkPlayer::op_Equality(UnityEngine.NetworkPlayer,UnityEngine.NetworkPlayer)
extern "C"  bool NetworkPlayer_op_Equality_m2104137122 (Il2CppObject * __this /* static, unused */, NetworkPlayer_t1243528291  ___lhs0, NetworkPlayer_t1243528291  ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkPlayer::op_Inequality(UnityEngine.NetworkPlayer,UnityEngine.NetworkPlayer)
extern "C"  bool NetworkPlayer_op_Inequality_m3070881435 (Il2CppObject * __this /* static, unused */, NetworkPlayer_t1243528291  ___lhs0, NetworkPlayer_t1243528291  ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkPlayer::GetHashCode()
extern "C"  int32_t NetworkPlayer_GetHashCode_m2788349399 (NetworkPlayer_t1243528291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkPlayer::Equals(System.Object)
extern "C"  bool NetworkPlayer_Equals_m1960901089 (NetworkPlayer_t1243528291 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::get_ipAddress()
extern "C"  String_t* NetworkPlayer_get_ipAddress_m3020320555 (NetworkPlayer_t1243528291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkPlayer::get_port()
extern "C"  int32_t NetworkPlayer_get_port_m2797602516 (NetworkPlayer_t1243528291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::get_guid()
extern "C"  String_t* NetworkPlayer_get_guid_m1047639783 (NetworkPlayer_t1243528291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::ToString()
extern "C"  String_t* NetworkPlayer_ToString_m537794039 (NetworkPlayer_t1243528291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::get_externalIP()
extern "C"  String_t* NetworkPlayer_get_externalIP_m343056966 (NetworkPlayer_t1243528291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkPlayer::get_externalPort()
extern "C"  int32_t NetworkPlayer_get_externalPort_m114464875 (NetworkPlayer_t1243528291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NetworkPlayer UnityEngine.NetworkPlayer::get_unassigned()
extern "C"  NetworkPlayer_t1243528291  NetworkPlayer_get_unassigned_m3961648431 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
