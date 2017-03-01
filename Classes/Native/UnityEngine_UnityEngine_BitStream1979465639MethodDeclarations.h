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

// UnityEngine.BitStream
struct BitStream_t1979465639;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_BitStream1979465639.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_NetworkViewID3942988548.h"
#include "UnityEngine_UnityEngine_NetworkPlayer1243528291.h"
#include "mscorlib_System_String2029220233.h"

// System.Void UnityEngine.BitStream::.ctor()
extern "C"  void BitStream__ctor_m3947899936 (BitStream_t1979465639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializeb(System.Int32&)
extern "C"  void BitStream_Serializeb_m2728727597 (BitStream_t1979465639 * __this, int32_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializec(System.Char&)
extern "C"  void BitStream_Serializec_m2418807390 (BitStream_t1979465639 * __this, Il2CppChar* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializes(System.Int16&)
extern "C"  void BitStream_Serializes_m1379945554 (BitStream_t1979465639 * __this, int16_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializei(System.Int32&)
extern "C"  void BitStream_Serializei_m1463666006 (BitStream_t1979465639 * __this, int32_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializef(System.Single&,System.Single)
extern "C"  void BitStream_Serializef_m745934178 (BitStream_t1979465639 * __this, float* ___value0, float ___maximumDelta1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializeq(UnityEngine.Quaternion&,System.Single)
extern "C"  void BitStream_Serializeq_m4825889 (BitStream_t1979465639 * __this, Quaternion_t4030073918 * ___value0, float ___maximumDelta1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::INTERNAL_CALL_Serializeq(UnityEngine.BitStream,UnityEngine.Quaternion&,System.Single)
extern "C"  void BitStream_INTERNAL_CALL_Serializeq_m2945252026 (Il2CppObject * __this /* static, unused */, BitStream_t1979465639 * ___self0, Quaternion_t4030073918 * ___value1, float ___maximumDelta2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializev(UnityEngine.Vector3&,System.Single)
extern "C"  void BitStream_Serializev_m2025246298 (BitStream_t1979465639 * __this, Vector3_t2243707580 * ___value0, float ___maximumDelta1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::INTERNAL_CALL_Serializev(UnityEngine.BitStream,UnityEngine.Vector3&,System.Single)
extern "C"  void BitStream_INTERNAL_CALL_Serializev_m928884041 (Il2CppObject * __this /* static, unused */, BitStream_t1979465639 * ___self0, Vector3_t2243707580 * ___value1, float ___maximumDelta2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializen(UnityEngine.NetworkViewID&)
extern "C"  void BitStream_Serializen_m1340978949 (BitStream_t1979465639 * __this, NetworkViewID_t3942988548 * ___viewID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::INTERNAL_CALL_Serializen(UnityEngine.BitStream,UnityEngine.NetworkViewID&)
extern "C"  void BitStream_INTERNAL_CALL_Serializen_m1742444286 (Il2CppObject * __this /* static, unused */, BitStream_t1979465639 * ___self0, NetworkViewID_t3942988548 * ___viewID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(System.Boolean&)
extern "C"  void BitStream_Serialize_m390089021 (BitStream_t1979465639 * __this, bool* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(System.Char&)
extern "C"  void BitStream_Serialize_m2742111985 (BitStream_t1979465639 * __this, Il2CppChar* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(System.Int16&)
extern "C"  void BitStream_Serialize_m1625036513 (BitStream_t1979465639 * __this, int16_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(System.Int32&)
extern "C"  void BitStream_Serialize_m3312079847 (BitStream_t1979465639 * __this, int32_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(System.Single&)
extern "C"  void BitStream_Serialize_m2064522995 (BitStream_t1979465639 * __this, float* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(System.Single&,System.Single)
extern "C"  void BitStream_Serialize_m622035106 (BitStream_t1979465639 * __this, float* ___value0, float ___maxDelta1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(UnityEngine.Quaternion&)
extern "C"  void BitStream_Serialize_m2762694425 (BitStream_t1979465639 * __this, Quaternion_t4030073918 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(UnityEngine.Quaternion&,System.Single)
extern "C"  void BitStream_Serialize_m3564943814 (BitStream_t1979465639 * __this, Quaternion_t4030073918 * ___value0, float ___maxDelta1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(UnityEngine.Vector3&)
extern "C"  void BitStream_Serialize_m753399111 (BitStream_t1979465639 * __this, Vector3_t2243707580 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(UnityEngine.Vector3&,System.Single)
extern "C"  void BitStream_Serialize_m1992343662 (BitStream_t1979465639 * __this, Vector3_t2243707580 * ___value0, float ___maxDelta1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(UnityEngine.NetworkPlayer&)
extern "C"  void BitStream_Serialize_m2844992970 (BitStream_t1979465639 * __this, NetworkPlayer_t1243528291 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(UnityEngine.NetworkViewID&)
extern "C"  void BitStream_Serialize_m2826028759 (BitStream_t1979465639 * __this, NetworkViewID_t3942988548 * ___viewID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.BitStream::get_isReading()
extern "C"  bool BitStream_get_isReading_m1625418235 (BitStream_t1979465639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.BitStream::get_isWriting()
extern "C"  bool BitStream_get_isWriting_m3519823449 (BitStream_t1979465639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(System.String&)
extern "C"  void BitStream_Serialize_m1778986188 (BitStream_t1979465639 * __this, String_t** ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
