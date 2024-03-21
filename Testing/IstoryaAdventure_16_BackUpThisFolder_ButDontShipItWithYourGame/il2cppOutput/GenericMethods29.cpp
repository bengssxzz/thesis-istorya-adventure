#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// ES3Internal.ES3Member[]
struct ES3MemberU5BU5D_t52275A3F6518B027F017DA4D34656490EBA17423;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// ES3Reader
struct ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A;
// ES3Settings
struct ES3Settings_t8500938678A8E9CAC90B24DD70C4C7D2E66026AB;
// ES3Types.ES3Type
struct ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687;
// ES3Types.ES3Type_Keyframe
struct ES3Type_Keyframe_tC85ECF8C5F7069C1160AD06BA141BDFC4A52351B;
// ES3Types.ES3Type_LayerMask
struct ES3Type_LayerMask_t6CD68CDACE6DC4157F17DE53DC0A25F93A4049F1;
// ES3Types.ES3Type_Light
struct ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25;
// ES3Types.ES3Type_LightsModule
struct ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813;
// ES3Types.ES3Type_LimitVelocityOverLifetimeModule
struct ES3Type_LimitVelocityOverLifetimeModule_t6B4FB2973D42A4D59A39DF90E6E7FECFE8A88F5A;
// UnityEngine.Flare
struct Flare_t9DCE15756AD8F104B1D9024509B30E46FEF124C8;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// ES3Reader/ES3ReaderPropertyEnumerator
struct ES3ReaderPropertyEnumerator_t2948B3DC88B88DF76A6ED9F660F7055F08697C37;

IL2CPP_EXTERN_C RuntimeClass* ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0328E4C169674B568EFB792EBE915956BAD34591;
IL2CPP_EXTERN_C String_t* _stringLiteral05CAACB43AE60632DFAEDD8AFD98A0C279C2A0F7;
IL2CPP_EXTERN_C String_t* _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581;
IL2CPP_EXTERN_C String_t* _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D;
IL2CPP_EXTERN_C String_t* _stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5;
IL2CPP_EXTERN_C String_t* _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6;
IL2CPP_EXTERN_C String_t* _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9;
IL2CPP_EXTERN_C String_t* _stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7;
IL2CPP_EXTERN_C String_t* _stringLiteral2AC7F98E5022908E09788532C95599452352D34A;
IL2CPP_EXTERN_C String_t* _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45;
IL2CPP_EXTERN_C String_t* _stringLiteral44B679A4FEA54FC0DBB1CECD512FC3FCFFE445F4;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62;
IL2CPP_EXTERN_C String_t* _stringLiteral4845015737DC41475709911228278216EE4DC3AF;
IL2CPP_EXTERN_C String_t* _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954;
IL2CPP_EXTERN_C String_t* _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A;
IL2CPP_EXTERN_C String_t* _stringLiteral5828D05DE5A70D7EFBBA4D58EC00343F3E9A6AB8;
IL2CPP_EXTERN_C String_t* _stringLiteral5C72E9556FB79F24E1412FC01F0728F363348949;
IL2CPP_EXTERN_C String_t* _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A;
IL2CPP_EXTERN_C String_t* _stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6;
IL2CPP_EXTERN_C String_t* _stringLiteral629998EE8A4BEB3AD2F947D3D95862F0F22227B2;
IL2CPP_EXTERN_C String_t* _stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4;
IL2CPP_EXTERN_C String_t* _stringLiteral74755E5875E97ED362B5BF8BC9FA5F7F3F45080C;
IL2CPP_EXTERN_C String_t* _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F;
IL2CPP_EXTERN_C String_t* _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914;
IL2CPP_EXTERN_C String_t* _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010;
IL2CPP_EXTERN_C String_t* _stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8;
IL2CPP_EXTERN_C String_t* _stringLiteralA5C933C3A8FFEEDCA056E433AD8C52F89A0D82D2;
IL2CPP_EXTERN_C String_t* _stringLiteralC220E5ABB03B498FA9E8AE08256C71E0C463D910;
IL2CPP_EXTERN_C String_t* _stringLiteralC54638A97A3D6853F9D015A20E04AE7EEE96CE3C;
IL2CPP_EXTERN_C String_t* _stringLiteralC960A835F875EC8DC4DAE61D11CE089EF2BF8416;
IL2CPP_EXTERN_C String_t* _stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033;
IL2CPP_EXTERN_C String_t* _stringLiteralD3DAE436D34E1BFB3B81BD5C319049A2E9F9BF3D;
IL2CPP_EXTERN_C String_t* _stringLiteralD7365A084921FB0EE98C5197247132620727BAD9;
IL2CPP_EXTERN_C String_t* _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D;
IL2CPP_EXTERN_C String_t* _stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956;
IL2CPP_EXTERN_C String_t* _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2;
IL2CPP_EXTERN_C String_t* _stringLiteralEFE5CC21BFBE09498A868CDF341E3DD037864F0B;
IL2CPP_EXTERN_C String_t* _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7;
IL2CPP_EXTERN_C String_t* _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B;
IL2CPP_EXTERN_C String_t* _stringLiteralFF1FCA243EC6560E19277456101964385EA36D01;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisFlare_t9DCE15756AD8F104B1D9024509B30E46FEF124C8_mE972CC58055A042583BA075E3609A6188AE6DCE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisHideFlags_tC514182ACEFD3B847988C45D5DB812FF6DB1BF4A_m36F4D84DE5068416FE003C875121A214616DD8A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisLightRenderMode_t0F9C52310E682C737C48976769C0E84BADBD97EB_m5F980F3E354CC290BA01BFA2F0D32EA4EABB1E57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisLightShadowResolution_tA4E88BF65D850F34CC01860E921817FA81ADB268_mD90C472F1B58B88A2F197373CCCAFD6AA4B533DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisLightShadows_t5A3719FE33F8D536E5785AC42B4DF6E6F19666EA_mA919ACFFA3ADBF7FCB52FA3D0B81211E93E52F81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisLightType_t2D4D43054E7473EECEB54493C0055AE074780234_m0D05FA1C5415BD404F68BB8BB6CC92B82BF1A807_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m7EC146C35647387DD36351685C0DD1C98B6333D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisTexture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_m19A386D486F1F0E8B04AD2F6C16157FD942F593D_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Reader
struct ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A  : public RuntimeObject
{
	// ES3Settings ES3Reader::settings
	ES3Settings_t8500938678A8E9CAC90B24DD70C4C7D2E66026AB* ___settings_0;
	// System.Int32 ES3Reader::serializationDepth
	int32_t ___serializationDepth_1;
	// System.String ES3Reader::overridePropertiesName
	String_t* ___overridePropertiesName_2;
};

// ES3Types.ES3Type
struct ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687  : public RuntimeObject
{
	// ES3Internal.ES3Member[] ES3Types.ES3Type::members
	ES3MemberU5BU5D_t52275A3F6518B027F017DA4D34656490EBA17423* ___members_1;
	// System.Type ES3Types.ES3Type::type
	Type_t* ___type_2;
	// System.Boolean ES3Types.ES3Type::isPrimitive
	bool ___isPrimitive_3;
	// System.Boolean ES3Types.ES3Type::isValueType
	bool ___isValueType_4;
	// System.Boolean ES3Types.ES3Type::isCollection
	bool ___isCollection_5;
	// System.Boolean ES3Types.ES3Type::isDictionary
	bool ___isDictionary_6;
	// System.Boolean ES3Types.ES3Type::isTuple
	bool ___isTuple_7;
	// System.Boolean ES3Types.ES3Type::isEnum
	bool ___isEnum_8;
	// System.Boolean ES3Types.ES3Type::isES3TypeUnityObject
	bool ___isES3TypeUnityObject_9;
	// System.Boolean ES3Types.ES3Type::isReflectedType
	bool ___isReflectedType_10;
	// System.Boolean ES3Types.ES3Type::isUnsupported
	bool ___isUnsupported_11;
	// System.Int32 ES3Types.ES3Type::priority
	int32_t ___priority_12;
};

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

// ES3Reader/ES3ReaderPropertyEnumerator
struct ES3ReaderPropertyEnumerator_t2948B3DC88B88DF76A6ED9F660F7055F08697C37  : public RuntimeObject
{
	// ES3Reader ES3Reader/ES3ReaderPropertyEnumerator::reader
	ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader_0;
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

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// ES3Types.ES3ObjectType
struct ES3ObjectType_tBA5571367FF8C40F7D824A9710B21A69EA9DC0B9  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};

// ES3Types.ES3Type_Color
struct ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};

struct ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Color::Instance
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance_13;
};

// ES3Types.ES3Type_Keyframe
struct ES3Type_Keyframe_tC85ECF8C5F7069C1160AD06BA141BDFC4A52351B  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};

struct ES3Type_Keyframe_tC85ECF8C5F7069C1160AD06BA141BDFC4A52351B_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Keyframe::Instance
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance_13;
};

// ES3Types.ES3Type_LayerMask
struct ES3Type_LayerMask_t6CD68CDACE6DC4157F17DE53DC0A25F93A4049F1  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};

struct ES3Type_LayerMask_t6CD68CDACE6DC4157F17DE53DC0A25F93A4049F1_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_LayerMask::Instance
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance_13;
};

// ES3Types.ES3Type_LightsModule
struct ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};

struct ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_LightsModule::Instance
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance_13;
};

// ES3Types.ES3Type_LimitVelocityOverLifetimeModule
struct ES3Type_LimitVelocityOverLifetimeModule_t6B4FB2973D42A4D59A39DF90E6E7FECFE8A88F5A  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};

struct ES3Type_LimitVelocityOverLifetimeModule_t6B4FB2973D42A4D59A39DF90E6E7FECFE8A88F5A_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Instance
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance_13;
};

// ES3Types.ES3Type_MinMaxCurve
struct ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};

struct ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_MinMaxCurve::Instance
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance_13;
};

// ES3Types.ES3Type_bool
struct ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};

struct ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_bool::Instance
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance_13;
};

// ES3Types.ES3Type_float
struct ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};

struct ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_float::Instance
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance_13;
};

// ES3Types.ES3Type_int
struct ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};

struct ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_int::Instance
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance_13;
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

// UnityEngine.Keyframe
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// UnityEngine.ParticleSystem/LightsModule
struct LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/LightsModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/LightsModule
struct LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/LightsModule
struct LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule
struct LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule
struct LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule
struct LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/MinMaxCurve
struct MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 
{
	// UnityEngine.ParticleSystemCurveMode UnityEngine.ParticleSystem/MinMaxCurve::m_Mode
	int32_t ___m_Mode_0;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMultiplier
	float ___m_CurveMultiplier_1;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMin
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMin_2;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMax
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMax_3;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMin
	float ___m_ConstantMin_4;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMax
	float ___m_ConstantMax_5;
};

// ES3Types.ES3UnityObjectType
struct ES3UnityObjectType_tF653280D2691EBD1459EF886ACEA2E98FC30CAEE  : public ES3ObjectType_tBA5571367FF8C40F7D824A9710B21A69EA9DC0B9
{
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

// ES3Types.ES3ComponentType
struct ES3ComponentType_t66C6E8582E8061D09D4477097EE2869AD648F6E9  : public ES3UnityObjectType_tF653280D2691EBD1459EF886ACEA2E98FC30CAEE
{
};

// UnityEngine.Flare
struct Flare_t9DCE15756AD8F104B1D9024509B30E46FEF124C8  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// ES3Types.ES3Type_Light
struct ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25  : public ES3ComponentType_t66C6E8582E8061D09D4477097EE2869AD648F6E9
{
};

struct ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Light::Instance
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance_14;
};

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// T ES3Reader::ReadProperty<System.Single>(ES3Types.ES3Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_gshared (ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* __this, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___type0, const RuntimeMethod* method) ;

