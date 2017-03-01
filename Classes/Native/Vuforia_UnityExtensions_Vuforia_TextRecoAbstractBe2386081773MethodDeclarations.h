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

// Vuforia.TextRecoAbstractBehaviour
struct TextRecoAbstractBehaviour_t2386081773;
// Vuforia.ITextRecoEventHandler
struct ITextRecoEventHandler_t2707771717;
// System.Collections.Generic.IEnumerable`1<Vuforia.Word>
struct IEnumerable_1_t4164246531;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult>
struct IEnumerable_1_t2207634242;

#include "codegen/il2cpp-codegen.h"

// System.Boolean Vuforia.TextRecoAbstractBehaviour::get_IsInitialized()
extern "C"  bool TextRecoAbstractBehaviour_get_IsInitialized_m4262792788 (TextRecoAbstractBehaviour_t2386081773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Awake()
extern "C"  void TextRecoAbstractBehaviour_Awake_m220638410 (TextRecoAbstractBehaviour_t2386081773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnEnable()
extern "C"  void TextRecoAbstractBehaviour_OnEnable_m3783334689 (TextRecoAbstractBehaviour_t2386081773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnDisable()
extern "C"  void TextRecoAbstractBehaviour_OnDisable_m321581418 (TextRecoAbstractBehaviour_t2386081773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnDestroy()
extern "C"  void TextRecoAbstractBehaviour_OnDestroy_m1988576224 (TextRecoAbstractBehaviour_t2386081773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::RegisterTextRecoEventHandler(Vuforia.ITextRecoEventHandler)
extern "C"  void TextRecoAbstractBehaviour_RegisterTextRecoEventHandler_m2429472575 (TextRecoAbstractBehaviour_t2386081773 * __this, Il2CppObject * ___trackableEventHandler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TextRecoAbstractBehaviour::UnregisterTextRecoEventHandler(Vuforia.ITextRecoEventHandler)
extern "C"  bool TextRecoAbstractBehaviour_UnregisterTextRecoEventHandler_m3340187050 (TextRecoAbstractBehaviour_t2386081773 * __this, Il2CppObject * ___trackableEventHandler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::StartTextTracker()
extern "C"  void TextRecoAbstractBehaviour_StartTextTracker_m1237111316 (TextRecoAbstractBehaviour_t2386081773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::StopTextTracker()
extern "C"  void TextRecoAbstractBehaviour_StopTextTracker_m179921704 (TextRecoAbstractBehaviour_t2386081773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::SetupWordList()
extern "C"  void TextRecoAbstractBehaviour_SetupWordList_m1780946480 (TextRecoAbstractBehaviour_t2386081773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::NotifyEventHandlersOfChanges(System.Collections.Generic.IEnumerable`1<Vuforia.Word>,System.Collections.Generic.IEnumerable`1<Vuforia.WordResult>)
extern "C"  void TextRecoAbstractBehaviour_NotifyEventHandlersOfChanges_m2780294942 (TextRecoAbstractBehaviour_t2386081773 * __this, Il2CppObject* ___lostWords0, Il2CppObject* ___newWords1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnVuforiaInitialized()
extern "C"  void TextRecoAbstractBehaviour_OnVuforiaInitialized_m4291791820 (TextRecoAbstractBehaviour_t2386081773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnVuforiaStarted()
extern "C"  void TextRecoAbstractBehaviour_OnVuforiaStarted_m440491041 (TextRecoAbstractBehaviour_t2386081773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnTrackablesUpdated()
extern "C"  void TextRecoAbstractBehaviour_OnTrackablesUpdated_m1506886535 (TextRecoAbstractBehaviour_t2386081773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnPause(System.Boolean)
extern "C"  void TextRecoAbstractBehaviour_OnPause_m3556601501 (TextRecoAbstractBehaviour_t2386081773 * __this, bool ___pause0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::.ctor()
extern "C"  void TextRecoAbstractBehaviour__ctor_m3986867921 (TextRecoAbstractBehaviour_t2386081773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
