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

// Vuforia.WordListImpl
struct WordListImpl_t2150426444;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaUnity_Stora3897282321.h"
#include "Vuforia_UnityExtensions_Vuforia_WordFilterMode695600879.h"

// System.Boolean Vuforia.WordListImpl::LoadWordListFile(System.String)
extern "C"  bool WordListImpl_LoadWordListFile_m2220640552 (WordListImpl_t2150426444 * __this, String_t* ___relativePath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::LoadWordListFile(System.String,Vuforia.VuforiaUnity/StorageType)
extern "C"  bool WordListImpl_LoadWordListFile_m3178229187 (WordListImpl_t2150426444 * __this, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.WordListImpl::AddWordsFromFile(System.String)
extern "C"  int32_t WordListImpl_AddWordsFromFile_m934599620 (WordListImpl_t2150426444 * __this, String_t* ___relativePath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.WordListImpl::AddWordsFromFile(System.String,Vuforia.VuforiaUnity/StorageType)
extern "C"  int32_t WordListImpl_AddWordsFromFile_m4239366397 (WordListImpl_t2150426444 * __this, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::AddWord(System.String)
extern "C"  bool WordListImpl_AddWord_m2914751619 (WordListImpl_t2150426444 * __this, String_t* ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::RemoveWord(System.String)
extern "C"  bool WordListImpl_RemoveWord_m1457146834 (WordListImpl_t2150426444 * __this, String_t* ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::ContainsWord(System.String)
extern "C"  bool WordListImpl_ContainsWord_m784687157 (WordListImpl_t2150426444 * __this, String_t* ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::UnloadAllLists()
extern "C"  bool WordListImpl_UnloadAllLists_m672527667 (WordListImpl_t2150426444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordFilterMode Vuforia.WordListImpl::GetFilterMode()
extern "C"  int32_t WordListImpl_GetFilterMode_m978650999 (WordListImpl_t2150426444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::SetFilterMode(Vuforia.WordFilterMode)
extern "C"  bool WordListImpl_SetFilterMode_m2627170536 (WordListImpl_t2150426444 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::LoadFilterListFile(System.String)
extern "C"  bool WordListImpl_LoadFilterListFile_m1282317742 (WordListImpl_t2150426444 * __this, String_t* ___relativePath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::LoadFilterListFile(System.String,Vuforia.VuforiaUnity/StorageType)
extern "C"  bool WordListImpl_LoadFilterListFile_m969843205 (WordListImpl_t2150426444 * __this, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::AddWordToFilterList(System.String)
extern "C"  bool WordListImpl_AddWordToFilterList_m3484515656 (WordListImpl_t2150426444 * __this, String_t* ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::RemoveWordFromFilterList(System.String)
extern "C"  bool WordListImpl_RemoveWordFromFilterList_m2724088440 (WordListImpl_t2150426444 * __this, String_t* ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::ClearFilterList()
extern "C"  bool WordListImpl_ClearFilterList_m2443475993 (WordListImpl_t2150426444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.WordListImpl::GetFilterListWordCount()
extern "C"  int32_t WordListImpl_GetFilterListWordCount_m346006489 (WordListImpl_t2150426444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.WordListImpl::GetFilterListWord(System.Int32)
extern "C"  String_t* WordListImpl_GetFilterListWord_m2629737458 (WordListImpl_t2150426444 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordListImpl::.ctor()
extern "C"  void WordListImpl__ctor_m2953304286 (WordListImpl_t2150426444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