// T ES3Reader::ReadProperty<System.Single>(ES3Types.ES3Type)
inline float ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E (ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* __this, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___type0, const RuntimeMethod* method)
{
	return ((  float (*) (ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*, const RuntimeMethod*))ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_gshared)(__this, ___type0, method);
}
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_m0E7D85642F12A3DAFA1768351CC7670648C41AB2 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, float ___time0, float ___value1, float ___inTangent2, float ___outTangent3, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222 (int32_t ___intVal0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ES3Reader/ES3ReaderPropertyEnumerator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3ReaderPropertyEnumerator_GetEnumerator_mBF25A2B7B71596A1DCB090DD81E708091D1D4478 (ES3ReaderPropertyEnumerator_t2948B3DC88B88DF76A6ED9F660F7055F08697C37* __this, const RuntimeMethod* method) ;
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_type(UnityEngine.LightType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_type_m9DF0E6AC528391B1D35FA06583B9A72EAB686C43 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_color_m242F09E22904E0A20D5B032A0749678B0796A87C (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_intensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_bounceIntensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_bounceIntensity_m832ED3103EA600319F6227EDE55E5D6EBD272DB1 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_shadows(UnityEngine.LightShadows)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_shadows_mDA4D1D1958387649BD35A79D83F50549898A74CB (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_shadowStrength(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_shadowStrength_mA17F6ABA91CE032E008149D5D53FCD9B00497A4F (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_shadowResolution(UnityEngine.Rendering.LightShadowResolution)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_shadowResolution_mB1ED5718DCCA40E1AD231D145264B454543CBF07 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_shadowCustomResolution(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_shadowCustomResolution_mEB39F5DB4F4BEBB2ACC2273E28C651CE578E3502 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_shadowBias(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_shadowBias_m04C4B35A017357A5C6A26BE7098EC1CE1E1E5420 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_shadowNormalBias(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_shadowNormalBias_m855EC8B5B849E8EA60A1F2BCE09357CE4B0D755A (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_shadowNearPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_shadowNearPlane_m9105DBBC92CBB4F45401EDEA50B1DF14C9C3F01C (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_range(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_range_mBAF8E5380ECAD89A2BF43B7DA9C2DE8FA0C2FDEF (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_spotAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_spotAngle_mB27C0667B5C07771750AF66E36F2CA02D272C61B (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_cookieSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_cookieSize_m40AC9D2279340DDB66290B9C76203D6061593DD4 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_cookie(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_cookie_m42EC6CBDB1149EA8D49E36D21FDA0AD220C2C6CD (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_flare(UnityEngine.Flare)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_flare_m751C28EF5BA14643F57ECA60924D1C344F00385C (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, Flare_t9DCE15756AD8F104B1D9024509B30E46FEF124C8* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_renderMode(UnityEngine.LightRenderMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_renderMode_m31F714D8EAD8B90E9E38E3864403CD9379D9DE58 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_cullingMask(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_cullingMask_mC714832A1E2B73C72C188F9F44B50C449831C4B1 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LightsModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LightsModule::set_ratio(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LightsModule::set_useRandomDistribution(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9 (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LightsModule::set_light(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59 (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* __this, Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LightsModule::set_useParticleColor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0 (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LightsModule::set_sizeAffectsRange(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LightsModule::set_alphaAffectsIntensity(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995 (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LightsModule::set_range(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4 (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LightsModule::set_rangeMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LightsModule::set_intensity(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519 (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LightsModule::set_intensityMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8 (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LightsModule::set_maxLights(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimitVelocityOverLifetimeModule_set_enabled_m0C4AC7078A4009C764CDD6C852747161626030F8 (LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule::set_limitX(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimitVelocityOverLifetimeModule_set_limitX_m453163A173E91BD1FA92A85FFFB1377922264E88 (LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule::set_limitXMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimitVelocityOverLifetimeModule_set_limitXMultiplier_m69A35DBE2A96DB94E1C5857C1AEA7700F315FB69 (LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule::set_limitY(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimitVelocityOverLifetimeModule_set_limitY_m5C4FA3E4199843D17B358EAE552BC1530944C6ED (LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule::set_limitYMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimitVelocityOverLifetimeModule_set_limitYMultiplier_mCB16226776AA3FD95FCBFEF08939CDFCDEAD1FD7 (LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule::set_limitZ(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimitVelocityOverLifetimeModule_set_limitZ_mA7AA3F6C6EB9C1E2199DE5EDBFDFCD891E66A06C (LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule::set_limitZMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimitVelocityOverLifetimeModule_set_limitZMultiplier_mF8318B3E8798E9778CD356C773A9567EBCC414DF (LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule::set_limit(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimitVelocityOverLifetimeModule_set_limit_m4714D5E0B04EAE01A49552690E9CC206AC5C7685 (LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule::set_limitMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimitVelocityOverLifetimeModule_set_limitMultiplier_m520C77C943C30BFE63EF0E4BEA9593D251187B28 (LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule::set_dampen(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimitVelocityOverLifetimeModule_set_dampen_mE8A893ECFE936519C3F68D440C3C6BD11065E288 (LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule::set_separateAxes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimitVelocityOverLifetimeModule_set_separateAxes_m3E1D0590D45FE0D6657D99685DA4E5A231229EF0 (LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule::set_space(UnityEngine.ParticleSystemSimulationSpace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimitVelocityOverLifetimeModule_set_space_m54D13D862FCB1606F37A3F053138437DEBF773D5 (LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Object ES3Types.ES3Type_Keyframe::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Keyframe_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mFAA0F5689D6F7EF6050B2C1B58D368164C287031_gshared (ES3Type_Keyframe_tC85ECF8C5F7069C1160AD06BA141BDFC4A52351B* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new UnityEngine.Keyframe(reader.ReadProperty<System.Single>(ES3Type_float.Instance),
		//                                 reader.ReadProperty<System.Single>(ES3Type_float.Instance),
		//                                 reader.ReadProperty<System.Single>(ES3Type_float.Instance),
		//                                 reader.ReadProperty<System.Single>(ES3Type_float.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_1 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_3 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_4 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_7 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_9 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_10 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Keyframe__ctor_m0E7D85642F12A3DAFA1768351CC7670648C41AB2((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_13 = L_12;
		RuntimeObject* L_14 = Box(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Keyframe::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Keyframe_Read_TisRuntimeObject_m88A8E7DC6DB3E1DC1D59FF86519657B817613C93_gshared (ES3Type_Keyframe_tC85ECF8C5F7069C1160AD06BA141BDFC4A52351B* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new UnityEngine.Keyframe(reader.ReadProperty<System.Single>(ES3Type_float.Instance),
		//                                 reader.ReadProperty<System.Single>(ES3Type_float.Instance),
		//                                 reader.ReadProperty<System.Single>(ES3Type_float.Instance),
		//                                 reader.ReadProperty<System.Single>(ES3Type_float.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_1 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_3 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_4 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_7 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_9 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_10 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Keyframe__ctor_m0E7D85642F12A3DAFA1768351CC7670648C41AB2((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_13 = L_12;
		RuntimeObject* L_14 = Box(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Keyframe::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Keyframe_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mBCD4D773893C9FB9A47D1D5CFEF2571E5A4ED3E1_gshared (ES3Type_Keyframe_tC85ECF8C5F7069C1160AD06BA141BDFC4A52351B* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new UnityEngine.Keyframe(reader.ReadProperty<System.Single>(ES3Type_float.Instance),
		//                                 reader.ReadProperty<System.Single>(ES3Type_float.Instance),
		//                                 reader.ReadProperty<System.Single>(ES3Type_float.Instance),
		//                                 reader.ReadProperty<System.Single>(ES3Type_float.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_1 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_3 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_4 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_7 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_9 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_10 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Keyframe__ctor_m0E7D85642F12A3DAFA1768351CC7670648C41AB2((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_13 = L_12;
		RuntimeObject* L_14 = Box(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Keyframe::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Keyframe_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_mE2194CEE96580DC2F73C91CCD887FAC10AAAF7C1_gshared (ES3Type_Keyframe_tC85ECF8C5F7069C1160AD06BA141BDFC4A52351B* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new UnityEngine.Keyframe(reader.ReadProperty<System.Single>(ES3Type_float.Instance),
		//                                 reader.ReadProperty<System.Single>(ES3Type_float.Instance),
		//                                 reader.ReadProperty<System.Single>(ES3Type_float.Instance),
		//                                 reader.ReadProperty<System.Single>(ES3Type_float.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_1 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_3 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_4 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_7 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_9 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_10 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Keyframe__ctor_m0E7D85642F12A3DAFA1768351CC7670648C41AB2((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_13 = L_12;
		RuntimeObject* L_14 = Box(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Keyframe::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Keyframe_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_mE69B2066650F8DB837312B77E829C63CD7C2012D_gshared (ES3Type_Keyframe_tC85ECF8C5F7069C1160AD06BA141BDFC4A52351B* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new UnityEngine.Keyframe(reader.ReadProperty<System.Single>(ES3Type_float.Instance),
		//                                 reader.ReadProperty<System.Single>(ES3Type_float.Instance),
		//                                 reader.ReadProperty<System.Single>(ES3Type_float.Instance),
		//                                 reader.ReadProperty<System.Single>(ES3Type_float.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_1 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_3 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_4 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_7 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_9 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_10 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Keyframe__ctor_m0E7D85642F12A3DAFA1768351CC7670648C41AB2((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_13 = L_12;
		RuntimeObject* L_14 = Box(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Keyframe::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Keyframe_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m418B745F76933903E05A64D169CB951277068606_gshared (ES3Type_Keyframe_tC85ECF8C5F7069C1160AD06BA141BDFC4A52351B* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new UnityEngine.Keyframe(reader.ReadProperty<System.Single>(ES3Type_float.Instance),
		//                                 reader.ReadProperty<System.Single>(ES3Type_float.Instance),
		//                                 reader.ReadProperty<System.Single>(ES3Type_float.Instance),
		//                                 reader.ReadProperty<System.Single>(ES3Type_float.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_1 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_3 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_4 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_7 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_9 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_10 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Keyframe__ctor_m0E7D85642F12A3DAFA1768351CC7670648C41AB2((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_13 = L_12;
		RuntimeObject* L_14 = Box(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Keyframe::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Keyframe_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB1C7F99821993BDB7A8C3A9650F7B58ED1FF4C3C_gshared (ES3Type_Keyframe_tC85ECF8C5F7069C1160AD06BA141BDFC4A52351B* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new UnityEngine.Keyframe(reader.ReadProperty<System.Single>(ES3Type_float.Instance),
		//                                 reader.ReadProperty<System.Single>(ES3Type_float.Instance),
		//                                 reader.ReadProperty<System.Single>(ES3Type_float.Instance),
		//                                 reader.ReadProperty<System.Single>(ES3Type_float.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_1 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_3 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_4 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_7 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_9 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_10 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Keyframe__ctor_m0E7D85642F12A3DAFA1768351CC7670648C41AB2((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_13 = L_12;
		RuntimeObject* L_14 = Box(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Keyframe::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Keyframe_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m75D43837B123282B008C66CE544FFEF7F5A782EE_gshared (ES3Type_Keyframe_tC85ECF8C5F7069C1160AD06BA141BDFC4A52351B* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new UnityEngine.Keyframe(reader.ReadProperty<System.Single>(ES3Type_float.Instance),
		//                                 reader.ReadProperty<System.Single>(ES3Type_float.Instance),
		//                                 reader.ReadProperty<System.Single>(ES3Type_float.Instance),
		//                                 reader.ReadProperty<System.Single>(ES3Type_float.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_1 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_3 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_4 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_7 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_9 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_10 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Keyframe__ctor_m0E7D85642F12A3DAFA1768351CC7670648C41AB2((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_13 = L_12;
		RuntimeObject* L_14 = Box(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Keyframe::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Keyframe_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m98CD3687D688AEC25E86C472C73B5D54BB3F5AFB_gshared (ES3Type_Keyframe_tC85ECF8C5F7069C1160AD06BA141BDFC4A52351B* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new UnityEngine.Keyframe(reader.ReadProperty<System.Single>(ES3Type_float.Instance),
		//                                 reader.ReadProperty<System.Single>(ES3Type_float.Instance),
		//                                 reader.ReadProperty<System.Single>(ES3Type_float.Instance),
		//                                 reader.ReadProperty<System.Single>(ES3Type_float.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_1 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_3 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_4 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_7 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_9 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_10 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Keyframe__ctor_m0E7D85642F12A3DAFA1768351CC7670648C41AB2((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_13 = L_12;
		RuntimeObject* L_14 = Box(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Keyframe::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Keyframe_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m2F1BAF0B700B653DA600FD024F9993C71558AD69_gshared (ES3Type_Keyframe_tC85ECF8C5F7069C1160AD06BA141BDFC4A52351B* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new UnityEngine.Keyframe(reader.ReadProperty<System.Single>(ES3Type_float.Instance),
		//                                 reader.ReadProperty<System.Single>(ES3Type_float.Instance),
		//                                 reader.ReadProperty<System.Single>(ES3Type_float.Instance),
		//                                 reader.ReadProperty<System.Single>(ES3Type_float.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_1 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_3 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_4 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_7 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_9 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_10 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Keyframe__ctor_m0E7D85642F12A3DAFA1768351CC7670648C41AB2((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_13 = L_12;
		RuntimeObject* L_14 = Box(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Keyframe::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Keyframe_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m880510BA14B4205C60973444065F5AE6FA3EE3E4_gshared (ES3Type_Keyframe_tC85ECF8C5F7069C1160AD06BA141BDFC4A52351B* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new UnityEngine.Keyframe(reader.ReadProperty<System.Single>(ES3Type_float.Instance),
		//                                 reader.ReadProperty<System.Single>(ES3Type_float.Instance),
		//                                 reader.ReadProperty<System.Single>(ES3Type_float.Instance),
		//                                 reader.ReadProperty<System.Single>(ES3Type_float.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_1 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_3 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_4 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_7 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_9 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_10 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Keyframe__ctor_m0E7D85642F12A3DAFA1768351CC7670648C41AB2((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_13 = L_12;
		RuntimeObject* L_14 = Box(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_LayerMask::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LayerMask_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDDB78ED9E75CB7B8682DB6E7E49179517F1F3BAD_gshared (ES3Type_LayerMask_t6CD68CDACE6DC4157F17DE53DC0A25F93A4049F1* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// LayerMask instance = new LayerMask();
		il2cpp_codegen_initobj((&V_0), sizeof(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB));
		goto IL_0030;
	}

IL_000a:
	{
		String_t* L_0 = V_1;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// instance = reader.Read<int>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_2 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_3 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_2, L_3);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5;
		L_5 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_4, NULL);
		V_0 = L_5;
		// break;
		goto IL_0030;
	}

IL_002a:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_6);
	}

IL_0030:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_7 = ___reader0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_7);
		String_t* L_9 = L_8;
		V_1 = L_9;
		if (L_9)
		{
			goto IL_000a;
		}
	}
	{
		// return instance;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_10 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_11 = L_10;
		RuntimeObject* L_12 = Box(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Object ES3Types.ES3Type_LayerMask::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LayerMask_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m8358061D70616DA242B24D0B98356D99F9A86431_gshared (ES3Type_LayerMask_t6CD68CDACE6DC4157F17DE53DC0A25F93A4049F1* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// LayerMask instance = new LayerMask();
		il2cpp_codegen_initobj((&V_0), sizeof(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB));
		goto IL_0030;
	}

IL_000a:
	{
		String_t* L_0 = V_1;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// instance = reader.Read<int>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_2 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_3 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_2, L_3);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5;
		L_5 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_4, NULL);
		V_0 = L_5;
		// break;
		goto IL_0030;
	}

IL_002a:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_6);
	}

IL_0030:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_7 = ___reader0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_7);
		String_t* L_9 = L_8;
		V_1 = L_9;
		if (L_9)
		{
			goto IL_000a;
		}
	}
	{
		// return instance;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_10 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_11 = L_10;
		RuntimeObject* L_12 = Box(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Object ES3Types.ES3Type_LayerMask::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LayerMask_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6788BCBF7BB238F3CF974026FB39616F6ECE45A6_gshared (ES3Type_LayerMask_t6CD68CDACE6DC4157F17DE53DC0A25F93A4049F1* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// LayerMask instance = new LayerMask();
		il2cpp_codegen_initobj((&V_0), sizeof(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB));
		goto IL_0030;
	}

IL_000a:
	{
		String_t* L_0 = V_1;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// instance = reader.Read<int>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_2 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_3 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_2, L_3);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5;
		L_5 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_4, NULL);
		V_0 = L_5;
		// break;
		goto IL_0030;
	}

IL_002a:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_6);
	}

IL_0030:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_7 = ___reader0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_7);
		String_t* L_9 = L_8;
		V_1 = L_9;
		if (L_9)
		{
			goto IL_000a;
		}
	}
	{
		// return instance;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_10 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_11 = L_10;
		RuntimeObject* L_12 = Box(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Object ES3Types.ES3Type_LayerMask::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LayerMask_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m66E4D877B02B05772702816BA9A4D8F5495D4539_gshared (ES3Type_LayerMask_t6CD68CDACE6DC4157F17DE53DC0A25F93A4049F1* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// LayerMask instance = new LayerMask();
		il2cpp_codegen_initobj((&V_0), sizeof(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB));
		goto IL_0030;
	}

IL_000a:
	{
		String_t* L_0 = V_1;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// instance = reader.Read<int>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_2 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_3 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_2, L_3);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5;
		L_5 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_4, NULL);
		V_0 = L_5;
		// break;
		goto IL_0030;
	}

IL_002a:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_6);
	}

IL_0030:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_7 = ___reader0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_7);
		String_t* L_9 = L_8;
		V_1 = L_9;
		if (L_9)
		{
			goto IL_000a;
		}
	}
	{
		// return instance;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_10 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_11 = L_10;
		RuntimeObject* L_12 = Box(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Object ES3Types.ES3Type_LayerMask::Read<System.Int16>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LayerMask_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3A5E93EA48DA00E853AB6257A8282E130CEF1904_gshared (ES3Type_LayerMask_t6CD68CDACE6DC4157F17DE53DC0A25F93A4049F1* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// LayerMask instance = new LayerMask();
		il2cpp_codegen_initobj((&V_0), sizeof(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB));
		goto IL_0030;
	}

IL_000a:
	{
		String_t* L_0 = V_1;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// instance = reader.Read<int>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_2 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_3 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_2, L_3);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5;
		L_5 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_4, NULL);
		V_0 = L_5;
		// break;
		goto IL_0030;
	}

IL_002a:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_6);
	}

IL_0030:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_7 = ___reader0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_7);
		String_t* L_9 = L_8;
		V_1 = L_9;
		if (L_9)
		{
			goto IL_000a;
		}
	}
	{
		// return instance;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_10 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_11 = L_10;
		RuntimeObject* L_12 = Box(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Object ES3Types.ES3Type_LayerMask::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LayerMask_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E42AA45E974D0459B738DA2DE3F24D43EF498AA_gshared (ES3Type_LayerMask_t6CD68CDACE6DC4157F17DE53DC0A25F93A4049F1* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// LayerMask instance = new LayerMask();
		il2cpp_codegen_initobj((&V_0), sizeof(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB));
		goto IL_0030;
	}

IL_000a:
	{
		String_t* L_0 = V_1;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// instance = reader.Read<int>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_2 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_3 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_2, L_3);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5;
		L_5 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_4, NULL);
		V_0 = L_5;
		// break;
		goto IL_0030;
	}

IL_002a:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_6);
	}

IL_0030:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_7 = ___reader0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_7);
		String_t* L_9 = L_8;
		V_1 = L_9;
		if (L_9)
		{
			goto IL_000a;
		}
	}
	{
		// return instance;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_10 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_11 = L_10;
		RuntimeObject* L_12 = Box(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Object ES3Types.ES3Type_LayerMask::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LayerMask_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m5655D53BD40C13A5A6968D1E28D8C9F76F81E81E_gshared (ES3Type_LayerMask_t6CD68CDACE6DC4157F17DE53DC0A25F93A4049F1* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// LayerMask instance = new LayerMask();
		il2cpp_codegen_initobj((&V_0), sizeof(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB));
		goto IL_0030;
	}

IL_000a:
	{
		String_t* L_0 = V_1;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// instance = reader.Read<int>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_2 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_3 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_2, L_3);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5;
		L_5 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_4, NULL);
		V_0 = L_5;
		// break;
		goto IL_0030;
	}

IL_002a:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_6);
	}

IL_0030:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_7 = ___reader0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_7);
		String_t* L_9 = L_8;
		V_1 = L_9;
		if (L_9)
		{
			goto IL_000a;
		}
	}
	{
		// return instance;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_10 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_11 = L_10;
		RuntimeObject* L_12 = Box(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Object ES3Types.ES3Type_LayerMask::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LayerMask_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m6689737F357308E0EE014A93E57828A5C9296123_gshared (ES3Type_LayerMask_t6CD68CDACE6DC4157F17DE53DC0A25F93A4049F1* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// LayerMask instance = new LayerMask();
		il2cpp_codegen_initobj((&V_0), sizeof(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB));
		goto IL_0030;
	}

IL_000a:
	{
		String_t* L_0 = V_1;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// instance = reader.Read<int>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_2 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_3 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_2, L_3);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5;
		L_5 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_4, NULL);
		V_0 = L_5;
		// break;
		goto IL_0030;
	}

IL_002a:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_6);
	}

IL_0030:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_7 = ___reader0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_7);
		String_t* L_9 = L_8;
		V_1 = L_9;
		if (L_9)
		{
			goto IL_000a;
		}
	}
	{
		// return instance;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_10 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_11 = L_10;
		RuntimeObject* L_12 = Box(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Object ES3Types.ES3Type_LayerMask::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LayerMask_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mD51C49AFA7328CB68233BB627678F26E9C860708_gshared (ES3Type_LayerMask_t6CD68CDACE6DC4157F17DE53DC0A25F93A4049F1* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// LayerMask instance = new LayerMask();
		il2cpp_codegen_initobj((&V_0), sizeof(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB));
		goto IL_0030;
	}

IL_000a:
	{
		String_t* L_0 = V_1;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// instance = reader.Read<int>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_2 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_3 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_2, L_3);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5;
		L_5 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_4, NULL);
		V_0 = L_5;
		// break;
		goto IL_0030;
	}

IL_002a:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_6);
	}

IL_0030:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_7 = ___reader0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_7);
		String_t* L_9 = L_8;
		V_1 = L_9;
		if (L_9)
		{
			goto IL_000a;
		}
	}
	{
		// return instance;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_10 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_11 = L_10;
		RuntimeObject* L_12 = Box(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Object ES3Types.ES3Type_LayerMask::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LayerMask_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m73309D44B4BF2AC24EF0B045054B7AC1426F1B3F_gshared (ES3Type_LayerMask_t6CD68CDACE6DC4157F17DE53DC0A25F93A4049F1* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// LayerMask instance = new LayerMask();
		il2cpp_codegen_initobj((&V_0), sizeof(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB));
		goto IL_0030;
	}

IL_000a:
	{
		String_t* L_0 = V_1;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// instance = reader.Read<int>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_2 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_3 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_2, L_3);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5;
		L_5 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_4, NULL);
		V_0 = L_5;
		// break;
		goto IL_0030;
	}

IL_002a:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_6);
	}

IL_0030:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_7 = ___reader0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_7);
		String_t* L_9 = L_8;
		V_1 = L_9;
		if (L_9)
		{
			goto IL_000a;
		}
	}
	{
		// return instance;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_10 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_11 = L_10;
		RuntimeObject* L_12 = Box(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Object ES3Types.ES3Type_LayerMask::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LayerMask_Read_TisRuntimeObject_m3D760CBF41CE2863D9E5EFD81B1FAB8E1D9BDC8B_gshared (ES3Type_LayerMask_t6CD68CDACE6DC4157F17DE53DC0A25F93A4049F1* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// LayerMask instance = new LayerMask();
		il2cpp_codegen_initobj((&V_0), sizeof(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB));
		goto IL_0030;
	}

IL_000a:
	{
		String_t* L_0 = V_1;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// instance = reader.Read<int>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_2 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_3 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_2, L_3);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5;
		L_5 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_4, NULL);
		V_0 = L_5;
		// break;
		goto IL_0030;
	}

IL_002a:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_6);
	}

IL_0030:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_7 = ___reader0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_7);
		String_t* L_9 = L_8;
		V_1 = L_9;
		if (L_9)
		{
			goto IL_000a;
		}
	}
	{
		// return instance;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_10 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_11 = L_10;
		RuntimeObject* L_12 = Box(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Object ES3Types.ES3Type_LayerMask::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LayerMask_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mB6131EF79780ADBA941ED8E99F51C84D1226FA35_gshared (ES3Type_LayerMask_t6CD68CDACE6DC4157F17DE53DC0A25F93A4049F1* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// LayerMask instance = new LayerMask();
		il2cpp_codegen_initobj((&V_0), sizeof(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB));
		goto IL_0030;
	}

IL_000a:
	{
		String_t* L_0 = V_1;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// instance = reader.Read<int>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_2 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_3 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_2, L_3);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5;
		L_5 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_4, NULL);
		V_0 = L_5;
		// break;
		goto IL_0030;
	}

IL_002a:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_6);
	}

IL_0030:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_7 = ___reader0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_7);
		String_t* L_9 = L_8;
		V_1 = L_9;
		if (L_9)
		{
			goto IL_000a;
		}
	}
	{
		// return instance;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_10 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_11 = L_10;
		RuntimeObject* L_12 = Box(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Object ES3Types.ES3Type_LayerMask::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LayerMask_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_mB060C738AEAC9D9FF430B2C4FD98E14164908508_gshared (ES3Type_LayerMask_t6CD68CDACE6DC4157F17DE53DC0A25F93A4049F1* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// LayerMask instance = new LayerMask();
		il2cpp_codegen_initobj((&V_0), sizeof(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB));
		goto IL_0030;
	}

IL_000a:
	{
		String_t* L_0 = V_1;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// instance = reader.Read<int>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_2 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_3 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_2, L_3);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5;
		L_5 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_4, NULL);
		V_0 = L_5;
		// break;
		goto IL_0030;
	}

IL_002a:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_6);
	}

IL_0030:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_7 = ___reader0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_7);
		String_t* L_9 = L_8;
		V_1 = L_9;
		if (L_9)
		{
			goto IL_000a;
		}
	}
	{
		// return instance;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_10 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_11 = L_10;
		RuntimeObject* L_12 = Box(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Object ES3Types.ES3Type_LayerMask::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LayerMask_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_mFFE1BB5F02EB7F27D43B60F2E7BD43AAFD0AFAFD_gshared (ES3Type_LayerMask_t6CD68CDACE6DC4157F17DE53DC0A25F93A4049F1* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// LayerMask instance = new LayerMask();
		il2cpp_codegen_initobj((&V_0), sizeof(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB));
		goto IL_0030;
	}

IL_000a:
	{
		String_t* L_0 = V_1;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// instance = reader.Read<int>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_2 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_3 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_2, L_3);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5;
		L_5 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_4, NULL);
		V_0 = L_5;
		// break;
		goto IL_0030;
	}

IL_002a:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_6);
	}

IL_0030:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_7 = ___reader0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_7);
		String_t* L_9 = L_8;
		V_1 = L_9;
		if (L_9)
		{
			goto IL_000a;
		}
	}
	{
		// return instance;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_10 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_11 = L_10;
		RuntimeObject* L_12 = Box(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Object ES3Types.ES3Type_LayerMask::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LayerMask_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2F9072CDF2AC2EE687E51FE323240E9F7C1DB9F9_gshared (ES3Type_LayerMask_t6CD68CDACE6DC4157F17DE53DC0A25F93A4049F1* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// LayerMask instance = new LayerMask();
		il2cpp_codegen_initobj((&V_0), sizeof(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB));
		goto IL_0030;
	}

IL_000a:
	{
		String_t* L_0 = V_1;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// instance = reader.Read<int>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_2 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_3 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_2, L_3);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5;
		L_5 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_4, NULL);
		V_0 = L_5;
		// break;
		goto IL_0030;
	}

IL_002a:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_6);
	}

IL_0030:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_7 = ___reader0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_7);
		String_t* L_9 = L_8;
		V_1 = L_9;
		if (L_9)
		{
			goto IL_000a;
		}
	}
	{
		// return instance;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_10 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_11 = L_10;
		RuntimeObject* L_12 = Box(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Object ES3Types.ES3Type_LayerMask::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LayerMask_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m12F947C3855D767E59F21C8C634D4E074BC182CC_gshared (ES3Type_LayerMask_t6CD68CDACE6DC4157F17DE53DC0A25F93A4049F1* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// LayerMask instance = new LayerMask();
		il2cpp_codegen_initobj((&V_0), sizeof(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB));
		goto IL_0030;
	}

IL_000a:
	{
		String_t* L_0 = V_1;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// instance = reader.Read<int>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_2 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_3 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_2, L_3);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5;
		L_5 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_4, NULL);
		V_0 = L_5;
		// break;
		goto IL_0030;
	}

IL_002a:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_6);
	}

IL_0030:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_7 = ___reader0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_7);
		String_t* L_9 = L_8;
		V_1 = L_9;
		if (L_9)
		{
			goto IL_000a;
		}
	}
	{
		// return instance;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_10 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_11 = L_10;
		RuntimeObject* L_12 = Box(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Object ES3Types.ES3Type_LayerMask::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LayerMask_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m91C925AA34B02E6BA9B23BA587C1CC297B11A57B_gshared (ES3Type_LayerMask_t6CD68CDACE6DC4157F17DE53DC0A25F93A4049F1* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// LayerMask instance = new LayerMask();
		il2cpp_codegen_initobj((&V_0), sizeof(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB));
		goto IL_0030;
	}

IL_000a:
	{
		String_t* L_0 = V_1;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// instance = reader.Read<int>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_2 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_3 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_2, L_3);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5;
		L_5 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_4, NULL);
		V_0 = L_5;
		// break;
		goto IL_0030;
	}

IL_002a:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_6);
	}

IL_0030:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_7 = ___reader0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_7);
		String_t* L_9 = L_8;
		V_1 = L_9;
		if (L_9)
		{
			goto IL_000a;
		}
	}
	{
		// return instance;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_10 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_11 = L_10;
		RuntimeObject* L_12 = Box(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Object ES3Types.ES3Type_LayerMask::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LayerMask_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m94B8D35BCF986240C62BC39D7D7AAEAAF5B11D37_gshared (ES3Type_LayerMask_t6CD68CDACE6DC4157F17DE53DC0A25F93A4049F1* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// LayerMask instance = new LayerMask();
		il2cpp_codegen_initobj((&V_0), sizeof(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB));
		goto IL_0030;
	}

IL_000a:
	{
		String_t* L_0 = V_1;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// instance = reader.Read<int>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_2 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_3 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_2, L_3);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5;
		L_5 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_4, NULL);
		V_0 = L_5;
		// break;
		goto IL_0030;
	}

IL_002a:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_6);
	}

IL_0030:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_7 = ___reader0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_7);
		String_t* L_9 = L_8;
		V_1 = L_9;
		if (L_9)
		{
			goto IL_000a;
		}
	}
	{
		// return instance;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_10 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_11 = L_10;
		RuntimeObject* L_12 = Box(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Object ES3Types.ES3Type_LayerMask::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LayerMask_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mE03FD9FB066B749AB02D7A391F6B09787AF7770D_gshared (ES3Type_LayerMask_t6CD68CDACE6DC4157F17DE53DC0A25F93A4049F1* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// LayerMask instance = new LayerMask();
		il2cpp_codegen_initobj((&V_0), sizeof(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB));
		goto IL_0030;
	}

IL_000a:
	{
		String_t* L_0 = V_1;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// instance = reader.Read<int>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_2 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_3 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_2, L_3);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5;
		L_5 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_4, NULL);
		V_0 = L_5;
		// break;
		goto IL_0030;
	}

IL_002a:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_6);
	}

IL_0030:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_7 = ___reader0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_7);
		String_t* L_9 = L_8;
		V_1 = L_9;
		if (L_9)
		{
			goto IL_000a;
		}
	}
	{
		// return instance;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_10 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_11 = L_10;
		RuntimeObject* L_12 = Box(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Object ES3Types.ES3Type_LayerMask::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LayerMask_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m7F5F382A67D706D6B077B83BA3E28543C3C92D7F_gshared (ES3Type_LayerMask_t6CD68CDACE6DC4157F17DE53DC0A25F93A4049F1* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// LayerMask instance = new LayerMask();
		il2cpp_codegen_initobj((&V_0), sizeof(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB));
		goto IL_0030;
	}

IL_000a:
	{
		String_t* L_0 = V_1;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// instance = reader.Read<int>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_2 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_3 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_2, L_3);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5;
		L_5 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_4, NULL);
		V_0 = L_5;
		// break;
		goto IL_0030;
	}

IL_002a:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_6);
	}

IL_0030:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_7 = ___reader0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_7);
		String_t* L_9 = L_8;
		V_1 = L_9;
		if (L_9)
		{
			goto IL_000a;
		}
	}
	{
		// return instance;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_10 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_11 = L_10;
		RuntimeObject* L_12 = Box(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Void ES3Types.ES3Type_Light::ReadComponent<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Light_ReadComponent_TisRuntimeObject_m5DFB14D2D8533415216A7DD7987F0FCCD72A5C70_gshared (ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisFlare_t9DCE15756AD8F104B1D9024509B30E46FEF124C8_mE972CC58055A042583BA075E3609A6188AE6DCE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisHideFlags_tC514182ACEFD3B847988C45D5DB812FF6DB1BF4A_m36F4D84DE5068416FE003C875121A214616DD8A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLightRenderMode_t0F9C52310E682C737C48976769C0E84BADBD97EB_m5F980F3E354CC290BA01BFA2F0D32EA4EABB1E57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLightShadowResolution_tA4E88BF65D850F34CC01860E921817FA81ADB268_mD90C472F1B58B88A2F197373CCCAFD6AA4B533DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLightShadows_t5A3719FE33F8D536E5785AC42B4DF6E6F19666EA_mA919ACFFA3ADBF7FCB52FA3D0B81211E93E52F81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLightType_t2D4D43054E7473EECEB54493C0055AE074780234_m0D05FA1C5415BD404F68BB8BB6CC92B82BF1A807_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTexture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_m19A386D486F1F0E8B04AD2F6C16157FD942F593D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0328E4C169674B568EFB792EBE915956BAD34591);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05CAACB43AE60632DFAEDD8AFD98A0C279C2A0F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44B679A4FEA54FC0DBB1CECD512FC3FCFFE445F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5828D05DE5A70D7EFBBA4D58EC00343F3E9A6AB8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C72E9556FB79F24E1412FC01F0728F363348949);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral629998EE8A4BEB3AD2F947D3D95862F0F22227B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74755E5875E97ED362B5BF8BC9FA5F7F3F45080C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5C933C3A8FFEEDCA056E433AD8C52F89A0D82D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC220E5ABB03B498FA9E8AE08256C71E0C463D910);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC54638A97A3D6853F9D015A20E04AE7EEE96CE3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC960A835F875EC8DC4DAE61D11CE089EF2BF8416);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3DAE436D34E1BFB3B81BD5C319049A2E9F9BF3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7365A084921FB0EE98C5197247132620727BAD9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFE5CC21BFBE09498A868CDF341E3DD037864F0B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF1FCA243EC6560E19277456101964385EA36D01);
		s_Il2CppMethodInitialized = true;
	}
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	uint32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	{
		// var instance = (UnityEngine.Light)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*)CastclassSealed((RuntimeObject*)L_0, Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_il2cpp_TypeInfo_var));
		// foreach(string propertyName in reader.Properties)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_1 = ___reader0;
		NullCheck(L_1);
		ES3ReaderPropertyEnumerator_t2948B3DC88B88DF76A6ED9F660F7055F08697C37* L_2;
		L_2 = VirtualFuncInvoker0< ES3ReaderPropertyEnumerator_t2948B3DC88B88DF76A6ED9F660F7055F08697C37* >::Invoke(39 /* ES3Reader/ES3ReaderPropertyEnumerator ES3Reader::get_Properties() */, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_mBF25A2B7B71596A1DCB090DD81E708091D1D4478(L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_049b:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_4;
					if (!L_5)
					{
						goto IL_04ae;
					}
				}
				{
					RuntimeObject* L_6 = V_4;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_04ae:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_048e_1;
			}

IL_0018_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
				String_t* L_9 = V_2;
				uint32_t L_10;
				L_10 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_9, NULL);
				V_3 = L_10;
				uint32_t L_11 = V_3;
				if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)1823281443)))))
				{
					goto IL_00d0_1;
				}
			}
			{
				uint32_t L_12 = V_3;
				if ((!(((uint32_t)L_12) <= ((uint32_t)((int32_t)1308376928)))))
				{
					goto IL_0087_1;
				}
			}
			{
				uint32_t L_13 = V_3;
				if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)214491439)))))
				{
					goto IL_0061_1;
				}
			}
			{
				uint32_t L_14 = V_3;
				if ((((int32_t)L_14) == ((int32_t)((int32_t)49525662))))
				{
					goto IL_02e1_1;
				}
			}
			{
				uint32_t L_15 = V_3;
				if ((((int32_t)L_15) == ((int32_t)((int32_t)214491439))))
				{
					goto IL_02cc_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_0061_1:
			{
				uint32_t L_16 = V_3;
				if ((((int32_t)L_16) == ((int32_t)((int32_t)593295258))))
				{
					goto IL_02b7_1;
				}
			}
			{
				uint32_t L_17 = V_3;
				if ((((int32_t)L_17) == ((int32_t)((int32_t)1031692888))))
				{
					goto IL_017c_1;
				}
			}
			{
				uint32_t L_18 = V_3;
				if ((((int32_t)L_18) == ((int32_t)((int32_t)1308376928))))
				{
					goto IL_01fa_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_0087_1:
			{
				uint32_t L_19 = V_3;
				if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)1361572173)))))
				{
					goto IL_00aa_1;
				}
			}
			{
				uint32_t L_20 = V_3;
				if ((((int32_t)L_20) == ((int32_t)((int32_t)1361188592))))
				{
					goto IL_020f_1;
				}
			}
			{
				uint32_t L_21 = V_3;
				if ((((int32_t)L_21) == ((int32_t)((int32_t)1361572173))))
				{
					goto IL_0167_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_00aa_1:
			{
				uint32_t L_22 = V_3;
				if ((((int32_t)L_22) == ((int32_t)((int32_t)1538595811))))
				{
					goto IL_0239_1;
				}
			}
			{
				uint32_t L_23 = V_3;
				if ((((int32_t)L_23) == ((int32_t)((int32_t)1621849184))))
				{
					goto IL_0263_1;
				}
			}
			{
				uint32_t L_24 = V_3;
				if ((((int32_t)L_24) == ((int32_t)((int32_t)1823281443))))
				{
					goto IL_0224_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_00d0_1:
			{
				uint32_t L_25 = V_3;
				if ((!(((uint32_t)L_25) <= ((uint32_t)((int32_t)-1848572957)))))
				{
					goto IL_0121_1;
				}
			}
			{
				uint32_t L_26 = V_3;
				if ((!(((uint32_t)L_26) <= ((uint32_t)((int32_t)-2079361660)))))
				{
					goto IL_00fb_1;
				}
			}
			{
				uint32_t L_27 = V_3;
				if ((((int32_t)L_27) == ((int32_t)((int32_t)2007449791))))
				{
					goto IL_028d_1;
				}
			}
			{
				uint32_t L_28 = V_3;
				if ((((int32_t)L_28) == ((int32_t)((int32_t)-2079361660))))
				{
					goto IL_01d0_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_00fb_1:
			{
				uint32_t L_29 = V_3;
				if ((((int32_t)L_29) == ((int32_t)((int32_t)-2057050870))))
				{
					goto IL_0191_1;
				}
			}
			{
				uint32_t L_30 = V_3;
				if ((((int32_t)L_30) == ((int32_t)((int32_t)-1890496478))))
				{
					goto IL_01a6_1;
				}
			}
			{
				uint32_t L_31 = V_3;
				if ((((int32_t)L_31) == ((int32_t)((int32_t)-1848572957))))
				{
					goto IL_01e5_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_0121_1:
			{
				uint32_t L_32 = V_3;
				if ((!(((uint32_t)L_32) <= ((uint32_t)((int32_t)-894485674)))))
				{
					goto IL_0141_1;
				}
			}
			{
				uint32_t L_33 = V_3;
				if ((((int32_t)L_33) == ((int32_t)((int32_t)-1769781449))))
				{
					goto IL_02a2_1;
				}
			}
			{
				uint32_t L_34 = V_3;
				if ((((int32_t)L_34) == ((int32_t)((int32_t)-894485674))))
				{
					goto IL_01bb_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_0141_1:
			{
				uint32_t L_35 = V_3;
				if ((((int32_t)L_35) == ((int32_t)((int32_t)-350400524))))
				{
					goto IL_02f6_1;
				}
			}
			{
				uint32_t L_36 = V_3;
				if ((((int32_t)L_36) == ((int32_t)((int32_t)-266691594))))
				{
					goto IL_0278_1;
				}
			}
			{
				uint32_t L_37 = V_3;
				if ((((int32_t)L_37) == ((int32_t)((int32_t)-86242094))))
				{
					goto IL_024e_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_0167_1:
			{
				String_t* L_38 = V_2;
				bool L_39;
				L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
				if (L_39)
				{
					goto IL_030b_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_017c_1:
			{
				String_t* L_40 = V_2;
				bool L_41;
				L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
				if (L_41)
				{
					goto IL_031c_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_0191_1:
			{
				String_t* L_42 = V_2;
				bool L_43;
				L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
				if (L_43)
				{
					goto IL_0332_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_01a6_1:
			{
				String_t* L_44 = V_2;
				bool L_45;
				L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral629998EE8A4BEB3AD2F947D3D95862F0F22227B2, NULL);
				if (L_45)
				{
					goto IL_0348_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_01bb_1:
			{
				String_t* L_46 = V_2;
				bool L_47;
				L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteral0328E4C169674B568EFB792EBE915956BAD34591, NULL);
				if (L_47)
				{
					goto IL_035e_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_01d0_1:
			{
				String_t* L_48 = V_2;
				bool L_49;
				L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteralFF1FCA243EC6560E19277456101964385EA36D01, NULL);
				if (L_49)
				{
					goto IL_036f_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_01e5_1:
			{
				String_t* L_50 = V_2;
				bool L_51;
				L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral74755E5875E97ED362B5BF8BC9FA5F7F3F45080C, NULL);
				if (L_51)
				{
					goto IL_0385_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_01fa_1:
			{
				String_t* L_52 = V_2;
				bool L_53;
				L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteralC960A835F875EC8DC4DAE61D11CE089EF2BF8416, NULL);
				if (L_53)
				{
					goto IL_0396_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_020f_1:
			{
				String_t* L_54 = V_2;
				bool L_55;
				L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteralEFE5CC21BFBE09498A868CDF341E3DD037864F0B, NULL);
				if (L_55)
				{
					goto IL_03ac_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_0224_1:
			{
				String_t* L_56 = V_2;
				bool L_57;
				L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteral5C72E9556FB79F24E1412FC01F0728F363348949, NULL);
				if (L_57)
				{
					goto IL_03c2_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_0239_1:
			{
				String_t* L_58 = V_2;
				bool L_59;
				L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteralD7365A084921FB0EE98C5197247132620727BAD9, NULL);
				if (L_59)
				{
					goto IL_03d8_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_024e_1:
			{
				String_t* L_60 = V_2;
				bool L_61;
				L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
				if (L_61)
				{
					goto IL_03ee_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_0263_1:
			{
				String_t* L_62 = V_2;
				bool L_63;
				L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteralA5C933C3A8FFEEDCA056E433AD8C52F89A0D82D2, NULL);
				if (L_63)
				{
					goto IL_0404_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_0278_1:
			{
				String_t* L_64 = V_2;
				bool L_65;
				L_65 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_64, _stringLiteral5828D05DE5A70D7EFBBA4D58EC00343F3E9A6AB8, NULL);
				if (L_65)
				{
					goto IL_0417_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_028d_1:
			{
				String_t* L_66 = V_2;
				bool L_67;
				L_67 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_66, _stringLiteral44B679A4FEA54FC0DBB1CECD512FC3FCFFE445F4, NULL);
				if (L_67)
				{
					goto IL_042a_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_02a2_1:
			{
				String_t* L_68 = V_2;
				bool L_69;
				L_69 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_68, _stringLiteralC54638A97A3D6853F9D015A20E04AE7EEE96CE3C, NULL);
				if (L_69)
				{
					goto IL_0438_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_02b7_1:
			{
				String_t* L_70 = V_2;
				bool L_71;
				L_71 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_70, _stringLiteral05CAACB43AE60632DFAEDD8AFD98A0C279C2A0F7, NULL);
				if (L_71)
				{
					goto IL_0446_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_02cc_1:
			{
				String_t* L_72 = V_2;
				bool L_73;
				L_73 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_72, _stringLiteralD3DAE436D34E1BFB3B81BD5C319049A2E9F9BF3D, NULL);
				if (L_73)
				{
					goto IL_0454_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_02e1_1:
			{
				String_t* L_74 = V_2;
				bool L_75;
				L_75 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_74, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
				if (L_75)
				{
					goto IL_0467_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_02f6_1:
			{
				String_t* L_76 = V_2;
				bool L_77;
				L_77 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_76, _stringLiteralC220E5ABB03B498FA9E8AE08256C71E0C463D910, NULL);
				if (L_77)
				{
					goto IL_047a_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_030b_1:
			{
				// instance.type = reader.Read<UnityEngine.LightType>();
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_78 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_79 = ___reader0;
				NullCheck(L_79);
				int32_t L_80;
				L_80 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisLightType_t2D4D43054E7473EECEB54493C0055AE074780234_m0D05FA1C5415BD404F68BB8BB6CC92B82BF1A807_RuntimeMethod_var, L_79);
				NullCheck(L_78);
				Light_set_type_m9DF0E6AC528391B1D35FA06583B9A72EAB686C43(L_78, L_80, NULL);
				// break;
				goto IL_048e_1;
			}

IL_031c_1:
			{
				// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_81 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_82 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_83 = ((ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t0CB257FC9ADAF2025D2D47B8691B072B37D03CE3_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_82);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_84;
				L_84 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0DEAEBC24D499E477A0592B6A43CC2D5B3ADD3BB_RuntimeMethod_var, L_82, L_83);
				NullCheck(L_81);
				Light_set_color_m242F09E22904E0A20D5B032A0749678B0796A87C(L_81, L_84, NULL);
				// break;
				goto IL_048e_1;
			}

IL_0332_1:
			{
				// instance.intensity = reader.Read<System.Single>(ES3Type_float.Instance);
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_85 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_86 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_87 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_86);
				float L_88;
				L_88 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_86, L_87);
				NullCheck(L_85);
				Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_85, L_88, NULL);
				// break;
				goto IL_048e_1;
			}

IL_0348_1:
			{
				// instance.bounceIntensity = reader.Read<System.Single>(ES3Type_float.Instance);
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_89 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_90 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_91 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_90);
				float L_92;
				L_92 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_90, L_91);
				NullCheck(L_89);
				Light_set_bounceIntensity_m832ED3103EA600319F6227EDE55E5D6EBD272DB1(L_89, L_92, NULL);
				// break;
				goto IL_048e_1;
			}

IL_035e_1:
			{
				// instance.shadows = reader.Read<UnityEngine.LightShadows>();
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_93 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_94 = ___reader0;
				NullCheck(L_94);
				int32_t L_95;
				L_95 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisLightShadows_t5A3719FE33F8D536E5785AC42B4DF6E6F19666EA_mA919ACFFA3ADBF7FCB52FA3D0B81211E93E52F81_RuntimeMethod_var, L_94);
				NullCheck(L_93);
				Light_set_shadows_mDA4D1D1958387649BD35A79D83F50549898A74CB(L_93, L_95, NULL);
				// break;
				goto IL_048e_1;
			}

IL_036f_1:
			{
				// instance.shadowStrength = reader.Read<System.Single>(ES3Type_float.Instance);
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_96 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_97 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_98 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_97);
				float L_99;
				L_99 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_97, L_98);
				NullCheck(L_96);
				Light_set_shadowStrength_mA17F6ABA91CE032E008149D5D53FCD9B00497A4F(L_96, L_99, NULL);
				// break;
				goto IL_048e_1;
			}

IL_0385_1:
			{
				// instance.shadowResolution = reader.Read<UnityEngine.Rendering.LightShadowResolution>();
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_100 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_101 = ___reader0;
				NullCheck(L_101);
				int32_t L_102;
				L_102 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisLightShadowResolution_tA4E88BF65D850F34CC01860E921817FA81ADB268_mD90C472F1B58B88A2F197373CCCAFD6AA4B533DF_RuntimeMethod_var, L_101);
				NullCheck(L_100);
				Light_set_shadowResolution_mB1ED5718DCCA40E1AD231D145264B454543CBF07(L_100, L_102, NULL);
				// break;
				goto IL_048e_1;
			}

IL_0396_1:
			{
				// instance.shadowCustomResolution = reader.Read<System.Int32>(ES3Type_int.Instance);
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_103 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_104 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_105 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_104);
				int32_t L_106;
				L_106 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_104, L_105);
				NullCheck(L_103);
				Light_set_shadowCustomResolution_mEB39F5DB4F4BEBB2ACC2273E28C651CE578E3502(L_103, L_106, NULL);
				// break;
				goto IL_048e_1;
			}

IL_03ac_1:
			{
				// instance.shadowBias = reader.Read<System.Single>(ES3Type_float.Instance);
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_107 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_108 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_109 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_108);
				float L_110;
				L_110 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_108, L_109);
				NullCheck(L_107);
				Light_set_shadowBias_m04C4B35A017357A5C6A26BE7098EC1CE1E1E5420(L_107, L_110, NULL);
				// break;
				goto IL_048e_1;
			}

IL_03c2_1:
			{
				// instance.shadowNormalBias = reader.Read<System.Single>(ES3Type_float.Instance);
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_111 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_112 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_113 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_112);
				float L_114;
				L_114 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_112, L_113);
				NullCheck(L_111);
				Light_set_shadowNormalBias_m855EC8B5B849E8EA60A1F2BCE09357CE4B0D755A(L_111, L_114, NULL);
				// break;
				goto IL_048e_1;
			}

IL_03d8_1:
			{
				// instance.shadowNearPlane = reader.Read<System.Single>(ES3Type_float.Instance);
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_115 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_116 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_117 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_116);
				float L_118;
				L_118 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_116, L_117);
				NullCheck(L_115);
				Light_set_shadowNearPlane_m9105DBBC92CBB4F45401EDEA50B1DF14C9C3F01C(L_115, L_118, NULL);
				// break;
				goto IL_048e_1;
			}

IL_03ee_1:
			{
				// instance.range = reader.Read<System.Single>(ES3Type_float.Instance);
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_119 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_120 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_121 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_120);
				float L_122;
				L_122 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_120, L_121);
				NullCheck(L_119);
				Light_set_range_mBAF8E5380ECAD89A2BF43B7DA9C2DE8FA0C2FDEF(L_119, L_122, NULL);
				// break;
				goto IL_048e_1;
			}

IL_0404_1:
			{
				// instance.spotAngle = reader.Read<System.Single>(ES3Type_float.Instance);
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_123 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_124 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_125 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_124);
				float L_126;
				L_126 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_124, L_125);
				NullCheck(L_123);
				Light_set_spotAngle_mB27C0667B5C07771750AF66E36F2CA02D272C61B(L_123, L_126, NULL);
				// break;
				goto IL_048e_1;
			}

IL_0417_1:
			{
				// instance.cookieSize = reader.Read<System.Single>(ES3Type_float.Instance);
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_127 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_128 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_129 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_128);
				float L_130;
				L_130 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_128, L_129);
				NullCheck(L_127);
				Light_set_cookieSize_m40AC9D2279340DDB66290B9C76203D6061593DD4(L_127, L_130, NULL);
				// break;
				goto IL_048e_1;
			}

IL_042a_1:
			{
				// instance.cookie = reader.Read<UnityEngine.Texture>();
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_131 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_132 = ___reader0;
				NullCheck(L_132);
				Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_133;
				L_133 = GenericVirtualFuncInvoker0< Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* >::Invoke(ES3Reader_Read_TisTexture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_m19A386D486F1F0E8B04AD2F6C16157FD942F593D_RuntimeMethod_var, L_132);
				NullCheck(L_131);
				Light_set_cookie_m42EC6CBDB1149EA8D49E36D21FDA0AD220C2C6CD(L_131, L_133, NULL);
				// break;
				goto IL_048e_1;
			}

IL_0438_1:
			{
				// instance.flare = reader.Read<UnityEngine.Flare>();
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_134 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_135 = ___reader0;
				NullCheck(L_135);
				Flare_t9DCE15756AD8F104B1D9024509B30E46FEF124C8* L_136;
				L_136 = GenericVirtualFuncInvoker0< Flare_t9DCE15756AD8F104B1D9024509B30E46FEF124C8* >::Invoke(ES3Reader_Read_TisFlare_t9DCE15756AD8F104B1D9024509B30E46FEF124C8_mE972CC58055A042583BA075E3609A6188AE6DCE1_RuntimeMethod_var, L_135);
				NullCheck(L_134);
				Light_set_flare_m751C28EF5BA14643F57ECA60924D1C344F00385C(L_134, L_136, NULL);
				// break;
				goto IL_048e_1;
			}

IL_0446_1:
			{
				// instance.renderMode = reader.Read<UnityEngine.LightRenderMode>();
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_137 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_138 = ___reader0;
				NullCheck(L_138);
				int32_t L_139;
				L_139 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisLightRenderMode_t0F9C52310E682C737C48976769C0E84BADBD97EB_m5F980F3E354CC290BA01BFA2F0D32EA4EABB1E57_RuntimeMethod_var, L_138);
				NullCheck(L_137);
				Light_set_renderMode_m31F714D8EAD8B90E9E38E3864403CD9379D9DE58(L_137, L_139, NULL);
				// break;
				goto IL_048e_1;
			}

IL_0454_1:
			{
				// instance.cullingMask = reader.Read<System.Int32>(ES3Type_int.Instance);
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_140 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_141 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_142 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_141);
				int32_t L_143;
				L_143 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_141, L_142);
				NullCheck(L_140);
				Light_set_cullingMask_mC714832A1E2B73C72C188F9F44B50C449831C4B1(L_140, L_143, NULL);
				// break;
				goto IL_048e_1;
			}

IL_0467_1:
			{
				// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_144 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_145 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_146 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_145);
				bool L_147;
				L_147 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_145, L_146);
				NullCheck((Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA*)L_144);
				Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A((Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA*)L_144, L_147, NULL);
				// break;
				goto IL_048e_1;
			}

IL_047a_1:
			{
				// instance.hideFlags = reader.Read<UnityEngine.HideFlags>();
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_148 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_149 = ___reader0;
				NullCheck(L_149);
				int32_t L_150;
				L_150 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisHideFlags_tC514182ACEFD3B847988C45D5DB812FF6DB1BF4A_m36F4D84DE5068416FE003C875121A214616DD8A8_RuntimeMethod_var, L_149);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_148);
				Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_148, L_150, NULL);
				// break;
				goto IL_048e_1;
			}

IL_0488_1:
			{
				// reader.Skip();
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_151 = ___reader0;
				NullCheck(L_151);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_151);
			}

IL_048e_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_152 = V_1;
				NullCheck(L_152);
				bool L_153;
				L_153 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_152);
				if (L_153)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_04af;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_04af:
	{
		// }
		return;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mCB73C1F974AF3B4A7AA5BB51F3E7E293D31956A0_gshared (ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m9321838CE78147E18AD8154E2E1754F0BAF3E87D_gshared (ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE365C1F847E1695A5266E93F752BC5FE8E09FB2C_gshared (ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m6D9D1E2C881B15C32E972548E264A3C85E8BEDAE_gshared (ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<System.Int16>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m0A559816159C07C9BD489AFD3FD6C9BBFD096642_gshared (ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBCF3023FB5AA21E3048495656F25A434CF4F71F0_gshared (ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mC91B3145160048F2F32B7E9895A000234FC155C5_gshared (ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m6E1DB06175F252F4A8BAD37E6FFF57CC8E2A33EA_gshared (ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m818B11698111161850E5A029A33AA6746BFA7ABA_gshared (ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mF9924CB868A7FE5A2C4998DB034E286475C2BCBC_gshared (ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisRuntimeObject_mD61278D27880A161D46EDB688F247D46D3EA9492_gshared (ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m664797CDA7182F73663482508C843540090C807C_gshared (ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_mF6D68AEB100A32F1790B20D48BE890247A08B215_gshared (ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_mCA557AAA3D9B23947BE258110F686372F00D5FF3_gshared (ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF6D63D37BF22B0AAC8F17F277337F4D50512A5F0_gshared (ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m14AD57DAD29C4A84A5C70BAAD15599ED92EDAFE5_gshared (ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mBA90132D126EAAC7E5A1CB0842C102A24F520E76_gshared (ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC659DFB087106AD47DA1DE49DFFFA15C9A4E9B6F_gshared (ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mBDABDF34AE9E582D8E9622696722528A148AA0D2_gshared (ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m5865DFA5C8C395089ACA6FC7232E8C05FBC00F34_gshared (ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisRuntimeObject_m67A5ADC324D7E1D2C0860D4FC867FC3122DC3332_gshared (ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var))->___Instance_14;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_70 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_72 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_73 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_76 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/CollisionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_mCAE34F3D16E12797A65F650E8458624FA7133927_gshared (ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var))->___Instance_14;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_70 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_72 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_73 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_76 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/ColorBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_mCF3A2CD7C58597A89F2A9A44F919F4C639755A79_gshared (ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var))->___Instance_14;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_70 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_72 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_73 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_76 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/ColorOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_m4E75E1C188F50372985C93DC0248BB1B6A95882D_gshared (ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var))->___Instance_14;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_70 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_72 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_73 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_76 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/EmissionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_m48598A72C85274283E507747C3536330A4DEB9CF_gshared (ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var))->___Instance_14;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_70 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_72 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_73 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_76 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/ExternalForcesModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_mA95BDC6EDAF5AB34DF1B097141B178A9EAA72D8A_gshared (ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var))->___Instance_14;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_70 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_72 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_73 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_76 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/ForceOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_mE888E30B83EEC20205D8126D628C34368E26F948_gshared (ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var))->___Instance_14;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_70 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_72 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_73 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_76 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/InheritVelocityModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_m4E87FEEAD07318B9E9B8623842678A407EE00F96_gshared (ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var))->___Instance_14;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_70 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_72 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_73 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_76 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/LightsModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_m4D1778172BA1F764375CD3EA5A403C129DCD1C61_gshared (ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var))->___Instance_14;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_70 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_72 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_73 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_76 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisLimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_mDC788374FA5FB3FE8677F17BB1D789C86E2AF9EA_gshared (ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var))->___Instance_14;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_70 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_72 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_73 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_76 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/MainModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisMainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_m48CB59D0C2FE6D72FC729A0A419E905A1942525B_gshared (ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var))->___Instance_14;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_70 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_72 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_73 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_76 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/NoiseModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisNoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_mF2B2601995010F0FC611AEC05330E44B8CDD414A_gshared (ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var))->___Instance_14;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_70 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_72 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_73 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_76 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/RotationBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisRotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_m8BD3EED3979A50A1436034132B7383683E44171B_gshared (ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var))->___Instance_14;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_70 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_72 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_73 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_76 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/RotationOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisRotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_m73443ECB045C46614013124FA2411F0834FCFCEE_gshared (ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var))->___Instance_14;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_70 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_72 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_73 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_76 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/ShapeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_m371E55875E05EC4EF87C7BDE36B961DA75D369E8_gshared (ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var))->___Instance_14;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_70 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_72 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_73 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_76 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/SizeBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisSizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_mEAA5276C474B5451AAC5814D8072D6A51B5024C5_gshared (ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var))->___Instance_14;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_70 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_72 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_73 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_76 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/SizeOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisSizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_m30A1FF7F8F72AA79DD1B33DB8D3ED926B5EB7ABD_gshared (ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var))->___Instance_14;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_70 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_72 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_73 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_76 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/SubEmittersModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisSubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_mA31565BCA2D0FB53F24EFE3FE4743E84E35712FA_gshared (ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var))->___Instance_14;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_70 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_72 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_73 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_76 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/TextureSheetAnimationModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisTextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_m4CE896B4616EC979277D2DBE577EB2366DCE50BA_gshared (ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var))->___Instance_14;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_70 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_72 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_73 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_76 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/TrailModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisTrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_m92F36912DB76B469896FDEB35CA13BCECF1C5197_gshared (ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var))->___Instance_14;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_70 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_72 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_73 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_76 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/TriggerModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisTriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_m88D16814C103B42644C89F851888E729B00B878F_gshared (ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var))->___Instance_14;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_70 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_72 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_73 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_76 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/VelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisVelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_m6696F634BE298F377A4A2ABA5A950460E47DA37E_gshared (ES3Type_LightsModule_tDEC25A2D20033FA311BFA45CE8DE0BD2CEDF8813* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t0F3EC5781A66902427DFBA84064386EE46C0FA25_il2cpp_TypeInfo_var))->___Instance_14;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m897D52F234227E4744997463F075344F4CC6026F_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_70 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_72 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_73 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_76 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m16DE973DCCF90371F29C800BB71013ECA6FEE835_gshared (ES3Type_LimitVelocityOverLifetimeModule_t6B4FB2973D42A4D59A39DF90E6E7FECFE8A88F5A* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mF0BF266C1494365800C7EBFDD29B4D771FB62057_gshared (ES3Type_LimitVelocityOverLifetimeModule_t6B4FB2973D42A4D59A39DF90E6E7FECFE8A88F5A* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6C94EFBE9C7B9018C289D2A51D9B8CCEC931DF60_gshared (ES3Type_LimitVelocityOverLifetimeModule_t6B4FB2973D42A4D59A39DF90E6E7FECFE8A88F5A* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mB40E13ED9A877E14B1C383A34EFFFCD2369059A4_gshared (ES3Type_LimitVelocityOverLifetimeModule_t6B4FB2973D42A4D59A39DF90E6E7FECFE8A88F5A* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<System.Int16>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mCBBC87BB478FD36F9DDD8F8D4974C20B3DF81784_gshared (ES3Type_LimitVelocityOverLifetimeModule_t6B4FB2973D42A4D59A39DF90E6E7FECFE8A88F5A* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1858C19E8E09C93EB08643D170CA2C0E32515F77_gshared (ES3Type_LimitVelocityOverLifetimeModule_t6B4FB2973D42A4D59A39DF90E6E7FECFE8A88F5A* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mBA7D7F1B40A72DA03FE1432361041A195C2AB00D_gshared (ES3Type_LimitVelocityOverLifetimeModule_t6B4FB2973D42A4D59A39DF90E6E7FECFE8A88F5A* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mA4EBFAD8298D5412B73B0C30519BFD6BBC86D19C_gshared (ES3Type_LimitVelocityOverLifetimeModule_t6B4FB2973D42A4D59A39DF90E6E7FECFE8A88F5A* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m4363CF03233759C386BEA76B0212B1C8966145D6_gshared (ES3Type_LimitVelocityOverLifetimeModule_t6B4FB2973D42A4D59A39DF90E6E7FECFE8A88F5A* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mEFA1928104EA553981993829579090314CEC2988_gshared (ES3Type_LimitVelocityOverLifetimeModule_t6B4FB2973D42A4D59A39DF90E6E7FECFE8A88F5A* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisRuntimeObject_mE5C7F27F466E73A91551C180D375CC9F05717BF3_gshared (ES3Type_LimitVelocityOverLifetimeModule_t6B4FB2973D42A4D59A39DF90E6E7FECFE8A88F5A* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m1CE1DB81036C55AF0F3B8CB48AFEB4B99B5A74C9_gshared (ES3Type_LimitVelocityOverLifetimeModule_t6B4FB2973D42A4D59A39DF90E6E7FECFE8A88F5A* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m917C21315CE7875A44368142762CB050C82D267D_gshared (ES3Type_LimitVelocityOverLifetimeModule_t6B4FB2973D42A4D59A39DF90E6E7FECFE8A88F5A* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_mD3B7F869E61D0508D0007AB22088FC1216395814_gshared (ES3Type_LimitVelocityOverLifetimeModule_t6B4FB2973D42A4D59A39DF90E6E7FECFE8A88F5A* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m5AA40EC57040CDA9BDD042E54F38B83E661AA02F_gshared (ES3Type_LimitVelocityOverLifetimeModule_t6B4FB2973D42A4D59A39DF90E6E7FECFE8A88F5A* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m6C49358AE492A3E52DA888C1634DAA0B536A67A7_gshared (ES3Type_LimitVelocityOverLifetimeModule_t6B4FB2973D42A4D59A39DF90E6E7FECFE8A88F5A* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3561233CDEDAE4145C36F7B91144DC5E5EC3A998_gshared (ES3Type_LimitVelocityOverLifetimeModule_t6B4FB2973D42A4D59A39DF90E6E7FECFE8A88F5A* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC2D23BC4AE2CF7DA115F6A2C0C323FEEA2008E55_gshared (ES3Type_LimitVelocityOverLifetimeModule_t6B4FB2973D42A4D59A39DF90E6E7FECFE8A88F5A* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m2EB8688461476AF71538EDC5865DAD54FA5C3FD3_gshared (ES3Type_LimitVelocityOverLifetimeModule_t6B4FB2973D42A4D59A39DF90E6E7FECFE8A88F5A* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m7F979731A9EAE1F500A9723DD83E68223B43E0AE_gshared (ES3Type_LimitVelocityOverLifetimeModule_t6B4FB2973D42A4D59A39DF90E6E7FECFE8A88F5A* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Void ES3Types.ES3Type_LimitVelocityOverLifetimeModule::ReadInto<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LimitVelocityOverLifetimeModule_ReadInto_TisRuntimeObject_m71A1082E4F044056579A44B11885F62CF79EC07F_gshared (ES3Type_LimitVelocityOverLifetimeModule_t6B4FB2973D42A4D59A39DF90E6E7FECFE8A88F5A* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m7EC146C35647387DD36351685C0DD1C98B6333D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)((LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)UnBox(L_0, LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var))));
		goto IL_02b9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1319695307)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)691593499)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)572581548))))
		{
			goto IL_0111;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)691593499))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)853203252))))
		{
			goto IL_0150;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)894689925))))
		{
			goto IL_01a4;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1319695307))))
		{
			goto IL_0165;
		}
	}
	{
		goto IL_02b3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)2072266391)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_018f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)2055488772))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)2072266391))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_02b3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)2089044010))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1976734835))))
		{
			goto IL_013b;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017a;
		}
	}
	{
		goto IL_02b3;
	}

