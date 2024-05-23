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
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// ES3Reader
struct ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A;
// ES3Settings
struct ES3Settings_t8500938678A8E9CAC90B24DD70C4C7D2E66026AB;
// ES3Types.ES3Type
struct ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687;
// ES3Types.ES3Type_Burst
struct ES3Type_Burst_t40787EA2EAC906926AD4179AD777757B27953B7F;
// ES3Types.ES3Type_Camera
struct ES3Type_Camera_tC146C6083991760C12741B3A3EC65E2A5A03182F;
// ES3Types.ES3Type_CapsuleCollider
struct ES3Type_CapsuleCollider_t961C5E66755C7ABE01D0486E58B3101A9D30F10D;
// ES3Types.ES3Type_CollisionModule
struct ES3Type_CollisionModule_t7A22413B662CBACC43272C04F1C8017CAB0BAF5F;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// ES3Reader/ES3ReaderPropertyEnumerator
struct ES3ReaderPropertyEnumerator_t2948B3DC88B88DF76A6ED9F660F7055F08697C37;

IL2CPP_EXTERN_C RuntimeClass* Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Vector3_tBEBB6BA6FF3FA98D90871CDA974F8FD5A4CA364C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral0A881043E95C95CD7EEFB78B76222E69731E2B6A;
IL2CPP_EXTERN_C String_t* _stringLiteral0E43178D749CE80F6CE0900EB962639B261C328C;
IL2CPP_EXTERN_C String_t* _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D;
IL2CPP_EXTERN_C String_t* _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB;
IL2CPP_EXTERN_C String_t* _stringLiteral15508EDDEB2DD445C6399477C142A41D34A12A9A;
IL2CPP_EXTERN_C String_t* _stringLiteral1ADBD3462977FA535070E2C582D0CD1961C073B0;
IL2CPP_EXTERN_C String_t* _stringLiteral2426528052B77F56DDF7722F2DA8B7012E27AD1E;
IL2CPP_EXTERN_C String_t* _stringLiteral24DF95401885DF3F59ABAE4A56A5D6940BD4487D;
IL2CPP_EXTERN_C String_t* _stringLiteral25CBB5E01B6AB406133346773028FD5665D9762B;
IL2CPP_EXTERN_C String_t* _stringLiteral279580B990B8C49BA46E7BDBCCA6E9322580B3E3;
IL2CPP_EXTERN_C String_t* _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC;
IL2CPP_EXTERN_C String_t* _stringLiteral2FC41AE087B9CE4271A78770924313D7C3A3374C;
IL2CPP_EXTERN_C String_t* _stringLiteral2FFF489A02BBDDCC996E889F0ECEBCE205866069;
IL2CPP_EXTERN_C String_t* _stringLiteral33287F105C03C1EEEA6FE0E3FD01FE17D1E27838;
IL2CPP_EXTERN_C String_t* _stringLiteral3450A2BB8216F70D528215A296AEDB3D212C7EED;
IL2CPP_EXTERN_C String_t* _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D;
IL2CPP_EXTERN_C String_t* _stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7;
IL2CPP_EXTERN_C String_t* _stringLiteral416E9D0238C213CFB1C61EDAB93C78CA25E2D04B;
IL2CPP_EXTERN_C String_t* _stringLiteral4B21B1B7385FD1827474681D5EFAC0BAB0EF3F78;
IL2CPP_EXTERN_C String_t* _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12;
IL2CPP_EXTERN_C String_t* _stringLiteral51C6279E31F7483126B79E3000116001A915B690;
IL2CPP_EXTERN_C String_t* _stringLiteral56BB179D4225EC792D90D4EB4244CDE822EFE061;
IL2CPP_EXTERN_C String_t* _stringLiteral59287C7C82FA1D4E9B8B782CF3B247159C27266B;
IL2CPP_EXTERN_C String_t* _stringLiteral5B29EA5529626A746755F52D4F60E51F08CE9D6E;
IL2CPP_EXTERN_C String_t* _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2;
IL2CPP_EXTERN_C String_t* _stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563;
IL2CPP_EXTERN_C String_t* _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866;
IL2CPP_EXTERN_C String_t* _stringLiteral6F7F9963A2354D2A1DAE9EB5D17828E80398A34E;
IL2CPP_EXTERN_C String_t* _stringLiteral7282D2D87E28F6066D5F7A27A8DC3C96DAA6972E;
IL2CPP_EXTERN_C String_t* _stringLiteral72ECDD9F8744E37D4431E7D17FE954DD88ABF383;
IL2CPP_EXTERN_C String_t* _stringLiteral743B5A800B68BECD32E89977C700248578EFB001;
IL2CPP_EXTERN_C String_t* _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765;
IL2CPP_EXTERN_C String_t* _stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0;
IL2CPP_EXTERN_C String_t* _stringLiteral8DA8AFDD219E22BEDB1EEBFEFF7F55BCCFF25321;
IL2CPP_EXTERN_C String_t* _stringLiteral93A2504DF2B7CEC07BFB50DA34E690ECDA6D0AF8;
IL2CPP_EXTERN_C String_t* _stringLiteral99F08572328E98DBF4CC4A84E8F63C174B20ACD5;
IL2CPP_EXTERN_C String_t* _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C;
IL2CPP_EXTERN_C String_t* _stringLiteralA3605E0B32CE904E6987AD1752FB71874AD88A14;
IL2CPP_EXTERN_C String_t* _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82;
IL2CPP_EXTERN_C String_t* _stringLiteralA5454FE23184B1242AD621EDDE008CDD28151CD7;
IL2CPP_EXTERN_C String_t* _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74;
IL2CPP_EXTERN_C String_t* _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF;
IL2CPP_EXTERN_C String_t* _stringLiteralB5C170A69937273D1C83AA24B8AB19B8573C0944;
IL2CPP_EXTERN_C String_t* _stringLiteralBAFF7BFDA31C03C7CD9F538694643C1B6F4F6E06;
IL2CPP_EXTERN_C String_t* _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0;
IL2CPP_EXTERN_C String_t* _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118;
IL2CPP_EXTERN_C String_t* _stringLiteralC196E17AD203E72A6B92D147514E41254F0761B8;
IL2CPP_EXTERN_C String_t* _stringLiteralC220E5ABB03B498FA9E8AE08256C71E0C463D910;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406;
IL2CPP_EXTERN_C String_t* _stringLiteralC81C0124D6F1F39788E93F522707AAE533F9B8C6;
IL2CPP_EXTERN_C String_t* _stringLiteralC8B4992E5FEE587EA2295F1BD0BFB52535A5F706;
IL2CPP_EXTERN_C String_t* _stringLiteralD3DAE436D34E1BFB3B81BD5C319049A2E9F9BF3D;
IL2CPP_EXTERN_C String_t* _stringLiteralE2EFADC5918C584979720A43A96D5018AA95AC7D;
IL2CPP_EXTERN_C String_t* _stringLiteralEE20595A7743C0867AD4CA74E5DC593528786492;
IL2CPP_EXTERN_C String_t* _stringLiteralEFA505452FE4BB2CE49EF1450AD597A05A908CC7;
IL2CPP_EXTERN_C String_t* _stringLiteralF26F502B14F503952C33ADFF928357DED0388E8D;
IL2CPP_EXTERN_C String_t* _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7;
IL2CPP_EXTERN_C String_t* _stringLiteralF93B8B973C7D65F166A00E96F1D4A4A414708130;
IL2CPP_EXTERN_C String_t* _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B;
IL2CPP_EXTERN_C String_t* _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisCameraClearFlags_t91B921013F611457A09B92EF9C6B218CECF67202_m732408F80D81FE4865E310BC66E004410C1D4535_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisCameraType_tCA1017DBE96964E1D967942FB98F152F14121FCD_m04BFB4EE61777675F5AC8AF2FEB46C21532B6AF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mC041ABAFD847F57C6FC0692A54FDEF888CEF1694_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisDepthTextureMode_t64422B6053A3474607EEBAB848B2049ECE39472D_m3CCBAEF949FAAA8EC817EF26339140D38758DE1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisHideFlags_tC514182ACEFD3B847988C45D5DB812FF6DB1BF4A_m36F4D84DE5068416FE003C875121A214616DD8A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mB8E6B823E75B87342E79516E71B789A68CB1E267_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m8ACD7A96565532BBAEE307CD97D65075919C09F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisOpaqueSortMode_tBF053A349A61D37C9D45A1DBC339259F20E98E83_m0E76BEF98D5BFC978BD2EC58029F301464998D84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mED17A1D55E1C1593A8EF06BCC760FD82F186762B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mCCC05AFC540C86BAD387798DF43D89E22C69B7BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m3988D04C24E21D35CEFAD237A2A62C41F37B10E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisPhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131_mD3F474BFEB6F1EEBB6736AD77E67DBDF31D08227_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m95E8431D073E50D89F48E73AF0155B4A66EC30E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisRenderingPath_t8FE80D49AAC236E30E65DAB2FCDB53A4151B654D_m2B73252B0714826360E1BE3FBF866A1BC2CD16AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisStereoTargetEyeMask_t938A55A4503B0E0F4673D0014089585B55865C93_m352E05D9522CD0B0FB8C5A6E99BECB3D64D88F4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisTransparencySortMode_t37A2377DA9F8D6D10C927284BC4F27443D78FC02_m9F35A471B07689EEFD1DC36DCD919C0F4C3827DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m2FB5D193538173A928BC95202B90C4900D1F0F8D_RuntimeMethod_var;


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

// ES3Types.ES3Type_Burst
struct ES3Type_Burst_t40787EA2EAC906926AD4179AD777757B27953B7F  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};

struct ES3Type_Burst_t40787EA2EAC906926AD4179AD777757B27953B7F_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Burst::Instance
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance_13;
};

// ES3Types.ES3Type_CollisionModule
struct ES3Type_CollisionModule_t7A22413B662CBACC43272C04F1C8017CAB0BAF5F  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};

struct ES3Type_CollisionModule_t7A22413B662CBACC43272C04F1C8017CAB0BAF5F_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_CollisionModule::Instance
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

// ES3Types.ES3Type_Vector3
struct ES3Type_Vector3_tBEBB6BA6FF3FA98D90871CDA974F8FD5A4CA364C  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};

struct ES3Type_Vector3_tBEBB6BA6FF3FA98D90871CDA974F8FD5A4CA364C_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Vector3::Instance
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

// ES3Types.ES3Type_short
struct ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};

struct ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_short::Instance
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance_13;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
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

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
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

// UnityEngine.ParticleSystem/CollisionModule
struct CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/CollisionModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/CollisionModule
struct CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/CollisionModule
struct CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_marshaled_com
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

// UnityEngine.ParticleSystem/Burst
struct Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 
{
	// System.Single UnityEngine.ParticleSystem/Burst::m_Time
	float ___m_Time_0;
	// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/Burst::m_Count
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___m_Count_1;
	// System.Int32 UnityEngine.ParticleSystem/Burst::m_RepeatCount
	int32_t ___m_RepeatCount_2;
	// System.Single UnityEngine.ParticleSystem/Burst::m_RepeatInterval
	float ___m_RepeatInterval_3;
	// System.Single UnityEngine.ParticleSystem/Burst::m_InvProbability
	float ___m_InvProbability_4;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// ES3Types.ES3ComponentType
struct ES3ComponentType_t66C6E8582E8061D09D4477097EE2869AD648F6E9  : public ES3UnityObjectType_tF653280D2691EBD1459EF886ACEA2E98FC30CAEE
{
};

// UnityEngine.PhysicMaterial
struct PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// ES3Types.ES3Type_Camera
struct ES3Type_Camera_tC146C6083991760C12741B3A3EC65E2A5A03182F  : public ES3ComponentType_t66C6E8582E8061D09D4477097EE2869AD648F6E9
{
};

struct ES3Type_Camera_tC146C6083991760C12741B3A3EC65E2A5A03182F_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Camera::Instance
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance_14;
};

// ES3Types.ES3Type_CapsuleCollider
struct ES3Type_CapsuleCollider_t961C5E66755C7ABE01D0486E58B3101A9D30F10D  : public ES3ComponentType_t66C6E8582E8061D09D4477097EE2869AD648F6E9
{
};

struct ES3Type_CapsuleCollider_t961C5E66755C7ABE01D0486E58B3101A9D30F10D_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_CapsuleCollider::Instance
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance_14;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/Burst::set_time(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Burst_set_time_mF53402DA04A70DC5CAE65C37721C39E2FF5F55BC (Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/Burst::set_count(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Burst_set_count_m9386E449ABE86FEF1279312582D3D5E28530C999 (Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/Burst::set_minCount(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Burst_set_minCount_m842E848A5F6258CDD547F0E338BF67E855F6CF11 (Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858* __this, int16_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/Burst::set_maxCount(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Burst_set_maxCount_mE084ABCE7DA30E7CB87A23392ED9FE488B7A4937 (Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858* __this, int16_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/Burst::set_cycleCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Burst_set_cycleCount_m05108C6D7DEE82C257A403A595321A3A38C5CAD6 (Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/Burst::set_repeatInterval(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Burst_set_repeatInterval_m0353AAB1836FE2C202933D776366A269D4E19D74 (Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/Burst::set_probability(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Burst_set_probability_m3E3B21EA54BA0E50252514D60DE02F65788C31BF (Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858* __this, float ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ES3Reader/ES3ReaderPropertyEnumerator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3ReaderPropertyEnumerator_GetEnumerator_mBF25A2B7B71596A1DCB090DD81E708091D1D4478 (ES3ReaderPropertyEnumerator_t2948B3DC88B88DF76A6ED9F660F7055F08697C37* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_nearClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_nearClipPlane_m78482B5E4E0CE4C195D9CE0332AA75B2D9CCDDF6 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_farClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_farClipPlane_m84EF39B09573168734613481FD979BFF31C60139 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_renderingPath(UnityEngine.RenderingPath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_renderingPath_m5BD8E4230DE3DD68F722AED5D85271E2A2B026B3 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_allowHDR(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_allowHDR_m44211153DAF6DF9A51142EC7760A53777C1F3315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_orthographic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographic_m64915C0840A68E526830A69F1C40257206185020 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_opaqueSortMode(UnityEngine.Rendering.OpaqueSortMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_opaqueSortMode_m45FC08DB8CE4F0D12E99335ECC3B3DD9C9DB1CB9 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_transparencySortMode(UnityEngine.TransparencySortMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_transparencySortMode_m1D37AE58E5514F4CE38D3F33CC1B0A6A7F1C1013 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_depth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_depth_m595FA2A4FEBC90E730810BBFB55E4A2C2134066F (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_aspect(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_aspect_m537F21B48FDD5C060DFF9D87F34F4FB2B0F9BEB6 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_cullingMask_m14F426710530BA8FA53AEC02F79C418AA558CB32 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_eventMask(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_eventMask_mC97BDCD8AD36DFA2A5A9BF168111DE33881BD3F0 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_backgroundColor_m036FD8C316A93A0B168ACC89AFF16D396B872138 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_rect(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_pixelRect(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_pixelRect_m4A9504577204D4E72B39BFB637ED808B778568A5 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_projectionMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_projectionMatrix_m351820E6903139402FFFF40221B32D0C52B5A094 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_nonJitteredProjectionMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_nonJitteredProjectionMatrix_mC6967E205128C05584F890C43B2B79B6A0EF8B39 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_useJitteredProjectionMatrixForTransparentRendering(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_useJitteredProjectionMatrixForTransparentRendering_m51EC86087DA668906D11B5B13AA39191E47B4764 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_clearFlags_m66541D9CC43CBAA5FE7364A50D43CA5569FD4D93 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_stereoSeparation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_stereoSeparation_mF7815F0335AAB19E9444B75378059A3557463422 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_stereoConvergence(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_stereoConvergence_mA2C61A59954B567A8761A90066E058BC55EA3F0B (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_cameraType(UnityEngine.CameraType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_cameraType_m20ECE54572F8B7CAF5D32193B65F3D7812E20F17 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_stereoTargetEye(UnityEngine.StereoTargetEyeMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_stereoTargetEye_mDB97D9BA5BF538F709EBD006B6B59E78603510DD (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_targetDisplay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_targetDisplay_m112492A129702FD829BC11E2AE766AF5BF880C73 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_useOcclusionCulling(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_useOcclusionCulling_mD3036B0CBB5E6A1BF33810AB8FDEE3CD1A4D7C04 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_layerCullSpherical(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_layerCullSpherical_m8BE964C29B22DBFB64D31CF1FACB39B4F8E3ADDE (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_depthTextureMode(UnityEngine.DepthTextureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_depthTextureMode_mE722389E4DF8B3DF7F6100DB142E4DBAF698F6BF (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_clearStencilAfterLightingPass(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_clearStencilAfterLightingPass_mC6E6B87D51A3BDDFD9C1027CE82C2043A67E84A6 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.CapsuleCollider::set_center(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.CapsuleCollider::set_radius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCollider_set_radius_mB301C0086FE0D251683512184B0F6DDE264BA985 (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.CapsuleCollider::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.CapsuleCollider::set_direction(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCollider_set_direction_m3064DADA49F7F48DA8D62659B1D3545C83C553CB (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_isTrigger(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_contactOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_contactOffset_mEDA8D778F641338733D140E76FCA0D6B29203B52 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_sharedMaterial(UnityEngine.PhysicMaterial)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_sharedMaterial_m2AC21AB939A377ABACF8282CDC52EE61B54107ED (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00 (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_type(UnityEngine.ParticleSystemCollisionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4 (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_mode(UnityEngine.ParticleSystemCollisionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_dampen(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84 (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_dampenMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5 (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_bounce(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8 (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_bounceMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747 (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_lifetimeLoss(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_lifetimeLossMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_minKillSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3 (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_maxKillSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71 (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_collidesWith(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7 (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_enableDynamicColliders(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847 (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_maxCollisionShapes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9 (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_quality(UnityEngine.ParticleSystemCollisionQuality)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297 (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_voxelSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_radiusScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028 (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_sendCollisionMessages(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928 (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Object ES3Types.ES3Type_Burst::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Burst_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m41F271B3FBF40E4963482B50162EEEB977907B39_gshared (ES3Type_Burst_t40787EA2EAC906926AD4179AD777757B27953B7F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FFF489A02BBDDCC996E889F0ECEBCE205866069);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51C6279E31F7483126B79E3000116001A915B690);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5454FE23184B1242AD621EDDE008CDD28151CD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE20595A7743C0867AD4CA74E5DC593528786492);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFA505452FE4BB2CE49EF1450AD597A05A908CC7);
		s_Il2CppMethodInitialized = true;
	}
	Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.Burst();
		il2cpp_codegen_initobj((&V_0), sizeof(Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858));
		goto IL_017e;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1688821116)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)967958004))))
		{
			goto IL_0080;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1564253156))))
		{
			goto IL_006e;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1688821116))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_0178;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-1882599794)))))
		{
			goto IL_0059;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-2040851968))))
		{
			goto IL_00a4;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1882599794))))
		{
			goto IL_0092;
		}
	}
	{
		goto IL_0178;
	}

IL_0059:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_00b6;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-266883425))))
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_0178;
	}

IL_006e:
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral51C6279E31F7483126B79E3000116001A915B690, NULL);
		if (L_12)
		{
			goto IL_00ec;
		}
	}
	{
		goto IL_0178;
	}

IL_0080:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626, NULL);
		if (L_14)
		{
			goto IL_0100;
		}
	}
	{
		goto IL_0178;
	}

IL_0092:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral2FFF489A02BBDDCC996E889F0ECEBCE205866069, NULL);
		if (L_16)
		{
			goto IL_0114;
		}
	}
	{
		goto IL_0178;
	}

IL_00a4:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralA5454FE23184B1242AD621EDDE008CDD28151CD7, NULL);
		if (L_18)
		{
			goto IL_0128;
		}
	}
	{
		goto IL_0178;
	}

IL_00b6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_20)
		{
			goto IL_013c;
		}
	}
	{
		goto IL_0178;
	}

IL_00c8:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralEFA505452FE4BB2CE49EF1450AD597A05A908CC7, NULL);
		if (L_22)
		{
			goto IL_0150;
		}
	}
	{
		goto IL_0178;
	}

IL_00da:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralEE20595A7743C0867AD4CA74E5DC593528786492, NULL);
		if (L_24)
		{
			goto IL_0164;
		}
	}
	{
		goto IL_0178;
	}

IL_00ec:
	{
		// instance.time = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_25 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_26 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_25);
		float L_27;
		L_27 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_25, L_26);
		Burst_set_time_mF53402DA04A70DC5CAE65C37721C39E2FF5F55BC((&V_0), L_27, NULL);
		// break;
		goto IL_017e;
	}

IL_0100:
	{
		// instance.count = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_28 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_29 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_28);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_30;
		L_30 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_28, L_29);
		Burst_set_count_m9386E449ABE86FEF1279312582D3D5E28530C999((&V_0), L_30, NULL);
		// break;
		goto IL_017e;
	}

IL_0114:
	{
		// instance.minCount = reader.Read<System.Int16>(ES3Type_short.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_31);
		int16_t L_33;
		L_33 = GenericVirtualFuncInvoker1< int16_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var, L_31, L_32);
		Burst_set_minCount_m842E848A5F6258CDD547F0E338BF67E855F6CF11((&V_0), L_33, NULL);
		// break;
		goto IL_017e;
	}

IL_0128:
	{
		// instance.maxCount = reader.Read<System.Int16>(ES3Type_short.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_34);
		int16_t L_36;
		L_36 = GenericVirtualFuncInvoker1< int16_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var, L_34, L_35);
		Burst_set_maxCount_mE084ABCE7DA30E7CB87A23392ED9FE488B7A4937((&V_0), L_36, NULL);
		// break;
		goto IL_017e;
	}

IL_013c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_37);
		int32_t L_39;
		L_39 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_37, L_38);
		Burst_set_cycleCount_m05108C6D7DEE82C257A403A595321A3A38C5CAD6((&V_0), L_39, NULL);
		// break;
		goto IL_017e;
	}

IL_0150:
	{
		// instance.repeatInterval = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		Burst_set_repeatInterval_m0353AAB1836FE2C202933D776366A269D4E19D74((&V_0), L_42, NULL);
		// break;
		goto IL_017e;
	}

IL_0164:
	{
		// instance.probability = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		Burst_set_probability_m3E3B21EA54BA0E50252514D60DE02F65788C31BF((&V_0), L_45, NULL);
		// break;
		goto IL_017e;
	}

IL_0178:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___reader0;
		NullCheck(L_46);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_46);
	}

IL_017e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___reader0;
		NullCheck(L_47);
		String_t* L_48;
		L_48 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_47);
		String_t* L_49 = L_48;
		V_1 = L_49;
		if (L_49)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 L_50 = V_0;
		Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 L_51 = L_50;
		RuntimeObject* L_52 = Box(Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858_il2cpp_TypeInfo_var, &L_51);
		return L_52;
	}
}
// System.Object ES3Types.ES3Type_Burst::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Burst_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mB5C32873A82F5BBDFC79607B1CF945E0D8C39D16_gshared (ES3Type_Burst_t40787EA2EAC906926AD4179AD777757B27953B7F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FFF489A02BBDDCC996E889F0ECEBCE205866069);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51C6279E31F7483126B79E3000116001A915B690);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5454FE23184B1242AD621EDDE008CDD28151CD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE20595A7743C0867AD4CA74E5DC593528786492);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFA505452FE4BB2CE49EF1450AD597A05A908CC7);
		s_Il2CppMethodInitialized = true;
	}
	Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.Burst();
		il2cpp_codegen_initobj((&V_0), sizeof(Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858));
		goto IL_017e;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1688821116)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)967958004))))
		{
			goto IL_0080;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1564253156))))
		{
			goto IL_006e;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1688821116))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_0178;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-1882599794)))))
		{
			goto IL_0059;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-2040851968))))
		{
			goto IL_00a4;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1882599794))))
		{
			goto IL_0092;
		}
	}
	{
		goto IL_0178;
	}

