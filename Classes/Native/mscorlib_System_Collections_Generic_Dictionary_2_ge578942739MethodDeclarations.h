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

// System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>
struct Dictionary_2_t578942739;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1902082073;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t1767552932;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct IEnumerator_1_t106779084;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t259680273;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>
struct KeyCollection_t3062440510;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>
struct ValueCollection_t3576969878;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22631255257.h"
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E1898967441.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor()
extern "C"  void Dictionary_2__ctor_m1336594859_gshared (Dictionary_2_t578942739 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1336594859(__this, method) ((  void (*) (Dictionary_2_t578942739 *, const MethodInfo*))Dictionary_2__ctor_m1336594859_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m532323260_gshared (Dictionary_2_t578942739 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define Dictionary_2__ctor_m532323260(__this, ___comparer0, method) ((  void (*) (Dictionary_2_t578942739 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m532323260_gshared)(__this, ___comparer0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m3100688476_gshared (Dictionary_2_t578942739 * __this, int32_t ___capacity0, const MethodInfo* method);
#define Dictionary_2__ctor_m3100688476(__this, ___capacity0, method) ((  void (*) (Dictionary_2_t578942739 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m3100688476_gshared)(__this, ___capacity0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m2368594354_gshared (Dictionary_2_t578942739 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2__ctor_m2368594354(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t578942739 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2__ctor_m2368594354_gshared)(__this, ___info0, ___context1, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m245852467_gshared (Dictionary_2_t578942739 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m245852467(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t578942739 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m245852467_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m2665139222_gshared (Dictionary_2_t578942739 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m2665139222(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t578942739 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m2665139222_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m4145812537_gshared (Dictionary_2_t578942739 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m4145812537(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t578942739 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m4145812537_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m669242682_gshared (Dictionary_2_t578942739 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m669242682(__this, ___key0, method) ((  void (*) (Dictionary_2_t578942739 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m669242682_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m3274375831_gshared (Dictionary_2_t578942739 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m3274375831(__this, method) ((  bool (*) (Dictionary_2_t578942739 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m3274375831_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2028371007_gshared (Dictionary_2_t578942739 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2028371007(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t578942739 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2028371007_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1698101393_gshared (Dictionary_2_t578942739 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1698101393(__this, method) ((  bool (*) (Dictionary_2_t578942739 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1698101393_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m4167532392_gshared (Dictionary_2_t578942739 * __this, KeyValuePair_2_t2631255257  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m4167532392(__this, ___keyValuePair0, method) ((  void (*) (Dictionary_2_t578942739 *, KeyValuePair_2_t2631255257 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m4167532392_gshared)(__this, ___keyValuePair0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3336263524_gshared (Dictionary_2_t578942739 * __this, KeyValuePair_2_t2631255257  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3336263524(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t578942739 *, KeyValuePair_2_t2631255257 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3336263524_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2925824612_gshared (Dictionary_2_t578942739 * __this, KeyValuePair_2U5BU5D_t1767552932* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2925824612(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t578942739 *, KeyValuePair_2U5BU5D_t1767552932*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2925824612_gshared)(__this, ___array0, ___index1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3709701003_gshared (Dictionary_2_t578942739 * __this, KeyValuePair_2_t2631255257  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3709701003(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t578942739 *, KeyValuePair_2_t2631255257 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3709701003_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m1938109839_gshared (Dictionary_2_t578942739 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1938109839(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t578942739 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1938109839_gshared)(__this, ___array0, ___index1, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m2906187466_gshared (Dictionary_2_t578942739 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m2906187466(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t578942739 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m2906187466_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m3442852713_gshared (Dictionary_2_t578942739 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m3442852713(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t578942739 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m3442852713_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m132026740_gshared (Dictionary_2_t578942739 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m132026740(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t578942739 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m132026740_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m3771444247_gshared (Dictionary_2_t578942739 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m3771444247(__this, method) ((  int32_t (*) (Dictionary_2_t578942739 *, const MethodInfo*))Dictionary_2_get_Count_m3771444247_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Item(TKey)
extern "C"  uint16_t Dictionary_2_get_Item_m1227256300_gshared (Dictionary_2_t578942739 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_get_Item_m1227256300(__this, ___key0, method) ((  uint16_t (*) (Dictionary_2_t578942739 *, Il2CppObject *, const MethodInfo*))Dictionary_2_get_Item_m1227256300_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m2885998043_gshared (Dictionary_2_t578942739 * __this, Il2CppObject * ___key0, uint16_t ___value1, const MethodInfo* method);
#define Dictionary_2_set_Item_m2885998043(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t578942739 *, Il2CppObject *, uint16_t, const MethodInfo*))Dictionary_2_set_Item_m2885998043_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m3907652115_gshared (Dictionary_2_t578942739 * __this, int32_t ___capacity0, Il2CppObject* ___hcp1, const MethodInfo* method);
#define Dictionary_2_Init_m3907652115(__this, ___capacity0, ___hcp1, method) ((  void (*) (Dictionary_2_t578942739 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m3907652115_gshared)(__this, ___capacity0, ___hcp1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m2352489512_gshared (Dictionary_2_t578942739 * __this, int32_t ___size0, const MethodInfo* method);
#define Dictionary_2_InitArrays_m2352489512(__this, ___size0, method) ((  void (*) (Dictionary_2_t578942739 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m2352489512_gshared)(__this, ___size0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m3615590210_gshared (Dictionary_2_t578942739 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m3615590210(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t578942739 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m3615590210_gshared)(__this, ___array0, ___index1, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t2631255257  Dictionary_2_make_pair_m89138784_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, uint16_t ___value1, const MethodInfo* method);
#define Dictionary_2_make_pair_m89138784(__this /* static, unused */, ___key0, ___value1, method) ((  KeyValuePair_2_t2631255257  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, uint16_t, const MethodInfo*))Dictionary_2_make_pair_m89138784_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::pick_key(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_key_m2202345174_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, uint16_t ___value1, const MethodInfo* method);
#define Dictionary_2_pick_key_m2202345174(__this /* static, unused */, ___key0, ___value1, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, Il2CppObject *, uint16_t, const MethodInfo*))Dictionary_2_pick_key_m2202345174_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::pick_value(TKey,TValue)
extern "C"  uint16_t Dictionary_2_pick_value_m2661216374_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, uint16_t ___value1, const MethodInfo* method);
#define Dictionary_2_pick_value_m2661216374(__this /* static, unused */, ___key0, ___value1, method) ((  uint16_t (*) (Il2CppObject * /* static, unused */, Il2CppObject *, uint16_t, const MethodInfo*))Dictionary_2_pick_value_m2661216374_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m2774011895_gshared (Dictionary_2_t578942739 * __this, KeyValuePair_2U5BU5D_t1767552932* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyTo_m2774011895(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t578942739 *, KeyValuePair_2U5BU5D_t1767552932*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m2774011895_gshared)(__this, ___array0, ___index1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Resize()
extern "C"  void Dictionary_2_Resize_m3212938849_gshared (Dictionary_2_t578942739 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m3212938849(__this, method) ((  void (*) (Dictionary_2_t578942739 *, const MethodInfo*))Dictionary_2_Resize_m3212938849_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m3396967512_gshared (Dictionary_2_t578942739 * __this, Il2CppObject * ___key0, uint16_t ___value1, const MethodInfo* method);
#define Dictionary_2_Add_m3396967512(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t578942739 *, Il2CppObject *, uint16_t, const MethodInfo*))Dictionary_2_Add_m3396967512_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Clear()
extern "C"  void Dictionary_2_Clear_m2758547320_gshared (Dictionary_2_t578942739 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m2758547320(__this, method) ((  void (*) (Dictionary_2_t578942739 *, const MethodInfo*))Dictionary_2_Clear_m2758547320_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m2438994708_gshared (Dictionary_2_t578942739 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m2438994708(__this, ___key0, method) ((  bool (*) (Dictionary_2_t578942739 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsKey_m2438994708_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m4125488468_gshared (Dictionary_2_t578942739 * __this, uint16_t ___value0, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m4125488468(__this, ___value0, method) ((  bool (*) (Dictionary_2_t578942739 *, uint16_t, const MethodInfo*))Dictionary_2_ContainsValue_m4125488468_gshared)(__this, ___value0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m4204266811_gshared (Dictionary_2_t578942739 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m4204266811(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t578942739 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2_GetObjectData_m4204266811_gshared)(__this, ___info0, ___context1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m2256565307_gshared (Dictionary_2_t578942739 * __this, Il2CppObject * ___sender0, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m2256565307(__this, ___sender0, method) ((  void (*) (Dictionary_2_t578942739 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m2256565307_gshared)(__this, ___sender0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m805783548_gshared (Dictionary_2_t578942739 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_Remove_m805783548(__this, ___key0, method) ((  bool (*) (Dictionary_2_t578942739 *, Il2CppObject *, const MethodInfo*))Dictionary_2_Remove_m805783548_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m815803635_gshared (Dictionary_2_t578942739 * __this, Il2CppObject * ___key0, uint16_t* ___value1, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m815803635(__this, ___key0, ___value1, method) ((  bool (*) (Dictionary_2_t578942739 *, Il2CppObject *, uint16_t*, const MethodInfo*))Dictionary_2_TryGetValue_m815803635_gshared)(__this, ___key0, ___value1, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Keys()
extern "C"  KeyCollection_t3062440510 * Dictionary_2_get_Keys_m1679975896_gshared (Dictionary_2_t578942739 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m1679975896(__this, method) ((  KeyCollection_t3062440510 * (*) (Dictionary_2_t578942739 *, const MethodInfo*))Dictionary_2_get_Keys_m1679975896_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Values()
extern "C"  ValueCollection_t3576969878 * Dictionary_2_get_Values_m1592329424_gshared (Dictionary_2_t578942739 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1592329424(__this, method) ((  ValueCollection_t3576969878 * (*) (Dictionary_2_t578942739 *, const MethodInfo*))Dictionary_2_get_Values_m1592329424_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ToTKey(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTKey_m340839209_gshared (Dictionary_2_t578942739 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ToTKey_m340839209(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t578942739 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m340839209_gshared)(__this, ___key0, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ToTValue(System.Object)
extern "C"  uint16_t Dictionary_2_ToTValue_m3754075617_gshared (Dictionary_2_t578942739 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ToTValue_m3754075617(__this, ___value0, method) ((  uint16_t (*) (Dictionary_2_t578942739 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m3754075617_gshared)(__this, ___value0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m2430542939_gshared (Dictionary_2_t578942739 * __this, KeyValuePair_2_t2631255257  ___pair0, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m2430542939(__this, ___pair0, method) ((  bool (*) (Dictionary_2_t578942739 *, KeyValuePair_2_t2631255257 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m2430542939_gshared)(__this, ___pair0, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::GetEnumerator()
extern "C"  Enumerator_t1898967441  Dictionary_2_GetEnumerator_m1759009312_gshared (Dictionary_2_t578942739 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1759009312(__this, method) ((  Enumerator_t1898967441  (*) (Dictionary_2_t578942739 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1759009312_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t3048875398  Dictionary_2_U3CCopyToU3Em__0_m650990137_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, uint16_t ___value1, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m650990137(__this /* static, unused */, ___key0, ___value1, method) ((  DictionaryEntry_t3048875398  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, uint16_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m650990137_gshared)(__this /* static, unused */, ___key0, ___value1, method)