IL_00bd:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_02b3;
	}

IL_00d2:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62, NULL);
		if (L_21)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_02b3;
	}

IL_00e7:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4, NULL);
		if (L_23)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_00fc:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6, NULL);
		if (L_25)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_02b3;
	}

IL_0111:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5, NULL);
		if (L_27)
		{
			goto IL_0215;
		}
	}
	{
		goto IL_02b3;
	}

IL_0126:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033, NULL);
		if (L_29)
		{
			goto IL_022c;
		}
	}
	{
		goto IL_02b3;
	}

IL_013b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7, NULL);
		if (L_31)
		{
			goto IL_0240;
		}
	}
	{
		goto IL_02b3;
	}

IL_0150:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8, NULL);
		if (L_33)
		{
			goto IL_0254;
		}
	}
	{
		goto IL_02b3;
	}

IL_0165:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956, NULL);
		if (L_35)
		{
			goto IL_0268;
		}
	}
	{
		goto IL_02b3;
	}

IL_017a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_37)
		{
			goto IL_027c;
		}
	}
	{
		goto IL_02b3;
	}

IL_018f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_39)
		{
			goto IL_0290;
		}
	}
	{
		goto IL_02b3;
	}

IL_01a4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (L_41)
		{
			goto IL_02a4;
		}
	}
	{
		goto IL_02b3;
	}