IL_0059:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_00b6;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-266883425))))
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_0178;
	}

IL_006e:
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral51C6279E31F7483126B79E3000116001A915B690, NULL);
		if (L_12)
		{
			goto IL_00ec;
		}
	}
	{
		goto IL_0178;
	}

IL_0080:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626, NULL);
		if (L_14)
		{
			goto IL_0100;
		}
	}
	{
		goto IL_0178;
	}

IL_0092:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral2FFF489A02BBDDCC996E889F0ECEBCE205866069, NULL);
		if (L_16)
		{
			goto IL_0114;
		}
	}
	{
		goto IL_0178;
	}

IL_00a4:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralA5454FE23184B1242AD621EDDE008CDD28151CD7, NULL);
		if (L_18)
		{
			goto IL_0128;
		}
	}
	{
		goto IL_0178;
	}

IL_00b6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_20)
		{
			goto IL_013c;
		}
	}
	{
		goto IL_0178;
	}

IL_00c8:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralEFA505452FE4BB2CE49EF1450AD597A05A908CC7, NULL);
		if (L_22)
		{
			goto IL_0150;
		}
	}
	{
		goto IL_0178;
	}

IL_00da:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralEE20595A7743C0867AD4CA74E5DC593528786492, NULL);
		if (L_24)
		{
			goto IL_0164;
		}
	}
	{
		goto IL_0178;
	}

IL_00ec:
	{
		// instance.time = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_25 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_26 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_25);
		float L_27;
		L_27 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_25, L_26);
		Burst_set_time_mF53402DA04A70DC5CAE65C37721C39E2FF5F55BC((&V_0), L_27, NULL);
		// break;
		goto IL_017e;
	}

IL_0100:
	{
		// instance.count = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_28 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_29 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_28);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_30;
		L_30 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_28, L_29);
		Burst_set_count_m9386E449ABE86FEF1279312582D3D5E28530C999((&V_0), L_30, NULL);
		// break;
		goto IL_017e;
	}

IL_0114:
	{
		// instance.minCount = reader.Read<System.Int16>(ES3Type_short.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_31);
		int16_t L_33;
		L_33 = GenericVirtualFuncInvoker1< int16_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var, L_31, L_32);
		Burst_set_minCount_m842E848A5F6258CDD547F0E338BF67E855F6CF11((&V_0), L_33, NULL);
		// break;
		goto IL_017e;
	}

IL_0128:
	{
		// instance.maxCount = reader.Read<System.Int16>(ES3Type_short.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_34);
		int16_t L_36;
		L_36 = GenericVirtualFuncInvoker1< int16_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var, L_34, L_35);
		Burst_set_maxCount_mE084ABCE7DA30E7CB87A23392ED9FE488B7A4937((&V_0), L_36, NULL);
		// break;
		goto IL_017e;
	}

IL_013c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_37);
		int32_t L_39;
		L_39 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_37, L_38);
		Burst_set_cycleCount_m05108C6D7DEE82C257A403A595321A3A38C5CAD6((&V_0), L_39, NULL);
		// break;
		goto IL_017e;
	}

IL_0150:
	{
		// instance.repeatInterval = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		Burst_set_repeatInterval_m0353AAB1836FE2C202933D776366A269D4E19D74((&V_0), L_42, NULL);
		// break;
		goto IL_017e;
	}

IL_0164:
	{
		// instance.probability = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		Burst_set_probability_m3E3B21EA54BA0E50252514D60DE02F65788C31BF((&V_0), L_45, NULL);
		// break;
		goto IL_017e;
	}

IL_0178:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___reader0;
		NullCheck(L_46);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_46);
	}

IL_017e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___reader0;
		NullCheck(L_47);
		String_t* L_48;
		L_48 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_47);
		String_t* L_49 = L_48;
		V_1 = L_49;
		if (L_49)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 L_50 = V_0;
		Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 L_51 = L_50;
		RuntimeObject* L_52 = Box(Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858_il2cpp_TypeInfo_var, &L_51);
		return L_52;
	}
}
// System.Object ES3Types.ES3Type_Burst::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Burst_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m2E3CF4C01A1CCF7228DD24E6F2F7D8639EC37C25_gshared (ES3Type_Burst_t40787EA2EAC906926AD4179AD777757B27953B7F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FFF489A02BBDDCC996E889F0ECEBCE205866069);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51C6279E31F7483126B79E3000116001A915B690);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5454FE23184B1242AD621EDDE008CDD28151CD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE20595A7743C0867AD4CA74E5DC593528786492);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFA505452FE4BB2CE49EF1450AD597A05A908CC7);
		s_Il2CppMethodInitialized = true;
	}
	Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.Burst();
		il2cpp_codegen_initobj((&V_0), sizeof(Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858));
		goto IL_017e;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1688821116)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)967958004))))
		{
			goto IL_0080;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1564253156))))
		{
			goto IL_006e;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1688821116))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_0178;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-1882599794)))))
		{
			goto IL_0059;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-2040851968))))
		{
			goto IL_00a4;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1882599794))))
		{
			goto IL_0092;
		}
	}
	{
		goto IL_0178;
	}

IL_0059:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_00b6;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-266883425))))
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_0178;
	}

IL_006e:
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral51C6279E31F7483126B79E3000116001A915B690, NULL);
		if (L_12)
		{
			goto IL_00ec;
		}
	}
	{
		goto IL_0178;
	}

IL_0080:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626, NULL);
		if (L_14)
		{
			goto IL_0100;
		}
	}
	{
		goto IL_0178;
	}

IL_0092:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral2FFF489A02BBDDCC996E889F0ECEBCE205866069, NULL);
		if (L_16)
		{
			goto IL_0114;
		}
	}
	{
		goto IL_0178;
	}

IL_00a4:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralA5454FE23184B1242AD621EDDE008CDD28151CD7, NULL);
		if (L_18)
		{
			goto IL_0128;
		}
	}
	{
		goto IL_0178;
	}

IL_00b6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_20)
		{
			goto IL_013c;
		}
	}
	{
		goto IL_0178;
	}

IL_00c8:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralEFA505452FE4BB2CE49EF1450AD597A05A908CC7, NULL);
		if (L_22)
		{
			goto IL_0150;
		}
	}
	{
		goto IL_0178;
	}

IL_00da:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralEE20595A7743C0867AD4CA74E5DC593528786492, NULL);
		if (L_24)
		{
			goto IL_0164;
		}
	}
	{
		goto IL_0178;
	}

IL_00ec:
	{
		// instance.time = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_25 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_26 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_25);
		float L_27;
		L_27 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_25, L_26);
		Burst_set_time_mF53402DA04A70DC5CAE65C37721C39E2FF5F55BC((&V_0), L_27, NULL);
		// break;
		goto IL_017e;
	}

IL_0100:
	{
		// instance.count = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_28 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_29 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_28);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_30;
		L_30 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_28, L_29);
		Burst_set_count_m9386E449ABE86FEF1279312582D3D5E28530C999((&V_0), L_30, NULL);
		// break;
		goto IL_017e;
	}

IL_0114:
	{
		// instance.minCount = reader.Read<System.Int16>(ES3Type_short.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_31);
		int16_t L_33;
		L_33 = GenericVirtualFuncInvoker1< int16_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var, L_31, L_32);
		Burst_set_minCount_m842E848A5F6258CDD547F0E338BF67E855F6CF11((&V_0), L_33, NULL);
		// break;
		goto IL_017e;
	}

IL_0128:
	{
		// instance.maxCount = reader.Read<System.Int16>(ES3Type_short.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_34);
		int16_t L_36;
		L_36 = GenericVirtualFuncInvoker1< int16_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var, L_34, L_35);
		Burst_set_maxCount_mE084ABCE7DA30E7CB87A23392ED9FE488B7A4937((&V_0), L_36, NULL);
		// break;
		goto IL_017e;
	}

IL_013c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_37);
		int32_t L_39;
		L_39 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_37, L_38);
		Burst_set_cycleCount_m05108C6D7DEE82C257A403A595321A3A38C5CAD6((&V_0), L_39, NULL);
		// break;
		goto IL_017e;
	}

IL_0150:
	{
		// instance.repeatInterval = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		Burst_set_repeatInterval_m0353AAB1836FE2C202933D776366A269D4E19D74((&V_0), L_42, NULL);
		// break;
		goto IL_017e;
	}

IL_0164:
	{
		// instance.probability = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		Burst_set_probability_m3E3B21EA54BA0E50252514D60DE02F65788C31BF((&V_0), L_45, NULL);
		// break;
		goto IL_017e;
	}

IL_0178:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___reader0;
		NullCheck(L_46);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_46);
	}

IL_017e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___reader0;
		NullCheck(L_47);
		String_t* L_48;
		L_48 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_47);
		String_t* L_49 = L_48;
		V_1 = L_49;
		if (L_49)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 L_50 = V_0;
		Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 L_51 = L_50;
		RuntimeObject* L_52 = Box(Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858_il2cpp_TypeInfo_var, &L_51);
		return L_52;
	}
}
// System.Object ES3Types.ES3Type_Burst::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Burst_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mEDEA620F57C33D9A0A8F0014B153BCEE1FA32D97_gshared (ES3Type_Burst_t40787EA2EAC906926AD4179AD777757B27953B7F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FFF489A02BBDDCC996E889F0ECEBCE205866069);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51C6279E31F7483126B79E3000116001A915B690);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5454FE23184B1242AD621EDDE008CDD28151CD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE20595A7743C0867AD4CA74E5DC593528786492);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFA505452FE4BB2CE49EF1450AD597A05A908CC7);
		s_Il2CppMethodInitialized = true;
	}
	Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.Burst();
		il2cpp_codegen_initobj((&V_0), sizeof(Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858));
		goto IL_017e;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1688821116)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)967958004))))
		{
			goto IL_0080;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1564253156))))
		{
			goto IL_006e;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1688821116))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_0178;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-1882599794)))))
		{
			goto IL_0059;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-2040851968))))
		{
			goto IL_00a4;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1882599794))))
		{
			goto IL_0092;
		}
	}
	{
		goto IL_0178;
	}

IL_0059:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_00b6;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-266883425))))
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_0178;
	}

IL_006e:
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral51C6279E31F7483126B79E3000116001A915B690, NULL);
		if (L_12)
		{
			goto IL_00ec;
		}
	}
	{
		goto IL_0178;
	}

IL_0080:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626, NULL);
		if (L_14)
		{
			goto IL_0100;
		}
	}
	{
		goto IL_0178;
	}

IL_0092:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral2FFF489A02BBDDCC996E889F0ECEBCE205866069, NULL);
		if (L_16)
		{
			goto IL_0114;
		}
	}
	{
		goto IL_0178;
	}

IL_00a4:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralA5454FE23184B1242AD621EDDE008CDD28151CD7, NULL);
		if (L_18)
		{
			goto IL_0128;
		}
	}
	{
		goto IL_0178;
	}

IL_00b6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_20)
		{
			goto IL_013c;
		}
	}
	{
		goto IL_0178;
	}

IL_00c8:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralEFA505452FE4BB2CE49EF1450AD597A05A908CC7, NULL);
		if (L_22)
		{
			goto IL_0150;
		}
	}
	{
		goto IL_0178;
	}

IL_00da:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralEE20595A7743C0867AD4CA74E5DC593528786492, NULL);
		if (L_24)
		{
			goto IL_0164;
		}
	}
	{
		goto IL_0178;
	}

IL_00ec:
	{
		// instance.time = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_25 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_26 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_25);
		float L_27;
		L_27 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_25, L_26);
		Burst_set_time_mF53402DA04A70DC5CAE65C37721C39E2FF5F55BC((&V_0), L_27, NULL);
		// break;
		goto IL_017e;
	}

IL_0100:
	{
		// instance.count = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_28 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_29 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_28);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_30;
		L_30 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_28, L_29);
		Burst_set_count_m9386E449ABE86FEF1279312582D3D5E28530C999((&V_0), L_30, NULL);
		// break;
		goto IL_017e;
	}

IL_0114:
	{
		// instance.minCount = reader.Read<System.Int16>(ES3Type_short.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_31);
		int16_t L_33;
		L_33 = GenericVirtualFuncInvoker1< int16_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var, L_31, L_32);
		Burst_set_minCount_m842E848A5F6258CDD547F0E338BF67E855F6CF11((&V_0), L_33, NULL);
		// break;
		goto IL_017e;
	}

IL_0128:
	{
		// instance.maxCount = reader.Read<System.Int16>(ES3Type_short.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_34);
		int16_t L_36;
		L_36 = GenericVirtualFuncInvoker1< int16_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var, L_34, L_35);
		Burst_set_maxCount_mE084ABCE7DA30E7CB87A23392ED9FE488B7A4937((&V_0), L_36, NULL);
		// break;
		goto IL_017e;
	}

IL_013c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_37);
		int32_t L_39;
		L_39 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_37, L_38);
		Burst_set_cycleCount_m05108C6D7DEE82C257A403A595321A3A38C5CAD6((&V_0), L_39, NULL);
		// break;
		goto IL_017e;
	}

IL_0150:
	{
		// instance.repeatInterval = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		Burst_set_repeatInterval_m0353AAB1836FE2C202933D776366A269D4E19D74((&V_0), L_42, NULL);
		// break;
		goto IL_017e;
	}

IL_0164:
	{
		// instance.probability = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		Burst_set_probability_m3E3B21EA54BA0E50252514D60DE02F65788C31BF((&V_0), L_45, NULL);
		// break;
		goto IL_017e;
	}

IL_0178:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___reader0;
		NullCheck(L_46);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_46);
	}

IL_017e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___reader0;
		NullCheck(L_47);
		String_t* L_48;
		L_48 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_47);
		String_t* L_49 = L_48;
		V_1 = L_49;
		if (L_49)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 L_50 = V_0;
		Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 L_51 = L_50;
		RuntimeObject* L_52 = Box(Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858_il2cpp_TypeInfo_var, &L_51);
		return L_52;
	}
}
// System.Object ES3Types.ES3Type_Burst::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Burst_Read_TisRuntimeObject_m2E9309FECCEC41394532CE14E2A9EA228F0213E5_gshared (ES3Type_Burst_t40787EA2EAC906926AD4179AD777757B27953B7F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FFF489A02BBDDCC996E889F0ECEBCE205866069);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51C6279E31F7483126B79E3000116001A915B690);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5454FE23184B1242AD621EDDE008CDD28151CD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE20595A7743C0867AD4CA74E5DC593528786492);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFA505452FE4BB2CE49EF1450AD597A05A908CC7);
		s_Il2CppMethodInitialized = true;
	}
	Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.Burst();
		il2cpp_codegen_initobj((&V_0), sizeof(Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858));
		goto IL_017e;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1688821116)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)967958004))))
		{
			goto IL_0080;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1564253156))))
		{
			goto IL_006e;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1688821116))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_0178;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-1882599794)))))
		{
			goto IL_0059;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-2040851968))))
		{
			goto IL_00a4;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1882599794))))
		{
			goto IL_0092;
		}
	}
	{
		goto IL_0178;
	}

IL_0059:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_00b6;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-266883425))))
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_0178;
	}

IL_006e:
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral51C6279E31F7483126B79E3000116001A915B690, NULL);
		if (L_12)
		{
			goto IL_00ec;
		}
	}
	{
		goto IL_0178;
	}

IL_0080:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626, NULL);
		if (L_14)
		{
			goto IL_0100;
		}
	}
	{
		goto IL_0178;
	}

