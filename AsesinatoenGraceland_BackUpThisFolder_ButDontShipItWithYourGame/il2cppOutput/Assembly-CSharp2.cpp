#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		void* params[3] = { &p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		void* params[4] = { p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector2>
struct IEnumerable_1_t6C47A8FE62321E6AD75C312B8549AFD2B13F0591;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>
struct IEnumerable_1_t5C1E5CDFEA99062D152E83B174072FEDB9763788;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// PropMaker.Ladder
struct Ladder_t7E7D2C20156D7E9D077F024C74E1F3C9CB85C15A;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PropMaker.Prop
struct Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// FillefranzTools.Helper/ForEach
struct ForEach_t9D4A8E0E0060FDAED2CEC54D3449B036BF21DFEB;
// FillefranzTools.Helper/Function
struct Function_t067AEBDDB28DF3B009BB38FE3BFD4FDDFEE7742B;
// FillefranzTools.Helper/GridFunction2D
struct GridFunction2D_t62F59E4C9D7E140BD9A5DD1A34605094771BCD9B;
// FillefranzTools.Helper/GridFunction3D
struct GridFunction3D_t56D3426C3894411B09825B82497743A0448EB5E5;

IL2CPP_EXTERN_C RuntimeClass* Helper_t4C1D75F8F501E3C3350F5CF4596BAE983DB527EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralBCD6A8E9DCF930FE19989EC467783CF6B1C53E18;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFC0F02CCD26A6A186031CF43E92D7B60EA1CC370_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExtensionMethods_ReverseOrder_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED506DA2408D7FE17CD8457EC3D25CFCF46BB762_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m79CB520C0C1362FE97CA8619B6B59F18E80349BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// PropMaker.Prop/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_t1F72DEE1570BD43E5809F6FFF9EE824D98F56513 
{
	// PropMaker.Prop PropMaker.Prop/<>c__DisplayClass34_0::<>4__this
	Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* ___U3CU3E4__this_0;
	// System.Collections.Generic.List`1<System.Int32> PropMaker.Prop/<>c__DisplayClass34_0::tris
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___tris_1;
};

// PropMaker.Prop/<>c__DisplayClass35_0
struct U3CU3Ec__DisplayClass35_0_tA91CB26E915E1C611D280EB5800FE8AD144EFEEA 
{
	// PropMaker.Prop PropMaker.Prop/<>c__DisplayClass35_0::<>4__this
	Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* ___U3CU3E4__this_0;
	// System.Collections.Generic.List`1<System.Int32> PropMaker.Prop/<>c__DisplayClass35_0::tris
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___tris_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// FillefranzTools.Parabola
struct Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877 
{
	// UnityEngine.Vector3 FillefranzTools.Parabola::startPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPoint_0;
	// UnityEngine.Vector3 FillefranzTools.Parabola::endPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endPoint_1;
	// System.Boolean FillefranzTools.Parabola::fixHeight
	bool ___fixHeight_2;
	// System.Single FillefranzTools.Parabola::fixedHeight
	float ___fixedHeight_3;
	// System.Boolean FillefranzTools.Parabola::curveDown
	bool ___curveDown_4;
	// System.Single FillefranzTools.Parabola::flatness
	float ___flatness_5;
	// System.Single FillefranzTools.Parabola::<a>k__BackingField
	float ___U3CaU3Ek__BackingField_6;
	// System.Single FillefranzTools.Parabola::<b>k__BackingField
	float ___U3CbU3Ek__BackingField_7;
	// System.Single FillefranzTools.Parabola::<c>k__BackingField
	float ___U3CcU3Ek__BackingField_8;
	// System.Single FillefranzTools.Parabola::angle
	float ___angle_9;
	// System.Single FillefranzTools.Parabola::v0
	float ___v0_10;
	// System.Single FillefranzTools.Parabola::time
	float ___time_11;
	// System.Single FillefranzTools.Parabola::height
	float ___height_12;
	// System.Single FillefranzTools.Parabola::gndDst
	float ___gndDst_13;
	// UnityEngine.Vector3 FillefranzTools.Parabola::direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_14;
	// UnityEngine.Vector3 FillefranzTools.Parabola::groundDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___groundDirection_15;
	// UnityEngine.Vector3 FillefranzTools.Parabola::targetPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPos_16;
};
// Native definition for P/Invoke marshalling of FillefranzTools.Parabola
struct Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPoint_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endPoint_1;
	int32_t ___fixHeight_2;
	float ___fixedHeight_3;
	int32_t ___curveDown_4;
	float ___flatness_5;
	float ___U3CaU3Ek__BackingField_6;
	float ___U3CbU3Ek__BackingField_7;
	float ___U3CcU3Ek__BackingField_8;
	float ___angle_9;
	float ___v0_10;
	float ___time_11;
	float ___height_12;
	float ___gndDst_13;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_14;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___groundDirection_15;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPos_16;
};
// Native definition for COM marshalling of FillefranzTools.Parabola
struct Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPoint_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endPoint_1;
	int32_t ___fixHeight_2;
	float ___fixedHeight_3;
	int32_t ___curveDown_4;
	float ___flatness_5;
	float ___U3CaU3Ek__BackingField_6;
	float ___U3CbU3Ek__BackingField_7;
	float ___U3CcU3Ek__BackingField_8;
	float ___angle_9;
	float ___v0_10;
	float ___time_11;
	float ___height_12;
	float ___gndDst_13;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_14;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___groundDirection_15;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPos_16;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// FillefranzTools.Helper/ForEach
struct ForEach_t9D4A8E0E0060FDAED2CEC54D3449B036BF21DFEB  : public MulticastDelegate_t
{
};

// FillefranzTools.Helper/Function
struct Function_t067AEBDDB28DF3B009BB38FE3BFD4FDDFEE7742B  : public MulticastDelegate_t
{
};

// FillefranzTools.Helper/GridFunction2D
struct GridFunction2D_t62F59E4C9D7E140BD9A5DD1A34605094771BCD9B  : public MulticastDelegate_t
{
};

// FillefranzTools.Helper/GridFunction3D
struct GridFunction3D_t56D3426C3894411B09825B82497743A0448EB5E5  : public MulticastDelegate_t
{
};

// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// PropMaker.Prop
struct Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 PropMaker.Prop::editorTab
	int32_t ___editorTab_4;
	// System.Boolean PropMaker.Prop::autoUpdate
	bool ___autoUpdate_5;
	// System.Boolean PropMaker.Prop::hasLoaded
	bool ___hasLoaded_6;
	// System.Int32 PropMaker.Prop::seed
	int32_t ___seed_7;
	// System.Int32 PropMaker.Prop::vertexCount
	int32_t ___vertexCount_8;
	// System.Int32 PropMaker.Prop::triangleCount
	int32_t ___triangleCount_9;
	// UnityEngine.MeshFilter PropMaker.Prop::<meshFilter>k__BackingField
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___U3CmeshFilterU3Ek__BackingField_10;
	// UnityEngine.MeshCollider PropMaker.Prop::<meshCollider>k__BackingField
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* ___U3CmeshColliderU3Ek__BackingField_11;
	// UnityEngine.MeshRenderer PropMaker.Prop::<meshRenderer>k__BackingField
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___U3CmeshRendererU3Ek__BackingField_12;
	// UnityEngine.Mesh PropMaker.Prop::<mesh>k__BackingField
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___U3CmeshU3Ek__BackingField_13;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> PropMaker.Prop::<vertices>k__BackingField
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___U3CverticesU3Ek__BackingField_14;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> PropMaker.Prop::normals
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___normals_15;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> PropMaker.Prop::uvs
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___uvs_16;
	// System.String PropMaker.Prop::meshName
	String_t* ___meshName_17;
};

// PropMaker.Ladder
struct Ladder_t7E7D2C20156D7E9D077F024C74E1F3C9CB85C15A  : public Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E
{
	// UnityEngine.Vector3 PropMaker.Ladder::start
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start_18;
	// UnityEngine.Vector3 PropMaker.Ladder::end
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___end_19;
	// System.Single PropMaker.Ladder::rotation
	float ___rotation_20;
	// System.Single PropMaker.Ladder::width
	float ___width_21;
	// System.Single PropMaker.Ladder::railWidth
	float ___railWidth_22;
	// System.Single PropMaker.Ladder::railThickness
	float ___railThickness_23;
	// PropMaker.Ladder/EndMode PropMaker.Ladder::endMode
	int32_t ___endMode_24;
	// System.Boolean PropMaker.Ladder::fixedStepAmount
	bool ___fixedStepAmount_25;
	// System.Single PropMaker.Ladder::stepSpacing
	float ___stepSpacing_26;
	// System.Single PropMaker.Ladder::stepRadius
	float ___stepRadius_27;
	// System.Single PropMaker.Ladder::stepPadding
	float ___stepPadding_28;
	// System.Int32 PropMaker.Ladder::numberOfSteps
	int32_t ___numberOfSteps_29;
	// System.Int32 PropMaker.Ladder::stepResolution
	int32_t ___stepResolution_30;
	// System.Boolean PropMaker.Ladder::autoCenter
	bool ___autoCenter_31;
	// FillefranzTools.PropEditMode PropMaker.Ladder::editMode
	int32_t ___editMode_32;
	// FillefranzTools.EditOrientation PropMaker.Ladder::editOrientation
	int32_t ___editOrientation_33;
	// System.Collections.Generic.List`1<System.Int32> PropMaker.Ladder::tris
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___tris_34;
	// System.Single PropMaker.Ladder::length
	float ___length_35;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};


// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___item0, const RuntimeMethod* method) ;
// T[] FillefranzTools.ExtensionMethods::ReverseOrder<System.Int32>(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ExtensionMethods_ReverseOrder_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED506DA2408D7FE17CD8457EC3D25CFCF46BB762_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___array0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m79CB520C0C1362FE97CA8619B6B59F18E80349BC_gshared (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_gshared (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method) ;