IL_01b9:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_42, L_43);
		LimitVelocityOverLifetimeModule_set_enabled_m0C4AC7078A4009C764CDD6C852747161626030F8((&V_0), L_44, NULL);
		// break;
		goto IL_02b9;
	}

IL_01d0:
	{
		// instance.limitX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_45, L_46);
		LimitVelocityOverLifetimeModule_set_limitX_m453163A173E91BD1FA92A85FFFB1377922264E88((&V_0), L_47, NULL);
		// break;
		goto IL_02b9;
	}

IL_01e7:
	{
		// instance.limitXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_48, L_49);
		LimitVelocityOverLifetimeModule_set_limitXMultiplier_m69A35DBE2A96DB94E1C5857C1AEA7700F315FB69((&V_0), L_50, NULL);
		// break;
		goto IL_02b9;
	}

IL_01fe:
	{
		// instance.limitY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_51, L_52);
		LimitVelocityOverLifetimeModule_set_limitY_m5C4FA3E4199843D17B358EAE552BC1530944C6ED((&V_0), L_53, NULL);
		// break;
		goto IL_02b9;
	}

IL_0215:
	{
		// instance.limitYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_54, L_55);
		LimitVelocityOverLifetimeModule_set_limitYMultiplier_mCB16226776AA3FD95FCBFEF08939CDFCDEAD1FD7((&V_0), L_56, NULL);
		// break;
		goto IL_02b9;
	}