IL_0092:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral2FFF489A02BBDDCC996E889F0ECEBCE205866069, NULL);
		if (L_16)
		{
			goto IL_0114;
		}
	}
	{
		goto IL_0178;
	}

IL_00a4:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralA5454FE23184B1242AD621EDDE008CDD28151CD7, NULL);
		if (L_18)
		{
			goto IL_0128;
		}
	}
	{
		goto IL_0178;
	}

IL_00b6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_20)
		{
			goto IL_013c;
		}
	}
	{
		goto IL_0178;
	}

IL_00c8:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralEFA505452FE4BB2CE49EF1450AD597A05A908CC7, NULL);
		if (L_22)
		{
			goto IL_0150;
		}
	}
	{
		goto IL_0178;
	}

IL_00da:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralEE20595A7743C0867AD4CA74E5DC593528786492, NULL);
		if (L_24)
		{
			goto IL_0164;
		}
	}
	{
		goto IL_0178;
	}

IL_00ec:
	{
		// instance.time = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_25 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_26 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_25);
		float L_27;
		L_27 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_25, L_26);
		Burst_set_time_mF53402DA04A70DC5CAE65C37721C39E2FF5F55BC((&V_0), L_27, NULL);
		// break;
		goto IL_017e;
	}

IL_0100:
	{
		// instance.count = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_28 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_29 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_28);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_30;
		L_30 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_28, L_29);
		Burst_set_count_m9386E449ABE86FEF1279312582D3D5E28530C999((&V_0), L_30, NULL);
		// break;
		goto IL_017e;
	}

IL_0114:
	{
		// instance.minCount = reader.Read<System.Int16>(ES3Type_short.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_31);
		int16_t L_33;
		L_33 = GenericVirtualFuncInvoker1< int16_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var, L_31, L_32);
		Burst_set_minCount_m842E848A5F6258CDD547F0E338BF67E855F6CF11((&V_0), L_33, NULL);
		// break;
		goto IL_017e;
	}

IL_0128:
	{
		// instance.maxCount = reader.Read<System.Int16>(ES3Type_short.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_34);
		int16_t L_36;
		L_36 = GenericVirtualFuncInvoker1< int16_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var, L_34, L_35);
		Burst_set_maxCount_mE084ABCE7DA30E7CB87A23392ED9FE488B7A4937((&V_0), L_36, NULL);
		// break;
		goto IL_017e;
	}

IL_013c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_37);
		int32_t L_39;
		L_39 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_37, L_38);
		Burst_set_cycleCount_m05108C6D7DEE82C257A403A595321A3A38C5CAD6((&V_0), L_39, NULL);
		// break;
		goto IL_017e;
	}

IL_0150:
	{
		// instance.repeatInterval = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		Burst_set_repeatInterval_m0353AAB1836FE2C202933D776366A269D4E19D74((&V_0), L_42, NULL);
		// break;
		goto IL_017e;
	}

IL_0164:
	{
		// instance.probability = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		Burst_set_probability_m3E3B21EA54BA0E50252514D60DE02F65788C31BF((&V_0), L_45, NULL);
		// break;
		goto IL_017e;
	}

IL_0178:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___reader0;
		NullCheck(L_46);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_46);
	}

IL_017e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___reader0;
		NullCheck(L_47);
		String_t* L_48;
		L_48 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_47);
		String_t* L_49 = L_48;
		V_1 = L_49;
		if (L_49)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 L_50 = V_0;
		Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 L_51 = L_50;
		RuntimeObject* L_52 = Box(Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858_il2cpp_TypeInfo_var, &L_51);
		return L_52;
	}
}
// System.Object ES3Types.ES3Type_Burst::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Burst_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m4E881174C9D03A74D35B3BFE73A287048FF41AAA_gshared (ES3Type_Burst_t40787EA2EAC906926AD4179AD777757B27953B7F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FFF489A02BBDDCC996E889F0ECEBCE205866069);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51C6279E31F7483126B79E3000116001A915B690);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5454FE23184B1242AD621EDDE008CDD28151CD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE20595A7743C0867AD4CA74E5DC593528786492);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFA505452FE4BB2CE49EF1450AD597A05A908CC7);
		s_Il2CppMethodInitialized = true;
	}
	Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.Burst();
		il2cpp_codegen_initobj((&V_0), sizeof(Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858));
		goto IL_017e;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1688821116)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)967958004))))
		{
			goto IL_0080;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1564253156))))
		{
			goto IL_006e;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1688821116))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_0178;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-1882599794)))))
		{
			goto IL_0059;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-2040851968))))
		{
			goto IL_00a4;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1882599794))))
		{
			goto IL_0092;
		}
	}
	{
		goto IL_0178;
	}

IL_0059:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_00b6;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-266883425))))
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_0178;
	}

IL_006e:
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral51C6279E31F7483126B79E3000116001A915B690, NULL);
		if (L_12)
		{
			goto IL_00ec;
		}
	}
	{
		goto IL_0178;
	}

IL_0080:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626, NULL);
		if (L_14)
		{
			goto IL_0100;
		}
	}
	{
		goto IL_0178;
	}

IL_0092:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral2FFF489A02BBDDCC996E889F0ECEBCE205866069, NULL);
		if (L_16)
		{
			goto IL_0114;
		}
	}
	{
		goto IL_0178;
	}

IL_00a4:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralA5454FE23184B1242AD621EDDE008CDD28151CD7, NULL);
		if (L_18)
		{
			goto IL_0128;
		}
	}
	{
		goto IL_0178;
	}

IL_00b6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_20)
		{
			goto IL_013c;
		}
	}
	{
		goto IL_0178;
	}

IL_00c8:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralEFA505452FE4BB2CE49EF1450AD597A05A908CC7, NULL);
		if (L_22)
		{
			goto IL_0150;
		}
	}
	{
		goto IL_0178;
	}

IL_00da:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralEE20595A7743C0867AD4CA74E5DC593528786492, NULL);
		if (L_24)
		{
			goto IL_0164;
		}
	}
	{
		goto IL_0178;
	}

IL_00ec:
	{
		// instance.time = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_25 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_26 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_25);
		float L_27;
		L_27 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_25, L_26);
		Burst_set_time_mF53402DA04A70DC5CAE65C37721C39E2FF5F55BC((&V_0), L_27, NULL);
		// break;
		goto IL_017e;
	}

IL_0100:
	{
		// instance.count = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_28 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_29 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_28);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_30;
		L_30 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_28, L_29);
		Burst_set_count_m9386E449ABE86FEF1279312582D3D5E28530C999((&V_0), L_30, NULL);
		// break;
		goto IL_017e;
	}

IL_0114:
	{
		// instance.minCount = reader.Read<System.Int16>(ES3Type_short.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_31);
		int16_t L_33;
		L_33 = GenericVirtualFuncInvoker1< int16_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var, L_31, L_32);
		Burst_set_minCount_m842E848A5F6258CDD547F0E338BF67E855F6CF11((&V_0), L_33, NULL);
		// break;
		goto IL_017e;
	}

IL_0128:
	{
		// instance.maxCount = reader.Read<System.Int16>(ES3Type_short.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_34);
		int16_t L_36;
		L_36 = GenericVirtualFuncInvoker1< int16_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var, L_34, L_35);
		Burst_set_maxCount_mE084ABCE7DA30E7CB87A23392ED9FE488B7A4937((&V_0), L_36, NULL);
		// break;
		goto IL_017e;
	}

IL_013c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_37);
		int32_t L_39;
		L_39 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_37, L_38);
		Burst_set_cycleCount_m05108C6D7DEE82C257A403A595321A3A38C5CAD6((&V_0), L_39, NULL);
		// break;
		goto IL_017e;
	}

IL_0150:
	{
		// instance.repeatInterval = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		Burst_set_repeatInterval_m0353AAB1836FE2C202933D776366A269D4E19D74((&V_0), L_42, NULL);
		// break;
		goto IL_017e;
	}

IL_0164:
	{
		// instance.probability = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		Burst_set_probability_m3E3B21EA54BA0E50252514D60DE02F65788C31BF((&V_0), L_45, NULL);
		// break;
		goto IL_017e;
	}

IL_0178:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___reader0;
		NullCheck(L_46);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_46);
	}

IL_017e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___reader0;
		NullCheck(L_47);
		String_t* L_48;
		L_48 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_47);
		String_t* L_49 = L_48;
		V_1 = L_49;
		if (L_49)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 L_50 = V_0;
		Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 L_51 = L_50;
		RuntimeObject* L_52 = Box(Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858_il2cpp_TypeInfo_var, &L_51);
		return L_52;
	}
}
// System.Object ES3Types.ES3Type_Burst::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Burst_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_mD51E101DE07A96A19193F1DAAD5332D9F2F246AD_gshared (ES3Type_Burst_t40787EA2EAC906926AD4179AD777757B27953B7F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FFF489A02BBDDCC996E889F0ECEBCE205866069);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51C6279E31F7483126B79E3000116001A915B690);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5454FE23184B1242AD621EDDE008CDD28151CD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE20595A7743C0867AD4CA74E5DC593528786492);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFA505452FE4BB2CE49EF1450AD597A05A908CC7);
		s_Il2CppMethodInitialized = true;
	}
	Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.Burst();
		il2cpp_codegen_initobj((&V_0), sizeof(Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858));
		goto IL_017e;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1688821116)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)967958004))))
		{
			goto IL_0080;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1564253156))))
		{
			goto IL_006e;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1688821116))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_0178;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-1882599794)))))
		{
			goto IL_0059;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-2040851968))))
		{
			goto IL_00a4;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1882599794))))
		{
			goto IL_0092;
		}
	}
	{
		goto IL_0178;
	}

IL_0059:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_00b6;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-266883425))))
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_0178;
	}

IL_006e:
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral51C6279E31F7483126B79E3000116001A915B690, NULL);
		if (L_12)
		{
			goto IL_00ec;
		}
	}
	{
		goto IL_0178;
	}

IL_0080:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626, NULL);
		if (L_14)
		{
			goto IL_0100;
		}
	}
	{
		goto IL_0178;
	}

IL_0092:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral2FFF489A02BBDDCC996E889F0ECEBCE205866069, NULL);
		if (L_16)
		{
			goto IL_0114;
		}
	}
	{
		goto IL_0178;
	}

IL_00a4:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralA5454FE23184B1242AD621EDDE008CDD28151CD7, NULL);
		if (L_18)
		{
			goto IL_0128;
		}
	}
	{
		goto IL_0178;
	}

IL_00b6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_20)
		{
			goto IL_013c;
		}
	}
	{
		goto IL_0178;
	}

IL_00c8:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralEFA505452FE4BB2CE49EF1450AD597A05A908CC7, NULL);
		if (L_22)
		{
			goto IL_0150;
		}
	}
	{
		goto IL_0178;
	}

IL_00da:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralEE20595A7743C0867AD4CA74E5DC593528786492, NULL);
		if (L_24)
		{
			goto IL_0164;
		}
	}
	{
		goto IL_0178;
	}

IL_00ec:
	{
		// instance.time = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_25 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_26 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_25);
		float L_27;
		L_27 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_25, L_26);
		Burst_set_time_mF53402DA04A70DC5CAE65C37721C39E2FF5F55BC((&V_0), L_27, NULL);
		// break;
		goto IL_017e;
	}

IL_0100:
	{
		// instance.count = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_28 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_29 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_28);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_30;
		L_30 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_28, L_29);
		Burst_set_count_m9386E449ABE86FEF1279312582D3D5E28530C999((&V_0), L_30, NULL);
		// break;
		goto IL_017e;
	}

IL_0114:
	{
		// instance.minCount = reader.Read<System.Int16>(ES3Type_short.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_31);
		int16_t L_33;
		L_33 = GenericVirtualFuncInvoker1< int16_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var, L_31, L_32);
		Burst_set_minCount_m842E848A5F6258CDD547F0E338BF67E855F6CF11((&V_0), L_33, NULL);
		// break;
		goto IL_017e;
	}

IL_0128:
	{
		// instance.maxCount = reader.Read<System.Int16>(ES3Type_short.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_34);
		int16_t L_36;
		L_36 = GenericVirtualFuncInvoker1< int16_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var, L_34, L_35);
		Burst_set_maxCount_mE084ABCE7DA30E7CB87A23392ED9FE488B7A4937((&V_0), L_36, NULL);
		// break;
		goto IL_017e;
	}

IL_013c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_37);
		int32_t L_39;
		L_39 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_37, L_38);
		Burst_set_cycleCount_m05108C6D7DEE82C257A403A595321A3A38C5CAD6((&V_0), L_39, NULL);
		// break;
		goto IL_017e;
	}

IL_0150:
	{
		// instance.repeatInterval = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		Burst_set_repeatInterval_m0353AAB1836FE2C202933D776366A269D4E19D74((&V_0), L_42, NULL);
		// break;
		goto IL_017e;
	}

IL_0164:
	{
		// instance.probability = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		Burst_set_probability_m3E3B21EA54BA0E50252514D60DE02F65788C31BF((&V_0), L_45, NULL);
		// break;
		goto IL_017e;
	}

IL_0178:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___reader0;
		NullCheck(L_46);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_46);
	}

IL_017e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___reader0;
		NullCheck(L_47);
		String_t* L_48;
		L_48 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_47);
		String_t* L_49 = L_48;
		V_1 = L_49;
		if (L_49)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 L_50 = V_0;
		Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 L_51 = L_50;
		RuntimeObject* L_52 = Box(Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858_il2cpp_TypeInfo_var, &L_51);
		return L_52;
	}
}
// System.Object ES3Types.ES3Type_Burst::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Burst_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_m0193416BE579FC03533F5CB26A8E8A5C662A0F71_gshared (ES3Type_Burst_t40787EA2EAC906926AD4179AD777757B27953B7F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FFF489A02BBDDCC996E889F0ECEBCE205866069);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51C6279E31F7483126B79E3000116001A915B690);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5454FE23184B1242AD621EDDE008CDD28151CD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE20595A7743C0867AD4CA74E5DC593528786492);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFA505452FE4BB2CE49EF1450AD597A05A908CC7);
		s_Il2CppMethodInitialized = true;
	}
	Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.Burst();
		il2cpp_codegen_initobj((&V_0), sizeof(Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858));
		goto IL_017e;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1688821116)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)967958004))))
		{
			goto IL_0080;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1564253156))))
		{
			goto IL_006e;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1688821116))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_0178;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-1882599794)))))
		{
			goto IL_0059;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-2040851968))))
		{
			goto IL_00a4;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1882599794))))
		{
			goto IL_0092;
		}
	}
	{
		goto IL_0178;
	}

IL_0059:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_00b6;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-266883425))))
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_0178;
	}

IL_006e:
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral51C6279E31F7483126B79E3000116001A915B690, NULL);
		if (L_12)
		{
			goto IL_00ec;
		}
	}
	{
		goto IL_0178;
	}

IL_0080:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626, NULL);
		if (L_14)
		{
			goto IL_0100;
		}
	}
	{
		goto IL_0178;
	}

IL_0092:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral2FFF489A02BBDDCC996E889F0ECEBCE205866069, NULL);
		if (L_16)
		{
			goto IL_0114;
		}
	}
	{
		goto IL_0178;
	}

IL_00a4:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralA5454FE23184B1242AD621EDDE008CDD28151CD7, NULL);
		if (L_18)
		{
			goto IL_0128;
		}
	}
	{
		goto IL_0178;
	}

IL_00b6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_20)
		{
			goto IL_013c;
		}
	}
	{
		goto IL_0178;
	}

IL_00c8:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralEFA505452FE4BB2CE49EF1450AD597A05A908CC7, NULL);
		if (L_22)
		{
			goto IL_0150;
		}
	}
	{
		goto IL_0178;
	}

IL_00da:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralEE20595A7743C0867AD4CA74E5DC593528786492, NULL);
		if (L_24)
		{
			goto IL_0164;
		}
	}
	{
		goto IL_0178;
	}

IL_00ec:
	{
		// instance.time = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_25 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_26 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_25);
		float L_27;
		L_27 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_25, L_26);
		Burst_set_time_mF53402DA04A70DC5CAE65C37721C39E2FF5F55BC((&V_0), L_27, NULL);
		// break;
		goto IL_017e;
	}

IL_0100:
	{
		// instance.count = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_28 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_29 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_28);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_30;
		L_30 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_28, L_29);
		Burst_set_count_m9386E449ABE86FEF1279312582D3D5E28530C999((&V_0), L_30, NULL);
		// break;
		goto IL_017e;
	}

IL_0114:
	{
		// instance.minCount = reader.Read<System.Int16>(ES3Type_short.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_31);
		int16_t L_33;
		L_33 = GenericVirtualFuncInvoker1< int16_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var, L_31, L_32);
		Burst_set_minCount_m842E848A5F6258CDD547F0E338BF67E855F6CF11((&V_0), L_33, NULL);
		// break;
		goto IL_017e;
	}

IL_0128:
	{
		// instance.maxCount = reader.Read<System.Int16>(ES3Type_short.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_34);
		int16_t L_36;
		L_36 = GenericVirtualFuncInvoker1< int16_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var, L_34, L_35);
		Burst_set_maxCount_mE084ABCE7DA30E7CB87A23392ED9FE488B7A4937((&V_0), L_36, NULL);
		// break;
		goto IL_017e;
	}

IL_013c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_37);
		int32_t L_39;
		L_39 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_37, L_38);
		Burst_set_cycleCount_m05108C6D7DEE82C257A403A595321A3A38C5CAD6((&V_0), L_39, NULL);
		// break;
		goto IL_017e;
	}

IL_0150:
	{
		// instance.repeatInterval = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		Burst_set_repeatInterval_m0353AAB1836FE2C202933D776366A269D4E19D74((&V_0), L_42, NULL);
		// break;
		goto IL_017e;
	}

IL_0164:
	{
		// instance.probability = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		Burst_set_probability_m3E3B21EA54BA0E50252514D60DE02F65788C31BF((&V_0), L_45, NULL);
		// break;
		goto IL_017e;
	}

IL_0178:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___reader0;
		NullCheck(L_46);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_46);
	}

IL_017e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___reader0;
		NullCheck(L_47);
		String_t* L_48;
		L_48 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_47);
		String_t* L_49 = L_48;
		V_1 = L_49;
		if (L_49)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 L_50 = V_0;
		Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 L_51 = L_50;
		RuntimeObject* L_52 = Box(Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858_il2cpp_TypeInfo_var, &L_51);
		return L_52;
	}
}
// System.Object ES3Types.ES3Type_Burst::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Burst_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6F4E53EF549C024DDE8868CFF466C27C096CD8E7_gshared (ES3Type_Burst_t40787EA2EAC906926AD4179AD777757B27953B7F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FFF489A02BBDDCC996E889F0ECEBCE205866069);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51C6279E31F7483126B79E3000116001A915B690);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5454FE23184B1242AD621EDDE008CDD28151CD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE20595A7743C0867AD4CA74E5DC593528786492);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFA505452FE4BB2CE49EF1450AD597A05A908CC7);
		s_Il2CppMethodInitialized = true;
	}
	Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.Burst();
		il2cpp_codegen_initobj((&V_0), sizeof(Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858));
		goto IL_017e;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1688821116)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)967958004))))
		{
			goto IL_0080;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1564253156))))
		{
			goto IL_006e;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1688821116))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_0178;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-1882599794)))))
		{
			goto IL_0059;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-2040851968))))
		{
			goto IL_00a4;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1882599794))))
		{
			goto IL_0092;
		}
	}
	{
		goto IL_0178;
	}

IL_0059:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_00b6;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-266883425))))
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_0178;
	}

IL_006e:
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral51C6279E31F7483126B79E3000116001A915B690, NULL);
		if (L_12)
		{
			goto IL_00ec;
		}
	}
	{
		goto IL_0178;
	}

