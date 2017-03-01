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

// Vuforia.VirtualButtonImpl
struct VirtualButtonImpl_t2449737797;
// System.String
struct String_t;
// Vuforia.ImageTarget
struct ImageTarget_t2090577482;
// Vuforia.DataSet
struct DataSet_t626511550;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_RectangleData934532407.h"
#include "mscorlib_System_String2029220233.h"
#include "Vuforia_UnityExtensions_Vuforia_DataSet626511550.h"
#include "Vuforia_UnityExtensions_Vuforia_VirtualButton_Sens1678924861.h"

// System.String Vuforia.VirtualButtonImpl::get_Name()
extern "C"  String_t* VirtualButtonImpl_get_Name_m215985868 (VirtualButtonImpl_t2449737797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VirtualButtonImpl::get_ID()
extern "C"  int32_t VirtualButtonImpl_get_ID_m84970095 (VirtualButtonImpl_t2449737797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonImpl::get_Enabled()
extern "C"  bool VirtualButtonImpl_get_Enabled_m3234422381 (VirtualButtonImpl_t2449737797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.RectangleData Vuforia.VirtualButtonImpl::get_Area()
extern "C"  RectangleData_t934532407  VirtualButtonImpl_get_Area_m2641550899 (VirtualButtonImpl_t2449737797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonImpl::.ctor(System.String,System.Int32,Vuforia.RectangleData,Vuforia.ImageTarget,Vuforia.DataSet)
extern "C"  void VirtualButtonImpl__ctor_m3058463529 (VirtualButtonImpl_t2449737797 * __this, String_t* ___name0, int32_t ___id1, RectangleData_t934532407  ___area2, Il2CppObject * ___imageTarget3, DataSet_t626511550 * ___dataSet4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonImpl::SetArea(Vuforia.RectangleData)
extern "C"  bool VirtualButtonImpl_SetArea_m4087599671 (VirtualButtonImpl_t2449737797 * __this, RectangleData_t934532407  ___area0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonImpl::SetSensitivity(Vuforia.VirtualButton/Sensitivity)
extern "C"  bool VirtualButtonImpl_SetSensitivity_m2382816725 (VirtualButtonImpl_t2449737797 * __this, int32_t ___sensitivity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonImpl::SetEnabled(System.Boolean)
extern "C"  bool VirtualButtonImpl_SetEnabled_m1713083893 (VirtualButtonImpl_t2449737797 * __this, bool ___enabled0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