IL_022c:
	{
		// instance.limitZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_57, L_58);
		LimitVelocityOverLifetimeModule_set_limitZ_mA7AA3F6C6EB9C1E2199DE5EDBFDFCD891E66A06C((&V_0), L_59, NULL);
		// break;
		goto IL_02b9;
	}

IL_0240:
	{
		// instance.limitZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_60, L_61);
		LimitVelocityOverLifetimeModule_set_limitZMultiplier_mF8318B3E8798E9778CD356C773A9567EBCC414DF((&V_0), L_62, NULL);
		// break;
		goto IL_02b9;
	}

IL_0254:
	{
		// instance.limit = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_63, L_64);
		LimitVelocityOverLifetimeModule_set_limit_m4714D5E0B04EAE01A49552690E9CC206AC5C7685((&V_0), L_65, NULL);
		// break;
		goto IL_02b9;
	}

IL_0268:
	{
		// instance.limitMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		LimitVelocityOverLifetimeModule_set_limitMultiplier_m520C77C943C30BFE63EF0E4BEA9593D251187B28((&V_0), L_68, NULL);
		// break;
		goto IL_02b9;
	}

IL_027c:
	{
		// instance.dampen = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_70 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_69, L_70);
		LimitVelocityOverLifetimeModule_set_dampen_mE8A893ECFE936519C3F68D440C3C6BD11065E288((&V_0), L_71, NULL);
		// break;
		goto IL_02b9;
	}