// System.Single FillefranzTools.Parabola::get_a()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Parabola_get_a_m45657B88E4858AB7B90EEC89388F69ACA341E1DD_inline (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, const RuntimeMethod* method) ;
// System.Void FillefranzTools.Parabola::set_a(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Parabola_set_a_m93234FDAFF2059B499CEC330BB682A802583526B_inline (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single FillefranzTools.Parabola::get_b()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Parabola_get_b_m06FC4C4FC4136097B8BF0313413B497537BD1FB0_inline (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, const RuntimeMethod* method) ;
// System.Void FillefranzTools.Parabola::set_b(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Parabola_set_b_m9A9E83C230FEE06963971E2D935587620EBF3380_inline (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single FillefranzTools.Parabola::get_c()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Parabola_get_c_m5AD3671CEE18CCAFBDD327392760C595BB315FA2_inline (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, const RuntimeMethod* method) ;
// System.Void FillefranzTools.Parabola::set_c(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Parabola_set_c_mAF6F75BA41324AD4C3A56625F2666792E3FE44C3_inline (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, float ___value0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.String FillefranzTools.Parabola::get_equation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parabola_get_equation_mECBD56080A3552AA80F33212B8AC7ED47C9C90A8 (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, const RuntimeMethod* method) ;
// System.Single FillefranzTools.Parabola::get_Height()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Parabola_get_Height_m1F7CD2074EB90BA935E1E8CCEB06990812E143E4_inline (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, const RuntimeMethod* method) ;
// System.Single FillefranzTools.Parabola::get_Angle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Parabola_get_Angle_m4E391DC7D8343F68AC9FD5D59D3D68F4EEE88C05_inline (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, const RuntimeMethod* method) ;
// System.Single FillefranzTools.Parabola::get_GroundDistance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Parabola_get_GroundDistance_m74A67B47F8979477CA6AD697A16114C18689209F_inline (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 FillefranzTools.Parabola::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Parabola_get_Direction_m00D4B1A4769B83C9354C52535D6442FCE96162B3 (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 FillefranzTools.Parabola::get_GroundDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Parabola_get_GroundDirection_m10A1E37CB84CD83F450E2D407125686DE660EBDF (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 FillefranzTools.Parabola::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Parabola_Evaluate_m48BAE59794AEFD1812011DCD578FFB33EC41340B (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, float ___t0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 FillefranzTools.Parabola::get_Center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Parabola_get_Center_m370021598246A3567F320515FD397863B6C65247 (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 FillefranzTools.ExtensionMethods::OverrideY(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ExtensionMethods_OverrideY_mD6CCA8D712AEA47186521FA999EFDB16D3854334 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v30, float ___y1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Boolean FillefranzTools.Parabola::Recalculate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parabola_Recalculate_mBBFFF00304A2B0269CE16E3F3BDA8FEEA98E3D1F (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, const RuntimeMethod* method) ;
// System.Void FillefranzTools.Parabola::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parabola__ctor_m294348227A0399934868CDC061D36DF7EF4EE35E (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPoint0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endPoint1, const RuntimeMethod* method) ;
// System.Void FillefranzTools.Parabola::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parabola__ctor_m4878780E0853590DE3289CCBC460E33A18E5B142 (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPoint0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endPoint1, float ___fixedHeight2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Physics::get_gravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Physics_get_gravity_m94393492AE4ED8B38A22ECCDCD2DDDB71BFA010D (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___f0, const RuntimeMethod* method) ;
// System.Single FillefranzTools.ExtensionMethods::Square(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ExtensionMethods_Square_m381CF8C8AC297B3435EF8E93C07B7DBA499CBC1E (float ___value0, const RuntimeMethod* method) ;
// System.Single FillefranzTools.Parabola::GetTFromY(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Parabola_GetTFromY_m8E08DB230D50BAFECFB8D4122841F6FFBE19AEBF (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, float ___y0, float ___sign1, const RuntimeMethod* method) ;
// System.Single FillefranzTools.Parabola::GetTFromX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Parabola_GetTFromX_m32768B2D6A72CAE005D72CF94F1F10B85C47DC49 (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, float ___x0, const RuntimeMethod* method) ;
// System.Single FillefranzTools.Parabola::GetY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Parabola_GetY_mD83C77375BF4FA34724B9EA6524634795BDCFBF9 (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, float ___x0, const RuntimeMethod* method) ;
// System.Single FillefranzTools.Parabola::GetX(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Parabola_GetX_m3074D8B2CEF2AFE54050B653920654FDD0337EB9 (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, float ___y0, float ___sign1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void FillefranzTools.Parabola::CalculatePathWithHeight(UnityEngine.Vector3,System.Single,System.Single&,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parabola_CalculatePathWithHeight_mD97EC9597A2A12FB3A16314780C64C28BA7B0DE4 (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPos0, float ___h1, float* ___v02, float* ___angle3, float* ___time4, const RuntimeMethod* method) ;
// System.Single FillefranzTools.Helper::QuadraticFormula(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Helper_QuadraticFormula_m75133E30977735435261ADCBF0ACA3B2291C4216 (float ___a0, float ___b1, float ___c2, float ___sign3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Single FillefranzTools.Parabola::Length(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Parabola_Length_m5C058B5C13FAAF93B48AE7990EB9A01616757BDD (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, float ___step0, const RuntimeMethod* method) ;
// System.Single FillefranzTools.Parabola::Length(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Parabola_Length_m76630EEFF6F4726D05986E883A29373A9E0B0394 (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, float ___step0, float ___maxT1, const RuntimeMethod* method) ;
// System.Int32 FillefranzTools.Parabola::Sections(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parabola_Sections_m06EB57E4D58E369DFC90A217B00B88B73F3FBA34 (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, float ___step0, const RuntimeMethod* method) ;
// System.Single FillefranzTools.Parabola::DstToTime(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Parabola_DstToTime_m00E7882CE989C77E9362C2C28F27E4AB1A0C6E43 (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, float ___step0, float ___distance1, const RuntimeMethod* method) ;
// System.Single FillefranzTools.Parabola::Derivation(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Parabola_Derivation_m62302FBD24228DAD89DC2A2A58F5F69F5454CBEC (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, float ___t0, float ___dX1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 FillefranzTools.Parabola::DirectionAtPoint(System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Parabola_DirectionAtPoint_m96613167B3F1BB5B1BA62A910745DC978CF5837A (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, float ___t0, float ___step1, int32_t ___sign2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 FillefranzTools.Parabola::NormalAtPoint(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Parabola_NormalAtPoint_m2DA3EA91DF7271DB78089DF12E23AC3413B05953 (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, float ___t0, float ___step1, const RuntimeMethod* method) ;
// System.Single FillefranzTools.Parabola::GetClosestTFromPos(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Parabola_GetClosestTFromPos_m3A9177D00AEB699959D1CC663B5349C96D773354 (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, float ___step1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 FillefranzTools.ExtensionMethods::FromXZ(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ExtensionMethods_FromXZ_m6074BC8E1147608844517952C23BE0A0C2FBF136 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v30, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Single FillefranzTools.Parabola::GetHeightFromXZ(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Parabola_GetHeightFromXZ_m8AFD7D1D7A6D0E9B40D136841241DD39C997DFB8 (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, float ___step1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 FillefranzTools.Parabola::MaxPoint(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Parabola_MaxPoint_m35A55A88C3F7D60FD28BDBB8A329583764BE234A (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, float ___step0, const RuntimeMethod* method) ;
// System.Single FillefranzTools.Parabola::MaxPointT(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Parabola_MaxPointT_m385947A4BB37321C638E89A729B7D19CA39FA252 (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, float ___step0, const RuntimeMethod* method) ;
// System.Single FillefranzTools.Parabola::StartToMaxDst(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Parabola_StartToMaxDst_m1FD573D14A44914FDE8330C00941826F46DCD23D (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, float ___step0, const RuntimeMethod* method) ;
// System.Single FillefranzTools.Parabola::DstToMax(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Parabola_DstToMax_m53D5100CBB064C83951292053ACF3BBD0FC3BAC9 (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, float ___step1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) ;
// System.Single FillefranzTools.Parabola::GetAngleAtPoint(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Parabola_GetAngleAtPoint_m8BDF2CD07F8C971D2BD4EFBBC16ADE589A60672E (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, float ___t0, float ___step1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 PropMaker.Ladder::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ladder_get_forward_mFBF9C619691DB4A7FF201472D608E35374C1159B (Ladder_t7E7D2C20156D7E9D077F024C74E1F3C9CB85C15A* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80 (float ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 PropMaker.Ladder::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ladder_get_up_mB2C99B91214AA29E73F442CF608F3C5B3AA12AAB (Ladder_t7E7D2C20156D7E9D077F024C74E1F3C9CB85C15A* __this, const RuntimeMethod* method) ;
// System.Void PropMaker.Ladder::Recenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ladder_Recenter_mE74A7E0F254DD73C949492DA8C9D18A4B6B0BB3B (Ladder_t7E7D2C20156D7E9D077F024C74E1F3C9CB85C15A* __this, const RuntimeMethod* method) ;
// System.Void PropMaker.Ladder::CreateRail(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ladder_CreateRail_m0EC3E185556306524EB172E736FB36AF868A4C6D (Ladder_t7E7D2C20156D7E9D077F024C74E1F3C9CB85C15A* __this, int32_t ___sign0, const RuntimeMethod* method) ;
// System.Void PropMaker.Ladder::CalculateStepValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ladder_CalculateStepValues_mE6D1B6DFF77ECCEFC5ADB11456ECE5C74C299A32 (Ladder_t7E7D2C20156D7E9D077F024C74E1F3C9CB85C15A* __this, const RuntimeMethod* method) ;
// System.Void PropMaker.Ladder::PlaceSteps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ladder_PlaceSteps_mC542866E19F076A95949CCD177D8B67BCBCCE137 (Ladder_t7E7D2C20156D7E9D077F024C74E1F3C9CB85C15A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 PropMaker.Ladder::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ladder_get_right_m29E137C18FFC7C9CBC9DD841CA75B4962FD29E46 (Ladder_t7E7D2C20156D7E9D077F024C74E1F3C9CB85C15A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) ;
// System.Void PropMaker.Prop::CreatePlane(UnityEngine.Vector3,UnityEngine.Vector2,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector2,System.Collections.Generic.List`1<System.Int32>,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Prop_CreatePlane_m9917530169221CCD4DEF19ADE8B665955E6177B3 (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPoint0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___size1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___xDir2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___yDir3, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___tiling4, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___tris5, bool ___flipTris6, bool ___invertUVX7, bool ___invertUVY8, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] FillefranzTools.Helper::PointsOnCircle(System.Single,System.Int32,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Helper_PointsOnCircle_mF2E1EE772405FAEFDE2F99ADEB89A7476B1F4096 (float ___radius0, int32_t ___pointNum1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___centerPoint2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___edgeDir3, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal4, const RuntimeMethod* method) ;
// System.Void PropMaker.Prop::ConnectCircles(UnityEngine.Vector3[],UnityEngine.Vector3[],System.Collections.Generic.List`1<System.Int32>,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Prop_ConnectCircles_m8202516A94348559CFA36BCB5131BB2520D6D70C (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___circleA0, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___circleB1, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___tris2, float ___uvStart3, float ___uvEnd4, bool ___flipTris5, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.Vector3> PropMaker.Prop::get_vertices()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Item(System.Int32,T)
inline void List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C_gshared)(__this, ___index0, ___value1, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline)(__this, method);
}
// UnityEngine.Mesh PropMaker.Prop::get_mesh()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* Prop_get_mesh_m7ACDC9F94B55D786428742581160D36AACBA7E57_inline (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_indexFormat(UnityEngine.Rendering.IndexFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_indexFormat_mCCC7837A0916FA7A272159DA6AF984B0022488F4 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::SetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetVertices_mCE01139EEEC3D10B4A6CEA1749FD84DABC53599E (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___inVertices0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::SetTriangles(System.Collections.Generic.List`1<System.Int32>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetTriangles_mD495DA0B00DB0E60A2B7B500D644F4470C1D61DB (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___triangles0, int32_t ___submesh1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::SetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetUVs_m5A7A6EC14A621579B7138F2EF9BECA60E880A8D7 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___channel0, List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___uvs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::SetNormals(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetNormals_mB4072A4D2600768FD62BC9CAAFF8C43955A4A365 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___inNormals0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.MeshFilter PropMaker.Prop::get_meshFilter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* Prop_get_meshFilter_mB45F1C5BDFA3B615229CB1BFB362E4F763EE142A_inline (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8 (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// UnityEngine.MeshCollider PropMaker.Prop::get_meshCollider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* Prop_get_meshCollider_mC9BB81EB39E87F3AEB088BBA2C1DCCBC5C5088D0_inline (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MeshCollider::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCollider_set_sharedMesh_m05F87B9AC04139285EBBCC159F77B51C6940E79C (MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
inline void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
inline void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Clear()
inline void List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, const RuntimeMethod*))List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void PropMaker.Prop::set_mesh(UnityEngine.Mesh)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Prop_set_mesh_m55D410E9666D62CCD6C5EAA6B21635C9FE343A67_inline (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Clear_m0F95397EA143D31AD0B4D332E8C6FA25A7957BC0 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// System.Void PropMaker.Prop::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Prop__ctor_m11AF1C48E48741D916C89D5FA50B9486C619C173 (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void PropMaker.Prop::set_meshFilter(UnityEngine.MeshFilter)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Prop_set_meshFilter_m64B146E400C50487464E99044FE8CE5E3ECBD1E4_inline (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___value0, const RuntimeMethod* method) ;
// UnityEngine.MeshRenderer PropMaker.Prop::get_meshRenderer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Prop_get_meshRenderer_mAB716A3E4C2A034AFA6BC5440F5ACA583EAF48C4_inline (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void PropMaker.Prop::set_meshRenderer(UnityEngine.MeshRenderer)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Prop_set_meshRenderer_m8EE05C900BE245DB184CE00170520EF9236CBFD8_inline (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshCollider>()
inline MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* Component_GetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFC0F02CCD26A6A186031CF43E92D7B60EA1CC370 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void PropMaker.Prop::set_meshCollider(UnityEngine.MeshCollider)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Prop_set_meshCollider_m8DC2D6E2D1D60AB42EF8CE1489F3B413234966EE_inline (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE_gshared)(__this, ___collection0, method);
}
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
inline void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(T)
inline void List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single FillefranzTools.Helper::Remap(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Helper_Remap_mC74F88BA0815F1E873F9B52EE056997D5AE0697F (float ___value0, float ___currentMin1, float ___currentMax2, float ___newMin3, float ___newMax4, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Void PropMaker.Prop::<CreateCube>g__SetFace|34_0(PropMaker.Prop/<>c__DisplayClass34_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Prop_U3CCreateCubeU3Eg__SetFaceU7C34_0_m1289086EC068594090CC0D82346399588E75890D (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, U3CU3Ec__DisplayClass34_0_t1F72DEE1570BD43E5809F6FFF9EE824D98F56513* p0, const RuntimeMethod* method) ;
// System.Void PropMaker.Prop::<Create4FaceCube>g__SetFace|35_0(PropMaker.Prop/<>c__DisplayClass35_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Prop_U3CCreate4FaceCubeU3Eg__SetFaceU7C35_0_mEB799106422B27FC5D37919F9E1C082A486E458F (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, U3CU3Ec__DisplayClass35_0_tA91CB26E915E1C611D280EB5800FE8AD144EFEEA* p0, const RuntimeMethod* method) ;
// System.Int32 FillefranzTools.ExtensionMethods::Floor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExtensionMethods_Floor_mB73CB6E686BB6A7F375FCEF44CA06A0237016907 (float ___value0, const RuntimeMethod* method) ;
// T[] FillefranzTools.ExtensionMethods::ReverseOrder<System.Int32>(T[])
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ExtensionMethods_ReverseOrder_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED506DA2408D7FE17CD8457EC3D25CFCF46BB762 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___array0, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, const RuntimeMethod*))ExtensionMethods_ReverseOrder_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED506DA2408D7FE17CD8457EC3D25CFCF46BB762_gshared)(___array0, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m79CB520C0C1362FE97CA8619B6B59F18E80349BC (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m79CB520C0C1362FE97CA8619B6B59F18E80349BC_gshared)(__this, ___collection0, method);
}
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Scale(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Scale_mE0DC2C1B7902271788591F17DBE7F7F72EC37283_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale0, const RuntimeMethod* method) ;
// System.Int32[] UnityEngine.Mesh::get_triangles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Mesh_get_triangles_m33E39B4A383CC613C760FA7E297AC417A433F24B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_normals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Mesh_get_normals_m2B6B159B799E6E235EA651FCAB2E18EE5B18ED62 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* Mesh_get_uv_mA47805C48AB3493FF3727922C43E77880E73519F (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor()
inline void List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, const RuntimeMethod*))List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void GridFunction2D_Invoke_mE4FEF62D1CE4E689A4C1BF1F5FA04CD3C33A6DA1_Multicast(GridFunction2D_t62F59E4C9D7E140BD9A5DD1A34605094771BCD9B* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GridFunction2D_t62F59E4C9D7E140BD9A5DD1A34605094771BCD9B* currentDelegate = reinterpret_cast<GridFunction2D_t62F59E4C9D7E140BD9A5DD1A34605094771BCD9B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___x0, ___y1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void GridFunction2D_Invoke_mE4FEF62D1CE4E689A4C1BF1F5FA04CD3C33A6DA1_OpenInst(GridFunction2D_t62F59E4C9D7E140BD9A5DD1A34605094771BCD9B* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___x0, ___y1, method);
}
void GridFunction2D_Invoke_mE4FEF62D1CE4E689A4C1BF1F5FA04CD3C33A6DA1_OpenStatic(GridFunction2D_t62F59E4C9D7E140BD9A5DD1A34605094771BCD9B* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___x0, ___y1, method);
}
void GridFunction2D_Invoke_mE4FEF62D1CE4E689A4C1BF1F5FA04CD3C33A6DA1_OpenStaticInvoker(GridFunction2D_t62F59E4C9D7E140BD9A5DD1A34605094771BCD9B* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___x0, ___y1);
}
void GridFunction2D_Invoke_mE4FEF62D1CE4E689A4C1BF1F5FA04CD3C33A6DA1_ClosedStaticInvoker(GridFunction2D_t62F59E4C9D7E140BD9A5DD1A34605094771BCD9B* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___x0, ___y1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GridFunction2D_t62F59E4C9D7E140BD9A5DD1A34605094771BCD9B (GridFunction2D_t62F59E4C9D7E140BD9A5DD1A34605094771BCD9B* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___x0, ___y1);

}
// System.Void FillefranzTools.Helper/GridFunction2D::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridFunction2D__ctor_m89BA60F642286EE8A81D9D71D59E3BA28B2AB0EA (GridFunction2D_t62F59E4C9D7E140BD9A5DD1A34605094771BCD9B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GridFunction2D_Invoke_mE4FEF62D1CE4E689A4C1BF1F5FA04CD3C33A6DA1_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GridFunction2D_Invoke_mE4FEF62D1CE4E689A4C1BF1F5FA04CD3C33A6DA1_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GridFunction2D_Invoke_mE4FEF62D1CE4E689A4C1BF1F5FA04CD3C33A6DA1_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&GridFunction2D_Invoke_mE4FEF62D1CE4E689A4C1BF1F5FA04CD3C33A6DA1_Multicast;
}
// System.Void FillefranzTools.Helper/GridFunction2D::Invoke(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridFunction2D_Invoke_mE4FEF62D1CE4E689A4C1BF1F5FA04CD3C33A6DA1 (GridFunction2D_t62F59E4C9D7E140BD9A5DD1A34605094771BCD9B* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___x0, ___y1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult FillefranzTools.Helper/GridFunction2D::BeginInvoke(System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GridFunction2D_BeginInvoke_m25411C9770D1EC39DD6D5D24D14CB44923570819 (GridFunction2D_t62F59E4C9D7E140BD9A5DD1A34605094771BCD9B* __this, int32_t ___x0, int32_t ___y1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___x0);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___y1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void FillefranzTools.Helper/GridFunction2D::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridFunction2D_EndInvoke_m17844DC24AB6B3865CC15AA50993B08B8FA8150B (GridFunction2D_t62F59E4C9D7E140BD9A5DD1A34605094771BCD9B* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void GridFunction3D_Invoke_m977132449F9570376D582F710E306F4245317B95_Multicast(GridFunction3D_t56D3426C3894411B09825B82497743A0448EB5E5* __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GridFunction3D_t56D3426C3894411B09825B82497743A0448EB5E5* currentDelegate = reinterpret_cast<GridFunction3D_t56D3426C3894411B09825B82497743A0448EB5E5*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___x0, ___y1, ___z2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void GridFunction3D_Invoke_m977132449F9570376D582F710E306F4245317B95_OpenInst(GridFunction3D_t56D3426C3894411B09825B82497743A0448EB5E5* __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___x0, ___y1, ___z2, method);
}
void GridFunction3D_Invoke_m977132449F9570376D582F710E306F4245317B95_OpenStatic(GridFunction3D_t56D3426C3894411B09825B82497743A0448EB5E5* __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___x0, ___y1, ___z2, method);
}
void GridFunction3D_Invoke_m977132449F9570376D582F710E306F4245317B95_OpenStaticInvoker(GridFunction3D_t56D3426C3894411B09825B82497743A0448EB5E5* __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< int32_t, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___x0, ___y1, ___z2);
}
void GridFunction3D_Invoke_m977132449F9570376D582F710E306F4245317B95_ClosedStaticInvoker(GridFunction3D_t56D3426C3894411B09825B82497743A0448EB5E5* __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, int32_t, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___x0, ___y1, ___z2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GridFunction3D_t56D3426C3894411B09825B82497743A0448EB5E5 (GridFunction3D_t56D3426C3894411B09825B82497743A0448EB5E5* __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___x0, ___y1, ___z2);

}
// System.Void FillefranzTools.Helper/GridFunction3D::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridFunction3D__ctor_m8E3B5D3860320F9F0ED7716D05078610222C72C7 (GridFunction3D_t56D3426C3894411B09825B82497743A0448EB5E5* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GridFunction3D_Invoke_m977132449F9570376D582F710E306F4245317B95_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GridFunction3D_Invoke_m977132449F9570376D582F710E306F4245317B95_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GridFunction3D_Invoke_m977132449F9570376D582F710E306F4245317B95_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&GridFunction3D_Invoke_m977132449F9570376D582F710E306F4245317B95_Multicast;
}
// System.Void FillefranzTools.Helper/GridFunction3D::Invoke(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridFunction3D_Invoke_m977132449F9570376D582F710E306F4245317B95 (GridFunction3D_t56D3426C3894411B09825B82497743A0448EB5E5* __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___x0, ___y1, ___z2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult FillefranzTools.Helper/GridFunction3D::BeginInvoke(System.Int32,System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GridFunction3D_BeginInvoke_m6623663B843AFE9DCD70A0DB4E22C17F481DAD59 (GridFunction3D_t56D3426C3894411B09825B82497743A0448EB5E5* __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___x0);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___y1);
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___z2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void FillefranzTools.Helper/GridFunction3D::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridFunction3D_EndInvoke_m0B2C3CDB9DA1043EA49037D3278CDF58502CE776 (GridFunction3D_t56D3426C3894411B09825B82497743A0448EB5E5* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ForEach_Invoke_m9356E6A80540B1E9D4B62D735E750241C9134F79_Multicast(ForEach_t9D4A8E0E0060FDAED2CEC54D3449B036BF21DFEB* __this, int32_t ___i0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ForEach_t9D4A8E0E0060FDAED2CEC54D3449B036BF21DFEB* currentDelegate = reinterpret_cast<ForEach_t9D4A8E0E0060FDAED2CEC54D3449B036BF21DFEB*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___i0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ForEach_Invoke_m9356E6A80540B1E9D4B62D735E750241C9134F79_OpenInst(ForEach_t9D4A8E0E0060FDAED2CEC54D3449B036BF21DFEB* __this, int32_t ___i0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___i0, method);
}
void ForEach_Invoke_m9356E6A80540B1E9D4B62D735E750241C9134F79_OpenStatic(ForEach_t9D4A8E0E0060FDAED2CEC54D3449B036BF21DFEB* __this, int32_t ___i0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___i0, method);
}
void ForEach_Invoke_m9356E6A80540B1E9D4B62D735E750241C9134F79_OpenStaticInvoker(ForEach_t9D4A8E0E0060FDAED2CEC54D3449B036BF21DFEB* __this, int32_t ___i0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___i0);
}
void ForEach_Invoke_m9356E6A80540B1E9D4B62D735E750241C9134F79_ClosedStaticInvoker(ForEach_t9D4A8E0E0060FDAED2CEC54D3449B036BF21DFEB* __this, int32_t ___i0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___i0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ForEach_t9D4A8E0E0060FDAED2CEC54D3449B036BF21DFEB (ForEach_t9D4A8E0E0060FDAED2CEC54D3449B036BF21DFEB* __this, int32_t ___i0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___i0);

}
// System.Void FillefranzTools.Helper/ForEach::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForEach__ctor_m74F49CB492C9EC988F40032F5491429122527316 (ForEach_t9D4A8E0E0060FDAED2CEC54D3449B036BF21DFEB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ForEach_Invoke_m9356E6A80540B1E9D4B62D735E750241C9134F79_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ForEach_Invoke_m9356E6A80540B1E9D4B62D735E750241C9134F79_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ForEach_Invoke_m9356E6A80540B1E9D4B62D735E750241C9134F79_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&ForEach_Invoke_m9356E6A80540B1E9D4B62D735E750241C9134F79_Multicast;
}
// System.Void FillefranzTools.Helper/ForEach::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForEach_Invoke_m9356E6A80540B1E9D4B62D735E750241C9134F79 (ForEach_t9D4A8E0E0060FDAED2CEC54D3449B036BF21DFEB* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___i0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult FillefranzTools.Helper/ForEach::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ForEach_BeginInvoke_m5599B5BE6BFF2ABEEB39114CD8B9D2E8191DF7C0 (ForEach_t9D4A8E0E0060FDAED2CEC54D3449B036BF21DFEB* __this, int32_t ___i0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___i0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void FillefranzTools.Helper/ForEach::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForEach_EndInvoke_mA87267626A0D08DF6CAB568526B4E82CBFEC21AE (ForEach_t9D4A8E0E0060FDAED2CEC54D3449B036BF21DFEB* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void Function_Invoke_m4FD89F9D12BFBA16A4574D4A38C19A01C93CB374_Multicast(Function_t067AEBDDB28DF3B009BB38FE3BFD4FDDFEE7742B* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Function_t067AEBDDB28DF3B009BB38FE3BFD4FDDFEE7742B* currentDelegate = reinterpret_cast<Function_t067AEBDDB28DF3B009BB38FE3BFD4FDDFEE7742B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void Function_Invoke_m4FD89F9D12BFBA16A4574D4A38C19A01C93CB374_OpenInst(Function_t067AEBDDB28DF3B009BB38FE3BFD4FDDFEE7742B* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void Function_Invoke_m4FD89F9D12BFBA16A4574D4A38C19A01C93CB374_OpenStatic(Function_t067AEBDDB28DF3B009BB38FE3BFD4FDDFEE7742B* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void Function_Invoke_m4FD89F9D12BFBA16A4574D4A38C19A01C93CB374_OpenStaticInvoker(Function_t067AEBDDB28DF3B009BB38FE3BFD4FDDFEE7742B* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void Function_Invoke_m4FD89F9D12BFBA16A4574D4A38C19A01C93CB374_ClosedStaticInvoker(Function_t067AEBDDB28DF3B009BB38FE3BFD4FDDFEE7742B* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_Function_t067AEBDDB28DF3B009BB38FE3BFD4FDDFEE7742B (Function_t067AEBDDB28DF3B009BB38FE3BFD4FDDFEE7742B* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void FillefranzTools.Helper/Function::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Function__ctor_mCAD8A253011E8541886636D8B5EE339D230DB7C1 (Function_t067AEBDDB28DF3B009BB38FE3BFD4FDDFEE7742B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Function_Invoke_m4FD89F9D12BFBA16A4574D4A38C19A01C93CB374_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Function_Invoke_m4FD89F9D12BFBA16A4574D4A38C19A01C93CB374_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Function_Invoke_m4FD89F9D12BFBA16A4574D4A38C19A01C93CB374_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&Function_Invoke_m4FD89F9D12BFBA16A4574D4A38C19A01C93CB374_Multicast;
}
// System.Void FillefranzTools.Helper/Function::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Function_Invoke_m4FD89F9D12BFBA16A4574D4A38C19A01C93CB374 (Function_t067AEBDDB28DF3B009BB38FE3BFD4FDDFEE7742B* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult FillefranzTools.Helper/Function::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Function_BeginInvoke_mC5C6312B88F60124745A5C07A46BF9CCE31C1D93 (Function_t067AEBDDB28DF3B009BB38FE3BFD4FDDFEE7742B* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void FillefranzTools.Helper/Function::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Function_EndInvoke_m0FD3092C91A3925649D28C179C4DF6A7C8B0671C (Function_t067AEBDDB28DF3B009BB38FE3BFD4FDDFEE7742B* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: FillefranzTools.Parabola
IL2CPP_EXTERN_C void Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877_marshal_pinvoke(const Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877& unmarshaled, Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877_marshaled_pinvoke& marshaled)
{
	marshaled.___startPoint_0 = unmarshaled.___startPoint_0;
	marshaled.___endPoint_1 = unmarshaled.___endPoint_1;
	marshaled.___fixHeight_2 = static_cast<int32_t>(unmarshaled.___fixHeight_2);
	marshaled.___fixedHeight_3 = unmarshaled.___fixedHeight_3;
	marshaled.___curveDown_4 = static_cast<int32_t>(unmarshaled.___curveDown_4);
	marshaled.___flatness_5 = unmarshaled.___flatness_5;
	marshaled.___U3CaU3Ek__BackingField_6 = unmarshaled.___U3CaU3Ek__BackingField_6;
	marshaled.___U3CbU3Ek__BackingField_7 = unmarshaled.___U3CbU3Ek__BackingField_7;
	marshaled.___U3CcU3Ek__BackingField_8 = unmarshaled.___U3CcU3Ek__BackingField_8;
	marshaled.___angle_9 = unmarshaled.___angle_9;
	marshaled.___v0_10 = unmarshaled.___v0_10;
	marshaled.___time_11 = unmarshaled.___time_11;
	marshaled.___height_12 = unmarshaled.___height_12;
	marshaled.___gndDst_13 = unmarshaled.___gndDst_13;
	marshaled.___direction_14 = unmarshaled.___direction_14;
	marshaled.___groundDirection_15 = unmarshaled.___groundDirection_15;
	marshaled.___targetPos_16 = unmarshaled.___targetPos_16;
}
IL2CPP_EXTERN_C void Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877_marshal_pinvoke_back(const Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877_marshaled_pinvoke& marshaled, Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877& unmarshaled)
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledstartPoint_temp_0;
	memset((&unmarshaledstartPoint_temp_0), 0, sizeof(unmarshaledstartPoint_temp_0));
	unmarshaledstartPoint_temp_0 = marshaled.___startPoint_0;
	unmarshaled.___startPoint_0 = unmarshaledstartPoint_temp_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledendPoint_temp_1;
	memset((&unmarshaledendPoint_temp_1), 0, sizeof(unmarshaledendPoint_temp_1));
	unmarshaledendPoint_temp_1 = marshaled.___endPoint_1;
	unmarshaled.___endPoint_1 = unmarshaledendPoint_temp_1;
	bool unmarshaledfixHeight_temp_2 = false;
	unmarshaledfixHeight_temp_2 = static_cast<bool>(marshaled.___fixHeight_2);
	unmarshaled.___fixHeight_2 = unmarshaledfixHeight_temp_2;
	float unmarshaledfixedHeight_temp_3 = 0.0f;
	unmarshaledfixedHeight_temp_3 = marshaled.___fixedHeight_3;
	unmarshaled.___fixedHeight_3 = unmarshaledfixedHeight_temp_3;
	bool unmarshaledcurveDown_temp_4 = false;
	unmarshaledcurveDown_temp_4 = static_cast<bool>(marshaled.___curveDown_4);
	unmarshaled.___curveDown_4 = unmarshaledcurveDown_temp_4;
	float unmarshaledflatness_temp_5 = 0.0f;
	unmarshaledflatness_temp_5 = marshaled.___flatness_5;
	unmarshaled.___flatness_5 = unmarshaledflatness_temp_5;
	float unmarshaledU3CaU3Ek__BackingField_temp_6 = 0.0f;
	unmarshaledU3CaU3Ek__BackingField_temp_6 = marshaled.___U3CaU3Ek__BackingField_6;
	unmarshaled.___U3CaU3Ek__BackingField_6 = unmarshaledU3CaU3Ek__BackingField_temp_6;
	float unmarshaledU3CbU3Ek__BackingField_temp_7 = 0.0f;
	unmarshaledU3CbU3Ek__BackingField_temp_7 = marshaled.___U3CbU3Ek__BackingField_7;
	unmarshaled.___U3CbU3Ek__BackingField_7 = unmarshaledU3CbU3Ek__BackingField_temp_7;
	float unmarshaledU3CcU3Ek__BackingField_temp_8 = 0.0f;
	unmarshaledU3CcU3Ek__BackingField_temp_8 = marshaled.___U3CcU3Ek__BackingField_8;
	unmarshaled.___U3CcU3Ek__BackingField_8 = unmarshaledU3CcU3Ek__BackingField_temp_8;
	float unmarshaledangle_temp_9 = 0.0f;
	unmarshaledangle_temp_9 = marshaled.___angle_9;
	unmarshaled.___angle_9 = unmarshaledangle_temp_9;
	float unmarshaledv0_temp_10 = 0.0f;
	unmarshaledv0_temp_10 = marshaled.___v0_10;
	unmarshaled.___v0_10 = unmarshaledv0_temp_10;
	float unmarshaledtime_temp_11 = 0.0f;
	unmarshaledtime_temp_11 = marshaled.___time_11;
	unmarshaled.___time_11 = unmarshaledtime_temp_11;
	float unmarshaledheight_temp_12 = 0.0f;
	unmarshaledheight_temp_12 = marshaled.___height_12;
	unmarshaled.___height_12 = unmarshaledheight_temp_12;
	float unmarshaledgndDst_temp_13 = 0.0f;
	unmarshaledgndDst_temp_13 = marshaled.___gndDst_13;
	unmarshaled.___gndDst_13 = unmarshaledgndDst_temp_13;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaleddirection_temp_14;
	memset((&unmarshaleddirection_temp_14), 0, sizeof(unmarshaleddirection_temp_14));
	unmarshaleddirection_temp_14 = marshaled.___direction_14;
	unmarshaled.___direction_14 = unmarshaleddirection_temp_14;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledgroundDirection_temp_15;
	memset((&unmarshaledgroundDirection_temp_15), 0, sizeof(unmarshaledgroundDirection_temp_15));
	unmarshaledgroundDirection_temp_15 = marshaled.___groundDirection_15;
	unmarshaled.___groundDirection_15 = unmarshaledgroundDirection_temp_15;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledtargetPos_temp_16;
	memset((&unmarshaledtargetPos_temp_16), 0, sizeof(unmarshaledtargetPos_temp_16));
	unmarshaledtargetPos_temp_16 = marshaled.___targetPos_16;
	unmarshaled.___targetPos_16 = unmarshaledtargetPos_temp_16;
}
// Conversion method for clean up from marshalling of: FillefranzTools.Parabola
IL2CPP_EXTERN_C void Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877_marshal_pinvoke_cleanup(Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: FillefranzTools.Parabola
IL2CPP_EXTERN_C void Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877_marshal_com(const Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877& unmarshaled, Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877_marshaled_com& marshaled)
{
	marshaled.___startPoint_0 = unmarshaled.___startPoint_0;
	marshaled.___endPoint_1 = unmarshaled.___endPoint_1;
	marshaled.___fixHeight_2 = static_cast<int32_t>(unmarshaled.___fixHeight_2);
	marshaled.___fixedHeight_3 = unmarshaled.___fixedHeight_3;
	marshaled.___curveDown_4 = static_cast<int32_t>(unmarshaled.___curveDown_4);
	marshaled.___flatness_5 = unmarshaled.___flatness_5;
	marshaled.___U3CaU3Ek__BackingField_6 = unmarshaled.___U3CaU3Ek__BackingField_6;
	marshaled.___U3CbU3Ek__BackingField_7 = unmarshaled.___U3CbU3Ek__BackingField_7;
	marshaled.___U3CcU3Ek__BackingField_8 = unmarshaled.___U3CcU3Ek__BackingField_8;
	marshaled.___angle_9 = unmarshaled.___angle_9;
	marshaled.___v0_10 = unmarshaled.___v0_10;
	marshaled.___time_11 = unmarshaled.___time_11;
	marshaled.___height_12 = unmarshaled.___height_12;
	marshaled.___gndDst_13 = unmarshaled.___gndDst_13;
	marshaled.___direction_14 = unmarshaled.___direction_14;
	marshaled.___groundDirection_15 = unmarshaled.___groundDirection_15;
	marshaled.___targetPos_16 = unmarshaled.___targetPos_16;
}
IL2CPP_EXTERN_C void Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877_marshal_com_back(const Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877_marshaled_com& marshaled, Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877& unmarshaled)
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledstartPoint_temp_0;
	memset((&unmarshaledstartPoint_temp_0), 0, sizeof(unmarshaledstartPoint_temp_0));
	unmarshaledstartPoint_temp_0 = marshaled.___startPoint_0;
	unmarshaled.___startPoint_0 = unmarshaledstartPoint_temp_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledendPoint_temp_1;
	memset((&unmarshaledendPoint_temp_1), 0, sizeof(unmarshaledendPoint_temp_1));
	unmarshaledendPoint_temp_1 = marshaled.___endPoint_1;
	unmarshaled.___endPoint_1 = unmarshaledendPoint_temp_1;
	bool unmarshaledfixHeight_temp_2 = false;
	unmarshaledfixHeight_temp_2 = static_cast<bool>(marshaled.___fixHeight_2);
	unmarshaled.___fixHeight_2 = unmarshaledfixHeight_temp_2;
	float unmarshaledfixedHeight_temp_3 = 0.0f;
	unmarshaledfixedHeight_temp_3 = marshaled.___fixedHeight_3;
	unmarshaled.___fixedHeight_3 = unmarshaledfixedHeight_temp_3;
	bool unmarshaledcurveDown_temp_4 = false;
	unmarshaledcurveDown_temp_4 = static_cast<bool>(marshaled.___curveDown_4);
	unmarshaled.___curveDown_4 = unmarshaledcurveDown_temp_4;
	float unmarshaledflatness_temp_5 = 0.0f;
	unmarshaledflatness_temp_5 = marshaled.___flatness_5;
	unmarshaled.___flatness_5 = unmarshaledflatness_temp_5;
	float unmarshaledU3CaU3Ek__BackingField_temp_6 = 0.0f;
	unmarshaledU3CaU3Ek__BackingField_temp_6 = marshaled.___U3CaU3Ek__BackingField_6;
	unmarshaled.___U3CaU3Ek__BackingField_6 = unmarshaledU3CaU3Ek__BackingField_temp_6;
	float unmarshaledU3CbU3Ek__BackingField_temp_7 = 0.0f;
	unmarshaledU3CbU3Ek__BackingField_temp_7 = marshaled.___U3CbU3Ek__BackingField_7;
	unmarshaled.___U3CbU3Ek__BackingField_7 = unmarshaledU3CbU3Ek__BackingField_temp_7;
	float unmarshaledU3CcU3Ek__BackingField_temp_8 = 0.0f;
	unmarshaledU3CcU3Ek__BackingField_temp_8 = marshaled.___U3CcU3Ek__BackingField_8;
	unmarshaled.___U3CcU3Ek__BackingField_8 = unmarshaledU3CcU3Ek__BackingField_temp_8;
	float unmarshaledangle_temp_9 = 0.0f;
	unmarshaledangle_temp_9 = marshaled.___angle_9;
	unmarshaled.___angle_9 = unmarshaledangle_temp_9;
	float unmarshaledv0_temp_10 = 0.0f;
	unmarshaledv0_temp_10 = marshaled.___v0_10;
	unmarshaled.___v0_10 = unmarshaledv0_temp_10;
	float unmarshaledtime_temp_11 = 0.0f;
	unmarshaledtime_temp_11 = marshaled.___time_11;
	unmarshaled.___time_11 = unmarshaledtime_temp_11;
	float unmarshaledheight_temp_12 = 0.0f;
	unmarshaledheight_temp_12 = marshaled.___height_12;
	unmarshaled.___height_12 = unmarshaledheight_temp_12;
	float unmarshaledgndDst_temp_13 = 0.0f;
	unmarshaledgndDst_temp_13 = marshaled.___gndDst_13;
	unmarshaled.___gndDst_13 = unmarshaledgndDst_temp_13;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaleddirection_temp_14;
	memset((&unmarshaleddirection_temp_14), 0, sizeof(unmarshaleddirection_temp_14));
	unmarshaleddirection_temp_14 = marshaled.___direction_14;
	unmarshaled.___direction_14 = unmarshaleddirection_temp_14;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledgroundDirection_temp_15;
	memset((&unmarshaledgroundDirection_temp_15), 0, sizeof(unmarshaledgroundDirection_temp_15));
	unmarshaledgroundDirection_temp_15 = marshaled.___groundDirection_15;
	unmarshaled.___groundDirection_15 = unmarshaledgroundDirection_temp_15;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledtargetPos_temp_16;
	memset((&unmarshaledtargetPos_temp_16), 0, sizeof(unmarshaledtargetPos_temp_16));
	unmarshaledtargetPos_temp_16 = marshaled.___targetPos_16;
	unmarshaled.___targetPos_16 = unmarshaledtargetPos_temp_16;
}
// Conversion method for clean up from marshalling of: FillefranzTools.Parabola
IL2CPP_EXTERN_C void Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877_marshal_com_cleanup(Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877_marshaled_com& marshaled)
{
}
// System.Single FillefranzTools.Parabola::get_a()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Parabola_get_a_m45657B88E4858AB7B90EEC89388F69ACA341E1DD (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, const RuntimeMethod* method) 
{
	{
		// public float a { get; private set; }
		float L_0 = __this->___U3CaU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_EXTERN_C  float Parabola_get_a_m45657B88E4858AB7B90EEC89388F69ACA341E1DD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877*>(__this + _offset);
	float _returnValue;
	_returnValue = Parabola_get_a_m45657B88E4858AB7B90EEC89388F69ACA341E1DD_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void FillefranzTools.Parabola::set_a(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parabola_set_a_m93234FDAFF2059B499CEC330BB682A802583526B (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float a { get; private set; }
		float L_0 = ___value0;
		__this->___U3CaU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Parabola_set_a_m93234FDAFF2059B499CEC330BB682A802583526B_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877*>(__this + _offset);
	Parabola_set_a_m93234FDAFF2059B499CEC330BB682A802583526B_inline(_thisAdjusted, ___value0, method);
}
// System.Single FillefranzTools.Parabola::get_b()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Parabola_get_b_m06FC4C4FC4136097B8BF0313413B497537BD1FB0 (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, const RuntimeMethod* method) 
{
	{
		// public float b { get; private set; }
		float L_0 = __this->___U3CbU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_EXTERN_C  float Parabola_get_b_m06FC4C4FC4136097B8BF0313413B497537BD1FB0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877*>(__this + _offset);
	float _returnValue;
	_returnValue = Parabola_get_b_m06FC4C4FC4136097B8BF0313413B497537BD1FB0_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void FillefranzTools.Parabola::set_b(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parabola_set_b_m9A9E83C230FEE06963971E2D935587620EBF3380 (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float b { get; private set; }
		float L_0 = ___value0;
		__this->___U3CbU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Parabola_set_b_m9A9E83C230FEE06963971E2D935587620EBF3380_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877*>(__this + _offset);
	Parabola_set_b_m9A9E83C230FEE06963971E2D935587620EBF3380_inline(_thisAdjusted, ___value0, method);
}
// System.Single FillefranzTools.Parabola::get_c()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Parabola_get_c_m5AD3671CEE18CCAFBDD327392760C595BB315FA2 (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, const RuntimeMethod* method) 
{
	{
		// public float c { get; private set; }
		float L_0 = __this->___U3CcU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_EXTERN_C  float Parabola_get_c_m5AD3671CEE18CCAFBDD327392760C595BB315FA2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877*>(__this + _offset);
	float _returnValue;
	_returnValue = Parabola_get_c_m5AD3671CEE18CCAFBDD327392760C595BB315FA2_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void FillefranzTools.Parabola::set_c(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parabola_set_c_mAF6F75BA41324AD4C3A56625F2666792E3FE44C3 (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float c { get; private set; }
		float L_0 = ___value0;
		__this->___U3CcU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Parabola_set_c_mAF6F75BA41324AD4C3A56625F2666792E3FE44C3_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877*>(__this + _offset);
	Parabola_set_c_mAF6F75BA41324AD4C3A56625F2666792E3FE44C3_inline(_thisAdjusted, ___value0, method);
}
// System.String FillefranzTools.Parabola::get_equation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parabola_get_equation_mECBD56080A3552AA80F33212B8AC7ED47C9C90A8 (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCD6A8E9DCF930FE19989EC467783CF6B1C53E18);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string equation => $"{a}x^2 + {b}x +{c}";
		float L_0;
		L_0 = Parabola_get_a_m45657B88E4858AB7B90EEC89388F69ACA341E1DD_inline(__this, NULL);
		float L_1 = L_0;
		RuntimeObject* L_2 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_1);
		float L_3;
		L_3 = Parabola_get_b_m06FC4C4FC4136097B8BF0313413B497537BD1FB0_inline(__this, NULL);
		float L_4 = L_3;
		RuntimeObject* L_5 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_4);
		float L_6;
		L_6 = Parabola_get_c_m5AD3671CEE18CCAFBDD327392760C595BB315FA2_inline(__this, NULL);
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteralBCD6A8E9DCF930FE19989EC467783CF6B1C53E18, L_2, L_5, L_8, NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C  String_t* Parabola_get_equation_mECBD56080A3552AA80F33212B8AC7ED47C9C90A8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Parabola_get_equation_mECBD56080A3552AA80F33212B8AC7ED47C9C90A8(_thisAdjusted, method);
	return _returnValue;
}
// System.Single FillefranzTools.Parabola::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Parabola_get_Height_m1F7CD2074EB90BA935E1E8CCEB06990812E143E4 (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, const RuntimeMethod* method) 
{
	{
		// public float Height => height;
		float L_0 = __this->___height_12;
		return L_0;
	}
}
IL2CPP_EXTERN_C  float Parabola_get_Height_m1F7CD2074EB90BA935E1E8CCEB06990812E143E4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877*>(__this + _offset);
	float _returnValue;
	_returnValue = Parabola_get_Height_m1F7CD2074EB90BA935E1E8CCEB06990812E143E4_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Single FillefranzTools.Parabola::get_Angle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Parabola_get_Angle_m4E391DC7D8343F68AC9FD5D59D3D68F4EEE88C05 (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, const RuntimeMethod* method) 
{
	{
		// public float Angle => angle;
		float L_0 = __this->___angle_9;
		return L_0;
	}
}
IL2CPP_EXTERN_C  float Parabola_get_Angle_m4E391DC7D8343F68AC9FD5D59D3D68F4EEE88C05_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877*>(__this + _offset);
	float _returnValue;
	_returnValue = Parabola_get_Angle_m4E391DC7D8343F68AC9FD5D59D3D68F4EEE88C05_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Single FillefranzTools.Parabola::get_GroundDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Parabola_get_GroundDistance_m74A67B47F8979477CA6AD697A16114C18689209F (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, const RuntimeMethod* method) 
{
	{
		// public float GroundDistance => gndDst;
		float L_0 = __this->___gndDst_13;
		return L_0;
	}
}
IL2CPP_EXTERN_C  float Parabola_get_GroundDistance_m74A67B47F8979477CA6AD697A16114C18689209F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877*>(__this + _offset);
	float _returnValue;
	_returnValue = Parabola_get_GroundDistance_m74A67B47F8979477CA6AD697A16114C18689209F_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector3 FillefranzTools.Parabola::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Parabola_get_Direction_m00D4B1A4769B83C9354C52535D6442FCE96162B3 (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Direction => direction.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___direction_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Parabola_get_Direction_m00D4B1A4769B83C9354C52535D6442FCE96162B3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Parabola_get_Direction_m00D4B1A4769B83C9354C52535D6442FCE96162B3(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector3 FillefranzTools.Parabola::get_GroundDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Parabola_get_GroundDirection_m10A1E37CB84CD83F450E2D407125686DE660EBDF (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 GroundDirection => groundDirection.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___groundDirection_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Parabola_get_GroundDirection_m10A1E37CB84CD83F450E2D407125686DE660EBDF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Parabola_get_GroundDirection_m10A1E37CB84CD83F450E2D407125686DE660EBDF(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector3 FillefranzTools.Parabola::get_Center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Parabola_get_Center_m370021598246A3567F320515FD397863B6C65247 (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Center => Evaluate(0.5f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Parabola_Evaluate_m48BAE59794AEFD1812011DCD578FFB33EC41340B(__this, (0.5f), NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Parabola_get_Center_m370021598246A3567F320515FD397863B6C65247_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Parabola_get_Center_m370021598246A3567F320515FD397863B6C65247(_thisAdjusted, method);
	return _returnValue;
}
// System.Void FillefranzTools.Parabola::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parabola__ctor_m294348227A0399934868CDC061D36DF7EF4EE35E (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPoint0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endPoint1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// this.startPoint = startPoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___startPoint0;
		__this->___startPoint_0 = L_0;
		// this.endPoint = endPoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___endPoint1;
		__this->___endPoint_1 = L_1;
		// curveDown = false;
		__this->___curveDown_4 = (bool)0;
		// flatness = 2;
		__this->___flatness_5 = (2.0f);
		// fixHeight = false;
		__this->___fixHeight_2 = (bool)0;
		// fixedHeight = 3;
		__this->___fixedHeight_3 = (3.0f);
		// angle = v0 = time = height = 0;
		float L_2 = (0.0f);
		V_0 = L_2;
		__this->___height_12 = L_2;
		float L_3 = V_0;
		float L_4 = L_3;
		V_0 = L_4;
		__this->___time_11 = L_4;
		float L_5 = V_0;
		float L_6 = L_5;
		V_0 = L_6;
		__this->___v0_10 = L_6;
		float L_7 = V_0;
		__this->___angle_9 = L_7;
		// direction = groundDirection = targetPos = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = L_8;
		V_1 = L_9;
		__this->___targetPos_16 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = L_10;
		V_1 = L_11;
		__this->___groundDirection_15 = L_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_1;
		__this->___direction_14 = L_12;
		// a = 1;
		Parabola_set_a_m93234FDAFF2059B499CEC330BB682A802583526B_inline(__this, (1.0f), NULL);
		// b = c = 0;
		float L_13 = (0.0f);
		V_0 = L_13;
		Parabola_set_c_mAF6F75BA41324AD4C3A56625F2666792E3FE44C3_inline(__this, L_13, NULL);
		float L_14 = V_0;
		Parabola_set_b_m9A9E83C230FEE06963971E2D935587620EBF3380_inline(__this, L_14, NULL);
		// gndDst = Vector3.Distance(endPoint.OverrideY(0), startPoint.OverrideY(0));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___endPoint1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = ExtensionMethods_OverrideY_mD6CCA8D712AEA47186521FA999EFDB16D3854334(L_15, (0.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___startPoint0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = ExtensionMethods_OverrideY_mD6CCA8D712AEA47186521FA999EFDB16D3854334(L_17, (0.0f), NULL);
		float L_19;
		L_19 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_16, L_18, NULL);
		__this->___gndDst_13 = L_19;
		// Recalculate();
		bool L_20;
		L_20 = Parabola_Recalculate_mBBFFF00304A2B0269CE16E3F3BDA8FEEA98E3D1F(__this, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Parabola__ctor_m294348227A0399934868CDC061D36DF7EF4EE35E_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPoint0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endPoint1, const RuntimeMethod* method)
{
	Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877*>(__this + _offset);
	Parabola__ctor_m294348227A0399934868CDC061D36DF7EF4EE35E(_thisAdjusted, ___startPoint0, ___endPoint1, method);
}
// System.Void FillefranzTools.Parabola::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parabola__ctor_m4878780E0853590DE3289CCBC460E33A18E5B142 (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPoint0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endPoint1, float ___fixedHeight2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// this.startPoint = startPoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___startPoint0;
		__this->___startPoint_0 = L_0;
		// this.endPoint = endPoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___endPoint1;
		__this->___endPoint_1 = L_1;
		// this.fixedHeight = fixedHeight;
		float L_2 = ___fixedHeight2;
		__this->___fixedHeight_3 = L_2;
		// fixHeight = true;
		__this->___fixHeight_2 = (bool)1;
		// curveDown = false;
		__this->___curveDown_4 = (bool)0;
		// flatness = 2;
		__this->___flatness_5 = (2.0f);
		// angle = v0 = time = height = 0;
		float L_3 = (0.0f);
		V_0 = L_3;
		__this->___height_12 = L_3;
		float L_4 = V_0;
		float L_5 = L_4;
		V_0 = L_5;
		__this->___time_11 = L_5;
		float L_6 = V_0;
		float L_7 = L_6;
		V_0 = L_7;
		__this->___v0_10 = L_7;
		float L_8 = V_0;
		__this->___angle_9 = L_8;
		// direction = groundDirection = targetPos = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = L_9;
		V_1 = L_10;
		__this->___targetPos_16 = L_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = L_11;
		V_1 = L_12;
		__this->___groundDirection_15 = L_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_1;
		__this->___direction_14 = L_13;
		// a = 1;
		Parabola_set_a_m93234FDAFF2059B499CEC330BB682A802583526B_inline(__this, (1.0f), NULL);
		// b = c = 0;
		float L_14 = (0.0f);
		V_0 = L_14;
		Parabola_set_c_mAF6F75BA41324AD4C3A56625F2666792E3FE44C3_inline(__this, L_14, NULL);
		float L_15 = V_0;
		Parabola_set_b_m9A9E83C230FEE06963971E2D935587620EBF3380_inline(__this, L_15, NULL);
		// gndDst = Vector3.Distance(endPoint.OverrideY(0), startPoint.OverrideY(0));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___endPoint1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = ExtensionMethods_OverrideY_mD6CCA8D712AEA47186521FA999EFDB16D3854334(L_16, (0.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___startPoint0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = ExtensionMethods_OverrideY_mD6CCA8D712AEA47186521FA999EFDB16D3854334(L_18, (0.0f), NULL);
		float L_20;
		L_20 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_17, L_19, NULL);
		__this->___gndDst_13 = L_20;
		// Recalculate();
		bool L_21;
		L_21 = Parabola_Recalculate_mBBFFF00304A2B0269CE16E3F3BDA8FEEA98E3D1F(__this, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Parabola__ctor_m4878780E0853590DE3289CCBC460E33A18E5B142_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPoint0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endPoint1, float ___fixedHeight2, const RuntimeMethod* method)
{
	Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877*>(__this + _offset);
	Parabola__ctor_m4878780E0853590DE3289CCBC460E33A18E5B142(_thisAdjusted, ___startPoint0, ___endPoint1, ___fixedHeight2, method);
}
// UnityEngine.Vector3 FillefranzTools.Parabola::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Parabola_Evaluate_m48BAE59794AEFD1812011DCD578FFB33EC41340B (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, float ___t0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// if (t == 0) return startPoint;
		float L_0 = ___t0;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_000f;
		}
	}
	{
		// if (t == 0) return startPoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___startPoint_0;
		return L_1;
	}

IL_000f:
	{
		// if (t == 1) return endPoint;
		float L_2 = ___t0;
		if ((!(((float)L_2) == ((float)(1.0f)))))
		{
			goto IL_001e;
		}
	}
	{
		// if (t == 1) return endPoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___endPoint_1;
		return L_3;
	}

IL_001e:
	{
		// float scaledTime = t * time;
		float L_4 = ___t0;
		float L_5 = __this->___time_11;
		V_0 = ((float)il2cpp_codegen_multiply(L_4, L_5));
		// float x = v0 * scaledTime * Mathf.Cos(angle);
		float L_6 = __this->___v0_10;
		float L_7 = V_0;
		float L_8 = __this->___angle_9;
		float L_9;
		L_9 = cosf(L_8);
		V_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_6, L_7)), L_9));
		// float y = v0 * scaledTime * Mathf.Sin(angle) - 0.5f * -Physics.gravity.y * Mathf.Pow(scaledTime, 2);
		float L_10 = __this->___v0_10;
		float L_11 = V_0;
		float L_12 = __this->___angle_9;
		float L_13;
		L_13 = sinf(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Physics_get_gravity_m94393492AE4ED8B38A22ECCDCD2DDDB71BFA010D(NULL);
		float L_15 = L_14.___y_3;
		float L_16 = V_0;
		float L_17;
		L_17 = powf(L_16, (2.0f));
		V_2 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_10, L_11)), L_13)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((0.5f), ((-L_15)))), L_17))));
		// if (curveDown && startPoint.y - endPoint.y < height) y = -y;
		bool L_18 = __this->___curveDown_4;
		if (!L_18)
		{
			goto IL_0099;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_19 = (&__this->___startPoint_0);
		float L_20 = L_19->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_21 = (&__this->___endPoint_1);
		float L_22 = L_21->___y_3;
		float L_23 = __this->___height_12;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_20, L_22))) < ((float)L_23))))
		{
			goto IL_0099;
		}
	}
	{
		// if (curveDown && startPoint.y - endPoint.y < height) y = -y;
		float L_24 = V_2;
		V_2 = ((-L_24));
	}

IL_0099:
	{
		// return startPoint + groundDirection.normalized * x + Vector3.up * y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = __this->___startPoint_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_26 = (&__this->___groundDirection_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline(L_26, NULL);
		float L_28 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_27, L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_25, L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_32 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_31, L_32, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_30, L_33, NULL);
		return L_34;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Parabola_Evaluate_m48BAE59794AEFD1812011DCD578FFB33EC41340B_AdjustorThunk (RuntimeObject* __this, float ___t0, const RuntimeMethod* method)
{
	Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Parabola_Evaluate_m48BAE59794AEFD1812011DCD578FFB33EC41340B(_thisAdjusted, ___t0, method);
	return _returnValue;
}
// System.Single FillefranzTools.Parabola::GetTFromY(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Parabola_GetTFromY_m8E08DB230D50BAFECFB8D4122841F6FFBE19AEBF (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, float ___y0, float ___sign1, const RuntimeMethod* method) 
{
	{
		// float time = Mathf.Abs((Mathf.Sign(angle) + sign * Mathf.Sqrt(Mathf.Sin(angle).Square() + 2 * -Physics.gravity.y * y)) / -Physics.gravity.y);
		float L_0 = __this->___angle_9;
		float L_1;
		L_1 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(L_0, NULL);
		float L_2 = ___sign1;
		float L_3 = __this->___angle_9;
		float L_4;
		L_4 = sinf(L_3);
		float L_5;
		L_5 = ExtensionMethods_Square_m381CF8C8AC297B3435EF8E93C07B7DBA499CBC1E(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Physics_get_gravity_m94393492AE4ED8B38A22ECCDCD2DDDB71BFA010D(NULL);
		float L_7 = L_6.___y_3;
		float L_8 = ___y0;
		float L_9;
		L_9 = sqrtf(((float)il2cpp_codegen_add(L_5, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((2.0f), ((-L_7)))), L_8)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Physics_get_gravity_m94393492AE4ED8B38A22ECCDCD2DDDB71BFA010D(NULL);
		float L_11 = L_10.___y_3;
		float L_12;
		L_12 = fabsf(((float)(((float)il2cpp_codegen_add(L_1, ((float)il2cpp_codegen_multiply(L_2, L_9))))/((-L_11)))));
		// return  time / this.time -1;
		float L_13 = __this->___time_11;
		return ((float)il2cpp_codegen_subtract(((float)(L_12/L_13)), (1.0f)));
	}
}
IL2CPP_EXTERN_C  float Parabola_GetTFromY_m8E08DB230D50BAFECFB8D4122841F6FFBE19AEBF_AdjustorThunk (RuntimeObject* __this, float ___y0, float ___sign1, const RuntimeMethod* method)
{
	Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877*>(__this + _offset);
	float _returnValue;
	_returnValue = Parabola_GetTFromY_m8E08DB230D50BAFECFB8D4122841F6FFBE19AEBF(_thisAdjusted, ___y0, ___sign1, method);
	return _returnValue;
}
// System.Single FillefranzTools.Parabola::GetTFromX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Parabola_GetTFromX_m32768B2D6A72CAE005D72CF94F1F10B85C47DC49 (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, float ___x0, const RuntimeMethod* method) 
{
	{
		// return x / (v0 * Mathf.Cos(angle));
		float L_0 = ___x0;
		float L_1 = __this->___v0_10;
		float L_2 = __this->___angle_9;
		float L_3;
		L_3 = cosf(L_2);
		return ((float)(L_0/((float)il2cpp_codegen_multiply(L_1, L_3))));
	}
}
IL2CPP_EXTERN_C  float Parabola_GetTFromX_m32768B2D6A72CAE005D72CF94F1F10B85C47DC49_AdjustorThunk (RuntimeObject* __this, float ___x0, const RuntimeMethod* method)
{
	Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877*>(__this + _offset);
	float _returnValue;
	_returnValue = Parabola_GetTFromX_m32768B2D6A72CAE005D72CF94F1F10B85C47DC49(_thisAdjusted, ___x0, method);
	return _returnValue;
}
// System.Single FillefranzTools.Parabola::GetY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Parabola_GetY_mD83C77375BF4FA34724B9EA6524634795BDCFBF9 (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, float ___x0, const RuntimeMethod* method) 
{
	{
		// public float GetY(float x) =>  a* x.Square() + b* x + c;
		float L_0;
		L_0 = Parabola_get_a_m45657B88E4858AB7B90EEC89388F69ACA341E1DD_inline(__this, NULL);
		float L_1 = ___x0;
		float L_2;
		L_2 = ExtensionMethods_Square_m381CF8C8AC297B3435EF8E93C07B7DBA499CBC1E(L_1, NULL);
		float L_3;
		L_3 = Parabola_get_b_m06FC4C4FC4136097B8BF0313413B497537BD1FB0_inline(__this, NULL);
		float L_4 = ___x0;
		float L_5;
		L_5 = Parabola_get_c_m5AD3671CEE18CCAFBDD327392760C595BB315FA2_inline(__this, NULL);
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_2)), ((float)il2cpp_codegen_multiply(L_3, L_4)))), L_5));
	}
}
IL2CPP_EXTERN_C  float Parabola_GetY_mD83C77375BF4FA34724B9EA6524634795BDCFBF9_AdjustorThunk (RuntimeObject* __this, float ___x0, const RuntimeMethod* method)
{
	Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877*>(__this + _offset);
	float _returnValue;
	_returnValue = Parabola_GetY_mD83C77375BF4FA34724B9EA6524634795BDCFBF9(_thisAdjusted, ___x0, method);
	return _returnValue;
}
// System.Single FillefranzTools.Parabola::GetX(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Parabola_GetX_m3074D8B2CEF2AFE54050B653920654FDD0337EB9 (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, float ___y0, float ___sign1, const RuntimeMethod* method) 
{
	{
		// public float GetX(float y, float sign) => (-b + sign * Mathf.Sqrt(b - 4 * a * (c - y))) / 2 * a;
		float L_0;
		L_0 = Parabola_get_b_m06FC4C4FC4136097B8BF0313413B497537BD1FB0_inline(__this, NULL);
		float L_1 = ___sign1;
		float L_2;
		L_2 = Parabola_get_b_m06FC4C4FC4136097B8BF0313413B497537BD1FB0_inline(__this, NULL);
		float L_3;
		L_3 = Parabola_get_a_m45657B88E4858AB7B90EEC89388F69ACA341E1DD_inline(__this, NULL);
		float L_4;
		L_4 = Parabola_get_c_m5AD3671CEE18CCAFBDD327392760C595BB315FA2_inline(__this, NULL);
		float L_5 = ___y0;
		float L_6;
		L_6 = sqrtf(((float)il2cpp_codegen_subtract(L_2, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((4.0f), L_3)), ((float)il2cpp_codegen_subtract(L_4, L_5)))))));
		float L_7;
		L_7 = Parabola_get_a_m45657B88E4858AB7B90EEC89388F69ACA341E1DD_inline(__this, NULL);
		return ((float)il2cpp_codegen_multiply(((float)(((float)il2cpp_codegen_add(((-L_0)), ((float)il2cpp_codegen_multiply(L_1, L_6))))/(2.0f))), L_7));
	}
}
IL2CPP_EXTERN_C  float Parabola_GetX_m3074D8B2CEF2AFE54050B653920654FDD0337EB9_AdjustorThunk (RuntimeObject* __this, float ___y0, float ___sign1, const RuntimeMethod* method)
{
	Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877*>(__this + _offset);
	float _returnValue;
	_returnValue = Parabola_GetX_m3074D8B2CEF2AFE54050B653920654FDD0337EB9(_thisAdjusted, ___y0, ___sign1, method);
	return _returnValue;
}
// System.Boolean FillefranzTools.Parabola::Recalculate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parabola_Recalculate_mBBFFF00304A2B0269CE16E3F3BDA8FEEA98E3D1F (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, const RuntimeMethod* method) 
{
	{
		// direction = endPoint - startPoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___endPoint_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___startPoint_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		__this->___direction_14 = L_2;
		// groundDirection = direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___direction_14;
		__this->___groundDirection_15 = L_3;
		// groundDirection.y = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___groundDirection_15);
		L_4->___y_3 = (0.0f);
		// targetPos = new Vector3(groundDirection.magnitude, direction.y, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = (&__this->___groundDirection_15);
		float L_6;
		L_6 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___direction_14);
		float L_8 = L_7->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), L_6, L_8, (0.0f), /*hidden argument*/NULL);
		__this->___targetPos_16 = L_9;
		// if (fixHeight)
		bool L_10 = __this->___fixHeight_2;
		if (!L_10)
		{
			goto IL_006f;
		}
	}
	{
		// height = fixedHeight;
		float L_11 = __this->___fixedHeight_3;
		__this->___height_12 = L_11;
		goto IL_0093;
	}

