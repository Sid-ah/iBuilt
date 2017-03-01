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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderBuffer2767087968.h"
#include "UnityEngine_UnityEngine_CubemapFace1725775554.h"

// System.Int32 UnityEngine.Graphics::Internal_GetMaxDrawMeshInstanceCount()
extern "C"  int32_t Graphics_Internal_GetMaxDrawMeshInstanceCount_m3046083541 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_SetRTSimple(UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&,System.Int32,UnityEngine.CubemapFace,System.Int32)
extern "C"  void Graphics_Internal_SetRTSimple_m1052203585 (Il2CppObject * __this /* static, unused */, RenderBuffer_t2767087968 * ___color0, RenderBuffer_t2767087968 * ___depth1, int32_t ___mip2, int32_t ___face3, int32_t ___depthSlice4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTargetImpl(UnityEngine.RenderBuffer,UnityEngine.RenderBuffer,System.Int32,UnityEngine.CubemapFace,System.Int32)
extern "C"  void Graphics_SetRenderTargetImpl_m2993156656 (Il2CppObject * __this /* static, unused */, RenderBuffer_t2767087968  ___colorBuffer0, RenderBuffer_t2767087968  ___depthBuffer1, int32_t ___mipLevel2, int32_t ___face3, int32_t ___depthSlice4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTarget(UnityEngine.RenderBuffer,UnityEngine.RenderBuffer)
extern "C"  void Graphics_SetRenderTarget_m3373863973 (Il2CppObject * __this /* static, unused */, RenderBuffer_t2767087968  ___colorBuffer0, RenderBuffer_t2767087968  ___depthBuffer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::.cctor()
extern "C"  void Graphics__cctor_m3711221683 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