IL_0290:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_72 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_73 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_72);
		bool L_74;
		L_74 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_72, L_73);
		LimitVelocityOverLifetimeModule_set_separateAxes_m3E1D0590D45FE0D6657D99685DA4E5A231229EF0((&V_0), L_74, NULL);
		// break;
		goto IL_02b9;
	}

IL_02a4:
	{
		// instance.space = reader.Read<UnityEngine.ParticleSystemSimulationSpace>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m7EC146C35647387DD36351685C0DD1C98B6333D8_RuntimeMethod_var, L_75);
		LimitVelocityOverLifetimeModule_set_space_m54D13D862FCB1606F37A3F053138437DEBF773D5((&V_0), L_76, NULL);
		// break;
		goto IL_02b9;
	}

IL_02b3:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_77 = ___reader0;
		NullCheck(L_77);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_77);
	}

IL_02b9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_78);
		String_t* L_80 = L_79;
		V_1 = L_80;
		if (L_80)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LimitVelocityOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/CollisionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LimitVelocityOverLifetimeModule_ReadInto_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_m9C0FF5E386D5B90458043AA9483373382C498A69_gshared (ES3Type_LimitVelocityOverLifetimeModule_t6B4FB2973D42A4D59A39DF90E6E7FECFE8A88F5A* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m7EC146C35647387DD36351685C0DD1C98B6333D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)((LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)UnBox(L_0, LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var))));
		goto IL_02b9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1319695307)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)691593499)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)572581548))))
		{
			goto IL_0111;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)691593499))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)853203252))))
		{
			goto IL_0150;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)894689925))))
		{
			goto IL_01a4;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1319695307))))
		{
			goto IL_0165;
		}
	}
	{
		goto IL_02b3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)2072266391)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_018f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)2055488772))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)2072266391))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_02b3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)2089044010))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1976734835))))
		{
			goto IL_013b;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017a;
		}
	}
	{
		goto IL_02b3;
	}

IL_00bd:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_02b3;
	}

IL_00d2:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62, NULL);
		if (L_21)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_02b3;
	}

IL_00e7:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4, NULL);
		if (L_23)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_00fc:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6, NULL);
		if (L_25)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_02b3;
	}

IL_0111:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5, NULL);
		if (L_27)
		{
			goto IL_0215;
		}
	}
	{
		goto IL_02b3;
	}

IL_0126:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033, NULL);
		if (L_29)
		{
			goto IL_022c;
		}
	}
	{
		goto IL_02b3;
	}

IL_013b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7, NULL);
		if (L_31)
		{
			goto IL_0240;
		}
	}
	{
		goto IL_02b3;
	}

IL_0150:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8, NULL);
		if (L_33)
		{
			goto IL_0254;
		}
	}
	{
		goto IL_02b3;
	}

IL_0165:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956, NULL);
		if (L_35)
		{
			goto IL_0268;
		}
	}
	{
		goto IL_02b3;
	}

IL_017a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_37)
		{
			goto IL_027c;
		}
	}
	{
		goto IL_02b3;
	}

IL_018f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_39)
		{
			goto IL_0290;
		}
	}
	{
		goto IL_02b3;
	}

IL_01a4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (L_41)
		{
			goto IL_02a4;
		}
	}
	{
		goto IL_02b3;
	}

IL_01b9:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_42, L_43);
		LimitVelocityOverLifetimeModule_set_enabled_m0C4AC7078A4009C764CDD6C852747161626030F8((&V_0), L_44, NULL);
		// break;
		goto IL_02b9;
	}

IL_01d0:
	{
		// instance.limitX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_45, L_46);
		LimitVelocityOverLifetimeModule_set_limitX_m453163A173E91BD1FA92A85FFFB1377922264E88((&V_0), L_47, NULL);
		// break;
		goto IL_02b9;
	}

IL_01e7:
	{
		// instance.limitXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_48, L_49);
		LimitVelocityOverLifetimeModule_set_limitXMultiplier_m69A35DBE2A96DB94E1C5857C1AEA7700F315FB69((&V_0), L_50, NULL);
		// break;
		goto IL_02b9;
	}

IL_01fe:
	{
		// instance.limitY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_51, L_52);
		LimitVelocityOverLifetimeModule_set_limitY_m5C4FA3E4199843D17B358EAE552BC1530944C6ED((&V_0), L_53, NULL);
		// break;
		goto IL_02b9;
	}

IL_0215:
	{
		// instance.limitYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_54, L_55);
		LimitVelocityOverLifetimeModule_set_limitYMultiplier_mCB16226776AA3FD95FCBFEF08939CDFCDEAD1FD7((&V_0), L_56, NULL);
		// break;
		goto IL_02b9;
	}

IL_022c:
	{
		// instance.limitZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_57, L_58);
		LimitVelocityOverLifetimeModule_set_limitZ_mA7AA3F6C6EB9C1E2199DE5EDBFDFCD891E66A06C((&V_0), L_59, NULL);
		// break;
		goto IL_02b9;
	}

IL_0240:
	{
		// instance.limitZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_60, L_61);
		LimitVelocityOverLifetimeModule_set_limitZMultiplier_mF8318B3E8798E9778CD356C773A9567EBCC414DF((&V_0), L_62, NULL);
		// break;
		goto IL_02b9;
	}

IL_0254:
	{
		// instance.limit = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_63, L_64);
		LimitVelocityOverLifetimeModule_set_limit_m4714D5E0B04EAE01A49552690E9CC206AC5C7685((&V_0), L_65, NULL);
		// break;
		goto IL_02b9;
	}

IL_0268:
	{
		// instance.limitMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		LimitVelocityOverLifetimeModule_set_limitMultiplier_m520C77C943C30BFE63EF0E4BEA9593D251187B28((&V_0), L_68, NULL);
		// break;
		goto IL_02b9;
	}

IL_027c:
	{
		// instance.dampen = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_70 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_69, L_70);
		LimitVelocityOverLifetimeModule_set_dampen_mE8A893ECFE936519C3F68D440C3C6BD11065E288((&V_0), L_71, NULL);
		// break;
		goto IL_02b9;
	}

IL_0290:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_72 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_73 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_72);
		bool L_74;
		L_74 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_72, L_73);
		LimitVelocityOverLifetimeModule_set_separateAxes_m3E1D0590D45FE0D6657D99685DA4E5A231229EF0((&V_0), L_74, NULL);
		// break;
		goto IL_02b9;
	}

IL_02a4:
	{
		// instance.space = reader.Read<UnityEngine.ParticleSystemSimulationSpace>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m7EC146C35647387DD36351685C0DD1C98B6333D8_RuntimeMethod_var, L_75);
		LimitVelocityOverLifetimeModule_set_space_m54D13D862FCB1606F37A3F053138437DEBF773D5((&V_0), L_76, NULL);
		// break;
		goto IL_02b9;
	}

IL_02b3:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_77 = ___reader0;
		NullCheck(L_77);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_77);
	}

IL_02b9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_78);
		String_t* L_80 = L_79;
		V_1 = L_80;
		if (L_80)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LimitVelocityOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/ColorBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LimitVelocityOverLifetimeModule_ReadInto_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_mEDFAA081EFDE99A8A476158EBE26D8A9BF5585C8_gshared (ES3Type_LimitVelocityOverLifetimeModule_t6B4FB2973D42A4D59A39DF90E6E7FECFE8A88F5A* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m7EC146C35647387DD36351685C0DD1C98B6333D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)((LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)UnBox(L_0, LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var))));
		goto IL_02b9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1319695307)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)691593499)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)572581548))))
		{
			goto IL_0111;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)691593499))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)853203252))))
		{
			goto IL_0150;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)894689925))))
		{
			goto IL_01a4;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1319695307))))
		{
			goto IL_0165;
		}
	}
	{
		goto IL_02b3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)2072266391)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_018f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)2055488772))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)2072266391))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_02b3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)2089044010))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1976734835))))
		{
			goto IL_013b;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017a;
		}
	}
	{
		goto IL_02b3;
	}

IL_00bd:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_02b3;
	}

IL_00d2:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62, NULL);
		if (L_21)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_02b3;
	}

IL_00e7:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4, NULL);
		if (L_23)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_00fc:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6, NULL);
		if (L_25)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_02b3;
	}

IL_0111:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5, NULL);
		if (L_27)
		{
			goto IL_0215;
		}
	}
	{
		goto IL_02b3;
	}

IL_0126:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033, NULL);
		if (L_29)
		{
			goto IL_022c;
		}
	}
	{
		goto IL_02b3;
	}

IL_013b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7, NULL);
		if (L_31)
		{
			goto IL_0240;
		}
	}
	{
		goto IL_02b3;
	}

IL_0150:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8, NULL);
		if (L_33)
		{
			goto IL_0254;
		}
	}
	{
		goto IL_02b3;
	}

IL_0165:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956, NULL);
		if (L_35)
		{
			goto IL_0268;
		}
	}
	{
		goto IL_02b3;
	}

IL_017a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_37)
		{
			goto IL_027c;
		}
	}
	{
		goto IL_02b3;
	}

IL_018f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_39)
		{
			goto IL_0290;
		}
	}
	{
		goto IL_02b3;
	}

IL_01a4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (L_41)
		{
			goto IL_02a4;
		}
	}
	{
		goto IL_02b3;
	}

IL_01b9:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_42, L_43);
		LimitVelocityOverLifetimeModule_set_enabled_m0C4AC7078A4009C764CDD6C852747161626030F8((&V_0), L_44, NULL);
		// break;
		goto IL_02b9;
	}

IL_01d0:
	{
		// instance.limitX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_45, L_46);
		LimitVelocityOverLifetimeModule_set_limitX_m453163A173E91BD1FA92A85FFFB1377922264E88((&V_0), L_47, NULL);
		// break;
		goto IL_02b9;
	}

IL_01e7:
	{
		// instance.limitXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_48, L_49);
		LimitVelocityOverLifetimeModule_set_limitXMultiplier_m69A35DBE2A96DB94E1C5857C1AEA7700F315FB69((&V_0), L_50, NULL);
		// break;
		goto IL_02b9;
	}

IL_01fe:
	{
		// instance.limitY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_51, L_52);
		LimitVelocityOverLifetimeModule_set_limitY_m5C4FA3E4199843D17B358EAE552BC1530944C6ED((&V_0), L_53, NULL);
		// break;
		goto IL_02b9;
	}

IL_0215:
	{
		// instance.limitYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_54, L_55);
		LimitVelocityOverLifetimeModule_set_limitYMultiplier_mCB16226776AA3FD95FCBFEF08939CDFCDEAD1FD7((&V_0), L_56, NULL);
		// break;
		goto IL_02b9;
	}

IL_022c:
	{
		// instance.limitZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_57, L_58);
		LimitVelocityOverLifetimeModule_set_limitZ_mA7AA3F6C6EB9C1E2199DE5EDBFDFCD891E66A06C((&V_0), L_59, NULL);
		// break;
		goto IL_02b9;
	}

IL_0240:
	{
		// instance.limitZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_60, L_61);
		LimitVelocityOverLifetimeModule_set_limitZMultiplier_mF8318B3E8798E9778CD356C773A9567EBCC414DF((&V_0), L_62, NULL);
		// break;
		goto IL_02b9;
	}

IL_0254:
	{
		// instance.limit = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_63, L_64);
		LimitVelocityOverLifetimeModule_set_limit_m4714D5E0B04EAE01A49552690E9CC206AC5C7685((&V_0), L_65, NULL);
		// break;
		goto IL_02b9;
	}

IL_0268:
	{
		// instance.limitMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		LimitVelocityOverLifetimeModule_set_limitMultiplier_m520C77C943C30BFE63EF0E4BEA9593D251187B28((&V_0), L_68, NULL);
		// break;
		goto IL_02b9;
	}

IL_027c:
	{
		// instance.dampen = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_70 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_69, L_70);
		LimitVelocityOverLifetimeModule_set_dampen_mE8A893ECFE936519C3F68D440C3C6BD11065E288((&V_0), L_71, NULL);
		// break;
		goto IL_02b9;
	}

IL_0290:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_72 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_73 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_72);
		bool L_74;
		L_74 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_72, L_73);
		LimitVelocityOverLifetimeModule_set_separateAxes_m3E1D0590D45FE0D6657D99685DA4E5A231229EF0((&V_0), L_74, NULL);
		// break;
		goto IL_02b9;
	}

IL_02a4:
	{
		// instance.space = reader.Read<UnityEngine.ParticleSystemSimulationSpace>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m7EC146C35647387DD36351685C0DD1C98B6333D8_RuntimeMethod_var, L_75);
		LimitVelocityOverLifetimeModule_set_space_m54D13D862FCB1606F37A3F053138437DEBF773D5((&V_0), L_76, NULL);
		// break;
		goto IL_02b9;
	}

IL_02b3:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_77 = ___reader0;
		NullCheck(L_77);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_77);
	}

IL_02b9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_78);
		String_t* L_80 = L_79;
		V_1 = L_80;
		if (L_80)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LimitVelocityOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/ColorOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LimitVelocityOverLifetimeModule_ReadInto_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_m98142534E7672832D7BD0DA5942D099D0B145E7C_gshared (ES3Type_LimitVelocityOverLifetimeModule_t6B4FB2973D42A4D59A39DF90E6E7FECFE8A88F5A* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m7EC146C35647387DD36351685C0DD1C98B6333D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)((LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)UnBox(L_0, LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var))));
		goto IL_02b9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1319695307)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)691593499)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)572581548))))
		{
			goto IL_0111;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)691593499))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)853203252))))
		{
			goto IL_0150;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)894689925))))
		{
			goto IL_01a4;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1319695307))))
		{
			goto IL_0165;
		}
	}
	{
		goto IL_02b3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)2072266391)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_018f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)2055488772))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)2072266391))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_02b3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)2089044010))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1976734835))))
		{
			goto IL_013b;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017a;
		}
	}
	{
		goto IL_02b3;
	}

IL_00bd:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_02b3;
	}

IL_00d2:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62, NULL);
		if (L_21)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_02b3;
	}

IL_00e7:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4, NULL);
		if (L_23)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_00fc:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6, NULL);
		if (L_25)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_02b3;
	}

IL_0111:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5, NULL);
		if (L_27)
		{
			goto IL_0215;
		}
	}
	{
		goto IL_02b3;
	}

IL_0126:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033, NULL);
		if (L_29)
		{
			goto IL_022c;
		}
	}
	{
		goto IL_02b3;
	}

IL_013b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7, NULL);
		if (L_31)
		{
			goto IL_0240;
		}
	}
	{
		goto IL_02b3;
	}

IL_0150:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8, NULL);
		if (L_33)
		{
			goto IL_0254;
		}
	}
	{
		goto IL_02b3;
	}

IL_0165:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956, NULL);
		if (L_35)
		{
			goto IL_0268;
		}
	}
	{
		goto IL_02b3;
	}

IL_017a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_37)
		{
			goto IL_027c;
		}
	}
	{
		goto IL_02b3;
	}

IL_018f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_39)
		{
			goto IL_0290;
		}
	}
	{
		goto IL_02b3;
	}

IL_01a4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (L_41)
		{
			goto IL_02a4;
		}
	}
	{
		goto IL_02b3;
	}

IL_01b9:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_42, L_43);
		LimitVelocityOverLifetimeModule_set_enabled_m0C4AC7078A4009C764CDD6C852747161626030F8((&V_0), L_44, NULL);
		// break;
		goto IL_02b9;
	}

IL_01d0:
	{
		// instance.limitX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_45, L_46);
		LimitVelocityOverLifetimeModule_set_limitX_m453163A173E91BD1FA92A85FFFB1377922264E88((&V_0), L_47, NULL);
		// break;
		goto IL_02b9;
	}

IL_01e7:
	{
		// instance.limitXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_48, L_49);
		LimitVelocityOverLifetimeModule_set_limitXMultiplier_m69A35DBE2A96DB94E1C5857C1AEA7700F315FB69((&V_0), L_50, NULL);
		// break;
		goto IL_02b9;
	}