IL_006f:
	{
		// height = targetPos.y + targetPos.magnitude / flatness;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12 = (&__this->___targetPos_16);
		float L_13 = L_12->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_14 = (&__this->___targetPos_16);
		float L_15;
		L_15 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline(L_14, NULL);
		float L_16 = __this->___flatness_5;
		__this->___height_12 = ((float)il2cpp_codegen_add(L_13, ((float)(L_15/L_16))));
	}

IL_0093:
	{
		// CalculatePathWithHeight(targetPos, height, out v0, out angle, out time);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = __this->___targetPos_16;
		float L_18 = __this->___height_12;
		float* L_19 = (&__this->___v0_10);
		float* L_20 = (&__this->___angle_9);
		float* L_21 = (&__this->___time_11);
		Parabola_CalculatePathWithHeight_mD97EC9597A2A12FB3A16314780C64C28BA7B0DE4(__this, L_17, L_18, L_19, L_20, L_21, NULL);
		// return v0 != float.NaN && angle != float.NaN && time != float.NaN;
		float L_22 = __this->___v0_10;
		if ((((float)L_22) == ((float)(std::numeric_limits<float>::quiet_NaN()))))
		{
			goto IL_00e2;
		}
	}
	{
		float L_23 = __this->___angle_9;
		if ((((float)L_23) == ((float)(std::numeric_limits<float>::quiet_NaN()))))
		{
			goto IL_00e2;
		}
	}
	{
		float L_24 = __this->___time_11;
		return (bool)((((int32_t)((((float)L_24) == ((float)(std::numeric_limits<float>::quiet_NaN())))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00e2:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Parabola_Recalculate_mBBFFF00304A2B0269CE16E3F3BDA8FEEA98E3D1F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877*>(__this + _offset);
	bool _returnValue;
	_returnValue = Parabola_Recalculate_mBBFFF00304A2B0269CE16E3F3BDA8FEEA98E3D1F(_thisAdjusted, method);
	return _returnValue;
}
// System.Void FillefranzTools.Parabola::CalculatePathWithHeight(UnityEngine.Vector3,System.Single,System.Single&,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parabola_CalculatePathWithHeight_mD97EC9597A2A12FB3A16314780C64C28BA7B0DE4 (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPos0, float ___h1, float* ___v02, float* ___angle3, float* ___time4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Helper_t4C1D75F8F501E3C3350F5CF4596BAE983DB527EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float G_B7_0 = 0.0f;
	{
		// if (h == 0)
		float L_0 = ___h1;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0016;
		}
	}
	{
		// h = 0.00001f;
		___h1 = (9.99999975E-06f);
		// height = h;
		float L_1 = ___h1;
		__this->___height_12 = L_1;
	}

IL_0016:
	{
		// if(h < 0)
		float L_2 = ___h1;
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_003c;
		}
	}
	{
		// curveDown = !curveDown;
		bool L_3 = __this->___curveDown_4;
		__this->___curveDown_4 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		// h = Mathf.Abs(h);
		float L_4 = ___h1;
		float L_5;
		L_5 = fabsf(L_4);
		___h1 = L_5;
		// height = h;
		float L_6 = ___h1;
		__this->___height_12 = L_6;
	}

IL_003c:
	{
		// float xt = targetPos.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___targetPos0;
		float L_8 = L_7.___x_2;
		V_0 = L_8;
		// float yt = !curveDown ? targetPos.y : -targetPos.y;
		bool L_9 = __this->___curveDown_4;
		if (!L_9)
		{
			goto IL_0054;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___targetPos0;
		float L_11 = L_10.___y_3;
		G_B7_0 = ((-L_11));
		goto IL_005a;
	}

IL_0054:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___targetPos0;
		float L_13 = L_12.___y_3;
		G_B7_0 = L_13;
	}

IL_005a:
	{
		V_1 = G_B7_0;
		// float g = -Physics.gravity.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Physics_get_gravity_m94393492AE4ED8B38A22ECCDCD2DDDB71BFA010D(NULL);
		float L_15 = L_14.___y_3;
		V_2 = ((-L_15));
		// a = -0.5f * g;
		float L_16 = V_2;
		Parabola_set_a_m93234FDAFF2059B499CEC330BB682A802583526B_inline(__this, ((float)il2cpp_codegen_multiply((-0.5f), L_16)), NULL);
		// b = Mathf.Sqrt(2 * g * h);
		float L_17 = V_2;
		float L_18 = ___h1;
		float L_19;
		L_19 = sqrtf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((2.0f), L_17)), L_18)));
		Parabola_set_b_m9A9E83C230FEE06963971E2D935587620EBF3380_inline(__this, L_19, NULL);
		// c = -yt;
		float L_20 = V_1;
		Parabola_set_c_mAF6F75BA41324AD4C3A56625F2666792E3FE44C3_inline(__this, ((-L_20)), NULL);
		// float tPlus = Helper.QuadraticFormula(a, b, c, 1);
		float L_21;
		L_21 = Parabola_get_a_m45657B88E4858AB7B90EEC89388F69ACA341E1DD_inline(__this, NULL);
		float L_22;
		L_22 = Parabola_get_b_m06FC4C4FC4136097B8BF0313413B497537BD1FB0_inline(__this, NULL);
		float L_23;
		L_23 = Parabola_get_c_m5AD3671CEE18CCAFBDD327392760C595BB315FA2_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Helper_t4C1D75F8F501E3C3350F5CF4596BAE983DB527EB_il2cpp_TypeInfo_var);
		float L_24;
		L_24 = Helper_QuadraticFormula_m75133E30977735435261ADCBF0ACA3B2291C4216(L_21, L_22, L_23, (1.0f), NULL);
		V_3 = L_24;
		// float tMinus = Helper.QuadraticFormula(a, b, c, -1);
		float L_25;
		L_25 = Parabola_get_a_m45657B88E4858AB7B90EEC89388F69ACA341E1DD_inline(__this, NULL);
		float L_26;
		L_26 = Parabola_get_b_m06FC4C4FC4136097B8BF0313413B497537BD1FB0_inline(__this, NULL);
		float L_27;
		L_27 = Parabola_get_c_m5AD3671CEE18CCAFBDD327392760C595BB315FA2_inline(__this, NULL);
		float L_28;
		L_28 = Helper_QuadraticFormula_m75133E30977735435261ADCBF0ACA3B2291C4216(L_25, L_26, L_27, (-1.0f), NULL);
		V_4 = L_28;
		// if (tPlus == float.NaN) time = tMinus;
		float L_29 = V_3;
		if ((!(((float)L_29) == ((float)(std::numeric_limits<float>::quiet_NaN())))))
		{
			goto IL_00da;
		}
	}
	{
		// if (tPlus == float.NaN) time = tMinus;
		float* L_30 = ___time4;
		float L_31 = V_4;
		*((float*)L_30) = (float)L_31;
		goto IL_00f4;
	}

IL_00da:
	{
		// else if (tMinus == float.NaN) time = tPlus;
		float L_32 = V_4;
		if ((!(((float)L_32) == ((float)(std::numeric_limits<float>::quiet_NaN())))))
		{
			goto IL_00e9;
		}
	}
	{
		// else if (tMinus == float.NaN) time = tPlus;
		float* L_33 = ___time4;
		float L_34 = V_3;
		*((float*)L_33) = (float)L_34;
		goto IL_00f4;
	}

IL_00e9:
	{
		// else time = Mathf.Max(tPlus, tMinus);
		float* L_35 = ___time4;
		float L_36 = V_3;
		float L_37 = V_4;
		float L_38;
		L_38 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_36, L_37, NULL);
		*((float*)L_35) = (float)L_38;
	}

IL_00f4:
	{
		// angle = Mathf.Atan(b * time / xt);
		float* L_39 = ___angle3;
		float L_40;
		L_40 = Parabola_get_b_m06FC4C4FC4136097B8BF0313413B497537BD1FB0_inline(__this, NULL);
		float* L_41 = ___time4;
		float L_42 = *((float*)L_41);
		float L_43 = V_0;
		float L_44;
		L_44 = atanf(((float)(((float)il2cpp_codegen_multiply(L_40, L_42))/L_43)));
		*((float*)L_39) = (float)L_44;
		// v0 = b / Mathf.Sin(angle);
		float* L_45 = ___v02;
		float L_46;
		L_46 = Parabola_get_b_m06FC4C4FC4136097B8BF0313413B497537BD1FB0_inline(__this, NULL);
		float* L_47 = ___angle3;
		float L_48 = *((float*)L_47);
		float L_49;
		L_49 = sinf(L_48);
		*((float*)L_45) = (float)((float)(L_46/L_49));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Parabola_CalculatePathWithHeight_mD97EC9597A2A12FB3A16314780C64C28BA7B0DE4_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPos0, float ___h1, float* ___v02, float* ___angle3, float* ___time4, const RuntimeMethod* method)
{
	Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877*>(__this + _offset);
	Parabola_CalculatePathWithHeight_mD97EC9597A2A12FB3A16314780C64C28BA7B0DE4(_thisAdjusted, ___targetPos0, ___h1, ___v02, ___angle3, ___time4, method);
}
// System.Single FillefranzTools.Parabola::Length(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Parabola_Length_m5C058B5C13FAAF93B48AE7990EB9A01616757BDD (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, float ___step0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// float length = 0;
		V_0 = (0.0f);
		// for (float t = 0; t <= 1; t += step)
		V_1 = (0.0f);
		goto IL_002c;
	}

IL_000e:
	{
		// float dst = Vector3.Distance(Evaluate(t), Evaluate(t + step));
		float L_0 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Parabola_Evaluate_m48BAE59794AEFD1812011DCD578FFB33EC41340B(__this, L_0, NULL);
		float L_2 = V_1;
		float L_3 = ___step0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Parabola_Evaluate_m48BAE59794AEFD1812011DCD578FFB33EC41340B(__this, ((float)il2cpp_codegen_add(L_2, L_3)), NULL);
		float L_5;
		L_5 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_1, L_4, NULL);
		V_2 = L_5;
		// length += dst;
		float L_6 = V_0;
		float L_7 = V_2;
		V_0 = ((float)il2cpp_codegen_add(L_6, L_7));
		// for (float t = 0; t <= 1; t += step)
		float L_8 = V_1;
		float L_9 = ___step0;
		V_1 = ((float)il2cpp_codegen_add(L_8, L_9));
	}

IL_002c:
	{
		// for (float t = 0; t <= 1; t += step)
		float L_10 = V_1;
		if ((((float)L_10) <= ((float)(1.0f))))
		{
			goto IL_000e;
		}
	}
	{
		// return length;
		float L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C  float Parabola_Length_m5C058B5C13FAAF93B48AE7990EB9A01616757BDD_AdjustorThunk (RuntimeObject* __this, float ___step0, const RuntimeMethod* method)
{
	Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877*>(__this + _offset);
	float _returnValue;
	_returnValue = Parabola_Length_m5C058B5C13FAAF93B48AE7990EB9A01616757BDD(_thisAdjusted, ___step0, method);
	return _returnValue;
}
// System.Single FillefranzTools.Parabola::Length(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Parabola_Length_m76630EEFF6F4726D05986E883A29373A9E0B0394 (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, float ___step0, float ___maxT1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// float length = 0;
		V_0 = (0.0f);
		// for (float t = 0; t <= maxT; t += step)
		V_1 = (0.0f);
		goto IL_002c;
	}

IL_000e:
	{
		// float dst = Vector3.Distance(Evaluate(t), Evaluate(t + step));
		float L_0 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Parabola_Evaluate_m48BAE59794AEFD1812011DCD578FFB33EC41340B(__this, L_0, NULL);
		float L_2 = V_1;
		float L_3 = ___step0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Parabola_Evaluate_m48BAE59794AEFD1812011DCD578FFB33EC41340B(__this, ((float)il2cpp_codegen_add(L_2, L_3)), NULL);
		float L_5;
		L_5 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_1, L_4, NULL);
		V_2 = L_5;
		// length += dst;
		float L_6 = V_0;
		float L_7 = V_2;
		V_0 = ((float)il2cpp_codegen_add(L_6, L_7));
		// for (float t = 0; t <= maxT; t += step)
		float L_8 = V_1;
		float L_9 = ___step0;
		V_1 = ((float)il2cpp_codegen_add(L_8, L_9));
	}

IL_002c:
	{
		// for (float t = 0; t <= maxT; t += step)
		float L_10 = V_1;
		float L_11 = ___maxT1;
		if ((((float)L_10) <= ((float)L_11)))
		{
			goto IL_000e;
		}
	}
	{
		// return length;
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_EXTERN_C  float Parabola_Length_m76630EEFF6F4726D05986E883A29373A9E0B0394_AdjustorThunk (RuntimeObject* __this, float ___step0, float ___maxT1, const RuntimeMethod* method)
{
	Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877*>(__this + _offset);
	float _returnValue;
	_returnValue = Parabola_Length_m76630EEFF6F4726D05986E883A29373A9E0B0394(_thisAdjusted, ___step0, ___maxT1, method);
	return _returnValue;
}
// System.Int32 FillefranzTools.Parabola::Sections(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parabola_Sections_m06EB57E4D58E369DFC90A217B00B88B73F3FBA34 (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, float ___step0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		// int i = 0;
		V_0 = 0;
		// for (float t = 0; t <= 1; t += step)
		V_1 = (0.0f);
		goto IL_0012;
	}

IL_000a:
	{
		// i++;
		int32_t L_0 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// for (float t = 0; t <= 1; t += step)
		float L_1 = V_1;
		float L_2 = ___step0;
		V_1 = ((float)il2cpp_codegen_add(L_1, L_2));
	}

IL_0012:
	{
		// for (float t = 0; t <= 1; t += step)
		float L_3 = V_1;
		if ((((float)L_3) <= ((float)(1.0f))))
		{
			goto IL_000a;
		}
	}
	{
		// return i;
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t Parabola_Sections_m06EB57E4D58E369DFC90A217B00B88B73F3FBA34_AdjustorThunk (RuntimeObject* __this, float ___step0, const RuntimeMethod* method)
{
	Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Parabola_Sections_m06EB57E4D58E369DFC90A217B00B88B73F3FBA34(_thisAdjusted, ___step0, method);
	return _returnValue;
}
// System.Single FillefranzTools.Parabola::DstToTime(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Parabola_DstToTime_m00E7882CE989C77E9362C2C28F27E4AB1A0C6E43 (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, float ___step0, float ___distance1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float length = Length(step);
		float L_0 = ___step0;
		float L_1;
		L_1 = Parabola_Length_m5C058B5C13FAAF93B48AE7990EB9A01616757BDD(__this, L_0, NULL);
		V_0 = L_1;
		// return distance / length;
		float L_2 = ___distance1;
		float L_3 = V_0;
		return ((float)(L_2/L_3));
	}
}
IL2CPP_EXTERN_C  float Parabola_DstToTime_m00E7882CE989C77E9362C2C28F27E4AB1A0C6E43_AdjustorThunk (RuntimeObject* __this, float ___step0, float ___distance1, const RuntimeMethod* method)
{
	Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877*>(__this + _offset);
	float _returnValue;
	_returnValue = Parabola_DstToTime_m00E7882CE989C77E9362C2C28F27E4AB1A0C6E43(_thisAdjusted, ___step0, ___distance1, method);
	return _returnValue;
}
// System.Single FillefranzTools.Parabola::Derivation(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Parabola_Derivation_m62302FBD24228DAD89DC2A2A58F5F69F5454CBEC (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, float ___t0, float ___dX1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 pointA = Evaluate(t);
		float L_0 = ___t0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Parabola_Evaluate_m48BAE59794AEFD1812011DCD578FFB33EC41340B(__this, L_0, NULL);
		// Vector3 pointB = Evaluate(t + dX);
		float L_2 = ___t0;
		float L_3 = ___dX1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Parabola_Evaluate_m48BAE59794AEFD1812011DCD578FFB33EC41340B(__this, ((float)il2cpp_codegen_add(L_2, L_3)), NULL);
		V_0 = L_4;
		// float dY = pointA.y - pointB.y;
		float L_5 = L_1.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		float L_7 = L_6.___y_3;
		// return dY / dX;
		float L_8 = ___dX1;
		return ((float)(((float)il2cpp_codegen_subtract(L_5, L_7))/L_8));
	}
}
IL2CPP_EXTERN_C  float Parabola_Derivation_m62302FBD24228DAD89DC2A2A58F5F69F5454CBEC_AdjustorThunk (RuntimeObject* __this, float ___t0, float ___dX1, const RuntimeMethod* method)
{
	Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877*>(__this + _offset);
	float _returnValue;
	_returnValue = Parabola_Derivation_m62302FBD24228DAD89DC2A2A58F5F69F5454CBEC(_thisAdjusted, ___t0, ___dX1, method);
	return _returnValue;
}
// UnityEngine.Vector3 FillefranzTools.Parabola::DirectionAtPoint(System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Parabola_DirectionAtPoint_m96613167B3F1BB5B1BA62A910745DC978CF5837A (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, float ___t0, float ___step1, int32_t ___sign2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (sign > 0)
		int32_t L_0 = ___sign2;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		// Vector3 pointA = Evaluate(t);
		float L_1 = ___t0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Parabola_Evaluate_m48BAE59794AEFD1812011DCD578FFB33EC41340B(__this, L_1, NULL);
		V_0 = L_2;
		// Vector3 pointB = Evaluate(t + step);
		float L_3 = ___t0;
		float L_4 = ___step1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Parabola_Evaluate_m48BAE59794AEFD1812011DCD578FFB33EC41340B(__this, ((float)il2cpp_codegen_add(L_3, L_4)), NULL);
		// return (pointB - pointA).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_5, L_6, NULL);
		V_1 = L_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_1), NULL);
		return L_8;
	}

IL_0024:
	{
		// Vector3 pointA = Evaluate(t);
		float L_9 = ___t0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Parabola_Evaluate_m48BAE59794AEFD1812011DCD578FFB33EC41340B(__this, L_9, NULL);
		V_2 = L_10;
		// Vector3 pointB = Evaluate(t - step);
		float L_11 = ___t0;
		float L_12 = ___step1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Parabola_Evaluate_m48BAE59794AEFD1812011DCD578FFB33EC41340B(__this, ((float)il2cpp_codegen_subtract(L_11, L_12)), NULL);
		// return (pointB - pointA).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_13, L_14, NULL);
		V_1 = L_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_1), NULL);
		return L_16;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Parabola_DirectionAtPoint_m96613167B3F1BB5B1BA62A910745DC978CF5837A_AdjustorThunk (RuntimeObject* __this, float ___t0, float ___step1, int32_t ___sign2, const RuntimeMethod* method)
{
	Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Parabola_DirectionAtPoint_m96613167B3F1BB5B1BA62A910745DC978CF5837A(_thisAdjusted, ___t0, ___step1, ___sign2, method);
	return _returnValue;
}
// UnityEngine.Vector3 FillefranzTools.Parabola::NormalAtPoint(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Parabola_NormalAtPoint_m2DA3EA91DF7271DB78089DF12E23AC3413B05953 (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, float ___t0, float ___step1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 pointA = Evaluate(t);
		float L_0 = ___t0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Parabola_Evaluate_m48BAE59794AEFD1812011DCD578FFB33EC41340B(__this, L_0, NULL);
		V_0 = L_1;
		// Vector3 pointB = Evaluate(t + step);
		float L_2 = ___t0;
		float L_3 = ___step1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Parabola_Evaluate_m48BAE59794AEFD1812011DCD578FFB33EC41340B(__this, ((float)il2cpp_codegen_add(L_2, L_3)), NULL);
		// return Quaternion.LookRotation((pointB - pointA).normalized) * Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_4, L_5, NULL);
		V_1 = L_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_1), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Parabola_NormalAtPoint_m2DA3EA91DF7271DB78089DF12E23AC3413B05953_AdjustorThunk (RuntimeObject* __this, float ___t0, float ___step1, const RuntimeMethod* method)
{
	Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Parabola_NormalAtPoint_m2DA3EA91DF7271DB78089DF12E23AC3413B05953(_thisAdjusted, ___t0, ___step1, method);
	return _returnValue;
}
// System.Single FillefranzTools.Parabola::GetClosestTFromPos(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Parabola_GetClosestTFromPos_m3A9177D00AEB699959D1CC663B5349C96D773354 (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, float ___step1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// float finalT = 0;
		V_0 = (0.0f);
		// float minDst = float.MaxValue;
		V_1 = ((std::numeric_limits<float>::max)());
		// for (float t = 0; t <= 1; t += step)
		V_2 = (0.0f);
		goto IL_002e;
	}

IL_0014:
	{
		// float dst = Vector3.Distance(pos, Evaluate(t));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___pos0;
		float L_1 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Parabola_Evaluate_m48BAE59794AEFD1812011DCD578FFB33EC41340B(__this, L_1, NULL);
		float L_3;
		L_3 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_0, L_2, NULL);
		V_3 = L_3;
		// if (dst < minDst)
		float L_4 = V_3;
		float L_5 = V_1;
		if ((!(((float)L_4) < ((float)L_5))))
		{
			goto IL_002a;
		}
	}
	{
		// minDst = dst;
		float L_6 = V_3;
		V_1 = L_6;
		// finalT = t;
		float L_7 = V_2;
		V_0 = L_7;
	}

IL_002a:
	{
		// for (float t = 0; t <= 1; t += step)
		float L_8 = V_2;
		float L_9 = ___step1;
		V_2 = ((float)il2cpp_codegen_add(L_8, L_9));
	}

IL_002e:
	{
		// for (float t = 0; t <= 1; t += step)
		float L_10 = V_2;
		if ((((float)L_10) <= ((float)(1.0f))))
		{
			goto IL_0014;
		}
	}
	{
		// return finalT;
		float L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C  float Parabola_GetClosestTFromPos_m3A9177D00AEB699959D1CC663B5349C96D773354_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, float ___step1, const RuntimeMethod* method)
{
	Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877*>(__this + _offset);
	float _returnValue;
	_returnValue = Parabola_GetClosestTFromPos_m3A9177D00AEB699959D1CC663B5349C96D773354(_thisAdjusted, ___pos0, ___step1, method);
	return _returnValue;
}
// System.Single FillefranzTools.Parabola::GetHeightFromXZ(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Parabola_GetHeightFromXZ_m8AFD7D1D7A6D0E9B40D136841241DD39C997DFB8 (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, float ___step1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	{
		// float height = 0;
		V_0 = (0.0f);
		// float minDst = float.MaxValue;
		V_1 = ((std::numeric_limits<float>::max)());
		// for (float t = 0; t <= 1; t+= step)
		V_2 = (0.0f);
		goto IL_0042;
	}

IL_0014:
	{
		// Vector3 checkPoint = Evaluate(t);
		float L_0 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Parabola_Evaluate_m48BAE59794AEFD1812011DCD578FFB33EC41340B(__this, L_0, NULL);
		V_3 = L_1;
		// float dst = Vector2.Distance(position.FromXZ(), checkPoint.FromXZ());
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___position0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = ExtensionMethods_FromXZ_m6074BC8E1147608844517952C23BE0A0C2FBF136(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = ExtensionMethods_FromXZ_m6074BC8E1147608844517952C23BE0A0C2FBF136(L_4, NULL);
		float L_6;
		L_6 = Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline(L_3, L_5, NULL);
		V_4 = L_6;
		// if (dst < minDst)
		float L_7 = V_4;
		float L_8 = V_1;
		if ((!(((float)L_7) < ((float)L_8))))
		{
			goto IL_003e;
		}
	}
	{
		// minDst = dst;
		float L_9 = V_4;
		V_1 = L_9;
		// height = checkPoint.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_3;
		float L_11 = L_10.___y_3;
		V_0 = L_11;
	}

IL_003e:
	{
		// for (float t = 0; t <= 1; t+= step)
		float L_12 = V_2;
		float L_13 = ___step1;
		V_2 = ((float)il2cpp_codegen_add(L_12, L_13));
	}

IL_0042:
	{
		// for (float t = 0; t <= 1; t+= step)
		float L_14 = V_2;
		if ((((float)L_14) <= ((float)(1.0f))))
		{
			goto IL_0014;
		}
	}
	{
		// return Mathf.Abs(height /Evaluate(0.5f).y * Height );
		float L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Parabola_Evaluate_m48BAE59794AEFD1812011DCD578FFB33EC41340B(__this, (0.5f), NULL);
		float L_17 = L_16.___y_3;
		float L_18;
		L_18 = Parabola_get_Height_m1F7CD2074EB90BA935E1E8CCEB06990812E143E4_inline(__this, NULL);
		float L_19;
		L_19 = fabsf(((float)il2cpp_codegen_multiply(((float)(L_15/L_17)), L_18)));
		return L_19;
	}
}
IL2CPP_EXTERN_C  float Parabola_GetHeightFromXZ_m8AFD7D1D7A6D0E9B40D136841241DD39C997DFB8_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, float ___step1, const RuntimeMethod* method)
{
	Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877*>(__this + _offset);
	float _returnValue;
	_returnValue = Parabola_GetHeightFromXZ_m8AFD7D1D7A6D0E9B40D136841241DD39C997DFB8(_thisAdjusted, ___position0, ___step1, method);
	return _returnValue;
}
// UnityEngine.Vector3 FillefranzTools.Parabola::MaxPoint(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Parabola_MaxPoint_m35A55A88C3F7D60FD28BDBB8A329583764BE234A (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, float ___step0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Vector3 maxPoint = new Vector3(float.MinValue, float.MinValue, float.MinValue);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), (-(std::numeric_limits<float>::max)()), (-(std::numeric_limits<float>::max)()), (-(std::numeric_limits<float>::max)()), NULL);
		// for (float t = 0; t <= 1; t += step)
		V_1 = (0.0f);
		goto IL_003a;
	}

IL_001e:
	{
		// Vector3 checkedPoint = Evaluate(t);
		float L_0 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Parabola_Evaluate_m48BAE59794AEFD1812011DCD578FFB33EC41340B(__this, L_0, NULL);
		V_2 = L_1;
		// if (checkedPoint.y > maxPoint.y)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_2;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		float L_5 = L_4.___y_3;
		if ((!(((float)L_3) > ((float)L_5))))
		{
			goto IL_0036;
		}
	}
	{
		// maxPoint = checkedPoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_2;
		V_0 = L_6;
	}

IL_0036:
	{
		// for (float t = 0; t <= 1; t += step)
		float L_7 = V_1;
		float L_8 = ___step0;
		V_1 = ((float)il2cpp_codegen_add(L_7, L_8));
	}

IL_003a:
	{
		// for (float t = 0; t <= 1; t += step)
		float L_9 = V_1;
		if ((((float)L_9) <= ((float)(1.0f))))
		{
			goto IL_001e;
		}
	}
	{
		// return maxPoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Parabola_MaxPoint_m35A55A88C3F7D60FD28BDBB8A329583764BE234A_AdjustorThunk (RuntimeObject* __this, float ___step0, const RuntimeMethod* method)
{
	Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Parabola_MaxPoint_m35A55A88C3F7D60FD28BDBB8A329583764BE234A(_thisAdjusted, ___step0, method);
	return _returnValue;
}
// System.Single FillefranzTools.Parabola::MaxPointT(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Parabola_MaxPointT_m385947A4BB37321C638E89A729B7D19CA39FA252 (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, float ___step0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Vector3 maxPoint = new Vector3(float.MinValue, float.MinValue, float.MinValue);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), (-(std::numeric_limits<float>::max)()), (-(std::numeric_limits<float>::max)()), (-(std::numeric_limits<float>::max)()), NULL);
		// float maxT = -1;
		V_1 = (-1.0f);
		// for (float t = 0; t <= 1; t += step)
		V_2 = (0.0f);
		goto IL_0042;
	}

IL_0024:
	{
		// Vector3 checkedPoint = Evaluate(t);
		float L_0 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Parabola_Evaluate_m48BAE59794AEFD1812011DCD578FFB33EC41340B(__this, L_0, NULL);
		V_3 = L_1;
		// if (checkedPoint.y > maxPoint.y)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_3;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		float L_5 = L_4.___y_3;
		if ((!(((float)L_3) > ((float)L_5))))
		{
			goto IL_003e;
		}
	}
	{
		// maxPoint = checkedPoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_3;
		V_0 = L_6;
		// maxT = t;
		float L_7 = V_2;
		V_1 = L_7;
	}

IL_003e:
	{
		// for (float t = 0; t <= 1; t += step)
		float L_8 = V_2;
		float L_9 = ___step0;
		V_2 = ((float)il2cpp_codegen_add(L_8, L_9));
	}

IL_0042:
	{
		// for (float t = 0; t <= 1; t += step)
		float L_10 = V_2;
		if ((((float)L_10) <= ((float)(1.0f))))
		{
			goto IL_0024;
		}
	}
	{
		// return maxT;
		float L_11 = V_1;
		return L_11;
	}
}
IL2CPP_EXTERN_C  float Parabola_MaxPointT_m385947A4BB37321C638E89A729B7D19CA39FA252_AdjustorThunk (RuntimeObject* __this, float ___step0, const RuntimeMethod* method)
{
	Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877*>(__this + _offset);
	float _returnValue;
	_returnValue = Parabola_MaxPointT_m385947A4BB37321C638E89A729B7D19CA39FA252(_thisAdjusted, ___step0, method);
	return _returnValue;
}
// System.Single FillefranzTools.Parabola::StartToMaxDst(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Parabola_StartToMaxDst_m1FD573D14A44914FDE8330C00941826F46DCD23D (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, float ___step0, const RuntimeMethod* method) 
{
	{
		// Vector3 maxPoint = MaxPoint(step);
		float L_0 = ___step0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Parabola_MaxPoint_m35A55A88C3F7D60FD28BDBB8A329583764BE234A(__this, L_0, NULL);
		// return Vector2.Distance(maxPoint.FromXZ(), startPoint.FromXZ());
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = ExtensionMethods_FromXZ_m6074BC8E1147608844517952C23BE0A0C2FBF136(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___startPoint_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = ExtensionMethods_FromXZ_m6074BC8E1147608844517952C23BE0A0C2FBF136(L_3, NULL);
		float L_5;
		L_5 = Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline(L_2, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  float Parabola_StartToMaxDst_m1FD573D14A44914FDE8330C00941826F46DCD23D_AdjustorThunk (RuntimeObject* __this, float ___step0, const RuntimeMethod* method)
{
	Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877*>(__this + _offset);
	float _returnValue;
	_returnValue = Parabola_StartToMaxDst_m1FD573D14A44914FDE8330C00941826F46DCD23D(_thisAdjusted, ___step0, method);
	return _returnValue;
}
// System.Single FillefranzTools.Parabola::DstToMax(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Parabola_DstToMax_m53D5100CBB064C83951292053ACF3BBD0FC3BAC9 (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, float ___step1, const RuntimeMethod* method) 
{
	{
		// Vector3 maxPoint = MaxPoint(step);
		float L_0 = ___step1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Parabola_MaxPoint_m35A55A88C3F7D60FD28BDBB8A329583764BE234A(__this, L_0, NULL);
		// return Vector2.Distance(maxPoint.FromXZ(), point.FromXZ());
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = ExtensionMethods_FromXZ_m6074BC8E1147608844517952C23BE0A0C2FBF136(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___point0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = ExtensionMethods_FromXZ_m6074BC8E1147608844517952C23BE0A0C2FBF136(L_3, NULL);
		float L_5;
		L_5 = Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline(L_2, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  float Parabola_DstToMax_m53D5100CBB064C83951292053ACF3BBD0FC3BAC9_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, float ___step1, const RuntimeMethod* method)
{
	Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877*>(__this + _offset);
	float _returnValue;
	_returnValue = Parabola_DstToMax_m53D5100CBB064C83951292053ACF3BBD0FC3BAC9(_thisAdjusted, ___point0, ___step1, method);
	return _returnValue;
}
// System.Single FillefranzTools.Parabola::GetAngleAtPoint(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Parabola_GetAngleAtPoint_m8BDF2CD07F8C971D2BD4EFBBC16ADE589A60672E (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, float ___t0, float ___step1, const RuntimeMethod* method) 
{
	{
		// Vector3 fwd= DirectionAtPoint(t, step);
		float L_0 = ___t0;
		float L_1 = ___step1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Parabola_DirectionAtPoint_m96613167B3F1BB5B1BA62A910745DC978CF5837A(__this, L_0, L_1, 1, NULL);
		// return Vector3.Angle( fwd, direction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___direction_14;
		float L_4;
		L_4 = Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline(L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  float Parabola_GetAngleAtPoint_m8BDF2CD07F8C971D2BD4EFBBC16ADE589A60672E_AdjustorThunk (RuntimeObject* __this, float ___t0, float ___step1, const RuntimeMethod* method)
{
	Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877*>(__this + _offset);
	float _returnValue;
	_returnValue = Parabola_GetAngleAtPoint_m8BDF2CD07F8C971D2BD4EFBBC16ADE589A60672E(_thisAdjusted, ___t0, ___step1, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 PropMaker.Ladder::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ladder_get_forward_mFBF9C619691DB4A7FF201472D608E35374C1159B (Ladder_t7E7D2C20156D7E9D077F024C74E1F3C9CB85C15A* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public Vector3 forward => (end - start).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___end_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___start_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		V_0 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		return L_3;
	}
}
// UnityEngine.Vector3 PropMaker.Ladder::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ladder_get_up_mB2C99B91214AA29E73F442CF608F3C5B3AA12AAB (Ladder_t7E7D2C20156D7E9D077F024C74E1F3C9CB85C15A* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (start.OverrideY(0) == end.OverrideY(0))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___start_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = ExtensionMethods_OverrideY_mD6CCA8D712AEA47186521FA999EFDB16D3854334(L_0, (0.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___end_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = ExtensionMethods_OverrideY_mD6CCA8D712AEA47186521FA999EFDB16D3854334(L_2, (0.0f), NULL);
		bool L_4;
		L_4 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		// return Quaternion.AngleAxis(rotation, forward) * Vector3.forward;
		float L_5 = __this->___rotation_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Ladder_get_forward_mFBF9C619691DB4A7FF201472D608E35374C1159B(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(L_5, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_7, L_8, NULL);
		return L_9;
	}

IL_0043:
	{
		// return Vector3.Cross(forward, Quaternion.LookRotation(Vector3.right) * (end - start).OverrideY(0).normalized).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Ladder_get_forward_mFBF9C619691DB4A7FF201472D608E35374C1159B(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___end_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = __this->___start_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_13, L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = ExtensionMethods_OverrideY_mD6CCA8D712AEA47186521FA999EFDB16D3854334(L_15, (0.0f), NULL);
		V_0 = L_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_12, L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_10, L_18, NULL);
		V_0 = L_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		return L_20;
	}
}
// UnityEngine.Vector3 PropMaker.Ladder::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ladder_get_right_m29E137C18FFC7C9CBC9DD841CA75B4962FD29E46 (Ladder_t7E7D2C20156D7E9D077F024C74E1F3C9CB85C15A* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 right => Vector3.Cross(forward, up).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Ladder_get_forward_mFBF9C619691DB4A7FF201472D608E35374C1159B(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Ladder_get_up_mB2C99B91214AA29E73F442CF608F3C5B3AA12AAB(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_0, L_1, NULL);
		V_0 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		return L_3;
	}
}
// System.Void PropMaker.Ladder::UpdateLadder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ladder_UpdateLadder_mA6DCC64651FAE4D442206AD4CC851F3535F07DF4 (Ladder_t7E7D2C20156D7E9D077F024C74E1F3C9CB85C15A* __this, const RuntimeMethod* method) 
{
	{
		// length = Vector3.Distance(start, end);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___start_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___end_19;
		float L_2;
		L_2 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_0, L_1, NULL);
		__this->___length_35 = L_2;
		// Clear();
		VirtualActionInvoker0::Invoke(4 /* System.Void PropMaker.Prop::Clear() */, __this);
		// Recenter();
		Ladder_Recenter_mE74A7E0F254DD73C949492DA8C9D18A4B6B0BB3B(__this, NULL);
		// CreateRail(1);
		Ladder_CreateRail_m0EC3E185556306524EB172E736FB36AF868A4C6D(__this, 1, NULL);
		// CreateRail(-1);
		Ladder_CreateRail_m0EC3E185556306524EB172E736FB36AF868A4C6D(__this, (-1), NULL);
		// CalculateStepValues();
		Ladder_CalculateStepValues_mE6D1B6DFF77ECCEFC5ADB11456ECE5C74C299A32(__this, NULL);
		// PlaceSteps();
		Ladder_PlaceSteps_mC542866E19F076A95949CCD177D8B67BCBCCE137(__this, NULL);
		// SetMesh();
		VirtualActionInvoker0::Invoke(5 /* System.Void PropMaker.Prop::SetMesh() */, __this);
		// }
		return;
	}
}
// System.Void PropMaker.Ladder::CreateRail(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ladder_CreateRail_m0EC3E185556306524EB172E736FB36AF868A4C6D (Ladder_t7E7D2C20156D7E9D077F024C74E1F3C9CB85C15A* __this, int32_t ___sign0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 start = this.start + right * sign * (width * 0.5f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___start_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Ladder_get_right_m29E137C18FFC7C9CBC9DD841CA75B4962FD29E46(__this, NULL);
		int32_t L_2 = ___sign0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, ((float)L_2), NULL);
		float L_4 = __this->___width_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, ((float)il2cpp_codegen_multiply(L_4, (0.5f))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_0, L_5, NULL);
		V_0 = L_6;
		// CreatePlane(start, new Vector2(railWidth, length), right * sign, forward, Vector2.one, tris, sign < 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		float L_8 = __this->___railWidth_22;
		float L_9 = __this->___length_35;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_10), L_8, L_9, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Ladder_get_right_m29E137C18FFC7C9CBC9DD841CA75B4962FD29E46(__this, NULL);
		int32_t L_12 = ___sign0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_11, ((float)L_12), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Ladder_get_forward_mFBF9C619691DB4A7FF201472D608E35374C1159B(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_16 = __this->___tris_34;
		int32_t L_17 = ___sign0;
		Prop_CreatePlane_m9917530169221CCD4DEF19ADE8B665955E6177B3(__this, L_7, L_10, L_13, L_14, L_15, L_16, (bool)((((int32_t)L_17) < ((int32_t)0))? 1 : 0), (bool)0, (bool)0, NULL);
		// CreatePlane(start, new Vector2(railThickness, length), -up, forward, Vector2.one, tris, sign > 0, true);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_0;
		float L_19 = __this->___railThickness_23;
		float L_20 = __this->___length_35;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_21), L_19, L_20, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Ladder_get_up_mB2C99B91214AA29E73F442CF608F3C5B3AA12AAB(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Ladder_get_forward_mFBF9C619691DB4A7FF201472D608E35374C1159B(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		L_25 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_26 = __this->___tris_34;
		int32_t L_27 = ___sign0;
		Prop_CreatePlane_m9917530169221CCD4DEF19ADE8B665955E6177B3(__this, L_18, L_21, L_23, L_24, L_25, L_26, (bool)((((int32_t)L_27) > ((int32_t)0))? 1 : 0), (bool)1, (bool)0, NULL);
		// start = this.start + right * sign * (width * 0.5f) - up * railThickness;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = __this->___start_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Ladder_get_right_m29E137C18FFC7C9CBC9DD841CA75B4962FD29E46(__this, NULL);
		int32_t L_30 = ___sign0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_29, ((float)L_30), NULL);
		float L_32 = __this->___width_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_31, ((float)il2cpp_codegen_multiply(L_32, (0.5f))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_28, L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Ladder_get_up_mB2C99B91214AA29E73F442CF608F3C5B3AA12AAB(__this, NULL);
		float L_36 = __this->___railThickness_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_35, L_36, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_34, L_37, NULL);
		V_0 = L_38;
		// CreatePlane(start, new Vector2(railWidth, length), right * sign, forward, Vector2.one, tris, sign > 0, true);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_0;
		float L_40 = __this->___railWidth_22;
		float L_41 = __this->___length_35;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_42), L_40, L_41, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Ladder_get_right_m29E137C18FFC7C9CBC9DD841CA75B4962FD29E46(__this, NULL);
		int32_t L_44 = ___sign0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_43, ((float)L_44), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Ladder_get_forward_mFBF9C619691DB4A7FF201472D608E35374C1159B(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47;
		L_47 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_48 = __this->___tris_34;
		int32_t L_49 = ___sign0;
		Prop_CreatePlane_m9917530169221CCD4DEF19ADE8B665955E6177B3(__this, L_39, L_42, L_45, L_46, L_47, L_48, (bool)((((int32_t)L_49) > ((int32_t)0))? 1 : 0), (bool)1, (bool)0, NULL);
		// start = this.start + right * sign * (width * 0.5f + railWidth) - up * railThickness;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = __this->___start_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Ladder_get_right_m29E137C18FFC7C9CBC9DD841CA75B4962FD29E46(__this, NULL);
		int32_t L_52 = ___sign0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_51, ((float)L_52), NULL);
		float L_54 = __this->___width_21;
		float L_55 = __this->___railWidth_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_53, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_54, (0.5f))), L_55)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_50, L_56, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Ladder_get_up_mB2C99B91214AA29E73F442CF608F3C5B3AA12AAB(__this, NULL);
		float L_59 = __this->___railThickness_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_58, L_59, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_57, L_60, NULL);
		V_0 = L_61;
		// CreatePlane(start, new Vector2(railThickness, length), up, forward, Vector2.one, tris, sign > 0, true);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62 = V_0;
		float L_63 = __this->___railThickness_23;
		float L_64 = __this->___length_35;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_65;
		memset((&L_65), 0, sizeof(L_65));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_65), L_63, L_64, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = Ladder_get_up_mB2C99B91214AA29E73F442CF608F3C5B3AA12AAB(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Ladder_get_forward_mFBF9C619691DB4A7FF201472D608E35374C1159B(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_68;
		L_68 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_69 = __this->___tris_34;
		int32_t L_70 = ___sign0;
		Prop_CreatePlane_m9917530169221CCD4DEF19ADE8B665955E6177B3(__this, L_62, L_65, L_66, L_67, L_68, L_69, (bool)((((int32_t)L_70) > ((int32_t)0))? 1 : 0), (bool)1, (bool)0, NULL);
		// if (endMode == EndMode.Flat)
		int32_t L_71 = __this->___endMode_24;
		if (L_71)
		{
			goto IL_0281;
		}
	}
	{
		// start = this.start + right * sign * width * 0.5f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72 = __this->___start_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = Ladder_get_right_m29E137C18FFC7C9CBC9DD841CA75B4962FD29E46(__this, NULL);
		int32_t L_74 = ___sign0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_73, ((float)L_74), NULL);
		float L_76 = __this->___width_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		L_77 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_75, L_76, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_77, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		L_79 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_72, L_78, NULL);
		V_0 = L_79;
		// CreatePlane(start, new Vector2(railWidth, railThickness), right * sign, -up, Vector2.one, tris, sign > 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80 = V_0;
		float L_81 = __this->___railWidth_22;
		float L_82 = __this->___railThickness_23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_83;
		memset((&L_83), 0, sizeof(L_83));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_83), L_81, L_82, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84;
		L_84 = Ladder_get_right_m29E137C18FFC7C9CBC9DD841CA75B4962FD29E46(__this, NULL);
		int32_t L_85 = ___sign0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86;
		L_86 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_84, ((float)L_85), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
		L_87 = Ladder_get_up_mB2C99B91214AA29E73F442CF608F3C5B3AA12AAB(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		L_88 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_87, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89;
		L_89 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_90 = __this->___tris_34;
		int32_t L_91 = ___sign0;
		Prop_CreatePlane_m9917530169221CCD4DEF19ADE8B665955E6177B3(__this, L_80, L_83, L_86, L_88, L_89, L_90, (bool)((((int32_t)L_91) > ((int32_t)0))? 1 : 0), (bool)0, (bool)0, NULL);
		// start = end + right * sign * width * 0.5f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92 = __this->___end_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93;
		L_93 = Ladder_get_right_m29E137C18FFC7C9CBC9DD841CA75B4962FD29E46(__this, NULL);
		int32_t L_94 = ___sign0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_93, ((float)L_94), NULL);
		float L_96 = __this->___width_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97;
		L_97 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_95, L_96, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		L_98 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_97, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99;
		L_99 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_92, L_98, NULL);
		V_0 = L_99;
		// CreatePlane(start, new Vector2(railWidth, railThickness), right * sign, -up, Vector2.one, tris, sign < 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100 = V_0;
		float L_101 = __this->___railWidth_22;
		float L_102 = __this->___railThickness_23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_103;
		memset((&L_103), 0, sizeof(L_103));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_103), L_101, L_102, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104;
		L_104 = Ladder_get_right_m29E137C18FFC7C9CBC9DD841CA75B4962FD29E46(__this, NULL);
		int32_t L_105 = ___sign0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106;
		L_106 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_104, ((float)L_105), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107;
		L_107 = Ladder_get_up_mB2C99B91214AA29E73F442CF608F3C5B3AA12AAB(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		L_108 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_107, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_109;
		L_109 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_110 = __this->___tris_34;
		int32_t L_111 = ___sign0;
		Prop_CreatePlane_m9917530169221CCD4DEF19ADE8B665955E6177B3(__this, L_100, L_103, L_106, L_108, L_109, L_110, (bool)((((int32_t)L_111) < ((int32_t)0))? 1 : 0), (bool)0, (bool)0, NULL);
	}

