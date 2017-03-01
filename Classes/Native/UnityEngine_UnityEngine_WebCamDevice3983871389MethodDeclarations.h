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

// System.String
struct String_t;
// UnityEngine.WebCamDevice
struct WebCamDevice_t3983871389;
struct WebCamDevice_t3983871389_marshaled_pinvoke;
struct WebCamDevice_t3983871389_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_WebCamDevice3983871389.h"

// System.String UnityEngine.WebCamDevice::get_name()
extern "C"  String_t* WebCamDevice_get_name_m1117076425 (WebCamDevice_t3983871389 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct WebCamDevice_t3983871389;
struct WebCamDevice_t3983871389_marshaled_pinvoke;

extern "C" void WebCamDevice_t3983871389_marshal_pinvoke(const WebCamDevice_t3983871389& unmarshaled, WebCamDevice_t3983871389_marshaled_pinvoke& marshaled);
extern "C" void WebCamDevice_t3983871389_marshal_pinvoke_back(const WebCamDevice_t3983871389_marshaled_pinvoke& marshaled, WebCamDevice_t3983871389& unmarshaled);
extern "C" void WebCamDevice_t3983871389_marshal_pinvoke_cleanup(WebCamDevice_t3983871389_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct WebCamDevice_t3983871389;
struct WebCamDevice_t3983871389_marshaled_com;

extern "C" void WebCamDevice_t3983871389_marshal_com(const WebCamDevice_t3983871389& unmarshaled, WebCamDevice_t3983871389_marshaled_com& marshaled);
extern "C" void WebCamDevice_t3983871389_marshal_com_back(const WebCamDevice_t3983871389_marshaled_com& marshaled, WebCamDevice_t3983871389& unmarshaled);
extern "C" void WebCamDevice_t3983871389_marshal_com_cleanup(WebCamDevice_t3983871389_marshaled_com& marshaled);