IL_01fe:
	{
		// instance.limitY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_51, L_52);
		LimitVelocityOverLifetimeModule_set_limitY_m5C4FA3E4199843D17B358EAE552BC1530944C6ED((&V_0), L_53, NULL);
		// break;
		goto IL_02b9;
	}

IL_0215:
	{
		// instance.limitYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_54, L_55);
		LimitVelocityOverLifetimeModule_set_limitYMultiplier_mCB16226776AA3FD95FCBFEF08939CDFCDEAD1FD7((&V_0), L_56, NULL);
		// break;
		goto IL_02b9;
	}

IL_022c:
	{
		// instance.limitZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_57, L_58);
		LimitVelocityOverLifetimeModule_set_limitZ_mA7AA3F6C6EB9C1E2199DE5EDBFDFCD891E66A06C((&V_0), L_59, NULL);
		// break;
		goto IL_02b9;
	}

IL_0240:
	{
		// instance.limitZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_60, L_61);
		LimitVelocityOverLifetimeModule_set_limitZMultiplier_mF8318B3E8798E9778CD356C773A9567EBCC414DF((&V_0), L_62, NULL);
		// break;
		goto IL_02b9;
	}

IL_0254:
	{
		// instance.limit = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_63, L_64);
		LimitVelocityOverLifetimeModule_set_limit_m4714D5E0B04EAE01A49552690E9CC206AC5C7685((&V_0), L_65, NULL);
		// break;
		goto IL_02b9;
	}

IL_0268:
	{
		// instance.limitMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		LimitVelocityOverLifetimeModule_set_limitMultiplier_m520C77C943C30BFE63EF0E4BEA9593D251187B28((&V_0), L_68, NULL);
		// break;
		goto IL_02b9;
	}

IL_027c:
	{
		// instance.dampen = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_70 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_69, L_70);
		LimitVelocityOverLifetimeModule_set_dampen_mE8A893ECFE936519C3F68D440C3C6BD11065E288((&V_0), L_71, NULL);
		// break;
		goto IL_02b9;
	}

IL_0290:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_72 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_73 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_72);
		bool L_74;
		L_74 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_72, L_73);
		LimitVelocityOverLifetimeModule_set_separateAxes_m3E1D0590D45FE0D6657D99685DA4E5A231229EF0((&V_0), L_74, NULL);
		// break;
		goto IL_02b9;
	}

IL_02a4:
	{
		// instance.space = reader.Read<UnityEngine.ParticleSystemSimulationSpace>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m7EC146C35647387DD36351685C0DD1C98B6333D8_RuntimeMethod_var, L_75);
		LimitVelocityOverLifetimeModule_set_space_m54D13D862FCB1606F37A3F053138437DEBF773D5((&V_0), L_76, NULL);
		// break;
		goto IL_02b9;
	}

IL_02b3:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_77 = ___reader0;
		NullCheck(L_77);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_77);
	}

IL_02b9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_78);
		String_t* L_80 = L_79;
		V_1 = L_80;
		if (L_80)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LimitVelocityOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/EmissionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LimitVelocityOverLifetimeModule_ReadInto_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_mAD1FB8D0EEBA02866317692DB0C994FF67A3DA4D_gshared (ES3Type_LimitVelocityOverLifetimeModule_t6B4FB2973D42A4D59A39DF90E6E7FECFE8A88F5A* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m7EC146C35647387DD36351685C0DD1C98B6333D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)((LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)UnBox(L_0, LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var))));
		goto IL_02b9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1319695307)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)691593499)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)572581548))))
		{
			goto IL_0111;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)691593499))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)853203252))))
		{
			goto IL_0150;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)894689925))))
		{
			goto IL_01a4;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1319695307))))
		{
			goto IL_0165;
		}
	}
	{
		goto IL_02b3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)2072266391)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_018f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)2055488772))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)2072266391))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_02b3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)2089044010))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1976734835))))
		{
			goto IL_013b;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017a;
		}
	}
	{
		goto IL_02b3;
	}

IL_00bd:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_02b3;
	}

IL_00d2:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62, NULL);
		if (L_21)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_02b3;
	}

IL_00e7:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4, NULL);
		if (L_23)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_00fc:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6, NULL);
		if (L_25)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_02b3;
	}

IL_0111:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5, NULL);
		if (L_27)
		{
			goto IL_0215;
		}
	}
	{
		goto IL_02b3;
	}

IL_0126:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033, NULL);
		if (L_29)
		{
			goto IL_022c;
		}
	}
	{
		goto IL_02b3;
	}

IL_013b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7, NULL);
		if (L_31)
		{
			goto IL_0240;
		}
	}
	{
		goto IL_02b3;
	}

IL_0150:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8, NULL);
		if (L_33)
		{
			goto IL_0254;
		}
	}
	{
		goto IL_02b3;
	}

IL_0165:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956, NULL);
		if (L_35)
		{
			goto IL_0268;
		}
	}
	{
		goto IL_02b3;
	}

IL_017a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_37)
		{
			goto IL_027c;
		}
	}
	{
		goto IL_02b3;
	}

IL_018f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_39)
		{
			goto IL_0290;
		}
	}
	{
		goto IL_02b3;
	}

IL_01a4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (L_41)
		{
			goto IL_02a4;
		}
	}
	{
		goto IL_02b3;
	}

IL_01b9:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_42, L_43);
		LimitVelocityOverLifetimeModule_set_enabled_m0C4AC7078A4009C764CDD6C852747161626030F8((&V_0), L_44, NULL);
		// break;
		goto IL_02b9;
	}

IL_01d0:
	{
		// instance.limitX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_45, L_46);
		LimitVelocityOverLifetimeModule_set_limitX_m453163A173E91BD1FA92A85FFFB1377922264E88((&V_0), L_47, NULL);
		// break;
		goto IL_02b9;
	}

IL_01e7:
	{
		// instance.limitXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_48, L_49);
		LimitVelocityOverLifetimeModule_set_limitXMultiplier_m69A35DBE2A96DB94E1C5857C1AEA7700F315FB69((&V_0), L_50, NULL);
		// break;
		goto IL_02b9;
	}

IL_01fe:
	{
		// instance.limitY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_51, L_52);
		LimitVelocityOverLifetimeModule_set_limitY_m5C4FA3E4199843D17B358EAE552BC1530944C6ED((&V_0), L_53, NULL);
		// break;
		goto IL_02b9;
	}

IL_0215:
	{
		// instance.limitYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_54, L_55);
		LimitVelocityOverLifetimeModule_set_limitYMultiplier_mCB16226776AA3FD95FCBFEF08939CDFCDEAD1FD7((&V_0), L_56, NULL);
		// break;
		goto IL_02b9;
	}

IL_022c:
	{
		// instance.limitZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_57, L_58);
		LimitVelocityOverLifetimeModule_set_limitZ_mA7AA3F6C6EB9C1E2199DE5EDBFDFCD891E66A06C((&V_0), L_59, NULL);
		// break;
		goto IL_02b9;
	}

IL_0240:
	{
		// instance.limitZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_60, L_61);
		LimitVelocityOverLifetimeModule_set_limitZMultiplier_mF8318B3E8798E9778CD356C773A9567EBCC414DF((&V_0), L_62, NULL);
		// break;
		goto IL_02b9;
	}

IL_0254:
	{
		// instance.limit = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_63, L_64);
		LimitVelocityOverLifetimeModule_set_limit_m4714D5E0B04EAE01A49552690E9CC206AC5C7685((&V_0), L_65, NULL);
		// break;
		goto IL_02b9;
	}

IL_0268:
	{
		// instance.limitMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		LimitVelocityOverLifetimeModule_set_limitMultiplier_m520C77C943C30BFE63EF0E4BEA9593D251187B28((&V_0), L_68, NULL);
		// break;
		goto IL_02b9;
	}

IL_027c:
	{
		// instance.dampen = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_70 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_69, L_70);
		LimitVelocityOverLifetimeModule_set_dampen_mE8A893ECFE936519C3F68D440C3C6BD11065E288((&V_0), L_71, NULL);
		// break;
		goto IL_02b9;
	}

IL_0290:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_72 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_73 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_72);
		bool L_74;
		L_74 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_72, L_73);
		LimitVelocityOverLifetimeModule_set_separateAxes_m3E1D0590D45FE0D6657D99685DA4E5A231229EF0((&V_0), L_74, NULL);
		// break;
		goto IL_02b9;
	}

IL_02a4:
	{
		// instance.space = reader.Read<UnityEngine.ParticleSystemSimulationSpace>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m7EC146C35647387DD36351685C0DD1C98B6333D8_RuntimeMethod_var, L_75);
		LimitVelocityOverLifetimeModule_set_space_m54D13D862FCB1606F37A3F053138437DEBF773D5((&V_0), L_76, NULL);
		// break;
		goto IL_02b9;
	}

IL_02b3:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_77 = ___reader0;
		NullCheck(L_77);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_77);
	}

IL_02b9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_78);
		String_t* L_80 = L_79;
		V_1 = L_80;
		if (L_80)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LimitVelocityOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/ExternalForcesModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LimitVelocityOverLifetimeModule_ReadInto_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_mFE125FA4A232EB4EF369BEA3B9508F6C9CE96FFC_gshared (ES3Type_LimitVelocityOverLifetimeModule_t6B4FB2973D42A4D59A39DF90E6E7FECFE8A88F5A* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m7EC146C35647387DD36351685C0DD1C98B6333D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)((LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)UnBox(L_0, LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var))));
		goto IL_02b9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1319695307)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)691593499)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)572581548))))
		{
			goto IL_0111;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)691593499))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)853203252))))
		{
			goto IL_0150;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)894689925))))
		{
			goto IL_01a4;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1319695307))))
		{
			goto IL_0165;
		}
	}
	{
		goto IL_02b3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)2072266391)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_018f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)2055488772))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)2072266391))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_02b3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)2089044010))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1976734835))))
		{
			goto IL_013b;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017a;
		}
	}
	{
		goto IL_02b3;
	}

IL_00bd:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_02b3;
	}

IL_00d2:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62, NULL);
		if (L_21)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_02b3;
	}

IL_00e7:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4, NULL);
		if (L_23)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_00fc:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6, NULL);
		if (L_25)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_02b3;
	}

IL_0111:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5, NULL);
		if (L_27)
		{
			goto IL_0215;
		}
	}
	{
		goto IL_02b3;
	}

IL_0126:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033, NULL);
		if (L_29)
		{
			goto IL_022c;
		}
	}
	{
		goto IL_02b3;
	}

IL_013b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7, NULL);
		if (L_31)
		{
			goto IL_0240;
		}
	}
	{
		goto IL_02b3;
	}

IL_0150:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8, NULL);
		if (L_33)
		{
			goto IL_0254;
		}
	}
	{
		goto IL_02b3;
	}

IL_0165:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956, NULL);
		if (L_35)
		{
			goto IL_0268;
		}
	}
	{
		goto IL_02b3;
	}

IL_017a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_37)
		{
			goto IL_027c;
		}
	}
	{
		goto IL_02b3;
	}

IL_018f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_39)
		{
			goto IL_0290;
		}
	}
	{
		goto IL_02b3;
	}

IL_01a4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (L_41)
		{
			goto IL_02a4;
		}
	}
	{
		goto IL_02b3;
	}

IL_01b9:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_42, L_43);
		LimitVelocityOverLifetimeModule_set_enabled_m0C4AC7078A4009C764CDD6C852747161626030F8((&V_0), L_44, NULL);
		// break;
		goto IL_02b9;
	}

IL_01d0:
	{
		// instance.limitX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_45, L_46);
		LimitVelocityOverLifetimeModule_set_limitX_m453163A173E91BD1FA92A85FFFB1377922264E88((&V_0), L_47, NULL);
		// break;
		goto IL_02b9;
	}

IL_01e7:
	{
		// instance.limitXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_48, L_49);
		LimitVelocityOverLifetimeModule_set_limitXMultiplier_m69A35DBE2A96DB94E1C5857C1AEA7700F315FB69((&V_0), L_50, NULL);
		// break;
		goto IL_02b9;
	}

IL_01fe:
	{
		// instance.limitY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_51, L_52);
		LimitVelocityOverLifetimeModule_set_limitY_m5C4FA3E4199843D17B358EAE552BC1530944C6ED((&V_0), L_53, NULL);
		// break;
		goto IL_02b9;
	}

IL_0215:
	{
		// instance.limitYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_54, L_55);
		LimitVelocityOverLifetimeModule_set_limitYMultiplier_mCB16226776AA3FD95FCBFEF08939CDFCDEAD1FD7((&V_0), L_56, NULL);
		// break;
		goto IL_02b9;
	}

IL_022c:
	{
		// instance.limitZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_57, L_58);
		LimitVelocityOverLifetimeModule_set_limitZ_mA7AA3F6C6EB9C1E2199DE5EDBFDFCD891E66A06C((&V_0), L_59, NULL);
		// break;
		goto IL_02b9;
	}

IL_0240:
	{
		// instance.limitZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_60, L_61);
		LimitVelocityOverLifetimeModule_set_limitZMultiplier_mF8318B3E8798E9778CD356C773A9567EBCC414DF((&V_0), L_62, NULL);
		// break;
		goto IL_02b9;
	}

IL_0254:
	{
		// instance.limit = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_63, L_64);
		LimitVelocityOverLifetimeModule_set_limit_m4714D5E0B04EAE01A49552690E9CC206AC5C7685((&V_0), L_65, NULL);
		// break;
		goto IL_02b9;
	}

IL_0268:
	{
		// instance.limitMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		LimitVelocityOverLifetimeModule_set_limitMultiplier_m520C77C943C30BFE63EF0E4BEA9593D251187B28((&V_0), L_68, NULL);
		// break;
		goto IL_02b9;
	}

IL_027c:
	{
		// instance.dampen = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_70 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_69, L_70);
		LimitVelocityOverLifetimeModule_set_dampen_mE8A893ECFE936519C3F68D440C3C6BD11065E288((&V_0), L_71, NULL);
		// break;
		goto IL_02b9;
	}

IL_0290:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_72 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_73 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_72);
		bool L_74;
		L_74 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_72, L_73);
		LimitVelocityOverLifetimeModule_set_separateAxes_m3E1D0590D45FE0D6657D99685DA4E5A231229EF0((&V_0), L_74, NULL);
		// break;
		goto IL_02b9;
	}

IL_02a4:
	{
		// instance.space = reader.Read<UnityEngine.ParticleSystemSimulationSpace>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m7EC146C35647387DD36351685C0DD1C98B6333D8_RuntimeMethod_var, L_75);
		LimitVelocityOverLifetimeModule_set_space_m54D13D862FCB1606F37A3F053138437DEBF773D5((&V_0), L_76, NULL);
		// break;
		goto IL_02b9;
	}

IL_02b3:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_77 = ___reader0;
		NullCheck(L_77);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_77);
	}

IL_02b9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_78);
		String_t* L_80 = L_79;
		V_1 = L_80;
		if (L_80)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LimitVelocityOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/ForceOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LimitVelocityOverLifetimeModule_ReadInto_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_m6D8FD0A6AC63CEEF1E18A11D962A11514FA14779_gshared (ES3Type_LimitVelocityOverLifetimeModule_t6B4FB2973D42A4D59A39DF90E6E7FECFE8A88F5A* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m7EC146C35647387DD36351685C0DD1C98B6333D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)((LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)UnBox(L_0, LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var))));
		goto IL_02b9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1319695307)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)691593499)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)572581548))))
		{
			goto IL_0111;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)691593499))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)853203252))))
		{
			goto IL_0150;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)894689925))))
		{
			goto IL_01a4;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1319695307))))
		{
			goto IL_0165;
		}
	}
	{
		goto IL_02b3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)2072266391)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_018f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)2055488772))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)2072266391))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_02b3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)2089044010))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1976734835))))
		{
			goto IL_013b;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017a;
		}
	}
	{
		goto IL_02b3;
	}

IL_00bd:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_02b3;
	}

IL_00d2:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62, NULL);
		if (L_21)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_02b3;
	}

IL_00e7:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4, NULL);
		if (L_23)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_00fc:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6, NULL);
		if (L_25)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_02b3;
	}

IL_0111:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5, NULL);
		if (L_27)
		{
			goto IL_0215;
		}
	}
	{
		goto IL_02b3;
	}

IL_0126:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033, NULL);
		if (L_29)
		{
			goto IL_022c;
		}
	}
	{
		goto IL_02b3;
	}

