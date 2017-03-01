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

// UnityEngine.SocialPlatforms.Impl.Leaderboard
struct Leaderboard_t4160680639;
// System.String
struct String_t;
// UnityEngine.SocialPlatforms.IScore
struct IScore_t513966369;
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t3237304636;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScope3775842435.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_Range3455291607.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope2583939667.h"

// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::.ctor()
extern "C"  void Leaderboard__ctor_m1521627019 (Leaderboard_t4160680639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::ToString()
extern "C"  String_t* Leaderboard_ToString_m1566921590 (Leaderboard_t4160680639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetLocalUserScore(UnityEngine.SocialPlatforms.IScore)
extern "C"  void Leaderboard_SetLocalUserScore_m1546635330 (Leaderboard_t4160680639 * __this, Il2CppObject * ___score0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetMaxRange(System.UInt32)
extern "C"  void Leaderboard_SetMaxRange_m255256830 (Leaderboard_t4160680639 * __this, uint32_t ___maxRange0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetScores(UnityEngine.SocialPlatforms.IScore[])
extern "C"  void Leaderboard_SetScores_m2544027503 (Leaderboard_t4160680639 * __this, IScoreU5BU5D_t3237304636* ___scores0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetTitle(System.String)
extern "C"  void Leaderboard_SetTitle_m4056985215 (Leaderboard_t4160680639 * __this, String_t* ___title0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::GetUserFilter()
extern "C"  StringU5BU5D_t1642385972* Leaderboard_GetUserFilter_m4114287667 (Leaderboard_t4160680639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id()
extern "C"  String_t* Leaderboard_get_id_m3631555582 (Leaderboard_t4160680639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String)
extern "C"  void Leaderboard_set_id_m3042129093 (Leaderboard_t4160680639 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope()
extern "C"  int32_t Leaderboard_get_userScope_m2481440059 (Leaderboard_t4160680639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope)
extern "C"  void Leaderboard_set_userScope_m4289859012 (Leaderboard_t4160680639 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range()
extern "C"  Range_t3455291607  Leaderboard_get_range_m636637371 (Leaderboard_t4160680639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range)
extern "C"  void Leaderboard_set_range_m2444071236 (Leaderboard_t4160680639 * __this, Range_t3455291607  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope()
extern "C"  int32_t Leaderboard_get_timeScope_m2249641019 (Leaderboard_t4160680639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope)
extern "C"  void Leaderboard_set_timeScope_m1932011396 (Leaderboard_t4160680639 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
