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

// UnityEngine.NetworkView
struct NetworkView_t172525251;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_NetworkMessageInfo614064059.h"
#include "UnityEngine_UnityEngine_NetworkPlayer1243528291.h"

// System.Double UnityEngine.NetworkMessageInfo::get_timestamp()
extern "C"  double NetworkMessageInfo_get_timestamp_m462964950 (NetworkMessageInfo_t614064059 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NetworkPlayer UnityEngine.NetworkMessageInfo::get_sender()
extern "C"  NetworkPlayer_t1243528291  NetworkMessageInfo_get_sender_m2366451889 (NetworkMessageInfo_t614064059 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NetworkView UnityEngine.NetworkMessageInfo::get_networkView()
extern "C"  NetworkView_t172525251 * NetworkMessageInfo_get_networkView_m1180629659 (NetworkMessageInfo_t614064059 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NetworkView UnityEngine.NetworkMessageInfo::NullNetworkView()
extern "C"  NetworkView_t172525251 * NetworkMessageInfo_NullNetworkView_m230600625 (NetworkMessageInfo_t614064059 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