IL_0281:
	{
		// }
		return;
	}
}
// System.Void PropMaker.Ladder::CalculateStepValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ladder_CalculateStepValues_mE6D1B6DFF77ECCEFC5ADB11456ECE5C74C299A32 (Ladder_t7E7D2C20156D7E9D077F024C74E1F3C9CB85C15A* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	{
		// if (fixedStepAmount)
		bool L_0 = __this->___fixedStepAmount_25;
		if (!L_0)
		{
			goto IL_0049;
		}
	}
	{
		// float remainingLength = length;
		float L_1 = __this->___length_35;
		V_0 = L_1;
		// int numberOfSpaces = numberOfSteps + 1;
		int32_t L_2 = __this->___numberOfSteps_29;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		// remainingLength -= numberOfSteps * stepRadius * 2;
		float L_3 = V_0;
		int32_t L_4 = __this->___numberOfSteps_29;
		float L_5 = __this->___stepRadius_27;
		V_0 = ((float)il2cpp_codegen_subtract(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)L_4), L_5)), (2.0f)))));
		// remainingLength -= stepPadding * 2;
		float L_6 = V_0;
		float L_7 = __this->___stepPadding_28;
		V_0 = ((float)il2cpp_codegen_subtract(L_6, ((float)il2cpp_codegen_multiply(L_7, (2.0f)))));
		// stepSpacing = remainingLength / numberOfSpaces;
		float L_8 = V_0;
		int32_t L_9 = V_1;
		__this->___stepSpacing_26 = ((float)(L_8/((float)L_9)));
		return;
	}

IL_0049:
	{
		// float totalSize = stepSpacing;
		float L_10 = __this->___stepSpacing_26;
		V_2 = L_10;
		// int amount = 0;
		V_3 = 0;
		goto IL_006e;
	}

IL_0054:
	{
		// totalSize += stepRadius * 2+ stepSpacing;
		float L_11 = V_2;
		float L_12 = __this->___stepRadius_27;
		float L_13 = __this->___stepSpacing_26;
		V_2 = ((float)il2cpp_codegen_add(L_11, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, (2.0f))), L_13))));
		// amount++;
		int32_t L_14 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_006e:
	{
		// while (totalSize + stepRadius * 2 + stepSpacing< length)
		float L_15 = V_2;
		float L_16 = __this->___stepRadius_27;
		float L_17 = __this->___stepSpacing_26;
		float L_18 = __this->___length_35;
		if ((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_15, ((float)il2cpp_codegen_multiply(L_16, (2.0f))))), L_17))) < ((float)L_18)))
		{
			goto IL_0054;
		}
	}
	{
		// stepPadding = (length - totalSize) * 0.5f;
		float L_19 = __this->___length_35;
		float L_20 = V_2;
		__this->___stepPadding_28 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_20)), (0.5f)));
		// numberOfSteps = amount;
		int32_t L_21 = V_3;
		__this->___numberOfSteps_29 = L_21;
		// }
		return;
	}
}
// System.Void PropMaker.Ladder::PlaceSteps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ladder_PlaceSteps_mC542866E19F076A95949CCD177D8B67BCBCCE137 (Ladder_t7E7D2C20156D7E9D077F024C74E1F3C9CB85C15A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Helper_t4C1D75F8F501E3C3350F5CF4596BAE983DB527EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_4 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_5 = NULL;
	{
		// for (int i = 0; i < numberOfSteps; i++)
		V_0 = 0;
		goto IL_0100;
	}

IL_0007:
	{
		// float dst = stepPadding + i * stepRadius * 2  + stepRadius + stepSpacing * (i +1);
		float L_0 = __this->___stepPadding_28;
		int32_t L_1 = V_0;
		float L_2 = __this->___stepRadius_27;
		float L_3 = __this->___stepRadius_27;
		float L_4 = __this->___stepSpacing_26;
		int32_t L_5 = V_0;
		V_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)L_1), L_2)), (2.0f))))), L_3)), ((float)il2cpp_codegen_multiply(L_4, ((float)((int32_t)il2cpp_codegen_add(L_5, 1)))))));
		// Vector3 centerA = start + forward * dst + right * width * 0.5f - up * railThickness * 0.5f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___start_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Ladder_get_forward_mFBF9C619691DB4A7FF201472D608E35374C1159B(__this, NULL);
		float L_8 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_6, L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Ladder_get_right_m29E137C18FFC7C9CBC9DD841CA75B4962FD29E46(__this, NULL);
		float L_12 = __this->___width_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_11, L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_13, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_10, L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Ladder_get_up_mB2C99B91214AA29E73F442CF608F3C5B3AA12AAB(__this, NULL);
		float L_17 = __this->___railThickness_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_16, L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_18, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_15, L_19, NULL);
		V_2 = L_20;
		// Vector3 centerB = centerA - right * width;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Ladder_get_right_m29E137C18FFC7C9CBC9DD841CA75B4962FD29E46(__this, NULL);
		float L_23 = __this->___width_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_22, L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_21, L_24, NULL);
		V_3 = L_25;
		// Vector3[] circleA = Helper.PointsOnCircle(stepRadius, stepResolution, centerA, up, right);
		float L_26 = __this->___stepRadius_27;
		int32_t L_27 = __this->___stepResolution_30;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Ladder_get_up_mB2C99B91214AA29E73F442CF608F3C5B3AA12AAB(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Ladder_get_right_m29E137C18FFC7C9CBC9DD841CA75B4962FD29E46(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Helper_t4C1D75F8F501E3C3350F5CF4596BAE983DB527EB_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_31;
		L_31 = Helper_PointsOnCircle_mF2E1EE772405FAEFDE2F99ADEB89A7476B1F4096(L_26, L_27, L_28, L_29, L_30, NULL);
		V_4 = L_31;
		// Vector3[] circleB = Helper.PointsOnCircle(stepRadius, stepResolution, centerB, up, right);
		float L_32 = __this->___stepRadius_27;
		int32_t L_33 = __this->___stepResolution_30;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Ladder_get_up_mB2C99B91214AA29E73F442CF608F3C5B3AA12AAB(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Ladder_get_right_m29E137C18FFC7C9CBC9DD841CA75B4962FD29E46(__this, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_37;
		L_37 = Helper_PointsOnCircle_mF2E1EE772405FAEFDE2F99ADEB89A7476B1F4096(L_32, L_33, L_34, L_35, L_36, NULL);
		V_5 = L_37;
		// ConnectCircles(circleB, circleA, tris, 0, 1, false);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_38 = V_5;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_39 = V_4;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_40 = __this->___tris_34;
		Prop_ConnectCircles_m8202516A94348559CFA36BCB5131BB2520D6D70C(__this, L_38, L_39, L_40, (0.0f), (1.0f), (bool)0, NULL);
		// for (int i = 0; i < numberOfSteps; i++)
		int32_t L_41 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_0100:
	{
		// for (int i = 0; i < numberOfSteps; i++)
		int32_t L_42 = V_0;
		int32_t L_43 = __this->___numberOfSteps_29;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PropMaker.Ladder::SetMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ladder_SetMesh_mF84068EE09E75CE73D6ECB2D3D42932F5552367D (Ladder_t7E7D2C20156D7E9D077F024C74E1F3C9CB85C15A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// Quaternion orientation = Quaternion.AngleAxis(rotation, forward);
		float L_0 = __this->___rotation_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Ladder_get_forward_mFBF9C619691DB4A7FF201472D608E35374C1159B(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(L_0, L_1, NULL);
		V_0 = L_2;
		// for (int i = 0; i < vertices.Count; i++)
		V_1 = 0;
		goto IL_0038;
	}

IL_0016:
	{
		// vertices[i] = orientation * vertices[i];
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_3;
		L_3 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		int32_t L_4 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = V_0;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_6;
		L_6 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_6, L_7, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_5, L_8, NULL);
		NullCheck(L_3);
		List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C(L_3, L_4, L_9, List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C_RuntimeMethod_var);
		// for (int i = 0; i < vertices.Count; i++)
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0038:
	{
		// for (int i = 0; i < vertices.Count; i++)
		int32_t L_11 = V_1;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_12;
		L_12 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_12, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0016;
		}
	}
	{
		// for (int i = 0; i < normals.Count; i++)
		V_2 = 0;
		goto IL_006c;
	}

IL_004a:
	{
		// normals[i] = orientation * normals[i];
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_14 = ((Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E*)__this)->___normals_15;
		int32_t L_15 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = V_0;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_17 = ((Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E*)__this)->___normals_15;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_17, L_18, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_16, L_19, NULL);
		NullCheck(L_14);
		List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C(L_14, L_15, L_20, List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C_RuntimeMethod_var);
		// for (int i = 0; i < normals.Count; i++)
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_006c:
	{
		// for (int i = 0; i < normals.Count; i++)
		int32_t L_22 = V_2;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_23 = ((Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E*)__this)->___normals_15;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_23, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_004a;
		}
	}
	{
		// if (vertices.Count >= 65534)
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_25;
		L_25 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_25);
		int32_t L_26;
		L_26 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_25, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)65534))))
		{
			goto IL_009a;
		}
	}
	{
		// mesh.indexFormat = UnityEngine.Rendering.IndexFormat.UInt32;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_27;
		L_27 = Prop_get_mesh_m7ACDC9F94B55D786428742581160D36AACBA7E57_inline(__this, NULL);
		NullCheck(L_27);
		Mesh_set_indexFormat_mCCC7837A0916FA7A272159DA6AF984B0022488F4(L_27, 1, NULL);
		goto IL_00a6;
	}

IL_009a:
	{
		// mesh.indexFormat = UnityEngine.Rendering.IndexFormat.UInt16;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_28;
		L_28 = Prop_get_mesh_m7ACDC9F94B55D786428742581160D36AACBA7E57_inline(__this, NULL);
		NullCheck(L_28);
		Mesh_set_indexFormat_mCCC7837A0916FA7A272159DA6AF984B0022488F4(L_28, 0, NULL);
	}

IL_00a6:
	{
		// mesh.SetVertices(vertices);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_29;
		L_29 = Prop_get_mesh_m7ACDC9F94B55D786428742581160D36AACBA7E57_inline(__this, NULL);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_30;
		L_30 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_29);
		Mesh_SetVertices_mCE01139EEEC3D10B4A6CEA1749FD84DABC53599E(L_29, L_30, NULL);
		// mesh.SetTriangles(tris, 0);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_31;
		L_31 = Prop_get_mesh_m7ACDC9F94B55D786428742581160D36AACBA7E57_inline(__this, NULL);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_32 = __this->___tris_34;
		NullCheck(L_31);
		Mesh_SetTriangles_mD495DA0B00DB0E60A2B7B500D644F4470C1D61DB(L_31, L_32, 0, NULL);
		// mesh.SetUVs(0, uvs);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_33;
		L_33 = Prop_get_mesh_m7ACDC9F94B55D786428742581160D36AACBA7E57_inline(__this, NULL);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_34 = ((Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E*)__this)->___uvs_16;
		NullCheck(L_33);
		Mesh_SetUVs_m5A7A6EC14A621579B7138F2EF9BECA60E880A8D7(L_33, 0, L_34, NULL);
		// mesh.SetNormals(normals);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_35;
		L_35 = Prop_get_mesh_m7ACDC9F94B55D786428742581160D36AACBA7E57_inline(__this, NULL);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_36 = ((Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E*)__this)->___normals_15;
		NullCheck(L_35);
		Mesh_SetNormals_mB4072A4D2600768FD62BC9CAAFF8C43955A4A365(L_35, L_36, NULL);
		// mesh.name = meshName;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_37;
		L_37 = Prop_get_mesh_m7ACDC9F94B55D786428742581160D36AACBA7E57_inline(__this, NULL);
		String_t* L_38 = ((Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E*)__this)->___meshName_17;
		NullCheck(L_37);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_37, L_38, NULL);
		// GetReferences();
		VirtualActionInvoker0::Invoke(6 /* System.Void PropMaker.Prop::GetReferences() */, __this);
		// meshFilter.mesh = mesh;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_39;
		L_39 = Prop_get_meshFilter_mB45F1C5BDFA3B615229CB1BFB362E4F763EE142A_inline(__this, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_40;
		L_40 = Prop_get_mesh_m7ACDC9F94B55D786428742581160D36AACBA7E57_inline(__this, NULL);
		NullCheck(L_39);
		MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8(L_39, L_40, NULL);
		// meshCollider.sharedMesh = mesh;
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_41;
		L_41 = Prop_get_meshCollider_mC9BB81EB39E87F3AEB088BBA2C1DCCBC5C5088D0_inline(__this, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_42;
		L_42 = Prop_get_mesh_m7ACDC9F94B55D786428742581160D36AACBA7E57_inline(__this, NULL);
		NullCheck(L_41);
		MeshCollider_set_sharedMesh_m05F87B9AC04139285EBBCC159F77B51C6940E79C(L_41, L_42, NULL);
		// vertexCount = vertices.Count;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_43;
		L_43 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_43);
		int32_t L_44;
		L_44 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_43, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		((Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E*)__this)->___vertexCount_8 = L_44;
		// triangleCount = tris.Count / 3;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_45 = __this->___tris_34;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_45, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		((Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E*)__this)->___triangleCount_9 = ((int32_t)(L_46/3));
		// normals.Clear();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_47 = ((Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E*)__this)->___normals_15;
		NullCheck(L_47);
		List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline(L_47, List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		// tris.Clear();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_48 = __this->___tris_34;
		NullCheck(L_48);
		List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline(L_48, List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		// vertices.Clear();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_49;
		L_49 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_49);
		List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline(L_49, List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		// uvs.Clear();
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_50 = ((Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E*)__this)->___uvs_16;
		NullCheck(L_50);
		List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_inline(L_50, List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void PropMaker.Ladder::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ladder_Clear_mD1EE9B28FBFDADEB368E44BF2E82AF8360DAFAEF (Ladder_t7E7D2C20156D7E9D077F024C74E1F3C9CB85C15A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mesh == null) mesh = new Mesh();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0;
		L_0 = Prop_get_mesh_m7ACDC9F94B55D786428742581160D36AACBA7E57_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if (mesh == null) mesh = new Mesh();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_2 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_2, NULL);
		Prop_set_mesh_m55D410E9666D62CCD6C5EAA6B21635C9FE343A67_inline(__this, L_2, NULL);
	}

IL_0019:
	{
		// normals.Clear();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_3 = ((Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E*)__this)->___normals_15;
		NullCheck(L_3);
		List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline(L_3, List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		// mesh.Clear();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_4;
		L_4 = Prop_get_mesh_m7ACDC9F94B55D786428742581160D36AACBA7E57_inline(__this, NULL);
		NullCheck(L_4);
		Mesh_Clear_m0F95397EA143D31AD0B4D332E8C6FA25A7957BC0(L_4, NULL);
		// tris.Clear();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_5 = __this->___tris_34;
		NullCheck(L_5);
		List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline(L_5, List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		// vertices.Clear();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_6;
		L_6 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_6);
		List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline(L_6, List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		// uvs.Clear();
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_7 = ((Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E*)__this)->___uvs_16;
		NullCheck(L_7);
		List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_inline(L_7, List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void PropMaker.Ladder::Recenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ladder_Recenter_mE74A7E0F254DD73C949492DA8C9D18A4B6B0BB3B (Ladder_t7E7D2C20156D7E9D077F024C74E1F3C9CB85C15A* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 center = (start + end) / 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___start_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___end_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_0, L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_2, (2.0f), NULL);
		V_0 = L_3;
		// start -= center;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___start_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_4, L_5, NULL);
		__this->___start_18 = L_6;
		// end -= center;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___end_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_7, L_8, NULL);
		__this->___end_19 = L_9;
		// transform.position += center;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = L_10;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_12, L_13, NULL);
		NullCheck(L_11);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_11, L_14, NULL);
		// }
		return;
	}
}
// System.Void PropMaker.Ladder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ladder__ctor_m8549A81223950E5DB9D16668170B1042F22C66CC (Ladder_t7E7D2C20156D7E9D077F024C74E1F3C9CB85C15A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float stepSpacing = 0.25f;
		__this->___stepSpacing_26 = (0.25f);
		// public float stepRadius = 0.1f;
		__this->___stepRadius_27 = (0.100000001f);
		// public int numberOfSteps = 10;
		__this->___numberOfSteps_29 = ((int32_t)10);
		// public int stepResolution = 12;
		__this->___stepResolution_30 = ((int32_t)12);
		// public bool autoCenter = true; //Call Recenter() when a change is made?
		__this->___autoCenter_31 = (bool)1;
		// List<int> tris = new List< int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_0, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		__this->___tris_34 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tris_34), (void*)L_0);
		Prop__ctor_m11AF1C48E48741D916C89D5FA50B9486C619C173(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.MeshFilter PropMaker.Prop::get_meshFilter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* Prop_get_meshFilter_mB45F1C5BDFA3B615229CB1BFB362E4F763EE142A (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, const RuntimeMethod* method) 
{
	{
		// public MeshFilter meshFilter { get; protected set; }
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0 = __this->___U3CmeshFilterU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void PropMaker.Prop::set_meshFilter(UnityEngine.MeshFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Prop_set_meshFilter_m64B146E400C50487464E99044FE8CE5E3ECBD1E4 (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___value0, const RuntimeMethod* method) 
{
	{
		// public MeshFilter meshFilter { get; protected set; }
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0 = ___value0;
		__this->___U3CmeshFilterU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmeshFilterU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// UnityEngine.MeshCollider PropMaker.Prop::get_meshCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* Prop_get_meshCollider_mC9BB81EB39E87F3AEB088BBA2C1DCCBC5C5088D0 (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, const RuntimeMethod* method) 
{
	{
		// public MeshCollider meshCollider { get; protected set; }
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_0 = __this->___U3CmeshColliderU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void PropMaker.Prop::set_meshCollider(UnityEngine.MeshCollider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Prop_set_meshCollider_m8DC2D6E2D1D60AB42EF8CE1489F3B413234966EE (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* ___value0, const RuntimeMethod* method) 
{
	{
		// public MeshCollider meshCollider { get; protected set; }
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_0 = ___value0;
		__this->___U3CmeshColliderU3Ek__BackingField_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmeshColliderU3Ek__BackingField_11), (void*)L_0);
		return;
	}
}
// UnityEngine.MeshRenderer PropMaker.Prop::get_meshRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Prop_get_meshRenderer_mAB716A3E4C2A034AFA6BC5440F5ACA583EAF48C4 (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, const RuntimeMethod* method) 
{
	{
		// public MeshRenderer meshRenderer { get; protected set; }
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->___U3CmeshRendererU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void PropMaker.Prop::set_meshRenderer(UnityEngine.MeshRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Prop_set_meshRenderer_m8EE05C900BE245DB184CE00170520EF9236CBFD8 (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___value0, const RuntimeMethod* method) 
{
	{
		// public MeshRenderer meshRenderer { get; protected set; }
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = ___value0;
		__this->___U3CmeshRendererU3Ek__BackingField_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmeshRendererU3Ek__BackingField_12), (void*)L_0);
		return;
	}
}
// UnityEngine.Mesh PropMaker.Prop::get_mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* Prop_get_mesh_m7ACDC9F94B55D786428742581160D36AACBA7E57 (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, const RuntimeMethod* method) 
{
	{
		// public Mesh mesh { get; protected set; }
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = __this->___U3CmeshU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void PropMaker.Prop::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Prop_set_mesh_m55D410E9666D62CCD6C5EAA6B21635C9FE343A67 (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) 
{
	{
		// public Mesh mesh { get; protected set; }
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = ___value0;
		__this->___U3CmeshU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmeshU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Vector3> PropMaker.Prop::get_vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7 (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, const RuntimeMethod* method) 
{
	{
		// public List<Vector3> vertices { get; protected set; } = new List<Vector3>(); //All vertices in the mesh.
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = __this->___U3CverticesU3Ek__BackingField_14;
		return L_0;
	}
}
// System.Void PropMaker.Prop::set_vertices(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Prop_set_vertices_m25D8A738F34359709B7A880860F04B0748F100D9 (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<Vector3> vertices { get; protected set; } = new List<Vector3>(); //All vertices in the mesh.
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = ___value0;
		__this->___U3CverticesU3Ek__BackingField_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CverticesU3Ek__BackingField_14), (void*)L_0);
		return;
	}
}
// System.Void PropMaker.Prop::GetReferences()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Prop_GetReferences_m5616139A8F9FE01B9618B9190588C752EC6E6793 (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFC0F02CCD26A6A186031CF43E92D7B60EA1CC370_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (meshFilter == null)
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0;
		L_0 = Prop_get_meshFilter_mB45F1C5BDFA3B615229CB1BFB362E4F763EE142A_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// meshFilter = GetComponent<MeshFilter>();
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_2;
		L_2 = Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623(__this, Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		Prop_set_meshFilter_m64B146E400C50487464E99044FE8CE5E3ECBD1E4_inline(__this, L_2, NULL);
	}

IL_001a:
	{
		// if (meshRenderer == null)
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_3;
		L_3 = Prop_get_meshRenderer_mAB716A3E4C2A034AFA6BC5440F5ACA583EAF48C4_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		// meshRenderer = GetComponent<MeshRenderer>();
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_5;
		L_5 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(__this, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		Prop_set_meshRenderer_m8EE05C900BE245DB184CE00170520EF9236CBFD8_inline(__this, L_5, NULL);
	}

IL_0034:
	{
		// if (meshCollider == null)
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_6;
		L_6 = Prop_get_meshCollider_mC9BB81EB39E87F3AEB088BBA2C1DCCBC5C5088D0_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		// meshCollider = GetComponent<MeshCollider>();
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_8;
		L_8 = Component_GetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFC0F02CCD26A6A186031CF43E92D7B60EA1CC370(__this, Component_GetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFC0F02CCD26A6A186031CF43E92D7B60EA1CC370_RuntimeMethod_var);
		Prop_set_meshCollider_m8DC2D6E2D1D60AB42EF8CE1489F3B413234966EE_inline(__this, L_8, NULL);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void PropMaker.Prop::ConnectCircles(UnityEngine.Vector3[],UnityEngine.Vector3[],System.Collections.Generic.List`1<System.Int32>,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Prop_ConnectCircles_m8202516A94348559CFA36BCB5131BB2520D6D70C (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___circleA0, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___circleB1, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___tris2, float ___uvStart3, float ___uvEnd4, bool ___flipTris5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	int32_t V_13 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_14;
	memset((&V_14), 0, sizeof(V_14));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_15;
	memset((&V_15), 0, sizeof(V_15));
	int32_t V_16 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_17;
	memset((&V_17), 0, sizeof(V_17));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_18;
	memset((&V_18), 0, sizeof(V_18));
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	int32_t G_B3_0 = 0;
	{
		// int normalSign = flipTris ? -1 : 1;
		bool L_0 = ___flipTris5;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0008;
	}

IL_0007:
	{
		G_B3_0 = (-1);
	}

IL_0008:
	{
		V_0 = G_B3_0;
		// if (circleA.Length != circleB.Length) return;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = ___circleA0;
		NullCheck(L_1);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = ___circleB1;
		NullCheck(L_2);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		// if (circleA.Length != circleB.Length) return;
		return;
	}

IL_0012:
	{
		// int vert = vertices.Count;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_3;
		L_3 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_3, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		V_1 = L_4;
		// vertices.AddRange(circleA);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_5;
		L_5 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = ___circleA0;
		NullCheck(L_5);
		List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE(L_5, (RuntimeObject*)L_6, List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE_RuntimeMethod_var);
		// Vector3 centerA = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		// for (int i = 0; i < circleA.Length; i++)
		V_7 = 0;
		goto IL_004a;
	}

IL_0035:
	{
		// centerA += circleA[i];
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9 = ___circleA0;
		int32_t L_10 = V_7;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_8, L_12, NULL);
		V_2 = L_13;
		// for (int i = 0; i < circleA.Length; i++)
		int32_t L_14 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_004a:
	{
		// for (int i = 0; i < circleA.Length; i++)
		int32_t L_15 = V_7;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_16 = ___circleA0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_0035;
		}
	}
	{
		// centerA /= circleA.Length;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_18 = ___circleA0;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_17, ((float)((int32_t)(((RuntimeArray*)L_18)->max_length))), NULL);
		V_2 = L_19;
		// vertices.AddRange(circleB);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_20;
		L_20 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_21 = ___circleB1;
		NullCheck(L_20);
		List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE(L_20, (RuntimeObject*)L_21, List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE_RuntimeMethod_var);
		// Vector3 centerB = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_3 = L_22;
		// for (int i = 0; i < circleB.Length; i++)
		V_8 = 0;
		goto IL_0088;
	}

IL_0073:
	{
		// centerB += circleB[i];
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_3;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_24 = ___circleB1;
		int32_t L_25 = V_8;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_23, L_27, NULL);
		V_3 = L_28;
		// for (int i = 0; i < circleB.Length; i++)
		int32_t L_29 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0088:
	{
		// for (int i = 0; i < circleB.Length; i++)
		int32_t L_30 = V_8;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_31 = ___circleB1;
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))))
		{
			goto IL_0073;
		}
	}
	{
		// centerB /= circleB.Length;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_3;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_33 = ___circleB1;
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_32, ((float)((int32_t)(((RuntimeArray*)L_33)->max_length))), NULL);
		V_3 = L_34;
		// Vector3 up = (centerB - centerA).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_35, L_36, NULL);
		V_9 = L_37;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_9), NULL);
		V_4 = L_38;
		// if (centerA.y > centerB.y)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_2;
		float L_40 = L_39.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = V_3;
		float L_42 = L_41.___y_3;
		if ((!(((float)L_40) > ((float)L_42))))
		{
			goto IL_00c3;
		}
	}
	{
		// up = -up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_43, NULL);
		V_4 = L_44;
	}

IL_00c3:
	{
		// float radiusA = Vector3.Distance(circleA[0], centerA);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_45 = ___circleA0;
		NullCheck(L_45);
		int32_t L_46 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = V_2;
		float L_49;
		L_49 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_47, L_48, NULL);
		V_5 = L_49;
		// float radiusB = Vector3.Distance(circleB[0], centerB);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_50 = ___circleB1;
		NullCheck(L_50);
		int32_t L_51 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_3;
		float L_54;
		L_54 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_52, L_53, NULL);
		V_6 = L_54;
		// if (centerA != centerB)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = V_3;
		bool L_57;
		L_57 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_55, L_56, NULL);
		if (!L_57)
		{
			goto IL_021a;
		}
	}
	{
		// float a = Vector3.Distance(centerA, centerB);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = V_3;
		float L_60;
		L_60 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_58, L_59, NULL);
		V_10 = L_60;
		// float c = Vector3.Distance(circleA[0], circleB[0]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_61 = ___circleA0;
		NullCheck(L_61);
		int32_t L_62 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_64 = ___circleB1;
		NullCheck(L_64);
		int32_t L_65 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		float L_67;
		L_67 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_63, L_66, NULL);
		V_11 = L_67;
		// float ? = 90 - Mathf.Rad2Deg * Mathf.Asin(a / c);
		float L_68 = V_10;
		float L_69 = V_11;
		float L_70;
		L_70 = asinf(((float)(L_68/L_69)));
		V_12 = ((float)il2cpp_codegen_subtract((90.0f), ((float)il2cpp_codegen_multiply((57.2957802f), L_70))));
		// if (? == float.NaN)
		float L_71 = V_12;
		if ((!(((float)L_71) == ((float)(std::numeric_limits<float>::quiet_NaN())))))
		{
			goto IL_0133;
		}
	}
	{
		// ? = 0;
		V_12 = (0.0f);
	}

IL_0133:
	{
		// if (radiusB > radiusA)
		float L_72 = V_6;
		float L_73 = V_5;
		if ((!(((float)L_72) > ((float)L_73))))
		{
			goto IL_013e;
		}
	}
	{
		// ? = -?;
		float L_74 = V_12;
		V_12 = ((-L_74));
	}

IL_013e:
	{
		// for (int i = 0; i < circleA.Length; i++)
		V_13 = 0;
		goto IL_01a4;
	}

IL_0143:
	{
		// Vector3 normal = (circleA[i] - centerA).normalized;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_75 = ___circleA0;
		int32_t L_76 = V_13;
		NullCheck(L_75);
		int32_t L_77 = L_76;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
		L_80 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_78, L_79, NULL);
		V_9 = L_80;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		L_81 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_9), NULL);
		V_14 = L_81;
		// if (Mathf.Abs(radiusA - radiusB) > 0.001f)
		float L_82 = V_5;
		float L_83 = V_6;
		float L_84;
		L_84 = fabsf(((float)il2cpp_codegen_subtract(L_82, L_83)));
		if ((!(((float)L_84) > ((float)(0.00100000005f)))))
		{
			goto IL_018a;
		}
	}
	{
		// Vector3 side = Vector3.Cross(normal, up);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = V_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
		L_87 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_85, L_86, NULL);
		V_15 = L_87;
		// normal = Quaternion.AngleAxis(?, side) * normal;
		float L_88 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89 = V_15;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_90;
		L_90 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(L_88, L_89, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91 = V_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92;
		L_92 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_90, L_91, NULL);
		V_14 = L_92;
	}

IL_018a:
	{
		// normals.Add(normal * normalSign);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_93 = __this->___normals_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94 = V_14;
		int32_t L_95 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96;
		L_96 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_94, ((float)L_95), NULL);
		NullCheck(L_93);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_93, L_96, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// for (int i = 0; i < circleA.Length; i++)
		int32_t L_97 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_01a4:
	{
		// for (int i = 0; i < circleA.Length; i++)
		int32_t L_98 = V_13;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_99 = ___circleA0;
		NullCheck(L_99);
		if ((((int32_t)L_98) < ((int32_t)((int32_t)(((RuntimeArray*)L_99)->max_length)))))
		{
			goto IL_0143;
		}
	}
	{
		// for (int i = 0; i < circleB.Length; i++)
		V_16 = 0;
		goto IL_0211;
	}

IL_01b0:
	{
		// Vector3 normal = (circleB[i] - centerB).normalized;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_100 = ___circleB1;
		int32_t L_101 = V_16;
		NullCheck(L_100);
		int32_t L_102 = L_101;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105;
		L_105 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_103, L_104, NULL);
		V_9 = L_105;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106;
		L_106 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_9), NULL);
		V_17 = L_106;
		// if (Mathf.Abs(radiusA - radiusB) > 0.001f)
		float L_107 = V_5;
		float L_108 = V_6;
		float L_109;
		L_109 = fabsf(((float)il2cpp_codegen_subtract(L_107, L_108)));
		if ((!(((float)L_109) > ((float)(0.00100000005f)))))
		{
			goto IL_01f7;
		}
	}
	{
		// Vector3 side = Vector3.Cross(normal, up);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110 = V_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112;
		L_112 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_110, L_111, NULL);
		V_18 = L_112;
		// normal = Quaternion.AngleAxis(?, side) * normal;
		float L_113 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114 = V_18;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_115;
		L_115 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(L_113, L_114, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116 = V_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117;
		L_117 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_115, L_116, NULL);
		V_17 = L_117;
	}

IL_01f7:
	{
		// normals.Add(normal * normalSign);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_118 = __this->___normals_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119 = V_17;
		int32_t L_120 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_121;
		L_121 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_119, ((float)L_120), NULL);
		NullCheck(L_118);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_118, L_121, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// for (int i = 0; i < circleB.Length; i++)
		int32_t L_122 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_122, 1));
	}

IL_0211:
	{
		// for (int i = 0; i < circleB.Length; i++)
		int32_t L_123 = V_16;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_124 = ___circleB1;
		NullCheck(L_124);
		if ((((int32_t)L_123) < ((int32_t)((int32_t)(((RuntimeArray*)L_124)->max_length)))))
		{
			goto IL_01b0;
		}
	}
	{
		goto IL_0265;
	}

IL_021a:
	{
		// for (int i = 0; i < circleA.Length + circleB.Length; i++)
		V_19 = 0;
		goto IL_025a;
	}

IL_021f:
	{
		// if (radiusA > radiusB)
		float L_125 = V_5;
		float L_126 = V_6;
		if ((!(((float)L_125) > ((float)L_126))))
		{
			goto IL_023b;
		}
	}
	{
		// normals.Add(up * normalSign);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_127 = __this->___normals_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_128 = V_4;
		int32_t L_129 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_130;
		L_130 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_128, ((float)L_129), NULL);
		NullCheck(L_127);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_127, L_130, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		goto IL_0254;
	}

IL_023b:
	{
		// normals.Add(-up * normalSign);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_131 = __this->___normals_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_132 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_133;
		L_133 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_132, NULL);
		int32_t L_134 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_135;
		L_135 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_133, ((float)L_134), NULL);
		NullCheck(L_131);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_131, L_135, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
	}

IL_0254:
	{
		// for (int i = 0; i < circleA.Length + circleB.Length; i++)
		int32_t L_136 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_136, 1));
	}

IL_025a:
	{
		// for (int i = 0; i < circleA.Length + circleB.Length; i++)
		int32_t L_137 = V_19;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_138 = ___circleA0;
		NullCheck(L_138);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_139 = ___circleB1;
		NullCheck(L_139);
		if ((((int32_t)L_137) < ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_138)->max_length)), ((int32_t)(((RuntimeArray*)L_139)->max_length)))))))
		{
			goto IL_021f;
		}
	}

IL_0265:
	{
		// for (int i = 0; i < circleA.Length - 1; i++)
		V_20 = 0;
		goto IL_02f5;
	}

IL_026d:
	{
		// if (!flipTris)
		bool L_140 = ___flipTris5;
		if (L_140)
		{
			goto IL_02af;
		}
	}
	{
		// tris.Add(vert);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_141 = ___tris2;
		int32_t L_142 = V_1;
		NullCheck(L_141);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_141, L_142, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vert + 1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_143 = ___tris2;
		int32_t L_144 = V_1;
		NullCheck(L_143);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_143, ((int32_t)il2cpp_codegen_add(L_144, 1)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vert + circleA.Length);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_145 = ___tris2;
		int32_t L_146 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_147 = ___circleA0;
		NullCheck(L_147);
		NullCheck(L_145);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_145, ((int32_t)il2cpp_codegen_add(L_146, ((int32_t)(((RuntimeArray*)L_147)->max_length)))), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vert + 1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_148 = ___tris2;
		int32_t L_149 = V_1;
		NullCheck(L_148);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_148, ((int32_t)il2cpp_codegen_add(L_149, 1)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vert + circleA.Length + 1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_150 = ___tris2;
		int32_t L_151 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_152 = ___circleA0;
		NullCheck(L_152);
		NullCheck(L_150);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_150, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_151, ((int32_t)(((RuntimeArray*)L_152)->max_length)))), 1)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vert + circleA.Length);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_153 = ___tris2;
		int32_t L_154 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_155 = ___circleA0;
		NullCheck(L_155);
		NullCheck(L_153);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_153, ((int32_t)il2cpp_codegen_add(L_154, ((int32_t)(((RuntimeArray*)L_155)->max_length)))), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		goto IL_02eb;
	}

IL_02af:
	{
		// tris.Add(vert + circleA.Length);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_156 = ___tris2;
		int32_t L_157 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_158 = ___circleA0;
		NullCheck(L_158);
		NullCheck(L_156);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_156, ((int32_t)il2cpp_codegen_add(L_157, ((int32_t)(((RuntimeArray*)L_158)->max_length)))), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vert + 1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_159 = ___tris2;
		int32_t L_160 = V_1;
		NullCheck(L_159);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_159, ((int32_t)il2cpp_codegen_add(L_160, 1)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vert);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_161 = ___tris2;
		int32_t L_162 = V_1;
		NullCheck(L_161);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_161, L_162, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vert + circleA.Length);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_163 = ___tris2;
		int32_t L_164 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_165 = ___circleA0;
		NullCheck(L_165);
		NullCheck(L_163);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_163, ((int32_t)il2cpp_codegen_add(L_164, ((int32_t)(((RuntimeArray*)L_165)->max_length)))), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vert + circleA.Length + 1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_166 = ___tris2;
		int32_t L_167 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_168 = ___circleA0;
		NullCheck(L_168);
		NullCheck(L_166);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_166, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_167, ((int32_t)(((RuntimeArray*)L_168)->max_length)))), 1)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vert + 1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_169 = ___tris2;
		int32_t L_170 = V_1;
		NullCheck(L_169);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_169, ((int32_t)il2cpp_codegen_add(L_170, 1)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_02eb:
	{
		// vert++;
		int32_t L_171 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_171, 1));
		// for (int i = 0; i < circleA.Length - 1; i++)
		int32_t L_172 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_172, 1));
	}

IL_02f5:
	{
		// for (int i = 0; i < circleA.Length - 1; i++)
		int32_t L_173 = V_20;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_174 = ___circleA0;
		NullCheck(L_174);
		if ((((int32_t)L_173) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_174)->max_length)), 1)))))
		{
			goto IL_026d;
		}
	}
	{
		// vertices.Add(circleA[0]); //count -1
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_175;
		L_175 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_176 = ___circleA0;
		NullCheck(L_176);
		int32_t L_177 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_178 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_177));
		NullCheck(L_175);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_175, L_178, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// normals.Add(normals[normals.Count - circleA.Length]);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_179 = __this->___normals_15;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_180 = __this->___normals_15;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_181 = __this->___normals_15;
		NullCheck(L_181);
		int32_t L_182;
		L_182 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_181, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_183 = ___circleA0;
		NullCheck(L_183);
		NullCheck(L_180);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_184;
		L_184 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_180, ((int32_t)il2cpp_codegen_subtract(L_182, ((int32_t)(((RuntimeArray*)L_183)->max_length)))), List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		NullCheck(L_179);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_179, L_184, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// vertices.Add(circleB[0]); //count -2
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_185;
		L_185 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_186 = ___circleB1;
		NullCheck(L_186);
		int32_t L_187 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_188 = (L_186)->GetAt(static_cast<il2cpp_array_size_t>(L_187));
		NullCheck(L_185);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_185, L_188, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// normals.Add(normals[normals.Count - circleB.Length - 1]);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_189 = __this->___normals_15;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_190 = __this->___normals_15;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_191 = __this->___normals_15;
		NullCheck(L_191);
		int32_t L_192;
		L_192 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_191, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_193 = ___circleB1;
		NullCheck(L_193);
		NullCheck(L_190);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_194;
		L_194 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_190, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_192, ((int32_t)(((RuntimeArray*)L_193)->max_length)))), 1)), List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		NullCheck(L_189);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_189, L_194, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// if (!flipTris)
		bool L_195 = ___flipTris5;
		if (L_195)
		{
			goto IL_03ed;
		}
	}
	{
		// tris.Add(vertices.Count - 1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_196 = ___tris2;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_197;
		L_197 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_197);
		int32_t L_198;
		L_198 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_197, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		NullCheck(L_196);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_196, ((int32_t)il2cpp_codegen_subtract(L_198, 1)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vertices.Count - 3);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_199 = ___tris2;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_200;
		L_200 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_200);
		int32_t L_201;
		L_201 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_200, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		NullCheck(L_199);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_199, ((int32_t)il2cpp_codegen_subtract(L_201, 3)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vertices.Count - 2);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_202 = ___tris2;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_203;
		L_203 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_203);
		int32_t L_204;
		L_204 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_203, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		NullCheck(L_202);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_202, ((int32_t)il2cpp_codegen_subtract(L_204, 2)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vertices.Count - 2);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_205 = ___tris2;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_206;
		L_206 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_206);
		int32_t L_207;
		L_207 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_206, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		NullCheck(L_205);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_205, ((int32_t)il2cpp_codegen_subtract(L_207, 2)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vertices.Count - 3);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_208 = ___tris2;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_209;
		L_209 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_209);
		int32_t L_210;
		L_210 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_209, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		NullCheck(L_208);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_208, ((int32_t)il2cpp_codegen_subtract(L_210, 3)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vertices.Count - 3 - circleA.Length);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_211 = ___tris2;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_212;
		L_212 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_212);
		int32_t L_213;
		L_213 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_212, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_214 = ___circleA0;
		NullCheck(L_214);
		NullCheck(L_211);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_211, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_213, 3)), ((int32_t)(((RuntimeArray*)L_214)->max_length)))), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		goto IL_0463;
	}

IL_03ed:
	{
		// tris.Add(vertices.Count - 2);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_215 = ___tris2;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_216;
		L_216 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_216);
		int32_t L_217;
		L_217 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_216, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		NullCheck(L_215);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_215, ((int32_t)il2cpp_codegen_subtract(L_217, 2)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vertices.Count - 3);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_218 = ___tris2;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_219;
		L_219 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_219);
		int32_t L_220;
		L_220 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_219, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		NullCheck(L_218);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_218, ((int32_t)il2cpp_codegen_subtract(L_220, 3)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vertices.Count - 1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_221 = ___tris2;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_222;
		L_222 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_222);
		int32_t L_223;
		L_223 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_222, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		NullCheck(L_221);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_221, ((int32_t)il2cpp_codegen_subtract(L_223, 1)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vertices.Count - 3 - circleA.Length);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_224 = ___tris2;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_225;
		L_225 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_225);
		int32_t L_226;
		L_226 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_225, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_227 = ___circleA0;
		NullCheck(L_227);
		NullCheck(L_224);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_224, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_226, 3)), ((int32_t)(((RuntimeArray*)L_227)->max_length)))), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vertices.Count - 3);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_228 = ___tris2;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_229;
		L_229 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_229);
		int32_t L_230;
		L_230 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_229, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		NullCheck(L_228);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_228, ((int32_t)il2cpp_codegen_subtract(L_230, 3)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vertices.Count - 2);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_231 = ___tris2;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_232;
		L_232 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_232);
		int32_t L_233;
		L_233 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_232, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		NullCheck(L_231);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_231, ((int32_t)il2cpp_codegen_subtract(L_233, 2)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_0463:
	{
		// for (int i = 0; i < circleA.Length; i++)
		V_21 = 0;
		goto IL_0488;
	}

IL_0468:
	{
		// uvs.Add(new Vector2((float)i / circleA.Length, uvStart));
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_234 = __this->___uvs_16;
		int32_t L_235 = V_21;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_236 = ___circleA0;
		NullCheck(L_236);
		float L_237 = ___uvStart3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_238;
		memset((&L_238), 0, sizeof(L_238));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_238), ((float)(((float)L_235)/((float)((int32_t)(((RuntimeArray*)L_236)->max_length))))), L_237, /*hidden argument*/NULL);
		NullCheck(L_234);
		List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline(L_234, L_238, List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		// for (int i = 0; i < circleA.Length; i++)
		int32_t L_239 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_239, 1));
	}

IL_0488:
	{
		// for (int i = 0; i < circleA.Length; i++)
		int32_t L_240 = V_21;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_241 = ___circleA0;
		NullCheck(L_241);
		if ((((int32_t)L_240) < ((int32_t)((int32_t)(((RuntimeArray*)L_241)->max_length)))))
		{
			goto IL_0468;
		}
	}
	{
		// for (int i = 0; i < circleB.Length; i++)
		V_22 = 0;
		goto IL_04b4;
	}

IL_0494:
	{
		// uvs.Add(new Vector2((float)i / circleB.Length, uvEnd));
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_242 = __this->___uvs_16;
		int32_t L_243 = V_22;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_244 = ___circleB1;
		NullCheck(L_244);
		float L_245 = ___uvEnd4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_246;
		memset((&L_246), 0, sizeof(L_246));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_246), ((float)(((float)L_243)/((float)((int32_t)(((RuntimeArray*)L_244)->max_length))))), L_245, /*hidden argument*/NULL);
		NullCheck(L_242);
		List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline(L_242, L_246, List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		// for (int i = 0; i < circleB.Length; i++)
		int32_t L_247 = V_22;
		V_22 = ((int32_t)il2cpp_codegen_add(L_247, 1));
	}

IL_04b4:
	{
		// for (int i = 0; i < circleB.Length; i++)
		int32_t L_248 = V_22;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_249 = ___circleB1;
		NullCheck(L_249);
		if ((((int32_t)L_248) < ((int32_t)((int32_t)(((RuntimeArray*)L_249)->max_length)))))
		{
			goto IL_0494;
		}
	}
	{
		// uvs.Add(new Vector2(1, uvStart));
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_250 = __this->___uvs_16;
		float L_251 = ___uvStart3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_252;
		memset((&L_252), 0, sizeof(L_252));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_252), (1.0f), L_251, /*hidden argument*/NULL);
		NullCheck(L_250);
		List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline(L_250, L_252, List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		// uvs.Add(new Vector2(1, uvEnd));
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_253 = __this->___uvs_16;
		float L_254 = ___uvEnd4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_255;
		memset((&L_255), 0, sizeof(L_255));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_255), (1.0f), L_254, /*hidden argument*/NULL);
		NullCheck(L_253);
		List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline(L_253, L_255, List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void PropMaker.Prop::FillCircle(UnityEngine.Vector3[],System.Collections.Generic.List`1<System.Int32>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Prop_FillCircle_mD75DC8166E906EF8636A60E0E8626CE832F00936 (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___circle0, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___tris1, bool ___flipFace2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Helper_t4C1D75F8F501E3C3350F5CF4596BAE983DB527EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	{
		// Vector3 center = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_0 = L_0;
		// for (int i = 0; i < circle.Length; i++)
		V_4 = 0;
		goto IL_0020;
	}

IL_000b:
	{
		// center += circle[i];
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = ___circle0;
		int32_t L_3 = V_4;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_5, NULL);
		V_0 = L_6;
		// for (int i = 0; i < circle.Length; i++)
		int32_t L_7 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0020:
	{
		// for (int i = 0; i < circle.Length; i++)
		int32_t L_8 = V_4;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9 = ___circle0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// center /= circle.Length;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = ___circle0;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_10, ((float)((int32_t)(((RuntimeArray*)L_11)->max_length))), NULL);
		V_0 = L_12;
		// vertices.AddRange(circle); // count - upperCircle.Length + i
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_13;
		L_13 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_14 = ___circle0;
		NullCheck(L_13);
		List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE(L_13, (RuntimeObject*)L_14, List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE_RuntimeMethod_var);
		// vertices.Add(center); //count - 1;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_15;
		L_15 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_0;
		NullCheck(L_15);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_15, L_16, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// Vector2 lowerBound = new Vector2(float.MaxValue, float.MaxValue);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), ((std::numeric_limits<float>::max)()), ((std::numeric_limits<float>::max)()), NULL);
		// Vector2 upperBound = new Vector2(float.MinValue, float.MinValue);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_2), (-(std::numeric_limits<float>::max)()), (-(std::numeric_limits<float>::max)()), NULL);
		// Vector3 normal = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_3 = L_17;
		// for (int i = 0; i < circle.Length; i++)
		V_5 = 0;
		goto IL_016c;
	}

IL_007a:
	{
		// Vector3 current = circle[i];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_18 = ___circle0;
		int32_t L_19 = V_5;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_6 = L_21;
		// Vector3 next = circle[(i + 1) % circle.Length];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_22 = ___circle0;
		int32_t L_23 = V_5;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_24 = ___circle0;
		NullCheck(L_24);
		NullCheck(L_22);
		int32_t L_25 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_23, 1))%((int32_t)(((RuntimeArray*)L_24)->max_length))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_7 = L_26;
		// normal.x += (current.y - center.y) * (next.z - center.z) - (current.z - center.z) * (next.y - center.y);
		float* L_27 = (&(&V_3)->___x_2);
		float* L_28 = L_27;
		float L_29 = *((float*)L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_6;
		float L_31 = L_30.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_0;
		float L_33 = L_32.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_7;
		float L_35 = L_34.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_0;
		float L_37 = L_36.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_6;
		float L_39 = L_38.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_0;
		float L_41 = L_40.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_7;
		float L_43 = L_42.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_0;
		float L_45 = L_44.___y_3;
		*((float*)L_28) = (float)((float)il2cpp_codegen_add(L_29, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_31, L_33)), ((float)il2cpp_codegen_subtract(L_35, L_37)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_39, L_41)), ((float)il2cpp_codegen_subtract(L_43, L_45))))))));
		// normal.y += (current.z - center.z) * (next.x - center.x) - (current.x - center.x) * (next.z - center.z);
		float* L_46 = (&(&V_3)->___y_3);
		float* L_47 = L_46;
		float L_48 = *((float*)L_47);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = V_6;
		float L_50 = L_49.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = V_0;
		float L_52 = L_51.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_7;
		float L_54 = L_53.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_0;
		float L_56 = L_55.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = V_6;
		float L_58 = L_57.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = V_0;
		float L_60 = L_59.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61 = V_7;
		float L_62 = L_61.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = V_0;
		float L_64 = L_63.___z_4;
		*((float*)L_47) = (float)((float)il2cpp_codegen_add(L_48, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_50, L_52)), ((float)il2cpp_codegen_subtract(L_54, L_56)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_58, L_60)), ((float)il2cpp_codegen_subtract(L_62, L_64))))))));
		// normal.z += (current.x - center.x) * (next.y - center.y) - (current.y - center.y) * (next.x - center.x);
		float* L_65 = (&(&V_3)->___z_4);
		float* L_66 = L_65;
		float L_67 = *((float*)L_66);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68 = V_6;
		float L_69 = L_68.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70 = V_0;
		float L_71 = L_70.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72 = V_7;
		float L_73 = L_72.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = V_0;
		float L_75 = L_74.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = V_6;
		float L_77 = L_76.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78 = V_0;
		float L_79 = L_78.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80 = V_7;
		float L_81 = L_80.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82 = V_0;
		float L_83 = L_82.___x_2;
		*((float*)L_66) = (float)((float)il2cpp_codegen_add(L_67, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_69, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_75)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_77, L_79)), ((float)il2cpp_codegen_subtract(L_81, L_83))))))));
		// for (int i = 0; i < circle.Length; i++)
		int32_t L_84 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_84, 1));
	}