IL_013b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7, NULL);
		if (L_31)
		{
			goto IL_0240;
		}
	}
	{
		goto IL_02b3;
	}

IL_0150:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8, NULL);
		if (L_33)
		{
			goto IL_0254;
		}
	}
	{
		goto IL_02b3;
	}

IL_0165:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956, NULL);
		if (L_35)
		{
			goto IL_0268;
		}
	}
	{
		goto IL_02b3;
	}

IL_017a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_37)
		{
			goto IL_027c;
		}
	}
	{
		goto IL_02b3;
	}

IL_018f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_39)
		{
			goto IL_0290;
		}
	}
	{
		goto IL_02b3;
	}

IL_01a4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (L_41)
		{
			goto IL_02a4;
		}
	}
	{
		goto IL_02b3;
	}

IL_01b9:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_42, L_43);
		LimitVelocityOverLifetimeModule_set_enabled_m0C4AC7078A4009C764CDD6C852747161626030F8((&V_0), L_44, NULL);
		// break;
		goto IL_02b9;
	}

IL_01d0:
	{
		// instance.limitX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_45, L_46);
		LimitVelocityOverLifetimeModule_set_limitX_m453163A173E91BD1FA92A85FFFB1377922264E88((&V_0), L_47, NULL);
		// break;
		goto IL_02b9;
	}

IL_01e7:
	{
		// instance.limitXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_48, L_49);
		LimitVelocityOverLifetimeModule_set_limitXMultiplier_m69A35DBE2A96DB94E1C5857C1AEA7700F315FB69((&V_0), L_50, NULL);
		// break;
		goto IL_02b9;
	}

IL_01fe:
	{
		// instance.limitY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_51, L_52);
		LimitVelocityOverLifetimeModule_set_limitY_m5C4FA3E4199843D17B358EAE552BC1530944C6ED((&V_0), L_53, NULL);
		// break;
		goto IL_02b9;
	}

IL_0215:
	{
		// instance.limitYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_54, L_55);
		LimitVelocityOverLifetimeModule_set_limitYMultiplier_mCB16226776AA3FD95FCBFEF08939CDFCDEAD1FD7((&V_0), L_56, NULL);
		// break;
		goto IL_02b9;
	}

IL_022c:
	{
		// instance.limitZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_57, L_58);
		LimitVelocityOverLifetimeModule_set_limitZ_mA7AA3F6C6EB9C1E2199DE5EDBFDFCD891E66A06C((&V_0), L_59, NULL);
		// break;
		goto IL_02b9;
	}

IL_0240:
	{
		// instance.limitZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_60, L_61);
		LimitVelocityOverLifetimeModule_set_limitZMultiplier_mF8318B3E8798E9778CD356C773A9567EBCC414DF((&V_0), L_62, NULL);
		// break;
		goto IL_02b9;
	}

IL_0254:
	{
		// instance.limit = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_63, L_64);
		LimitVelocityOverLifetimeModule_set_limit_m4714D5E0B04EAE01A49552690E9CC206AC5C7685((&V_0), L_65, NULL);
		// break;
		goto IL_02b9;
	}

IL_0268:
	{
		// instance.limitMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		LimitVelocityOverLifetimeModule_set_limitMultiplier_m520C77C943C30BFE63EF0E4BEA9593D251187B28((&V_0), L_68, NULL);
		// break;
		goto IL_02b9;
	}

IL_027c:
	{
		// instance.dampen = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_70 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_69, L_70);
		LimitVelocityOverLifetimeModule_set_dampen_mE8A893ECFE936519C3F68D440C3C6BD11065E288((&V_0), L_71, NULL);
		// break;
		goto IL_02b9;
	}

IL_0290:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_72 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_73 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_72);
		bool L_74;
		L_74 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_72, L_73);
		LimitVelocityOverLifetimeModule_set_separateAxes_m3E1D0590D45FE0D6657D99685DA4E5A231229EF0((&V_0), L_74, NULL);
		// break;
		goto IL_02b9;
	}

IL_02a4:
	{
		// instance.space = reader.Read<UnityEngine.ParticleSystemSimulationSpace>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m7EC146C35647387DD36351685C0DD1C98B6333D8_RuntimeMethod_var, L_75);
		LimitVelocityOverLifetimeModule_set_space_m54D13D862FCB1606F37A3F053138437DEBF773D5((&V_0), L_76, NULL);
		// break;
		goto IL_02b9;
	}

IL_02b3:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_77 = ___reader0;
		NullCheck(L_77);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_77);
	}

IL_02b9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_78);
		String_t* L_80 = L_79;
		V_1 = L_80;
		if (L_80)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LimitVelocityOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/InheritVelocityModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LimitVelocityOverLifetimeModule_ReadInto_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_mBB108A65FFEC5BF1EAFF2BE76FAC5F52005F1169_gshared (ES3Type_LimitVelocityOverLifetimeModule_t6B4FB2973D42A4D59A39DF90E6E7FECFE8A88F5A* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m7EC146C35647387DD36351685C0DD1C98B6333D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)((LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)UnBox(L_0, LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var))));
		goto IL_02b9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1319695307)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)691593499)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)572581548))))
		{
			goto IL_0111;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)691593499))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)853203252))))
		{
			goto IL_0150;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)894689925))))
		{
			goto IL_01a4;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1319695307))))
		{
			goto IL_0165;
		}
	}
	{
		goto IL_02b3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)2072266391)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_018f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)2055488772))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)2072266391))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_02b3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)2089044010))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1976734835))))
		{
			goto IL_013b;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017a;
		}
	}
	{
		goto IL_02b3;
	}

IL_00bd:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_02b3;
	}

IL_00d2:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62, NULL);
		if (L_21)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_02b3;
	}

IL_00e7:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4, NULL);
		if (L_23)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_00fc:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6, NULL);
		if (L_25)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_02b3;
	}

IL_0111:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5, NULL);
		if (L_27)
		{
			goto IL_0215;
		}
	}
	{
		goto IL_02b3;
	}

IL_0126:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033, NULL);
		if (L_29)
		{
			goto IL_022c;
		}
	}
	{
		goto IL_02b3;
	}

IL_013b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7, NULL);
		if (L_31)
		{
			goto IL_0240;
		}
	}
	{
		goto IL_02b3;
	}

IL_0150:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8, NULL);
		if (L_33)
		{
			goto IL_0254;
		}
	}
	{
		goto IL_02b3;
	}

IL_0165:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956, NULL);
		if (L_35)
		{
			goto IL_0268;
		}
	}
	{
		goto IL_02b3;
	}

IL_017a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_37)
		{
			goto IL_027c;
		}
	}
	{
		goto IL_02b3;
	}

IL_018f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_39)
		{
			goto IL_0290;
		}
	}
	{
		goto IL_02b3;
	}

IL_01a4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (L_41)
		{
			goto IL_02a4;
		}
	}
	{
		goto IL_02b3;
	}

IL_01b9:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_42, L_43);
		LimitVelocityOverLifetimeModule_set_enabled_m0C4AC7078A4009C764CDD6C852747161626030F8((&V_0), L_44, NULL);
		// break;
		goto IL_02b9;
	}

IL_01d0:
	{
		// instance.limitX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_45, L_46);
		LimitVelocityOverLifetimeModule_set_limitX_m453163A173E91BD1FA92A85FFFB1377922264E88((&V_0), L_47, NULL);
		// break;
		goto IL_02b9;
	}

IL_01e7:
	{
		// instance.limitXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_48, L_49);
		LimitVelocityOverLifetimeModule_set_limitXMultiplier_m69A35DBE2A96DB94E1C5857C1AEA7700F315FB69((&V_0), L_50, NULL);
		// break;
		goto IL_02b9;
	}

IL_01fe:
	{
		// instance.limitY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_51, L_52);
		LimitVelocityOverLifetimeModule_set_limitY_m5C4FA3E4199843D17B358EAE552BC1530944C6ED((&V_0), L_53, NULL);
		// break;
		goto IL_02b9;
	}

IL_0215:
	{
		// instance.limitYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_54, L_55);
		LimitVelocityOverLifetimeModule_set_limitYMultiplier_mCB16226776AA3FD95FCBFEF08939CDFCDEAD1FD7((&V_0), L_56, NULL);
		// break;
		goto IL_02b9;
	}

IL_022c:
	{
		// instance.limitZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_57, L_58);
		LimitVelocityOverLifetimeModule_set_limitZ_mA7AA3F6C6EB9C1E2199DE5EDBFDFCD891E66A06C((&V_0), L_59, NULL);
		// break;
		goto IL_02b9;
	}

IL_0240:
	{
		// instance.limitZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_60, L_61);
		LimitVelocityOverLifetimeModule_set_limitZMultiplier_mF8318B3E8798E9778CD356C773A9567EBCC414DF((&V_0), L_62, NULL);
		// break;
		goto IL_02b9;
	}

IL_0254:
	{
		// instance.limit = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_63, L_64);
		LimitVelocityOverLifetimeModule_set_limit_m4714D5E0B04EAE01A49552690E9CC206AC5C7685((&V_0), L_65, NULL);
		// break;
		goto IL_02b9;
	}

IL_0268:
	{
		// instance.limitMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		LimitVelocityOverLifetimeModule_set_limitMultiplier_m520C77C943C30BFE63EF0E4BEA9593D251187B28((&V_0), L_68, NULL);
		// break;
		goto IL_02b9;
	}

IL_027c:
	{
		// instance.dampen = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_70 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_69, L_70);
		LimitVelocityOverLifetimeModule_set_dampen_mE8A893ECFE936519C3F68D440C3C6BD11065E288((&V_0), L_71, NULL);
		// break;
		goto IL_02b9;
	}

IL_0290:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_72 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_73 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_72);
		bool L_74;
		L_74 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_72, L_73);
		LimitVelocityOverLifetimeModule_set_separateAxes_m3E1D0590D45FE0D6657D99685DA4E5A231229EF0((&V_0), L_74, NULL);
		// break;
		goto IL_02b9;
	}

IL_02a4:
	{
		// instance.space = reader.Read<UnityEngine.ParticleSystemSimulationSpace>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m7EC146C35647387DD36351685C0DD1C98B6333D8_RuntimeMethod_var, L_75);
		LimitVelocityOverLifetimeModule_set_space_m54D13D862FCB1606F37A3F053138437DEBF773D5((&V_0), L_76, NULL);
		// break;
		goto IL_02b9;
	}

IL_02b3:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_77 = ___reader0;
		NullCheck(L_77);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_77);
	}

IL_02b9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_78);
		String_t* L_80 = L_79;
		V_1 = L_80;
		if (L_80)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LimitVelocityOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/LightsModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LimitVelocityOverLifetimeModule_ReadInto_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_mD58BA47DD9A091CA2A086FF2754162FCD52260D4_gshared (ES3Type_LimitVelocityOverLifetimeModule_t6B4FB2973D42A4D59A39DF90E6E7FECFE8A88F5A* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m7EC146C35647387DD36351685C0DD1C98B6333D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)((LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)UnBox(L_0, LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var))));
		goto IL_02b9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1319695307)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)691593499)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)572581548))))
		{
			goto IL_0111;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)691593499))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)853203252))))
		{
			goto IL_0150;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)894689925))))
		{
			goto IL_01a4;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1319695307))))
		{
			goto IL_0165;
		}
	}
	{
		goto IL_02b3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)2072266391)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_018f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)2055488772))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)2072266391))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_02b3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)2089044010))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1976734835))))
		{
			goto IL_013b;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017a;
		}
	}
	{
		goto IL_02b3;
	}

IL_00bd:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_02b3;
	}

IL_00d2:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62, NULL);
		if (L_21)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_02b3;
	}

IL_00e7:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4, NULL);
		if (L_23)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_00fc:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6, NULL);
		if (L_25)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_02b3;
	}

IL_0111:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5, NULL);
		if (L_27)
		{
			goto IL_0215;
		}
	}
	{
		goto IL_02b3;
	}

IL_0126:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033, NULL);
		if (L_29)
		{
			goto IL_022c;
		}
	}
	{
		goto IL_02b3;
	}

IL_013b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7, NULL);
		if (L_31)
		{
			goto IL_0240;
		}
	}
	{
		goto IL_02b3;
	}

IL_0150:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8, NULL);
		if (L_33)
		{
			goto IL_0254;
		}
	}
	{
		goto IL_02b3;
	}

IL_0165:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956, NULL);
		if (L_35)
		{
			goto IL_0268;
		}
	}
	{
		goto IL_02b3;
	}

IL_017a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_37)
		{
			goto IL_027c;
		}
	}
	{
		goto IL_02b3;
	}

IL_018f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_39)
		{
			goto IL_0290;
		}
	}
	{
		goto IL_02b3;
	}

IL_01a4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (L_41)
		{
			goto IL_02a4;
		}
	}
	{
		goto IL_02b3;
	}

IL_01b9:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_42, L_43);
		LimitVelocityOverLifetimeModule_set_enabled_m0C4AC7078A4009C764CDD6C852747161626030F8((&V_0), L_44, NULL);
		// break;
		goto IL_02b9;
	}

IL_01d0:
	{
		// instance.limitX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_45, L_46);
		LimitVelocityOverLifetimeModule_set_limitX_m453163A173E91BD1FA92A85FFFB1377922264E88((&V_0), L_47, NULL);
		// break;
		goto IL_02b9;
	}

IL_01e7:
	{
		// instance.limitXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_48, L_49);
		LimitVelocityOverLifetimeModule_set_limitXMultiplier_m69A35DBE2A96DB94E1C5857C1AEA7700F315FB69((&V_0), L_50, NULL);
		// break;
		goto IL_02b9;
	}

IL_01fe:
	{
		// instance.limitY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_51, L_52);
		LimitVelocityOverLifetimeModule_set_limitY_m5C4FA3E4199843D17B358EAE552BC1530944C6ED((&V_0), L_53, NULL);
		// break;
		goto IL_02b9;
	}

IL_0215:
	{
		// instance.limitYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_54, L_55);
		LimitVelocityOverLifetimeModule_set_limitYMultiplier_mCB16226776AA3FD95FCBFEF08939CDFCDEAD1FD7((&V_0), L_56, NULL);
		// break;
		goto IL_02b9;
	}

IL_022c:
	{
		// instance.limitZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_57, L_58);
		LimitVelocityOverLifetimeModule_set_limitZ_mA7AA3F6C6EB9C1E2199DE5EDBFDFCD891E66A06C((&V_0), L_59, NULL);
		// break;
		goto IL_02b9;
	}

IL_0240:
	{
		// instance.limitZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_61 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_60, L_61);
		LimitVelocityOverLifetimeModule_set_limitZMultiplier_mF8318B3E8798E9778CD356C773A9567EBCC414DF((&V_0), L_62, NULL);
		// break;
		goto IL_02b9;
	}

IL_0254:
	{
		// instance.limit = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_63, L_64);
		LimitVelocityOverLifetimeModule_set_limit_m4714D5E0B04EAE01A49552690E9CC206AC5C7685((&V_0), L_65, NULL);
		// break;
		goto IL_02b9;
	}

IL_0268:
	{
		// instance.limitMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_67 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_66, L_67);
		LimitVelocityOverLifetimeModule_set_limitMultiplier_m520C77C943C30BFE63EF0E4BEA9593D251187B28((&V_0), L_68, NULL);
		// break;
		goto IL_02b9;
	}

IL_027c:
	{
		// instance.dampen = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_70 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_69, L_70);
		LimitVelocityOverLifetimeModule_set_dampen_mE8A893ECFE936519C3F68D440C3C6BD11065E288((&V_0), L_71, NULL);
		// break;
		goto IL_02b9;
	}

IL_0290:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_72 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_73 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_72);
		bool L_74;
		L_74 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_72, L_73);
		LimitVelocityOverLifetimeModule_set_separateAxes_m3E1D0590D45FE0D6657D99685DA4E5A231229EF0((&V_0), L_74, NULL);
		// break;
		goto IL_02b9;
	}

IL_02a4:
	{
		// instance.space = reader.Read<UnityEngine.ParticleSystemSimulationSpace>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m7EC146C35647387DD36351685C0DD1C98B6333D8_RuntimeMethod_var, L_75);
		LimitVelocityOverLifetimeModule_set_space_m54D13D862FCB1606F37A3F053138437DEBF773D5((&V_0), L_76, NULL);
		// break;
		goto IL_02b9;
	}

IL_02b3:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_77 = ___reader0;
		NullCheck(L_77);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_77);
	}

IL_02b9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_78);
		String_t* L_80 = L_79;
		V_1 = L_80;
		if (L_80)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
