#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




#pragma once
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const MethodInfo*);

	static inline R Invoke (const MethodInfo* method, void* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data (method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