IL_0080:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626, NULL);
		if (L_14)
		{
			goto IL_0100;
		}
	}
	{
		goto IL_0178;
	}

IL_0092:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral2FFF489A02BBDDCC996E889F0ECEBCE205866069, NULL);
		if (L_16)
		{
			goto IL_0114;
		}
	}
	{
		goto IL_0178;
	}

IL_00a4:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralA5454FE23184B1242AD621EDDE008CDD28151CD7, NULL);
		if (L_18)
		{
			goto IL_0128;
		}
	}
	{
		goto IL_0178;
	}

IL_00b6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_20)
		{
			goto IL_013c;
		}
	}
	{
		goto IL_0178;
	}

IL_00c8:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralEFA505452FE4BB2CE49EF1450AD597A05A908CC7, NULL);
		if (L_22)
		{
			goto IL_0150;
		}
	}
	{
		goto IL_0178;
	}

IL_00da:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralEE20595A7743C0867AD4CA74E5DC593528786492, NULL);
		if (L_24)
		{
			goto IL_0164;
		}
	}
	{
		goto IL_0178;
	}

IL_00ec:
	{
		// instance.time = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_25 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_26 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_25);
		float L_27;
		L_27 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_25, L_26);
		Burst_set_time_mF53402DA04A70DC5CAE65C37721C39E2FF5F55BC((&V_0), L_27, NULL);
		// break;
		goto IL_017e;
	}

IL_0100:
	{
		// instance.count = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_28 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_29 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_28);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_30;
		L_30 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_28, L_29);
		Burst_set_count_m9386E449ABE86FEF1279312582D3D5E28530C999((&V_0), L_30, NULL);
		// break;
		goto IL_017e;
	}

IL_0114:
	{
		// instance.minCount = reader.Read<System.Int16>(ES3Type_short.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_31);
		int16_t L_33;
		L_33 = GenericVirtualFuncInvoker1< int16_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var, L_31, L_32);
		Burst_set_minCount_m842E848A5F6258CDD547F0E338BF67E855F6CF11((&V_0), L_33, NULL);
		// break;
		goto IL_017e;
	}

IL_0128:
	{
		// instance.maxCount = reader.Read<System.Int16>(ES3Type_short.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_34);
		int16_t L_36;
		L_36 = GenericVirtualFuncInvoker1< int16_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var, L_34, L_35);
		Burst_set_maxCount_mE084ABCE7DA30E7CB87A23392ED9FE488B7A4937((&V_0), L_36, NULL);
		// break;
		goto IL_017e;
	}

IL_013c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_37);
		int32_t L_39;
		L_39 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_37, L_38);
		Burst_set_cycleCount_m05108C6D7DEE82C257A403A595321A3A38C5CAD6((&V_0), L_39, NULL);
		// break;
		goto IL_017e;
	}

IL_0150:
	{
		// instance.repeatInterval = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		Burst_set_repeatInterval_m0353AAB1836FE2C202933D776366A269D4E19D74((&V_0), L_42, NULL);
		// break;
		goto IL_017e;
	}

IL_0164:
	{
		// instance.probability = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		Burst_set_probability_m3E3B21EA54BA0E50252514D60DE02F65788C31BF((&V_0), L_45, NULL);
		// break;
		goto IL_017e;
	}

IL_0178:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___reader0;
		NullCheck(L_46);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_46);
	}

IL_017e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___reader0;
		NullCheck(L_47);
		String_t* L_48;
		L_48 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_47);
		String_t* L_49 = L_48;
		V_1 = L_49;
		if (L_49)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 L_50 = V_0;
		Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 L_51 = L_50;
		RuntimeObject* L_52 = Box(Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858_il2cpp_TypeInfo_var, &L_51);
		return L_52;
	}
}
// System.Object ES3Types.ES3Type_Burst::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Burst_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m4817F35673F1B3FEDE1612E2BF65AB53BF9AE602_gshared (ES3Type_Burst_t40787EA2EAC906926AD4179AD777757B27953B7F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FFF489A02BBDDCC996E889F0ECEBCE205866069);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51C6279E31F7483126B79E3000116001A915B690);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5454FE23184B1242AD621EDDE008CDD28151CD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE20595A7743C0867AD4CA74E5DC593528786492);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFA505452FE4BB2CE49EF1450AD597A05A908CC7);
		s_Il2CppMethodInitialized = true;
	}
	Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.Burst();
		il2cpp_codegen_initobj((&V_0), sizeof(Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858));
		goto IL_017e;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1688821116)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)967958004))))
		{
			goto IL_0080;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1564253156))))
		{
			goto IL_006e;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1688821116))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_0178;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-1882599794)))))
		{
			goto IL_0059;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-2040851968))))
		{
			goto IL_00a4;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1882599794))))
		{
			goto IL_0092;
		}
	}
	{
		goto IL_0178;
	}

IL_0059:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_00b6;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-266883425))))
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_0178;
	}

IL_006e:
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral51C6279E31F7483126B79E3000116001A915B690, NULL);
		if (L_12)
		{
			goto IL_00ec;
		}
	}
	{
		goto IL_0178;
	}

IL_0080:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626, NULL);
		if (L_14)
		{
			goto IL_0100;
		}
	}
	{
		goto IL_0178;
	}

IL_0092:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral2FFF489A02BBDDCC996E889F0ECEBCE205866069, NULL);
		if (L_16)
		{
			goto IL_0114;
		}
	}
	{
		goto IL_0178;
	}

IL_00a4:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralA5454FE23184B1242AD621EDDE008CDD28151CD7, NULL);
		if (L_18)
		{
			goto IL_0128;
		}
	}
	{
		goto IL_0178;
	}

IL_00b6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_20)
		{
			goto IL_013c;
		}
	}
	{
		goto IL_0178;
	}

IL_00c8:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralEFA505452FE4BB2CE49EF1450AD597A05A908CC7, NULL);
		if (L_22)
		{
			goto IL_0150;
		}
	}
	{
		goto IL_0178;
	}

IL_00da:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralEE20595A7743C0867AD4CA74E5DC593528786492, NULL);
		if (L_24)
		{
			goto IL_0164;
		}
	}
	{
		goto IL_0178;
	}

IL_00ec:
	{
		// instance.time = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_25 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_26 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_25);
		float L_27;
		L_27 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_25, L_26);
		Burst_set_time_mF53402DA04A70DC5CAE65C37721C39E2FF5F55BC((&V_0), L_27, NULL);
		// break;
		goto IL_017e;
	}

IL_0100:
	{
		// instance.count = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_28 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_29 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_28);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_30;
		L_30 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_28, L_29);
		Burst_set_count_m9386E449ABE86FEF1279312582D3D5E28530C999((&V_0), L_30, NULL);
		// break;
		goto IL_017e;
	}

IL_0114:
	{
		// instance.minCount = reader.Read<System.Int16>(ES3Type_short.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_31);
		int16_t L_33;
		L_33 = GenericVirtualFuncInvoker1< int16_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var, L_31, L_32);
		Burst_set_minCount_m842E848A5F6258CDD547F0E338BF67E855F6CF11((&V_0), L_33, NULL);
		// break;
		goto IL_017e;
	}

IL_0128:
	{
		// instance.maxCount = reader.Read<System.Int16>(ES3Type_short.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_34);
		int16_t L_36;
		L_36 = GenericVirtualFuncInvoker1< int16_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var, L_34, L_35);
		Burst_set_maxCount_mE084ABCE7DA30E7CB87A23392ED9FE488B7A4937((&V_0), L_36, NULL);
		// break;
		goto IL_017e;
	}

IL_013c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_37);
		int32_t L_39;
		L_39 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_37, L_38);
		Burst_set_cycleCount_m05108C6D7DEE82C257A403A595321A3A38C5CAD6((&V_0), L_39, NULL);
		// break;
		goto IL_017e;
	}

IL_0150:
	{
		// instance.repeatInterval = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		Burst_set_repeatInterval_m0353AAB1836FE2C202933D776366A269D4E19D74((&V_0), L_42, NULL);
		// break;
		goto IL_017e;
	}

IL_0164:
	{
		// instance.probability = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		Burst_set_probability_m3E3B21EA54BA0E50252514D60DE02F65788C31BF((&V_0), L_45, NULL);
		// break;
		goto IL_017e;
	}

IL_0178:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___reader0;
		NullCheck(L_46);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_46);
	}

IL_017e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___reader0;
		NullCheck(L_47);
		String_t* L_48;
		L_48 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_47);
		String_t* L_49 = L_48;
		V_1 = L_49;
		if (L_49)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 L_50 = V_0;
		Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 L_51 = L_50;
		RuntimeObject* L_52 = Box(Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858_il2cpp_TypeInfo_var, &L_51);
		return L_52;
	}
}
// System.Object ES3Types.ES3Type_Burst::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Burst_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m96B4953D0E2910A9ABF79D06EC6B71EFC9C3F5BA_gshared (ES3Type_Burst_t40787EA2EAC906926AD4179AD777757B27953B7F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FFF489A02BBDDCC996E889F0ECEBCE205866069);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51C6279E31F7483126B79E3000116001A915B690);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5454FE23184B1242AD621EDDE008CDD28151CD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE20595A7743C0867AD4CA74E5DC593528786492);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFA505452FE4BB2CE49EF1450AD597A05A908CC7);
		s_Il2CppMethodInitialized = true;
	}
	Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.Burst();
		il2cpp_codegen_initobj((&V_0), sizeof(Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858));
		goto IL_017e;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1688821116)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)967958004))))
		{
			goto IL_0080;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1564253156))))
		{
			goto IL_006e;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1688821116))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_0178;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-1882599794)))))
		{
			goto IL_0059;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-2040851968))))
		{
			goto IL_00a4;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1882599794))))
		{
			goto IL_0092;
		}
	}
	{
		goto IL_0178;
	}

IL_0059:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_00b6;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-266883425))))
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_0178;
	}

IL_006e:
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral51C6279E31F7483126B79E3000116001A915B690, NULL);
		if (L_12)
		{
			goto IL_00ec;
		}
	}
	{
		goto IL_0178;
	}

IL_0080:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626, NULL);
		if (L_14)
		{
			goto IL_0100;
		}
	}
	{
		goto IL_0178;
	}

IL_0092:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral2FFF489A02BBDDCC996E889F0ECEBCE205866069, NULL);
		if (L_16)
		{
			goto IL_0114;
		}
	}
	{
		goto IL_0178;
	}

IL_00a4:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralA5454FE23184B1242AD621EDDE008CDD28151CD7, NULL);
		if (L_18)
		{
			goto IL_0128;
		}
	}
	{
		goto IL_0178;
	}

IL_00b6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_20)
		{
			goto IL_013c;
		}
	}
	{
		goto IL_0178;
	}

IL_00c8:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralEFA505452FE4BB2CE49EF1450AD597A05A908CC7, NULL);
		if (L_22)
		{
			goto IL_0150;
		}
	}
	{
		goto IL_0178;
	}

IL_00da:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralEE20595A7743C0867AD4CA74E5DC593528786492, NULL);
		if (L_24)
		{
			goto IL_0164;
		}
	}
	{
		goto IL_0178;
	}

IL_00ec:
	{
		// instance.time = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_25 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_26 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_25);
		float L_27;
		L_27 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_25, L_26);
		Burst_set_time_mF53402DA04A70DC5CAE65C37721C39E2FF5F55BC((&V_0), L_27, NULL);
		// break;
		goto IL_017e;
	}

IL_0100:
	{
		// instance.count = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_28 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_29 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_28);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_30;
		L_30 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_28, L_29);
		Burst_set_count_m9386E449ABE86FEF1279312582D3D5E28530C999((&V_0), L_30, NULL);
		// break;
		goto IL_017e;
	}

IL_0114:
	{
		// instance.minCount = reader.Read<System.Int16>(ES3Type_short.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_31);
		int16_t L_33;
		L_33 = GenericVirtualFuncInvoker1< int16_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var, L_31, L_32);
		Burst_set_minCount_m842E848A5F6258CDD547F0E338BF67E855F6CF11((&V_0), L_33, NULL);
		// break;
		goto IL_017e;
	}

IL_0128:
	{
		// instance.maxCount = reader.Read<System.Int16>(ES3Type_short.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_34);
		int16_t L_36;
		L_36 = GenericVirtualFuncInvoker1< int16_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var, L_34, L_35);
		Burst_set_maxCount_mE084ABCE7DA30E7CB87A23392ED9FE488B7A4937((&V_0), L_36, NULL);
		// break;
		goto IL_017e;
	}

IL_013c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_37);
		int32_t L_39;
		L_39 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_37, L_38);
		Burst_set_cycleCount_m05108C6D7DEE82C257A403A595321A3A38C5CAD6((&V_0), L_39, NULL);
		// break;
		goto IL_017e;
	}

IL_0150:
	{
		// instance.repeatInterval = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		Burst_set_repeatInterval_m0353AAB1836FE2C202933D776366A269D4E19D74((&V_0), L_42, NULL);
		// break;
		goto IL_017e;
	}

IL_0164:
	{
		// instance.probability = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		Burst_set_probability_m3E3B21EA54BA0E50252514D60DE02F65788C31BF((&V_0), L_45, NULL);
		// break;
		goto IL_017e;
	}

IL_0178:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___reader0;
		NullCheck(L_46);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_46);
	}

IL_017e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___reader0;
		NullCheck(L_47);
		String_t* L_48;
		L_48 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_47);
		String_t* L_49 = L_48;
		V_1 = L_49;
		if (L_49)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 L_50 = V_0;
		Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 L_51 = L_50;
		RuntimeObject* L_52 = Box(Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858_il2cpp_TypeInfo_var, &L_51);
		return L_52;
	}
}
// System.Object ES3Types.ES3Type_Burst::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Burst_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB12F96EAD029B028A88CB40CAC4BBC0525F8B091_gshared (ES3Type_Burst_t40787EA2EAC906926AD4179AD777757B27953B7F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FFF489A02BBDDCC996E889F0ECEBCE205866069);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51C6279E31F7483126B79E3000116001A915B690);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5454FE23184B1242AD621EDDE008CDD28151CD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE20595A7743C0867AD4CA74E5DC593528786492);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFA505452FE4BB2CE49EF1450AD597A05A908CC7);
		s_Il2CppMethodInitialized = true;
	}
	Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.Burst();
		il2cpp_codegen_initobj((&V_0), sizeof(Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858));
		goto IL_017e;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1688821116)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)967958004))))
		{
			goto IL_0080;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1564253156))))
		{
			goto IL_006e;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1688821116))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_0178;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-1882599794)))))
		{
			goto IL_0059;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-2040851968))))
		{
			goto IL_00a4;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1882599794))))
		{
			goto IL_0092;
		}
	}
	{
		goto IL_0178;
	}

IL_0059:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_00b6;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-266883425))))
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_0178;
	}

IL_006e:
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral51C6279E31F7483126B79E3000116001A915B690, NULL);
		if (L_12)
		{
			goto IL_00ec;
		}
	}
	{
		goto IL_0178;
	}

IL_0080:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626, NULL);
		if (L_14)
		{
			goto IL_0100;
		}
	}
	{
		goto IL_0178;
	}

IL_0092:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral2FFF489A02BBDDCC996E889F0ECEBCE205866069, NULL);
		if (L_16)
		{
			goto IL_0114;
		}
	}
	{
		goto IL_0178;
	}

IL_00a4:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralA5454FE23184B1242AD621EDDE008CDD28151CD7, NULL);
		if (L_18)
		{
			goto IL_0128;
		}
	}
	{
		goto IL_0178;
	}

IL_00b6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_20)
		{
			goto IL_013c;
		}
	}
	{
		goto IL_0178;
	}

IL_00c8:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralEFA505452FE4BB2CE49EF1450AD597A05A908CC7, NULL);
		if (L_22)
		{
			goto IL_0150;
		}
	}
	{
		goto IL_0178;
	}

IL_00da:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralEE20595A7743C0867AD4CA74E5DC593528786492, NULL);
		if (L_24)
		{
			goto IL_0164;
		}
	}
	{
		goto IL_0178;
	}

IL_00ec:
	{
		// instance.time = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_25 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_26 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_25);
		float L_27;
		L_27 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_25, L_26);
		Burst_set_time_mF53402DA04A70DC5CAE65C37721C39E2FF5F55BC((&V_0), L_27, NULL);
		// break;
		goto IL_017e;
	}

IL_0100:
	{
		// instance.count = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_28 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_29 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_28);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_30;
		L_30 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_28, L_29);
		Burst_set_count_m9386E449ABE86FEF1279312582D3D5E28530C999((&V_0), L_30, NULL);
		// break;
		goto IL_017e;
	}

IL_0114:
	{
		// instance.minCount = reader.Read<System.Int16>(ES3Type_short.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_31);
		int16_t L_33;
		L_33 = GenericVirtualFuncInvoker1< int16_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var, L_31, L_32);
		Burst_set_minCount_m842E848A5F6258CDD547F0E338BF67E855F6CF11((&V_0), L_33, NULL);
		// break;
		goto IL_017e;
	}

IL_0128:
	{
		// instance.maxCount = reader.Read<System.Int16>(ES3Type_short.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_34);
		int16_t L_36;
		L_36 = GenericVirtualFuncInvoker1< int16_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var, L_34, L_35);
		Burst_set_maxCount_mE084ABCE7DA30E7CB87A23392ED9FE488B7A4937((&V_0), L_36, NULL);
		// break;
		goto IL_017e;
	}

IL_013c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_37);
		int32_t L_39;
		L_39 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_37, L_38);
		Burst_set_cycleCount_m05108C6D7DEE82C257A403A595321A3A38C5CAD6((&V_0), L_39, NULL);
		// break;
		goto IL_017e;
	}

IL_0150:
	{
		// instance.repeatInterval = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		Burst_set_repeatInterval_m0353AAB1836FE2C202933D776366A269D4E19D74((&V_0), L_42, NULL);
		// break;
		goto IL_017e;
	}

IL_0164:
	{
		// instance.probability = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		Burst_set_probability_m3E3B21EA54BA0E50252514D60DE02F65788C31BF((&V_0), L_45, NULL);
		// break;
		goto IL_017e;
	}

IL_0178:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___reader0;
		NullCheck(L_46);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_46);
	}

IL_017e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___reader0;
		NullCheck(L_47);
		String_t* L_48;
		L_48 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_47);
		String_t* L_49 = L_48;
		V_1 = L_49;
		if (L_49)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 L_50 = V_0;
		Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 L_51 = L_50;
		RuntimeObject* L_52 = Box(Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858_il2cpp_TypeInfo_var, &L_51);
		return L_52;
	}
}
// System.Object ES3Types.ES3Type_Burst::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Burst_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m3E9F52CD3F1DE64CE3C7B96035654478A411D8CB_gshared (ES3Type_Burst_t40787EA2EAC906926AD4179AD777757B27953B7F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FFF489A02BBDDCC996E889F0ECEBCE205866069);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51C6279E31F7483126B79E3000116001A915B690);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5454FE23184B1242AD621EDDE008CDD28151CD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE20595A7743C0867AD4CA74E5DC593528786492);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFA505452FE4BB2CE49EF1450AD597A05A908CC7);
		s_Il2CppMethodInitialized = true;
	}
	Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.Burst();
		il2cpp_codegen_initobj((&V_0), sizeof(Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858));
		goto IL_017e;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1688821116)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)967958004))))
		{
			goto IL_0080;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1564253156))))
		{
			goto IL_006e;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1688821116))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_0178;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-1882599794)))))
		{
			goto IL_0059;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-2040851968))))
		{
			goto IL_00a4;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1882599794))))
		{
			goto IL_0092;
		}
	}
	{
		goto IL_0178;
	}