IL_016c:
	{
		// for (int i = 0; i < circle.Length; i++)
		int32_t L_85 = V_5;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_86 = ___circle0;
		NullCheck(L_86);
		if ((((int32_t)L_85) < ((int32_t)((int32_t)(((RuntimeArray*)L_86)->max_length)))))
		{
			goto IL_007a;
		}
	}
	{
		// normal.Normalize(); // Normalize the normal vector to get unit length
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&V_3), NULL);
		// if(flipFace)
		bool L_87 = ___flipFace2;
		if (!L_87)
		{
			goto IL_01a5;
		}
	}
	{
		// for (int i = 0; i <= circle.Length; i++)
		V_8 = 0;
		goto IL_019c;
	}

IL_0185:
	{
		// normals.Add(-normal);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_88 = __this->___normals_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
		L_90 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_89, NULL);
		NullCheck(L_88);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_88, L_90, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// for (int i = 0; i <= circle.Length; i++)
		int32_t L_91 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_91, 1));
	}

IL_019c:
	{
		// for (int i = 0; i <= circle.Length; i++)
		int32_t L_92 = V_8;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_93 = ___circle0;
		NullCheck(L_93);
		if ((((int32_t)L_92) <= ((int32_t)((int32_t)(((RuntimeArray*)L_93)->max_length)))))
		{
			goto IL_0185;
		}
	}
	{
		goto IL_01c3;
	}

IL_01a5:
	{
		// for (int i = 0; i <= circle.Length; i++)
		V_9 = 0;
		goto IL_01bc;
	}

IL_01aa:
	{
		// normals.Add(normal);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_94 = __this->___normals_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95 = V_3;
		NullCheck(L_94);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_94, L_95, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// for (int i = 0; i <= circle.Length; i++)
		int32_t L_96 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_96, 1));
	}

IL_01bc:
	{
		// for (int i = 0; i <= circle.Length; i++)
		int32_t L_97 = V_9;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_98 = ___circle0;
		NullCheck(L_98);
		if ((((int32_t)L_97) <= ((int32_t)((int32_t)(((RuntimeArray*)L_98)->max_length)))))
		{
			goto IL_01aa;
		}
	}

IL_01c3:
	{
		// for (int i = 0; i < circle.Length - 1; i++)
		V_10 = 0;
		goto IL_0304;
	}

IL_01cb:
	{
		// if (flipFace)
		bool L_99 = ___flipFace2;
		if (!L_99)
		{
			goto IL_0215;
		}
	}
	{
		// tris.Add(vertices.Count - circle.Length + i);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_100 = ___tris1;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_101;
		L_101 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_101);
		int32_t L_102;
		L_102 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_101, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_103 = ___circle0;
		NullCheck(L_103);
		int32_t L_104 = V_10;
		NullCheck(L_100);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_100, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_102, ((int32_t)(((RuntimeArray*)L_103)->max_length)))), L_104)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vertices.Count - 1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_105 = ___tris1;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_106;
		L_106 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_106);
		int32_t L_107;
		L_107 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_106, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		NullCheck(L_105);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_105, ((int32_t)il2cpp_codegen_subtract(L_107, 1)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vertices.Count - circle.Length + i + 1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_108 = ___tris1;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_109;
		L_109 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_109);
		int32_t L_110;
		L_110 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_109, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_111 = ___circle0;
		NullCheck(L_111);
		int32_t L_112 = V_10;
		NullCheck(L_108);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_108, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_110, ((int32_t)(((RuntimeArray*)L_111)->max_length)))), L_112)), 1)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		goto IL_025a;
	}

IL_0215:
	{
		// tris.Add(vertices.Count - circle.Length + i + 1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_113 = ___tris1;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_114;
		L_114 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_114);
		int32_t L_115;
		L_115 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_114, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_116 = ___circle0;
		NullCheck(L_116);
		int32_t L_117 = V_10;
		NullCheck(L_113);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_113, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_115, ((int32_t)(((RuntimeArray*)L_116)->max_length)))), L_117)), 1)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vertices.Count - 1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_118 = ___tris1;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_119;
		L_119 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_119);
		int32_t L_120;
		L_120 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_119, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		NullCheck(L_118);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_118, ((int32_t)il2cpp_codegen_subtract(L_120, 1)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vertices.Count - circle.Length + i);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_121 = ___tris1;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_122;
		L_122 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_122);
		int32_t L_123;
		L_123 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_122, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_124 = ___circle0;
		NullCheck(L_124);
		int32_t L_125 = V_10;
		NullCheck(L_121);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_121, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_123, ((int32_t)(((RuntimeArray*)L_124)->max_length)))), L_125)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_025a:
	{
		// if (circle[i].x > upperBound.x)
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_126 = ___circle0;
		int32_t L_127 = V_10;
		NullCheck(L_126);
		float L_128 = ((L_126)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_127)))->___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_129 = V_2;
		float L_130 = L_129.___x_0;
		if ((!(((float)L_128) > ((float)L_130))))
		{
			goto IL_0283;
		}
	}
	{
		// upperBound.x = circle[i].x;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_131 = ___circle0;
		int32_t L_132 = V_10;
		NullCheck(L_131);
		float L_133 = ((L_131)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_132)))->___x_2;
		(&V_2)->___x_0 = L_133;
	}

IL_0283:
	{
		// if (circle[i].z > upperBound.y)
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_134 = ___circle0;
		int32_t L_135 = V_10;
		NullCheck(L_134);
		float L_136 = ((L_134)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_135)))->___z_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_137 = V_2;
		float L_138 = L_137.___y_1;
		if ((!(((float)L_136) > ((float)L_138))))
		{
			goto IL_02ac;
		}
	}
	{
		// upperBound.y = circle[i].z;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_139 = ___circle0;
		int32_t L_140 = V_10;
		NullCheck(L_139);
		float L_141 = ((L_139)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_140)))->___z_4;
		(&V_2)->___y_1 = L_141;
	}

IL_02ac:
	{
		// if (circle[i].x < lowerBound.x)
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_142 = ___circle0;
		int32_t L_143 = V_10;
		NullCheck(L_142);
		float L_144 = ((L_142)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_143)))->___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_145 = V_1;
		float L_146 = L_145.___x_0;
		if ((!(((float)L_144) < ((float)L_146))))
		{
			goto IL_02d5;
		}
	}
	{
		// lowerBound.x = circle[i].x;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_147 = ___circle0;
		int32_t L_148 = V_10;
		NullCheck(L_147);
		float L_149 = ((L_147)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_148)))->___x_2;
		(&V_1)->___x_0 = L_149;
	}

IL_02d5:
	{
		// if (circle[i].z < lowerBound.y)
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_150 = ___circle0;
		int32_t L_151 = V_10;
		NullCheck(L_150);
		float L_152 = ((L_150)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_151)))->___z_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_153 = V_1;
		float L_154 = L_153.___y_1;
		if ((!(((float)L_152) < ((float)L_154))))
		{
			goto IL_02fe;
		}
	}
	{
		// lowerBound.y = circle[i].z;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_155 = ___circle0;
		int32_t L_156 = V_10;
		NullCheck(L_155);
		float L_157 = ((L_155)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_156)))->___z_4;
		(&V_1)->___y_1 = L_157;
	}

IL_02fe:
	{
		// for (int i = 0; i < circle.Length - 1; i++)
		int32_t L_158 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_158, 1));
	}

IL_0304:
	{
		// for (int i = 0; i < circle.Length - 1; i++)
		int32_t L_159 = V_10;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_160 = ___circle0;
		NullCheck(L_160);
		if ((((int32_t)L_159) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_160)->max_length)), 1)))))
		{
			goto IL_01cb;
		}
	}
	{
		// for (int i = 0; i < circle.Length; i++)
		V_11 = 0;
		goto IL_0383;
	}

IL_0315:
	{
		// float x = Helper.Remap(circle[i].x, lowerBound.x, upperBound.x, 0, 1f);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_161 = ___circle0;
		int32_t L_162 = V_11;
		NullCheck(L_161);
		float L_163 = ((L_161)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_162)))->___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_164 = V_1;
		float L_165 = L_164.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_166 = V_2;
		float L_167 = L_166.___x_0;
		il2cpp_codegen_runtime_class_init_inline(Helper_t4C1D75F8F501E3C3350F5CF4596BAE983DB527EB_il2cpp_TypeInfo_var);
		float L_168;
		L_168 = Helper_Remap_mC74F88BA0815F1E873F9B52EE056997D5AE0697F(L_163, L_165, L_167, (0.0f), (1.0f), NULL);
		V_12 = L_168;
		// float y = Helper.Remap(circle[i].z, lowerBound.y, upperBound.y, 0, 1f);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_169 = ___circle0;
		int32_t L_170 = V_11;
		NullCheck(L_169);
		float L_171 = ((L_169)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_170)))->___z_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_172 = V_1;
		float L_173 = L_172.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_174 = V_2;
		float L_175 = L_174.___y_1;
		float L_176;
		L_176 = Helper_Remap_mC74F88BA0815F1E873F9B52EE056997D5AE0697F(L_171, L_173, L_175, (0.0f), (1.0f), NULL);
		V_13 = L_176;
		// uvs.Add(new Vector2(x, y));
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_177 = __this->___uvs_16;
		float L_178 = V_12;
		float L_179 = V_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_180;
		memset((&L_180), 0, sizeof(L_180));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_180), L_178, L_179, /*hidden argument*/NULL);
		NullCheck(L_177);
		List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline(L_177, L_180, List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		// for (int i = 0; i < circle.Length; i++)
		int32_t L_181 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_181, 1));
	}

IL_0383:
	{
		// for (int i = 0; i < circle.Length; i++)
		int32_t L_182 = V_11;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_183 = ___circle0;
		NullCheck(L_183);
		if ((((int32_t)L_182) < ((int32_t)((int32_t)(((RuntimeArray*)L_183)->max_length)))))
		{
			goto IL_0315;
		}
	}
	{
		// if (flipFace)
		bool L_184 = ___flipFace2;
		if (!L_184)
		{
			goto IL_040b;
		}
	}
	{
		// tris.Add(vertices.Count - 2);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_185 = ___tris1;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_186;
		L_186 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_186);
		int32_t L_187;
		L_187 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_186, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		NullCheck(L_185);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_185, ((int32_t)il2cpp_codegen_subtract(L_187, 2)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vertices.Count - 1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_188 = ___tris1;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_189;
		L_189 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_189);
		int32_t L_190;
		L_190 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_189, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		NullCheck(L_188);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_188, ((int32_t)il2cpp_codegen_subtract(L_190, 1)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vertices.Count - circle.Length - 1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_191 = ___tris1;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_192;
		L_192 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_192);
		int32_t L_193;
		L_193 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_192, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_194 = ___circle0;
		NullCheck(L_194);
		NullCheck(L_191);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_191, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_193, ((int32_t)(((RuntimeArray*)L_194)->max_length)))), 1)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vertices.Count - circle.Length - 1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_195 = ___tris1;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_196;
		L_196 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_196);
		int32_t L_197;
		L_197 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_196, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_198 = ___circle0;
		NullCheck(L_198);
		NullCheck(L_195);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_195, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_197, ((int32_t)(((RuntimeArray*)L_198)->max_length)))), 1)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vertices.Count - 1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_199 = ___tris1;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_200;
		L_200 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_200);
		int32_t L_201;
		L_201 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_200, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		NullCheck(L_199);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_199, ((int32_t)il2cpp_codegen_subtract(L_201, 1)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vertices.Count - circle.Length);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_202 = ___tris1;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_203;
		L_203 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_203);
		int32_t L_204;
		L_204 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_203, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_205 = ___circle0;
		NullCheck(L_205);
		NullCheck(L_202);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_202, ((int32_t)il2cpp_codegen_subtract(L_204, ((int32_t)(((RuntimeArray*)L_205)->max_length)))), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		goto IL_0487;
	}

