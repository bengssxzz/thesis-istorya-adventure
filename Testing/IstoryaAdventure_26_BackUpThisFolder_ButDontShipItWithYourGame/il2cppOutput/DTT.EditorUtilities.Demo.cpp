#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// GUIDisplayBehaviour
struct GUIDisplayBehaviour_tB965D5657D2FF769B2ADEAB8349709BF718BF791;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// SettingsScriptableObject
struct SettingsScriptableObject_t2E9E0FFD98BD6E6333E40C6CF367A1F852D882B9;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t9E3933E7809D57ACD74E24A14FC2B0857F85B9CE 
{
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

// SettingsScriptableObject/SubSetting
struct SubSetting_tAD6D64FECCCF8D562DA75C3850A7D35A94D3C500 
{
	// System.String SettingsScriptableObject/SubSetting::name
	String_t* ___name_0;
	// System.Int32 SettingsScriptableObject/SubSetting::value
	int32_t ___value_1;
};
// Native definition for P/Invoke marshalling of SettingsScriptableObject/SubSetting
struct SubSetting_tAD6D64FECCCF8D562DA75C3850A7D35A94D3C500_marshaled_pinvoke
{
	char* ___name_0;
	int32_t ___value_1;
};
// Native definition for COM marshalling of SettingsScriptableObject/SubSetting
struct SubSetting_tAD6D64FECCCF8D562DA75C3850A7D35A94D3C500_marshaled_com
{
	Il2CppChar* ___name_0;
	int32_t ___value_1;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// SettingsScriptableObject
struct SettingsScriptableObject_t2E9E0FFD98BD6E6333E40C6CF367A1F852D882B9  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String SettingsScriptableObject::_setting
	String_t* ____setting_4;
	// System.Int32 SettingsScriptableObject::_anotherSetting
	int32_t ____anotherSetting_5;
	// System.Single SettingsScriptableObject::_andAnotherSetting
	float ____andAnotherSetting_6;
	// SettingsScriptableObject/SubSetting SettingsScriptableObject::_subSetting
	SubSetting_tAD6D64FECCCF8D562DA75C3850A7D35A94D3C500 ____subSetting_7;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// GUIDisplayBehaviour
struct GUIDisplayBehaviour_tB965D5657D2FF769B2ADEAB8349709BF718BF791  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
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
// System.Void GUIDisplayBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIDisplayBehaviour__ctor_mF0F833A4FC5EAF65C0481B0E05B7115C8B88150A (GUIDisplayBehaviour_tB965D5657D2FF769B2ADEAB8349709BF718BF791* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SettingsScriptableObject::UpdateSetting(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsScriptableObject_UpdateSetting_m2EEC24075FF8D5A41A6C494E6CBF188826702E0C (SettingsScriptableObject_t2E9E0FFD98BD6E6333E40C6CF367A1F852D882B9* __this, String_t* ___newSetting0, const RuntimeMethod* method) 
{
	{
		// public void UpdateSetting(string newSetting) => _setting = newSetting;
		String_t* L_0 = ___newSetting0;
		__this->____setting_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____setting_4), (void*)L_0);
		return;
	}
}
// System.Void SettingsScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsScriptableObject__ctor_mD0937DA5F7CB0CD95BFCE5228BA36928D0448B24 (SettingsScriptableObject_t2E9E0FFD98BD6E6333E40C6CF367A1F852D882B9* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// Conversion methods for marshalling of: SettingsScriptableObject/SubSetting
IL2CPP_EXTERN_C void SubSetting_tAD6D64FECCCF8D562DA75C3850A7D35A94D3C500_marshal_pinvoke(const SubSetting_tAD6D64FECCCF8D562DA75C3850A7D35A94D3C500& unmarshaled, SubSetting_tAD6D64FECCCF8D562DA75C3850A7D35A94D3C500_marshaled_pinvoke& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___value_1 = unmarshaled.___value_1;
}
IL2CPP_EXTERN_C void SubSetting_tAD6D64FECCCF8D562DA75C3850A7D35A94D3C500_marshal_pinvoke_back(const SubSetting_tAD6D64FECCCF8D562DA75C3850A7D35A94D3C500_marshaled_pinvoke& marshaled, SubSetting_tAD6D64FECCCF8D562DA75C3850A7D35A94D3C500& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___name_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___name_0));
	int32_t unmarshaledvalue_temp_1 = 0;
	unmarshaledvalue_temp_1 = marshaled.___value_1;
	unmarshaled.___value_1 = unmarshaledvalue_temp_1;
}
// Conversion method for clean up from marshalling of: SettingsScriptableObject/SubSetting
IL2CPP_EXTERN_C void SubSetting_tAD6D64FECCCF8D562DA75C3850A7D35A94D3C500_marshal_pinvoke_cleanup(SubSetting_tAD6D64FECCCF8D562DA75C3850A7D35A94D3C500_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
}
// Conversion methods for marshalling of: SettingsScriptableObject/SubSetting
IL2CPP_EXTERN_C void SubSetting_tAD6D64FECCCF8D562DA75C3850A7D35A94D3C500_marshal_com(const SubSetting_tAD6D64FECCCF8D562DA75C3850A7D35A94D3C500& unmarshaled, SubSetting_tAD6D64FECCCF8D562DA75C3850A7D35A94D3C500_marshaled_com& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___name_0);
	marshaled.___value_1 = unmarshaled.___value_1;
}
IL2CPP_EXTERN_C void SubSetting_tAD6D64FECCCF8D562DA75C3850A7D35A94D3C500_marshal_com_back(const SubSetting_tAD6D64FECCCF8D562DA75C3850A7D35A94D3C500_marshaled_com& marshaled, SubSetting_tAD6D64FECCCF8D562DA75C3850A7D35A94D3C500& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___name_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___name_0));
	int32_t unmarshaledvalue_temp_1 = 0;
	unmarshaledvalue_temp_1 = marshaled.___value_1;
	unmarshaled.___value_1 = unmarshaledvalue_temp_1;
}
// Conversion method for clean up from marshalling of: SettingsScriptableObject/SubSetting
IL2CPP_EXTERN_C void SubSetting_tAD6D64FECCCF8D562DA75C3850A7D35A94D3C500_marshal_com_cleanup(SubSetting_tAD6D64FECCCF8D562DA75C3850A7D35A94D3C500_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___name_0);
	marshaled.___name_0 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
