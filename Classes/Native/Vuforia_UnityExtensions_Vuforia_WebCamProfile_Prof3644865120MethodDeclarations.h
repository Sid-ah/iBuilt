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

// System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>
struct Dictionary_2_t3639445750;
// Vuforia.WebCamProfile/ProfileCollection
struct ProfileCollection_t3644865120;
struct ProfileCollection_t3644865120_marshaled_pinvoke;
struct ProfileCollection_t3644865120_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_WebCamProfile_Prof3644865120.h"
#include "Vuforia_UnityExtensions_Vuforia_WebCamProfile_Prof1724666488.h"

// System.Void Vuforia.WebCamProfile/ProfileCollection::.ctor(Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>)
extern "C"  void ProfileCollection__ctor_m1604460341 (ProfileCollection_t3644865120 * __this, ProfileData_t1724666488  ___defaultProfile0, Dictionary_2_t3639445750 * ___profiles1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ProfileCollection_t3644865120;
struct ProfileCollection_t3644865120_marshaled_pinvoke;

extern "C" void ProfileCollection_t3644865120_marshal_pinvoke(const ProfileCollection_t3644865120& unmarshaled, ProfileCollection_t3644865120_marshaled_pinvoke& marshaled);
extern "C" void ProfileCollection_t3644865120_marshal_pinvoke_back(const ProfileCollection_t3644865120_marshaled_pinvoke& marshaled, ProfileCollection_t3644865120& unmarshaled);
extern "C" void ProfileCollection_t3644865120_marshal_pinvoke_cleanup(ProfileCollection_t3644865120_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ProfileCollection_t3644865120;
struct ProfileCollection_t3644865120_marshaled_com;

extern "C" void ProfileCollection_t3644865120_marshal_com(const ProfileCollection_t3644865120& unmarshaled, ProfileCollection_t3644865120_marshaled_com& marshaled);
extern "C" void ProfileCollection_t3644865120_marshal_com_back(const ProfileCollection_t3644865120_marshaled_com& marshaled, ProfileCollection_t3644865120& unmarshaled);
extern "C" void ProfileCollection_t3644865120_marshal_com_cleanup(ProfileCollection_t3644865120_marshaled_com& marshaled);
