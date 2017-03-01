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

// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
struct GcLeaderboard_t453887929;
// UnityEngine.SocialPlatforms.Impl.Leaderboard
struct Leaderboard_t4160680639;
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData[]
struct GcScoreDataU5BU5D_t4052399267;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Object
struct Il2CppObject;
struct GcLeaderboard_t453887929_marshaled_pinvoke;
struct GcLeaderboard_t453887929_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Leade4160680639.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter3676783238.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::.ctor(UnityEngine.SocialPlatforms.Impl.Leaderboard)
extern "C"  void GcLeaderboard__ctor_m983739183 (GcLeaderboard_t453887929 * __this, Leaderboard_t4160680639 * ___board0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Finalize()
extern "C"  void GcLeaderboard_Finalize_m827643570 (GcLeaderboard_t453887929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Contains(UnityEngine.SocialPlatforms.Impl.Leaderboard)
extern "C"  bool GcLeaderboard_Contains_m3937847094 (GcLeaderboard_t453887929 * __this, Leaderboard_t4160680639 * ___board0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetScores(UnityEngine.SocialPlatforms.GameCenter.GcScoreData[])
extern "C"  void GcLeaderboard_SetScores_m695766380 (GcLeaderboard_t453887929 * __this, GcScoreDataU5BU5D_t4052399267* ___scoreDatas0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetLocalScore(UnityEngine.SocialPlatforms.GameCenter.GcScoreData)
extern "C"  void GcLeaderboard_SetLocalScore_m1455692368 (GcLeaderboard_t453887929 * __this, GcScoreData_t3676783238  ___scoreData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetMaxRange(System.UInt32)
extern "C"  void GcLeaderboard_SetMaxRange_m124828187 (GcLeaderboard_t453887929 * __this, uint32_t ___maxRange0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetTitle(System.String)
extern "C"  void GcLeaderboard_SetTitle_m404553404 (GcLeaderboard_t453887929 * __this, String_t* ___title0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScores(System.String,System.Int32,System.Int32,System.String[],System.Int32,System.Int32,System.Object)
extern "C"  void GcLeaderboard_Internal_LoadScores_m631571419 (GcLeaderboard_t453887929 * __this, String_t* ___category0, int32_t ___from1, int32_t ___count2, StringU5BU5D_t1642385972* ___userIDs3, int32_t ___playerScope4, int32_t ___timeScope5, Il2CppObject * ___callback6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Loading()
extern "C"  bool GcLeaderboard_Loading_m1117879034 (GcLeaderboard_t453887929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Dispose()
extern "C"  void GcLeaderboard_Dispose_m3243478693 (GcLeaderboard_t453887929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct GcLeaderboard_t453887929;
struct GcLeaderboard_t453887929_marshaled_pinvoke;

extern "C" void GcLeaderboard_t453887929_marshal_pinvoke(const GcLeaderboard_t453887929& unmarshaled, GcLeaderboard_t453887929_marshaled_pinvoke& marshaled);
extern "C" void GcLeaderboard_t453887929_marshal_pinvoke_back(const GcLeaderboard_t453887929_marshaled_pinvoke& marshaled, GcLeaderboard_t453887929& unmarshaled);
extern "C" void GcLeaderboard_t453887929_marshal_pinvoke_cleanup(GcLeaderboard_t453887929_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct GcLeaderboard_t453887929;
struct GcLeaderboard_t453887929_marshaled_com;

extern "C" void GcLeaderboard_t453887929_marshal_com(const GcLeaderboard_t453887929& unmarshaled, GcLeaderboard_t453887929_marshaled_com& marshaled);
extern "C" void GcLeaderboard_t453887929_marshal_com_back(const GcLeaderboard_t453887929_marshaled_com& marshaled, GcLeaderboard_t453887929& unmarshaled);
extern "C" void GcLeaderboard_t453887929_marshal_com_cleanup(GcLeaderboard_t453887929_marshaled_com& marshaled);