IL_0059:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_00b6;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-266883425))))
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_0178;
	}

IL_006e:
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral51C6279E31F7483126B79E3000116001A915B690, NULL);
		if (L_12)
		{
			goto IL_00ec;
		}
	}
	{
		goto IL_0178;
	}

IL_0080:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626, NULL);
		if (L_14)
		{
			goto IL_0100;
		}
	}
	{
		goto IL_0178;
	}

IL_0092:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral2FFF489A02BBDDCC996E889F0ECEBCE205866069, NULL);
		if (L_16)
		{
			goto IL_0114;
		}
	}
	{
		goto IL_0178;
	}

IL_00a4:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralA5454FE23184B1242AD621EDDE008CDD28151CD7, NULL);
		if (L_18)
		{
			goto IL_0128;
		}
	}
	{
		goto IL_0178;
	}

IL_00b6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_20)
		{
			goto IL_013c;
		}
	}
	{
		goto IL_0178;
	}

IL_00c8:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralEFA505452FE4BB2CE49EF1450AD597A05A908CC7, NULL);
		if (L_22)
		{
			goto IL_0150;
		}
	}
	{
		goto IL_0178;
	}

IL_00da:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralEE20595A7743C0867AD4CA74E5DC593528786492, NULL);
		if (L_24)
		{
			goto IL_0164;
		}
	}
	{
		goto IL_0178;
	}

IL_00ec:
	{
		// instance.time = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_25 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_26 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_25);
		float L_27;
		L_27 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_25, L_26);
		Burst_set_time_mF53402DA04A70DC5CAE65C37721C39E2FF5F55BC((&V_0), L_27, NULL);
		// break;
		goto IL_017e;
	}

IL_0100:
	{
		// instance.count = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_28 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_29 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_28);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_30;
		L_30 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_28, L_29);
		Burst_set_count_m9386E449ABE86FEF1279312582D3D5E28530C999((&V_0), L_30, NULL);
		// break;
		goto IL_017e;
	}

IL_0114:
	{
		// instance.minCount = reader.Read<System.Int16>(ES3Type_short.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_31);
		int16_t L_33;
		L_33 = GenericVirtualFuncInvoker1< int16_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var, L_31, L_32);
		Burst_set_minCount_m842E848A5F6258CDD547F0E338BF67E855F6CF11((&V_0), L_33, NULL);
		// break;
		goto IL_017e;
	}

IL_0128:
	{
		// instance.maxCount = reader.Read<System.Int16>(ES3Type_short.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_34);
		int16_t L_36;
		L_36 = GenericVirtualFuncInvoker1< int16_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var, L_34, L_35);
		Burst_set_maxCount_mE084ABCE7DA30E7CB87A23392ED9FE488B7A4937((&V_0), L_36, NULL);
		// break;
		goto IL_017e;
	}

IL_013c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_37);
		int32_t L_39;
		L_39 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_37, L_38);
		Burst_set_cycleCount_m05108C6D7DEE82C257A403A595321A3A38C5CAD6((&V_0), L_39, NULL);
		// break;
		goto IL_017e;
	}

IL_0150:
	{
		// instance.repeatInterval = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		Burst_set_repeatInterval_m0353AAB1836FE2C202933D776366A269D4E19D74((&V_0), L_42, NULL);
		// break;
		goto IL_017e;
	}

IL_0164:
	{
		// instance.probability = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		Burst_set_probability_m3E3B21EA54BA0E50252514D60DE02F65788C31BF((&V_0), L_45, NULL);
		// break;
		goto IL_017e;
	}

IL_0178:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___reader0;
		NullCheck(L_46);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_46);
	}

IL_017e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___reader0;
		NullCheck(L_47);
		String_t* L_48;
		L_48 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_47);
		String_t* L_49 = L_48;
		V_1 = L_49;
		if (L_49)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 L_50 = V_0;
		Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 L_51 = L_50;
		RuntimeObject* L_52 = Box(Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858_il2cpp_TypeInfo_var, &L_51);
		return L_52;
	}
}
// System.Object ES3Types.ES3Type_Burst::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Burst_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m008F30398B71EFE58868C9EC780D3FFFB743A475_gshared (ES3Type_Burst_t40787EA2EAC906926AD4179AD777757B27953B7F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FFF489A02BBDDCC996E889F0ECEBCE205866069);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51C6279E31F7483126B79E3000116001A915B690);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5454FE23184B1242AD621EDDE008CDD28151CD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE20595A7743C0867AD4CA74E5DC593528786492);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFA505452FE4BB2CE49EF1450AD597A05A908CC7);
		s_Il2CppMethodInitialized = true;
	}
	Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.Burst();
		il2cpp_codegen_initobj((&V_0), sizeof(Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858));
		goto IL_017e;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)1688821116)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)967958004))))
		{
			goto IL_0080;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1564253156))))
		{
			goto IL_006e;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1688821116))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_0178;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)-1882599794)))))
		{
			goto IL_0059;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-2040851968))))
		{
			goto IL_00a4;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1882599794))))
		{
			goto IL_0092;
		}
	}
	{
		goto IL_0178;
	}

IL_0059:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_00b6;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-266883425))))
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_0178;
	}

IL_006e:
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral51C6279E31F7483126B79E3000116001A915B690, NULL);
		if (L_12)
		{
			goto IL_00ec;
		}
	}
	{
		goto IL_0178;
	}

IL_0080:
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626, NULL);
		if (L_14)
		{
			goto IL_0100;
		}
	}
	{
		goto IL_0178;
	}

IL_0092:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral2FFF489A02BBDDCC996E889F0ECEBCE205866069, NULL);
		if (L_16)
		{
			goto IL_0114;
		}
	}
	{
		goto IL_0178;
	}

IL_00a4:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralA5454FE23184B1242AD621EDDE008CDD28151CD7, NULL);
		if (L_18)
		{
			goto IL_0128;
		}
	}
	{
		goto IL_0178;
	}

IL_00b6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_20)
		{
			goto IL_013c;
		}
	}
	{
		goto IL_0178;
	}

IL_00c8:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralEFA505452FE4BB2CE49EF1450AD597A05A908CC7, NULL);
		if (L_22)
		{
			goto IL_0150;
		}
	}
	{
		goto IL_0178;
	}

IL_00da:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteralEE20595A7743C0867AD4CA74E5DC593528786492, NULL);
		if (L_24)
		{
			goto IL_0164;
		}
	}
	{
		goto IL_0178;
	}

IL_00ec:
	{
		// instance.time = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_25 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_26 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_25);
		float L_27;
		L_27 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_25, L_26);
		Burst_set_time_mF53402DA04A70DC5CAE65C37721C39E2FF5F55BC((&V_0), L_27, NULL);
		// break;
		goto IL_017e;
	}

IL_0100:
	{
		// instance.count = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_28 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_29 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_28);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_30;
		L_30 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_28, L_29);
		Burst_set_count_m9386E449ABE86FEF1279312582D3D5E28530C999((&V_0), L_30, NULL);
		// break;
		goto IL_017e;
	}

IL_0114:
	{
		// instance.minCount = reader.Read<System.Int16>(ES3Type_short.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_31);
		int16_t L_33;
		L_33 = GenericVirtualFuncInvoker1< int16_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var, L_31, L_32);
		Burst_set_minCount_m842E848A5F6258CDD547F0E338BF67E855F6CF11((&V_0), L_33, NULL);
		// break;
		goto IL_017e;
	}

IL_0128:
	{
		// instance.maxCount = reader.Read<System.Int16>(ES3Type_short.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_short_t7E8C93E004DB27D7C1B1B6CB2F59537CD2728EB2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_34);
		int16_t L_36;
		L_36 = GenericVirtualFuncInvoker1< int16_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE72CC24F9F22A1CD3912232088AC138F41C0C5E9_RuntimeMethod_var, L_34, L_35);
		Burst_set_maxCount_mE084ABCE7DA30E7CB87A23392ED9FE488B7A4937((&V_0), L_36, NULL);
		// break;
		goto IL_017e;
	}

IL_013c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_37);
		int32_t L_39;
		L_39 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_37, L_38);
		Burst_set_cycleCount_m05108C6D7DEE82C257A403A595321A3A38C5CAD6((&V_0), L_39, NULL);
		// break;
		goto IL_017e;
	}

IL_0150:
	{
		// instance.repeatInterval = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		Burst_set_repeatInterval_m0353AAB1836FE2C202933D776366A269D4E19D74((&V_0), L_42, NULL);
		// break;
		goto IL_017e;
	}

IL_0164:
	{
		// instance.probability = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		Burst_set_probability_m3E3B21EA54BA0E50252514D60DE02F65788C31BF((&V_0), L_45, NULL);
		// break;
		goto IL_017e;
	}

IL_0178:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___reader0;
		NullCheck(L_46);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_46);
	}

IL_017e:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___reader0;
		NullCheck(L_47);
		String_t* L_48;
		L_48 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_47);
		String_t* L_49 = L_48;
		V_1 = L_49;
		if (L_49)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 L_50 = V_0;
		Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858 L_51 = L_50;
		RuntimeObject* L_52 = Box(Burst_tFF720C12C0A87FA1F5A7AEAE04A43065A4900858_il2cpp_TypeInfo_var, &L_51);
		return L_52;
	}
}
// System.Void ES3Types.ES3Type_Camera::ReadComponent<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Camera_ReadComponent_TisRuntimeObject_m3C6ADD85A8632A42F9B49F1AD240C7E36CD43439_gshared (ES3Type_Camera_tC146C6083991760C12741B3A3EC65E2A5A03182F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisCameraClearFlags_t91B921013F611457A09B92EF9C6B218CECF67202_m732408F80D81FE4865E310BC66E004410C1D4535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisCameraType_tCA1017DBE96964E1D967942FB98F152F14121FCD_m04BFB4EE61777675F5AC8AF2FEB46C21532B6AF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mC041ABAFD847F57C6FC0692A54FDEF888CEF1694_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisDepthTextureMode_t64422B6053A3474607EEBAB848B2049ECE39472D_m3CCBAEF949FAAA8EC817EF26339140D38758DE1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisHideFlags_tC514182ACEFD3B847988C45D5DB812FF6DB1BF4A_m36F4D84DE5068416FE003C875121A214616DD8A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m8ACD7A96565532BBAEE307CD97D65075919C09F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisOpaqueSortMode_tBF053A349A61D37C9D45A1DBC339259F20E98E83_m0E76BEF98D5BFC978BD2EC58029F301464998D84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m95E8431D073E50D89F48E73AF0155B4A66EC30E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderingPath_t8FE80D49AAC236E30E65DAB2FCDB53A4151B654D_m2B73252B0714826360E1BE3FBF866A1BC2CD16AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisStereoTargetEyeMask_t938A55A4503B0E0F4673D0014089585B55865C93_m352E05D9522CD0B0FB8C5A6E99BECB3D64D88F4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTransparencySortMode_t37A2377DA9F8D6D10C927284BC4F27443D78FC02_m9F35A471B07689EEFD1DC36DCD919C0F4C3827DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A881043E95C95CD7EEFB78B76222E69731E2B6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E43178D749CE80F6CE0900EB962639B261C328C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15508EDDEB2DD445C6399477C142A41D34A12A9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1ADBD3462977FA535070E2C582D0CD1961C073B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2426528052B77F56DDF7722F2DA8B7012E27AD1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24DF95401885DF3F59ABAE4A56A5D6940BD4487D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25CBB5E01B6AB406133346773028FD5665D9762B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279580B990B8C49BA46E7BDBCCA6E9322580B3E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FC41AE087B9CE4271A78770924313D7C3A3374C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B21B1B7385FD1827474681D5EFAC0BAB0EF3F78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56BB179D4225EC792D90D4EB4244CDE822EFE061);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59287C7C82FA1D4E9B8B782CF3B247159C27266B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B29EA5529626A746755F52D4F60E51F08CE9D6E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F7F9963A2354D2A1DAE9EB5D17828E80398A34E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7282D2D87E28F6066D5F7A27A8DC3C96DAA6972E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral743B5A800B68BECD32E89977C700248578EFB001);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DA8AFDD219E22BEDB1EEBFEFF7F55BCCFF25321);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93A2504DF2B7CEC07BFB50DA34E690ECDA6D0AF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99F08572328E98DBF4CC4A84E8F63C174B20ACD5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3605E0B32CE904E6987AD1752FB71874AD88A14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5C170A69937273D1C83AA24B8AB19B8573C0944);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAFF7BFDA31C03C7CD9F538694643C1B6F4F6E06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC196E17AD203E72A6B92D147514E41254F0761B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC220E5ABB03B498FA9E8AE08256C71E0C463D910);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC81C0124D6F1F39788E93F522707AAE533F9B8C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8B4992E5FEE587EA2295F1BD0BFB52535A5F706);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3DAE436D34E1BFB3B81BD5C319049A2E9F9BF3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2EFADC5918C584979720A43A96D5018AA95AC7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF93B8B973C7D65F166A00E96F1D4A4A414708130);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	uint32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	{
		// var instance = (UnityEngine.Camera)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)CastclassSealed((RuntimeObject*)L_0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var));
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

