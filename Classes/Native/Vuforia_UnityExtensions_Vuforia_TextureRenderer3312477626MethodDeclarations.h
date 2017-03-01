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

// Vuforia.TextureRenderer
struct TextureRenderer_t3312477626;
// UnityEngine.Texture
struct Texture_t2243626319;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Texture2243626319.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vec829768013.h"

// System.Int32 Vuforia.TextureRenderer::get_Width()
extern "C"  int32_t TextureRenderer_get_Width_m3510583717 (TextureRenderer_t3312477626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.TextureRenderer::get_Height()
extern "C"  int32_t TextureRenderer_get_Height_m4277442898 (TextureRenderer_t3312477626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextureRenderer::.ctor(UnityEngine.Texture,System.Int32,Vuforia.VuforiaRenderer/Vec2I)
extern "C"  void TextureRenderer__ctor_m1942028846 (TextureRenderer_t3312477626 * __this, Texture_t2243626319 * ___textureToRender0, int32_t ___renderTextureLayer1, Vec2I_t829768013  ___requestedTextureSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture Vuforia.TextureRenderer::Render()
extern "C"  RenderTexture_t2666733923 * TextureRenderer_Render_m797034467 (TextureRenderer_t3312477626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextureRenderer::Destroy()
extern "C"  void TextureRenderer_Destroy_m2387433172 (TextureRenderer_t3312477626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