IL_040b:
	{
		// tris.Add(vertices.Count - circle.Length);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_206 = ___tris1;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_207;
		L_207 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_207);
		int32_t L_208;
		L_208 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_207, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_209 = ___circle0;
		NullCheck(L_209);
		NullCheck(L_206);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_206, ((int32_t)il2cpp_codegen_subtract(L_208, ((int32_t)(((RuntimeArray*)L_209)->max_length)))), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vertices.Count - 1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_210 = ___tris1;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_211;
		L_211 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_211);
		int32_t L_212;
		L_212 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_211, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		NullCheck(L_210);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_210, ((int32_t)il2cpp_codegen_subtract(L_212, 1)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vertices.Count - circle.Length - 1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_213 = ___tris1;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_214;
		L_214 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_214);
		int32_t L_215;
		L_215 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_214, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_216 = ___circle0;
		NullCheck(L_216);
		NullCheck(L_213);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_213, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_215, ((int32_t)(((RuntimeArray*)L_216)->max_length)))), 1)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vertices.Count - circle.Length - 1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_217 = ___tris1;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_218;
		L_218 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_218);
		int32_t L_219;
		L_219 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_218, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_220 = ___circle0;
		NullCheck(L_220);
		NullCheck(L_217);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_217, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_219, ((int32_t)(((RuntimeArray*)L_220)->max_length)))), 1)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vertices.Count - 1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_221 = ___tris1;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_222;
		L_222 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_222);
		int32_t L_223;
		L_223 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_222, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		NullCheck(L_221);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_221, ((int32_t)il2cpp_codegen_subtract(L_223, 1)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vertices.Count - 2);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_224 = ___tris1;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_225;
		L_225 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_225);
		int32_t L_226;
		L_226 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_225, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		NullCheck(L_224);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_224, ((int32_t)il2cpp_codegen_subtract(L_226, 2)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_0487:
	{
		// uvs.Add(new Vector2(0.5f, 0.5f));
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_227 = __this->___uvs_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_228;
		memset((&L_228), 0, sizeof(L_228));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_228), (0.5f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_227);
		List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline(L_227, L_228, List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void PropMaker.Prop::CreateCube(UnityEngine.Vector3,System.Collections.Generic.List`1<System.Int32>,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Prop_CreateCube_m2B77AF99E7F2D38DA15401F0D3F026AAD6224694 (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___tris1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass34_0_t1F72DEE1570BD43E5809F6FFF9EE824D98F56513 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		(&V_0)->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_0), (void*)__this);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = ___tris1;
		(&V_0)->___tris_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___tris_1), (void*)L_0);
		// Vector3 bottomRightFwd = center + orientation * Vector3.Scale((Vector3.down + Vector3.right + Vector3.forward) * 0.5f, scale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___center0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___orientation3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_5, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___scale2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline(L_8, L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_2, L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_11, NULL);
		V_1 = L_12;
		// Vector3 bottomLeftFwd = center + orientation * Vector3.Scale((Vector3.down + Vector3.left + Vector3.forward) * 0.5f, scale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___center0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___orientation3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_15, L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_17, L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_19, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ___scale2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline(L_20, L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_14, L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_13, L_23, NULL);
		V_2 = L_24;
		// Vector3 bottomRightBack = center + orientation * Vector3.Scale((Vector3.down + Vector3.right + Vector3.back) * 0.5f, scale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = ___center0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___orientation3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_27, L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_29, L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_31, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = ___scale2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline(L_32, L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_26, L_34, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_25, L_35, NULL);
		V_3 = L_36;
		// Vector3 bottomLeftBack = center + orientation * Vector3.Scale((Vector3.down + Vector3.left + Vector3.back) * 0.5f, scale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___center0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___orientation3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_39, L_40, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_41, L_42, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_43, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = ___scale2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline(L_44, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_38, L_46, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_37, L_47, NULL);
		V_4 = L_48;
		// Vector3 topRightFwd = center + orientation * Vector3.Scale((Vector3.up + Vector3.right + Vector3.forward) * 0.5f, scale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = ___center0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___orientation3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_51, L_52, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_53, L_54, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_55, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = ___scale2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline(L_56, L_57, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_50, L_58, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_49, L_59, NULL);
		V_5 = L_60;
		// Vector3 topLeftFwd = center + orientation * Vector3.Scale((Vector3.up + Vector3.left + Vector3.forward) * 0.5f, scale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61 = ___center0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___orientation3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_63, L_64, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_65, L_66, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_67, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = ___scale2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline(L_68, L_69, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_62, L_70, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_61, L_71, NULL);
		V_6 = L_72;
		// Vector3 topRightBack = center + orientation * Vector3.Scale((Vector3.up + Vector3.right + Vector3.back) * 0.5f, scale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = ___center0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_74 = ___orientation3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		L_76 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		L_77 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_75, L_76, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		L_79 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_77, L_78, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
		L_80 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_79, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81 = ___scale2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline(L_80, L_81, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		L_83 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_74, L_82, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84;
		L_84 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_73, L_83, NULL);
		V_7 = L_84;
		// Vector3 topLeftBack = center + orientation * Vector3.Scale((Vector3.up + Vector3.left + Vector3.back) * 0.5f, scale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = ___center0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_86 = ___orientation3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
		L_87 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		L_88 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_87, L_88, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
		L_90 = Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91;
		L_91 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_89, L_90, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92;
		L_92 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_91, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93 = ___scale2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94;
		L_94 = Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline(L_92, L_93, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_86, L_94, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96;
		L_96 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_85, L_95, NULL);
		V_8 = L_96;
		// for (int i = 0; i < 6; i++)
		V_9 = 0;
		goto IL_0218;
	}

IL_01d2:
	{
		// uvs.Add(Vector2.one);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_97 = __this->___uvs_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_98;
		L_98 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		NullCheck(L_97);
		List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline(L_97, L_98, List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		// uvs.Add(Vector2.up);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_99 = __this->___uvs_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_100;
		L_100 = Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline(NULL);
		NullCheck(L_99);
		List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline(L_99, L_100, List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		// uvs.Add(Vector2.right);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_101 = __this->___uvs_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102;
		L_102 = Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline(NULL);
		NullCheck(L_101);
		List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline(L_101, L_102, List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		// uvs.Add(Vector2.zero);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_103 = __this->___uvs_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_104;
		L_104 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_103);
		List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline(L_103, L_104, List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		// for (int i = 0; i < 6; i++)
		int32_t L_105 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_105, 1));
	}

IL_0218:
	{
		// for (int i = 0; i < 6; i++)
		int32_t L_106 = V_9;
		if ((((int32_t)L_106) < ((int32_t)6)))
		{
			goto IL_01d2;
		}
	}
	{
		// vertices.AddRange(new Vector3[] { topLeftFwd, topRightFwd, topLeftBack, topRightBack });
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_107;
		L_107 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_108 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_109 = L_108;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110 = V_6;
		NullCheck(L_109);
		(L_109)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_110);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_111 = L_109;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112 = V_5;
		NullCheck(L_111);
		(L_111)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_112);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_113 = L_111;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114 = V_8;
		NullCheck(L_113);
		(L_113)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_114);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_115 = L_113;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116 = V_7;
		NullCheck(L_115);
		(L_115)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_116);
		NullCheck(L_107);
		List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE(L_107, (RuntimeObject*)L_115, List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE_RuntimeMethod_var);
		// for (int i = 0; i < 4; i++)
		V_10 = 0;
		goto IL_0274;
	}

IL_0257:
	{
		// normals.Add(orientation * Vector3.up);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_117 = __this->___normals_15;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_118 = ___orientation3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119;
		L_119 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_120;
		L_120 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_118, L_119, NULL);
		NullCheck(L_117);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_117, L_120, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// for (int i = 0; i < 4; i++)
		int32_t L_121 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_121, 1));
	}

IL_0274:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_122 = V_10;
		if ((((int32_t)L_122) < ((int32_t)4)))
		{
			goto IL_0257;
		}
	}
	{
		// SetFace();
		Prop_U3CCreateCubeU3Eg__SetFaceU7C34_0_m1289086EC068594090CC0D82346399588E75890D(__this, (&V_0), NULL);
		// vertices.AddRange(new Vector3[] { bottomRightFwd, bottomLeftFwd, bottomRightBack, bottomLeftBack });
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_123;
		L_123 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_124 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_125 = L_124;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_126 = V_1;
		NullCheck(L_125);
		(L_125)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_126);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_127 = L_125;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_128 = V_2;
		NullCheck(L_127);
		(L_127)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_128);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_129 = L_127;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_130 = V_3;
		NullCheck(L_129);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_130);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_131 = L_129;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_132 = V_4;
		NullCheck(L_131);
		(L_131)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_132);
		NullCheck(L_123);
		List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE(L_123, (RuntimeObject*)L_131, List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE_RuntimeMethod_var);
		// for (int i = 0; i < 4; i++)
		V_11 = 0;
		goto IL_02d5;
	}

IL_02b8:
	{
		// normals.Add(orientation * Vector3.down);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_133 = __this->___normals_15;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_134 = ___orientation3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_135;
		L_135 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_136;
		L_136 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_134, L_135, NULL);
		NullCheck(L_133);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_133, L_136, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// for (int i = 0; i < 4; i++)
		int32_t L_137 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_137, 1));
	}

IL_02d5:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_138 = V_11;
		if ((((int32_t)L_138) < ((int32_t)4)))
		{
			goto IL_02b8;
		}
	}
	{
		// SetFace();
		Prop_U3CCreateCubeU3Eg__SetFaceU7C34_0_m1289086EC068594090CC0D82346399588E75890D(__this, (&V_0), NULL);
		// vertices.AddRange(new Vector3[] { bottomLeftFwd, bottomRightFwd, topLeftFwd, topRightFwd });
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_139;
		L_139 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_140 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_141 = L_140;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_142 = V_2;
		NullCheck(L_141);
		(L_141)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_142);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_143 = L_141;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_144 = V_1;
		NullCheck(L_143);
		(L_143)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_144);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_145 = L_143;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_146 = V_6;
		NullCheck(L_145);
		(L_145)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_146);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_147 = L_145;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_148 = V_5;
		NullCheck(L_147);
		(L_147)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_148);
		NullCheck(L_139);
		List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE(L_139, (RuntimeObject*)L_147, List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE_RuntimeMethod_var);
		// for (int i = 0; i < 4; i++)
		V_12 = 0;
		goto IL_0337;
	}

IL_031a:
	{
		// normals.Add(orientation * Vector3.forward);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_149 = __this->___normals_15;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_150 = ___orientation3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_151;
		L_151 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_152;
		L_152 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_150, L_151, NULL);
		NullCheck(L_149);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_149, L_152, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// for (int i = 0; i < 4; i++)
		int32_t L_153 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_153, 1));
	}

IL_0337:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_154 = V_12;
		if ((((int32_t)L_154) < ((int32_t)4)))
		{
			goto IL_031a;
		}
	}
	{
		// SetFace();
		Prop_U3CCreateCubeU3Eg__SetFaceU7C34_0_m1289086EC068594090CC0D82346399588E75890D(__this, (&V_0), NULL);
		// vertices.AddRange(new Vector3[] { bottomRightBack, bottomLeftBack, topRightBack, topLeftBack });
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_155;
		L_155 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_156 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_157 = L_156;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_158 = V_3;
		NullCheck(L_157);
		(L_157)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_158);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_159 = L_157;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_160 = V_4;
		NullCheck(L_159);
		(L_159)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_160);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_161 = L_159;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_162 = V_7;
		NullCheck(L_161);
		(L_161)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_162);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_163 = L_161;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_164 = V_8;
		NullCheck(L_163);
		(L_163)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_164);
		NullCheck(L_155);
		List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE(L_155, (RuntimeObject*)L_163, List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE_RuntimeMethod_var);
		// for (int i = 0; i < 4; i++)
		V_13 = 0;
		goto IL_039a;
	}

IL_037d:
	{
		// normals.Add(orientation * Vector3.back);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_165 = __this->___normals_15;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_166 = ___orientation3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_167;
		L_167 = Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_168;
		L_168 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_166, L_167, NULL);
		NullCheck(L_165);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_165, L_168, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// for (int i = 0; i < 4; i++)
		int32_t L_169 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_169, 1));
	}

IL_039a:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_170 = V_13;
		if ((((int32_t)L_170) < ((int32_t)4)))
		{
			goto IL_037d;
		}
	}
	{
		// SetFace();
		Prop_U3CCreateCubeU3Eg__SetFaceU7C34_0_m1289086EC068594090CC0D82346399588E75890D(__this, (&V_0), NULL);
		// vertices.AddRange(new Vector3[] { bottomRightBack, topRightBack, bottomRightFwd, topRightFwd });
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_171;
		L_171 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_172 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_173 = L_172;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_174 = V_3;
		NullCheck(L_173);
		(L_173)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_174);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_175 = L_173;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_176 = V_7;
		NullCheck(L_175);
		(L_175)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_176);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_177 = L_175;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_178 = V_1;
		NullCheck(L_177);
		(L_177)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_178);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_179 = L_177;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_180 = V_5;
		NullCheck(L_179);
		(L_179)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_180);
		NullCheck(L_171);
		List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE(L_171, (RuntimeObject*)L_179, List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE_RuntimeMethod_var);
		// for (int i = 0; i < 4; i++)
		V_14 = 0;
		goto IL_03fc;
	}

IL_03df:
	{
		// normals.Add(orientation * Vector3.right);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_181 = __this->___normals_15;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_182 = ___orientation3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_183;
		L_183 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_184;
		L_184 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_182, L_183, NULL);
		NullCheck(L_181);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_181, L_184, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// for (int i = 0; i < 4; i++)
		int32_t L_185 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_185, 1));
	}

IL_03fc:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_186 = V_14;
		if ((((int32_t)L_186) < ((int32_t)4)))
		{
			goto IL_03df;
		}
	}
	{
		// SetFace();
		Prop_U3CCreateCubeU3Eg__SetFaceU7C34_0_m1289086EC068594090CC0D82346399588E75890D(__this, (&V_0), NULL);
		// vertices.AddRange(new Vector3[] { bottomLeftFwd, topLeftFwd, bottomLeftBack, topLeftBack });
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_187;
		L_187 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_188 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_189 = L_188;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_190 = V_2;
		NullCheck(L_189);
		(L_189)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_190);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_191 = L_189;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_192 = V_6;
		NullCheck(L_191);
		(L_191)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_192);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_193 = L_191;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_194 = V_4;
		NullCheck(L_193);
		(L_193)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_194);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_195 = L_193;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_196 = V_8;
		NullCheck(L_195);
		(L_195)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_196);
		NullCheck(L_187);
		List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE(L_187, (RuntimeObject*)L_195, List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE_RuntimeMethod_var);
		// for (int i = 0; i < 4; i++)
		V_15 = 0;
		goto IL_045f;
	}

IL_0442:
	{
		// normals.Add(orientation * Vector3.left);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_197 = __this->___normals_15;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_198 = ___orientation3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_199;
		L_199 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_200;
		L_200 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_198, L_199, NULL);
		NullCheck(L_197);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_197, L_200, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// for (int i = 0; i < 4; i++)
		int32_t L_201 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_201, 1));
	}

IL_045f:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_202 = V_15;
		if ((((int32_t)L_202) < ((int32_t)4)))
		{
			goto IL_0442;
		}
	}
	{
		// SetFace();
		Prop_U3CCreateCubeU3Eg__SetFaceU7C34_0_m1289086EC068594090CC0D82346399588E75890D(__this, (&V_0), NULL);
		// }
		return;
	}
}
// System.Void PropMaker.Prop::Create4FaceCube(UnityEngine.Vector3,System.Collections.Generic.List`1<System.Int32>,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Prop_Create4FaceCube_mFF2A9D71E96C0B59B7E1B372BE17490BD6A76E4D (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___tris1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass35_0_tA91CB26E915E1C611D280EB5800FE8AD144EFEEA V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	{
		(&V_0)->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_0), (void*)__this);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = ___tris1;
		(&V_0)->___tris_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___tris_1), (void*)L_0);
		// Vector3 bottomRightFwd = center + orientation * Vector3.Scale((Vector3.down + Vector3.right + Vector3.forward) * 0.5f, scale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___center0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___orientation3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_5, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___scale2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline(L_8, L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_2, L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_11, NULL);
		V_1 = L_12;
		// Vector3 bottomLeftFwd = center + orientation * Vector3.Scale((Vector3.down + Vector3.left + Vector3.forward) * 0.5f, scale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___center0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___orientation3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_15, L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_17, L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_19, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ___scale2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline(L_20, L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_14, L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_13, L_23, NULL);
		V_2 = L_24;
		// Vector3 bottomRightBack = center + orientation * Vector3.Scale((Vector3.down + Vector3.right + Vector3.back) * 0.5f, scale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = ___center0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___orientation3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_27, L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_29, L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_31, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = ___scale2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline(L_32, L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_26, L_34, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_25, L_35, NULL);
		V_3 = L_36;
		// Vector3 bottomLeftBack = center + orientation * Vector3.Scale((Vector3.down + Vector3.left + Vector3.back) * 0.5f, scale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___center0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___orientation3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_39, L_40, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_41, L_42, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_43, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = ___scale2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline(L_44, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_38, L_46, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_37, L_47, NULL);
		V_4 = L_48;
		// Vector3 topRightFwd = center + orientation * Vector3.Scale((Vector3.up + Vector3.right + Vector3.forward) * 0.5f, scale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = ___center0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___orientation3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_51, L_52, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_53, L_54, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_55, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = ___scale2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline(L_56, L_57, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_50, L_58, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_49, L_59, NULL);
		V_5 = L_60;
		// Vector3 topLeftFwd = center + orientation * Vector3.Scale((Vector3.up + Vector3.left + Vector3.forward) * 0.5f, scale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61 = ___center0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___orientation3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_63, L_64, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_65, L_66, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_67, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = ___scale2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline(L_68, L_69, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_62, L_70, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_61, L_71, NULL);
		V_6 = L_72;
		// Vector3 topRightBack = center + orientation * Vector3.Scale((Vector3.up + Vector3.right + Vector3.back) * 0.5f, scale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = ___center0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_74 = ___orientation3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		L_76 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		L_77 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_75, L_76, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		L_79 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_77, L_78, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
		L_80 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_79, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81 = ___scale2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline(L_80, L_81, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		L_83 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_74, L_82, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84;
		L_84 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_73, L_83, NULL);
		V_7 = L_84;
		// Vector3 topLeftBack = center + orientation * Vector3.Scale((Vector3.up + Vector3.left + Vector3.back) * 0.5f, scale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = ___center0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_86 = ___orientation3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
		L_87 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		L_88 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_87, L_88, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
		L_90 = Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91;
		L_91 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_89, L_90, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92;
		L_92 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_91, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93 = ___scale2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94;
		L_94 = Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline(L_92, L_93, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_86, L_94, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96;
		L_96 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_85, L_95, NULL);
		V_8 = L_96;
		// for (int i = 0; i < 4; i++)
		V_9 = 0;
		goto IL_0218;
	}

IL_01d2:
	{
		// uvs.Add(Vector2.one);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_97 = __this->___uvs_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_98;
		L_98 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		NullCheck(L_97);
		List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline(L_97, L_98, List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		// uvs.Add(Vector2.up);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_99 = __this->___uvs_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_100;
		L_100 = Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline(NULL);
		NullCheck(L_99);
		List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline(L_99, L_100, List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		// uvs.Add(Vector2.right);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_101 = __this->___uvs_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102;
		L_102 = Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline(NULL);
		NullCheck(L_101);
		List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline(L_101, L_102, List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		// uvs.Add(Vector2.zero);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_103 = __this->___uvs_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_104;
		L_104 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_103);
		List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline(L_103, L_104, List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		// for (int i = 0; i < 4; i++)
		int32_t L_105 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_105, 1));
	}

IL_0218:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_106 = V_9;
		if ((((int32_t)L_106) < ((int32_t)4)))
		{
			goto IL_01d2;
		}
	}
	{
		// vertices.AddRange(new Vector3[] { topLeftFwd, topRightFwd, topLeftBack, topRightBack });
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_107;
		L_107 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_108 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_109 = L_108;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110 = V_6;
		NullCheck(L_109);
		(L_109)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_110);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_111 = L_109;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112 = V_5;
		NullCheck(L_111);
		(L_111)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_112);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_113 = L_111;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114 = V_8;
		NullCheck(L_113);
		(L_113)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_114);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_115 = L_113;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116 = V_7;
		NullCheck(L_115);
		(L_115)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_116);
		NullCheck(L_107);
		List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE(L_107, (RuntimeObject*)L_115, List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE_RuntimeMethod_var);
		// for (int i = 0; i < 4; i++)
		V_10 = 0;
		goto IL_0274;
	}

IL_0257:
	{
		// normals.Add(orientation * Vector3.up);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_117 = __this->___normals_15;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_118 = ___orientation3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119;
		L_119 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_120;
		L_120 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_118, L_119, NULL);
		NullCheck(L_117);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_117, L_120, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// for (int i = 0; i < 4; i++)
		int32_t L_121 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_121, 1));
	}

IL_0274:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_122 = V_10;
		if ((((int32_t)L_122) < ((int32_t)4)))
		{
			goto IL_0257;
		}
	}
	{
		// SetFace();
		Prop_U3CCreate4FaceCubeU3Eg__SetFaceU7C35_0_mEB799106422B27FC5D37919F9E1C082A486E458F(__this, (&V_0), NULL);
		// vertices.AddRange(new Vector3[] { bottomRightFwd, bottomLeftFwd, bottomRightBack, bottomLeftBack });
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_123;
		L_123 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_124 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_125 = L_124;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_126 = V_1;
		NullCheck(L_125);
		(L_125)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_126);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_127 = L_125;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_128 = V_2;
		NullCheck(L_127);
		(L_127)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_128);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_129 = L_127;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_130 = V_3;
		NullCheck(L_129);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_130);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_131 = L_129;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_132 = V_4;
		NullCheck(L_131);
		(L_131)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_132);
		NullCheck(L_123);
		List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE(L_123, (RuntimeObject*)L_131, List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE_RuntimeMethod_var);
		// for (int i = 0; i < 4; i++)
		V_11 = 0;
		goto IL_02d5;
	}

IL_02b8:
	{
		// normals.Add(orientation * Vector3.down);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_133 = __this->___normals_15;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_134 = ___orientation3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_135;
		L_135 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_136;
		L_136 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_134, L_135, NULL);
		NullCheck(L_133);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_133, L_136, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// for (int i = 0; i < 4; i++)
		int32_t L_137 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_137, 1));
	}

IL_02d5:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_138 = V_11;
		if ((((int32_t)L_138) < ((int32_t)4)))
		{
			goto IL_02b8;
		}
	}
	{
		// SetFace();
		Prop_U3CCreate4FaceCubeU3Eg__SetFaceU7C35_0_mEB799106422B27FC5D37919F9E1C082A486E458F(__this, (&V_0), NULL);
		// vertices.AddRange(new Vector3[] { bottomRightBack, topRightBack, bottomRightFwd, topRightFwd });
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_139;
		L_139 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_140 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_141 = L_140;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_142 = V_3;
		NullCheck(L_141);
		(L_141)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_142);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_143 = L_141;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_144 = V_7;
		NullCheck(L_143);
		(L_143)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_144);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_145 = L_143;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_146 = V_1;
		NullCheck(L_145);
		(L_145)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_146);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_147 = L_145;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_148 = V_5;
		NullCheck(L_147);
		(L_147)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_148);
		NullCheck(L_139);
		List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE(L_139, (RuntimeObject*)L_147, List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE_RuntimeMethod_var);
		// for (int i = 0; i < 4; i++)
		V_12 = 0;
		goto IL_0337;
	}

IL_031a:
	{
		// normals.Add(orientation * Vector3.right);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_149 = __this->___normals_15;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_150 = ___orientation3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_151;
		L_151 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_152;
		L_152 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_150, L_151, NULL);
		NullCheck(L_149);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_149, L_152, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// for (int i = 0; i < 4; i++)
		int32_t L_153 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_153, 1));
	}

IL_0337:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_154 = V_12;
		if ((((int32_t)L_154) < ((int32_t)4)))
		{
			goto IL_031a;
		}
	}
	{
		// SetFace();
		Prop_U3CCreate4FaceCubeU3Eg__SetFaceU7C35_0_mEB799106422B27FC5D37919F9E1C082A486E458F(__this, (&V_0), NULL);
		// vertices.AddRange(new Vector3[] { bottomLeftFwd, topLeftFwd, bottomLeftBack, topLeftBack });
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_155;
		L_155 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_156 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_157 = L_156;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_158 = V_2;
		NullCheck(L_157);
		(L_157)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_158);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_159 = L_157;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_160 = V_6;
		NullCheck(L_159);
		(L_159)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_160);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_161 = L_159;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_162 = V_4;
		NullCheck(L_161);
		(L_161)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_162);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_163 = L_161;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_164 = V_8;
		NullCheck(L_163);
		(L_163)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_164);
		NullCheck(L_155);
		List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE(L_155, (RuntimeObject*)L_163, List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE_RuntimeMethod_var);
		// for (int i = 0; i < 4; i++)
		V_13 = 0;
		goto IL_039a;
	}

IL_037d:
	{
		// normals.Add(orientation * Vector3.left);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_165 = __this->___normals_15;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_166 = ___orientation3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_167;
		L_167 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_168;
		L_168 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_166, L_167, NULL);
		NullCheck(L_165);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_165, L_168, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// for (int i = 0; i < 4; i++)
		int32_t L_169 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_169, 1));
	}

IL_039a:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_170 = V_13;
		if ((((int32_t)L_170) < ((int32_t)4)))
		{
			goto IL_037d;
		}
	}
	{
		// SetFace();
		Prop_U3CCreate4FaceCubeU3Eg__SetFaceU7C35_0_mEB799106422B27FC5D37919F9E1C082A486E458F(__this, (&V_0), NULL);
		// }
		return;
	}
}
// System.Void PropMaker.Prop::CreatePlane(UnityEngine.Vector3,UnityEngine.Vector2,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector2,System.Collections.Generic.List`1<System.Int32>,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Prop_CreatePlane_m9917530169221CCD4DEF19ADE8B665955E6177B3 (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPoint0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___size1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___xDir2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___yDir3, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___tiling4, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___tris5, bool ___flipTris6, bool ___invertUVX7, bool ___invertUVY8, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionMethods_ReverseOrder_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED506DA2408D7FE17CD8457EC3D25CFCF46BB762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m79CB520C0C1362FE97CA8619B6B59F18E80349BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_5 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t G_B8_0 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B8_1 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B8_2 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B8_3 = NULL;
	int32_t G_B7_0 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B7_1 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B7_2 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B7_3 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B9_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B9_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B9_4 = NULL;
	float G_B11_0 = 0.0f;
	int32_t G_B11_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B11_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B11_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B11_4 = NULL;
	float G_B10_0 = 0.0f;
	int32_t G_B10_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B10_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B10_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B10_4 = NULL;
	int32_t G_B12_0 = 0;
	float G_B12_1 = 0.0f;
	int32_t G_B12_2 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B12_3 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B12_4 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B12_5 = NULL;
	int32_t G_B14_0 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B14_1 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B14_2 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B14_3 = NULL;
	int32_t G_B13_0 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B13_1 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B13_2 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B13_3 = NULL;
	int32_t G_B15_0 = 0;
	int32_t G_B15_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B15_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B15_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B15_4 = NULL;
	float G_B17_0 = 0.0f;
	int32_t G_B17_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B17_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B17_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B17_4 = NULL;
	float G_B16_0 = 0.0f;
	int32_t G_B16_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B16_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B16_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B16_4 = NULL;
	int32_t G_B18_0 = 0;
	float G_B18_1 = 0.0f;
	int32_t G_B18_2 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B18_3 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B18_4 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B18_5 = NULL;
	int32_t G_B20_0 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B20_1 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B20_2 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B20_3 = NULL;
	int32_t G_B19_0 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B19_1 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B19_2 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B19_3 = NULL;
	int32_t G_B21_0 = 0;
	int32_t G_B21_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B21_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B21_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B21_4 = NULL;
	float G_B23_0 = 0.0f;
	int32_t G_B23_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B23_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B23_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B23_4 = NULL;
	float G_B22_0 = 0.0f;
	int32_t G_B22_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B22_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B22_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B22_4 = NULL;
	int32_t G_B24_0 = 0;
	float G_B24_1 = 0.0f;
	int32_t G_B24_2 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B24_3 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B24_4 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B24_5 = NULL;
	int32_t G_B26_0 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B26_1 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B26_2 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B26_3 = NULL;
	int32_t G_B25_0 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B25_1 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B25_2 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B25_3 = NULL;
	int32_t G_B27_0 = 0;
	int32_t G_B27_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B27_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B27_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B27_4 = NULL;
	float G_B29_0 = 0.0f;
	int32_t G_B29_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B29_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B29_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B29_4 = NULL;
	float G_B28_0 = 0.0f;
	int32_t G_B28_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B28_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B28_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B28_4 = NULL;
	int32_t G_B30_0 = 0;
	float G_B30_1 = 0.0f;
	int32_t G_B30_2 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B30_3 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B30_4 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B30_5 = NULL;
	int32_t G_B39_0 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B39_1 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B39_2 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B39_3 = NULL;
	int32_t G_B38_0 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B38_1 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B38_2 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B38_3 = NULL;
	int32_t G_B40_0 = 0;
	int32_t G_B40_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B40_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B40_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B40_4 = NULL;
	float G_B42_0 = 0.0f;
	int32_t G_B42_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B42_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B42_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B42_4 = NULL;
	float G_B41_0 = 0.0f;
	int32_t G_B41_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B41_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B41_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B41_4 = NULL;
	int32_t G_B43_0 = 0;
	float G_B43_1 = 0.0f;
	int32_t G_B43_2 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B43_3 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B43_4 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B43_5 = NULL;
	int32_t G_B45_0 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B45_1 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B45_2 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B45_3 = NULL;
	int32_t G_B44_0 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B44_1 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B44_2 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B44_3 = NULL;
	int32_t G_B46_0 = 0;
	int32_t G_B46_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B46_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B46_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B46_4 = NULL;
	float G_B48_0 = 0.0f;
	int32_t G_B48_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B48_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B48_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B48_4 = NULL;
	float G_B47_0 = 0.0f;
	int32_t G_B47_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B47_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B47_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B47_4 = NULL;
	int32_t G_B49_0 = 0;
	float G_B49_1 = 0.0f;
	int32_t G_B49_2 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B49_3 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B49_4 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B49_5 = NULL;
	int32_t G_B51_0 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B51_1 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B51_2 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B51_3 = NULL;
	int32_t G_B50_0 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B50_1 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B50_2 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B50_3 = NULL;
	int32_t G_B52_0 = 0;
	int32_t G_B52_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B52_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B52_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B52_4 = NULL;
	float G_B54_0 = 0.0f;
	int32_t G_B54_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B54_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B54_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B54_4 = NULL;
	float G_B53_0 = 0.0f;
	int32_t G_B53_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B53_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B53_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B53_4 = NULL;
	float G_B55_0 = 0.0f;
	float G_B55_1 = 0.0f;
	int32_t G_B55_2 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B55_3 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B55_4 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B55_5 = NULL;
	int32_t G_B57_0 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B57_1 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B57_2 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B57_3 = NULL;
	int32_t G_B56_0 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B56_1 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B56_2 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B56_3 = NULL;
	int32_t G_B58_0 = 0;
	int32_t G_B58_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B58_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B58_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B58_4 = NULL;
	float G_B60_0 = 0.0f;
	int32_t G_B60_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B60_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B60_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B60_4 = NULL;
	float G_B59_0 = 0.0f;
	int32_t G_B59_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B59_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B59_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B59_4 = NULL;
	float G_B61_0 = 0.0f;
	float G_B61_1 = 0.0f;
	int32_t G_B61_2 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B61_3 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B61_4 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B61_5 = NULL;
	int32_t G_B71_0 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B71_1 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B71_2 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B71_3 = NULL;
	int32_t G_B70_0 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B70_1 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B70_2 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B70_3 = NULL;
	float G_B72_0 = 0.0f;
	int32_t G_B72_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B72_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B72_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B72_4 = NULL;
	float G_B74_0 = 0.0f;
	int32_t G_B74_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B74_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B74_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B74_4 = NULL;
	float G_B73_0 = 0.0f;
	int32_t G_B73_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B73_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B73_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B73_4 = NULL;
	int32_t G_B75_0 = 0;
	float G_B75_1 = 0.0f;
	int32_t G_B75_2 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B75_3 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B75_4 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B75_5 = NULL;
	int32_t G_B77_0 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B77_1 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B77_2 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B77_3 = NULL;
	int32_t G_B76_0 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B76_1 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B76_2 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B76_3 = NULL;
	float G_B78_0 = 0.0f;
	int32_t G_B78_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B78_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B78_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B78_4 = NULL;
	float G_B80_0 = 0.0f;
	int32_t G_B80_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B80_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B80_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B80_4 = NULL;
	float G_B79_0 = 0.0f;
	int32_t G_B79_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B79_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B79_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B79_4 = NULL;
	int32_t G_B81_0 = 0;
	float G_B81_1 = 0.0f;
	int32_t G_B81_2 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B81_3 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B81_4 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B81_5 = NULL;
	int32_t G_B83_0 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B83_1 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B83_2 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B83_3 = NULL;
	int32_t G_B82_0 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B82_1 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B82_2 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B82_3 = NULL;
	float G_B84_0 = 0.0f;
	int32_t G_B84_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B84_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B84_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B84_4 = NULL;
	float G_B86_0 = 0.0f;
	int32_t G_B86_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B86_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B86_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B86_4 = NULL;
	float G_B85_0 = 0.0f;
	int32_t G_B85_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B85_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B85_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B85_4 = NULL;
	int32_t G_B87_0 = 0;
	float G_B87_1 = 0.0f;
	int32_t G_B87_2 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B87_3 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B87_4 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B87_5 = NULL;
	int32_t G_B89_0 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B89_1 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B89_2 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B89_3 = NULL;
	int32_t G_B88_0 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B88_1 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B88_2 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B88_3 = NULL;
	float G_B90_0 = 0.0f;
	int32_t G_B90_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B90_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B90_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B90_4 = NULL;
	float G_B92_0 = 0.0f;
	int32_t G_B92_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B92_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B92_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B92_4 = NULL;
	float G_B91_0 = 0.0f;
	int32_t G_B91_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B91_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B91_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B91_4 = NULL;
	int32_t G_B93_0 = 0;
	float G_B93_1 = 0.0f;
	int32_t G_B93_2 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B93_3 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B93_4 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B93_5 = NULL;
	int32_t G_B102_0 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B102_1 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B102_2 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B102_3 = NULL;
	int32_t G_B101_0 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B101_1 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B101_2 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B101_3 = NULL;
	float G_B103_0 = 0.0f;
	int32_t G_B103_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B103_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B103_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B103_4 = NULL;
	float G_B105_0 = 0.0f;
	int32_t G_B105_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B105_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B105_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B105_4 = NULL;
	float G_B104_0 = 0.0f;
	int32_t G_B104_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B104_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B104_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B104_4 = NULL;
	int32_t G_B106_0 = 0;
	float G_B106_1 = 0.0f;
	int32_t G_B106_2 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B106_3 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B106_4 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B106_5 = NULL;
	int32_t G_B108_0 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B108_1 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B108_2 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B108_3 = NULL;
	int32_t G_B107_0 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B107_1 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B107_2 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B107_3 = NULL;
	float G_B109_0 = 0.0f;
	int32_t G_B109_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B109_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B109_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B109_4 = NULL;
	float G_B111_0 = 0.0f;
	int32_t G_B111_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B111_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B111_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B111_4 = NULL;
	float G_B110_0 = 0.0f;
	int32_t G_B110_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B110_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B110_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B110_4 = NULL;
	int32_t G_B112_0 = 0;
	float G_B112_1 = 0.0f;
	int32_t G_B112_2 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B112_3 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B112_4 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B112_5 = NULL;
	int32_t G_B114_0 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B114_1 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B114_2 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B114_3 = NULL;
	int32_t G_B113_0 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B113_1 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B113_2 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B113_3 = NULL;
	float G_B115_0 = 0.0f;
	int32_t G_B115_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B115_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B115_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B115_4 = NULL;
	float G_B117_0 = 0.0f;
	int32_t G_B117_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B117_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B117_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B117_4 = NULL;
	float G_B116_0 = 0.0f;
	int32_t G_B116_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B116_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B116_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B116_4 = NULL;
	float G_B118_0 = 0.0f;
	float G_B118_1 = 0.0f;
	int32_t G_B118_2 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B118_3 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B118_4 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B118_5 = NULL;
	int32_t G_B120_0 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B120_1 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B120_2 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B120_3 = NULL;
	int32_t G_B119_0 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B119_1 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B119_2 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B119_3 = NULL;
	float G_B121_0 = 0.0f;
	int32_t G_B121_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B121_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B121_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B121_4 = NULL;
	float G_B123_0 = 0.0f;
	int32_t G_B123_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B123_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B123_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B123_4 = NULL;
	float G_B122_0 = 0.0f;
	int32_t G_B122_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B122_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B122_3 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B122_4 = NULL;
	float G_B124_0 = 0.0f;
	float G_B124_1 = 0.0f;
	int32_t G_B124_2 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B124_3 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B124_4 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* G_B124_5 = NULL;
	{
		// float xSections = (size.x / tiling.x).Floor();
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___size1;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___tiling4;
		float L_3 = L_2.___x_0;
		int32_t L_4;
		L_4 = ExtensionMethods_Floor_mB73CB6E686BB6A7F375FCEF44CA06A0237016907(((float)(L_1/L_3)), NULL);
		V_0 = ((float)L_4);
		// float ySections = (size.y / tiling.y).Floor();
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___size1;
		float L_6 = L_5.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___tiling4;
		float L_8 = L_7.___y_1;
		int32_t L_9;
		L_9 = ExtensionMethods_Floor_mB73CB6E686BB6A7F375FCEF44CA06A0237016907(((float)(L_6/L_8)), NULL);
		V_1 = ((float)L_9);
		// float endUVX = (size.x - tiling.x * xSections) / tiling.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___size1;
		float L_11 = L_10.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = ___tiling4;
		float L_13 = L_12.___x_0;
		float L_14 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = ___tiling4;
		float L_16 = L_15.___x_0;
		V_2 = ((float)(((float)il2cpp_codegen_subtract(L_11, ((float)il2cpp_codegen_multiply(L_13, L_14))))/L_16));
		// float endUVY = (size.y - tiling.y * ySections) / tiling.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = ___size1;
		float L_18 = L_17.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = ___tiling4;
		float L_20 = L_19.___y_1;
		float L_21 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = ___tiling4;
		float L_23 = L_22.___y_1;
		V_3 = ((float)(((float)il2cpp_codegen_subtract(L_18, ((float)il2cpp_codegen_multiply(L_20, L_21))))/L_23));
		// Vector3 normal = Vector3.Cross(xDir, yDir);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___xDir2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = ___yDir3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_24, L_25, NULL);
		V_6 = L_26;
		// if (flipTris)
		bool L_27 = ___flipTris6;
		if (!L_27)
		{
			goto IL_0073;
		}
	}
	{
		// normal = -normal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_28, NULL);
		V_6 = L_29;
	}

IL_0073:
	{
		// for (int x = 0; x < xSections; x++)
		V_7 = 0;
		goto IL_0492;
	}

IL_007b:
	{
		// for (int y = 0; y < ySections; y++)
		V_8 = 0;
		goto IL_028e;
	}

IL_0083:
	{
		// vertCount = vertices.Count;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_30;
		L_30 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_30);
		int32_t L_31;
		L_31 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_30, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		V_4 = L_31;
		// vertices.Add(startPoint + yDir * tiling.y * y + xDir * tiling.x * x);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_32;
		L_32 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = ___startPoint0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = ___yDir3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35 = ___tiling4;
		float L_36 = L_35.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_34, L_36, NULL);
		int32_t L_38 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_37, ((float)L_38), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_33, L_39, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = ___xDir2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42 = ___tiling4;
		float L_43 = L_42.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_41, L_43, NULL);
		int32_t L_45 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_44, ((float)L_45), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_40, L_46, NULL);
		NullCheck(L_32);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_32, L_47, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// vertices.Add(startPoint + yDir * tiling.y * y + xDir * tiling.x * (x + 1));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_48;
		L_48 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = ___startPoint0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = ___yDir3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51 = ___tiling4;
		float L_52 = L_51.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_50, L_52, NULL);
		int32_t L_54 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_53, ((float)L_54), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_49, L_55, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = ___xDir2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58 = ___tiling4;
		float L_59 = L_58.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_57, L_59, NULL);
		int32_t L_61 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_60, ((float)((int32_t)il2cpp_codegen_add(L_61, 1))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_56, L_62, NULL);
		NullCheck(L_48);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_48, L_63, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// vertices.Add(startPoint + yDir * tiling.y * (y + 1) + xDir * tiling.x * x);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_64;
		L_64 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65 = ___startPoint0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = ___yDir3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_67 = ___tiling4;
		float L_68 = L_67.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_66, L_68, NULL);
		int32_t L_70 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_69, ((float)((int32_t)il2cpp_codegen_add(L_70, 1))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_65, L_71, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = ___xDir2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_74 = ___tiling4;
		float L_75 = L_74.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		L_76 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_73, L_75, NULL);
		int32_t L_77 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_76, ((float)L_77), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		L_79 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_72, L_78, NULL);
		NullCheck(L_64);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_64, L_79, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// vertices.Add(startPoint + yDir * tiling.y * (y + 1) + xDir * tiling.x * (x + 1));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_80;
		L_80 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81 = ___startPoint0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82 = ___yDir3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_83 = ___tiling4;
		float L_84 = L_83.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_82, L_84, NULL);
		int32_t L_86 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
		L_87 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_85, ((float)((int32_t)il2cpp_codegen_add(L_86, 1))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		L_88 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_81, L_87, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89 = ___xDir2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_90 = ___tiling4;
		float L_91 = L_90.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92;
		L_92 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_89, L_91, NULL);
		int32_t L_93 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94;
		L_94 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_92, ((float)((int32_t)il2cpp_codegen_add(L_93, 1))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_88, L_94, NULL);
		NullCheck(L_80);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_80, L_95, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// trisToAdd = new int[] { vertCount, vertCount + 1, vertCount + 2, vertCount + 1, vertCount + 3, vertCount + 2 };
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_96 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)6);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_97 = L_96;
		int32_t L_98 = V_4;
		NullCheck(L_97);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_98);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_99 = L_97;
		int32_t L_100 = V_4;
		NullCheck(L_99);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)il2cpp_codegen_add(L_100, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_101 = L_99;
		int32_t L_102 = V_4;
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)il2cpp_codegen_add(L_102, 2)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_103 = L_101;
		int32_t L_104 = V_4;
		NullCheck(L_103);
		(L_103)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)((int32_t)il2cpp_codegen_add(L_104, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_105 = L_103;
		int32_t L_106 = V_4;
		NullCheck(L_105);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)((int32_t)il2cpp_codegen_add(L_106, 3)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_107 = L_105;
		int32_t L_108 = V_4;
		NullCheck(L_107);
		(L_107)->SetAt(static_cast<il2cpp_array_size_t>(5), (int32_t)((int32_t)il2cpp_codegen_add(L_108, 2)));
		V_5 = L_107;
		// if (flipTris)
		bool L_109 = ___flipTris6;
		if (!L_109)
		{
			goto IL_01d9;
		}
	}
	{
		// trisToAdd = trisToAdd.ReverseOrder();
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_111;
		L_111 = ExtensionMethods_ReverseOrder_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED506DA2408D7FE17CD8457EC3D25CFCF46BB762(L_110, ExtensionMethods_ReverseOrder_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED506DA2408D7FE17CD8457EC3D25CFCF46BB762_RuntimeMethod_var);
		V_5 = L_111;
	}

IL_01d9:
	{
		// tris.AddRange(trisToAdd);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_112 = ___tris5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_113 = V_5;
		NullCheck(L_112);
		List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204(L_112, (RuntimeObject*)L_113, List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204_RuntimeMethod_var);
		// uvs.AddRange(new Vector2[] {
		//     new Vector2(invertUVX ? 1 : 0, invertUVY ? 1 : 0),
		//     new Vector2(invertUVX ? 0 : 1, invertUVY ? 1 : 0),
		//     new Vector2(invertUVX ? 1 : 0, invertUVY ? 0 : 1),
		//     new Vector2(invertUVX ? 0 : 1, invertUVY ? 0 : 1)});
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_114 = __this->___uvs_16;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_115 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_116 = L_115;
		bool L_117 = ___invertUVX7;
		G_B7_0 = 0;
		G_B7_1 = L_116;
		G_B7_2 = L_116;
		G_B7_3 = L_114;
		if (L_117)
		{
			G_B8_0 = 0;
			G_B8_1 = L_116;
			G_B8_2 = L_116;
			G_B8_3 = L_114;
			goto IL_01f7;
		}
	}
	{
		G_B9_0 = 0;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		G_B9_4 = G_B7_3;
		goto IL_01f8;
	}

IL_01f7:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
		G_B9_4 = G_B8_3;
	}

IL_01f8:
	{
		bool L_118 = ___invertUVY8;
		G_B10_0 = ((float)G_B9_0);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		G_B10_4 = G_B9_4;
		if (L_118)
		{
			G_B11_0 = ((float)G_B9_0);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			G_B11_3 = G_B9_3;
			G_B11_4 = G_B9_4;
			goto IL_0200;
		}
	}
	{
		G_B12_0 = 0;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		G_B12_3 = G_B10_2;
		G_B12_4 = G_B10_3;
		G_B12_5 = G_B10_4;
		goto IL_0201;
	}

IL_0200:
	{
		G_B12_0 = 1;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
		G_B12_3 = G_B11_2;
		G_B12_4 = G_B11_3;
		G_B12_5 = G_B11_4;
	}

