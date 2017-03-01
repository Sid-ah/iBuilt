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

// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t2307748940;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_DateTime693205669.h"

// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64)
extern "C"  void Score__ctor_m4088571740 (Score_t2307748940 * __this, String_t* ___leaderboardID0, int64_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64,System.String,System.DateTime,System.String,System.Int32)
extern "C"  void Score__ctor_m449446173 (Score_t2307748940 * __this, String_t* ___leaderboardID0, int64_t ___value1, String_t* ___userID2, DateTime_t693205669  ___date3, String_t* ___formattedValue4, int32_t ___rank5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.Score::ToString()
extern "C"  String_t* Score_ToString_m2361881169 (Score_t2307748940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID()
extern "C"  String_t* Score_get_leaderboardID_m2566602022 (Score_t2307748940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String)
extern "C"  void Score_set_leaderboardID_m2847392905 (Score_t2307748940 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value()
extern "C"  int64_t Score_get_value_m1883227153 (Score_t2307748940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64)
extern "C"  void Score_set_value_m3584530198 (Score_t2307748940 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