FINALLY_06d0:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_4;
					if (!L_5)
					{
						goto IL_06e3;
					}
				}
				{
					RuntimeObject* L_6 = V_4;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_06e3:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_06c3_1;
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
				if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-1573440022)))))
				{
					goto IL_012e_1;
				}
			}
			{
				uint32_t L_12 = V_3;
				if ((!(((uint32_t)L_12) <= ((uint32_t)((int32_t)718024280)))))
				{
					goto IL_00aa_1;
				}
			}
			{
				uint32_t L_13 = V_3;
				if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)290440974)))))
				{
					goto IL_006c_1;
				}
			}
			{
				uint32_t L_14 = V_3;
				if ((((int32_t)L_14) == ((int32_t)((int32_t)49525662))))
				{
					goto IL_049f_1;
				}
			}
			{
				uint32_t L_15 = V_3;
				if ((((int32_t)L_15) == ((int32_t)((int32_t)214491439))))
				{
					goto IL_0325_1;
				}
			}
			{
				uint32_t L_16 = V_3;
				if ((((int32_t)L_16) == ((int32_t)((int32_t)290440974))))
				{
					goto IL_040c_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_006c_1:
			{
				uint32_t L_17 = V_3;
				if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)505642131)))))
				{
					goto IL_008f_1;
				}
			}
			{
				uint32_t L_18 = V_3;
				if ((((int32_t)L_18) == ((int32_t)((int32_t)415793305))))
				{
					goto IL_038e_1;
				}
			}
			{
				uint32_t L_19 = V_3;
				if ((((int32_t)L_19) == ((int32_t)((int32_t)505642131))))
				{
					goto IL_023e_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_008f_1:
			{
				uint32_t L_20 = V_3;
				if ((((int32_t)L_20) == ((int32_t)((int32_t)716102331))))
				{
					goto IL_033a_1;
				}
			}
			{
				uint32_t L_21 = V_3;
				if ((((int32_t)L_21) == ((int32_t)((int32_t)718024280))))
				{
					goto IL_02e6_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_00aa_1:
			{
				uint32_t L_22 = V_3;
				if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)1647354102)))))
				{
					goto IL_00f0_1;
				}
			}
			{
				uint32_t L_23 = V_3;
				if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)1111422941)))))
				{
					goto IL_00d5_1;
				}
			}
			{
				uint32_t L_24 = V_3;
				if ((((int32_t)L_24) == ((int32_t)((int32_t)977652726))))
				{
					goto IL_03f7_1;
				}
			}
			{
				uint32_t L_25 = V_3;
				if ((((int32_t)L_25) == ((int32_t)((int32_t)1111422941))))
				{
					goto IL_03cd_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_00d5_1:
			{
				uint32_t L_26 = V_3;
				if ((((int32_t)L_26) == ((int32_t)((int32_t)1435561369))))
				{
					goto IL_0379_1;
				}
			}
			{
				uint32_t L_27 = V_3;
				if ((((int32_t)L_27) == ((int32_t)((int32_t)1647354102))))
				{
					goto IL_0436_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_00f0_1:
			{
				uint32_t L_28 = V_3;
				if ((!(((uint32_t)L_28) <= ((uint32_t)((int32_t)-1845627795)))))
				{
					goto IL_0113_1;
				}
			}
			{
				uint32_t L_29 = V_3;
				if ((((int32_t)L_29) == ((int32_t)((int32_t)1708250613))))
				{
					goto IL_02d1_1;
				}
			}
			{
				uint32_t L_30 = V_3;
				if ((((int32_t)L_30) == ((int32_t)((int32_t)-1845627795))))
				{
					goto IL_03e2_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_0113_1:
			{
				uint32_t L_31 = V_3;
				if ((((int32_t)L_31) == ((int32_t)((int32_t)-1788120886))))
				{
					goto IL_0475_1;
				}
			}
			{
				uint32_t L_32 = V_3;
				if ((((int32_t)L_32) == ((int32_t)((int32_t)-1573440022))))
				{
					goto IL_02a7_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_012e_1:
			{
				uint32_t L_33 = V_3;
				if ((!(((uint32_t)L_33) <= ((uint32_t)((int32_t)-610628839)))))
				{
					goto IL_01bd_1;
				}
			}
			{
				uint32_t L_34 = V_3;
				if ((!(((uint32_t)L_34) <= ((uint32_t)((int32_t)-1191404086)))))
				{
					goto IL_017f_1;
				}
			}
			{
				uint32_t L_35 = V_3;
				if ((!(((uint32_t)L_35) <= ((uint32_t)((int32_t)-1364967343)))))
				{
					goto IL_0164_1;
				}
			}
			{
				uint32_t L_36 = V_3;
				if ((((int32_t)L_36) == ((int32_t)((int32_t)-1571175440))))
				{
					goto IL_03b8_1;
				}
			}
			{
				uint32_t L_37 = V_3;
				if ((((int32_t)L_37) == ((int32_t)((int32_t)-1364967343))))
				{
					goto IL_0310_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_0164_1:
			{
				uint32_t L_38 = V_3;
				if ((((int32_t)L_38) == ((int32_t)((int32_t)-1211783472))))
				{
					goto IL_034f_1;
				}
			}
			{
				uint32_t L_39 = V_3;
				if ((((int32_t)L_39) == ((int32_t)((int32_t)-1191404086))))
				{
					goto IL_0268_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_017f_1:
			{
				uint32_t L_40 = V_3;
				if ((!(((uint32_t)L_40) <= ((uint32_t)((int32_t)-753759276)))))
				{
					goto IL_01a2_1;
				}
			}
			{
				uint32_t L_41 = V_3;
				if ((((int32_t)L_41) == ((int32_t)((int32_t)-1035576455))))
				{
					goto IL_048a_1;
				}
			}
			{
				uint32_t L_42 = V_3;
				if ((((int32_t)L_42) == ((int32_t)((int32_t)-753759276))))
				{
					goto IL_027d_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_01a2_1:
			{
				uint32_t L_43 = V_3;
				if ((((int32_t)L_43) == ((int32_t)((int32_t)-732882317))))
				{
					goto IL_044b_1;
				}
			}
			{
				uint32_t L_44 = V_3;
				if ((((int32_t)L_44) == ((int32_t)((int32_t)-610628839))))
				{
					goto IL_0460_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_01bd_1:
			{
				uint32_t L_45 = V_3;
				if ((!(((uint32_t)L_45) <= ((uint32_t)((int32_t)-354136825)))))
				{
					goto IL_0203_1;
				}
			}
			{
				uint32_t L_46 = V_3;
				if ((!(((uint32_t)L_46) <= ((uint32_t)((int32_t)-418784956)))))
				{
					goto IL_01e8_1;
				}
			}
			{
				uint32_t L_47 = V_3;
				if ((((int32_t)L_47) == ((int32_t)((int32_t)-470786133))))
				{
					goto IL_02bc_1;
				}
			}
			{
				uint32_t L_48 = V_3;
				if ((((int32_t)L_48) == ((int32_t)((int32_t)-418784956))))
				{
					goto IL_0292_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_01e8_1:
			{
				uint32_t L_49 = V_3;
				if ((((int32_t)L_49) == ((int32_t)((int32_t)-410956283))))
				{
					goto IL_0421_1;
				}
			}
			{
				uint32_t L_50 = V_3;
				if ((((int32_t)L_50) == ((int32_t)((int32_t)-354136825))))
				{
					goto IL_0364_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_0203_1:
			{
				uint32_t L_51 = V_3;
				if ((!(((uint32_t)L_51) <= ((uint32_t)((int32_t)-121099767)))))
				{
					goto IL_0223_1;
				}
			}
			{
				uint32_t L_52 = V_3;
				if ((((int32_t)L_52) == ((int32_t)((int32_t)-350400524))))
				{
					goto IL_04b4_1;
				}
			}
			{
				uint32_t L_53 = V_3;
				if ((((int32_t)L_53) == ((int32_t)((int32_t)-121099767))))
				{
					goto IL_0253_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_0223_1:
			{
				uint32_t L_54 = V_3;
				if ((((int32_t)L_54) == ((int32_t)((int32_t)-85602597))))
				{
					goto IL_03a3_1;
				}
			}
			{
				uint32_t L_55 = V_3;
				if ((((int32_t)L_55) == ((int32_t)((int32_t)-25846038))))
				{
					goto IL_02fb_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_023e_1:
			{
				String_t* L_56 = V_2;
				bool L_57;
				L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteral24DF95401885DF3F59ABAE4A56A5D6940BD4487D, NULL);
				if (L_57)
				{
					goto IL_04c9_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_0253_1:
			{
				String_t* L_58 = V_2;
				bool L_59;
				L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteralF93B8B973C7D65F166A00E96F1D4A4A414708130, NULL);
				if (L_59)
				{
					goto IL_04da_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_0268_1:
			{
				String_t* L_60 = V_2;
				bool L_61;
				L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteralBAFF7BFDA31C03C7CD9F538694643C1B6F4F6E06, NULL);
				if (L_61)
				{
					goto IL_04eb_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_027d_1:
			{
				String_t* L_62 = V_2;
				bool L_63;
				L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral25CBB5E01B6AB406133346773028FD5665D9762B, NULL);
				if (L_63)
				{
					goto IL_04fc_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_0292_1:
			{
				String_t* L_64 = V_2;
				bool L_65;
				L_65 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_64, _stringLiteral0A881043E95C95CD7EEFB78B76222E69731E2B6A, NULL);
				if (L_65)
				{
					goto IL_050d_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_02a7_1:
			{
				String_t* L_66 = V_2;
				bool L_67;
				L_67 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_66, _stringLiteral15508EDDEB2DD445C6399477C142A41D34A12A9A, NULL);
				if (L_67)
				{
					goto IL_051e_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_02bc_1:
			{
				String_t* L_68 = V_2;
				bool L_69;
				L_69 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_68, _stringLiteral0E43178D749CE80F6CE0900EB962639B261C328C, NULL);
				if (L_69)
				{
					goto IL_052f_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_02d1_1:
			{
				String_t* L_70 = V_2;
				bool L_71;
				L_71 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_70, _stringLiteralA3605E0B32CE904E6987AD1752FB71874AD88A14, NULL);
				if (L_71)
				{
					goto IL_0540_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_02e6_1:
			{
				String_t* L_72 = V_2;
				bool L_73;
				L_73 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_72, _stringLiteral8DA8AFDD219E22BEDB1EEBFEFF7F55BCCFF25321, NULL);
				if (L_73)
				{
					goto IL_0551_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_02fb_1:
			{
				String_t* L_74 = V_2;
				bool L_75;
				L_75 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_74, _stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7, NULL);
				if (L_75)
				{
					goto IL_0562_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_0310_1:
			{
				String_t* L_76 = V_2;
				bool L_77;
				L_77 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_76, _stringLiteralC81C0124D6F1F39788E93F522707AAE533F9B8C6, NULL);
				if (L_77)
				{
					goto IL_0573_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_0325_1:
			{
				String_t* L_78 = V_2;
				bool L_79;
				L_79 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_78, _stringLiteralD3DAE436D34E1BFB3B81BD5C319049A2E9F9BF3D, NULL);
				if (L_79)
				{
					goto IL_0584_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_033a_1:
			{
				String_t* L_80 = V_2;
				bool L_81;
				L_81 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_80, _stringLiteral59287C7C82FA1D4E9B8B782CF3B247159C27266B, NULL);
				if (L_81)
				{
					goto IL_0595_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_034f_1:
			{
				String_t* L_82 = V_2;
				bool L_83;
				L_83 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_82, _stringLiteral279580B990B8C49BA46E7BDBCCA6E9322580B3E3, NULL);
				if (L_83)
				{
					goto IL_05a6_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_0364_1:
			{
				String_t* L_84 = V_2;
				bool L_85;
				L_85 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_84, _stringLiteral6F7F9963A2354D2A1DAE9EB5D17828E80398A34E, NULL);
				if (L_85)
				{
					goto IL_05b7_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_0379_1:
			{
				String_t* L_86 = V_2;
				bool L_87;
				L_87 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_86, _stringLiteral4B21B1B7385FD1827474681D5EFAC0BAB0EF3F78, NULL);
				if (L_87)
				{
					goto IL_05c8_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_038e_1:
			{
				String_t* L_88 = V_2;
				bool L_89;
				L_89 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_88, _stringLiteral93A2504DF2B7CEC07BFB50DA34E690ECDA6D0AF8, NULL);
				if (L_89)
				{
					goto IL_05d9_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_03a3_1:
			{
				String_t* L_90 = V_2;
				bool L_91;
				L_91 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_90, _stringLiteral1ADBD3462977FA535070E2C582D0CD1961C073B0, NULL);
				if (L_91)
				{
					goto IL_05ea_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_03b8_1:
			{
				String_t* L_92 = V_2;
				bool L_93;
				L_93 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_92, _stringLiteral99F08572328E98DBF4CC4A84E8F63C174B20ACD5, NULL);
				if (L_93)
				{
					goto IL_05fb_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_03cd_1:
			{
				String_t* L_94 = V_2;
				bool L_95;
				L_95 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_94, _stringLiteral5B29EA5529626A746755F52D4F60E51F08CE9D6E, NULL);
				if (L_95)
				{
					goto IL_060c_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_03e2_1:
			{
				String_t* L_96 = V_2;
				bool L_97;
				L_97 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_96, _stringLiteral2426528052B77F56DDF7722F2DA8B7012E27AD1E, NULL);
				if (L_97)
				{
					goto IL_061d_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_03f7_1:
			{
				String_t* L_98 = V_2;
				bool L_99;
				L_99 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_98, _stringLiteralC196E17AD203E72A6B92D147514E41254F0761B8, NULL);
				if (L_99)
				{
					goto IL_062e_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_040c_1:
			{
				String_t* L_100 = V_2;
				bool L_101;
				L_101 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_100, _stringLiteralE2EFADC5918C584979720A43A96D5018AA95AC7D, NULL);
				if (L_101)
				{
					goto IL_063f_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_0421_1:
			{
				String_t* L_102 = V_2;
				bool L_103;
				L_103 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_102, _stringLiteral2FC41AE087B9CE4271A78770924313D7C3A3374C, NULL);
				if (L_103)
				{
					goto IL_064d_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_0436_1:
			{
				String_t* L_104 = V_2;
				bool L_105;
				L_105 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_104, _stringLiteralC8B4992E5FEE587EA2295F1BD0BFB52535A5F706, NULL);
				if (L_105)
				{
					goto IL_065b_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_044b_1:
			{
				String_t* L_106 = V_2;
				bool L_107;
				L_107 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_106, _stringLiteral743B5A800B68BECD32E89977C700248578EFB001, NULL);
				if (L_107)
				{
					goto IL_0669_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_0460_1:
			{
				String_t* L_108 = V_2;
				bool L_109;
				L_109 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_108, _stringLiteralB5C170A69937273D1C83AA24B8AB19B8573C0944, NULL);
				if (L_109)
				{
					goto IL_0677_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_0475_1:
			{
				String_t* L_110 = V_2;
				bool L_111;
				L_111 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_110, _stringLiteral56BB179D4225EC792D90D4EB4244CDE822EFE061, NULL);
				if (L_111)
				{
					goto IL_0685_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_048a_1:
			{
				String_t* L_112 = V_2;
				bool L_113;
				L_113 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_112, _stringLiteral7282D2D87E28F6066D5F7A27A8DC3C96DAA6972E, NULL);
				if (L_113)
				{
					goto IL_0693_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_049f_1:
			{
				String_t* L_114 = V_2;
				bool L_115;
				L_115 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_114, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
				if (L_115)
				{
					goto IL_06a1_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_04b4_1:
			{
				String_t* L_116 = V_2;
				bool L_117;
				L_117 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_116, _stringLiteralC220E5ABB03B498FA9E8AE08256C71E0C463D910, NULL);
				if (L_117)
				{
					goto IL_06af_1;
				}
			}
			{
				goto IL_06bd_1;
			}

IL_04c9_1:
			{
				// instance.fieldOfView = reader.Read<System.Single>();
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_118 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_119 = ___reader0;
				NullCheck(L_119);
				float L_120;
				L_120 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_119);
				NullCheck(L_118);
				Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(L_118, L_120, NULL);
				// break;
				goto IL_06c3_1;
			}

IL_04da_1:
			{
				// instance.nearClipPlane = reader.Read<System.Single>();
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_121 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_122 = ___reader0;
				NullCheck(L_122);
				float L_123;
				L_123 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_122);
				NullCheck(L_121);
				Camera_set_nearClipPlane_m78482B5E4E0CE4C195D9CE0332AA75B2D9CCDDF6(L_121, L_123, NULL);
				// break;
				goto IL_06c3_1;
			}

IL_04eb_1:
			{
				// instance.farClipPlane = reader.Read<System.Single>();
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_124 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_125 = ___reader0;
				NullCheck(L_125);
				float L_126;
				L_126 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_125);
				NullCheck(L_124);
				Camera_set_farClipPlane_m84EF39B09573168734613481FD979BFF31C60139(L_124, L_126, NULL);
				// break;
				goto IL_06c3_1;
			}

IL_04fc_1:
			{
				// instance.renderingPath = reader.Read<UnityEngine.RenderingPath>();
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_127 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_128 = ___reader0;
				NullCheck(L_128);
				int32_t L_129;
				L_129 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisRenderingPath_t8FE80D49AAC236E30E65DAB2FCDB53A4151B654D_m2B73252B0714826360E1BE3FBF866A1BC2CD16AA_RuntimeMethod_var, L_128);
				NullCheck(L_127);
				Camera_set_renderingPath_m5BD8E4230DE3DD68F722AED5D85271E2A2B026B3(L_127, L_129, NULL);
				// break;
				goto IL_06c3_1;
			}

IL_050d_1:
			{
				// instance.allowHDR = reader.Read<System.Boolean>();
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_130 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_131 = ___reader0;
				NullCheck(L_131);
				bool L_132;
				L_132 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_131);
				NullCheck(L_130);
				Camera_set_allowHDR_m44211153DAF6DF9A51142EC7760A53777C1F3315(L_130, L_132, NULL);
				// break;
				goto IL_06c3_1;
			}

IL_051e_1:
			{
				// instance.orthographicSize = reader.Read<System.Single>();
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_133 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_134 = ___reader0;
				NullCheck(L_134);
				float L_135;
				L_135 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_134);
				NullCheck(L_133);
				Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C(L_133, L_135, NULL);
				// break;
				goto IL_06c3_1;
			}

IL_052f_1:
			{
				// instance.orthographic = reader.Read<System.Boolean>();
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_136 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_137 = ___reader0;
				NullCheck(L_137);
				bool L_138;
				L_138 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_137);
				NullCheck(L_136);
				Camera_set_orthographic_m64915C0840A68E526830A69F1C40257206185020(L_136, L_138, NULL);
				// break;
				goto IL_06c3_1;
			}

IL_0540_1:
			{
				// instance.opaqueSortMode = reader.Read<UnityEngine.Rendering.OpaqueSortMode>();
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_139 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_140 = ___reader0;
				NullCheck(L_140);
				int32_t L_141;
				L_141 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisOpaqueSortMode_tBF053A349A61D37C9D45A1DBC339259F20E98E83_m0E76BEF98D5BFC978BD2EC58029F301464998D84_RuntimeMethod_var, L_140);
				NullCheck(L_139);
				Camera_set_opaqueSortMode_m45FC08DB8CE4F0D12E99335ECC3B3DD9C9DB1CB9(L_139, L_141, NULL);
				// break;
				goto IL_06c3_1;
			}

IL_0551_1:
			{
				// instance.transparencySortMode = reader.Read<UnityEngine.TransparencySortMode>();
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_142 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_143 = ___reader0;
				NullCheck(L_143);
				int32_t L_144;
				L_144 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTransparencySortMode_t37A2377DA9F8D6D10C927284BC4F27443D78FC02_m9F35A471B07689EEFD1DC36DCD919C0F4C3827DA_RuntimeMethod_var, L_143);
				NullCheck(L_142);
				Camera_set_transparencySortMode_m1D37AE58E5514F4CE38D3F33CC1B0A6A7F1C1013(L_142, L_144, NULL);
				// break;
				goto IL_06c3_1;
			}

IL_0562_1:
			{
				// instance.depth = reader.Read<System.Single>();
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_145 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_146 = ___reader0;
				NullCheck(L_146);
				float L_147;
				L_147 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_146);
				NullCheck(L_145);
				Camera_set_depth_m595FA2A4FEBC90E730810BBFB55E4A2C2134066F(L_145, L_147, NULL);
				// break;
				goto IL_06c3_1;
			}

IL_0573_1:
			{
				// instance.aspect = reader.Read<System.Single>();
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_148 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_149 = ___reader0;
				NullCheck(L_149);
				float L_150;
				L_150 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_149);
				NullCheck(L_148);
				Camera_set_aspect_m537F21B48FDD5C060DFF9D87F34F4FB2B0F9BEB6(L_148, L_150, NULL);
				// break;
				goto IL_06c3_1;
			}

IL_0584_1:
			{
				// instance.cullingMask = reader.Read<System.Int32>();
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_151 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_152 = ___reader0;
				NullCheck(L_152);
				int32_t L_153;
				L_153 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var, L_152);
				NullCheck(L_151);
				Camera_set_cullingMask_m14F426710530BA8FA53AEC02F79C418AA558CB32(L_151, L_153, NULL);
				// break;
				goto IL_06c3_1;
			}

IL_0595_1:
			{
				// instance.eventMask = reader.Read<System.Int32>();
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_154 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_155 = ___reader0;
				NullCheck(L_155);
				int32_t L_156;
				L_156 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var, L_155);
				NullCheck(L_154);
				Camera_set_eventMask_mC97BDCD8AD36DFA2A5A9BF168111DE33881BD3F0(L_154, L_156, NULL);
				// break;
				goto IL_06c3_1;
			}

IL_05a6_1:
			{
				// instance.backgroundColor = reader.Read<UnityEngine.Color>();
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_157 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_158 = ___reader0;
				NullCheck(L_158);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_159;
				L_159 = GenericVirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mC041ABAFD847F57C6FC0692A54FDEF888CEF1694_RuntimeMethod_var, L_158);
				NullCheck(L_157);
				Camera_set_backgroundColor_m036FD8C316A93A0B168ACC89AFF16D396B872138(L_157, L_159, NULL);
				// break;
				goto IL_06c3_1;
			}

IL_05b7_1:
			{
				// instance.rect = reader.Read<UnityEngine.Rect>();
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_160 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_161 = ___reader0;
				NullCheck(L_161);
				Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_162;
				L_162 = GenericVirtualFuncInvoker0< Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D >::Invoke(ES3Reader_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m95E8431D073E50D89F48E73AF0155B4A66EC30E5_RuntimeMethod_var, L_161);
				NullCheck(L_160);
				Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19(L_160, L_162, NULL);
				// break;
				goto IL_06c3_1;
			}

IL_05c8_1:
			{
				// instance.pixelRect = reader.Read<UnityEngine.Rect>();
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_163 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_164 = ___reader0;
				NullCheck(L_164);
				Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_165;
				L_165 = GenericVirtualFuncInvoker0< Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D >::Invoke(ES3Reader_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m95E8431D073E50D89F48E73AF0155B4A66EC30E5_RuntimeMethod_var, L_164);
				NullCheck(L_163);
				Camera_set_pixelRect_m4A9504577204D4E72B39BFB637ED808B778568A5(L_163, L_165, NULL);
				// break;
				goto IL_06c3_1;
			}

IL_05d9_1:
			{
				// instance.projectionMatrix = reader.Read<UnityEngine.Matrix4x4>();
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_166 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_167 = ___reader0;
				NullCheck(L_167);
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_168;
				L_168 = GenericVirtualFuncInvoker0< Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 >::Invoke(ES3Reader_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m8ACD7A96565532BBAEE307CD97D65075919C09F9_RuntimeMethod_var, L_167);
				NullCheck(L_166);
				Camera_set_projectionMatrix_m351820E6903139402FFFF40221B32D0C52B5A094(L_166, L_168, NULL);
				// break;
				goto IL_06c3_1;
			}

IL_05ea_1:
			{
				// instance.nonJitteredProjectionMatrix = reader.Read<UnityEngine.Matrix4x4>();
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_169 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_170 = ___reader0;
				NullCheck(L_170);
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_171;
				L_171 = GenericVirtualFuncInvoker0< Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 >::Invoke(ES3Reader_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m8ACD7A96565532BBAEE307CD97D65075919C09F9_RuntimeMethod_var, L_170);
				NullCheck(L_169);
				Camera_set_nonJitteredProjectionMatrix_mC6967E205128C05584F890C43B2B79B6A0EF8B39(L_169, L_171, NULL);
				// break;
				goto IL_06c3_1;
			}

IL_05fb_1:
			{
				// instance.useJitteredProjectionMatrixForTransparentRendering = reader.Read<System.Boolean>();
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_172 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_173 = ___reader0;
				NullCheck(L_173);
				bool L_174;
				L_174 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_173);
				NullCheck(L_172);
				Camera_set_useJitteredProjectionMatrixForTransparentRendering_m51EC86087DA668906D11B5B13AA39191E47B4764(L_172, L_174, NULL);
				// break;
				goto IL_06c3_1;
			}

IL_060c_1:
			{
				// instance.clearFlags = reader.Read<UnityEngine.CameraClearFlags>();
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_175 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_176 = ___reader0;
				NullCheck(L_176);
				int32_t L_177;
				L_177 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisCameraClearFlags_t91B921013F611457A09B92EF9C6B218CECF67202_m732408F80D81FE4865E310BC66E004410C1D4535_RuntimeMethod_var, L_176);
				NullCheck(L_175);
				Camera_set_clearFlags_m66541D9CC43CBAA5FE7364A50D43CA5569FD4D93(L_175, L_177, NULL);
				// break;
				goto IL_06c3_1;
			}

IL_061d_1:
			{
				// instance.stereoSeparation = reader.Read<System.Single>();
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_178 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_179 = ___reader0;
				NullCheck(L_179);
				float L_180;
				L_180 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_179);
				NullCheck(L_178);
				Camera_set_stereoSeparation_mF7815F0335AAB19E9444B75378059A3557463422(L_178, L_180, NULL);
				// break;
				goto IL_06c3_1;
			}

IL_062e_1:
			{
				// instance.stereoConvergence = reader.Read<System.Single>();
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_181 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_182 = ___reader0;
				NullCheck(L_182);
				float L_183;
				L_183 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_182);
				NullCheck(L_181);
				Camera_set_stereoConvergence_mA2C61A59954B567A8761A90066E058BC55EA3F0B(L_181, L_183, NULL);
				// break;
				goto IL_06c3_1;
			}

IL_063f_1:
			{
				// instance.cameraType = reader.Read<UnityEngine.CameraType>();
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_184 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_185 = ___reader0;
				NullCheck(L_185);
				int32_t L_186;
				L_186 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisCameraType_tCA1017DBE96964E1D967942FB98F152F14121FCD_m04BFB4EE61777675F5AC8AF2FEB46C21532B6AF1_RuntimeMethod_var, L_185);
				NullCheck(L_184);
				Camera_set_cameraType_m20ECE54572F8B7CAF5D32193B65F3D7812E20F17(L_184, L_186, NULL);
				// break;
				goto IL_06c3_1;
			}

IL_064d_1:
			{
				// instance.stereoTargetEye = reader.Read<UnityEngine.StereoTargetEyeMask>();
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_187 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_188 = ___reader0;
				NullCheck(L_188);
				int32_t L_189;
				L_189 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisStereoTargetEyeMask_t938A55A4503B0E0F4673D0014089585B55865C93_m352E05D9522CD0B0FB8C5A6E99BECB3D64D88F4A_RuntimeMethod_var, L_188);
				NullCheck(L_187);
				Camera_set_stereoTargetEye_mDB97D9BA5BF538F709EBD006B6B59E78603510DD(L_187, L_189, NULL);
				// break;
				goto IL_06c3_1;
			}

IL_065b_1:
			{
				// instance.targetDisplay = reader.Read<System.Int32>();
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_190 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_191 = ___reader0;
				NullCheck(L_191);
				int32_t L_192;
				L_192 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var, L_191);
				NullCheck(L_190);
				Camera_set_targetDisplay_m112492A129702FD829BC11E2AE766AF5BF880C73(L_190, L_192, NULL);
				// break;
				goto IL_06c3_1;
			}

IL_0669_1:
			{
				// instance.useOcclusionCulling = reader.Read<System.Boolean>();
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_193 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_194 = ___reader0;
				NullCheck(L_194);
				bool L_195;
				L_195 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_194);
				NullCheck(L_193);
				Camera_set_useOcclusionCulling_mD3036B0CBB5E6A1BF33810AB8FDEE3CD1A4D7C04(L_193, L_195, NULL);
				// break;
				goto IL_06c3_1;
			}

IL_0677_1:
			{
				// instance.layerCullSpherical = reader.Read<System.Boolean>();
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_196 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_197 = ___reader0;
				NullCheck(L_197);
				bool L_198;
				L_198 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_197);
				NullCheck(L_196);
				Camera_set_layerCullSpherical_m8BE964C29B22DBFB64D31CF1FACB39B4F8E3ADDE(L_196, L_198, NULL);
				// break;
				goto IL_06c3_1;
			}

IL_0685_1:
			{
				// instance.depthTextureMode = reader.Read<UnityEngine.DepthTextureMode>();
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_199 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_200 = ___reader0;
				NullCheck(L_200);
				int32_t L_201;
				L_201 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisDepthTextureMode_t64422B6053A3474607EEBAB848B2049ECE39472D_m3CCBAEF949FAAA8EC817EF26339140D38758DE1D_RuntimeMethod_var, L_200);
				NullCheck(L_199);
				Camera_set_depthTextureMode_mE722389E4DF8B3DF7F6100DB142E4DBAF698F6BF(L_199, L_201, NULL);
				// break;
				goto IL_06c3_1;
			}

IL_0693_1:
			{
				// instance.clearStencilAfterLightingPass = reader.Read<System.Boolean>();
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_202 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_203 = ___reader0;
				NullCheck(L_203);
				bool L_204;
				L_204 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_203);
				NullCheck(L_202);
				Camera_set_clearStencilAfterLightingPass_mC6E6B87D51A3BDDFD9C1027CE82C2043A67E84A6(L_202, L_204, NULL);
				// break;
				goto IL_06c3_1;
			}

IL_06a1_1:
			{
				// instance.enabled = reader.Read<System.Boolean>();
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_205 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_206 = ___reader0;
				NullCheck(L_206);
				bool L_207;
				L_207 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_206);
				NullCheck((Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA*)L_205);
				Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A((Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA*)L_205, L_207, NULL);
				// break;
				goto IL_06c3_1;
			}

IL_06af_1:
			{
				// instance.hideFlags = reader.Read<UnityEngine.HideFlags>();
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_208 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_209 = ___reader0;
				NullCheck(L_209);
				int32_t L_210;
				L_210 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisHideFlags_tC514182ACEFD3B847988C45D5DB812FF6DB1BF4A_m36F4D84DE5068416FE003C875121A214616DD8A8_RuntimeMethod_var, L_209);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_208);
				Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_208, L_210, NULL);
				// break;
				goto IL_06c3_1;
			}

IL_06bd_1:
			{
				// reader.Skip();
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_211 = ___reader0;
				NullCheck(L_211);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_211);
			}

IL_06c3_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_212 = V_1;
				NullCheck(L_212);
				bool L_213;
				L_213 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_212);
				if (L_213)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_06e4;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_06e4:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CapsuleCollider::ReadComponent<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CapsuleCollider_ReadComponent_TisRuntimeObject_mE03377C3DB2A690AEE8D07FFD4BD666BCF357EAA_gshared (ES3Type_CapsuleCollider_t961C5E66755C7ABE01D0486E58B3101A9D30F10D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisPhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131_mD3F474BFEB6F1EEBB6736AD77E67DBDF31D08227_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m2FB5D193538173A928BC95202B90C4900D1F0F8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_tBEBB6BA6FF3FA98D90871CDA974F8FD5A4CA364C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33287F105C03C1EEEA6FE0E3FD01FE17D1E27838);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3450A2BB8216F70D528215A296AEDB3D212C7EED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral416E9D0238C213CFB1C61EDAB93C78CA25E2D04B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72ECDD9F8744E37D4431E7D17FE954DD88ABF383);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF26F502B14F503952C33ADFF928357DED0388E8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	uint32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	{
		// var instance = (UnityEngine.CapsuleCollider)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808*)CastclassClass((RuntimeObject*)L_0, CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_il2cpp_TypeInfo_var));
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

FINALLY_01f4:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_4;
					if (!L_5)
					{
						goto IL_0207;
					}
				}
				{
					RuntimeObject* L_6 = V_4;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0207:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_01e7_1;
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
				if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-2027800205)))))
				{
					goto IL_006b_1;
				}
			}
			{
				uint32_t L_12 = V_3;
				if ((!(((uint32_t)L_12) <= ((uint32_t)((int32_t)93078660)))))
				{
					goto IL_0053_1;
				}
			}
			{
				uint32_t L_13 = V_3;
				if ((((int32_t)L_13) == ((int32_t)((int32_t)49525662))))
				{
					goto IL_00f7_1;
				}
			}
			{
				uint32_t L_14 = V_3;
				if ((((int32_t)L_14) == ((int32_t)((int32_t)93078660))))
				{
					goto IL_00a3_1;
				}
			}
			{
				goto IL_01e1_1;
			}

IL_0053_1:
			{
				uint32_t L_15 = V_3;
				if ((((int32_t)L_15) == ((int32_t)((int32_t)230313139))))
				{
					goto IL_00b8_1;
				}
			}
			{
				uint32_t L_16 = V_3;
				if ((((int32_t)L_16) == ((int32_t)((int32_t)-2027800205))))
				{
					goto IL_010c_1;
				}
			}
			{
				goto IL_01e1_1;
			}

IL_006b_1:
			{
				uint32_t L_17 = V_3;
				if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-756756384)))))
				{
					goto IL_008e_1;
				}
			}
			{
				uint32_t L_18 = V_3;
				if ((((int32_t)L_18) == ((int32_t)((int32_t)-1544380112))))
				{
					goto IL_0121_1;
				}
			}
			{
				uint32_t L_19 = V_3;
				if ((((int32_t)L_19) == ((int32_t)((int32_t)-756756384))))
				{
					goto IL_0136_1;
				}
			}
			{
				goto IL_01e1_1;
			}

IL_008e_1:
			{
				uint32_t L_20 = V_3;
				if ((((int32_t)L_20) == ((int32_t)((int32_t)-708986046))))
				{
					goto IL_00cd_1;
				}
			}
			{
				uint32_t L_21 = V_3;
				if ((((int32_t)L_21) == ((int32_t)((int32_t)-546453654))))
				{
					goto IL_00e2_1;
				}
			}
			{
				goto IL_01e1_1;
			}

IL_00a3_1:
			{
				String_t* L_22 = V_2;
				bool L_23;
				L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralF26F502B14F503952C33ADFF928357DED0388E8D, NULL);
				if (L_23)
				{
					goto IL_014b_1;
				}
			}
			{
				goto IL_01e1_1;
			}

IL_00b8_1:
			{
				String_t* L_24 = V_2;
				bool L_25;
				L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, NULL);
				if (L_25)
				{
					goto IL_0161_1;
				}
			}
			{
				goto IL_01e1_1;
			}

IL_00cd_1:
			{
				String_t* L_26 = V_2;
				bool L_27;
				L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563, NULL);
				if (L_27)
				{
					goto IL_0174_1;
				}
			}
			{
				goto IL_01e1_1;
			}

IL_00e2_1:
			{
				String_t* L_28 = V_2;
				bool L_29;
				L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral33287F105C03C1EEEA6FE0E3FD01FE17D1E27838, NULL);
				if (L_29)
				{
					goto IL_0187_1;
				}
			}
			{
				goto IL_01e1_1;
			}

IL_00f7_1:
			{
				String_t* L_30 = V_2;
				bool L_31;
				L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
				if (L_31)
				{
					goto IL_019a_1;
				}
			}
			{
				goto IL_01e1_1;
			}

IL_010c_1:
			{
				String_t* L_32 = V_2;
				bool L_33;
				L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral416E9D0238C213CFB1C61EDAB93C78CA25E2D04B, NULL);
				if (L_33)
				{
					goto IL_01ad_1;
				}
			}
			{
				goto IL_01e1_1;
			}

IL_0121_1:
			{
				String_t* L_34 = V_2;
				bool L_35;
				L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral72ECDD9F8744E37D4431E7D17FE954DD88ABF383, NULL);
				if (L_35)
				{
					goto IL_01c0_1;
				}
			}
			{
				goto IL_01e1_1;
			}

IL_0136_1:
			{
				String_t* L_36 = V_2;
				bool L_37;
				L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral3450A2BB8216F70D528215A296AEDB3D212C7EED, NULL);
				if (L_37)
				{
					goto IL_01d3_1;
				}
			}
			{
				goto IL_01e1_1;
			}

IL_014b_1:
			{
				// instance.center = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
				CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_38 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_Vector3_tBEBB6BA6FF3FA98D90871CDA974F8FD5A4CA364C_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_tBEBB6BA6FF3FA98D90871CDA974F8FD5A4CA364C_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_39);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
				L_41 = GenericVirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m2FB5D193538173A928BC95202B90C4900D1F0F8D_RuntimeMethod_var, L_39, L_40);
				NullCheck(L_38);
				CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E(L_38, L_41, NULL);
				// break;
				goto IL_01e7_1;
			}

IL_0161_1:
			{
				// instance.radius = reader.Read<float>(ES3Type_float.Instance);
				CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_42 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_43);
				float L_45;
				L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
				NullCheck(L_42);
				CapsuleCollider_set_radius_mB301C0086FE0D251683512184B0F6DDE264BA985(L_42, L_45, NULL);
				// break;
				goto IL_01e7_1;
			}

IL_0174_1:
			{
				// instance.height = reader.Read<float>(ES3Type_float.Instance);
				CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_46 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_48 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_47);
				float L_49;
				L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_47, L_48);
				NullCheck(L_46);
				CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_46, L_49, NULL);
				// break;
				goto IL_01e7_1;
			}