IL_0201:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_119;
		memset((&L_119), 0, sizeof(L_119));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_119), G_B12_1, ((float)G_B12_0), /*hidden argument*/NULL);
		NullCheck(G_B12_3);
		(G_B12_3)->SetAt(static_cast<il2cpp_array_size_t>(G_B12_2), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_119);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_120 = G_B12_4;
		bool L_121 = ___invertUVX7;
		G_B13_0 = 1;
		G_B13_1 = L_120;
		G_B13_2 = L_120;
		G_B13_3 = G_B12_5;
		if (L_121)
		{
			G_B14_0 = 1;
			G_B14_1 = L_120;
			G_B14_2 = L_120;
			G_B14_3 = G_B12_5;
			goto IL_0215;
		}
	}
	{
		G_B15_0 = 1;
		G_B15_1 = G_B13_0;
		G_B15_2 = G_B13_1;
		G_B15_3 = G_B13_2;
		G_B15_4 = G_B13_3;
		goto IL_0216;
	}

IL_0215:
	{
		G_B15_0 = 0;
		G_B15_1 = G_B14_0;
		G_B15_2 = G_B14_1;
		G_B15_3 = G_B14_2;
		G_B15_4 = G_B14_3;
	}

IL_0216:
	{
		bool L_122 = ___invertUVY8;
		G_B16_0 = ((float)G_B15_0);
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
		G_B16_4 = G_B15_4;
		if (L_122)
		{
			G_B17_0 = ((float)G_B15_0);
			G_B17_1 = G_B15_1;
			G_B17_2 = G_B15_2;
			G_B17_3 = G_B15_3;
			G_B17_4 = G_B15_4;
			goto IL_021e;
		}
	}
	{
		G_B18_0 = 0;
		G_B18_1 = G_B16_0;
		G_B18_2 = G_B16_1;
		G_B18_3 = G_B16_2;
		G_B18_4 = G_B16_3;
		G_B18_5 = G_B16_4;
		goto IL_021f;
	}

IL_021e:
	{
		G_B18_0 = 1;
		G_B18_1 = G_B17_0;
		G_B18_2 = G_B17_1;
		G_B18_3 = G_B17_2;
		G_B18_4 = G_B17_3;
		G_B18_5 = G_B17_4;
	}

IL_021f:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_123;
		memset((&L_123), 0, sizeof(L_123));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_123), G_B18_1, ((float)G_B18_0), /*hidden argument*/NULL);
		NullCheck(G_B18_3);
		(G_B18_3)->SetAt(static_cast<il2cpp_array_size_t>(G_B18_2), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_123);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_124 = G_B18_4;
		bool L_125 = ___invertUVX7;
		G_B19_0 = 2;
		G_B19_1 = L_124;
		G_B19_2 = L_124;
		G_B19_3 = G_B18_5;
		if (L_125)
		{
			G_B20_0 = 2;
			G_B20_1 = L_124;
			G_B20_2 = L_124;
			G_B20_3 = G_B18_5;
			goto IL_0233;
		}
	}
	{
		G_B21_0 = 0;
		G_B21_1 = G_B19_0;
		G_B21_2 = G_B19_1;
		G_B21_3 = G_B19_2;
		G_B21_4 = G_B19_3;
		goto IL_0234;
	}

IL_0233:
	{
		G_B21_0 = 1;
		G_B21_1 = G_B20_0;
		G_B21_2 = G_B20_1;
		G_B21_3 = G_B20_2;
		G_B21_4 = G_B20_3;
	}

IL_0234:
	{
		bool L_126 = ___invertUVY8;
		G_B22_0 = ((float)G_B21_0);
		G_B22_1 = G_B21_1;
		G_B22_2 = G_B21_2;
		G_B22_3 = G_B21_3;
		G_B22_4 = G_B21_4;
		if (L_126)
		{
			G_B23_0 = ((float)G_B21_0);
			G_B23_1 = G_B21_1;
			G_B23_2 = G_B21_2;
			G_B23_3 = G_B21_3;
			G_B23_4 = G_B21_4;
			goto IL_023c;
		}
	}
	{
		G_B24_0 = 1;
		G_B24_1 = G_B22_0;
		G_B24_2 = G_B22_1;
		G_B24_3 = G_B22_2;
		G_B24_4 = G_B22_3;
		G_B24_5 = G_B22_4;
		goto IL_023d;
	}

IL_023c:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
		G_B24_2 = G_B23_1;
		G_B24_3 = G_B23_2;
		G_B24_4 = G_B23_3;
		G_B24_5 = G_B23_4;
	}

IL_023d:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_127;
		memset((&L_127), 0, sizeof(L_127));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_127), G_B24_1, ((float)G_B24_0), /*hidden argument*/NULL);
		NullCheck(G_B24_3);
		(G_B24_3)->SetAt(static_cast<il2cpp_array_size_t>(G_B24_2), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_127);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_128 = G_B24_4;
		bool L_129 = ___invertUVX7;
		G_B25_0 = 3;
		G_B25_1 = L_128;
		G_B25_2 = L_128;
		G_B25_3 = G_B24_5;
		if (L_129)
		{
			G_B26_0 = 3;
			G_B26_1 = L_128;
			G_B26_2 = L_128;
			G_B26_3 = G_B24_5;
			goto IL_0251;
		}
	}
	{
		G_B27_0 = 1;
		G_B27_1 = G_B25_0;
		G_B27_2 = G_B25_1;
		G_B27_3 = G_B25_2;
		G_B27_4 = G_B25_3;
		goto IL_0252;
	}

IL_0251:
	{
		G_B27_0 = 0;
		G_B27_1 = G_B26_0;
		G_B27_2 = G_B26_1;
		G_B27_3 = G_B26_2;
		G_B27_4 = G_B26_3;
	}

IL_0252:
	{
		bool L_130 = ___invertUVY8;
		G_B28_0 = ((float)G_B27_0);
		G_B28_1 = G_B27_1;
		G_B28_2 = G_B27_2;
		G_B28_3 = G_B27_3;
		G_B28_4 = G_B27_4;
		if (L_130)
		{
			G_B29_0 = ((float)G_B27_0);
			G_B29_1 = G_B27_1;
			G_B29_2 = G_B27_2;
			G_B29_3 = G_B27_3;
			G_B29_4 = G_B27_4;
			goto IL_025a;
		}
	}
	{
		G_B30_0 = 1;
		G_B30_1 = G_B28_0;
		G_B30_2 = G_B28_1;
		G_B30_3 = G_B28_2;
		G_B30_4 = G_B28_3;
		G_B30_5 = G_B28_4;
		goto IL_025b;
	}

IL_025a:
	{
		G_B30_0 = 0;
		G_B30_1 = G_B29_0;
		G_B30_2 = G_B29_1;
		G_B30_3 = G_B29_2;
		G_B30_4 = G_B29_3;
		G_B30_5 = G_B29_4;
	}

IL_025b:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_131;
		memset((&L_131), 0, sizeof(L_131));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_131), G_B30_1, ((float)G_B30_0), /*hidden argument*/NULL);
		NullCheck(G_B30_3);
		(G_B30_3)->SetAt(static_cast<il2cpp_array_size_t>(G_B30_2), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_131);
		NullCheck(G_B30_5);
		List_1_AddRange_m79CB520C0C1362FE97CA8619B6B59F18E80349BC(G_B30_5, (RuntimeObject*)G_B30_4, List_1_AddRange_m79CB520C0C1362FE97CA8619B6B59F18E80349BC_RuntimeMethod_var);
		// for (int i = 0; i < 4; i++)
		V_9 = 0;
		goto IL_0283;
	}

IL_0270:
	{
		// normals.Add(normal);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_132 = __this->___normals_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_133 = V_6;
		NullCheck(L_132);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_132, L_133, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// for (int i = 0; i < 4; i++)
		int32_t L_134 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_134, 1));
	}

IL_0283:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_135 = V_9;
		if ((((int32_t)L_135) < ((int32_t)4)))
		{
			goto IL_0270;
		}
	}
	{
		// for (int y = 0; y < ySections; y++)
		int32_t L_136 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_136, 1));
	}

IL_028e:
	{
		// for (int y = 0; y < ySections; y++)
		int32_t L_137 = V_8;
		float L_138 = V_1;
		if ((((float)((float)L_137)) < ((float)L_138)))
		{
			goto IL_0083;
		}
	}
	{
		// vertCount = vertices.Count;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_139;
		L_139 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_139);
		int32_t L_140;
		L_140 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_139, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		V_4 = L_140;
		// vertices.Add(startPoint + yDir * tiling.y * ySections + xDir * tiling.x * x);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_141;
		L_141 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_142 = ___startPoint0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_143 = ___yDir3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_144 = ___tiling4;
		float L_145 = L_144.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_146;
		L_146 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_143, L_145, NULL);
		float L_147 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_148;
		L_148 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_146, L_147, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_149;
		L_149 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_142, L_148, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_150 = ___xDir2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_151 = ___tiling4;
		float L_152 = L_151.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_153;
		L_153 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_150, L_152, NULL);
		int32_t L_154 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_155;
		L_155 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_153, ((float)L_154), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_156;
		L_156 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_149, L_155, NULL);
		NullCheck(L_141);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_141, L_156, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// vertices.Add(startPoint + yDir * tiling.y * ySections + xDir * tiling.x * (x + 1));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_157;
		L_157 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_158 = ___startPoint0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_159 = ___yDir3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_160 = ___tiling4;
		float L_161 = L_160.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_162;
		L_162 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_159, L_161, NULL);
		float L_163 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_164;
		L_164 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_162, L_163, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_165;
		L_165 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_158, L_164, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_166 = ___xDir2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_167 = ___tiling4;
		float L_168 = L_167.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_169;
		L_169 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_166, L_168, NULL);
		int32_t L_170 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_171;
		L_171 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_169, ((float)((int32_t)il2cpp_codegen_add(L_170, 1))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_172;
		L_172 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_165, L_171, NULL);
		NullCheck(L_157);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_157, L_172, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// vertices.Add(startPoint + yDir * size.y + xDir * tiling.x * x);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_173;
		L_173 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_174 = ___startPoint0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_175 = ___yDir3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_176 = ___size1;
		float L_177 = L_176.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_178;
		L_178 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_175, L_177, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_179;
		L_179 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_174, L_178, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_180 = ___xDir2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_181 = ___tiling4;
		float L_182 = L_181.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_183;
		L_183 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_180, L_182, NULL);
		int32_t L_184 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_185;
		L_185 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_183, ((float)L_184), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_186;
		L_186 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_179, L_185, NULL);
		NullCheck(L_173);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_173, L_186, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// vertices.Add(startPoint + yDir * size.y + xDir * tiling.x * (x + 1));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_187;
		L_187 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_188 = ___startPoint0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_189 = ___yDir3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_190 = ___size1;
		float L_191 = L_190.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_192;
		L_192 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_189, L_191, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_193;
		L_193 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_188, L_192, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_194 = ___xDir2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_195 = ___tiling4;
		float L_196 = L_195.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_197;
		L_197 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_194, L_196, NULL);
		int32_t L_198 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_199;
		L_199 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_197, ((float)((int32_t)il2cpp_codegen_add(L_198, 1))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_200;
		L_200 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_193, L_199, NULL);
		NullCheck(L_187);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_187, L_200, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// trisToAdd = new int[] { vertCount, vertCount + 1, vertCount + 2, vertCount + 1, vertCount + 3, vertCount + 2 };
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_201 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)6);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_202 = L_201;
		int32_t L_203 = V_4;
		NullCheck(L_202);
		(L_202)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_203);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_204 = L_202;
		int32_t L_205 = V_4;
		NullCheck(L_204);
		(L_204)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)il2cpp_codegen_add(L_205, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_206 = L_204;
		int32_t L_207 = V_4;
		NullCheck(L_206);
		(L_206)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)il2cpp_codegen_add(L_207, 2)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_208 = L_206;
		int32_t L_209 = V_4;
		NullCheck(L_208);
		(L_208)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)((int32_t)il2cpp_codegen_add(L_209, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_210 = L_208;
		int32_t L_211 = V_4;
		NullCheck(L_210);
		(L_210)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)((int32_t)il2cpp_codegen_add(L_211, 3)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_212 = L_210;
		int32_t L_213 = V_4;
		NullCheck(L_212);
		(L_212)->SetAt(static_cast<il2cpp_array_size_t>(5), (int32_t)((int32_t)il2cpp_codegen_add(L_213, 2)));
		V_5 = L_212;
		// if (flipTris)
		bool L_214 = ___flipTris6;
		if (!L_214)
		{
			goto IL_03d3;
		}
	}
	{
		// trisToAdd = trisToAdd.ReverseOrder();
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_215 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_216;
		L_216 = ExtensionMethods_ReverseOrder_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED506DA2408D7FE17CD8457EC3D25CFCF46BB762(L_215, ExtensionMethods_ReverseOrder_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED506DA2408D7FE17CD8457EC3D25CFCF46BB762_RuntimeMethod_var);
		V_5 = L_216;
	}

IL_03d3:
	{
		// tris.AddRange(trisToAdd);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_217 = ___tris5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_218 = V_5;
		NullCheck(L_217);
		List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204(L_217, (RuntimeObject*)L_218, List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204_RuntimeMethod_var);
		// uvs.AddRange(new Vector2[] {
		//         new Vector2(invertUVX ? 1 : 0, invertUVY ? 1: 0),
		//         new Vector2(invertUVX ? 0 : 1, invertUVY ? 1: 0),
		//         new Vector2(invertUVX ? 1 : 0, invertUVY ? 1 - endUVY : endUVY),
		//         new Vector2(invertUVX ? 0 : 1, invertUVY ? 1 - endUVY: endUVY)});
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_219 = __this->___uvs_16;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_220 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_221 = L_220;
		bool L_222 = ___invertUVX7;
		G_B38_0 = 0;
		G_B38_1 = L_221;
		G_B38_2 = L_221;
		G_B38_3 = L_219;
		if (L_222)
		{
			G_B39_0 = 0;
			G_B39_1 = L_221;
			G_B39_2 = L_221;
			G_B39_3 = L_219;
			goto IL_03f1;
		}
	}
	{
		G_B40_0 = 0;
		G_B40_1 = G_B38_0;
		G_B40_2 = G_B38_1;
		G_B40_3 = G_B38_2;
		G_B40_4 = G_B38_3;
		goto IL_03f2;
	}

IL_03f1:
	{
		G_B40_0 = 1;
		G_B40_1 = G_B39_0;
		G_B40_2 = G_B39_1;
		G_B40_3 = G_B39_2;
		G_B40_4 = G_B39_3;
	}

IL_03f2:
	{
		bool L_223 = ___invertUVY8;
		G_B41_0 = ((float)G_B40_0);
		G_B41_1 = G_B40_1;
		G_B41_2 = G_B40_2;
		G_B41_3 = G_B40_3;
		G_B41_4 = G_B40_4;
		if (L_223)
		{
			G_B42_0 = ((float)G_B40_0);
			G_B42_1 = G_B40_1;
			G_B42_2 = G_B40_2;
			G_B42_3 = G_B40_3;
			G_B42_4 = G_B40_4;
			goto IL_03fa;
		}
	}
	{
		G_B43_0 = 0;
		G_B43_1 = G_B41_0;
		G_B43_2 = G_B41_1;
		G_B43_3 = G_B41_2;
		G_B43_4 = G_B41_3;
		G_B43_5 = G_B41_4;
		goto IL_03fb;
	}

IL_03fa:
	{
		G_B43_0 = 1;
		G_B43_1 = G_B42_0;
		G_B43_2 = G_B42_1;
		G_B43_3 = G_B42_2;
		G_B43_4 = G_B42_3;
		G_B43_5 = G_B42_4;
	}

IL_03fb:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_224;
		memset((&L_224), 0, sizeof(L_224));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_224), G_B43_1, ((float)G_B43_0), /*hidden argument*/NULL);
		NullCheck(G_B43_3);
		(G_B43_3)->SetAt(static_cast<il2cpp_array_size_t>(G_B43_2), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_224);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_225 = G_B43_4;
		bool L_226 = ___invertUVX7;
		G_B44_0 = 1;
		G_B44_1 = L_225;
		G_B44_2 = L_225;
		G_B44_3 = G_B43_5;
		if (L_226)
		{
			G_B45_0 = 1;
			G_B45_1 = L_225;
			G_B45_2 = L_225;
			G_B45_3 = G_B43_5;
			goto IL_040f;
		}
	}
	{
		G_B46_0 = 1;
		G_B46_1 = G_B44_0;
		G_B46_2 = G_B44_1;
		G_B46_3 = G_B44_2;
		G_B46_4 = G_B44_3;
		goto IL_0410;
	}

IL_040f:
	{
		G_B46_0 = 0;
		G_B46_1 = G_B45_0;
		G_B46_2 = G_B45_1;
		G_B46_3 = G_B45_2;
		G_B46_4 = G_B45_3;
	}

IL_0410:
	{
		bool L_227 = ___invertUVY8;
		G_B47_0 = ((float)G_B46_0);
		G_B47_1 = G_B46_1;
		G_B47_2 = G_B46_2;
		G_B47_3 = G_B46_3;
		G_B47_4 = G_B46_4;
		if (L_227)
		{
			G_B48_0 = ((float)G_B46_0);
			G_B48_1 = G_B46_1;
			G_B48_2 = G_B46_2;
			G_B48_3 = G_B46_3;
			G_B48_4 = G_B46_4;
			goto IL_0418;
		}
	}
	{
		G_B49_0 = 0;
		G_B49_1 = G_B47_0;
		G_B49_2 = G_B47_1;
		G_B49_3 = G_B47_2;
		G_B49_4 = G_B47_3;
		G_B49_5 = G_B47_4;
		goto IL_0419;
	}

IL_0418:
	{
		G_B49_0 = 1;
		G_B49_1 = G_B48_0;
		G_B49_2 = G_B48_1;
		G_B49_3 = G_B48_2;
		G_B49_4 = G_B48_3;
		G_B49_5 = G_B48_4;
	}

IL_0419:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_228;
		memset((&L_228), 0, sizeof(L_228));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_228), G_B49_1, ((float)G_B49_0), /*hidden argument*/NULL);
		NullCheck(G_B49_3);
		(G_B49_3)->SetAt(static_cast<il2cpp_array_size_t>(G_B49_2), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_228);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_229 = G_B49_4;
		bool L_230 = ___invertUVX7;
		G_B50_0 = 2;
		G_B50_1 = L_229;
		G_B50_2 = L_229;
		G_B50_3 = G_B49_5;
		if (L_230)
		{
			G_B51_0 = 2;
			G_B51_1 = L_229;
			G_B51_2 = L_229;
			G_B51_3 = G_B49_5;
			goto IL_042d;
		}
	}
	{
		G_B52_0 = 0;
		G_B52_1 = G_B50_0;
		G_B52_2 = G_B50_1;
		G_B52_3 = G_B50_2;
		G_B52_4 = G_B50_3;
		goto IL_042e;
	}

IL_042d:
	{
		G_B52_0 = 1;
		G_B52_1 = G_B51_0;
		G_B52_2 = G_B51_1;
		G_B52_3 = G_B51_2;
		G_B52_4 = G_B51_3;
	}

IL_042e:
	{
		bool L_231 = ___invertUVY8;
		G_B53_0 = ((float)G_B52_0);
		G_B53_1 = G_B52_1;
		G_B53_2 = G_B52_2;
		G_B53_3 = G_B52_3;
		G_B53_4 = G_B52_4;
		if (L_231)
		{
			G_B54_0 = ((float)G_B52_0);
			G_B54_1 = G_B52_1;
			G_B54_2 = G_B52_2;
			G_B54_3 = G_B52_3;
			G_B54_4 = G_B52_4;
			goto IL_0436;
		}
	}
	{
		float L_232 = V_3;
		G_B55_0 = L_232;
		G_B55_1 = G_B53_0;
		G_B55_2 = G_B53_1;
		G_B55_3 = G_B53_2;
		G_B55_4 = G_B53_3;
		G_B55_5 = G_B53_4;
		goto IL_043d;
	}

IL_0436:
	{
		float L_233 = V_3;
		G_B55_0 = ((float)il2cpp_codegen_subtract((1.0f), L_233));
		G_B55_1 = G_B54_0;
		G_B55_2 = G_B54_1;
		G_B55_3 = G_B54_2;
		G_B55_4 = G_B54_3;
		G_B55_5 = G_B54_4;
	}

IL_043d:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_234;
		memset((&L_234), 0, sizeof(L_234));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_234), G_B55_1, G_B55_0, /*hidden argument*/NULL);
		NullCheck(G_B55_3);
		(G_B55_3)->SetAt(static_cast<il2cpp_array_size_t>(G_B55_2), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_234);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_235 = G_B55_4;
		bool L_236 = ___invertUVX7;
		G_B56_0 = 3;
		G_B56_1 = L_235;
		G_B56_2 = L_235;
		G_B56_3 = G_B55_5;
		if (L_236)
		{
			G_B57_0 = 3;
			G_B57_1 = L_235;
			G_B57_2 = L_235;
			G_B57_3 = G_B55_5;
			goto IL_0450;
		}
	}
	{
		G_B58_0 = 1;
		G_B58_1 = G_B56_0;
		G_B58_2 = G_B56_1;
		G_B58_3 = G_B56_2;
		G_B58_4 = G_B56_3;
		goto IL_0451;
	}

IL_0450:
	{
		G_B58_0 = 0;
		G_B58_1 = G_B57_0;
		G_B58_2 = G_B57_1;
		G_B58_3 = G_B57_2;
		G_B58_4 = G_B57_3;
	}

IL_0451:
	{
		bool L_237 = ___invertUVY8;
		G_B59_0 = ((float)G_B58_0);
		G_B59_1 = G_B58_1;
		G_B59_2 = G_B58_2;
		G_B59_3 = G_B58_3;
		G_B59_4 = G_B58_4;
		if (L_237)
		{
			G_B60_0 = ((float)G_B58_0);
			G_B60_1 = G_B58_1;
			G_B60_2 = G_B58_2;
			G_B60_3 = G_B58_3;
			G_B60_4 = G_B58_4;
			goto IL_0459;
		}
	}
	{
		float L_238 = V_3;
		G_B61_0 = L_238;
		G_B61_1 = G_B59_0;
		G_B61_2 = G_B59_1;
		G_B61_3 = G_B59_2;
		G_B61_4 = G_B59_3;
		G_B61_5 = G_B59_4;
		goto IL_0460;
	}

IL_0459:
	{
		float L_239 = V_3;
		G_B61_0 = ((float)il2cpp_codegen_subtract((1.0f), L_239));
		G_B61_1 = G_B60_0;
		G_B61_2 = G_B60_1;
		G_B61_3 = G_B60_2;
		G_B61_4 = G_B60_3;
		G_B61_5 = G_B60_4;
	}

IL_0460:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_240;
		memset((&L_240), 0, sizeof(L_240));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_240), G_B61_1, G_B61_0, /*hidden argument*/NULL);
		NullCheck(G_B61_3);
		(G_B61_3)->SetAt(static_cast<il2cpp_array_size_t>(G_B61_2), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_240);
		NullCheck(G_B61_5);
		List_1_AddRange_m79CB520C0C1362FE97CA8619B6B59F18E80349BC(G_B61_5, (RuntimeObject*)G_B61_4, List_1_AddRange_m79CB520C0C1362FE97CA8619B6B59F18E80349BC_RuntimeMethod_var);
		// for (int i = 0; i < 4; i++)
		V_10 = 0;
		goto IL_0487;
	}

IL_0474:
	{
		// normals.Add(normal);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_241 = __this->___normals_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_242 = V_6;
		NullCheck(L_241);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_241, L_242, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// for (int i = 0; i < 4; i++)
		int32_t L_243 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_243, 1));
	}

IL_0487:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_244 = V_10;
		if ((((int32_t)L_244) < ((int32_t)4)))
		{
			goto IL_0474;
		}
	}
	{
		// for (int x = 0; x < xSections; x++)
		int32_t L_245 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_245, 1));
	}

IL_0492:
	{
		// for (int x = 0; x < xSections; x++)
		int32_t L_246 = V_7;
		float L_247 = V_0;
		if ((((float)((float)L_246)) < ((float)L_247)))
		{
			goto IL_007b;
		}
	}
	{
		// for (int y = 0; y < ySections; y++)
		V_11 = 0;
		goto IL_06a0;
	}

IL_04a3:
	{
		// vertCount = vertices.Count;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_248;
		L_248 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_248);
		int32_t L_249;
		L_249 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_248, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		V_4 = L_249;
		// vertices.Add(startPoint + yDir * tiling.y * y + xDir * tiling.x * xSections);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_250;
		L_250 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_251 = ___startPoint0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_252 = ___yDir3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_253 = ___tiling4;
		float L_254 = L_253.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_255;
		L_255 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_252, L_254, NULL);
		int32_t L_256 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_257;
		L_257 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_255, ((float)L_256), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_258;
		L_258 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_251, L_257, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_259 = ___xDir2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_260 = ___tiling4;
		float L_261 = L_260.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_262;
		L_262 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_259, L_261, NULL);
		float L_263 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_264;
		L_264 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_262, L_263, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_265;
		L_265 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_258, L_264, NULL);
		NullCheck(L_250);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_250, L_265, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// vertices.Add(startPoint + yDir * tiling.y * y + xDir * size.x);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_266;
		L_266 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_267 = ___startPoint0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_268 = ___yDir3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_269 = ___tiling4;
		float L_270 = L_269.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_271;
		L_271 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_268, L_270, NULL);
		int32_t L_272 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_273;
		L_273 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_271, ((float)L_272), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_274;
		L_274 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_267, L_273, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_275 = ___xDir2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_276 = ___size1;
		float L_277 = L_276.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_278;
		L_278 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_275, L_277, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_279;
		L_279 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_274, L_278, NULL);
		NullCheck(L_266);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_266, L_279, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// vertices.Add(startPoint + yDir * tiling.y * (y + 1) + xDir * tiling.x * xSections);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_280;
		L_280 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_281 = ___startPoint0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_282 = ___yDir3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_283 = ___tiling4;
		float L_284 = L_283.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_285;
		L_285 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_282, L_284, NULL);
		int32_t L_286 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_287;
		L_287 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_285, ((float)((int32_t)il2cpp_codegen_add(L_286, 1))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_288;
		L_288 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_281, L_287, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_289 = ___xDir2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_290 = ___tiling4;
		float L_291 = L_290.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_292;
		L_292 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_289, L_291, NULL);
		float L_293 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_294;
		L_294 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_292, L_293, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_295;
		L_295 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_288, L_294, NULL);
		NullCheck(L_280);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_280, L_295, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// vertices.Add(startPoint + yDir * tiling.y * (y + 1) + xDir * size.x);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_296;
		L_296 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_297 = ___startPoint0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_298 = ___yDir3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_299 = ___tiling4;
		float L_300 = L_299.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_301;
		L_301 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_298, L_300, NULL);
		int32_t L_302 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_303;
		L_303 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_301, ((float)((int32_t)il2cpp_codegen_add(L_302, 1))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_304;
		L_304 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_297, L_303, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_305 = ___xDir2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_306 = ___size1;
		float L_307 = L_306.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_308;
		L_308 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_305, L_307, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_309;
		L_309 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_304, L_308, NULL);
		NullCheck(L_296);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_296, L_309, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// trisToAdd = new int[] { vertCount, vertCount + 1, vertCount + 2, vertCount + 1, vertCount + 3, vertCount + 2 };
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_310 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)6);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_311 = L_310;
		int32_t L_312 = V_4;
		NullCheck(L_311);
		(L_311)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_312);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_313 = L_311;
		int32_t L_314 = V_4;
		NullCheck(L_313);
		(L_313)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)il2cpp_codegen_add(L_314, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_315 = L_313;
		int32_t L_316 = V_4;
		NullCheck(L_315);
		(L_315)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)il2cpp_codegen_add(L_316, 2)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_317 = L_315;
		int32_t L_318 = V_4;
		NullCheck(L_317);
		(L_317)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)((int32_t)il2cpp_codegen_add(L_318, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_319 = L_317;
		int32_t L_320 = V_4;
		NullCheck(L_319);
		(L_319)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)((int32_t)il2cpp_codegen_add(L_320, 3)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_321 = L_319;
		int32_t L_322 = V_4;
		NullCheck(L_321);
		(L_321)->SetAt(static_cast<il2cpp_array_size_t>(5), (int32_t)((int32_t)il2cpp_codegen_add(L_322, 2)));
		V_5 = L_321;
		// if (flipTris)
		bool L_323 = ___flipTris6;
		if (!L_323)
		{
			goto IL_05df;
		}
	}
	{
		// trisToAdd = trisToAdd.ReverseOrder();
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_324 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_325;
		L_325 = ExtensionMethods_ReverseOrder_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED506DA2408D7FE17CD8457EC3D25CFCF46BB762(L_324, ExtensionMethods_ReverseOrder_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED506DA2408D7FE17CD8457EC3D25CFCF46BB762_RuntimeMethod_var);
		V_5 = L_325;
	}

IL_05df:
	{
		// tris.AddRange(trisToAdd);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_326 = ___tris5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_327 = V_5;
		NullCheck(L_326);
		List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204(L_326, (RuntimeObject*)L_327, List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204_RuntimeMethod_var);
		// uvs.AddRange(new Vector2[] {
		//         new Vector2(invertUVX ? endUVX : 0, invertUVY ? 1 : 0),
		//         new Vector2(invertUVX ? 0 : endUVX, invertUVY ? 1 : 0),
		//         new Vector2(invertUVX ? endUVX : 0, invertUVY ? 0 : 1),
		//         new Vector2(invertUVX ? 0 : endUVX, invertUVY ? 0 : 1)});
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_328 = __this->___uvs_16;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_329 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_330 = L_329;
		bool L_331 = ___invertUVX7;
		G_B70_0 = 0;
		G_B70_1 = L_330;
		G_B70_2 = L_330;
		G_B70_3 = L_328;
		if (L_331)
		{
			G_B71_0 = 0;
			G_B71_1 = L_330;
			G_B71_2 = L_330;
			G_B71_3 = L_328;
			goto IL_0601;
		}
	}
	{
		G_B72_0 = (0.0f);
		G_B72_1 = G_B70_0;
		G_B72_2 = G_B70_1;
		G_B72_3 = G_B70_2;
		G_B72_4 = G_B70_3;
		goto IL_0602;
	}

IL_0601:
	{
		float L_332 = V_2;
		G_B72_0 = L_332;
		G_B72_1 = G_B71_0;
		G_B72_2 = G_B71_1;
		G_B72_3 = G_B71_2;
		G_B72_4 = G_B71_3;
	}

IL_0602:
	{
		bool L_333 = ___invertUVY8;
		G_B73_0 = G_B72_0;
		G_B73_1 = G_B72_1;
		G_B73_2 = G_B72_2;
		G_B73_3 = G_B72_3;
		G_B73_4 = G_B72_4;
		if (L_333)
		{
			G_B74_0 = G_B72_0;
			G_B74_1 = G_B72_1;
			G_B74_2 = G_B72_2;
			G_B74_3 = G_B72_3;
			G_B74_4 = G_B72_4;
			goto IL_0609;
		}
	}
	{
		G_B75_0 = 0;
		G_B75_1 = G_B73_0;
		G_B75_2 = G_B73_1;
		G_B75_3 = G_B73_2;
		G_B75_4 = G_B73_3;
		G_B75_5 = G_B73_4;
		goto IL_060a;
	}

IL_0609:
	{
		G_B75_0 = 1;
		G_B75_1 = G_B74_0;
		G_B75_2 = G_B74_1;
		G_B75_3 = G_B74_2;
		G_B75_4 = G_B74_3;
		G_B75_5 = G_B74_4;
	}

IL_060a:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_334;
		memset((&L_334), 0, sizeof(L_334));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_334), G_B75_1, ((float)G_B75_0), /*hidden argument*/NULL);
		NullCheck(G_B75_3);
		(G_B75_3)->SetAt(static_cast<il2cpp_array_size_t>(G_B75_2), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_334);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_335 = G_B75_4;
		bool L_336 = ___invertUVX7;
		G_B76_0 = 1;
		G_B76_1 = L_335;
		G_B76_2 = L_335;
		G_B76_3 = G_B75_5;
		if (L_336)
		{
			G_B77_0 = 1;
			G_B77_1 = L_335;
			G_B77_2 = L_335;
			G_B77_3 = G_B75_5;
			goto IL_061e;
		}
	}
	{
		float L_337 = V_2;
		G_B78_0 = L_337;
		G_B78_1 = G_B76_0;
		G_B78_2 = G_B76_1;
		G_B78_3 = G_B76_2;
		G_B78_4 = G_B76_3;
		goto IL_0623;
	}

IL_061e:
	{
		G_B78_0 = (0.0f);
		G_B78_1 = G_B77_0;
		G_B78_2 = G_B77_1;
		G_B78_3 = G_B77_2;
		G_B78_4 = G_B77_3;
	}

IL_0623:
	{
		bool L_338 = ___invertUVY8;
		G_B79_0 = G_B78_0;
		G_B79_1 = G_B78_1;
		G_B79_2 = G_B78_2;
		G_B79_3 = G_B78_3;
		G_B79_4 = G_B78_4;
		if (L_338)
		{
			G_B80_0 = G_B78_0;
			G_B80_1 = G_B78_1;
			G_B80_2 = G_B78_2;
			G_B80_3 = G_B78_3;
			G_B80_4 = G_B78_4;
			goto IL_062a;
		}
	}
	{
		G_B81_0 = 0;
		G_B81_1 = G_B79_0;
		G_B81_2 = G_B79_1;
		G_B81_3 = G_B79_2;
		G_B81_4 = G_B79_3;
		G_B81_5 = G_B79_4;
		goto IL_062b;
	}

IL_062a:
	{
		G_B81_0 = 1;
		G_B81_1 = G_B80_0;
		G_B81_2 = G_B80_1;
		G_B81_3 = G_B80_2;
		G_B81_4 = G_B80_3;
		G_B81_5 = G_B80_4;
	}

IL_062b:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_339;
		memset((&L_339), 0, sizeof(L_339));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_339), G_B81_1, ((float)G_B81_0), /*hidden argument*/NULL);
		NullCheck(G_B81_3);
		(G_B81_3)->SetAt(static_cast<il2cpp_array_size_t>(G_B81_2), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_339);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_340 = G_B81_4;
		bool L_341 = ___invertUVX7;
		G_B82_0 = 2;
		G_B82_1 = L_340;
		G_B82_2 = L_340;
		G_B82_3 = G_B81_5;
		if (L_341)
		{
			G_B83_0 = 2;
			G_B83_1 = L_340;
			G_B83_2 = L_340;
			G_B83_3 = G_B81_5;
			goto IL_0643;
		}
	}
	{
		G_B84_0 = (0.0f);
		G_B84_1 = G_B82_0;
		G_B84_2 = G_B82_1;
		G_B84_3 = G_B82_2;
		G_B84_4 = G_B82_3;
		goto IL_0644;
	}

IL_0643:
	{
		float L_342 = V_2;
		G_B84_0 = L_342;
		G_B84_1 = G_B83_0;
		G_B84_2 = G_B83_1;
		G_B84_3 = G_B83_2;
		G_B84_4 = G_B83_3;
	}

IL_0644:
	{
		bool L_343 = ___invertUVY8;
		G_B85_0 = G_B84_0;
		G_B85_1 = G_B84_1;
		G_B85_2 = G_B84_2;
		G_B85_3 = G_B84_3;
		G_B85_4 = G_B84_4;
		if (L_343)
		{
			G_B86_0 = G_B84_0;
			G_B86_1 = G_B84_1;
			G_B86_2 = G_B84_2;
			G_B86_3 = G_B84_3;
			G_B86_4 = G_B84_4;
			goto IL_064b;
		}
	}
	{
		G_B87_0 = 1;
		G_B87_1 = G_B85_0;
		G_B87_2 = G_B85_1;
		G_B87_3 = G_B85_2;
		G_B87_4 = G_B85_3;
		G_B87_5 = G_B85_4;
		goto IL_064c;
	}

IL_064b:
	{
		G_B87_0 = 0;
		G_B87_1 = G_B86_0;
		G_B87_2 = G_B86_1;
		G_B87_3 = G_B86_2;
		G_B87_4 = G_B86_3;
		G_B87_5 = G_B86_4;
	}

IL_064c:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_344;
		memset((&L_344), 0, sizeof(L_344));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_344), G_B87_1, ((float)G_B87_0), /*hidden argument*/NULL);
		NullCheck(G_B87_3);
		(G_B87_3)->SetAt(static_cast<il2cpp_array_size_t>(G_B87_2), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_344);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_345 = G_B87_4;
		bool L_346 = ___invertUVX7;
		G_B88_0 = 3;
		G_B88_1 = L_345;
		G_B88_2 = L_345;
		G_B88_3 = G_B87_5;
		if (L_346)
		{
			G_B89_0 = 3;
			G_B89_1 = L_345;
			G_B89_2 = L_345;
			G_B89_3 = G_B87_5;
			goto IL_0660;
		}
	}
	{
		float L_347 = V_2;
		G_B90_0 = L_347;
		G_B90_1 = G_B88_0;
		G_B90_2 = G_B88_1;
		G_B90_3 = G_B88_2;
		G_B90_4 = G_B88_3;
		goto IL_0665;
	}

IL_0660:
	{
		G_B90_0 = (0.0f);
		G_B90_1 = G_B89_0;
		G_B90_2 = G_B89_1;
		G_B90_3 = G_B89_2;
		G_B90_4 = G_B89_3;
	}

IL_0665:
	{
		bool L_348 = ___invertUVY8;
		G_B91_0 = G_B90_0;
		G_B91_1 = G_B90_1;
		G_B91_2 = G_B90_2;
		G_B91_3 = G_B90_3;
		G_B91_4 = G_B90_4;
		if (L_348)
		{
			G_B92_0 = G_B90_0;
			G_B92_1 = G_B90_1;
			G_B92_2 = G_B90_2;
			G_B92_3 = G_B90_3;
			G_B92_4 = G_B90_4;
			goto IL_066c;
		}
	}
	{
		G_B93_0 = 1;
		G_B93_1 = G_B91_0;
		G_B93_2 = G_B91_1;
		G_B93_3 = G_B91_2;
		G_B93_4 = G_B91_3;
		G_B93_5 = G_B91_4;
		goto IL_066d;
	}

