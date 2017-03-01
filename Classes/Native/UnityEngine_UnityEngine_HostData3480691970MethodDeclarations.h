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

// UnityEngine.HostData
struct HostData_t3480691970;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;
struct HostData_t3480691970_marshaled_pinvoke;
struct HostData_t3480691970_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void UnityEngine.HostData::.ctor()
extern "C"  void HostData__ctor_m3658760313 (HostData_t3480691970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.HostData::get_useNat()
extern "C"  bool HostData_get_useNat_m913506468 (HostData_t3480691970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HostData::set_useNat(System.Boolean)
extern "C"  void HostData_set_useNat_m293953067 (HostData_t3480691970 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.HostData::get_gameType()
extern "C"  String_t* HostData_get_gameType_m3171179991 (HostData_t3480691970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HostData::set_gameType(System.String)
extern "C"  void HostData_set_gameType_m2782030850 (HostData_t3480691970 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.HostData::get_gameName()
extern "C"  String_t* HostData_get_gameName_m2327200150 (HostData_t3480691970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HostData::set_gameName(System.String)
extern "C"  void HostData_set_gameName_m155735243 (HostData_t3480691970 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.HostData::get_connectedPlayers()
extern "C"  int32_t HostData_get_connectedPlayers_m3304130837 (HostData_t3480691970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HostData::set_connectedPlayers(System.Int32)
extern "C"  void HostData_set_connectedPlayers_m10216132 (HostData_t3480691970 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.HostData::get_playerLimit()
extern "C"  int32_t HostData_get_playerLimit_m778685484 (HostData_t3480691970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HostData::set_playerLimit(System.Int32)
extern "C"  void HostData_set_playerLimit_m2757196607 (HostData_t3480691970 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.HostData::get_ip()
extern "C"  StringU5BU5D_t1642385972* HostData_get_ip_m1062944386 (HostData_t3480691970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HostData::set_ip(System.String[])
extern "C"  void HostData_set_ip_m2429308365 (HostData_t3480691970 * __this, StringU5BU5D_t1642385972* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.HostData::get_port()
extern "C"  int32_t HostData_get_port_m1540456595 (HostData_t3480691970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HostData::set_port(System.Int32)
extern "C"  void HostData_set_port_m676790380 (HostData_t3480691970 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.HostData::get_passwordProtected()
extern "C"  bool HostData_get_passwordProtected_m2203608057 (HostData_t3480691970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HostData::set_passwordProtected(System.Boolean)
extern "C"  void HostData_set_passwordProtected_m1048660848 (HostData_t3480691970 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.HostData::get_comment()
extern "C"  String_t* HostData_get_comment_m2816571654 (HostData_t3480691970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HostData::set_comment(System.String)
extern "C"  void HostData_set_comment_m609360741 (HostData_t3480691970 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.HostData::get_guid()
extern "C"  String_t* HostData_get_guid_m3116013306 (HostData_t3480691970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HostData::set_guid(System.String)
extern "C"  void HostData_set_guid_m103287381 (HostData_t3480691970 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct HostData_t3480691970;
struct HostData_t3480691970_marshaled_pinvoke;

extern "C" void HostData_t3480691970_marshal_pinvoke(const HostData_t3480691970& unmarshaled, HostData_t3480691970_marshaled_pinvoke& marshaled);
extern "C" void HostData_t3480691970_marshal_pinvoke_back(const HostData_t3480691970_marshaled_pinvoke& marshaled, HostData_t3480691970& unmarshaled);
extern "C" void HostData_t3480691970_marshal_pinvoke_cleanup(HostData_t3480691970_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct HostData_t3480691970;
struct HostData_t3480691970_marshaled_com;

extern "C" void HostData_t3480691970_marshal_com(const HostData_t3480691970& unmarshaled, HostData_t3480691970_marshaled_com& marshaled);
extern "C" void HostData_t3480691970_marshal_com_back(const HostData_t3480691970_marshaled_com& marshaled, HostData_t3480691970& unmarshaled);
extern "C" void HostData_t3480691970_marshal_com_cleanup(HostData_t3480691970_marshaled_com& marshaled);