IL_0187_1:
			{
				// instance.direction = reader.Read<int>(ES3Type_int.Instance);
				CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_50 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_51);
				int32_t L_53;
				L_53 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_51, L_52);
				NullCheck(L_50);
				CapsuleCollider_set_direction_m3064DADA49F7F48DA8D62659B1D3545C83C553CB(L_50, L_53, NULL);
				// break;
				goto IL_01e7_1;
			}

IL_019a_1:
			{
				// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_54 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_55 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_56 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_55);
				bool L_57;
				L_57 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_55, L_56);
				NullCheck((Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)L_54);
				Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70((Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)L_54, L_57, NULL);
				// break;
				goto IL_01e7_1;
			}

IL_01ad_1:
			{
				// instance.isTrigger = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_58 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_59 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_60 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_59);
				bool L_61;
				L_61 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_59, L_60);
				NullCheck((Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)L_58);
				Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78((Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)L_58, L_61, NULL);
				// break;
				goto IL_01e7_1;
			}

IL_01c0_1:
			{
				// instance.contactOffset = reader.Read<System.Single>(ES3Type_float.Instance);
				CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_62 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_63 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_64 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_63);
				float L_65;
				L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_63, L_64);
				NullCheck((Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)L_62);
				Collider_set_contactOffset_mEDA8D778F641338733D140E76FCA0D6B29203B52((Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)L_62, L_65, NULL);
				// break;
				goto IL_01e7_1;
			}

IL_01d3_1:
			{
				// instance.sharedMaterial = reader.Read<UnityEngine.PhysicMaterial>();
				CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_66 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_67 = ___reader0;
				NullCheck(L_67);
				PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* L_68;
				L_68 = GenericVirtualFuncInvoker0< PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* >::Invoke(ES3Reader_Read_TisPhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131_mD3F474BFEB6F1EEBB6736AD77E67DBDF31D08227_RuntimeMethod_var, L_67);
				NullCheck((Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)L_66);
				Collider_set_sharedMaterial_m2AC21AB939A377ABACF8282CDC52EE61B54107ED((Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)L_66, L_68, NULL);
				// break;
				goto IL_01e7_1;
			}

IL_01e1_1:
			{
				// reader.Skip();
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_69 = ___reader0;
				NullCheck(L_69);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_69);
			}