IL_066c:
	{
		G_B93_0 = 0;
		G_B93_1 = G_B92_0;
		G_B93_2 = G_B92_1;
		G_B93_3 = G_B92_2;
		G_B93_4 = G_B92_3;
		G_B93_5 = G_B92_4;
	}

IL_066d:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_349;
		memset((&L_349), 0, sizeof(L_349));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_349), G_B93_1, ((float)G_B93_0), /*hidden argument*/NULL);
		NullCheck(G_B93_3);
		(G_B93_3)->SetAt(static_cast<il2cpp_array_size_t>(G_B93_2), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_349);
		NullCheck(G_B93_5);
		List_1_AddRange_m79CB520C0C1362FE97CA8619B6B59F18E80349BC(G_B93_5, (RuntimeObject*)G_B93_4, List_1_AddRange_m79CB520C0C1362FE97CA8619B6B59F18E80349BC_RuntimeMethod_var);
		// for (int i = 0; i < 4; i++)
		V_12 = 0;
		goto IL_0695;
	}

IL_0682:
	{
		// normals.Add(normal);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_350 = __this->___normals_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_351 = V_6;
		NullCheck(L_350);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_350, L_351, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// for (int i = 0; i < 4; i++)
		int32_t L_352 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_352, 1));
	}

IL_0695:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_353 = V_12;
		if ((((int32_t)L_353) < ((int32_t)4)))
		{
			goto IL_0682;
		}
	}
	{
		// for (int y = 0; y < ySections; y++)
		int32_t L_354 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_354, 1));
	}

IL_06a0:
	{
		// for (int y = 0; y < ySections; y++)
		int32_t L_355 = V_11;
		float L_356 = V_1;
		if ((((float)((float)L_355)) < ((float)L_356)))
		{
			goto IL_04a3;
		}
	}
	{
		// vertCount = vertices.Count;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_357;
		L_357 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_357);
		int32_t L_358;
		L_358 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_357, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		V_4 = L_358;
		// vertices.Add(startPoint + yDir * tiling.y * ySections + xDir * tiling.x * xSections);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_359;
		L_359 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_360 = ___startPoint0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_361 = ___yDir3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_362 = ___tiling4;
		float L_363 = L_362.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_364;
		L_364 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_361, L_363, NULL);
		float L_365 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_366;
		L_366 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_364, L_365, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_367;
		L_367 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_360, L_366, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_368 = ___xDir2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_369 = ___tiling4;
		float L_370 = L_369.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_371;
		L_371 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_368, L_370, NULL);
		float L_372 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_373;
		L_373 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_371, L_372, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_374;
		L_374 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_367, L_373, NULL);
		NullCheck(L_359);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_359, L_374, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// vertices.Add(startPoint + yDir * tiling.y * ySections + xDir * size.x);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_375;
		L_375 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_376 = ___startPoint0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_377 = ___yDir3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_378 = ___tiling4;
		float L_379 = L_378.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_380;
		L_380 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_377, L_379, NULL);
		float L_381 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_382;
		L_382 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_380, L_381, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_383;
		L_383 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_376, L_382, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_384 = ___xDir2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_385 = ___size1;
		float L_386 = L_385.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_387;
		L_387 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_384, L_386, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_388;
		L_388 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_383, L_387, NULL);
		NullCheck(L_375);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_375, L_388, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// vertices.Add(startPoint + yDir * size.y + xDir * tiling.x * xSections);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_389;
		L_389 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_390 = ___startPoint0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_391 = ___yDir3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_392 = ___size1;
		float L_393 = L_392.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_394;
		L_394 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_391, L_393, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_395;
		L_395 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_390, L_394, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_396 = ___xDir2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_397 = ___tiling4;
		float L_398 = L_397.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_399;
		L_399 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_396, L_398, NULL);
		float L_400 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_401;
		L_401 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_399, L_400, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_402;
		L_402 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_395, L_401, NULL);
		NullCheck(L_389);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_389, L_402, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// vertices.Add(startPoint + yDir * size.y + xDir * size.x);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_403;
		L_403 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_404 = ___startPoint0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_405 = ___yDir3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_406 = ___size1;
		float L_407 = L_406.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_408;
		L_408 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_405, L_407, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_409;
		L_409 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_404, L_408, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_410 = ___xDir2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_411 = ___size1;
		float L_412 = L_411.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_413;
		L_413 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_410, L_412, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_414;
		L_414 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_409, L_413, NULL);
		NullCheck(L_403);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_403, L_414, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// trisToAdd = new int[] { vertCount, vertCount + 1, vertCount + 2, vertCount + 1, vertCount + 3, vertCount + 2 };
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_415 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)6);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_416 = L_415;
		int32_t L_417 = V_4;
		NullCheck(L_416);
		(L_416)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_417);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_418 = L_416;
		int32_t L_419 = V_4;
		NullCheck(L_418);
		(L_418)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)il2cpp_codegen_add(L_419, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_420 = L_418;
		int32_t L_421 = V_4;
		NullCheck(L_420);
		(L_420)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)il2cpp_codegen_add(L_421, 2)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_422 = L_420;
		int32_t L_423 = V_4;
		NullCheck(L_422);
		(L_422)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)((int32_t)il2cpp_codegen_add(L_423, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_424 = L_422;
		int32_t L_425 = V_4;
		NullCheck(L_424);
		(L_424)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)((int32_t)il2cpp_codegen_add(L_425, 3)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_426 = L_424;
		int32_t L_427 = V_4;
		NullCheck(L_426);
		(L_426)->SetAt(static_cast<il2cpp_array_size_t>(5), (int32_t)((int32_t)il2cpp_codegen_add(L_427, 2)));
		V_5 = L_426;
		// if (flipTris)
		bool L_428 = ___flipTris6;
		if (!L_428)
		{
			goto IL_07cb;
		}
	}
	{
		// trisToAdd = trisToAdd.ReverseOrder();
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_429 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_430;
		L_430 = ExtensionMethods_ReverseOrder_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED506DA2408D7FE17CD8457EC3D25CFCF46BB762(L_429, ExtensionMethods_ReverseOrder_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED506DA2408D7FE17CD8457EC3D25CFCF46BB762_RuntimeMethod_var);
		V_5 = L_430;
	}

IL_07cb:
	{
		// tris.AddRange(trisToAdd);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_431 = ___tris5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_432 = V_5;
		NullCheck(L_431);
		List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204(L_431, (RuntimeObject*)L_432, List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204_RuntimeMethod_var);
		// uvs.AddRange(new Vector2[] {
		//             new Vector2(invertUVX ? endUVX : 0, invertUVY ? 1 : 0),
		//             new Vector2(invertUVX ? 0 : endUVX, invertUVY ? 1: 0),
		//             new Vector2(invertUVX ? endUVX : 0, invertUVY ? 1 - endUVY  : endUVY),
		//             new Vector2(invertUVX ? 0 : endUVX, invertUVY ? 1 - endUVY : endUVY)});
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_433 = __this->___uvs_16;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_434 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_435 = L_434;
		bool L_436 = ___invertUVX7;
		G_B101_0 = 0;
		G_B101_1 = L_435;
		G_B101_2 = L_435;
		G_B101_3 = L_433;
		if (L_436)
		{
			G_B102_0 = 0;
			G_B102_1 = L_435;
			G_B102_2 = L_435;
			G_B102_3 = L_433;
			goto IL_07ed;
		}
	}
	{
		G_B103_0 = (0.0f);
		G_B103_1 = G_B101_0;
		G_B103_2 = G_B101_1;
		G_B103_3 = G_B101_2;
		G_B103_4 = G_B101_3;
		goto IL_07ee;
	}

IL_07ed:
	{
		float L_437 = V_2;
		G_B103_0 = L_437;
		G_B103_1 = G_B102_0;
		G_B103_2 = G_B102_1;
		G_B103_3 = G_B102_2;
		G_B103_4 = G_B102_3;
	}

IL_07ee:
	{
		bool L_438 = ___invertUVY8;
		G_B104_0 = G_B103_0;
		G_B104_1 = G_B103_1;
		G_B104_2 = G_B103_2;
		G_B104_3 = G_B103_3;
		G_B104_4 = G_B103_4;
		if (L_438)
		{
			G_B105_0 = G_B103_0;
			G_B105_1 = G_B103_1;
			G_B105_2 = G_B103_2;
			G_B105_3 = G_B103_3;
			G_B105_4 = G_B103_4;
			goto IL_07f5;
		}
	}
	{
		G_B106_0 = 0;
		G_B106_1 = G_B104_0;
		G_B106_2 = G_B104_1;
		G_B106_3 = G_B104_2;
		G_B106_4 = G_B104_3;
		G_B106_5 = G_B104_4;
		goto IL_07f6;
	}

IL_07f5:
	{
		G_B106_0 = 1;
		G_B106_1 = G_B105_0;
		G_B106_2 = G_B105_1;
		G_B106_3 = G_B105_2;
		G_B106_4 = G_B105_3;
		G_B106_5 = G_B105_4;
	}

IL_07f6:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_439;
		memset((&L_439), 0, sizeof(L_439));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_439), G_B106_1, ((float)G_B106_0), /*hidden argument*/NULL);
		NullCheck(G_B106_3);
		(G_B106_3)->SetAt(static_cast<il2cpp_array_size_t>(G_B106_2), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_439);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_440 = G_B106_4;
		bool L_441 = ___invertUVX7;
		G_B107_0 = 1;
		G_B107_1 = L_440;
		G_B107_2 = L_440;
		G_B107_3 = G_B106_5;
		if (L_441)
		{
			G_B108_0 = 1;
			G_B108_1 = L_440;
			G_B108_2 = L_440;
			G_B108_3 = G_B106_5;
			goto IL_080a;
		}
	}
	{
		float L_442 = V_2;
		G_B109_0 = L_442;
		G_B109_1 = G_B107_0;
		G_B109_2 = G_B107_1;
		G_B109_3 = G_B107_2;
		G_B109_4 = G_B107_3;
		goto IL_080f;
	}

IL_080a:
	{
		G_B109_0 = (0.0f);
		G_B109_1 = G_B108_0;
		G_B109_2 = G_B108_1;
		G_B109_3 = G_B108_2;
		G_B109_4 = G_B108_3;
	}

IL_080f:
	{
		bool L_443 = ___invertUVY8;
		G_B110_0 = G_B109_0;
		G_B110_1 = G_B109_1;
		G_B110_2 = G_B109_2;
		G_B110_3 = G_B109_3;
		G_B110_4 = G_B109_4;
		if (L_443)
		{
			G_B111_0 = G_B109_0;
			G_B111_1 = G_B109_1;
			G_B111_2 = G_B109_2;
			G_B111_3 = G_B109_3;
			G_B111_4 = G_B109_4;
			goto IL_0816;
		}
	}
	{
		G_B112_0 = 0;
		G_B112_1 = G_B110_0;
		G_B112_2 = G_B110_1;
		G_B112_3 = G_B110_2;
		G_B112_4 = G_B110_3;
		G_B112_5 = G_B110_4;
		goto IL_0817;
	}

IL_0816:
	{
		G_B112_0 = 1;
		G_B112_1 = G_B111_0;
		G_B112_2 = G_B111_1;
		G_B112_3 = G_B111_2;
		G_B112_4 = G_B111_3;
		G_B112_5 = G_B111_4;
	}

IL_0817:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_444;
		memset((&L_444), 0, sizeof(L_444));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_444), G_B112_1, ((float)G_B112_0), /*hidden argument*/NULL);
		NullCheck(G_B112_3);
		(G_B112_3)->SetAt(static_cast<il2cpp_array_size_t>(G_B112_2), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_444);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_445 = G_B112_4;
		bool L_446 = ___invertUVX7;
		G_B113_0 = 2;
		G_B113_1 = L_445;
		G_B113_2 = L_445;
		G_B113_3 = G_B112_5;
		if (L_446)
		{
			G_B114_0 = 2;
			G_B114_1 = L_445;
			G_B114_2 = L_445;
			G_B114_3 = G_B112_5;
			goto IL_082f;
		}
	}
	{
		G_B115_0 = (0.0f);
		G_B115_1 = G_B113_0;
		G_B115_2 = G_B113_1;
		G_B115_3 = G_B113_2;
		G_B115_4 = G_B113_3;
		goto IL_0830;
	}

IL_082f:
	{
		float L_447 = V_2;
		G_B115_0 = L_447;
		G_B115_1 = G_B114_0;
		G_B115_2 = G_B114_1;
		G_B115_3 = G_B114_2;
		G_B115_4 = G_B114_3;
	}

IL_0830:
	{
		bool L_448 = ___invertUVY8;
		G_B116_0 = G_B115_0;
		G_B116_1 = G_B115_1;
		G_B116_2 = G_B115_2;
		G_B116_3 = G_B115_3;
		G_B116_4 = G_B115_4;
		if (L_448)
		{
			G_B117_0 = G_B115_0;
			G_B117_1 = G_B115_1;
			G_B117_2 = G_B115_2;
			G_B117_3 = G_B115_3;
			G_B117_4 = G_B115_4;
			goto IL_0837;
		}
	}
	{
		float L_449 = V_3;
		G_B118_0 = L_449;
		G_B118_1 = G_B116_0;
		G_B118_2 = G_B116_1;
		G_B118_3 = G_B116_2;
		G_B118_4 = G_B116_3;
		G_B118_5 = G_B116_4;
		goto IL_083e;
	}

IL_0837:
	{
		float L_450 = V_3;
		G_B118_0 = ((float)il2cpp_codegen_subtract((1.0f), L_450));
		G_B118_1 = G_B117_0;
		G_B118_2 = G_B117_1;
		G_B118_3 = G_B117_2;
		G_B118_4 = G_B117_3;
		G_B118_5 = G_B117_4;
	}

IL_083e:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_451;
		memset((&L_451), 0, sizeof(L_451));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_451), G_B118_1, G_B118_0, /*hidden argument*/NULL);
		NullCheck(G_B118_3);
		(G_B118_3)->SetAt(static_cast<il2cpp_array_size_t>(G_B118_2), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_451);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_452 = G_B118_4;
		bool L_453 = ___invertUVX7;
		G_B119_0 = 3;
		G_B119_1 = L_452;
		G_B119_2 = L_452;
		G_B119_3 = G_B118_5;
		if (L_453)
		{
			G_B120_0 = 3;
			G_B120_1 = L_452;
			G_B120_2 = L_452;
			G_B120_3 = G_B118_5;
			goto IL_0851;
		}
	}
	{
		float L_454 = V_2;
		G_B121_0 = L_454;
		G_B121_1 = G_B119_0;
		G_B121_2 = G_B119_1;
		G_B121_3 = G_B119_2;
		G_B121_4 = G_B119_3;
		goto IL_0856;
	}

IL_0851:
	{
		G_B121_0 = (0.0f);
		G_B121_1 = G_B120_0;
		G_B121_2 = G_B120_1;
		G_B121_3 = G_B120_2;
		G_B121_4 = G_B120_3;
	}

IL_0856:
	{
		bool L_455 = ___invertUVY8;
		G_B122_0 = G_B121_0;
		G_B122_1 = G_B121_1;
		G_B122_2 = G_B121_2;
		G_B122_3 = G_B121_3;
		G_B122_4 = G_B121_4;
		if (L_455)
		{
			G_B123_0 = G_B121_0;
			G_B123_1 = G_B121_1;
			G_B123_2 = G_B121_2;
			G_B123_3 = G_B121_3;
			G_B123_4 = G_B121_4;
			goto IL_085d;
		}
	}
	{
		float L_456 = V_3;
		G_B124_0 = L_456;
		G_B124_1 = G_B122_0;
		G_B124_2 = G_B122_1;
		G_B124_3 = G_B122_2;
		G_B124_4 = G_B122_3;
		G_B124_5 = G_B122_4;
		goto IL_0864;
	}

IL_085d:
	{
		float L_457 = V_3;
		G_B124_0 = ((float)il2cpp_codegen_subtract((1.0f), L_457));
		G_B124_1 = G_B123_0;
		G_B124_2 = G_B123_1;
		G_B124_3 = G_B123_2;
		G_B124_4 = G_B123_3;
		G_B124_5 = G_B123_4;
	}

IL_0864:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_458;
		memset((&L_458), 0, sizeof(L_458));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_458), G_B124_1, G_B124_0, /*hidden argument*/NULL);
		NullCheck(G_B124_3);
		(G_B124_3)->SetAt(static_cast<il2cpp_array_size_t>(G_B124_2), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_458);
		NullCheck(G_B124_5);
		List_1_AddRange_m79CB520C0C1362FE97CA8619B6B59F18E80349BC(G_B124_5, (RuntimeObject*)G_B124_4, List_1_AddRange_m79CB520C0C1362FE97CA8619B6B59F18E80349BC_RuntimeMethod_var);
		// for (int i = 0; i < 4; i++)
		V_13 = 0;
		goto IL_088b;
	}

IL_0878:
	{
		// normals.Add(normal);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_459 = __this->___normals_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_460 = V_6;
		NullCheck(L_459);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_459, L_460, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// for (int i = 0; i < 4; i++)
		int32_t L_461 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_461, 1));
	}

IL_088b:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_462 = V_13;
		if ((((int32_t)L_462) < ((int32_t)4)))
		{
			goto IL_0878;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PropMaker.Prop::AddMesh(UnityEngine.Mesh,System.Collections.Generic.List`1<System.Int32>,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Prop_AddMesh_mD8B5F785F92AA3B6A0CDFD4C33201EA932E9EE74 (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___tris1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale3, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m79CB520C0C1362FE97CA8619B6B59F18E80349BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// Vector3[] vertices = mesh.vertices;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = ___mesh0;
		NullCheck(L_0);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1;
		L_1 = Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9(L_0, NULL);
		V_0 = L_1;
		// int vertCount = this.vertices.Count;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2;
		L_2 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_2, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		V_1 = L_3;
		// for (int i = 0; i < mesh.vertices.Length; i++)
		V_4 = 0;
		goto IL_0072;
	}

IL_0018:
	{
		// vertices[i] = mesh.vertices[i];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		int32_t L_5 = V_4;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_6 = ___mesh0;
		NullCheck(L_6);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7;
		L_7 = Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9(L_6, NULL);
		int32_t L_8 = V_4;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_10);
		// vertices[i].Scale(scale);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___scale3;
		Vector3_Scale_mE0DC2C1B7902271788591F17DBE7F7F72EC37283_inline(((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12))), L_13, NULL);
		// vertices[i] = orientation * vertices[i];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_14 = V_0;
		int32_t L_15 = V_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___orientation4;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_16, L_20, NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_21);
		// vertices[i] += position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_22 = V_0;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = ___position2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_25, L_26, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_24 = L_27;
		// for (int i = 0; i < mesh.vertices.Length; i++)
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0072:
	{
		// for (int i = 0; i < mesh.vertices.Length; i++)
		int32_t L_29 = V_4;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_30 = ___mesh0;
		NullCheck(L_30);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_31;
		L_31 = Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9(L_30, NULL);
		NullCheck(L_31);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))))
		{
			goto IL_0018;
		}
	}
	{
		// this.vertices.AddRange(vertices);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_32;
		L_32 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_33 = V_0;
		NullCheck(L_32);
		List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE(L_32, (RuntimeObject*)L_33, List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE_RuntimeMethod_var);
		// int[] trisToAdd = mesh.triangles;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_34 = ___mesh0;
		NullCheck(L_34);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35;
		L_35 = Mesh_get_triangles_m33E39B4A383CC613C760FA7E297AC417A433F24B(L_34, NULL);
		V_2 = L_35;
		// for (int i = 0; i < trisToAdd.Length; i++)
		V_5 = 0;
		goto IL_00a9;
	}

IL_0096:
	{
		// trisToAdd[i] += vertCount;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_2;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		int32_t* L_38 = ((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)));
		int32_t L_39 = *((int32_t*)L_38);
		int32_t L_40 = V_1;
		*((int32_t*)L_38) = (int32_t)((int32_t)il2cpp_codegen_add(L_39, L_40));
		// for (int i = 0; i < trisToAdd.Length; i++)
		int32_t L_41 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00a9:
	{
		// for (int i = 0; i < trisToAdd.Length; i++)
		int32_t L_42 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_2;
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length)))))
		{
			goto IL_0096;
		}
	}
	{
		// tris.AddRange(trisToAdd);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_44 = ___tris1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = V_2;
		NullCheck(L_44);
		List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204(L_44, (RuntimeObject*)L_45, List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204_RuntimeMethod_var);
		// Vector3[] normals = new Vector3[mesh.normals.Length];
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_46 = ___mesh0;
		NullCheck(L_46);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_47;
		L_47 = Mesh_get_normals_m2B6B159B799E6E235EA651FCAB2E18EE5B18ED62(L_46, NULL);
		NullCheck(L_47);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_48 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_47)->max_length)));
		V_3 = L_48;
		// for (int i = 0; i < normals.Length; i++)
		V_6 = 0;
		goto IL_00ec;
	}

IL_00ca:
	{
		// normals[i] = orientation * mesh.normals[i];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_49 = V_3;
		int32_t L_50 = V_6;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_51 = ___orientation4;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_52 = ___mesh0;
		NullCheck(L_52);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_53;
		L_53 = Mesh_get_normals_m2B6B159B799E6E235EA651FCAB2E18EE5B18ED62(L_52, NULL);
		int32_t L_54 = V_6;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_51, L_56, NULL);
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(L_50), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_57);
		// for (int i = 0; i < normals.Length; i++)
		int32_t L_58 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_58, 1));
	}

IL_00ec:
	{
		// for (int i = 0; i < normals.Length; i++)
		int32_t L_59 = V_6;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_60 = V_3;
		NullCheck(L_60);
		if ((((int32_t)L_59) < ((int32_t)((int32_t)(((RuntimeArray*)L_60)->max_length)))))
		{
			goto IL_00ca;
		}
	}
	{
		// this.normals.AddRange(normals);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_61 = __this->___normals_15;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_62 = V_3;
		NullCheck(L_61);
		List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE(L_61, (RuntimeObject*)L_62, List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE_RuntimeMethod_var);
		// uvs.AddRange(mesh.uv);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_63 = __this->___uvs_16;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_64 = ___mesh0;
		NullCheck(L_64);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_65;
		L_65 = Mesh_get_uv_mA47805C48AB3493FF3727922C43E77880E73519F(L_64, NULL);
		NullCheck(L_63);
		List_1_AddRange_m79CB520C0C1362FE97CA8619B6B59F18E80349BC(L_63, (RuntimeObject*)L_65, List_1_AddRange_m79CB520C0C1362FE97CA8619B6B59F18E80349BC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void PropMaker.Prop::AddMesh(UnityEngine.Mesh,System.Collections.Generic.List`1<System.Int32>,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Prop_AddMesh_mD90A87B359893CBE20599F2C322BA10DDEA0BD68 (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___tris1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m79CB520C0C1362FE97CA8619B6B59F18E80349BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// Vector3[] vertices = mesh.vertices;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = ___mesh0;
		NullCheck(L_0);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1;
		L_1 = Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9(L_0, NULL);
		V_0 = L_1;
		// int vertCount = this.vertices.Count;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2;
		L_2 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_2, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		V_1 = L_3;
		// for (int i = 0; i < mesh.vertices.Length; i++)
		V_3 = 0;
		goto IL_0054;
	}

IL_0017:
	{
		// vertices[i] = mesh.vertices[i];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		int32_t L_5 = V_3;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_6 = ___mesh0;
		NullCheck(L_6);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7;
		L_7 = Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9(L_6, NULL);
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_10);
		// vertices[i].Scale(scale);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = V_0;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___scale3;
		Vector3_Scale_mE0DC2C1B7902271788591F17DBE7F7F72EC37283_inline(((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12))), L_13, NULL);
		// vertices[i] += position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_14 = V_0;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___position2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_17, L_18, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_16 = L_19;
		// for (int i = 0; i < mesh.vertices.Length; i++)
		int32_t L_20 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0054:
	{
		// for (int i = 0; i < mesh.vertices.Length; i++)
		int32_t L_21 = V_3;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_22 = ___mesh0;
		NullCheck(L_22);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_23;
		L_23 = Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9(L_22, NULL);
		NullCheck(L_23);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		// this.vertices.AddRange(vertices);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_24;
		L_24 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_25 = V_0;
		NullCheck(L_24);
		List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE(L_24, (RuntimeObject*)L_25, List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE_RuntimeMethod_var);
		// int[] trisToAdd = mesh.triangles;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_26 = ___mesh0;
		NullCheck(L_26);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27;
		L_27 = Mesh_get_triangles_m33E39B4A383CC613C760FA7E297AC417A433F24B(L_26, NULL);
		V_2 = L_27;
		// for (int i = 0; i < trisToAdd.Length; i++)
		V_4 = 0;
		goto IL_008a;
	}

IL_0077:
	{
		// trisToAdd[i] += vertCount;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = V_2;
		int32_t L_29 = V_4;
		NullCheck(L_28);
		int32_t* L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)));
		int32_t L_31 = *((int32_t*)L_30);
		int32_t L_32 = V_1;
		*((int32_t*)L_30) = (int32_t)((int32_t)il2cpp_codegen_add(L_31, L_32));
		// for (int i = 0; i < trisToAdd.Length; i++)
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_008a:
	{
		// for (int i = 0; i < trisToAdd.Length; i++)
		int32_t L_34 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_2;
		NullCheck(L_35);
		if ((((int32_t)L_34) < ((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)))))
		{
			goto IL_0077;
		}
	}
	{
		// tris.AddRange(trisToAdd);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_36 = ___tris1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_2;
		NullCheck(L_36);
		List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204(L_36, (RuntimeObject*)L_37, List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204_RuntimeMethod_var);
		// normals.AddRange(mesh.normals);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_38 = __this->___normals_15;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_39 = ___mesh0;
		NullCheck(L_39);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_40;
		L_40 = Mesh_get_normals_m2B6B159B799E6E235EA651FCAB2E18EE5B18ED62(L_39, NULL);
		NullCheck(L_38);
		List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE(L_38, (RuntimeObject*)L_40, List_1_AddRange_m5074E49FED0A20D75EEBFEF32BD7C59CBB6F0FEE_RuntimeMethod_var);
		// uvs.AddRange(mesh.uv);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_41 = __this->___uvs_16;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_42 = ___mesh0;
		NullCheck(L_42);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_43;
		L_43 = Mesh_get_uv_mA47805C48AB3493FF3727922C43E77880E73519F(L_42, NULL);
		NullCheck(L_41);
		List_1_AddRange_m79CB520C0C1362FE97CA8619B6B59F18E80349BC(L_41, (RuntimeObject*)L_43, List_1_AddRange_m79CB520C0C1362FE97CA8619B6B59F18E80349BC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void PropMaker.Prop::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Prop__ctor_m11AF1C48E48741D916C89D5FA50B9486C619C173 (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool autoUpdate = true; //Call UpdateBridge() when a change is made?
		__this->___autoUpdate_5 = (bool)1;
		// public List<Vector3> vertices { get; protected set; } = new List<Vector3>(); //All vertices in the mesh.
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_0, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		__this->___U3CverticesU3Ek__BackingField_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CverticesU3Ek__BackingField_14), (void*)L_0);
		// protected List<Vector3> normals = new List<Vector3>(); //All normal vectors.
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_1 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_1, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		__this->___normals_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___normals_15), (void*)L_1);
		// protected List<Vector2> uvs = new List<Vector2>(); //UV0.
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_2 = (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*)il2cpp_codegen_object_new(List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F(L_2, List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_RuntimeMethod_var);
		__this->___uvs_16 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___uvs_16), (void*)L_2);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void PropMaker.Prop::<CreateCube>g__SetFace|34_0(PropMaker.Prop/<>c__DisplayClass34_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Prop_U3CCreateCubeU3Eg__SetFaceU7C34_0_m1289086EC068594090CC0D82346399588E75890D (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, U3CU3Ec__DisplayClass34_0_t1F72DEE1570BD43E5809F6FFF9EE824D98F56513* p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int vert = vertices.Count;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0;
		L_0 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_0, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		V_0 = L_1;
		// tris.Add(vert - 4);
		U3CU3Ec__DisplayClass34_0_t1F72DEE1570BD43E5809F6FFF9EE824D98F56513* L_2 = p0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3 = L_2->___tris_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_3, ((int32_t)il2cpp_codegen_subtract(L_4, 4)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vert - 3);
		U3CU3Ec__DisplayClass34_0_t1F72DEE1570BD43E5809F6FFF9EE824D98F56513* L_5 = p0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_6 = L_5->___tris_1;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_6, ((int32_t)il2cpp_codegen_subtract(L_7, 3)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vert - 2);
		U3CU3Ec__DisplayClass34_0_t1F72DEE1570BD43E5809F6FFF9EE824D98F56513* L_8 = p0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_9 = L_8->___tris_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_9, ((int32_t)il2cpp_codegen_subtract(L_10, 2)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vert - 3);
		U3CU3Ec__DisplayClass34_0_t1F72DEE1570BD43E5809F6FFF9EE824D98F56513* L_11 = p0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_12 = L_11->___tris_1;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_12, ((int32_t)il2cpp_codegen_subtract(L_13, 3)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vert - 1);
		U3CU3Ec__DisplayClass34_0_t1F72DEE1570BD43E5809F6FFF9EE824D98F56513* L_14 = p0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_15 = L_14->___tris_1;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_15, ((int32_t)il2cpp_codegen_subtract(L_16, 1)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vert - 2);
		U3CU3Ec__DisplayClass34_0_t1F72DEE1570BD43E5809F6FFF9EE824D98F56513* L_17 = p0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_18 = L_17->___tris_1;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_18, ((int32_t)il2cpp_codegen_subtract(L_19, 2)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void PropMaker.Prop::<Create4FaceCube>g__SetFace|35_0(PropMaker.Prop/<>c__DisplayClass35_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Prop_U3CCreate4FaceCubeU3Eg__SetFaceU7C35_0_mEB799106422B27FC5D37919F9E1C082A486E458F (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, U3CU3Ec__DisplayClass35_0_tA91CB26E915E1C611D280EB5800FE8AD144EFEEA* p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int vert = vertices.Count;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0;
		L_0 = Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_0, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		V_0 = L_1;
		// tris.Add(vert - 4);
		U3CU3Ec__DisplayClass35_0_tA91CB26E915E1C611D280EB5800FE8AD144EFEEA* L_2 = p0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3 = L_2->___tris_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_3, ((int32_t)il2cpp_codegen_subtract(L_4, 4)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vert - 3);
		U3CU3Ec__DisplayClass35_0_tA91CB26E915E1C611D280EB5800FE8AD144EFEEA* L_5 = p0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_6 = L_5->___tris_1;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_6, ((int32_t)il2cpp_codegen_subtract(L_7, 3)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vert - 2);
		U3CU3Ec__DisplayClass35_0_tA91CB26E915E1C611D280EB5800FE8AD144EFEEA* L_8 = p0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_9 = L_8->___tris_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_9, ((int32_t)il2cpp_codegen_subtract(L_10, 2)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vert - 3);
		U3CU3Ec__DisplayClass35_0_tA91CB26E915E1C611D280EB5800FE8AD144EFEEA* L_11 = p0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_12 = L_11->___tris_1;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_12, ((int32_t)il2cpp_codegen_subtract(L_13, 3)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vert - 1);
		U3CU3Ec__DisplayClass35_0_tA91CB26E915E1C611D280EB5800FE8AD144EFEEA* L_14 = p0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_15 = L_14->___tris_1;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_15, ((int32_t)il2cpp_codegen_subtract(L_16, 1)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(vert - 2);
		U3CU3Ec__DisplayClass35_0_tA91CB26E915E1C611D280EB5800FE8AD144EFEEA* L_17 = p0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_18 = L_17->___tris_1;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_18, ((int32_t)il2cpp_codegen_subtract(L_19, 2)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Parabola_get_a_m45657B88E4858AB7B90EEC89388F69ACA341E1DD_inline (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, const RuntimeMethod* method) 
{
	{
		// public float a { get; private set; }
		float L_0 = __this->___U3CaU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Parabola_set_a_m93234FDAFF2059B499CEC330BB682A802583526B_inline (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float a { get; private set; }
		float L_0 = ___value0;
		__this->___U3CaU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Parabola_get_b_m06FC4C4FC4136097B8BF0313413B497537BD1FB0_inline (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, const RuntimeMethod* method) 
{
	{
		// public float b { get; private set; }
		float L_0 = __this->___U3CbU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Parabola_set_b_m9A9E83C230FEE06963971E2D935587620EBF3380_inline (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float b { get; private set; }
		float L_0 = ___value0;
		__this->___U3CbU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Parabola_get_c_m5AD3671CEE18CCAFBDD327392760C595BB315FA2_inline (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, const RuntimeMethod* method) 
{
	{
		// public float c { get; private set; }
		float L_0 = __this->___U3CcU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Parabola_set_c_mAF6F75BA41324AD4C3A56625F2666792E3FE44C3_inline (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float c { get; private set; }
		float L_0 = ___value0;
		__this->___U3CcU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Parabola_get_Height_m1F7CD2074EB90BA935E1E8CCEB06990812E143E4_inline (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, const RuntimeMethod* method) 
{
	{
		// public float Height => height;
		float L_0 = __this->___height_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Parabola_get_Angle_m4E391DC7D8343F68AC9FD5D59D3D68F4EEE88C05_inline (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, const RuntimeMethod* method) 
{
	{
		// public float Angle => angle;
		float L_0 = __this->___angle_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Parabola_get_GroundDistance_m74A67B47F8979477CA6AD697A16114C18689209F_inline (Parabola_t374F318FDB112292F0E8AD18EF9E08D8EEC29877* __this, const RuntimeMethod* method) 
{
	{
		// public float GroundDistance => gndDst;
		float L_0 = __this->___gndDst_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___f0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___f0;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))));
		V_2 = ((float)L_12);
		goto IL_002e;
	}

IL_002e:
	{
		float L_13 = V_2;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___from0), NULL);
		float L_1;
		L_1 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___to1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___from0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___to1;
		float L_7;
		L_7 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___lhs0;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___rhs1;
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___lhs0;
		float L_17 = L_16.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___rhs1;
		float L_19 = L_18.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___lhs0;
		float L_21 = L_20.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___rhs1;
		float L_23 = L_22.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_005a;
	}

IL_005a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___oneVector_3;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* Prop_get_vertices_m3F14863B9E1B5A9483C8005DC6FFDB5A1B6717D7_inline (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, const RuntimeMethod* method) 
{
	{
		// public List<Vector3> vertices { get; protected set; } = new List<Vector3>(); //All vertices in the mesh.
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = __this->___U3CverticesU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* Prop_get_mesh_m7ACDC9F94B55D786428742581160D36AACBA7E57_inline (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, const RuntimeMethod* method) 
{
	{
		// public Mesh mesh { get; protected set; }
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = __this->___U3CmeshU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* Prop_get_meshFilter_mB45F1C5BDFA3B615229CB1BFB362E4F763EE142A_inline (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, const RuntimeMethod* method) 
{
	{
		// public MeshFilter meshFilter { get; protected set; }
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0 = __this->___U3CmeshFilterU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* Prop_get_meshCollider_mC9BB81EB39E87F3AEB088BBA2C1DCCBC5C5088D0_inline (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, const RuntimeMethod* method) 
{
	{
		// public MeshCollider meshCollider { get; protected set; }
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_0 = __this->___U3CmeshColliderU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Prop_set_mesh_m55D410E9666D62CCD6C5EAA6B21635C9FE343A67_inline (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) 
{
	{
		// public Mesh mesh { get; protected set; }
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = ___value0;
		__this->___U3CmeshU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmeshU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Prop_set_meshFilter_m64B146E400C50487464E99044FE8CE5E3ECBD1E4_inline (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___value0, const RuntimeMethod* method) 
{
	{
		// public MeshFilter meshFilter { get; protected set; }
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0 = ___value0;
		__this->___U3CmeshFilterU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmeshFilterU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Prop_get_meshRenderer_mAB716A3E4C2A034AFA6BC5440F5ACA583EAF48C4_inline (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, const RuntimeMethod* method) 
{
	{
		// public MeshRenderer meshRenderer { get; protected set; }
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->___U3CmeshRendererU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Prop_set_meshRenderer_m8EE05C900BE245DB184CE00170520EF9236CBFD8_inline (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___value0, const RuntimeMethod* method) 
{
	{
		// public MeshRenderer meshRenderer { get; protected set; }
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = ___value0;
		__this->___U3CmeshRendererU3Ek__BackingField_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmeshRendererU3Ek__BackingField_12), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Prop_set_meshCollider_m8DC2D6E2D1D60AB42EF8CE1489F3B413234966EE_inline (Prop_tE5F9C57C5AD7F58AB1A25670196ADE659DE89F7E* __this, MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* ___value0, const RuntimeMethod* method) 
{
	{
		// public MeshCollider meshCollider { get; protected set; }
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_0 = ___value0;
		__this->___U3CmeshColliderU3Ek__BackingField_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmeshColliderU3Ek__BackingField_11), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_6;
		goto IL_0038;
	}

IL_002d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_7;
	}

IL_0038:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), ((float)il2cpp_codegen_multiply(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___leftVector_9;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___backVector_12;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___upVector_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___rightVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Scale_mE0DC2C1B7902271788591F17DBE7F7F72EC37283_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale0, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___scale0;
		float L_2 = L_1.___x_2;
		__this->___x_2 = ((float)il2cpp_codegen_multiply(L_0, L_2));
		float L_3 = __this->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___scale0;
		float L_5 = L_4.___y_3;
		__this->___y_3 = ((float)il2cpp_codegen_multiply(L_3, L_5));
		float L_6 = __this->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___scale0;
		float L_8 = L_7.___z_4;
		__this->___z_4 = ((float)il2cpp_codegen_multiply(L_6, L_8));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_3 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		return;
	}

IL_0034:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___item0;
		((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___item0;
		((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___item0, const RuntimeMethod* method) 
{
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_1 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_8);
		return;
	}

IL_0034:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___item0;
		((  void (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
