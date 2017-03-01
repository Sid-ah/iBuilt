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

// UnityEngine.SocialPlatforms.Impl.LocalUser
struct LocalUser_t3019851150;
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_t3461248430;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::.ctor()
extern "C"  void LocalUser__ctor_m456101162 (LocalUser_t3019851150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetFriends(UnityEngine.SocialPlatforms.IUserProfile[])
extern "C"  void LocalUser_SetFriends_m3706685636 (LocalUser_t3019851150 * __this, IUserProfileU5BU5D_t3461248430* ___friends0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetAuthenticated(System.Boolean)
extern "C"  void LocalUser_SetAuthenticated_m3483845210 (LocalUser_t3019851150 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetUnderage(System.Boolean)
extern "C"  void LocalUser_SetUnderage_m3689639158 (LocalUser_t3019851150 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::get_authenticated()
extern "C"  bool LocalUser_get_authenticated_m1586290046 (LocalUser_t3019851150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