IL_01e7_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_70 = V_1;
				NullCheck(L_70);
				bool L_71;
				L_71 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_70);
				if (L_71)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_0208;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0208:
	{
		// }
		return;
	}
}
// System.Object ES3Types.ES3Type_CollisionModule::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_CollisionModule_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m76D224D8DE1623C3A79F1DCAD66D7C5687C6CC75_gshared (ES3Type_CollisionModule_t7A22413B662CBACC43272C04F1C8017CAB0BAF5F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.CollisionModule();
		il2cpp_codegen_initobj((&V_0), sizeof(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_1 = V_0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_2 = L_1;
		RuntimeObject* L_3 = Box(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_4 = V_0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_5 = L_4;
		RuntimeObject* L_6 = Box(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_CollisionModule::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_CollisionModule_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m0A4C907212B2D8BB35A887FDDF6938FAB7529641_gshared (ES3Type_CollisionModule_t7A22413B662CBACC43272C04F1C8017CAB0BAF5F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.CollisionModule();
		il2cpp_codegen_initobj((&V_0), sizeof(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_1 = V_0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_2 = L_1;
		RuntimeObject* L_3 = Box(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_4 = V_0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_5 = L_4;
		RuntimeObject* L_6 = Box(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_CollisionModule::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_CollisionModule_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD0415DF5B77491855953451AED0F628E897D70F8_gshared (ES3Type_CollisionModule_t7A22413B662CBACC43272C04F1C8017CAB0BAF5F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.CollisionModule();
		il2cpp_codegen_initobj((&V_0), sizeof(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_1 = V_0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_2 = L_1;
		RuntimeObject* L_3 = Box(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_4 = V_0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_5 = L_4;
		RuntimeObject* L_6 = Box(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_CollisionModule::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_CollisionModule_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m98E488E6433B3060B7CBE687BD84E4D2F82FDD43_gshared (ES3Type_CollisionModule_t7A22413B662CBACC43272C04F1C8017CAB0BAF5F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.CollisionModule();
		il2cpp_codegen_initobj((&V_0), sizeof(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_1 = V_0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_2 = L_1;
		RuntimeObject* L_3 = Box(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_4 = V_0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_5 = L_4;
		RuntimeObject* L_6 = Box(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_CollisionModule::Read<System.Int16>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_CollisionModule_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m2E7365016CE6CF0AD14F1EB3A3B0E6BDBF66158B_gshared (ES3Type_CollisionModule_t7A22413B662CBACC43272C04F1C8017CAB0BAF5F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.CollisionModule();
		il2cpp_codegen_initobj((&V_0), sizeof(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_1 = V_0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_2 = L_1;
		RuntimeObject* L_3 = Box(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_4 = V_0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_5 = L_4;
		RuntimeObject* L_6 = Box(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_CollisionModule::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_CollisionModule_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m53648C83E12B27668834935925F11700E67842F7_gshared (ES3Type_CollisionModule_t7A22413B662CBACC43272C04F1C8017CAB0BAF5F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.CollisionModule();
		il2cpp_codegen_initobj((&V_0), sizeof(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_1 = V_0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_2 = L_1;
		RuntimeObject* L_3 = Box(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_4 = V_0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_5 = L_4;
		RuntimeObject* L_6 = Box(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_CollisionModule::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_CollisionModule_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mA466D2949CA2308C63D2EA65E59BB75DAE9104CA_gshared (ES3Type_CollisionModule_t7A22413B662CBACC43272C04F1C8017CAB0BAF5F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.CollisionModule();
		il2cpp_codegen_initobj((&V_0), sizeof(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_1 = V_0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_2 = L_1;
		RuntimeObject* L_3 = Box(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_4 = V_0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_5 = L_4;
		RuntimeObject* L_6 = Box(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_CollisionModule::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_CollisionModule_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m08609EA5BBD50B80280BD6E8ACDC0BC89A4C053B_gshared (ES3Type_CollisionModule_t7A22413B662CBACC43272C04F1C8017CAB0BAF5F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.CollisionModule();
		il2cpp_codegen_initobj((&V_0), sizeof(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_1 = V_0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_2 = L_1;
		RuntimeObject* L_3 = Box(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_4 = V_0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_5 = L_4;
		RuntimeObject* L_6 = Box(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_CollisionModule::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_CollisionModule_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m3F5E7B520A11E93BF1B3801799E4E5EB9930FE8D_gshared (ES3Type_CollisionModule_t7A22413B662CBACC43272C04F1C8017CAB0BAF5F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.CollisionModule();
		il2cpp_codegen_initobj((&V_0), sizeof(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_1 = V_0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_2 = L_1;
		RuntimeObject* L_3 = Box(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_4 = V_0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_5 = L_4;
		RuntimeObject* L_6 = Box(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_CollisionModule::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_CollisionModule_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m2D69AC812E485CCBEEF6FA06FAFD9F42A489AE5A_gshared (ES3Type_CollisionModule_t7A22413B662CBACC43272C04F1C8017CAB0BAF5F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.CollisionModule();
		il2cpp_codegen_initobj((&V_0), sizeof(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_1 = V_0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_2 = L_1;
		RuntimeObject* L_3 = Box(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_4 = V_0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_5 = L_4;
		RuntimeObject* L_6 = Box(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_CollisionModule::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_CollisionModule_Read_TisRuntimeObject_m2F058E03507630A38A6BB85BFD23CD26D495C7E3_gshared (ES3Type_CollisionModule_t7A22413B662CBACC43272C04F1C8017CAB0BAF5F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.CollisionModule();
		il2cpp_codegen_initobj((&V_0), sizeof(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_1 = V_0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_2 = L_1;
		RuntimeObject* L_3 = Box(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_4 = V_0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_5 = L_4;
		RuntimeObject* L_6 = Box(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_CollisionModule::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_CollisionModule_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mF4D93FDD0B4657CE4225298DC48971C3BB915980_gshared (ES3Type_CollisionModule_t7A22413B662CBACC43272C04F1C8017CAB0BAF5F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.CollisionModule();
		il2cpp_codegen_initobj((&V_0), sizeof(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_1 = V_0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_2 = L_1;
		RuntimeObject* L_3 = Box(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_4 = V_0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_5 = L_4;
		RuntimeObject* L_6 = Box(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_CollisionModule::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_CollisionModule_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_mCD27FA87FD61AEC3568874A16E3956C66949F35C_gshared (ES3Type_CollisionModule_t7A22413B662CBACC43272C04F1C8017CAB0BAF5F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.CollisionModule();
		il2cpp_codegen_initobj((&V_0), sizeof(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_1 = V_0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_2 = L_1;
		RuntimeObject* L_3 = Box(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_4 = V_0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_5 = L_4;
		RuntimeObject* L_6 = Box(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_CollisionModule::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_CollisionModule_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_m1D9538DFE855E92FD691BA52E593D904A067082E_gshared (ES3Type_CollisionModule_t7A22413B662CBACC43272C04F1C8017CAB0BAF5F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.CollisionModule();
		il2cpp_codegen_initobj((&V_0), sizeof(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_1 = V_0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_2 = L_1;
		RuntimeObject* L_3 = Box(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_4 = V_0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_5 = L_4;
		RuntimeObject* L_6 = Box(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_CollisionModule::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_CollisionModule_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m59CE77F01E58793B2B6E21D5ABF902B09CA6D35D_gshared (ES3Type_CollisionModule_t7A22413B662CBACC43272C04F1C8017CAB0BAF5F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.CollisionModule();
		il2cpp_codegen_initobj((&V_0), sizeof(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_1 = V_0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_2 = L_1;
		RuntimeObject* L_3 = Box(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_4 = V_0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_5 = L_4;
		RuntimeObject* L_6 = Box(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_CollisionModule::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_CollisionModule_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m5D35521F84CFF5AFD5E80FCCB3C51ED45D816A7D_gshared (ES3Type_CollisionModule_t7A22413B662CBACC43272C04F1C8017CAB0BAF5F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.CollisionModule();
		il2cpp_codegen_initobj((&V_0), sizeof(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_1 = V_0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_2 = L_1;
		RuntimeObject* L_3 = Box(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_4 = V_0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_5 = L_4;
		RuntimeObject* L_6 = Box(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_CollisionModule::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_CollisionModule_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m27D22172A12B75222EFD33E79BFD39C6649E8662_gshared (ES3Type_CollisionModule_t7A22413B662CBACC43272C04F1C8017CAB0BAF5F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.CollisionModule();
		il2cpp_codegen_initobj((&V_0), sizeof(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_1 = V_0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_2 = L_1;
		RuntimeObject* L_3 = Box(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_4 = V_0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_5 = L_4;
		RuntimeObject* L_6 = Box(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_CollisionModule::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_CollisionModule_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mDFBF9D67C7B0C42FC657AA0A3EC540638C59D094_gshared (ES3Type_CollisionModule_t7A22413B662CBACC43272C04F1C8017CAB0BAF5F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.CollisionModule();
		il2cpp_codegen_initobj((&V_0), sizeof(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_1 = V_0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_2 = L_1;
		RuntimeObject* L_3 = Box(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_4 = V_0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_5 = L_4;
		RuntimeObject* L_6 = Box(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_CollisionModule::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_CollisionModule_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mC0A3F56A5370CD112971A32CA0E5F3E046BA9873_gshared (ES3Type_CollisionModule_t7A22413B662CBACC43272C04F1C8017CAB0BAF5F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.CollisionModule();
		il2cpp_codegen_initobj((&V_0), sizeof(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_1 = V_0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_2 = L_1;
		RuntimeObject* L_3 = Box(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_4 = V_0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_5 = L_4;
		RuntimeObject* L_6 = Box(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_CollisionModule::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_CollisionModule_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m15C61CBD979847FA51103C13F367B89BFBD07917_gshared (ES3Type_CollisionModule_t7A22413B662CBACC43272C04F1C8017CAB0BAF5F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.CollisionModule();
		il2cpp_codegen_initobj((&V_0), sizeof(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_1 = V_0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_2 = L_1;
		RuntimeObject* L_3 = Box(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_4 = V_0;
		CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 L_5 = L_4;
		RuntimeObject* L_6 = Box(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisRuntimeObject_mC7207AE2B325BC62F927FADA6D6EFF908D897CCF_gshared (ES3Type_CollisionModule_t7A22413B662CBACC43272C04F1C8017CAB0BAF5F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mB8E6B823E75B87342E79516E71B789A68CB1E267_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mED17A1D55E1C1593A8EF06BCC760FD82F186762B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mCCC05AFC540C86BAD387798DF43D89E22C69B7BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m3988D04C24E21D35CEFAD237A2A62C41F37B10E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m3988D04C24E21D35CEFAD237A2A62C41F37B10E0_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mED17A1D55E1C1593A8EF06BCC760FD82F186762B_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_70 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_71 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_76 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_80 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_81 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mB8E6B823E75B87342E79516E71B789A68CB1E267_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mCCC05AFC540C86BAD387798DF43D89E22C69B7BE_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/CollisionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_m4119637A88B6B71B890FD622B425A0EBA158F193_gshared (ES3Type_CollisionModule_t7A22413B662CBACC43272C04F1C8017CAB0BAF5F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mB8E6B823E75B87342E79516E71B789A68CB1E267_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mED17A1D55E1C1593A8EF06BCC760FD82F186762B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mCCC05AFC540C86BAD387798DF43D89E22C69B7BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m3988D04C24E21D35CEFAD237A2A62C41F37B10E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m3988D04C24E21D35CEFAD237A2A62C41F37B10E0_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mED17A1D55E1C1593A8EF06BCC760FD82F186762B_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_70 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_71 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_76 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_80 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_81 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mB8E6B823E75B87342E79516E71B789A68CB1E267_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mCCC05AFC540C86BAD387798DF43D89E22C69B7BE_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/ColorBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_m08E08600AFE721676B2A5E96F86FE14571E19FDD_gshared (ES3Type_CollisionModule_t7A22413B662CBACC43272C04F1C8017CAB0BAF5F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mB8E6B823E75B87342E79516E71B789A68CB1E267_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mED17A1D55E1C1593A8EF06BCC760FD82F186762B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mCCC05AFC540C86BAD387798DF43D89E22C69B7BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m3988D04C24E21D35CEFAD237A2A62C41F37B10E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m3988D04C24E21D35CEFAD237A2A62C41F37B10E0_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mED17A1D55E1C1593A8EF06BCC760FD82F186762B_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_70 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_71 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_76 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_80 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_81 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mB8E6B823E75B87342E79516E71B789A68CB1E267_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mCCC05AFC540C86BAD387798DF43D89E22C69B7BE_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/ColorOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_mA726D100ADBD93737846E153A4E7D57A7F72A8BB_gshared (ES3Type_CollisionModule_t7A22413B662CBACC43272C04F1C8017CAB0BAF5F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mB8E6B823E75B87342E79516E71B789A68CB1E267_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mED17A1D55E1C1593A8EF06BCC760FD82F186762B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mCCC05AFC540C86BAD387798DF43D89E22C69B7BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m3988D04C24E21D35CEFAD237A2A62C41F37B10E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m3988D04C24E21D35CEFAD237A2A62C41F37B10E0_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mED17A1D55E1C1593A8EF06BCC760FD82F186762B_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_70 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_71 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_76 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_80 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_81 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mB8E6B823E75B87342E79516E71B789A68CB1E267_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mCCC05AFC540C86BAD387798DF43D89E22C69B7BE_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/EmissionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_m76349DB400600E174ACA994951C48E7DB9D3A8CC_gshared (ES3Type_CollisionModule_t7A22413B662CBACC43272C04F1C8017CAB0BAF5F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mB8E6B823E75B87342E79516E71B789A68CB1E267_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mED17A1D55E1C1593A8EF06BCC760FD82F186762B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mCCC05AFC540C86BAD387798DF43D89E22C69B7BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m3988D04C24E21D35CEFAD237A2A62C41F37B10E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m3988D04C24E21D35CEFAD237A2A62C41F37B10E0_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mED17A1D55E1C1593A8EF06BCC760FD82F186762B_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_70 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_71 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_76 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_80 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_81 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mB8E6B823E75B87342E79516E71B789A68CB1E267_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mCCC05AFC540C86BAD387798DF43D89E22C69B7BE_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/ExternalForcesModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_mC4BFD0D358C2FA6AA7BA40D7AF6C14E3E79D90D3_gshared (ES3Type_CollisionModule_t7A22413B662CBACC43272C04F1C8017CAB0BAF5F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mB8E6B823E75B87342E79516E71B789A68CB1E267_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mED17A1D55E1C1593A8EF06BCC760FD82F186762B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mCCC05AFC540C86BAD387798DF43D89E22C69B7BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m3988D04C24E21D35CEFAD237A2A62C41F37B10E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m3988D04C24E21D35CEFAD237A2A62C41F37B10E0_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mED17A1D55E1C1593A8EF06BCC760FD82F186762B_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_70 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_71 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_76 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_80 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_81 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mB8E6B823E75B87342E79516E71B789A68CB1E267_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mCCC05AFC540C86BAD387798DF43D89E22C69B7BE_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/ForceOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_m3EEBA75DE425E60F2399E78F3AAC0EDAFA37B4C8_gshared (ES3Type_CollisionModule_t7A22413B662CBACC43272C04F1C8017CAB0BAF5F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mB8E6B823E75B87342E79516E71B789A68CB1E267_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mED17A1D55E1C1593A8EF06BCC760FD82F186762B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mCCC05AFC540C86BAD387798DF43D89E22C69B7BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m3988D04C24E21D35CEFAD237A2A62C41F37B10E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m3988D04C24E21D35CEFAD237A2A62C41F37B10E0_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mED17A1D55E1C1593A8EF06BCC760FD82F186762B_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_70 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_71 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_76 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_80 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_81 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mB8E6B823E75B87342E79516E71B789A68CB1E267_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mCCC05AFC540C86BAD387798DF43D89E22C69B7BE_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/InheritVelocityModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_mBEF8BB1F2EC5ABCA707D710CDC82BC790EED0779_gshared (ES3Type_CollisionModule_t7A22413B662CBACC43272C04F1C8017CAB0BAF5F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mB8E6B823E75B87342E79516E71B789A68CB1E267_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mED17A1D55E1C1593A8EF06BCC760FD82F186762B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mCCC05AFC540C86BAD387798DF43D89E22C69B7BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m3988D04C24E21D35CEFAD237A2A62C41F37B10E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m3988D04C24E21D35CEFAD237A2A62C41F37B10E0_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mED17A1D55E1C1593A8EF06BCC760FD82F186762B_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_70 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_71 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_76 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_80 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_81 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mB8E6B823E75B87342E79516E71B789A68CB1E267_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mCCC05AFC540C86BAD387798DF43D89E22C69B7BE_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/LightsModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_m885D360A7958A4FEEB536272C85FBCFF07054881_gshared (ES3Type_CollisionModule_t7A22413B662CBACC43272C04F1C8017CAB0BAF5F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mB8E6B823E75B87342E79516E71B789A68CB1E267_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mED17A1D55E1C1593A8EF06BCC760FD82F186762B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mCCC05AFC540C86BAD387798DF43D89E22C69B7BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m3988D04C24E21D35CEFAD237A2A62C41F37B10E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m3988D04C24E21D35CEFAD237A2A62C41F37B10E0_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mED17A1D55E1C1593A8EF06BCC760FD82F186762B_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_70 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_71 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_76 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_80 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_81 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mB8E6B823E75B87342E79516E71B789A68CB1E267_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mCCC05AFC540C86BAD387798DF43D89E22C69B7BE_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisLimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_m2B871525CC09213A0DA13C41E7F7110E5D1CC3D3_gshared (ES3Type_CollisionModule_t7A22413B662CBACC43272C04F1C8017CAB0BAF5F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mB8E6B823E75B87342E79516E71B789A68CB1E267_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mED17A1D55E1C1593A8EF06BCC760FD82F186762B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mCCC05AFC540C86BAD387798DF43D89E22C69B7BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m3988D04C24E21D35CEFAD237A2A62C41F37B10E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m3988D04C24E21D35CEFAD237A2A62C41F37B10E0_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mED17A1D55E1C1593A8EF06BCC760FD82F186762B_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_70 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_71 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_76 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_80 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_81 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mB8E6B823E75B87342E79516E71B789A68CB1E267_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mCCC05AFC540C86BAD387798DF43D89E22C69B7BE_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/MainModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisMainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_m7E44CDE35BE65A263471F78B5FAE64D430838AB1_gshared (ES3Type_CollisionModule_t7A22413B662CBACC43272C04F1C8017CAB0BAF5F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mB8E6B823E75B87342E79516E71B789A68CB1E267_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mED17A1D55E1C1593A8EF06BCC760FD82F186762B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mCCC05AFC540C86BAD387798DF43D89E22C69B7BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m3988D04C24E21D35CEFAD237A2A62C41F37B10E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m3988D04C24E21D35CEFAD237A2A62C41F37B10E0_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mED17A1D55E1C1593A8EF06BCC760FD82F186762B_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_70 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_71 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_76 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_80 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_81 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mB8E6B823E75B87342E79516E71B789A68CB1E267_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mCCC05AFC540C86BAD387798DF43D89E22C69B7BE_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/NoiseModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisNoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_mB0E29FE468118666C23FB7EE3B359D59FC3DB015_gshared (ES3Type_CollisionModule_t7A22413B662CBACC43272C04F1C8017CAB0BAF5F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mB8E6B823E75B87342E79516E71B789A68CB1E267_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mED17A1D55E1C1593A8EF06BCC760FD82F186762B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mCCC05AFC540C86BAD387798DF43D89E22C69B7BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m3988D04C24E21D35CEFAD237A2A62C41F37B10E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m3988D04C24E21D35CEFAD237A2A62C41F37B10E0_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mED17A1D55E1C1593A8EF06BCC760FD82F186762B_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_70 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_71 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_76 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_80 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_81 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mB8E6B823E75B87342E79516E71B789A68CB1E267_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mCCC05AFC540C86BAD387798DF43D89E22C69B7BE_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/RotationBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisRotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_m16B1683D09E6EE0038798201E86C94445B05A977_gshared (ES3Type_CollisionModule_t7A22413B662CBACC43272C04F1C8017CAB0BAF5F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mB8E6B823E75B87342E79516E71B789A68CB1E267_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mED17A1D55E1C1593A8EF06BCC760FD82F186762B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mCCC05AFC540C86BAD387798DF43D89E22C69B7BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m3988D04C24E21D35CEFAD237A2A62C41F37B10E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m3988D04C24E21D35CEFAD237A2A62C41F37B10E0_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mED17A1D55E1C1593A8EF06BCC760FD82F186762B_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_70 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_71 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_76 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_80 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_81 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mB8E6B823E75B87342E79516E71B789A68CB1E267_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mCCC05AFC540C86BAD387798DF43D89E22C69B7BE_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/RotationOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisRotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_mD3CCFDB9416036834C9A3BE819C308ABD86FE10D_gshared (ES3Type_CollisionModule_t7A22413B662CBACC43272C04F1C8017CAB0BAF5F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mB8E6B823E75B87342E79516E71B789A68CB1E267_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mED17A1D55E1C1593A8EF06BCC760FD82F186762B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mCCC05AFC540C86BAD387798DF43D89E22C69B7BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m3988D04C24E21D35CEFAD237A2A62C41F37B10E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m3988D04C24E21D35CEFAD237A2A62C41F37B10E0_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mED17A1D55E1C1593A8EF06BCC760FD82F186762B_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_70 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_71 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_76 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_80 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_81 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mB8E6B823E75B87342E79516E71B789A68CB1E267_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mCCC05AFC540C86BAD387798DF43D89E22C69B7BE_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/ShapeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_m0954778AEB090674AC5129582DC35B7BBFAC297B_gshared (ES3Type_CollisionModule_t7A22413B662CBACC43272C04F1C8017CAB0BAF5F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mB8E6B823E75B87342E79516E71B789A68CB1E267_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mED17A1D55E1C1593A8EF06BCC760FD82F186762B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mCCC05AFC540C86BAD387798DF43D89E22C69B7BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m3988D04C24E21D35CEFAD237A2A62C41F37B10E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m3988D04C24E21D35CEFAD237A2A62C41F37B10E0_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mED17A1D55E1C1593A8EF06BCC760FD82F186762B_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_70 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_71 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_76 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_80 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_81 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mB8E6B823E75B87342E79516E71B789A68CB1E267_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mCCC05AFC540C86BAD387798DF43D89E22C69B7BE_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/SizeBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisSizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_mEA687AE389454E4113B56944E01DF7A79AE9FB5C_gshared (ES3Type_CollisionModule_t7A22413B662CBACC43272C04F1C8017CAB0BAF5F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mB8E6B823E75B87342E79516E71B789A68CB1E267_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mED17A1D55E1C1593A8EF06BCC760FD82F186762B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mCCC05AFC540C86BAD387798DF43D89E22C69B7BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m3988D04C24E21D35CEFAD237A2A62C41F37B10E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m3988D04C24E21D35CEFAD237A2A62C41F37B10E0_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mED17A1D55E1C1593A8EF06BCC760FD82F186762B_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_70 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_71 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_76 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_80 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_81 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mB8E6B823E75B87342E79516E71B789A68CB1E267_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mCCC05AFC540C86BAD387798DF43D89E22C69B7BE_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/SizeOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisSizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_m722F0136D7FFB19964F59432F7A97913A79FD4DD_gshared (ES3Type_CollisionModule_t7A22413B662CBACC43272C04F1C8017CAB0BAF5F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mB8E6B823E75B87342E79516E71B789A68CB1E267_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mED17A1D55E1C1593A8EF06BCC760FD82F186762B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mCCC05AFC540C86BAD387798DF43D89E22C69B7BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m3988D04C24E21D35CEFAD237A2A62C41F37B10E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m3988D04C24E21D35CEFAD237A2A62C41F37B10E0_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mED17A1D55E1C1593A8EF06BCC760FD82F186762B_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_70 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_71 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_76 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_80 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_81 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mB8E6B823E75B87342E79516E71B789A68CB1E267_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mCCC05AFC540C86BAD387798DF43D89E22C69B7BE_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/SubEmittersModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisSubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_m98B87FB8A5E0B4C92B01CE235A6B1B2B2D11C102_gshared (ES3Type_CollisionModule_t7A22413B662CBACC43272C04F1C8017CAB0BAF5F* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mB8E6B823E75B87342E79516E71B789A68CB1E267_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mED17A1D55E1C1593A8EF06BCC760FD82F186762B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mCCC05AFC540C86BAD387798DF43D89E22C69B7BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m3988D04C24E21D35CEFAD237A2A62C41F37B10E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m3988D04C24E21D35CEFAD237A2A62C41F37B10E0_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mED17A1D55E1C1593A8EF06BCC760FD82F186762B_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_70 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_71 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_76 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_80 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_81 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mB8E6B823E75B87342E79516E71B789A68CB1E267_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mCCC05AFC540C86BAD387798DF43D89E22C69B7BE_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB3D1EDC085AA2B16037098DB93904C1E011932F9_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
