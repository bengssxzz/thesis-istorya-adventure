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

// UnityEngine.BoneWeight[]
struct BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// ES3Internal.ES3Member[]
struct ES3MemberU5BU5D_t52275A3F6518B027F017DA4D34656490EBA17423;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// ES3Reader
struct ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A;
// ES3Settings
struct ES3Settings_t8500938678A8E9CAC90B24DD70C4C7D2E66026AB;
// ES3Types.ES3Type
struct ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687;
// ES3Types.ES3Type_MainModule
struct ES3Type_MainModule_tDAE2E101E0E01EE0D8721A23BB03C5FF5E349CDD;
// ES3Types.ES3Type_Material
struct ES3Type_Material_t9D0AD66FC243F0AFCBB7940320FE2099DFFE2ECD;
// ES3Types.ES3Type_Matrix4x4
struct ES3Type_Matrix4x4_t35A712AE2F3E3B09633FB0ADBC805C1E179E5D7C;
// ES3Types.ES3Type_Mesh
struct ES3Type_Mesh_tC459CC632DC495F2F0DAFAA32F718B1F73B6381D;
// ES3Types.ES3Type_MeshCollider
struct ES3Type_MeshCollider_t203FDD11C59795E463BD58FFAE7346BA2910C948;
// ES3Types.ES3Type_MeshFilter
struct ES3Type_MeshFilter_t3607A6E665CB440763D08F3CCF57ECCB1D85A588;
// ES3Types.ES3Type_MeshRenderer
struct ES3Type_MeshRenderer_t415A4AEABDD0CF78CF3BA7F05F1F8D36C62DCC92;
// ES3Types.ES3Type_MinMaxCurve
struct ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// ES3Reader/ES3ReaderPropertyEnumerator
struct ES3ReaderPropertyEnumerator_t2948B3DC88B88DF76A6ED9F660F7055F08697C37;

IL2CPP_EXTERN_C RuntimeClass* ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_BoneWeightArray_tE27276013064B700B2E9794E78A8413B4442B1A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Bounds_t211AB57F2637B2F66BE77D462E45D1A018E9C442_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Color32Array_t9B1C937FEF6D85CB0D1720B009554CE655E80DE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_GameObject_tCE2D774686F76B9AD7B35B975B97675F84F677E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Matrix4x4Array_tDD91AD7E64D84E68919B835B1714AFFE56FAA997_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Mesh_tC459CC632DC495F2F0DAFAA32F718B1F73B6381D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_PhysicMaterial_t46CF856C9DE9E5AD82B9AB43028BBA900B0E0152_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Shader_tC1F08C5F67DA885ED7A4E638A9C31EA154ABBA1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Transform_tC86C7755D546F3D4A97553E19C31F9E025AB13A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Vector2Array_t41587B855D1799ADEFF3BE2182C0F87B35F2DDB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Vector3Array_t9704F872D5CC2A9118274ADEE416C0875AC42CB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Vector4Array_tCA2973339F6A2EC1CFF861CCDF21C435ABF5A978_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_intArray_tA8EB3EE2DAD629224B2904D493DE6504076E335F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_string_tF2C6B48AEF5F70E0C8CE33C9556FDFC7572D3A20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0557268B1F1E424D0A902F3EEDF716875C8D4BAD;
IL2CPP_EXTERN_C String_t* _stringLiteral057B3BF6FF011F75099CE84564ABE58C872288F4;
IL2CPP_EXTERN_C String_t* _stringLiteral05F6EAE9494DB0450DB43C3691D64129962ED751;
IL2CPP_EXTERN_C String_t* _stringLiteral092025ADD4C03A232510E3C6A7582D01C4AADC44;
IL2CPP_EXTERN_C String_t* _stringLiteral0B05325A67879CC8C81FB6B095D8243D1CB525A5;
IL2CPP_EXTERN_C String_t* _stringLiteral0D519365D01A086962A53AFD0AE6A825AEDA4CD0;
IL2CPP_EXTERN_C String_t* _stringLiteral12ADFC84D6BCCEB460E08E32B4FA7ACC9BEF31B2;
IL2CPP_EXTERN_C String_t* _stringLiteral1F9261ABE85940E10CA48B7B42F1E5267F122734;
IL2CPP_EXTERN_C String_t* _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14;
IL2CPP_EXTERN_C String_t* _stringLiteral234A259825C3E358FC282516D3B56DA588F88F1E;
IL2CPP_EXTERN_C String_t* _stringLiteral23EC2E17148B28CC0FCAC476B21E689161203B19;
IL2CPP_EXTERN_C String_t* _stringLiteral27906925D50A15B990B586241F08C8ED14226340;
IL2CPP_EXTERN_C String_t* _stringLiteral2E348D1FA98FD45ED7FBF438FF66F0EBA5170C10;
IL2CPP_EXTERN_C String_t* _stringLiteral2E4D3331FC63E1049224549936FAF640E4D0E137;
IL2CPP_EXTERN_C String_t* _stringLiteral338DFB21C4BCDE10C2A6B0F6B758581AB45E283A;
IL2CPP_EXTERN_C String_t* _stringLiteral3450A2BB8216F70D528215A296AEDB3D212C7EED;
IL2CPP_EXTERN_C String_t* _stringLiteral35E33D0D22ADA345341B551985605AAB4DCA8260;
IL2CPP_EXTERN_C String_t* _stringLiteral36587A0761A180514C267B50EA888F89871F71DF;
IL2CPP_EXTERN_C String_t* _stringLiteral3D00E0E3B130EDADC4916A7F4EE121274836DE84;
IL2CPP_EXTERN_C String_t* _stringLiteral3E84FA80252B50CE925CA3311D4092D0879CCEE1;
IL2CPP_EXTERN_C String_t* _stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642;
IL2CPP_EXTERN_C String_t* _stringLiteral3EC42735CF07DB9169F6821DC94EB45DE6B5E1AA;
IL2CPP_EXTERN_C String_t* _stringLiteral3F8C67011B093417D89377E9DBF57017943FDA11;
IL2CPP_EXTERN_C String_t* _stringLiteral3FDCFD736F0A209B476605D31B517A9412093986;
IL2CPP_EXTERN_C String_t* _stringLiteral4030531AEB69C153C44E24CF9424162B6081EF3A;
IL2CPP_EXTERN_C String_t* _stringLiteral416E9D0238C213CFB1C61EDAB93C78CA25E2D04B;
IL2CPP_EXTERN_C String_t* _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21;
IL2CPP_EXTERN_C String_t* _stringLiteral4D3A163F4F47F9226A93E99275EF7A7EBE154590;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEBA0A009EC71316BB5FB5F9325F2B77983D49D;
IL2CPP_EXTERN_C String_t* _stringLiteral5D6E9033064B19B4E5DF4893D7F1FA2F90A3EA47;
IL2CPP_EXTERN_C String_t* _stringLiteral5DAA87352BD3C06E5CD37671716E661CD9C905D6;
IL2CPP_EXTERN_C String_t* _stringLiteral695F5F858DF14780BC5525F0AA16CE70EB9C45E8;
IL2CPP_EXTERN_C String_t* _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F;
IL2CPP_EXTERN_C String_t* _stringLiteral6F2C37C486869159335DA15899C8D3E6BC9420EC;
IL2CPP_EXTERN_C String_t* _stringLiteral71E7E3565AB61CB4D30030EC7D0A58B6311EACB3;
IL2CPP_EXTERN_C String_t* _stringLiteral72ECDD9F8744E37D4431E7D17FE954DD88ABF383;
IL2CPP_EXTERN_C String_t* _stringLiteral73792CCBAF937C765700AA0D7388BC226F003166;
IL2CPP_EXTERN_C String_t* _stringLiteral7570747A640CCECD3BEDFC03012FFDDE81139994;
IL2CPP_EXTERN_C String_t* _stringLiteral7B398077F661091AB5BC307B2FD6237744E266BA;
IL2CPP_EXTERN_C String_t* _stringLiteral7BA557C60FBFACAA46AD1B56F1F3BD5FC6D77A8D;
IL2CPP_EXTERN_C String_t* _stringLiteral7EF771DC1DDB512A8FAB7AF357549BD349530F7D;
IL2CPP_EXTERN_C String_t* _stringLiteral80F4B08AEBD9E1F7CB29DF4B8D1854AEFF320EE3;
IL2CPP_EXTERN_C String_t* _stringLiteral81BD0AE28E075333BBE5C03AF9C6FE41A456CE9D;
IL2CPP_EXTERN_C String_t* _stringLiteral82A38EB534B163662598A55A70842F5AA8919477;
IL2CPP_EXTERN_C String_t* _stringLiteral843D6122FFBBF465C80ECD6FDFC0DF88BEAF4E14;
IL2CPP_EXTERN_C String_t* _stringLiteral86C151E04A32460B50ED4AB51B2F5E3BAA1E141E;
IL2CPP_EXTERN_C String_t* _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0;
IL2CPP_EXTERN_C String_t* _stringLiteral89088895C148BA6DFD2EFCE1E10956849FCA3C20;
IL2CPP_EXTERN_C String_t* _stringLiteral892582A238DF4FFEB2A2E7DD5D90A9A7AC6C26C4;
IL2CPP_EXTERN_C String_t* _stringLiteral8BD6F896E373FE6FCF354A1BB2F73761E86A2EC1;
IL2CPP_EXTERN_C String_t* _stringLiteral8DD0A7170C2DECE4F5E82F96AB9B00AAEBA9F438;
IL2CPP_EXTERN_C String_t* _stringLiteral8F76FFC503D9127950E3EAD1DFD82A8C6C91F728;
IL2CPP_EXTERN_C String_t* _stringLiteral98E0D0561A1C0240F52BDBBD3E637C208BC0E6AB;
IL2CPP_EXTERN_C String_t* _stringLiteral9936D9FC335A383E83C149BB3C6ED63A7971320F;
IL2CPP_EXTERN_C String_t* _stringLiteral9A92D5C8DA89C6E80E74B010F4E5AAA4F4E0C945;
IL2CPP_EXTERN_C String_t* _stringLiteralA0ECA3668A8B14855295BD8DD5E88309AF31330B;
IL2CPP_EXTERN_C String_t* _stringLiteralA61873D60BF9FB4C32F7EA140D55CF8C712B7E86;
IL2CPP_EXTERN_C String_t* _stringLiteralAD41E9EAC27A83BCE636034F0ECF81B657AC0072;
IL2CPP_EXTERN_C String_t* _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74;
IL2CPP_EXTERN_C String_t* _stringLiteralB1C30CF60A2E69EC232854CAED20E364C46D862F;
IL2CPP_EXTERN_C String_t* _stringLiteralB50617445AE8C184480EB99F42AC74A9C63F5058;
IL2CPP_EXTERN_C String_t* _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12;
IL2CPP_EXTERN_C String_t* _stringLiteralB780B47DCEE9180898A6245E7652C29FC7F6A7BC;
IL2CPP_EXTERN_C String_t* _stringLiteralBAAD864060C726C9944913CA5D3695DC7027ADAA;
IL2CPP_EXTERN_C String_t* _stringLiteralBCA8FD5F6CF117BC613330313E82DF905908323F;
IL2CPP_EXTERN_C String_t* _stringLiteralBCD524F863D44F707F9F38C67C411C87D8015ABF;
IL2CPP_EXTERN_C String_t* _stringLiteralBDBEBC1E8A863EAF2A1EFDC4D2393F1540ABF0C9;
IL2CPP_EXTERN_C String_t* _stringLiteralBF4CA9E695899EECA56DFBE6139CEFFF5B2AB373;
IL2CPP_EXTERN_C String_t* _stringLiteralBF92C939C85D8888B68A1C0E975839B22C2F1CA0;
IL2CPP_EXTERN_C String_t* _stringLiteralC44547C9F1A82EF3B511F2476CAA00D478C61747;
IL2CPP_EXTERN_C String_t* _stringLiteralC6DB44DDC4F1FACE4AA294C2B9EA59CCD285622D;
IL2CPP_EXTERN_C String_t* _stringLiteralC7453D784A8909E62B8E93E94A5E22CA83D87811;
IL2CPP_EXTERN_C String_t* _stringLiteralC8D7651AAAFAAA9A55123A4B14C546BC27C603E7;
IL2CPP_EXTERN_C String_t* _stringLiteralCCE9BB48FE0030E4D5155E4E52A4E2FFF336CBFA;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralD0D915A2B403702AB1F18A340F6557F4030455A2;
IL2CPP_EXTERN_C String_t* _stringLiteralD13B00C023BF8F75502A375DF33D4510C9E74E7F;
IL2CPP_EXTERN_C String_t* _stringLiteralD18BDC2D30848C2775BAB81B1520EB5760429863;
IL2CPP_EXTERN_C String_t* _stringLiteralD4A11128F810D574390DA344F324014E964D1876;
IL2CPP_EXTERN_C String_t* _stringLiteralD52AA944806C2B3BFAE356FC41F3C256E5900C8D;
IL2CPP_EXTERN_C String_t* _stringLiteralD66FED67EA1ADEC87F718BC4CEE5ABBE11B4ED17;
IL2CPP_EXTERN_C String_t* _stringLiteralD6D2FAB83001A2556F83D8CE5EE6726523ACDC59;
IL2CPP_EXTERN_C String_t* _stringLiteralD7C1E5A51C86BB1E35CAA253F725DAD930175185;
IL2CPP_EXTERN_C String_t* _stringLiteralD85D8860B58B2FBFC768DA8E74CA37AC6E2E0D96;
IL2CPP_EXTERN_C String_t* _stringLiteralDDA23639367EB0B86F361EA02AD294BDFDE6BA0B;
IL2CPP_EXTERN_C String_t* _stringLiteralE02BC3B5D408D1BC5E365A7F3C21C2F13AA96125;
IL2CPP_EXTERN_C String_t* _stringLiteralE10C83938F4FCAD01303234029171965E31E6376;
IL2CPP_EXTERN_C String_t* _stringLiteralE1571F9EC167194F2677177D7FD6E1D267F32D7B;
IL2CPP_EXTERN_C String_t* _stringLiteralE400D63EF13DB808F91D0F080E11A0D69694FC3D;
IL2CPP_EXTERN_C String_t* _stringLiteralE984152D2D2AC4D32829866F5F861E305BC13E2A;
IL2CPP_EXTERN_C String_t* _stringLiteralEA7F5B0306DF552DE66B7281D79B71C2E6AFE29A;
IL2CPP_EXTERN_C String_t* _stringLiteralF37693EA6379011271A20C40D610ECC1C3BC09E6;
IL2CPP_EXTERN_C String_t* _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B;
IL2CPP_EXTERN_C String_t* _stringLiteralFBB34848436688703C53144CE11D5844C3D5D69F;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_ReadProperty_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_m6C9035BE2883EB25F75F9F10F318181A241A48D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_ReadProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E538BCA2B4B482D5ADE5F78261F8C1C23A6BEB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m5388F68680AEF936029792873C798605E4A56B9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_ReadProperty_TisString_t_m77ABFD00F5FD79E6B5FCEFD9BEF8154F3F09312C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_ReadProperty_TisVector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_mEB7164B7A1A04E2C12F76DB2E3DB6694CBF05D63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisBoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651_m603DAF8CC60FFBA1326CF540584FA401C996FE50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m757B5A2C186E2CA3E0A606C01A7FEEBA60C2BB8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisColor32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_m5E9010145F8A830C0FF8244B782C692C46B12801_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mC041ABAFD847F57C6FC0692A54FDEF888CEF1694_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m5A3742E41A2B632BBC94874A9EF9087EAC33BBF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisIndexFormat_tE699D38323B3B0887DF054EAFF0CF035DF28E2BB_m753DDC5DCEDA3E0CE8985492DECB239010A950E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_mBF3D6E57DF157614F273F3CDCA8FFC9E896FF8CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisLightProbeUsage_tC6292C7B7CBA0E5AA2A56F40D71F58A7E06C2948_m0D362281541B321DDF5152BA2FBB79A5365F9EB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMaterialGlobalIlluminationFlags_tC360654C0CB0570ED64F540BAFAC93DD3097FA85_m41AEAEEE8ACC619A1C2CA65A78E5B05EA5DC7534_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_m31174DB686C153609DAFC00E5912B82F4C51C4BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMatrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_mD84B9945BA647995B0BCCC8377EB97CB554D05DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_mB373D7B8C51C9612A52C78209491DF864B63F56D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMotionVectorGenerationMode_tE87C61556749260EF5429A0F8FE55DAD30EEAFCB_m69507452EE500B836A206B93C7A7D8F1655E0E87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemScalingMode_tEC777C9C63E65B6CE026BBE10DA48F389DAECE72_m5C0DC18BF9CF07934F00ED8758CA9AE729F19106_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m7EC146C35647387DD36351685C0DD1C98B6333D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisPhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131_m22B142AFFF4F63E5C5ACB7650699BB4294BCCED6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisReflectionProbeUsage_t033508C14CD4AD926A3A215D19913DC21EA22705_m4DDADF6D026EF6288C6C705F87B838D3BE9342BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisShader_tADC867D36B7876EE22427FAA2CE485105F4EE692_mE27966EFF2F06E146982A5480B4F6E24657A08BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisShadowCastingMode_tF30806698B37CF120A1A506BD7549EAF308E7C6D_m5D515D5930F546F97E5C8689586A0633E40B2BE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisStringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_m56E015CA77E46F872ED998B331F7A2089CBE1F89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisString_t_m768535B1FBE236A964B82DC2B1781D823A20C5AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisTexture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_m19A386D486F1F0E8B04AD2F6C16157FD942F593D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m76F72323D090F7BFE241E75E77F0B53A709F00CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisVector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_mD8F5521623FE2C540F85E6C72D6D909EEA295229_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m9B3BD25086B61330AB516403F49CF5818CFE1478_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisVector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_mCCDE0A157C504E37253D847A746D8FE89ADC4A5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisVector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_m39105CE05F335D44D01ADCD81264E09B432F6B40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6CEB60BB5615A82E4DC0CEF487F58743FCE091D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA2A458447E513C25051A485702FF5B014291F986_RuntimeMethod_var;

struct BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;

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

// UnityEngine.BoneWeight
struct BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F 
{
	// System.Single UnityEngine.BoneWeight::m_Weight0
	float ___m_Weight0_0;
	// System.Single UnityEngine.BoneWeight::m_Weight1
	float ___m_Weight1_1;
	// System.Single UnityEngine.BoneWeight::m_Weight2
	float ___m_Weight2_2;
	// System.Single UnityEngine.BoneWeight::m_Weight3
	float ___m_Weight3_3;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex0
	int32_t ___m_BoneIndex0_4;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex1
	int32_t ___m_BoneIndex1_5;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex2
	int32_t ___m_BoneIndex2_6;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex3
	int32_t ___m_BoneIndex3_7;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// ES3Types.ES3CollectionType
struct ES3CollectionType_tEAEAD99D8E59692B0244597928BD0302F11AA3D6  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
	// ES3Types.ES3Type ES3Types.ES3CollectionType::elementType
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___elementType_13;
};

// ES3Types.ES3ObjectType
struct ES3ObjectType_tBA5571367FF8C40F7D824A9710B21A69EA9DC0B9  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};

// ES3Types.ES3Type_AnimationCurve
struct ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};

struct ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_AnimationCurve::Instance
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance_13;
};

// ES3Types.ES3Type_Bounds
struct ES3Type_Bounds_t211AB57F2637B2F66BE77D462E45D1A018E9C442  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};

struct ES3Type_Bounds_t211AB57F2637B2F66BE77D462E45D1A018E9C442_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Bounds::Instance
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance_13;
};

// ES3Types.ES3Type_MainModule
struct ES3Type_MainModule_tDAE2E101E0E01EE0D8721A23BB03C5FF5E349CDD  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};

struct ES3Type_MainModule_tDAE2E101E0E01EE0D8721A23BB03C5FF5E349CDD_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_MainModule::Instance
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance_13;
};

// ES3Types.ES3Type_Matrix4x4
struct ES3Type_Matrix4x4_t35A712AE2F3E3B09633FB0ADBC805C1E179E5D7C  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};

struct ES3Type_Matrix4x4_t35A712AE2F3E3B09633FB0ADBC805C1E179E5D7C_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Matrix4x4::Instance
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

// ES3Types.ES3Type_MinMaxGradient
struct ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};

struct ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_MinMaxGradient::Instance
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance_13;
};

// ES3Types.ES3Type_Shader
struct ES3Type_Shader_tC1F08C5F67DA885ED7A4E638A9C31EA154ABBA1A  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};

struct ES3Type_Shader_tC1F08C5F67DA885ED7A4E638A9C31EA154ABBA1A_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Shader::Instance
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance_13;
};

// ES3Types.ES3Type_Vector4
struct ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};

struct ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Vector4::Instance
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

// ES3Types.ES3Type_string
struct ES3Type_string_tF2C6B48AEF5F70E0C8CE33C9556FDFC7572D3A20  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};

struct ES3Type_string_tF2C6B48AEF5F70E0C8CE33C9556FDFC7572D3A20_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_string::Instance
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/MainModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_com
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

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// ES3Types.ES3ArrayType
struct ES3ArrayType_tA45C0DEABB458F1505437E3569C04B1BC04682BA  : public ES3CollectionType_tEAEAD99D8E59692B0244597928BD0302F11AA3D6
{
};

// ES3Types.ES3Type_PhysicMaterial
struct ES3Type_PhysicMaterial_t46CF856C9DE9E5AD82B9AB43028BBA900B0E0152  : public ES3ObjectType_tBA5571367FF8C40F7D824A9710B21A69EA9DC0B9
{
};

struct ES3Type_PhysicMaterial_t46CF856C9DE9E5AD82B9AB43028BBA900B0E0152_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_PhysicMaterial::Instance
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance_13;
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

// UnityEngine.ParticleSystem/MinMaxGradient
struct MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 
{
	// UnityEngine.ParticleSystemGradientMode UnityEngine.ParticleSystem/MinMaxGradient::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.Gradient UnityEngine.ParticleSystem/MinMaxGradient::m_GradientMin
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___m_GradientMin_1;
	// UnityEngine.Gradient UnityEngine.ParticleSystem/MinMaxGradient::m_GradientMax
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___m_GradientMax_2;
	// UnityEngine.Color UnityEngine.ParticleSystem/MinMaxGradient::m_ColorMin
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ColorMin_3;
	// UnityEngine.Color UnityEngine.ParticleSystem/MinMaxGradient::m_ColorMax
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ColorMax_4;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// ES3Types.ES3ComponentType
struct ES3ComponentType_t66C6E8582E8061D09D4477097EE2869AD648F6E9  : public ES3UnityObjectType_tF653280D2691EBD1459EF886ACEA2E98FC30CAEE
{
};

// ES3Types.ES3Type_BoneWeightArray
struct ES3Type_BoneWeightArray_tE27276013064B700B2E9794E78A8413B4442B1A2  : public ES3ArrayType_tA45C0DEABB458F1505437E3569C04B1BC04682BA
{
};

struct ES3Type_BoneWeightArray_tE27276013064B700B2E9794E78A8413B4442B1A2_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_BoneWeightArray::Instance
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance_14;
};

// ES3Types.ES3Type_Color32Array
struct ES3Type_Color32Array_t9B1C937FEF6D85CB0D1720B009554CE655E80DE3  : public ES3ArrayType_tA45C0DEABB458F1505437E3569C04B1BC04682BA
{
};

struct ES3Type_Color32Array_t9B1C937FEF6D85CB0D1720B009554CE655E80DE3_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Color32Array::Instance
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance_14;
};

// ES3Types.ES3Type_GameObject
struct ES3Type_GameObject_tCE2D774686F76B9AD7B35B975B97675F84F677E3  : public ES3UnityObjectType_tF653280D2691EBD1459EF886ACEA2E98FC30CAEE
{
	// System.Boolean ES3Types.ES3Type_GameObject::saveChildren
	bool ___saveChildren_16;
};

struct ES3Type_GameObject_tCE2D774686F76B9AD7B35B975B97675F84F677E3_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_GameObject::Instance
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance_15;
};

// ES3Types.ES3Type_Material
struct ES3Type_Material_t9D0AD66FC243F0AFCBB7940320FE2099DFFE2ECD  : public ES3UnityObjectType_tF653280D2691EBD1459EF886ACEA2E98FC30CAEE
{
};

struct ES3Type_Material_t9D0AD66FC243F0AFCBB7940320FE2099DFFE2ECD_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Material::Instance
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance_13;
};

// ES3Types.ES3Type_Matrix4x4Array
struct ES3Type_Matrix4x4Array_tDD91AD7E64D84E68919B835B1714AFFE56FAA997  : public ES3ArrayType_tA45C0DEABB458F1505437E3569C04B1BC04682BA
{
};

struct ES3Type_Matrix4x4Array_tDD91AD7E64D84E68919B835B1714AFFE56FAA997_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Matrix4x4Array::Instance
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance_14;
};

// ES3Types.ES3Type_Mesh
struct ES3Type_Mesh_tC459CC632DC495F2F0DAFAA32F718B1F73B6381D  : public ES3UnityObjectType_tF653280D2691EBD1459EF886ACEA2E98FC30CAEE
{
};

struct ES3Type_Mesh_tC459CC632DC495F2F0DAFAA32F718B1F73B6381D_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Mesh::Instance
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance_13;
};

// ES3Types.ES3Type_Vector2Array
struct ES3Type_Vector2Array_t41587B855D1799ADEFF3BE2182C0F87B35F2DDB1  : public ES3ArrayType_tA45C0DEABB458F1505437E3569C04B1BC04682BA
{
};

struct ES3Type_Vector2Array_t41587B855D1799ADEFF3BE2182C0F87B35F2DDB1_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Vector2Array::Instance
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance_14;
};

// ES3Types.ES3Type_Vector3Array
struct ES3Type_Vector3Array_t9704F872D5CC2A9118274ADEE416C0875AC42CB0  : public ES3ArrayType_tA45C0DEABB458F1505437E3569C04B1BC04682BA
{
};

struct ES3Type_Vector3Array_t9704F872D5CC2A9118274ADEE416C0875AC42CB0_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Vector3Array::Instance
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance_14;
};

// ES3Types.ES3Type_Vector4Array
struct ES3Type_Vector4Array_tCA2973339F6A2EC1CFF861CCDF21C435ABF5A978  : public ES3ArrayType_tA45C0DEABB458F1505437E3569C04B1BC04682BA
{
};

struct ES3Type_Vector4Array_tCA2973339F6A2EC1CFF861CCDF21C435ABF5A978_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Vector4Array::Instance
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance_14;
};

// ES3Types.ES3Type_intArray
struct ES3Type_intArray_tA8EB3EE2DAD629224B2904D493DE6504076E335F  : public ES3ArrayType_tA45C0DEABB458F1505437E3569C04B1BC04682BA
{
};

struct ES3Type_intArray_tA8EB3EE2DAD629224B2904D493DE6504076E335F_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_intArray::Instance
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance_14;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.PhysicMaterial
struct PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// ES3Types.ES3Type_MeshCollider
struct ES3Type_MeshCollider_t203FDD11C59795E463BD58FFAE7346BA2910C948  : public ES3ComponentType_t66C6E8582E8061D09D4477097EE2869AD648F6E9
{
};

struct ES3Type_MeshCollider_t203FDD11C59795E463BD58FFAE7346BA2910C948_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_MeshCollider::Instance
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance_14;
};

// ES3Types.ES3Type_MeshFilter
struct ES3Type_MeshFilter_t3607A6E665CB440763D08F3CCF57ECCB1D85A588  : public ES3ComponentType_t66C6E8582E8061D09D4477097EE2869AD648F6E9
{
};

struct ES3Type_MeshFilter_t3607A6E665CB440763D08F3CCF57ECCB1D85A588_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_MeshFilter::Instance
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance_14;
};

// ES3Types.ES3Type_MeshRenderer
struct ES3Type_MeshRenderer_t415A4AEABDD0CF78CF3BA7F05F1F8D36C62DCC92  : public ES3ComponentType_t66C6E8582E8061D09D4477097EE2869AD648F6E9
{
};

struct ES3Type_MeshRenderer_t415A4AEABDD0CF78CF3BA7F05F1F8D36C62DCC92_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_MeshRenderer::Instance
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance_14;
};

// ES3Types.ES3Type_Transform
struct ES3Type_Transform_tC86C7755D546F3D4A97553E19C31F9E025AB13A7  : public ES3ComponentType_t66C6E8582E8061D09D4477097EE2869AD648F6E9
{
};

struct ES3Type_Transform_tC86C7755D546F3D4A97553E19C31F9E025AB13A7_StaticFields
{
	// System.Int32 ES3Types.ES3Type_Transform::countRead
	int32_t ___countRead_14;
	// ES3Types.ES3Type ES3Types.ES3Type_Transform::Instance
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance_15;
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

// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
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
// UnityEngine.BoneWeight[]
struct BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651  : public RuntimeArray
{
	ALIGN_FIELD (8) BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F m_Items[1];

	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D  : public RuntimeArray
{
	ALIGN_FIELD (8) Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 m_Items[1];

	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
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
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259  : public RuntimeArray
{
	ALIGN_FIELD (8) Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B m_Items[1];

	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
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
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T ES3Reader::ReadProperty<UnityEngine.Vector4>(ES3Types.ES3Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_gshared (ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* __this, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___type0, const RuntimeMethod* method) ;
// T ES3Reader::ReadProperty<System.Object>(ES3Types.ES3Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Reader_ReadProperty_TisRuntimeObject_mA2D92F9423743595A1DDAD32E66C8BC840690644_gshared (ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* __this, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___type0, const RuntimeMethod* method) ;
// T ES3Reader::ReadProperty<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Reader_ReadProperty_TisRuntimeObject_mF3D1A225D2FCBB272F3D704F4962E31B6AB427D5_gshared (ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* __this, const RuntimeMethod* method) ;
// T ES3Reader::ReadProperty<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ES3Reader_ReadProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E538BCA2B4B482D5ADE5F78261F8C1C23A6BEB3_gshared (ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* __this, const RuntimeMethod* method) ;
// T ES3Reader::ReadProperty<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m5388F68680AEF936029792873C798605E4A56B9F_gshared (ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* __this, const RuntimeMethod* method) ;

// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_duration(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_duration_m3B328F1E542EEE7BAE101B309512E0E3B4638B77 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_loop_mB3FC83A6DA8D248D15C53388D6B9B7711ADD89BE (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_prewarm(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_prewarm_m99964C46DE65B6797E9FD6A5CAF19E0B150D99F6 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startDelay(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startDelay_mFE9F9E7F79978F670904789F7F55B96F42434F69 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startDelayMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startDelayMultiplier_m1EAE44047D0E5FC4FDE7AF3F8A517D23B9CECC2A (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startLifetime(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startLifetime_mDFC2433853CB12C0C93C8BF16FEDB4EA2E0B3514 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startLifetimeMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startLifetimeMultiplier_mFD2343C9B1E172A7C2D13658CA36270C3FCA6D85 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSpeed(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSpeed_mE6041E4BA54F01117AF6B81B1E53C5C9C669AC75 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSpeedMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSpeedMultiplier_m297519F08A0F1C70A7972AE6813DC06BFDA89074 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSize3D(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSize3D_mD90CDAA22BD7859762B8A7D89FB8AB234206C4E6 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSize(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSize_m44C3A39EAF1AE9A526A126D93160128223BE827B (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSizeMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSizeMultiplier_m4561E105FF6755975C4ABBF4C62C8F338685EE02 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSizeX(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSizeX_m5F3F00611409B616D7B5B05EF3A6D7C35448C445 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSizeXMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSizeXMultiplier_m97EF3367ABCA54443AB7E2DF038E1208CAFEDCC6 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSizeY(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSizeY_mAA04D165042FFAEC3F17672ED84F066A8295C0FD (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSizeYMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSizeYMultiplier_m1100BB5A064C9F3638F2F7867EC404B95AC59215 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSizeZ(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSizeZ_mA1D0B1E2E9505DFDB42622E575FD91134ABE9A50 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSizeZMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSizeZMultiplier_mE3AAF9C6580F32E7D986147CA060B243E392B9E0 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startRotation3D(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startRotation3D_m0A38498100EF660B71B29BB3C58F1DD1BF6C79E7 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startRotation(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startRotation_m8D09FD13401B188EC3C20C489CFA1EDDA3B43079 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startRotationMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startRotationMultiplier_m7C4E9C38104D2F87EB57D68B4F0C14110DB6E8B1 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startRotationX(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startRotationX_m2BF2E2E87F0F199ADB04ADBD719F17B762956CA9 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startRotationXMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startRotationXMultiplier_m23EED38F1C33CCB5992536B87714C8D03ABC13C6 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startRotationY(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startRotationY_m3BAC5A35565F302246EC5DD52F0410773C24480C (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startRotationYMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startRotationYMultiplier_mADF58CC09C5F1998E2B8DF4D2766087CBE869834 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startRotationZ(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startRotationZ_m69F340DE9D9C4D402E514592DDD226ACC7C4B0AE (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startRotationZMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startRotationZMultiplier_m526C944907FADC856F24E12FAA983F463058213F (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_flipRotation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_flipRotation_m638195126B6F330703BA953F190D58B419BB5EE7 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startColor(UnityEngine.ParticleSystem/MinMaxGradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startColor_m504911284CAC53A7C1B97B5D01BBDD2FA67D0E7A (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_gravityModifier(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_gravityModifier_m398D2C7F10E389C0EA365640A54D2C0C151A42A7 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_gravityModifierMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_gravityModifierMultiplier_m644D0D04BBE1D4509B1CDB0BBC36D53E02906537 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_simulationSpace(UnityEngine.ParticleSystemSimulationSpace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_simulationSpace_m23D533E66925AABF0C336894FBF2FF03FF3891BC (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_customSimulationSpace(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_customSimulationSpace_m89F1A54DF8D2A2F02C5996F7DDD19A6FB1678B16 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_simulationSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_simulationSpeed_mFB44E06BF3F0D423636A6F37642CCC5722EBE0C6 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_scalingMode(UnityEngine.ParticleSystemScalingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_scalingMode_m08A4399A0E64E5894509084A42BB528BE16A648D (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_playOnAwake(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_playOnAwake_mC86DBF96156C8783FAC2AD1628529F354FB1C6D8 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_maxParticles(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_maxParticles_mF9E7A56D7E1A528904BE1A8C0E14F15C3AF0F748 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ES3Reader/ES3ReaderPropertyEnumerator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3ReaderPropertyEnumerator_GetEnumerator_mBF25A2B7B71596A1DCB090DD81E708091D1D4478 (ES3ReaderPropertyEnumerator_t2948B3DC88B88DF76A6ED9F660F7055F08697C37* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_shader(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_renderQueue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::EnableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___keyword0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_globalIlluminationFlags(UnityEngine.MaterialGlobalIlluminationFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_globalIlluminationFlags_m41DD0EECE3EB9C6B68FBAA357DE8E2B8A5D63AEB (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTextureScale(System.String,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTextureScale_m8DBD33DD5E1F19C75C9C022974B27C719E9C5F8D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value1, const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Material::get_shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Material::HasProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Shader::FindPropertyIndex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_FindPropertyIndex_mDD0C2F8AB1DF298D24F59492248B7D7CA4EF0A97 (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* __this, String_t* ___propertyName0, const RuntimeMethod* method) ;
// UnityEngine.Rendering.ShaderPropertyType UnityEngine.Shader::GetPropertyType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_GetPropertyType_mC53671FA21725E4F474F159AEBD38EB97BDC9CF1 (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* __this, int32_t ___propertyIndex0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::op_Implicit(UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Implicit_mA8CF4745D766F4F610E1BE0A1ED2F4E5FE5D734C_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v0, const RuntimeMethod* method) ;
// System.Boolean System.String::EndsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.String[],System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m03F46561E2DF46D1E3AE749A77706EFC2F6488F4 (String_t* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTextureOffset(System.String,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTextureOffset_m40F3FCE32535625DDF26C0C073D37968117FBFE1 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value1, const RuntimeMethod* method) ;
// T ES3Reader::ReadProperty<UnityEngine.Vector4>(ES3Types.ES3Type)
inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071 (ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* __this, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___type0, const RuntimeMethod* method)
{
	return ((  Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 (*) (ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*, const RuntimeMethod*))ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_gshared)(__this, ___type0, method);
}
// System.Void UnityEngine.Matrix4x4::SetColumn(System.Int32,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___index0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___column1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Mesh::get_isReadable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mesh_get_isReadable_m3309900DB9B66BD321128839E6801722D15CD1E0 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void ES3Internal.ES3Debug::LogWarning(System.String,UnityEngine.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Debug_LogWarning_m1A2E2832ABC2B0068C50FF36590CFFFE11CEB891 (String_t* ___msg0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, int32_t ___indent2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_indexFormat(UnityEngine.Rendering.IndexFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_indexFormat_mCCC7837A0916FA7A272159DA6AF984B0022488F4 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_bounds(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_bounds_m2E526E9B61ACA77D644C22A9D8EB49583012B54E (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_boneWeights(UnityEngine.BoneWeight[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_boneWeights_m4924E79620EDC7AAA1D05CFE8B535BB37F0E8FA7 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_bindposes(UnityEngine.Matrix4x4[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_bindposes_m7BD70B3BC121F436B5836EABDE5E99CAD64C82FF (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_normals(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_normals_m85D73193C49211BE9FA135FF72D5749B16A4760B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_tangents(UnityEngine.Vector4[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_tangents_mF547B7E4F9C70FB7CD6168139180A70AD306169B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_uv2(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv2_m37B442C04EBB029C0AD9545C54F95D9BDAD8E9B5 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_uv3(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv3_m447FE1800C6FA36F8E4AD996A001F4A26E04A5A2 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_uv4(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv4_mC87359C3EEA7219ABF70375148B98DC95577F9A3 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_colors32(UnityEngine.Color32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_colors32_m0E4462B7A1D613E6FB15DD7584BCE5491C17820F (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_subMeshCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_subMeshCount_m8E4DB392DB0621F7DFF8543FF3943A13072B8A28 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T ES3Reader::ReadProperty<System.Int32[]>(ES3Types.ES3Type)
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ES3Reader_ReadProperty_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_m6C9035BE2883EB25F75F9F10F318181A241A48D2 (ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* __this, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___type0, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*, const RuntimeMethod*))ES3Reader_ReadProperty_TisRuntimeObject_mA2D92F9423743595A1DDAD32E66C8BC840690644_gshared)(__this, ___type0, method);
}
// System.Void UnityEngine.Mesh::SetTriangles(System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetTriangles_mD97664344427EB85BB6DC2EF91479E03B9114258 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___triangles0, int32_t ___submesh1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mesh::get_subMeshCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_get_subMeshCount_mC0141293D0F339D8D721CCA2612B32E6FD7E3F8B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::ClearBlendShapes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_ClearBlendShapes_mFA2C9D2FE4C326F5817E1994B3C8F4F116DB683F (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// T ES3Reader::ReadProperty<System.String>()
inline String_t* ES3Reader_ReadProperty_TisString_t_m77ABFD00F5FD79E6B5FCEFD9BEF8154F3F09312C (ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, const RuntimeMethod*))ES3Reader_ReadProperty_TisRuntimeObject_mF3D1A225D2FCBB272F3D704F4962E31B6AB427D5_gshared)(__this, method);
}
// T ES3Reader::ReadProperty<System.Int32>()
inline int32_t ES3Reader_ReadProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E538BCA2B4B482D5ADE5F78261F8C1C23A6BEB3 (ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, const RuntimeMethod*))ES3Reader_ReadProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E538BCA2B4B482D5ADE5F78261F8C1C23A6BEB3_gshared)(__this, method);
}
// T ES3Reader::ReadProperty<UnityEngine.Vector3[]>()
inline Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ES3Reader_ReadProperty_TisVector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_mEB7164B7A1A04E2C12F76DB2E3DB6694CBF05D63 (ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* __this, const RuntimeMethod* method)
{
	return ((  Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* (*) (ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, const RuntimeMethod*))ES3Reader_ReadProperty_TisRuntimeObject_mF3D1A225D2FCBB272F3D704F4962E31B6AB427D5_gshared)(__this, method);
}
// T ES3Reader::ReadProperty<System.Single>()
inline float ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m5388F68680AEF936029792873C798605E4A56B9F (ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* __this, const RuntimeMethod* method)
{
	return ((  float (*) (ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, const RuntimeMethod*))ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m5388F68680AEF936029792873C798605E4A56B9F_gshared)(__this, method);
}
// System.Void UnityEngine.Mesh::AddBlendShapeFrame(System.String,System.Single,UnityEngine.Vector3[],UnityEngine.Vector3[],UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_AddBlendShapeFrame_m57DCAB3A7D6916ABD1D1B4FB0F8FC3BD3D876E11 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, String_t* ___shapeName0, float ___frameWeight1, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___deltaVertices2, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___deltaNormals3, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___deltaTangents4, const RuntimeMethod* method) ;
// System.Void UnityEngine.MeshCollider::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCollider_set_sharedMesh_m05F87B9AC04139285EBBCC159F77B51C6940E79C (MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MeshCollider::set_convex(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCollider_set_convex_m20482D687240D0921BA76B77983403E55A2E3CE1 (MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_isTrigger(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_contactOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_contactOffset_mEDA8D778F641338733D140E76FCA0D6B29203B52 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_sharedMaterial(UnityEngine.PhysicMaterial)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_sharedMaterial_m2AC21AB939A377ABACF8282CDC52EE61B54107ED (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MeshFilter::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_sharedMesh_m946F7E3F583761982642BDA4753784AF1DF6E16F (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MeshRenderer::set_additionalVertexStreams(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshRenderer_set_additionalVertexStreams_m868D054ACBD5ECCE2B5B43781F7932F886B86379 (MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_shadowCastingMode(UnityEngine.Rendering.ShadowCastingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_receiveShadows(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_sharedMaterials(UnityEngine.Material[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterials_m665ADE4190214CC2AC52490B4A7373D7EE75DEB2 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_lightmapIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_lightmapIndex_mB6F2202FEC2ECBA3538EBDAEE17B073CEF2B5AB8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_realtimeLightmapIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_realtimeLightmapIndex_mE5684918EF41D05B218AEC5D6D3675B8A8F77389 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_lightmapScaleOffset(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_lightmapScaleOffset_m1F7EB461298380CCD8EE337F9AAAE40BE5B732A2 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_motionVectorGenerationMode(UnityEngine.MotionVectorGenerationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_motionVectorGenerationMode_m5768AC38CBBAD505E34281889682CA464ED3A32F (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_realtimeLightmapScaleOffset(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_realtimeLightmapScaleOffset_m391D14F3698B3D2BD88DC001931D261E5A3448E9 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_lightProbeUsage(UnityEngine.Rendering.LightProbeUsage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_lightProbeUsage_mDCCD970DAC3546B32EF58876BABBD3353624F703 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_lightProbeProxyVolumeOverride(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_lightProbeProxyVolumeOverride_mEAF99A789A36BEDBAFCD2C2084578CF359587A21 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_probeAnchor(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_probeAnchor_m0032C3CC1BBF36AC32FCCDE6F4A6F2CE73062327 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_reflectionProbeUsage(UnityEngine.Rendering.ReflectionProbeUsage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_reflectionProbeUsage_m54A268EACA655AC3C66C4CD7F8C1EF3B41F3E008 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_sortingLayerName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sortingLayerName_mF335BAE30015B49C27FF3C063B033E44C237AC8A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_sortingLayerID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sortingLayerID_m289E44FD06B6692C7B2ADD1189FE4FC013180C49 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_sortingOrder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_mode(UnityEngine.ParticleSystemCurveMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_curveMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_curveMax(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_curveMin(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_constantMax(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_constantMin(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_constant(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_curve(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void ES3Types.ES3Type_MainModule::ReadInto<UnityEngine.ParticleSystem/TrailModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MainModule_ReadInto_TisTrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_mE80C2E3626D7F322FE18394717AE980FFBA9EC4E_gshared (ES3Type_MainModule_tDAE2E101E0E01EE0D8721A23BB03C5FF5E349CDD* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemScalingMode_tEC777C9C63E65B6CE026BBE10DA48F389DAECE72_m5C0DC18BF9CF07934F00ED8758CA9AE729F19106_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m7EC146C35647387DD36351685C0DD1C98B6333D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m76F72323D090F7BFE241E75E77F0B53A709F00CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Transform_tC86C7755D546F3D4A97553E19C31F9E025AB13A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0557268B1F1E424D0A902F3EEDF716875C8D4BAD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral092025ADD4C03A232510E3C6A7582D01C4AADC44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D519365D01A086962A53AFD0AE6A825AEDA4CD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12ADFC84D6BCCEB460E08E32B4FA7ACC9BEF31B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral234A259825C3E358FC282516D3B56DA588F88F1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E348D1FA98FD45ED7FBF438FF66F0EBA5170C10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D00E0E3B130EDADC4916A7F4EE121274836DE84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E84FA80252B50CE925CA3311D4092D0879CCEE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4030531AEB69C153C44E24CF9424162B6081EF3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEBA0A009EC71316BB5FB5F9325F2B77983D49D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D6E9033064B19B4E5DF4893D7F1FA2F90A3EA47);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DAA87352BD3C06E5CD37671716E661CD9C905D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F2C37C486869159335DA15899C8D3E6BC9420EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71E7E3565AB61CB4D30030EC7D0A58B6311EACB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7570747A640CCECD3BEDFC03012FFDDE81139994);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B398077F661091AB5BC307B2FD6237744E266BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BA557C60FBFACAA46AD1B56F1F3BD5FC6D77A8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80F4B08AEBD9E1F7CB29DF4B8D1854AEFF320EE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81BD0AE28E075333BBE5C03AF9C6FE41A456CE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86C151E04A32460B50ED4AB51B2F5E3BAA1E141E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89088895C148BA6DFD2EFCE1E10956849FCA3C20);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BD6F896E373FE6FCF354A1BB2F73761E86A2EC1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98E0D0561A1C0240F52BDBBD3E637C208BC0E6AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD41E9EAC27A83BCE636034F0ECF81B657AC0072);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCD524F863D44F707F9F38C67C411C87D8015ABF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF4CA9E695899EECA56DFBE6139CEFFF5B2AB373);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC44547C9F1A82EF3B511F2476CAA00D478C61747);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6DB44DDC4F1FACE4AA294C2B9EA59CCD285622D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCE9BB48FE0030E4D5155E4E52A4E2FFF336CBFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD13B00C023BF8F75502A375DF33D4510C9E74E7F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6D2FAB83001A2556F83D8CE5EE6726523ACDC59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7C1E5A51C86BB1E35CAA253F725DAD930175185);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD85D8860B58B2FBFC768DA8E74CA37AC6E2E0D96);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE02BC3B5D408D1BC5E365A7F3C21C2F13AA96125);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE10C83938F4FCAD01303234029171965E31E6376);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE400D63EF13DB808F91D0F080E11A0D69694FC3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF37693EA6379011271A20C40D610ECC1C3BC09E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBB34848436688703C53144CE11D5844C3D5D69F);
		s_Il2CppMethodInitialized = true;
	}
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MainModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*)((MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*)(MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*)UnBox(L_0, MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_il2cpp_TypeInfo_var))));
		goto IL_08f2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-2146163991)))))
		{
			goto IL_0152;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1029031894)))))
		{
			goto IL_00b8;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)715850849)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)295072398)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)135653803))))
		{
			goto IL_0301;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)295072398))))
		{
			goto IL_04e4;
		}
	}
	{
		goto IL_08ec;
	}

IL_0054:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)584683564))))
		{
			goto IL_04ba;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)715850849))))
		{
			goto IL_0340;
		}
	}
	{
		goto IL_08ec;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)799079693)))))
		{
			goto IL_0092;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)758253138))))
		{
			goto IL_0427;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)799079693))))
		{
			goto IL_0283;
		}
	}
	{
		goto IL_08ec;
	}

IL_0092:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)804521684))))
		{
			goto IL_02ec;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)897349200))))
		{
			goto IL_0523;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1029031894))))
		{
			goto IL_03fd;
		}
	}
	{
		goto IL_08ec;
	}

IL_00b8:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)1718450024)))))
		{
			goto IL_0109;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)1457636606)))))
		{
			goto IL_00e3;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)1402700886))))
		{
			goto IL_0355;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)1457636606))))
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_08ec;
	}

IL_00e3:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)1527437181))))
		{
			goto IL_032b;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)1667165089))))
		{
			goto IL_0412;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)1718450024))))
		{
			goto IL_0466;
		}
	}
	{
		goto IL_08ec;
	}

IL_0109:
	{
		uint32_t L_24 = V_2;
		if ((!(((uint32_t)L_24) <= ((uint32_t)((int32_t)1753560193)))))
		{
			goto IL_012c;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)1735227643))))
		{
			goto IL_043c;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)1753560193))))
		{
			goto IL_0538;
		}
	}
	{
		goto IL_08ec;
	}

IL_012c:
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)1768782881))))
		{
			goto IL_0490;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)1841060562))))
		{
			goto IL_04a5;
		}
	}
	{
		uint32_t L_29 = V_2;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)-2146163991))))
		{
			goto IL_036a;
		}
	}
	{
		goto IL_08ec;
	}

IL_0152:
	{
		uint32_t L_30 = V_2;
		if ((!(((uint32_t)L_30) <= ((uint32_t)((int32_t)-1385882840)))))
		{
			goto IL_01ec;
		}
	}
	{
		uint32_t L_31 = V_2;
		if ((!(((uint32_t)L_31) <= ((uint32_t)((int32_t)-1689505682)))))
		{
			goto IL_01a3;
		}
	}
	{
		uint32_t L_32 = V_2;
		if ((!(((uint32_t)L_32) <= ((uint32_t)((int32_t)-1869422109)))))
		{
			goto IL_0188;
		}
	}
	{
		uint32_t L_33 = V_2;
		if ((((int32_t)L_33) == ((int32_t)((int32_t)-2010917879))))
		{
			goto IL_054d;
		}
	}
	{
		uint32_t L_34 = V_2;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)-1869422109))))
		{
			goto IL_02ad;
		}
	}
	{
		goto IL_08ec;
	}

IL_0188:
	{
		uint32_t L_35 = V_2;
		if ((((int32_t)L_35) == ((int32_t)((int32_t)-1721435387))))
		{
			goto IL_0577;
		}
	}
	{
		uint32_t L_36 = V_2;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)-1689505682))))
		{
			goto IL_03be;
		}
	}
	{
		goto IL_08ec;
	}

IL_01a3:
	{
		uint32_t L_37 = V_2;
		if ((!(((uint32_t)L_37) <= ((uint32_t)((int32_t)-1437051040)))))
		{
			goto IL_01c6;
		}
	}
	{
		uint32_t L_38 = V_2;
		if ((((int32_t)L_38) == ((int32_t)((int32_t)-1445929244))))
		{
			goto IL_03d3;
		}
	}
	{
		uint32_t L_39 = V_2;
		if ((((int32_t)L_39) == ((int32_t)((int32_t)-1437051040))))
		{
			goto IL_0451;
		}
	}
	{
		goto IL_08ec;
	}

IL_01c6:
	{
		uint32_t L_40 = V_2;
		if ((((int32_t)L_40) == ((int32_t)((int32_t)-1412374006))))
		{
			goto IL_037f;
		}
	}
	{
		uint32_t L_41 = V_2;
		if ((((int32_t)L_41) == ((int32_t)((int32_t)-1395596387))))
		{
			goto IL_03a9;
		}
	}
	{
		uint32_t L_42 = V_2;
		if ((((int32_t)L_42) == ((int32_t)((int32_t)-1385882840))))
		{
			goto IL_058c;
		}
	}
	{
		goto IL_08ec;
	}

IL_01ec:
	{
		uint32_t L_43 = V_2;
		if ((!(((uint32_t)L_43) <= ((uint32_t)((int32_t)-576970835)))))
		{
			goto IL_023d;
		}
	}
	{
		uint32_t L_44 = V_2;
		if ((!(((uint32_t)L_44) <= ((uint32_t)((int32_t)-1178480433)))))
		{
			goto IL_0217;
		}
	}
	{
		uint32_t L_45 = V_2;
		if ((((int32_t)L_45) == ((int32_t)((int32_t)-1189560255))))
		{
			goto IL_02d7;
		}
	}
	{
		uint32_t L_46 = V_2;
		if ((((int32_t)L_46) == ((int32_t)((int32_t)-1178480433))))
		{
			goto IL_047b;
		}
	}
	{
		goto IL_08ec;
	}

IL_0217:
	{
		uint32_t L_47 = V_2;
		if ((((int32_t)L_47) == ((int32_t)((int32_t)-1060285089))))
		{
			goto IL_04cf;
		}
	}
	{
		uint32_t L_48 = V_2;
		if ((((int32_t)L_48) == ((int32_t)((int32_t)-793132101))))
		{
			goto IL_03e8;
		}
	}
	{
		uint32_t L_49 = V_2;
		if ((((int32_t)L_49) == ((int32_t)((int32_t)-576970835))))
		{
			goto IL_0394;
		}
	}
	{
		goto IL_08ec;
	}

IL_023d:
	{
		uint32_t L_50 = V_2;
		if ((!(((uint32_t)L_50) <= ((uint32_t)((int32_t)-566708729)))))
		{
			goto IL_025d;
		}
	}
	{
		uint32_t L_51 = V_2;
		if ((((int32_t)L_51) == ((int32_t)((int32_t)-571520917))))
		{
			goto IL_0298;
		}
	}
	{
		uint32_t L_52 = V_2;
		if ((((int32_t)L_52) == ((int32_t)((int32_t)-566708729))))
		{
			goto IL_050e;
		}
	}
	{
		goto IL_08ec;
	}

IL_025d:
	{
		uint32_t L_53 = V_2;
		if ((((int32_t)L_53) == ((int32_t)((int32_t)-564410384))))
		{
			goto IL_04f9;
		}
	}
	{
		uint32_t L_54 = V_2;
		if ((((int32_t)L_54) == ((int32_t)((int32_t)-265401527))))
		{
			goto IL_0562;
		}
	}
	{
		uint32_t L_55 = V_2;
		if ((((int32_t)L_55) == ((int32_t)((int32_t)-234291494))))
		{
			goto IL_0316;
		}
	}
	{
		goto IL_08ec;
	}

IL_0283:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteral7BA557C60FBFACAA46AD1B56F1F3BD5FC6D77A8D, NULL);
		if (L_57)
		{
			goto IL_05a1;
		}
	}
	{
		goto IL_08ec;
	}

IL_0298:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteralE02BC3B5D408D1BC5E365A7F3C21C2F13AA96125, NULL);
		if (L_59)
		{
			goto IL_05b8;
		}
	}
	{
		goto IL_08ec;
	}

IL_02ad:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteralD85D8860B58B2FBFC768DA8E74CA37AC6E2E0D96, NULL);
		if (L_61)
		{
			goto IL_05cf;
		}
	}
	{
		goto IL_08ec;
	}

IL_02c2:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteralE400D63EF13DB808F91D0F080E11A0D69694FC3D, NULL);
		if (L_63)
		{
			goto IL_05e6;
		}
	}
	{
		goto IL_08ec;
	}

IL_02d7:
	{
		String_t* L_64 = V_1;
		bool L_65;
		L_65 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_64, _stringLiteralC6DB44DDC4F1FACE4AA294C2B9EA59CCD285622D, NULL);
		if (L_65)
		{
			goto IL_05fd;
		}
	}
	{
		goto IL_08ec;
	}

IL_02ec:
	{
		String_t* L_66 = V_1;
		bool L_67;
		L_67 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_66, _stringLiteral5DAA87352BD3C06E5CD37671716E661CD9C905D6, NULL);
		if (L_67)
		{
			goto IL_0614;
		}
	}
	{
		goto IL_08ec;
	}

IL_0301:
	{
		String_t* L_68 = V_1;
		bool L_69;
		L_69 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_68, _stringLiteralBF4CA9E695899EECA56DFBE6139CEFFF5B2AB373, NULL);
		if (L_69)
		{
			goto IL_062b;
		}
	}
	{
		goto IL_08ec;
	}

IL_0316:
	{
		String_t* L_70 = V_1;
		bool L_71;
		L_71 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_70, _stringLiteralBCD524F863D44F707F9F38C67C411C87D8015ABF, NULL);
		if (L_71)
		{
			goto IL_0642;
		}
	}
	{
		goto IL_08ec;
	}

IL_032b:
	{
		String_t* L_72 = V_1;
		bool L_73;
		L_73 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_72, _stringLiteralD7C1E5A51C86BB1E35CAA253F725DAD930175185, NULL);
		if (L_73)
		{
			goto IL_0659;
		}
	}
	{
		goto IL_08ec;
	}

IL_0340:
	{
		String_t* L_74 = V_1;
		bool L_75;
		L_75 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_74, _stringLiteral0D519365D01A086962A53AFD0AE6A825AEDA4CD0, NULL);
		if (L_75)
		{
			goto IL_0670;
		}
	}
	{
		goto IL_08ec;
	}

IL_0355:
	{
		String_t* L_76 = V_1;
		bool L_77;
		L_77 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_76, _stringLiteral5D6E9033064B19B4E5DF4893D7F1FA2F90A3EA47, NULL);
		if (L_77)
		{
			goto IL_0687;
		}
	}
	{
		goto IL_08ec;
	}

IL_036a:
	{
		String_t* L_78 = V_1;
		bool L_79;
		L_79 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_78, _stringLiteral2E348D1FA98FD45ED7FBF438FF66F0EBA5170C10, NULL);
		if (L_79)
		{
			goto IL_069e;
		}
	}
	{
		goto IL_08ec;
	}

IL_037f:
	{
		String_t* L_80 = V_1;
		bool L_81;
		L_81 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_80, _stringLiteralE10C83938F4FCAD01303234029171965E31E6376, NULL);
		if (L_81)
		{
			goto IL_06b5;
		}
	}
	{
		goto IL_08ec;
	}

IL_0394:
	{
		String_t* L_82 = V_1;
		bool L_83;
		L_83 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_82, _stringLiteral7570747A640CCECD3BEDFC03012FFDDE81139994, NULL);
		if (L_83)
		{
			goto IL_06cc;
		}
	}
	{
		goto IL_08ec;
	}

IL_03a9:
	{
		String_t* L_84 = V_1;
		bool L_85;
		L_85 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_84, _stringLiteralD6D2FAB83001A2556F83D8CE5EE6726523ACDC59, NULL);
		if (L_85)
		{
			goto IL_06e3;
		}
	}
	{
		goto IL_08ec;
	}

IL_03be:
	{
		String_t* L_86 = V_1;
		bool L_87;
		L_87 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_86, _stringLiteral3E84FA80252B50CE925CA3311D4092D0879CCEE1, NULL);
		if (L_87)
		{
			goto IL_06fa;
		}
	}
	{
		goto IL_08ec;
	}

IL_03d3:
	{
		String_t* L_88 = V_1;
		bool L_89;
		L_89 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_88, _stringLiteralCCE9BB48FE0030E4D5155E4E52A4E2FFF336CBFA, NULL);
		if (L_89)
		{
			goto IL_0711;
		}
	}
	{
		goto IL_08ec;
	}

IL_03e8:
	{
		String_t* L_90 = V_1;
		bool L_91;
		L_91 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_90, _stringLiteral8BD6F896E373FE6FCF354A1BB2F73761E86A2EC1, NULL);
		if (L_91)
		{
			goto IL_0728;
		}
	}
	{
		goto IL_08ec;
	}

IL_03fd:
	{
		String_t* L_92 = V_1;
		bool L_93;
		L_93 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_92, _stringLiteral86C151E04A32460B50ED4AB51B2F5E3BAA1E141E, NULL);
		if (L_93)
		{
			goto IL_073f;
		}
	}
	{
		goto IL_08ec;
	}

IL_0412:
	{
		String_t* L_94 = V_1;
		bool L_95;
		L_95 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_94, _stringLiteralD13B00C023BF8F75502A375DF33D4510C9E74E7F, NULL);
		if (L_95)
		{
			goto IL_0756;
		}
	}
	{
		goto IL_08ec;
	}

IL_0427:
	{
		String_t* L_96 = V_1;
		bool L_97;
		L_97 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_96, _stringLiteralF37693EA6379011271A20C40D610ECC1C3BC09E6, NULL);
		if (L_97)
		{
			goto IL_076d;
		}
	}
	{
		goto IL_08ec;
	}

IL_043c:
	{
		String_t* L_98 = V_1;
		bool L_99;
		L_99 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_98, _stringLiteral3D00E0E3B130EDADC4916A7F4EE121274836DE84, NULL);
		if (L_99)
		{
			goto IL_0784;
		}
	}
	{
		goto IL_08ec;
	}

IL_0451:
	{
		String_t* L_100 = V_1;
		bool L_101;
		L_101 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_100, _stringLiteralC44547C9F1A82EF3B511F2476CAA00D478C61747, NULL);
		if (L_101)
		{
			goto IL_079b;
		}
	}
	{
		goto IL_08ec;
	}

IL_0466:
	{
		String_t* L_102 = V_1;
		bool L_103;
		L_103 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_102, _stringLiteral89088895C148BA6DFD2EFCE1E10956849FCA3C20, NULL);
		if (L_103)
		{
			goto IL_07b2;
		}
	}
	{
		goto IL_08ec;
	}

IL_047b:
	{
		String_t* L_104 = V_1;
		bool L_105;
		L_105 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_104, _stringLiteral98E0D0561A1C0240F52BDBBD3E637C208BC0E6AB, NULL);
		if (L_105)
		{
			goto IL_07c9;
		}
	}
	{
		goto IL_08ec;
	}

IL_0490:
	{
		String_t* L_106 = V_1;
		bool L_107;
		L_107 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_106, _stringLiteral5BEBA0A009EC71316BB5FB5F9325F2B77983D49D, NULL);
		if (L_107)
		{
			goto IL_07e0;
		}
	}
	{
		goto IL_08ec;
	}

IL_04a5:
	{
		String_t* L_108 = V_1;
		bool L_109;
		L_109 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_108, _stringLiteral7B398077F661091AB5BC307B2FD6237744E266BA, NULL);
		if (L_109)
		{
			goto IL_07f7;
		}
	}
	{
		goto IL_08ec;
	}

IL_04ba:
	{
		String_t* L_110 = V_1;
		bool L_111;
		L_111 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_110, _stringLiteral12ADFC84D6BCCEB460E08E32B4FA7ACC9BEF31B2, NULL);
		if (L_111)
		{
			goto IL_080e;
		}
	}
	{
		goto IL_08ec;
	}

IL_04cf:
	{
		String_t* L_112 = V_1;
		bool L_113;
		L_113 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_112, _stringLiteral234A259825C3E358FC282516D3B56DA588F88F1E, NULL);
		if (L_113)
		{
			goto IL_0825;
		}
	}
	{
		goto IL_08ec;
	}

IL_04e4:
	{
		String_t* L_114 = V_1;
		bool L_115;
		L_115 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_114, _stringLiteral81BD0AE28E075333BBE5C03AF9C6FE41A456CE9D, NULL);
		if (L_115)
		{
			goto IL_083c;
		}
	}
	{
		goto IL_08ec;
	}

IL_04f9:
	{
		String_t* L_116 = V_1;
		bool L_117;
		L_117 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_116, _stringLiteral4030531AEB69C153C44E24CF9424162B6081EF3A, NULL);
		if (L_117)
		{
			goto IL_0853;
		}
	}
	{
		goto IL_08ec;
	}

IL_050e:
	{
		String_t* L_118 = V_1;
		bool L_119;
		L_119 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_118, _stringLiteral092025ADD4C03A232510E3C6A7582D01C4AADC44, NULL);
		if (L_119)
		{
			goto IL_086a;
		}
	}
	{
		goto IL_08ec;
	}

IL_0523:
	{
		String_t* L_120 = V_1;
		bool L_121;
		L_121 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_120, _stringLiteralFBB34848436688703C53144CE11D5844C3D5D69F, NULL);
		if (L_121)
		{
			goto IL_087e;
		}
	}
	{
		goto IL_08ec;
	}

IL_0538:
	{
		String_t* L_122 = V_1;
		bool L_123;
		L_123 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_122, _stringLiteral6F2C37C486869159335DA15899C8D3E6BC9420EC, NULL);
		if (L_123)
		{
			goto IL_088d;
		}
	}
	{
		goto IL_08ec;
	}

IL_054d:
	{
		String_t* L_124 = V_1;
		bool L_125;
		L_125 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_124, _stringLiteral80F4B08AEBD9E1F7CB29DF4B8D1854AEFF320EE3, NULL);
		if (L_125)
		{
			goto IL_08a1;
		}
	}
	{
		goto IL_08ec;
	}

IL_0562:
	{
		String_t* L_126 = V_1;
		bool L_127;
		L_127 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_126, _stringLiteral0557268B1F1E424D0A902F3EEDF716875C8D4BAD, NULL);
		if (L_127)
		{
			goto IL_08b5;
		}
	}
	{
		goto IL_08ec;
	}

IL_0577:
	{
		String_t* L_128 = V_1;
		bool L_129;
		L_129 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_128, _stringLiteralAD41E9EAC27A83BCE636034F0ECF81B657AC0072, NULL);
		if (L_129)
		{
			goto IL_08c4;
		}
	}
	{
		goto IL_08ec;
	}

IL_058c:
	{
		String_t* L_130 = V_1;
		bool L_131;
		L_131 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_130, _stringLiteral71E7E3565AB61CB4D30030EC7D0A58B6311EACB3, NULL);
		if (L_131)
		{
			goto IL_08d8;
		}
	}
	{
		goto IL_08ec;
	}

IL_05a1:
	{
		// instance.duration = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_132 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_133 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_132);
		float L_134;
		L_134 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_132, L_133);
		MainModule_set_duration_m3B328F1E542EEE7BAE101B309512E0E3B4638B77((&V_0), L_134, NULL);
		// break;
		goto IL_08f2;
	}

IL_05b8:
	{
		// instance.loop = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_135 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_136 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_135);
		bool L_137;
		L_137 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_135, L_136);
		MainModule_set_loop_mB3FC83A6DA8D248D15C53388D6B9B7711ADD89BE((&V_0), L_137, NULL);
		// break;
		goto IL_08f2;
	}

IL_05cf:
	{
		// instance.prewarm = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_138 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_139 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_138);
		bool L_140;
		L_140 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_138, L_139);
		MainModule_set_prewarm_m99964C46DE65B6797E9FD6A5CAF19E0B150D99F6((&V_0), L_140, NULL);
		// break;
		goto IL_08f2;
	}

IL_05e6:
	{
		// instance.startDelay = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_141 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_142 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_141);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_143;
		L_143 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_141, L_142);
		MainModule_set_startDelay_mFE9F9E7F79978F670904789F7F55B96F42434F69((&V_0), L_143, NULL);
		// break;
		goto IL_08f2;
	}

IL_05fd:
	{
		// instance.startDelayMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_144 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_145 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_144);
		float L_146;
		L_146 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_144, L_145);
		MainModule_set_startDelayMultiplier_m1EAE44047D0E5FC4FDE7AF3F8A517D23B9CECC2A((&V_0), L_146, NULL);
		// break;
		goto IL_08f2;
	}

IL_0614:
	{
		// instance.startLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_147 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_148 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_147);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_149;
		L_149 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_147, L_148);
		MainModule_set_startLifetime_mDFC2433853CB12C0C93C8BF16FEDB4EA2E0B3514((&V_0), L_149, NULL);
		// break;
		goto IL_08f2;
	}

IL_062b:
	{
		// instance.startLifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_150 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_151 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_150);
		float L_152;
		L_152 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_150, L_151);
		MainModule_set_startLifetimeMultiplier_mFD2343C9B1E172A7C2D13658CA36270C3FCA6D85((&V_0), L_152, NULL);
		// break;
		goto IL_08f2;
	}

IL_0642:
	{
		// instance.startSpeed = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_153 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_154 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_153);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_155;
		L_155 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_153, L_154);
		MainModule_set_startSpeed_mE6041E4BA54F01117AF6B81B1E53C5C9C669AC75((&V_0), L_155, NULL);
		// break;
		goto IL_08f2;
	}

IL_0659:
	{
		// instance.startSpeedMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_156 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_157 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_156);
		float L_158;
		L_158 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_156, L_157);
		MainModule_set_startSpeedMultiplier_m297519F08A0F1C70A7972AE6813DC06BFDA89074((&V_0), L_158, NULL);
		// break;
		goto IL_08f2;
	}

IL_0670:
	{
		// instance.startSize3D = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_159 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_160 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_159);
		bool L_161;
		L_161 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_159, L_160);
		MainModule_set_startSize3D_mD90CDAA22BD7859762B8A7D89FB8AB234206C4E6((&V_0), L_161, NULL);
		// break;
		goto IL_08f2;
	}

IL_0687:
	{
		// instance.startSize = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_162 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_163 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_162);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_164;
		L_164 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_162, L_163);
		MainModule_set_startSize_m44C3A39EAF1AE9A526A126D93160128223BE827B((&V_0), L_164, NULL);
		// break;
		goto IL_08f2;
	}

IL_069e:
	{
		// instance.startSizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_165 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_166 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_165);
		float L_167;
		L_167 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_165, L_166);
		MainModule_set_startSizeMultiplier_m4561E105FF6755975C4ABBF4C62C8F338685EE02((&V_0), L_167, NULL);
		// break;
		goto IL_08f2;
	}

IL_06b5:
	{
		// instance.startSizeX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_168 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_169 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_168);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_170;
		L_170 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_168, L_169);
		MainModule_set_startSizeX_m5F3F00611409B616D7B5B05EF3A6D7C35448C445((&V_0), L_170, NULL);
		// break;
		goto IL_08f2;
	}

IL_06cc:
	{
		// instance.startSizeXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_171 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_172 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_171);
		float L_173;
		L_173 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_171, L_172);
		MainModule_set_startSizeXMultiplier_m97EF3367ABCA54443AB7E2DF038E1208CAFEDCC6((&V_0), L_173, NULL);
		// break;
		goto IL_08f2;
	}

IL_06e3:
	{
		// instance.startSizeY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_174 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_175 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_174);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_176;
		L_176 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_174, L_175);
		MainModule_set_startSizeY_mAA04D165042FFAEC3F17672ED84F066A8295C0FD((&V_0), L_176, NULL);
		// break;
		goto IL_08f2;
	}

IL_06fa:
	{
		// instance.startSizeYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_177 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_178 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_177);
		float L_179;
		L_179 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_177, L_178);
		MainModule_set_startSizeYMultiplier_m1100BB5A064C9F3638F2F7867EC404B95AC59215((&V_0), L_179, NULL);
		// break;
		goto IL_08f2;
	}

IL_0711:
	{
		// instance.startSizeZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_180 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_181 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_180);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_182;
		L_182 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_180, L_181);
		MainModule_set_startSizeZ_mA1D0B1E2E9505DFDB42622E575FD91134ABE9A50((&V_0), L_182, NULL);
		// break;
		goto IL_08f2;
	}

IL_0728:
	{
		// instance.startSizeZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_183 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_184 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_183);
		float L_185;
		L_185 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_183, L_184);
		MainModule_set_startSizeZMultiplier_mE3AAF9C6580F32E7D986147CA060B243E392B9E0((&V_0), L_185, NULL);
		// break;
		goto IL_08f2;
	}

IL_073f:
	{
		// instance.startRotation3D = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_186 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_187 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_186);
		bool L_188;
		L_188 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_186, L_187);
		MainModule_set_startRotation3D_m0A38498100EF660B71B29BB3C58F1DD1BF6C79E7((&V_0), L_188, NULL);
		// break;
		goto IL_08f2;
	}

IL_0756:
	{
		// instance.startRotation = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_189 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_190 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_189);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_191;
		L_191 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_189, L_190);
		MainModule_set_startRotation_m8D09FD13401B188EC3C20C489CFA1EDDA3B43079((&V_0), L_191, NULL);
		// break;
		goto IL_08f2;
	}

IL_076d:
	{
		// instance.startRotationMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_192 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_193 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_192);
		float L_194;
		L_194 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_192, L_193);
		MainModule_set_startRotationMultiplier_m7C4E9C38104D2F87EB57D68B4F0C14110DB6E8B1((&V_0), L_194, NULL);
		// break;
		goto IL_08f2;
	}

IL_0784:
	{
		// instance.startRotationX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_195 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_196 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_195);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_197;
		L_197 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_195, L_196);
		MainModule_set_startRotationX_m2BF2E2E87F0F199ADB04ADBD719F17B762956CA9((&V_0), L_197, NULL);
		// break;
		goto IL_08f2;
	}

IL_079b:
	{
		// instance.startRotationXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_198 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_199 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_198);
		float L_200;
		L_200 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_198, L_199);
		MainModule_set_startRotationXMultiplier_m23EED38F1C33CCB5992536B87714C8D03ABC13C6((&V_0), L_200, NULL);
		// break;
		goto IL_08f2;
	}

IL_07b2:
	{
		// instance.startRotationY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_201 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_202 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_201);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_203;
		L_203 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_201, L_202);
		MainModule_set_startRotationY_m3BAC5A35565F302246EC5DD52F0410773C24480C((&V_0), L_203, NULL);
		// break;
		goto IL_08f2;
	}

IL_07c9:
	{
		// instance.startRotationYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_204 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_205 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_204);
		float L_206;
		L_206 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_204, L_205);
		MainModule_set_startRotationYMultiplier_mADF58CC09C5F1998E2B8DF4D2766087CBE869834((&V_0), L_206, NULL);
		// break;
		goto IL_08f2;
	}

IL_07e0:
	{
		// instance.startRotationZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_207 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_208 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_207);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_209;
		L_209 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_207, L_208);
		MainModule_set_startRotationZ_m69F340DE9D9C4D402E514592DDD226ACC7C4B0AE((&V_0), L_209, NULL);
		// break;
		goto IL_08f2;
	}

IL_07f7:
	{
		// instance.startRotationZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_210 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_211 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_210);
		float L_212;
		L_212 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_210, L_211);
		MainModule_set_startRotationZMultiplier_m526C944907FADC856F24E12FAA983F463058213F((&V_0), L_212, NULL);
		// break;
		goto IL_08f2;
	}

IL_080e:
	{
		// instance.flipRotation = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_213 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_214 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_213);
		float L_215;
		L_215 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_213, L_214);
		MainModule_set_flipRotation_m638195126B6F330703BA953F190D58B419BB5EE7((&V_0), L_215, NULL);
		// break;
		goto IL_08f2;
	}

IL_0825:
	{
		// instance.flipRotation = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_216 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_217 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_216);
		float L_218;
		L_218 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_216, L_217);
		MainModule_set_flipRotation_m638195126B6F330703BA953F190D58B419BB5EE7((&V_0), L_218, NULL);
		// break;
		goto IL_08f2;
	}

IL_083c:
	{
		// instance.startColor = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_219 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_220 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_219);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_221;
		L_221 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_219, L_220);
		MainModule_set_startColor_m504911284CAC53A7C1B97B5D01BBDD2FA67D0E7A((&V_0), L_221, NULL);
		// break;
		goto IL_08f2;
	}

IL_0853:
	{
		// instance.gravityModifier = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_222 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_223 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_222);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_224;
		L_224 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_222, L_223);
		MainModule_set_gravityModifier_m398D2C7F10E389C0EA365640A54D2C0C151A42A7((&V_0), L_224, NULL);
		// break;
		goto IL_08f2;
	}

IL_086a:
	{
		// instance.gravityModifierMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_225 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_226 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_225);
		float L_227;
		L_227 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_225, L_226);
		MainModule_set_gravityModifierMultiplier_m644D0D04BBE1D4509B1CDB0BBC36D53E02906537((&V_0), L_227, NULL);
		// break;
		goto IL_08f2;
	}

IL_087e:
	{
		// instance.simulationSpace = reader.Read<UnityEngine.ParticleSystemSimulationSpace>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_228 = ___reader0;
		NullCheck(L_228);
		int32_t L_229;
		L_229 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m7EC146C35647387DD36351685C0DD1C98B6333D8_RuntimeMethod_var, L_228);
		MainModule_set_simulationSpace_m23D533E66925AABF0C336894FBF2FF03FF3891BC((&V_0), L_229, NULL);
		// break;
		goto IL_08f2;
	}

IL_088d:
	{
		// instance.customSimulationSpace = reader.Read<UnityEngine.Transform>(ES3Type_Transform.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_230 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_231 = ((ES3Type_Transform_tC86C7755D546F3D4A97553E19C31F9E025AB13A7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Transform_tC86C7755D546F3D4A97553E19C31F9E025AB13A7_il2cpp_TypeInfo_var))->___Instance_15;
		NullCheck(L_230);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_232;
		L_232 = GenericVirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m76F72323D090F7BFE241E75E77F0B53A709F00CD_RuntimeMethod_var, L_230, L_231);
		MainModule_set_customSimulationSpace_m89F1A54DF8D2A2F02C5996F7DDD19A6FB1678B16((&V_0), L_232, NULL);
		// break;
		goto IL_08f2;
	}

IL_08a1:
	{
		// instance.simulationSpeed = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_233 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_234 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_233);
		float L_235;
		L_235 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_233, L_234);
		MainModule_set_simulationSpeed_mFB44E06BF3F0D423636A6F37642CCC5722EBE0C6((&V_0), L_235, NULL);
		// break;
		goto IL_08f2;
	}

IL_08b5:
	{
		// instance.scalingMode = reader.Read<UnityEngine.ParticleSystemScalingMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_236 = ___reader0;
		NullCheck(L_236);
		int32_t L_237;
		L_237 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemScalingMode_tEC777C9C63E65B6CE026BBE10DA48F389DAECE72_m5C0DC18BF9CF07934F00ED8758CA9AE729F19106_RuntimeMethod_var, L_236);
		MainModule_set_scalingMode_m08A4399A0E64E5894509084A42BB528BE16A648D((&V_0), L_237, NULL);
		// break;
		goto IL_08f2;
	}

IL_08c4:
	{
		// instance.playOnAwake = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_238 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_239 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_238);
		bool L_240;
		L_240 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_238, L_239);
		MainModule_set_playOnAwake_mC86DBF96156C8783FAC2AD1628529F354FB1C6D8((&V_0), L_240, NULL);
		// break;
		goto IL_08f2;
	}

IL_08d8:
	{
		// instance.maxParticles = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_241 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_242 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_241);
		int32_t L_243;
		L_243 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_241, L_242);
		MainModule_set_maxParticles_mF9E7A56D7E1A528904BE1A8C0E14F15C3AF0F748((&V_0), L_243, NULL);
		// break;
		goto IL_08f2;
	}

IL_08ec:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_244 = ___reader0;
		NullCheck(L_244);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_244);
	}

IL_08f2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_245 = ___reader0;
		NullCheck(L_245);
		String_t* L_246;
		L_246 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_245);
		String_t* L_247 = L_246;
		V_1 = L_247;
		if (L_247)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MainModule::ReadInto<UnityEngine.ParticleSystem/TriggerModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MainModule_ReadInto_TisTriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_m7961B699E3CA4099C92DED42221A95FF03FB99C8_gshared (ES3Type_MainModule_tDAE2E101E0E01EE0D8721A23BB03C5FF5E349CDD* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemScalingMode_tEC777C9C63E65B6CE026BBE10DA48F389DAECE72_m5C0DC18BF9CF07934F00ED8758CA9AE729F19106_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m7EC146C35647387DD36351685C0DD1C98B6333D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m76F72323D090F7BFE241E75E77F0B53A709F00CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Transform_tC86C7755D546F3D4A97553E19C31F9E025AB13A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0557268B1F1E424D0A902F3EEDF716875C8D4BAD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral092025ADD4C03A232510E3C6A7582D01C4AADC44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D519365D01A086962A53AFD0AE6A825AEDA4CD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12ADFC84D6BCCEB460E08E32B4FA7ACC9BEF31B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral234A259825C3E358FC282516D3B56DA588F88F1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E348D1FA98FD45ED7FBF438FF66F0EBA5170C10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D00E0E3B130EDADC4916A7F4EE121274836DE84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E84FA80252B50CE925CA3311D4092D0879CCEE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4030531AEB69C153C44E24CF9424162B6081EF3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEBA0A009EC71316BB5FB5F9325F2B77983D49D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D6E9033064B19B4E5DF4893D7F1FA2F90A3EA47);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DAA87352BD3C06E5CD37671716E661CD9C905D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F2C37C486869159335DA15899C8D3E6BC9420EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71E7E3565AB61CB4D30030EC7D0A58B6311EACB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7570747A640CCECD3BEDFC03012FFDDE81139994);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B398077F661091AB5BC307B2FD6237744E266BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BA557C60FBFACAA46AD1B56F1F3BD5FC6D77A8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80F4B08AEBD9E1F7CB29DF4B8D1854AEFF320EE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81BD0AE28E075333BBE5C03AF9C6FE41A456CE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86C151E04A32460B50ED4AB51B2F5E3BAA1E141E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89088895C148BA6DFD2EFCE1E10956849FCA3C20);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BD6F896E373FE6FCF354A1BB2F73761E86A2EC1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98E0D0561A1C0240F52BDBBD3E637C208BC0E6AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD41E9EAC27A83BCE636034F0ECF81B657AC0072);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCD524F863D44F707F9F38C67C411C87D8015ABF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF4CA9E695899EECA56DFBE6139CEFFF5B2AB373);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC44547C9F1A82EF3B511F2476CAA00D478C61747);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6DB44DDC4F1FACE4AA294C2B9EA59CCD285622D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCE9BB48FE0030E4D5155E4E52A4E2FFF336CBFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD13B00C023BF8F75502A375DF33D4510C9E74E7F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6D2FAB83001A2556F83D8CE5EE6726523ACDC59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7C1E5A51C86BB1E35CAA253F725DAD930175185);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD85D8860B58B2FBFC768DA8E74CA37AC6E2E0D96);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE02BC3B5D408D1BC5E365A7F3C21C2F13AA96125);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE10C83938F4FCAD01303234029171965E31E6376);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE400D63EF13DB808F91D0F080E11A0D69694FC3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF37693EA6379011271A20C40D610ECC1C3BC09E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBB34848436688703C53144CE11D5844C3D5D69F);
		s_Il2CppMethodInitialized = true;
	}
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MainModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*)((MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*)(MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*)UnBox(L_0, MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_il2cpp_TypeInfo_var))));
		goto IL_08f2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-2146163991)))))
		{
			goto IL_0152;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1029031894)))))
		{
			goto IL_00b8;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)715850849)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)295072398)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)135653803))))
		{
			goto IL_0301;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)295072398))))
		{
			goto IL_04e4;
		}
	}
	{
		goto IL_08ec;
	}

IL_0054:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)584683564))))
		{
			goto IL_04ba;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)715850849))))
		{
			goto IL_0340;
		}
	}
	{
		goto IL_08ec;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)799079693)))))
		{
			goto IL_0092;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)758253138))))
		{
			goto IL_0427;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)799079693))))
		{
			goto IL_0283;
		}
	}
	{
		goto IL_08ec;
	}

IL_0092:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)804521684))))
		{
			goto IL_02ec;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)897349200))))
		{
			goto IL_0523;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1029031894))))
		{
			goto IL_03fd;
		}
	}
	{
		goto IL_08ec;
	}

IL_00b8:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)1718450024)))))
		{
			goto IL_0109;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)1457636606)))))
		{
			goto IL_00e3;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)1402700886))))
		{
			goto IL_0355;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)1457636606))))
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_08ec;
	}

IL_00e3:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)1527437181))))
		{
			goto IL_032b;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)1667165089))))
		{
			goto IL_0412;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)1718450024))))
		{
			goto IL_0466;
		}
	}
	{
		goto IL_08ec;
	}

IL_0109:
	{
		uint32_t L_24 = V_2;
		if ((!(((uint32_t)L_24) <= ((uint32_t)((int32_t)1753560193)))))
		{
			goto IL_012c;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)1735227643))))
		{
			goto IL_043c;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)1753560193))))
		{
			goto IL_0538;
		}
	}
	{
		goto IL_08ec;
	}

IL_012c:
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)1768782881))))
		{
			goto IL_0490;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)1841060562))))
		{
			goto IL_04a5;
		}
	}
	{
		uint32_t L_29 = V_2;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)-2146163991))))
		{
			goto IL_036a;
		}
	}
	{
		goto IL_08ec;
	}

IL_0152:
	{
		uint32_t L_30 = V_2;
		if ((!(((uint32_t)L_30) <= ((uint32_t)((int32_t)-1385882840)))))
		{
			goto IL_01ec;
		}
	}
	{
		uint32_t L_31 = V_2;
		if ((!(((uint32_t)L_31) <= ((uint32_t)((int32_t)-1689505682)))))
		{
			goto IL_01a3;
		}
	}
	{
		uint32_t L_32 = V_2;
		if ((!(((uint32_t)L_32) <= ((uint32_t)((int32_t)-1869422109)))))
		{
			goto IL_0188;
		}
	}
	{
		uint32_t L_33 = V_2;
		if ((((int32_t)L_33) == ((int32_t)((int32_t)-2010917879))))
		{
			goto IL_054d;
		}
	}
	{
		uint32_t L_34 = V_2;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)-1869422109))))
		{
			goto IL_02ad;
		}
	}
	{
		goto IL_08ec;
	}

IL_0188:
	{
		uint32_t L_35 = V_2;
		if ((((int32_t)L_35) == ((int32_t)((int32_t)-1721435387))))
		{
			goto IL_0577;
		}
	}
	{
		uint32_t L_36 = V_2;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)-1689505682))))
		{
			goto IL_03be;
		}
	}
	{
		goto IL_08ec;
	}

IL_01a3:
	{
		uint32_t L_37 = V_2;
		if ((!(((uint32_t)L_37) <= ((uint32_t)((int32_t)-1437051040)))))
		{
			goto IL_01c6;
		}
	}
	{
		uint32_t L_38 = V_2;
		if ((((int32_t)L_38) == ((int32_t)((int32_t)-1445929244))))
		{
			goto IL_03d3;
		}
	}
	{
		uint32_t L_39 = V_2;
		if ((((int32_t)L_39) == ((int32_t)((int32_t)-1437051040))))
		{
			goto IL_0451;
		}
	}
	{
		goto IL_08ec;
	}

IL_01c6:
	{
		uint32_t L_40 = V_2;
		if ((((int32_t)L_40) == ((int32_t)((int32_t)-1412374006))))
		{
			goto IL_037f;
		}
	}
	{
		uint32_t L_41 = V_2;
		if ((((int32_t)L_41) == ((int32_t)((int32_t)-1395596387))))
		{
			goto IL_03a9;
		}
	}
	{
		uint32_t L_42 = V_2;
		if ((((int32_t)L_42) == ((int32_t)((int32_t)-1385882840))))
		{
			goto IL_058c;
		}
	}
	{
		goto IL_08ec;
	}

IL_01ec:
	{
		uint32_t L_43 = V_2;
		if ((!(((uint32_t)L_43) <= ((uint32_t)((int32_t)-576970835)))))
		{
			goto IL_023d;
		}
	}
	{
		uint32_t L_44 = V_2;
		if ((!(((uint32_t)L_44) <= ((uint32_t)((int32_t)-1178480433)))))
		{
			goto IL_0217;
		}
	}
	{
		uint32_t L_45 = V_2;
		if ((((int32_t)L_45) == ((int32_t)((int32_t)-1189560255))))
		{
			goto IL_02d7;
		}
	}
	{
		uint32_t L_46 = V_2;
		if ((((int32_t)L_46) == ((int32_t)((int32_t)-1178480433))))
		{
			goto IL_047b;
		}
	}
	{
		goto IL_08ec;
	}

IL_0217:
	{
		uint32_t L_47 = V_2;
		if ((((int32_t)L_47) == ((int32_t)((int32_t)-1060285089))))
		{
			goto IL_04cf;
		}
	}
	{
		uint32_t L_48 = V_2;
		if ((((int32_t)L_48) == ((int32_t)((int32_t)-793132101))))
		{
			goto IL_03e8;
		}
	}
	{
		uint32_t L_49 = V_2;
		if ((((int32_t)L_49) == ((int32_t)((int32_t)-576970835))))
		{
			goto IL_0394;
		}
	}
	{
		goto IL_08ec;
	}

IL_023d:
	{
		uint32_t L_50 = V_2;
		if ((!(((uint32_t)L_50) <= ((uint32_t)((int32_t)-566708729)))))
		{
			goto IL_025d;
		}
	}
	{
		uint32_t L_51 = V_2;
		if ((((int32_t)L_51) == ((int32_t)((int32_t)-571520917))))
		{
			goto IL_0298;
		}
	}
	{
		uint32_t L_52 = V_2;
		if ((((int32_t)L_52) == ((int32_t)((int32_t)-566708729))))
		{
			goto IL_050e;
		}
	}
	{
		goto IL_08ec;
	}

IL_025d:
	{
		uint32_t L_53 = V_2;
		if ((((int32_t)L_53) == ((int32_t)((int32_t)-564410384))))
		{
			goto IL_04f9;
		}
	}
	{
		uint32_t L_54 = V_2;
		if ((((int32_t)L_54) == ((int32_t)((int32_t)-265401527))))
		{
			goto IL_0562;
		}
	}
	{
		uint32_t L_55 = V_2;
		if ((((int32_t)L_55) == ((int32_t)((int32_t)-234291494))))
		{
			goto IL_0316;
		}
	}
	{
		goto IL_08ec;
	}

IL_0283:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteral7BA557C60FBFACAA46AD1B56F1F3BD5FC6D77A8D, NULL);
		if (L_57)
		{
			goto IL_05a1;
		}
	}
	{
		goto IL_08ec;
	}

IL_0298:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteralE02BC3B5D408D1BC5E365A7F3C21C2F13AA96125, NULL);
		if (L_59)
		{
			goto IL_05b8;
		}
	}
	{
		goto IL_08ec;
	}

IL_02ad:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteralD85D8860B58B2FBFC768DA8E74CA37AC6E2E0D96, NULL);
		if (L_61)
		{
			goto IL_05cf;
		}
	}
	{
		goto IL_08ec;
	}

IL_02c2:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteralE400D63EF13DB808F91D0F080E11A0D69694FC3D, NULL);
		if (L_63)
		{
			goto IL_05e6;
		}
	}
	{
		goto IL_08ec;
	}

IL_02d7:
	{
		String_t* L_64 = V_1;
		bool L_65;
		L_65 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_64, _stringLiteralC6DB44DDC4F1FACE4AA294C2B9EA59CCD285622D, NULL);
		if (L_65)
		{
			goto IL_05fd;
		}
	}
	{
		goto IL_08ec;
	}

IL_02ec:
	{
		String_t* L_66 = V_1;
		bool L_67;
		L_67 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_66, _stringLiteral5DAA87352BD3C06E5CD37671716E661CD9C905D6, NULL);
		if (L_67)
		{
			goto IL_0614;
		}
	}
	{
		goto IL_08ec;
	}

IL_0301:
	{
		String_t* L_68 = V_1;
		bool L_69;
		L_69 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_68, _stringLiteralBF4CA9E695899EECA56DFBE6139CEFFF5B2AB373, NULL);
		if (L_69)
		{
			goto IL_062b;
		}
	}
	{
		goto IL_08ec;
	}

IL_0316:
	{
		String_t* L_70 = V_1;
		bool L_71;
		L_71 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_70, _stringLiteralBCD524F863D44F707F9F38C67C411C87D8015ABF, NULL);
		if (L_71)
		{
			goto IL_0642;
		}
	}
	{
		goto IL_08ec;
	}

IL_032b:
	{
		String_t* L_72 = V_1;
		bool L_73;
		L_73 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_72, _stringLiteralD7C1E5A51C86BB1E35CAA253F725DAD930175185, NULL);
		if (L_73)
		{
			goto IL_0659;
		}
	}
	{
		goto IL_08ec;
	}

IL_0340:
	{
		String_t* L_74 = V_1;
		bool L_75;
		L_75 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_74, _stringLiteral0D519365D01A086962A53AFD0AE6A825AEDA4CD0, NULL);
		if (L_75)
		{
			goto IL_0670;
		}
	}
	{
		goto IL_08ec;
	}

IL_0355:
	{
		String_t* L_76 = V_1;
		bool L_77;
		L_77 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_76, _stringLiteral5D6E9033064B19B4E5DF4893D7F1FA2F90A3EA47, NULL);
		if (L_77)
		{
			goto IL_0687;
		}
	}
	{
		goto IL_08ec;
	}

IL_036a:
	{
		String_t* L_78 = V_1;
		bool L_79;
		L_79 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_78, _stringLiteral2E348D1FA98FD45ED7FBF438FF66F0EBA5170C10, NULL);
		if (L_79)
		{
			goto IL_069e;
		}
	}
	{
		goto IL_08ec;
	}

IL_037f:
	{
		String_t* L_80 = V_1;
		bool L_81;
		L_81 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_80, _stringLiteralE10C83938F4FCAD01303234029171965E31E6376, NULL);
		if (L_81)
		{
			goto IL_06b5;
		}
	}
	{
		goto IL_08ec;
	}

IL_0394:
	{
		String_t* L_82 = V_1;
		bool L_83;
		L_83 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_82, _stringLiteral7570747A640CCECD3BEDFC03012FFDDE81139994, NULL);
		if (L_83)
		{
			goto IL_06cc;
		}
	}
	{
		goto IL_08ec;
	}

IL_03a9:
	{
		String_t* L_84 = V_1;
		bool L_85;
		L_85 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_84, _stringLiteralD6D2FAB83001A2556F83D8CE5EE6726523ACDC59, NULL);
		if (L_85)
		{
			goto IL_06e3;
		}
	}
	{
		goto IL_08ec;
	}

IL_03be:
	{
		String_t* L_86 = V_1;
		bool L_87;
		L_87 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_86, _stringLiteral3E84FA80252B50CE925CA3311D4092D0879CCEE1, NULL);
		if (L_87)
		{
			goto IL_06fa;
		}
	}
	{
		goto IL_08ec;
	}

IL_03d3:
	{
		String_t* L_88 = V_1;
		bool L_89;
		L_89 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_88, _stringLiteralCCE9BB48FE0030E4D5155E4E52A4E2FFF336CBFA, NULL);
		if (L_89)
		{
			goto IL_0711;
		}
	}
	{
		goto IL_08ec;
	}

IL_03e8:
	{
		String_t* L_90 = V_1;
		bool L_91;
		L_91 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_90, _stringLiteral8BD6F896E373FE6FCF354A1BB2F73761E86A2EC1, NULL);
		if (L_91)
		{
			goto IL_0728;
		}
	}
	{
		goto IL_08ec;
	}

IL_03fd:
	{
		String_t* L_92 = V_1;
		bool L_93;
		L_93 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_92, _stringLiteral86C151E04A32460B50ED4AB51B2F5E3BAA1E141E, NULL);
		if (L_93)
		{
			goto IL_073f;
		}
	}
	{
		goto IL_08ec;
	}

IL_0412:
	{
		String_t* L_94 = V_1;
		bool L_95;
		L_95 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_94, _stringLiteralD13B00C023BF8F75502A375DF33D4510C9E74E7F, NULL);
		if (L_95)
		{
			goto IL_0756;
		}
	}
	{
		goto IL_08ec;
	}

IL_0427:
	{
		String_t* L_96 = V_1;
		bool L_97;
		L_97 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_96, _stringLiteralF37693EA6379011271A20C40D610ECC1C3BC09E6, NULL);
		if (L_97)
		{
			goto IL_076d;
		}
	}
	{
		goto IL_08ec;
	}

IL_043c:
	{
		String_t* L_98 = V_1;
		bool L_99;
		L_99 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_98, _stringLiteral3D00E0E3B130EDADC4916A7F4EE121274836DE84, NULL);
		if (L_99)
		{
			goto IL_0784;
		}
	}
	{
		goto IL_08ec;
	}

IL_0451:
	{
		String_t* L_100 = V_1;
		bool L_101;
		L_101 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_100, _stringLiteralC44547C9F1A82EF3B511F2476CAA00D478C61747, NULL);
		if (L_101)
		{
			goto IL_079b;
		}
	}
	{
		goto IL_08ec;
	}

IL_0466:
	{
		String_t* L_102 = V_1;
		bool L_103;
		L_103 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_102, _stringLiteral89088895C148BA6DFD2EFCE1E10956849FCA3C20, NULL);
		if (L_103)
		{
			goto IL_07b2;
		}
	}
	{
		goto IL_08ec;
	}

IL_047b:
	{
		String_t* L_104 = V_1;
		bool L_105;
		L_105 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_104, _stringLiteral98E0D0561A1C0240F52BDBBD3E637C208BC0E6AB, NULL);
		if (L_105)
		{
			goto IL_07c9;
		}
	}
	{
		goto IL_08ec;
	}

IL_0490:
	{
		String_t* L_106 = V_1;
		bool L_107;
		L_107 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_106, _stringLiteral5BEBA0A009EC71316BB5FB5F9325F2B77983D49D, NULL);
		if (L_107)
		{
			goto IL_07e0;
		}
	}
	{
		goto IL_08ec;
	}

IL_04a5:
	{
		String_t* L_108 = V_1;
		bool L_109;
		L_109 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_108, _stringLiteral7B398077F661091AB5BC307B2FD6237744E266BA, NULL);
		if (L_109)
		{
			goto IL_07f7;
		}
	}
	{
		goto IL_08ec;
	}

IL_04ba:
	{
		String_t* L_110 = V_1;
		bool L_111;
		L_111 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_110, _stringLiteral12ADFC84D6BCCEB460E08E32B4FA7ACC9BEF31B2, NULL);
		if (L_111)
		{
			goto IL_080e;
		}
	}
	{
		goto IL_08ec;
	}

IL_04cf:
	{
		String_t* L_112 = V_1;
		bool L_113;
		L_113 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_112, _stringLiteral234A259825C3E358FC282516D3B56DA588F88F1E, NULL);
		if (L_113)
		{
			goto IL_0825;
		}
	}
	{
		goto IL_08ec;
	}

IL_04e4:
	{
		String_t* L_114 = V_1;
		bool L_115;
		L_115 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_114, _stringLiteral81BD0AE28E075333BBE5C03AF9C6FE41A456CE9D, NULL);
		if (L_115)
		{
			goto IL_083c;
		}
	}
	{
		goto IL_08ec;
	}

IL_04f9:
	{
		String_t* L_116 = V_1;
		bool L_117;
		L_117 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_116, _stringLiteral4030531AEB69C153C44E24CF9424162B6081EF3A, NULL);
		if (L_117)
		{
			goto IL_0853;
		}
	}
	{
		goto IL_08ec;
	}

IL_050e:
	{
		String_t* L_118 = V_1;
		bool L_119;
		L_119 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_118, _stringLiteral092025ADD4C03A232510E3C6A7582D01C4AADC44, NULL);
		if (L_119)
		{
			goto IL_086a;
		}
	}
	{
		goto IL_08ec;
	}

IL_0523:
	{
		String_t* L_120 = V_1;
		bool L_121;
		L_121 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_120, _stringLiteralFBB34848436688703C53144CE11D5844C3D5D69F, NULL);
		if (L_121)
		{
			goto IL_087e;
		}
	}
	{
		goto IL_08ec;
	}

IL_0538:
	{
		String_t* L_122 = V_1;
		bool L_123;
		L_123 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_122, _stringLiteral6F2C37C486869159335DA15899C8D3E6BC9420EC, NULL);
		if (L_123)
		{
			goto IL_088d;
		}
	}
	{
		goto IL_08ec;
	}

IL_054d:
	{
		String_t* L_124 = V_1;
		bool L_125;
		L_125 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_124, _stringLiteral80F4B08AEBD9E1F7CB29DF4B8D1854AEFF320EE3, NULL);
		if (L_125)
		{
			goto IL_08a1;
		}
	}
	{
		goto IL_08ec;
	}

IL_0562:
	{
		String_t* L_126 = V_1;
		bool L_127;
		L_127 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_126, _stringLiteral0557268B1F1E424D0A902F3EEDF716875C8D4BAD, NULL);
		if (L_127)
		{
			goto IL_08b5;
		}
	}
	{
		goto IL_08ec;
	}

IL_0577:
	{
		String_t* L_128 = V_1;
		bool L_129;
		L_129 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_128, _stringLiteralAD41E9EAC27A83BCE636034F0ECF81B657AC0072, NULL);
		if (L_129)
		{
			goto IL_08c4;
		}
	}
	{
		goto IL_08ec;
	}

IL_058c:
	{
		String_t* L_130 = V_1;
		bool L_131;
		L_131 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_130, _stringLiteral71E7E3565AB61CB4D30030EC7D0A58B6311EACB3, NULL);
		if (L_131)
		{
			goto IL_08d8;
		}
	}
	{
		goto IL_08ec;
	}

IL_05a1:
	{
		// instance.duration = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_132 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_133 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_132);
		float L_134;
		L_134 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_132, L_133);
		MainModule_set_duration_m3B328F1E542EEE7BAE101B309512E0E3B4638B77((&V_0), L_134, NULL);
		// break;
		goto IL_08f2;
	}

IL_05b8:
	{
		// instance.loop = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_135 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_136 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_135);
		bool L_137;
		L_137 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_135, L_136);
		MainModule_set_loop_mB3FC83A6DA8D248D15C53388D6B9B7711ADD89BE((&V_0), L_137, NULL);
		// break;
		goto IL_08f2;
	}

IL_05cf:
	{
		// instance.prewarm = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_138 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_139 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_138);
		bool L_140;
		L_140 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_138, L_139);
		MainModule_set_prewarm_m99964C46DE65B6797E9FD6A5CAF19E0B150D99F6((&V_0), L_140, NULL);
		// break;
		goto IL_08f2;
	}

IL_05e6:
	{
		// instance.startDelay = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_141 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_142 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_141);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_143;
		L_143 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_141, L_142);
		MainModule_set_startDelay_mFE9F9E7F79978F670904789F7F55B96F42434F69((&V_0), L_143, NULL);
		// break;
		goto IL_08f2;
	}

IL_05fd:
	{
		// instance.startDelayMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_144 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_145 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_144);
		float L_146;
		L_146 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_144, L_145);
		MainModule_set_startDelayMultiplier_m1EAE44047D0E5FC4FDE7AF3F8A517D23B9CECC2A((&V_0), L_146, NULL);
		// break;
		goto IL_08f2;
	}

IL_0614:
	{
		// instance.startLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_147 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_148 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_147);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_149;
		L_149 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_147, L_148);
		MainModule_set_startLifetime_mDFC2433853CB12C0C93C8BF16FEDB4EA2E0B3514((&V_0), L_149, NULL);
		// break;
		goto IL_08f2;
	}

IL_062b:
	{
		// instance.startLifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_150 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_151 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_150);
		float L_152;
		L_152 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_150, L_151);
		MainModule_set_startLifetimeMultiplier_mFD2343C9B1E172A7C2D13658CA36270C3FCA6D85((&V_0), L_152, NULL);
		// break;
		goto IL_08f2;
	}

IL_0642:
	{
		// instance.startSpeed = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_153 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_154 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_153);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_155;
		L_155 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_153, L_154);
		MainModule_set_startSpeed_mE6041E4BA54F01117AF6B81B1E53C5C9C669AC75((&V_0), L_155, NULL);
		// break;
		goto IL_08f2;
	}

IL_0659:
	{
		// instance.startSpeedMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_156 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_157 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_156);
		float L_158;
		L_158 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_156, L_157);
		MainModule_set_startSpeedMultiplier_m297519F08A0F1C70A7972AE6813DC06BFDA89074((&V_0), L_158, NULL);
		// break;
		goto IL_08f2;
	}

IL_0670:
	{
		// instance.startSize3D = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_159 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_160 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_159);
		bool L_161;
		L_161 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_159, L_160);
		MainModule_set_startSize3D_mD90CDAA22BD7859762B8A7D89FB8AB234206C4E6((&V_0), L_161, NULL);
		// break;
		goto IL_08f2;
	}

IL_0687:
	{
		// instance.startSize = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_162 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_163 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_162);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_164;
		L_164 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_162, L_163);
		MainModule_set_startSize_m44C3A39EAF1AE9A526A126D93160128223BE827B((&V_0), L_164, NULL);
		// break;
		goto IL_08f2;
	}

IL_069e:
	{
		// instance.startSizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_165 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_166 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_165);
		float L_167;
		L_167 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_165, L_166);
		MainModule_set_startSizeMultiplier_m4561E105FF6755975C4ABBF4C62C8F338685EE02((&V_0), L_167, NULL);
		// break;
		goto IL_08f2;
	}

IL_06b5:
	{
		// instance.startSizeX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_168 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_169 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_168);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_170;
		L_170 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_168, L_169);
		MainModule_set_startSizeX_m5F3F00611409B616D7B5B05EF3A6D7C35448C445((&V_0), L_170, NULL);
		// break;
		goto IL_08f2;
	}

IL_06cc:
	{
		// instance.startSizeXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_171 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_172 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_171);
		float L_173;
		L_173 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_171, L_172);
		MainModule_set_startSizeXMultiplier_m97EF3367ABCA54443AB7E2DF038E1208CAFEDCC6((&V_0), L_173, NULL);
		// break;
		goto IL_08f2;
	}

IL_06e3:
	{
		// instance.startSizeY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_174 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_175 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_174);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_176;
		L_176 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_174, L_175);
		MainModule_set_startSizeY_mAA04D165042FFAEC3F17672ED84F066A8295C0FD((&V_0), L_176, NULL);
		// break;
		goto IL_08f2;
	}

IL_06fa:
	{
		// instance.startSizeYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_177 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_178 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_177);
		float L_179;
		L_179 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_177, L_178);
		MainModule_set_startSizeYMultiplier_m1100BB5A064C9F3638F2F7867EC404B95AC59215((&V_0), L_179, NULL);
		// break;
		goto IL_08f2;
	}

IL_0711:
	{
		// instance.startSizeZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_180 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_181 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_180);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_182;
		L_182 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_180, L_181);
		MainModule_set_startSizeZ_mA1D0B1E2E9505DFDB42622E575FD91134ABE9A50((&V_0), L_182, NULL);
		// break;
		goto IL_08f2;
	}

IL_0728:
	{
		// instance.startSizeZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_183 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_184 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_183);
		float L_185;
		L_185 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_183, L_184);
		MainModule_set_startSizeZMultiplier_mE3AAF9C6580F32E7D986147CA060B243E392B9E0((&V_0), L_185, NULL);
		// break;
		goto IL_08f2;
	}

IL_073f:
	{
		// instance.startRotation3D = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_186 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_187 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_186);
		bool L_188;
		L_188 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_186, L_187);
		MainModule_set_startRotation3D_m0A38498100EF660B71B29BB3C58F1DD1BF6C79E7((&V_0), L_188, NULL);
		// break;
		goto IL_08f2;
	}

IL_0756:
	{
		// instance.startRotation = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_189 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_190 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_189);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_191;
		L_191 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_189, L_190);
		MainModule_set_startRotation_m8D09FD13401B188EC3C20C489CFA1EDDA3B43079((&V_0), L_191, NULL);
		// break;
		goto IL_08f2;
	}

IL_076d:
	{
		// instance.startRotationMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_192 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_193 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_192);
		float L_194;
		L_194 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_192, L_193);
		MainModule_set_startRotationMultiplier_m7C4E9C38104D2F87EB57D68B4F0C14110DB6E8B1((&V_0), L_194, NULL);
		// break;
		goto IL_08f2;
	}

IL_0784:
	{
		// instance.startRotationX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_195 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_196 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_195);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_197;
		L_197 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_195, L_196);
		MainModule_set_startRotationX_m2BF2E2E87F0F199ADB04ADBD719F17B762956CA9((&V_0), L_197, NULL);
		// break;
		goto IL_08f2;
	}

IL_079b:
	{
		// instance.startRotationXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_198 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_199 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_198);
		float L_200;
		L_200 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_198, L_199);
		MainModule_set_startRotationXMultiplier_m23EED38F1C33CCB5992536B87714C8D03ABC13C6((&V_0), L_200, NULL);
		// break;
		goto IL_08f2;
	}

IL_07b2:
	{
		// instance.startRotationY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_201 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_202 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_201);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_203;
		L_203 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_201, L_202);
		MainModule_set_startRotationY_m3BAC5A35565F302246EC5DD52F0410773C24480C((&V_0), L_203, NULL);
		// break;
		goto IL_08f2;
	}

IL_07c9:
	{
		// instance.startRotationYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_204 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_205 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_204);
		float L_206;
		L_206 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_204, L_205);
		MainModule_set_startRotationYMultiplier_mADF58CC09C5F1998E2B8DF4D2766087CBE869834((&V_0), L_206, NULL);
		// break;
		goto IL_08f2;
	}

IL_07e0:
	{
		// instance.startRotationZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_207 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_208 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_207);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_209;
		L_209 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_207, L_208);
		MainModule_set_startRotationZ_m69F340DE9D9C4D402E514592DDD226ACC7C4B0AE((&V_0), L_209, NULL);
		// break;
		goto IL_08f2;
	}

IL_07f7:
	{
		// instance.startRotationZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_210 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_211 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_210);
		float L_212;
		L_212 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_210, L_211);
		MainModule_set_startRotationZMultiplier_m526C944907FADC856F24E12FAA983F463058213F((&V_0), L_212, NULL);
		// break;
		goto IL_08f2;
	}

IL_080e:
	{
		// instance.flipRotation = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_213 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_214 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_213);
		float L_215;
		L_215 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_213, L_214);
		MainModule_set_flipRotation_m638195126B6F330703BA953F190D58B419BB5EE7((&V_0), L_215, NULL);
		// break;
		goto IL_08f2;
	}

IL_0825:
	{
		// instance.flipRotation = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_216 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_217 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_216);
		float L_218;
		L_218 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_216, L_217);
		MainModule_set_flipRotation_m638195126B6F330703BA953F190D58B419BB5EE7((&V_0), L_218, NULL);
		// break;
		goto IL_08f2;
	}

IL_083c:
	{
		// instance.startColor = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_219 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_220 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_219);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_221;
		L_221 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_219, L_220);
		MainModule_set_startColor_m504911284CAC53A7C1B97B5D01BBDD2FA67D0E7A((&V_0), L_221, NULL);
		// break;
		goto IL_08f2;
	}

IL_0853:
	{
		// instance.gravityModifier = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_222 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_223 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_222);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_224;
		L_224 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_222, L_223);
		MainModule_set_gravityModifier_m398D2C7F10E389C0EA365640A54D2C0C151A42A7((&V_0), L_224, NULL);
		// break;
		goto IL_08f2;
	}

IL_086a:
	{
		// instance.gravityModifierMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_225 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_226 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_225);
		float L_227;
		L_227 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_225, L_226);
		MainModule_set_gravityModifierMultiplier_m644D0D04BBE1D4509B1CDB0BBC36D53E02906537((&V_0), L_227, NULL);
		// break;
		goto IL_08f2;
	}

IL_087e:
	{
		// instance.simulationSpace = reader.Read<UnityEngine.ParticleSystemSimulationSpace>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_228 = ___reader0;
		NullCheck(L_228);
		int32_t L_229;
		L_229 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m7EC146C35647387DD36351685C0DD1C98B6333D8_RuntimeMethod_var, L_228);
		MainModule_set_simulationSpace_m23D533E66925AABF0C336894FBF2FF03FF3891BC((&V_0), L_229, NULL);
		// break;
		goto IL_08f2;
	}

IL_088d:
	{
		// instance.customSimulationSpace = reader.Read<UnityEngine.Transform>(ES3Type_Transform.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_230 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_231 = ((ES3Type_Transform_tC86C7755D546F3D4A97553E19C31F9E025AB13A7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Transform_tC86C7755D546F3D4A97553E19C31F9E025AB13A7_il2cpp_TypeInfo_var))->___Instance_15;
		NullCheck(L_230);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_232;
		L_232 = GenericVirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m76F72323D090F7BFE241E75E77F0B53A709F00CD_RuntimeMethod_var, L_230, L_231);
		MainModule_set_customSimulationSpace_m89F1A54DF8D2A2F02C5996F7DDD19A6FB1678B16((&V_0), L_232, NULL);
		// break;
		goto IL_08f2;
	}

IL_08a1:
	{
		// instance.simulationSpeed = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_233 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_234 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_233);
		float L_235;
		L_235 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_233, L_234);
		MainModule_set_simulationSpeed_mFB44E06BF3F0D423636A6F37642CCC5722EBE0C6((&V_0), L_235, NULL);
		// break;
		goto IL_08f2;
	}

IL_08b5:
	{
		// instance.scalingMode = reader.Read<UnityEngine.ParticleSystemScalingMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_236 = ___reader0;
		NullCheck(L_236);
		int32_t L_237;
		L_237 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemScalingMode_tEC777C9C63E65B6CE026BBE10DA48F389DAECE72_m5C0DC18BF9CF07934F00ED8758CA9AE729F19106_RuntimeMethod_var, L_236);
		MainModule_set_scalingMode_m08A4399A0E64E5894509084A42BB528BE16A648D((&V_0), L_237, NULL);
		// break;
		goto IL_08f2;
	}

IL_08c4:
	{
		// instance.playOnAwake = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_238 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_239 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_238);
		bool L_240;
		L_240 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_238, L_239);
		MainModule_set_playOnAwake_mC86DBF96156C8783FAC2AD1628529F354FB1C6D8((&V_0), L_240, NULL);
		// break;
		goto IL_08f2;
	}

IL_08d8:
	{
		// instance.maxParticles = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_241 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_242 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_241);
		int32_t L_243;
		L_243 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_241, L_242);
		MainModule_set_maxParticles_mF9E7A56D7E1A528904BE1A8C0E14F15C3AF0F748((&V_0), L_243, NULL);
		// break;
		goto IL_08f2;
	}

IL_08ec:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_244 = ___reader0;
		NullCheck(L_244);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_244);
	}

IL_08f2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_245 = ___reader0;
		NullCheck(L_245);
		String_t* L_246;
		L_246 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_245);
		String_t* L_247 = L_246;
		V_1 = L_247;
		if (L_247)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MainModule::ReadInto<UnityEngine.ParticleSystem/VelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MainModule_ReadInto_TisVelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_mF737752BDE81E13E35D9281D3BCEFBC9543EF61D_gshared (ES3Type_MainModule_tDAE2E101E0E01EE0D8721A23BB03C5FF5E349CDD* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemScalingMode_tEC777C9C63E65B6CE026BBE10DA48F389DAECE72_m5C0DC18BF9CF07934F00ED8758CA9AE729F19106_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m7EC146C35647387DD36351685C0DD1C98B6333D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m76F72323D090F7BFE241E75E77F0B53A709F00CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Transform_tC86C7755D546F3D4A97553E19C31F9E025AB13A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0557268B1F1E424D0A902F3EEDF716875C8D4BAD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral092025ADD4C03A232510E3C6A7582D01C4AADC44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D519365D01A086962A53AFD0AE6A825AEDA4CD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12ADFC84D6BCCEB460E08E32B4FA7ACC9BEF31B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral234A259825C3E358FC282516D3B56DA588F88F1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E348D1FA98FD45ED7FBF438FF66F0EBA5170C10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D00E0E3B130EDADC4916A7F4EE121274836DE84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E84FA80252B50CE925CA3311D4092D0879CCEE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4030531AEB69C153C44E24CF9424162B6081EF3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEBA0A009EC71316BB5FB5F9325F2B77983D49D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D6E9033064B19B4E5DF4893D7F1FA2F90A3EA47);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DAA87352BD3C06E5CD37671716E661CD9C905D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F2C37C486869159335DA15899C8D3E6BC9420EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71E7E3565AB61CB4D30030EC7D0A58B6311EACB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7570747A640CCECD3BEDFC03012FFDDE81139994);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B398077F661091AB5BC307B2FD6237744E266BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BA557C60FBFACAA46AD1B56F1F3BD5FC6D77A8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80F4B08AEBD9E1F7CB29DF4B8D1854AEFF320EE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81BD0AE28E075333BBE5C03AF9C6FE41A456CE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86C151E04A32460B50ED4AB51B2F5E3BAA1E141E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89088895C148BA6DFD2EFCE1E10956849FCA3C20);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BD6F896E373FE6FCF354A1BB2F73761E86A2EC1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98E0D0561A1C0240F52BDBBD3E637C208BC0E6AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD41E9EAC27A83BCE636034F0ECF81B657AC0072);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCD524F863D44F707F9F38C67C411C87D8015ABF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF4CA9E695899EECA56DFBE6139CEFFF5B2AB373);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC44547C9F1A82EF3B511F2476CAA00D478C61747);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6DB44DDC4F1FACE4AA294C2B9EA59CCD285622D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCE9BB48FE0030E4D5155E4E52A4E2FFF336CBFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD13B00C023BF8F75502A375DF33D4510C9E74E7F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6D2FAB83001A2556F83D8CE5EE6726523ACDC59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7C1E5A51C86BB1E35CAA253F725DAD930175185);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD85D8860B58B2FBFC768DA8E74CA37AC6E2E0D96);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE02BC3B5D408D1BC5E365A7F3C21C2F13AA96125);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE10C83938F4FCAD01303234029171965E31E6376);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE400D63EF13DB808F91D0F080E11A0D69694FC3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF37693EA6379011271A20C40D610ECC1C3BC09E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBB34848436688703C53144CE11D5844C3D5D69F);
		s_Il2CppMethodInitialized = true;
	}
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MainModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*)((MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*)(MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9*)UnBox(L_0, MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_il2cpp_TypeInfo_var))));
		goto IL_08f2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-2146163991)))))
		{
			goto IL_0152;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1029031894)))))
		{
			goto IL_00b8;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)715850849)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)295072398)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)135653803))))
		{
			goto IL_0301;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)295072398))))
		{
			goto IL_04e4;
		}
	}
	{
		goto IL_08ec;
	}

IL_0054:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)584683564))))
		{
			goto IL_04ba;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)715850849))))
		{
			goto IL_0340;
		}
	}
	{
		goto IL_08ec;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)799079693)))))
		{
			goto IL_0092;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)758253138))))
		{
			goto IL_0427;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)799079693))))
		{
			goto IL_0283;
		}
	}
	{
		goto IL_08ec;
	}

IL_0092:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)804521684))))
		{
			goto IL_02ec;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)897349200))))
		{
			goto IL_0523;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1029031894))))
		{
			goto IL_03fd;
		}
	}
	{
		goto IL_08ec;
	}

IL_00b8:
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)1718450024)))))
		{
			goto IL_0109;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)1457636606)))))
		{
			goto IL_00e3;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)1402700886))))
		{
			goto IL_0355;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)1457636606))))
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_08ec;
	}

IL_00e3:
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)1527437181))))
		{
			goto IL_032b;
		}
	}
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)1667165089))))
		{
			goto IL_0412;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)1718450024))))
		{
			goto IL_0466;
		}
	}
	{
		goto IL_08ec;
	}

IL_0109:
	{
		uint32_t L_24 = V_2;
		if ((!(((uint32_t)L_24) <= ((uint32_t)((int32_t)1753560193)))))
		{
			goto IL_012c;
		}
	}
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)1735227643))))
		{
			goto IL_043c;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)1753560193))))
		{
			goto IL_0538;
		}
	}
	{
		goto IL_08ec;
	}

IL_012c:
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)1768782881))))
		{
			goto IL_0490;
		}
	}
	{
		uint32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)1841060562))))
		{
			goto IL_04a5;
		}
	}
	{
		uint32_t L_29 = V_2;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)-2146163991))))
		{
			goto IL_036a;
		}
	}
	{
		goto IL_08ec;
	}

IL_0152:
	{
		uint32_t L_30 = V_2;
		if ((!(((uint32_t)L_30) <= ((uint32_t)((int32_t)-1385882840)))))
		{
			goto IL_01ec;
		}
	}
	{
		uint32_t L_31 = V_2;
		if ((!(((uint32_t)L_31) <= ((uint32_t)((int32_t)-1689505682)))))
		{
			goto IL_01a3;
		}
	}
	{
		uint32_t L_32 = V_2;
		if ((!(((uint32_t)L_32) <= ((uint32_t)((int32_t)-1869422109)))))
		{
			goto IL_0188;
		}
	}
	{
		uint32_t L_33 = V_2;
		if ((((int32_t)L_33) == ((int32_t)((int32_t)-2010917879))))
		{
			goto IL_054d;
		}
	}
	{
		uint32_t L_34 = V_2;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)-1869422109))))
		{
			goto IL_02ad;
		}
	}
	{
		goto IL_08ec;
	}

IL_0188:
	{
		uint32_t L_35 = V_2;
		if ((((int32_t)L_35) == ((int32_t)((int32_t)-1721435387))))
		{
			goto IL_0577;
		}
	}
	{
		uint32_t L_36 = V_2;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)-1689505682))))
		{
			goto IL_03be;
		}
	}
	{
		goto IL_08ec;
	}

IL_01a3:
	{
		uint32_t L_37 = V_2;
		if ((!(((uint32_t)L_37) <= ((uint32_t)((int32_t)-1437051040)))))
		{
			goto IL_01c6;
		}
	}
	{
		uint32_t L_38 = V_2;
		if ((((int32_t)L_38) == ((int32_t)((int32_t)-1445929244))))
		{
			goto IL_03d3;
		}
	}
	{
		uint32_t L_39 = V_2;
		if ((((int32_t)L_39) == ((int32_t)((int32_t)-1437051040))))
		{
			goto IL_0451;
		}
	}
	{
		goto IL_08ec;
	}

IL_01c6:
	{
		uint32_t L_40 = V_2;
		if ((((int32_t)L_40) == ((int32_t)((int32_t)-1412374006))))
		{
			goto IL_037f;
		}
	}
	{
		uint32_t L_41 = V_2;
		if ((((int32_t)L_41) == ((int32_t)((int32_t)-1395596387))))
		{
			goto IL_03a9;
		}
	}
	{
		uint32_t L_42 = V_2;
		if ((((int32_t)L_42) == ((int32_t)((int32_t)-1385882840))))
		{
			goto IL_058c;
		}
	}
	{
		goto IL_08ec;
	}

IL_01ec:
	{
		uint32_t L_43 = V_2;
		if ((!(((uint32_t)L_43) <= ((uint32_t)((int32_t)-576970835)))))
		{
			goto IL_023d;
		}
	}
	{
		uint32_t L_44 = V_2;
		if ((!(((uint32_t)L_44) <= ((uint32_t)((int32_t)-1178480433)))))
		{
			goto IL_0217;
		}
	}
	{
		uint32_t L_45 = V_2;
		if ((((int32_t)L_45) == ((int32_t)((int32_t)-1189560255))))
		{
			goto IL_02d7;
		}
	}
	{
		uint32_t L_46 = V_2;
		if ((((int32_t)L_46) == ((int32_t)((int32_t)-1178480433))))
		{
			goto IL_047b;
		}
	}
	{
		goto IL_08ec;
	}

IL_0217:
	{
		uint32_t L_47 = V_2;
		if ((((int32_t)L_47) == ((int32_t)((int32_t)-1060285089))))
		{
			goto IL_04cf;
		}
	}
	{
		uint32_t L_48 = V_2;
		if ((((int32_t)L_48) == ((int32_t)((int32_t)-793132101))))
		{
			goto IL_03e8;
		}
	}
	{
		uint32_t L_49 = V_2;
		if ((((int32_t)L_49) == ((int32_t)((int32_t)-576970835))))
		{
			goto IL_0394;
		}
	}
	{
		goto IL_08ec;
	}

IL_023d:
	{
		uint32_t L_50 = V_2;
		if ((!(((uint32_t)L_50) <= ((uint32_t)((int32_t)-566708729)))))
		{
			goto IL_025d;
		}
	}
	{
		uint32_t L_51 = V_2;
		if ((((int32_t)L_51) == ((int32_t)((int32_t)-571520917))))
		{
			goto IL_0298;
		}
	}
	{
		uint32_t L_52 = V_2;
		if ((((int32_t)L_52) == ((int32_t)((int32_t)-566708729))))
		{
			goto IL_050e;
		}
	}
	{
		goto IL_08ec;
	}

IL_025d:
	{
		uint32_t L_53 = V_2;
		if ((((int32_t)L_53) == ((int32_t)((int32_t)-564410384))))
		{
			goto IL_04f9;
		}
	}
	{
		uint32_t L_54 = V_2;
		if ((((int32_t)L_54) == ((int32_t)((int32_t)-265401527))))
		{
			goto IL_0562;
		}
	}
	{
		uint32_t L_55 = V_2;
		if ((((int32_t)L_55) == ((int32_t)((int32_t)-234291494))))
		{
			goto IL_0316;
		}
	}
	{
		goto IL_08ec;
	}

IL_0283:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteral7BA557C60FBFACAA46AD1B56F1F3BD5FC6D77A8D, NULL);
		if (L_57)
		{
			goto IL_05a1;
		}
	}
	{
		goto IL_08ec;
	}

IL_0298:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteralE02BC3B5D408D1BC5E365A7F3C21C2F13AA96125, NULL);
		if (L_59)
		{
			goto IL_05b8;
		}
	}
	{
		goto IL_08ec;
	}

IL_02ad:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteralD85D8860B58B2FBFC768DA8E74CA37AC6E2E0D96, NULL);
		if (L_61)
		{
			goto IL_05cf;
		}
	}
	{
		goto IL_08ec;
	}

IL_02c2:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteralE400D63EF13DB808F91D0F080E11A0D69694FC3D, NULL);
		if (L_63)
		{
			goto IL_05e6;
		}
	}
	{
		goto IL_08ec;
	}

IL_02d7:
	{
		String_t* L_64 = V_1;
		bool L_65;
		L_65 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_64, _stringLiteralC6DB44DDC4F1FACE4AA294C2B9EA59CCD285622D, NULL);
		if (L_65)
		{
			goto IL_05fd;
		}
	}
	{
		goto IL_08ec;
	}

IL_02ec:
	{
		String_t* L_66 = V_1;
		bool L_67;
		L_67 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_66, _stringLiteral5DAA87352BD3C06E5CD37671716E661CD9C905D6, NULL);
		if (L_67)
		{
			goto IL_0614;
		}
	}
	{
		goto IL_08ec;
	}

IL_0301:
	{
		String_t* L_68 = V_1;
		bool L_69;
		L_69 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_68, _stringLiteralBF4CA9E695899EECA56DFBE6139CEFFF5B2AB373, NULL);
		if (L_69)
		{
			goto IL_062b;
		}
	}
	{
		goto IL_08ec;
	}

IL_0316:
	{
		String_t* L_70 = V_1;
		bool L_71;
		L_71 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_70, _stringLiteralBCD524F863D44F707F9F38C67C411C87D8015ABF, NULL);
		if (L_71)
		{
			goto IL_0642;
		}
	}
	{
		goto IL_08ec;
	}

IL_032b:
	{
		String_t* L_72 = V_1;
		bool L_73;
		L_73 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_72, _stringLiteralD7C1E5A51C86BB1E35CAA253F725DAD930175185, NULL);
		if (L_73)
		{
			goto IL_0659;
		}
	}
	{
		goto IL_08ec;
	}

IL_0340:
	{
		String_t* L_74 = V_1;
		bool L_75;
		L_75 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_74, _stringLiteral0D519365D01A086962A53AFD0AE6A825AEDA4CD0, NULL);
		if (L_75)
		{
			goto IL_0670;
		}
	}
	{
		goto IL_08ec;
	}

IL_0355:
	{
		String_t* L_76 = V_1;
		bool L_77;
		L_77 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_76, _stringLiteral5D6E9033064B19B4E5DF4893D7F1FA2F90A3EA47, NULL);
		if (L_77)
		{
			goto IL_0687;
		}
	}
	{
		goto IL_08ec;
	}

IL_036a:
	{
		String_t* L_78 = V_1;
		bool L_79;
		L_79 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_78, _stringLiteral2E348D1FA98FD45ED7FBF438FF66F0EBA5170C10, NULL);
		if (L_79)
		{
			goto IL_069e;
		}
	}
	{
		goto IL_08ec;
	}

IL_037f:
	{
		String_t* L_80 = V_1;
		bool L_81;
		L_81 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_80, _stringLiteralE10C83938F4FCAD01303234029171965E31E6376, NULL);
		if (L_81)
		{
			goto IL_06b5;
		}
	}
	{
		goto IL_08ec;
	}

IL_0394:
	{
		String_t* L_82 = V_1;
		bool L_83;
		L_83 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_82, _stringLiteral7570747A640CCECD3BEDFC03012FFDDE81139994, NULL);
		if (L_83)
		{
			goto IL_06cc;
		}
	}
	{
		goto IL_08ec;
	}

IL_03a9:
	{
		String_t* L_84 = V_1;
		bool L_85;
		L_85 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_84, _stringLiteralD6D2FAB83001A2556F83D8CE5EE6726523ACDC59, NULL);
		if (L_85)
		{
			goto IL_06e3;
		}
	}
	{
		goto IL_08ec;
	}

IL_03be:
	{
		String_t* L_86 = V_1;
		bool L_87;
		L_87 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_86, _stringLiteral3E84FA80252B50CE925CA3311D4092D0879CCEE1, NULL);
		if (L_87)
		{
			goto IL_06fa;
		}
	}
	{
		goto IL_08ec;
	}

IL_03d3:
	{
		String_t* L_88 = V_1;
		bool L_89;
		L_89 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_88, _stringLiteralCCE9BB48FE0030E4D5155E4E52A4E2FFF336CBFA, NULL);
		if (L_89)
		{
			goto IL_0711;
		}
	}
	{
		goto IL_08ec;
	}

IL_03e8:
	{
		String_t* L_90 = V_1;
		bool L_91;
		L_91 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_90, _stringLiteral8BD6F896E373FE6FCF354A1BB2F73761E86A2EC1, NULL);
		if (L_91)
		{
			goto IL_0728;
		}
	}
	{
		goto IL_08ec;
	}

IL_03fd:
	{
		String_t* L_92 = V_1;
		bool L_93;
		L_93 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_92, _stringLiteral86C151E04A32460B50ED4AB51B2F5E3BAA1E141E, NULL);
		if (L_93)
		{
			goto IL_073f;
		}
	}
	{
		goto IL_08ec;
	}

IL_0412:
	{
		String_t* L_94 = V_1;
		bool L_95;
		L_95 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_94, _stringLiteralD13B00C023BF8F75502A375DF33D4510C9E74E7F, NULL);
		if (L_95)
		{
			goto IL_0756;
		}
	}
	{
		goto IL_08ec;
	}

IL_0427:
	{
		String_t* L_96 = V_1;
		bool L_97;
		L_97 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_96, _stringLiteralF37693EA6379011271A20C40D610ECC1C3BC09E6, NULL);
		if (L_97)
		{
			goto IL_076d;
		}
	}
	{
		goto IL_08ec;
	}

IL_043c:
	{
		String_t* L_98 = V_1;
		bool L_99;
		L_99 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_98, _stringLiteral3D00E0E3B130EDADC4916A7F4EE121274836DE84, NULL);
		if (L_99)
		{
			goto IL_0784;
		}
	}
	{
		goto IL_08ec;
	}

IL_0451:
	{
		String_t* L_100 = V_1;
		bool L_101;
		L_101 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_100, _stringLiteralC44547C9F1A82EF3B511F2476CAA00D478C61747, NULL);
		if (L_101)
		{
			goto IL_079b;
		}
	}
	{
		goto IL_08ec;
	}

IL_0466:
	{
		String_t* L_102 = V_1;
		bool L_103;
		L_103 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_102, _stringLiteral89088895C148BA6DFD2EFCE1E10956849FCA3C20, NULL);
		if (L_103)
		{
			goto IL_07b2;
		}
	}
	{
		goto IL_08ec;
	}

IL_047b:
	{
		String_t* L_104 = V_1;
		bool L_105;
		L_105 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_104, _stringLiteral98E0D0561A1C0240F52BDBBD3E637C208BC0E6AB, NULL);
		if (L_105)
		{
			goto IL_07c9;
		}
	}
	{
		goto IL_08ec;
	}

IL_0490:
	{
		String_t* L_106 = V_1;
		bool L_107;
		L_107 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_106, _stringLiteral5BEBA0A009EC71316BB5FB5F9325F2B77983D49D, NULL);
		if (L_107)
		{
			goto IL_07e0;
		}
	}
	{
		goto IL_08ec;
	}

IL_04a5:
	{
		String_t* L_108 = V_1;
		bool L_109;
		L_109 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_108, _stringLiteral7B398077F661091AB5BC307B2FD6237744E266BA, NULL);
		if (L_109)
		{
			goto IL_07f7;
		}
	}
	{
		goto IL_08ec;
	}

IL_04ba:
	{
		String_t* L_110 = V_1;
		bool L_111;
		L_111 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_110, _stringLiteral12ADFC84D6BCCEB460E08E32B4FA7ACC9BEF31B2, NULL);
		if (L_111)
		{
			goto IL_080e;
		}
	}
	{
		goto IL_08ec;
	}

IL_04cf:
	{
		String_t* L_112 = V_1;
		bool L_113;
		L_113 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_112, _stringLiteral234A259825C3E358FC282516D3B56DA588F88F1E, NULL);
		if (L_113)
		{
			goto IL_0825;
		}
	}
	{
		goto IL_08ec;
	}

IL_04e4:
	{
		String_t* L_114 = V_1;
		bool L_115;
		L_115 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_114, _stringLiteral81BD0AE28E075333BBE5C03AF9C6FE41A456CE9D, NULL);
		if (L_115)
		{
			goto IL_083c;
		}
	}
	{
		goto IL_08ec;
	}

IL_04f9:
	{
		String_t* L_116 = V_1;
		bool L_117;
		L_117 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_116, _stringLiteral4030531AEB69C153C44E24CF9424162B6081EF3A, NULL);
		if (L_117)
		{
			goto IL_0853;
		}
	}
	{
		goto IL_08ec;
	}

IL_050e:
	{
		String_t* L_118 = V_1;
		bool L_119;
		L_119 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_118, _stringLiteral092025ADD4C03A232510E3C6A7582D01C4AADC44, NULL);
		if (L_119)
		{
			goto IL_086a;
		}
	}
	{
		goto IL_08ec;
	}

IL_0523:
	{
		String_t* L_120 = V_1;
		bool L_121;
		L_121 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_120, _stringLiteralFBB34848436688703C53144CE11D5844C3D5D69F, NULL);
		if (L_121)
		{
			goto IL_087e;
		}
	}
	{
		goto IL_08ec;
	}

IL_0538:
	{
		String_t* L_122 = V_1;
		bool L_123;
		L_123 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_122, _stringLiteral6F2C37C486869159335DA15899C8D3E6BC9420EC, NULL);
		if (L_123)
		{
			goto IL_088d;
		}
	}
	{
		goto IL_08ec;
	}

IL_054d:
	{
		String_t* L_124 = V_1;
		bool L_125;
		L_125 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_124, _stringLiteral80F4B08AEBD9E1F7CB29DF4B8D1854AEFF320EE3, NULL);
		if (L_125)
		{
			goto IL_08a1;
		}
	}
	{
		goto IL_08ec;
	}

IL_0562:
	{
		String_t* L_126 = V_1;
		bool L_127;
		L_127 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_126, _stringLiteral0557268B1F1E424D0A902F3EEDF716875C8D4BAD, NULL);
		if (L_127)
		{
			goto IL_08b5;
		}
	}
	{
		goto IL_08ec;
	}

IL_0577:
	{
		String_t* L_128 = V_1;
		bool L_129;
		L_129 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_128, _stringLiteralAD41E9EAC27A83BCE636034F0ECF81B657AC0072, NULL);
		if (L_129)
		{
			goto IL_08c4;
		}
	}
	{
		goto IL_08ec;
	}

IL_058c:
	{
		String_t* L_130 = V_1;
		bool L_131;
		L_131 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_130, _stringLiteral71E7E3565AB61CB4D30030EC7D0A58B6311EACB3, NULL);
		if (L_131)
		{
			goto IL_08d8;
		}
	}
	{
		goto IL_08ec;
	}

IL_05a1:
	{
		// instance.duration = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_132 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_133 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_132);
		float L_134;
		L_134 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_132, L_133);
		MainModule_set_duration_m3B328F1E542EEE7BAE101B309512E0E3B4638B77((&V_0), L_134, NULL);
		// break;
		goto IL_08f2;
	}

IL_05b8:
	{
		// instance.loop = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_135 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_136 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_135);
		bool L_137;
		L_137 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_135, L_136);
		MainModule_set_loop_mB3FC83A6DA8D248D15C53388D6B9B7711ADD89BE((&V_0), L_137, NULL);
		// break;
		goto IL_08f2;
	}

IL_05cf:
	{
		// instance.prewarm = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_138 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_139 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_138);
		bool L_140;
		L_140 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_138, L_139);
		MainModule_set_prewarm_m99964C46DE65B6797E9FD6A5CAF19E0B150D99F6((&V_0), L_140, NULL);
		// break;
		goto IL_08f2;
	}

IL_05e6:
	{
		// instance.startDelay = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_141 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_142 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_141);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_143;
		L_143 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_141, L_142);
		MainModule_set_startDelay_mFE9F9E7F79978F670904789F7F55B96F42434F69((&V_0), L_143, NULL);
		// break;
		goto IL_08f2;
	}

IL_05fd:
	{
		// instance.startDelayMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_144 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_145 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_144);
		float L_146;
		L_146 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_144, L_145);
		MainModule_set_startDelayMultiplier_m1EAE44047D0E5FC4FDE7AF3F8A517D23B9CECC2A((&V_0), L_146, NULL);
		// break;
		goto IL_08f2;
	}

IL_0614:
	{
		// instance.startLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_147 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_148 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_147);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_149;
		L_149 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_147, L_148);
		MainModule_set_startLifetime_mDFC2433853CB12C0C93C8BF16FEDB4EA2E0B3514((&V_0), L_149, NULL);
		// break;
		goto IL_08f2;
	}

IL_062b:
	{
		// instance.startLifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_150 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_151 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_150);
		float L_152;
		L_152 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_150, L_151);
		MainModule_set_startLifetimeMultiplier_mFD2343C9B1E172A7C2D13658CA36270C3FCA6D85((&V_0), L_152, NULL);
		// break;
		goto IL_08f2;
	}

IL_0642:
	{
		// instance.startSpeed = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_153 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_154 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_153);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_155;
		L_155 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_153, L_154);
		MainModule_set_startSpeed_mE6041E4BA54F01117AF6B81B1E53C5C9C669AC75((&V_0), L_155, NULL);
		// break;
		goto IL_08f2;
	}

IL_0659:
	{
		// instance.startSpeedMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_156 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_157 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_156);
		float L_158;
		L_158 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_156, L_157);
		MainModule_set_startSpeedMultiplier_m297519F08A0F1C70A7972AE6813DC06BFDA89074((&V_0), L_158, NULL);
		// break;
		goto IL_08f2;
	}

IL_0670:
	{
		// instance.startSize3D = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_159 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_160 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_159);
		bool L_161;
		L_161 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_159, L_160);
		MainModule_set_startSize3D_mD90CDAA22BD7859762B8A7D89FB8AB234206C4E6((&V_0), L_161, NULL);
		// break;
		goto IL_08f2;
	}

IL_0687:
	{
		// instance.startSize = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_162 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_163 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_162);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_164;
		L_164 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_162, L_163);
		MainModule_set_startSize_m44C3A39EAF1AE9A526A126D93160128223BE827B((&V_0), L_164, NULL);
		// break;
		goto IL_08f2;
	}

IL_069e:
	{
		// instance.startSizeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_165 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_166 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_165);
		float L_167;
		L_167 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_165, L_166);
		MainModule_set_startSizeMultiplier_m4561E105FF6755975C4ABBF4C62C8F338685EE02((&V_0), L_167, NULL);
		// break;
		goto IL_08f2;
	}

IL_06b5:
	{
		// instance.startSizeX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_168 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_169 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_168);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_170;
		L_170 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_168, L_169);
		MainModule_set_startSizeX_m5F3F00611409B616D7B5B05EF3A6D7C35448C445((&V_0), L_170, NULL);
		// break;
		goto IL_08f2;
	}

IL_06cc:
	{
		// instance.startSizeXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_171 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_172 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_171);
		float L_173;
		L_173 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_171, L_172);
		MainModule_set_startSizeXMultiplier_m97EF3367ABCA54443AB7E2DF038E1208CAFEDCC6((&V_0), L_173, NULL);
		// break;
		goto IL_08f2;
	}

IL_06e3:
	{
		// instance.startSizeY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_174 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_175 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_174);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_176;
		L_176 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_174, L_175);
		MainModule_set_startSizeY_mAA04D165042FFAEC3F17672ED84F066A8295C0FD((&V_0), L_176, NULL);
		// break;
		goto IL_08f2;
	}

IL_06fa:
	{
		// instance.startSizeYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_177 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_178 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_177);
		float L_179;
		L_179 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_177, L_178);
		MainModule_set_startSizeYMultiplier_m1100BB5A064C9F3638F2F7867EC404B95AC59215((&V_0), L_179, NULL);
		// break;
		goto IL_08f2;
	}

IL_0711:
	{
		// instance.startSizeZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_180 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_181 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_180);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_182;
		L_182 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_180, L_181);
		MainModule_set_startSizeZ_mA1D0B1E2E9505DFDB42622E575FD91134ABE9A50((&V_0), L_182, NULL);
		// break;
		goto IL_08f2;
	}

IL_0728:
	{
		// instance.startSizeZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_183 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_184 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_183);
		float L_185;
		L_185 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_183, L_184);
		MainModule_set_startSizeZMultiplier_mE3AAF9C6580F32E7D986147CA060B243E392B9E0((&V_0), L_185, NULL);
		// break;
		goto IL_08f2;
	}

IL_073f:
	{
		// instance.startRotation3D = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_186 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_187 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_186);
		bool L_188;
		L_188 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_186, L_187);
		MainModule_set_startRotation3D_m0A38498100EF660B71B29BB3C58F1DD1BF6C79E7((&V_0), L_188, NULL);
		// break;
		goto IL_08f2;
	}

IL_0756:
	{
		// instance.startRotation = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_189 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_190 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_189);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_191;
		L_191 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_189, L_190);
		MainModule_set_startRotation_m8D09FD13401B188EC3C20C489CFA1EDDA3B43079((&V_0), L_191, NULL);
		// break;
		goto IL_08f2;
	}

IL_076d:
	{
		// instance.startRotationMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_192 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_193 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_192);
		float L_194;
		L_194 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_192, L_193);
		MainModule_set_startRotationMultiplier_m7C4E9C38104D2F87EB57D68B4F0C14110DB6E8B1((&V_0), L_194, NULL);
		// break;
		goto IL_08f2;
	}

IL_0784:
	{
		// instance.startRotationX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_195 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_196 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_195);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_197;
		L_197 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_195, L_196);
		MainModule_set_startRotationX_m2BF2E2E87F0F199ADB04ADBD719F17B762956CA9((&V_0), L_197, NULL);
		// break;
		goto IL_08f2;
	}

IL_079b:
	{
		// instance.startRotationXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_198 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_199 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_198);
		float L_200;
		L_200 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_198, L_199);
		MainModule_set_startRotationXMultiplier_m23EED38F1C33CCB5992536B87714C8D03ABC13C6((&V_0), L_200, NULL);
		// break;
		goto IL_08f2;
	}

IL_07b2:
	{
		// instance.startRotationY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_201 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_202 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_201);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_203;
		L_203 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_201, L_202);
		MainModule_set_startRotationY_m3BAC5A35565F302246EC5DD52F0410773C24480C((&V_0), L_203, NULL);
		// break;
		goto IL_08f2;
	}

IL_07c9:
	{
		// instance.startRotationYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_204 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_205 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_204);
		float L_206;
		L_206 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_204, L_205);
		MainModule_set_startRotationYMultiplier_mADF58CC09C5F1998E2B8DF4D2766087CBE869834((&V_0), L_206, NULL);
		// break;
		goto IL_08f2;
	}

IL_07e0:
	{
		// instance.startRotationZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_207 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_208 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_207);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_209;
		L_209 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_207, L_208);
		MainModule_set_startRotationZ_m69F340DE9D9C4D402E514592DDD226ACC7C4B0AE((&V_0), L_209, NULL);
		// break;
		goto IL_08f2;
	}

IL_07f7:
	{
		// instance.startRotationZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_210 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_211 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_210);
		float L_212;
		L_212 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_210, L_211);
		MainModule_set_startRotationZMultiplier_m526C944907FADC856F24E12FAA983F463058213F((&V_0), L_212, NULL);
		// break;
		goto IL_08f2;
	}

IL_080e:
	{
		// instance.flipRotation = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_213 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_214 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_213);
		float L_215;
		L_215 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_213, L_214);
		MainModule_set_flipRotation_m638195126B6F330703BA953F190D58B419BB5EE7((&V_0), L_215, NULL);
		// break;
		goto IL_08f2;
	}

IL_0825:
	{
		// instance.flipRotation = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_216 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_217 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_216);
		float L_218;
		L_218 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_216, L_217);
		MainModule_set_flipRotation_m638195126B6F330703BA953F190D58B419BB5EE7((&V_0), L_218, NULL);
		// break;
		goto IL_08f2;
	}

IL_083c:
	{
		// instance.startColor = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_219 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_220 = ((ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t510ED9F95121D93647E58E9D02E255F099E1CC0D_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_219);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_221;
		L_221 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA8C77725D94DB5D159BD064D4B6427BD487C4DFE_RuntimeMethod_var, L_219, L_220);
		MainModule_set_startColor_m504911284CAC53A7C1B97B5D01BBDD2FA67D0E7A((&V_0), L_221, NULL);
		// break;
		goto IL_08f2;
	}

IL_0853:
	{
		// instance.gravityModifier = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_222 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_223 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_222);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_224;
		L_224 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_222, L_223);
		MainModule_set_gravityModifier_m398D2C7F10E389C0EA365640A54D2C0C151A42A7((&V_0), L_224, NULL);
		// break;
		goto IL_08f2;
	}

IL_086a:
	{
		// instance.gravityModifierMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_225 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_226 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_225);
		float L_227;
		L_227 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_225, L_226);
		MainModule_set_gravityModifierMultiplier_m644D0D04BBE1D4509B1CDB0BBC36D53E02906537((&V_0), L_227, NULL);
		// break;
		goto IL_08f2;
	}

IL_087e:
	{
		// instance.simulationSpace = reader.Read<UnityEngine.ParticleSystemSimulationSpace>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_228 = ___reader0;
		NullCheck(L_228);
		int32_t L_229;
		L_229 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m7EC146C35647387DD36351685C0DD1C98B6333D8_RuntimeMethod_var, L_228);
		MainModule_set_simulationSpace_m23D533E66925AABF0C336894FBF2FF03FF3891BC((&V_0), L_229, NULL);
		// break;
		goto IL_08f2;
	}

IL_088d:
	{
		// instance.customSimulationSpace = reader.Read<UnityEngine.Transform>(ES3Type_Transform.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_230 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_231 = ((ES3Type_Transform_tC86C7755D546F3D4A97553E19C31F9E025AB13A7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Transform_tC86C7755D546F3D4A97553E19C31F9E025AB13A7_il2cpp_TypeInfo_var))->___Instance_15;
		NullCheck(L_230);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_232;
		L_232 = GenericVirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m76F72323D090F7BFE241E75E77F0B53A709F00CD_RuntimeMethod_var, L_230, L_231);
		MainModule_set_customSimulationSpace_m89F1A54DF8D2A2F02C5996F7DDD19A6FB1678B16((&V_0), L_232, NULL);
		// break;
		goto IL_08f2;
	}

IL_08a1:
	{
		// instance.simulationSpeed = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_233 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_234 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_233);
		float L_235;
		L_235 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_233, L_234);
		MainModule_set_simulationSpeed_mFB44E06BF3F0D423636A6F37642CCC5722EBE0C6((&V_0), L_235, NULL);
		// break;
		goto IL_08f2;
	}

IL_08b5:
	{
		// instance.scalingMode = reader.Read<UnityEngine.ParticleSystemScalingMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_236 = ___reader0;
		NullCheck(L_236);
		int32_t L_237;
		L_237 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemScalingMode_tEC777C9C63E65B6CE026BBE10DA48F389DAECE72_m5C0DC18BF9CF07934F00ED8758CA9AE729F19106_RuntimeMethod_var, L_236);
		MainModule_set_scalingMode_m08A4399A0E64E5894509084A42BB528BE16A648D((&V_0), L_237, NULL);
		// break;
		goto IL_08f2;
	}

IL_08c4:
	{
		// instance.playOnAwake = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_238 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_239 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_238);
		bool L_240;
		L_240 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_238, L_239);
		MainModule_set_playOnAwake_mC86DBF96156C8783FAC2AD1628529F354FB1C6D8((&V_0), L_240, NULL);
		// break;
		goto IL_08f2;
	}

IL_08d8:
	{
		// instance.maxParticles = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_241 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_242 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_241);
		int32_t L_243;
		L_243 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_241, L_242);
		MainModule_set_maxParticles_mF9E7A56D7E1A528904BE1A8C0E14F15C3AF0F748((&V_0), L_243, NULL);
		// break;
		goto IL_08f2;
	}

IL_08ec:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_244 = ___reader0;
		NullCheck(L_244);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_244);
	}

IL_08f2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_245 = ___reader0;
		NullCheck(L_245);
		String_t* L_246;
		L_246 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_245);
		String_t* L_247 = L_246;
		V_1 = L_247;
		if (L_247)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Object ES3Types.ES3Type_Material::ReadUnityObject<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Material_ReadUnityObject_TisRuntimeObject_m73C81EF86F9CE53B43FEE49DEB537EB9E7365100_gshared (ES3Type_Material_t9D0AD66FC243F0AFCBB7940320FE2099DFFE2ECD* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642);
		s_Il2CppMethodInitialized = true;
	}
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_0 = NULL;
	{
		// var obj = new Material(Shader.Find("Diffuse"));
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0;
		L_0 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_1, L_0, NULL);
		V_0 = L_1;
		// ReadUnityObject<T>(reader, obj);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_2 = ___reader0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = V_0;
		NullCheck((ES3UnityObjectType_tF653280D2691EBD1459EF886ACEA2E98FC30CAEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3UnityObjectType_tF653280D2691EBD1459EF886ACEA2E98FC30CAEE*)__this, L_2, (RuntimeObject*)L_3);
		// return obj;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = V_0;
		return (RuntimeObject*)L_4;
	}
}
// System.Void ES3Types.ES3Type_Material::ReadUnityObject<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Material_ReadUnityObject_TisRuntimeObject_m0326B4D3C258AE9CCFBE6800FC0A854036782783_gshared (ES3Type_Material_t9D0AD66FC243F0AFCBB7940320FE2099DFFE2ECD* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mC041ABAFD847F57C6FC0692A54FDEF888CEF1694_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMaterialGlobalIlluminationFlags_tC360654C0CB0570ED64F540BAFAC93DD3097FA85_m41AEAEEE8ACC619A1C2CA65A78E5B05EA5DC7534_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisShader_tADC867D36B7876EE22427FAA2CE485105F4EE692_mE27966EFF2F06E146982A5480B4F6E24657A08BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisStringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_m56E015CA77E46F872ED998B331F7A2089CBE1F89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m768535B1FBE236A964B82DC2B1781D823A20C5AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTexture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_m19A386D486F1F0E8B04AD2F6C16157FD942F593D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m9B3BD25086B61330AB516403F49CF5818CFE1478_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6CEB60BB5615A82E4DC0CEF487F58743FCE091D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Shader_tC1F08C5F67DA885ED7A4E638A9C31EA154ABBA1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tF2C6B48AEF5F70E0C8CE33C9556FDFC7572D3A20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B05325A67879CC8C81FB6B095D8243D1CB525A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D3A163F4F47F9226A93E99275EF7A7EBE154590);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9936D9FC335A383E83C149BB3C6ED63A7971320F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB50617445AE8C184480EB99F42AC74A9C63F5058);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7453D784A8909E62B8E93E94A5E22CA83D87811);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1571F9EC167194F2677177D7FD6E1D267F32D7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA7F5B0306DF552DE66B7281D79B71C2E6AFE29A);
		s_Il2CppMethodInitialized = true;
	}
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_4 = NULL;
	int32_t V_5 = 0;
	String_t* V_6 = NULL;
	int32_t V_7 = 0;
	RuntimeObject* V_8 = NULL;
	{
		// var instance = (UnityEngine.Material)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)CastclassClass((RuntimeObject*)L_0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var));
		// foreach (string propertyName in reader.Properties)
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

FINALLY_022f:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_8;
					if (!L_5)
					{
						goto IL_0242;
					}
				}
				{
					RuntimeObject* L_6 = V_8;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0242:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0222_1;
			}

IL_0018_1:
			{
				// foreach (string propertyName in reader.Properties)
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
				String_t* L_9 = V_2;
				bool L_10;
				L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_10)
				{
					goto IL_007d_1;
				}
			}
			{
				String_t* L_11 = V_2;
				bool L_12;
				L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralC7453D784A8909E62B8E93E94A5E22CA83D87811, NULL);
				if (L_12)
				{
					goto IL_0093_1;
				}
			}
			{
				String_t* L_13 = V_2;
				bool L_14;
				L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralE1571F9EC167194F2677177D7FD6E1D267F32D7B, NULL);
				if (L_14)
				{
					goto IL_00a9_1;
				}
			}
			{
				String_t* L_15 = V_2;
				bool L_16;
				L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralEA7F5B0306DF552DE66B7281D79B71C2E6AFE29A, NULL);
				if (L_16)
				{
					goto IL_00bf_1;
				}
			}
			{
				String_t* L_17 = V_2;
				bool L_18;
				L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral9936D9FC335A383E83C149BB3C6ED63A7971320F, NULL);
				if (L_18)
				{
					goto IL_00ee_1;
				}
			}
			{
				String_t* L_19 = V_2;
				bool L_20;
				L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral0B05325A67879CC8C81FB6B095D8243D1CB525A5, NULL);
				if (L_20)
				{
					goto IL_00ff_1;
				}
			}
			{
				goto IL_0115_1;
			}

IL_007d_1:
			{
				// instance.name = reader.Read<string>(ES3Type_string.Instance);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_22 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_23 = ((ES3Type_string_tF2C6B48AEF5F70E0C8CE33C9556FDFC7572D3A20_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tF2C6B48AEF5F70E0C8CE33C9556FDFC7572D3A20_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_22);
				String_t* L_24;
				L_24 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisString_t_m768535B1FBE236A964B82DC2B1781D823A20C5AB_RuntimeMethod_var, L_22, L_23);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_21);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_21, L_24, NULL);
				// break;
				goto IL_0222_1;
			}

IL_0093_1:
			{
				// instance.shader = reader.Read<UnityEngine.Shader>(ES3Type_Shader.Instance);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_26 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_27 = ((ES3Type_Shader_tC1F08C5F67DA885ED7A4E638A9C31EA154ABBA1A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Shader_tC1F08C5F67DA885ED7A4E638A9C31EA154ABBA1A_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_26);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_28;
				L_28 = GenericVirtualFuncInvoker1< Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisShader_tADC867D36B7876EE22427FAA2CE485105F4EE692_mE27966EFF2F06E146982A5480B4F6E24657A08BA_RuntimeMethod_var, L_26, L_27);
				NullCheck(L_25);
				Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_25, L_28, NULL);
				// break;
				goto IL_0222_1;
			}

IL_00a9_1:
			{
				// instance.renderQueue = reader.Read<System.Int32>(ES3Type_int.Instance);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_31 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_30);
				int32_t L_32;
				L_32 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_30, L_31);
				NullCheck(L_29);
				Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_29, L_32, NULL);
				// break;
				goto IL_0222_1;
			}

IL_00bf_1:
			{
				// var keywords = reader.Read<System.String[]>();
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___reader0;
				NullCheck(L_33);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34;
				L_34 = GenericVirtualFuncInvoker0< StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(ES3Reader_Read_TisStringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_m56E015CA77E46F872ED998B331F7A2089CBE1F89_RuntimeMethod_var, L_33);
				// foreach (var keyword in keywords)
				V_4 = L_34;
				V_5 = 0;
				goto IL_00e1_1;
			}

IL_00cc_1:
			{
				// foreach (var keyword in keywords)
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = V_4;
				int32_t L_36 = V_5;
				NullCheck(L_35);
				int32_t L_37 = L_36;
				String_t* L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
				V_6 = L_38;
				// instance.EnableKeyword(keyword);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_39 = V_0;
				String_t* L_40 = V_6;
				NullCheck(L_39);
				Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_39, L_40, NULL);
				int32_t L_41 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_41, 1));
			}

IL_00e1_1:
			{
				// foreach (var keyword in keywords)
				int32_t L_42 = V_5;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = V_4;
				NullCheck(L_43);
				if ((((int32_t)L_42) < ((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length)))))
				{
					goto IL_00cc_1;
				}
			}
			{
				// break;
				goto IL_0222_1;
			}

IL_00ee_1:
			{
				// instance.globalIlluminationFlags = reader.Read<UnityEngine.MaterialGlobalIlluminationFlags>();
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_44 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
				NullCheck(L_45);
				int32_t L_46;
				L_46 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisMaterialGlobalIlluminationFlags_tC360654C0CB0570ED64F540BAFAC93DD3097FA85_m41AEAEEE8ACC619A1C2CA65A78E5B05EA5DC7534_RuntimeMethod_var, L_45);
				NullCheck(L_44);
				Material_set_globalIlluminationFlags_m41DD0EECE3EB9C6B68FBAA357DE8E2B8A5D63AEB(L_44, L_46, NULL);
				// break;
				goto IL_0222_1;
			}

IL_00ff_1:
			{
				// instance.SetTextureScale("_MainTex", reader.Read<Vector2>());
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_47 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
				NullCheck(L_48);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49;
				L_49 = GenericVirtualFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m9B3BD25086B61330AB516403F49CF5818CFE1478_RuntimeMethod_var, L_48);
				NullCheck(L_47);
				Material_SetTextureScale_m8DBD33DD5E1F19C75C9C022974B27C719E9C5F8D(L_47, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, L_49, NULL);
				// break;
				goto IL_0222_1;
			}

IL_0115_1:
			{
				// var propertyIndex = -1;
				V_3 = (-1);
				// if (instance.shader != null && instance.HasProperty(propertyName) && (propertyIndex = instance.shader.FindPropertyIndex(propertyName)) != -1)
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_50 = V_0;
				NullCheck(L_50);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_51;
				L_51 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_50, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_52;
				L_52 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_51, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_52)
				{
					goto IL_01ba_1;
				}
			}
			{
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_53 = V_0;
				String_t* L_54 = V_2;
				NullCheck(L_53);
				bool L_55;
				L_55 = Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C(L_53, L_54, NULL);
				if (!L_55)
				{
					goto IL_01ba_1;
				}
			}
			{
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_56 = V_0;
				NullCheck(L_56);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_57;
				L_57 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_56, NULL);
				String_t* L_58 = V_2;
				NullCheck(L_57);
				int32_t L_59;
				L_59 = Shader_FindPropertyIndex_mDD0C2F8AB1DF298D24F59492248B7D7CA4EF0A97(L_57, L_58, NULL);
				int32_t L_60 = L_59;
				V_3 = L_60;
				if ((((int32_t)L_60) == ((int32_t)(-1))))
				{
					goto IL_01ba_1;
				}
			}
			{
				// var propertyType = instance.shader.GetPropertyType(propertyIndex);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_61 = V_0;
				NullCheck(L_61);
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_62;
				L_62 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_61, NULL);
				int32_t L_63 = V_3;
				NullCheck(L_62);
				int32_t L_64;
				L_64 = Shader_GetPropertyType_mC53671FA21725E4F474F159AEBD38EB97BDC9CF1(L_62, L_63, NULL);
				V_7 = L_64;
				int32_t L_65 = V_7;
				switch (L_65)
				{
					case 0:
					{
						goto IL_0173_1;
					}
					case 1:
					{
						goto IL_01a6_1;
					}
					case 2:
					{
						goto IL_0185_1;
					}
					case 3:
					{
						goto IL_0185_1;
					}
					case 4:
					{
						goto IL_0197_1;
					}
				}
			}
			{
				goto IL_021c_1;
			}

IL_0173_1:
			{
				// instance.SetColor(propertyName, reader.Read<Color>());
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_66 = V_0;
				String_t* L_67 = V_2;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_68 = ___reader0;
				NullCheck(L_68);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_69;
				L_69 = GenericVirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mC041ABAFD847F57C6FC0692A54FDEF888CEF1694_RuntimeMethod_var, L_68);
				NullCheck(L_66);
				Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_66, L_67, L_69, NULL);
				// break;
				goto IL_021c_1;
			}

IL_0185_1:
			{
				// instance.SetFloat(propertyName, reader.Read<float>());
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_70 = V_0;
				String_t* L_71 = V_2;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_72 = ___reader0;
				NullCheck(L_72);
				float L_73;
				L_73 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m267AB63D59DAE6E82AFD91B1985FB9D585FE6646_RuntimeMethod_var, L_72);
				NullCheck(L_70);
				Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_70, L_71, L_73, NULL);
				// break;
				goto IL_021c_1;
			}

IL_0197_1:
			{
				// instance.SetTexture(propertyName, reader.Read<Texture>());
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_74 = V_0;
				String_t* L_75 = V_2;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_76 = ___reader0;
				NullCheck(L_76);
				Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_77;
				L_77 = GenericVirtualFuncInvoker0< Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* >::Invoke(ES3Reader_Read_TisTexture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_m19A386D486F1F0E8B04AD2F6C16157FD942F593D_RuntimeMethod_var, L_76);
				NullCheck(L_74);
				Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_74, L_75, L_77, NULL);
				// break;
				goto IL_021c_1;
			}

IL_01a6_1:
			{
				// instance.SetColor(propertyName, reader.Read<Vector4>());
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_78 = V_0;
				String_t* L_79 = V_2;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_80 = ___reader0;
				NullCheck(L_80);
				Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_81;
				L_81 = GenericVirtualFuncInvoker0< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 >::Invoke(ES3Reader_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6CEB60BB5615A82E4DC0CEF487F58743FCE091D4_RuntimeMethod_var, L_80);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_82;
				L_82 = Color_op_Implicit_mA8CF4745D766F4F610E1BE0A1ED2F4E5FE5D734C_inline(L_81, NULL);
				NullCheck(L_78);
				Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_78, L_79, L_82, NULL);
				// break;
				goto IL_021c_1;
			}

IL_01ba_1:
			{
				// else if (propertyName.EndsWith("_TextureScale"))
				String_t* L_83 = V_2;
				NullCheck(L_83);
				bool L_84;
				L_84 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_83, _stringLiteralB50617445AE8C184480EB99F42AC74A9C63F5058, NULL);
				if (!L_84)
				{
					goto IL_01ec_1;
				}
			}
			{
				// instance.SetTextureScale(propertyName.Split(new string[] { "_TextureScale" }, StringSplitOptions.None)[0], reader.Read<Vector2>());
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_85 = V_0;
				String_t* L_86 = V_2;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_87 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_88 = L_87;
				NullCheck(L_88);
				ArrayElementTypeCheck (L_88, _stringLiteralB50617445AE8C184480EB99F42AC74A9C63F5058);
				(L_88)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralB50617445AE8C184480EB99F42AC74A9C63F5058);
				NullCheck(L_86);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_89;
				L_89 = String_Split_m03F46561E2DF46D1E3AE749A77706EFC2F6488F4(L_86, L_88, (int32_t)0, NULL);
				NullCheck(L_89);
				int32_t L_90 = 0;
				String_t* L_91 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_92 = ___reader0;
				NullCheck(L_92);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_93;
				L_93 = GenericVirtualFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m9B3BD25086B61330AB516403F49CF5818CFE1478_RuntimeMethod_var, L_92);
				NullCheck(L_85);
				Material_SetTextureScale_m8DBD33DD5E1F19C75C9C022974B27C719E9C5F8D(L_85, L_91, L_93, NULL);
				goto IL_021c_1;
			}

IL_01ec_1:
			{
				// else if (propertyName.EndsWith("_TextureOffset"))
				String_t* L_94 = V_2;
				NullCheck(L_94);
				bool L_95;
				L_95 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_94, _stringLiteral4D3A163F4F47F9226A93E99275EF7A7EBE154590, NULL);
				if (!L_95)
				{
					goto IL_021c_1;
				}
			}
			{
				// instance.SetTextureOffset(propertyName.Split(new string[] { "_TextureOffset" }, StringSplitOptions.None)[0], reader.Read<Vector2>());
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_96 = V_0;
				String_t* L_97 = V_2;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_98 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_99 = L_98;
				NullCheck(L_99);
				ArrayElementTypeCheck (L_99, _stringLiteral4D3A163F4F47F9226A93E99275EF7A7EBE154590);
				(L_99)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4D3A163F4F47F9226A93E99275EF7A7EBE154590);
				NullCheck(L_97);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_100;
				L_100 = String_Split_m03F46561E2DF46D1E3AE749A77706EFC2F6488F4(L_97, L_99, (int32_t)0, NULL);
				NullCheck(L_100);
				int32_t L_101 = 0;
				String_t* L_102 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_103 = ___reader0;
				NullCheck(L_103);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_104;
				L_104 = GenericVirtualFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m9B3BD25086B61330AB516403F49CF5818CFE1478_RuntimeMethod_var, L_103);
				NullCheck(L_96);
				Material_SetTextureOffset_m40F3FCE32535625DDF26C0C073D37968117FBFE1(L_96, L_102, L_104, NULL);
			}

IL_021c_1:
			{
				// reader.Skip();
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_105 = ___reader0;
				NullCheck(L_105);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_105);
			}

IL_0222_1:
			{
				// foreach (string propertyName in reader.Properties)
				RuntimeObject* L_106 = V_1;
				NullCheck(L_106);
				bool L_107;
				L_107 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_106);
				if (L_107)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_0243;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0243:
	{
		// }
		return;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC97182201C071508449205534A1754C20525D694_gshared (ES3Type_Matrix4x4_t35A712AE2F3E3B09633FB0ADBC805C1E179E5D7C* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_1 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_3 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_4 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_7 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_9 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_10 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m166B38C5BB6C31B85D54B9AFFF719DB638607335_gshared (ES3Type_Matrix4x4_t35A712AE2F3E3B09633FB0ADBC805C1E179E5D7C* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_1 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_3 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_4 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_7 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_9 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_10 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDDF9466B650937CE1F730F8FFC406C07FC60A4C3_gshared (ES3Type_Matrix4x4_t35A712AE2F3E3B09633FB0ADBC805C1E179E5D7C* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_1 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_3 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_4 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_7 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_9 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_10 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m45CF38CC52E350ABC99389B03BE3EC58C777EC19_gshared (ES3Type_Matrix4x4_t35A712AE2F3E3B09633FB0ADBC805C1E179E5D7C* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_1 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_3 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_4 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_7 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_9 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_10 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<System.Int16>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mDC282C05E43E27B336126DDBC98B42AD5C7A5AEA_gshared (ES3Type_Matrix4x4_t35A712AE2F3E3B09633FB0ADBC805C1E179E5D7C* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_1 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_3 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_4 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_7 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_9 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_10 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m7316C2C7AC7F012D01FE84CE03FB4F07163232ED_gshared (ES3Type_Matrix4x4_t35A712AE2F3E3B09633FB0ADBC805C1E179E5D7C* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_1 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_3 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_4 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_7 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_9 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_10 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m4FC76B64BE42EDD09C8E777FF3D8BB52691C9DDA_gshared (ES3Type_Matrix4x4_t35A712AE2F3E3B09633FB0ADBC805C1E179E5D7C* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_1 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_3 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_4 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_7 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_9 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_10 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mF7383984A0FF6F3062BD1E3C029FA58CFEACD9D7_gshared (ES3Type_Matrix4x4_t35A712AE2F3E3B09633FB0ADBC805C1E179E5D7C* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_1 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_3 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_4 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_7 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_9 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_10 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m77DB9DEB3354D41D429BB80AB9E072A2A49833B5_gshared (ES3Type_Matrix4x4_t35A712AE2F3E3B09633FB0ADBC805C1E179E5D7C* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_1 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_3 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_4 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_7 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_9 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_10 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m2AA7BD856464C0F90096C10430D42B993B4AC1FF_gshared (ES3Type_Matrix4x4_t35A712AE2F3E3B09633FB0ADBC805C1E179E5D7C* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_1 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_3 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_4 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_7 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_9 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_10 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisRuntimeObject_mC449A8F24D4527A396BFC98496A69559C652E03F_gshared (ES3Type_Matrix4x4_t35A712AE2F3E3B09633FB0ADBC805C1E179E5D7C* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_1 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_3 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_4 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_7 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_9 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_10 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m2851DFA29E0945848DC7A06EA0D82FA8CC99447B_gshared (ES3Type_Matrix4x4_t35A712AE2F3E3B09633FB0ADBC805C1E179E5D7C* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_1 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_3 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_4 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_7 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_9 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_10 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m79A50871E0065718785D3A6E7DD35939B04DB550_gshared (ES3Type_Matrix4x4_t35A712AE2F3E3B09633FB0ADBC805C1E179E5D7C* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_1 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_3 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_4 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_7 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_9 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_10 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_m0C127FC82E95E5FD623DB2316AEB9CFF32E6B9F9_gshared (ES3Type_Matrix4x4_t35A712AE2F3E3B09633FB0ADBC805C1E179E5D7C* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_1 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_3 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_4 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_7 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_9 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_10 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m78A1CB283DB028A980E629C121833673D5301139_gshared (ES3Type_Matrix4x4_t35A712AE2F3E3B09633FB0ADBC805C1E179E5D7C* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_1 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_3 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_4 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_7 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_9 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_10 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m0B802D5EAAE178DE09B55FCD342859F1BD54F7CA_gshared (ES3Type_Matrix4x4_t35A712AE2F3E3B09633FB0ADBC805C1E179E5D7C* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_1 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_3 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_4 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_7 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_9 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_10 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mF4E67284431AD4202FB511AD90C4BF2178D1F642_gshared (ES3Type_Matrix4x4_t35A712AE2F3E3B09633FB0ADBC805C1E179E5D7C* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_1 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_3 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_4 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_7 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_9 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_10 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m0B128947C10E8E4D294D74AE86D486A8C54669C2_gshared (ES3Type_Matrix4x4_t35A712AE2F3E3B09633FB0ADBC805C1E179E5D7C* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_1 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_3 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_4 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_7 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_9 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_10 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m84D97BF1B907F5894B458319AFBFB2A5005C43E3_gshared (ES3Type_Matrix4x4_t35A712AE2F3E3B09633FB0ADBC805C1E179E5D7C* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_1 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_3 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_4 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_7 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_9 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_10 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Matrix4x4::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Matrix4x4_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mBBB6A36ABD2C67012962040EBEA9F390D3A02626_gshared (ES3Type_Matrix4x4_t35A712AE2F3E3B09633FB0ADBC805C1E179E5D7C* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var matrix = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// matrix.SetColumn(0,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_1 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_0, L_1, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 0, L_2, NULL);
		// matrix.SetColumn(1,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_3 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_4 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_3, L_4, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 1, L_5, NULL);
		// matrix.SetColumn(2,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_7 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_6, L_7, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 2, L_8, NULL);
		// matrix.SetColumn(3,    reader.ReadProperty<Vector4>(ES3Type_Vector4.Instance));
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_9 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_10 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071(L_9, L_10, ES3Reader_ReadProperty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA8E4186E65094D148E954B00B32E1AF3305BB071_RuntimeMethod_var);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_11, NULL);
		// return matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = L_12;
		RuntimeObject* L_14 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Mesh::ReadUnityObject<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Mesh_ReadUnityObject_TisRuntimeObject_m956ADD5540BD13C2230E042ED66369221512DA16_gshared (ES3Type_Mesh_tC459CC632DC495F2F0DAFAA32F718B1F73B6381D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_0 = NULL;
	{
		// var obj = new Mesh();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_0, NULL);
		V_0 = L_0;
		// ReadUnityObject<T>(reader, obj);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_1 = ___reader0;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_2 = V_0;
		NullCheck((ES3UnityObjectType_tF653280D2691EBD1459EF886ACEA2E98FC30CAEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3UnityObjectType_tF653280D2691EBD1459EF886ACEA2E98FC30CAEE*)__this, L_1, (RuntimeObject*)L_2);
		// return obj;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_3 = V_0;
		return (RuntimeObject*)L_3;
	}
}
// System.Void ES3Types.ES3Type_Mesh::ReadUnityObject<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Mesh_ReadUnityObject_TisRuntimeObject_mA7D7FA17B2D2C6E255065B5E3D5AE97A3485615A_gshared (ES3Type_Mesh_tC459CC632DC495F2F0DAFAA32F718B1F73B6381D* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_m6C9035BE2883EB25F75F9F10F318181A241A48D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E538BCA2B4B482D5ADE5F78261F8C1C23A6BEB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m5388F68680AEF936029792873C798605E4A56B9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisString_t_m77ABFD00F5FD79E6B5FCEFD9BEF8154F3F09312C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisVector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_mEB7164B7A1A04E2C12F76DB2E3DB6694CBF05D63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651_m603DAF8CC60FFBA1326CF540584FA401C996FE50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m757B5A2C186E2CA3E0A606C01A7FEEBA60C2BB8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_m5E9010145F8A830C0FF8244B782C692C46B12801_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisIndexFormat_tE699D38323B3B0887DF054EAFF0CF035DF28E2BB_m753DDC5DCEDA3E0CE8985492DECB239010A950E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_mBF3D6E57DF157614F273F3CDCA8FFC9E896FF8CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMatrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_mD84B9945BA647995B0BCCC8377EB97CB554D05DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m768535B1FBE236A964B82DC2B1781D823A20C5AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_mD8F5521623FE2C540F85E6C72D6D909EEA295229_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_mCCDE0A157C504E37253D847A746D8FE89ADC4A5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_m39105CE05F335D44D01ADCD81264E09B432F6B40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_BoneWeightArray_tE27276013064B700B2E9794E78A8413B4442B1A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Bounds_t211AB57F2637B2F66BE77D462E45D1A018E9C442_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color32Array_t9B1C937FEF6D85CB0D1720B009554CE655E80DE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Matrix4x4Array_tDD91AD7E64D84E68919B835B1714AFFE56FAA997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2Array_t41587B855D1799ADEFF3BE2182C0F87B35F2DDB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3Array_t9704F872D5CC2A9118274ADEE416C0875AC42CB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4Array_tCA2973339F6A2EC1CFF861CCDF21C435ABF5A978_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_intArray_tA8EB3EE2DAD629224B2904D493DE6504076E335F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tF2C6B48AEF5F70E0C8CE33C9556FDFC7572D3A20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral057B3BF6FF011F75099CE84564ABE58C872288F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05F6EAE9494DB0450DB43C3691D64129962ED751);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E4D3331FC63E1049224549936FAF640E4D0E137);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35E33D0D22ADA345341B551985605AAB4DCA8260);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F8C67011B093417D89377E9DBF57017943FDA11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FDCFD736F0A209B476605D31B517A9412093986);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral695F5F858DF14780BC5525F0AA16CE70EB9C45E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EF771DC1DDB512A8FAB7AF357549BD349530F7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A92D5C8DA89C6E80E74B010F4E5AAA4F4E0C945);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1C30CF60A2E69EC232854CAED20E364C46D862F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB780B47DCEE9180898A6245E7652C29FC7F6A7BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF92C939C85D8888B68A1C0E975839B22C2F1CA0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18BDC2D30848C2775BAB81B1520EB5760429863);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD52AA944806C2B3BFAE356FC41F3C256E5900C8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD66FED67EA1ADEC87F718BC4CEE5ABBE11B4ED17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE984152D2D2AC4D32829866F5F861E305BC13E2A);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_10 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_11 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_12 = NULL;
	float V_13 = 0.0f;
	RuntimeObject* V_14 = NULL;
	{
		// var instance = (UnityEngine.Mesh)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)CastclassSealed((RuntimeObject*)L_0, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var));
		// if (instance == null)
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		return;
	}

IL_0011:
	{
		// if (!instance.isReadable)
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = Mesh_get_isReadable_m3309900DB9B66BD321128839E6801722D15CD1E0(L_3, NULL);
		if (L_4)
		{
			goto IL_0025;
		}
	}
	{
		// ES3Internal.ES3Debug.LogWarning("Easy Save cannot load the vertices for this Mesh because it is not marked as readable, so it will be loaded by reference. To load the vertex data for this Mesh, check the 'Read/Write Enabled' checkbox in its Import Settings.", instance);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_5 = V_0;
		ES3Debug_LogWarning_m1A2E2832ABC2B0068C50FF36590CFFFE11CEB891(_stringLiteralD18BDC2D30848C2775BAB81B1520EB5760429863, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_5, 0, NULL);
	}

IL_0025:
	{
		// foreach (string propertyName in reader.Properties)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_6 = ___reader0;
		NullCheck(L_6);
		ES3ReaderPropertyEnumerator_t2948B3DC88B88DF76A6ED9F660F7055F08697C37* L_7;
		L_7 = VirtualFuncInvoker0< ES3ReaderPropertyEnumerator_t2948B3DC88B88DF76A6ED9F660F7055F08697C37* >::Invoke(39 /* ES3Reader/ES3ReaderPropertyEnumerator ES3Reader::get_Properties() */, L_6);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = ES3ReaderPropertyEnumerator_GetEnumerator_mBF25A2B7B71596A1DCB090DD81E708091D1D4478(L_7, NULL);
		V_1 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_04c6:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_9 = V_1;
					V_14 = ((RuntimeObject*)IsInst((RuntimeObject*)L_9, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_10 = V_14;
					if (!L_10)
					{
						goto IL_04d9;
					}
				}
				{
					RuntimeObject* L_11 = V_14;
					NullCheck(L_11);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_11);
				}

IL_04d9:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_04b9_1;
			}

IL_0036_1:
			{
				// foreach (string propertyName in reader.Properties)
				RuntimeObject* L_12 = V_1;
				NullCheck(L_12);
				RuntimeObject* L_13;
				L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_12);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_13, String_t_il2cpp_TypeInfo_var));
				// if (!instance.isReadable)
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_14 = V_0;
				NullCheck(L_14);
				bool L_15;
				L_15 = Mesh_get_isReadable_m3309900DB9B66BD321128839E6801722D15CD1E0(L_14, NULL);
				if (L_15)
				{
					goto IL_0055_1;
				}
			}
			{
				// reader.Skip();
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_16 = ___reader0;
				NullCheck(L_16);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
				// continue;
				goto IL_04b9_1;
			}

IL_0055_1:
			{
				String_t* L_17 = V_2;
				uint32_t L_18;
				L_18 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_17, NULL);
				V_4 = L_18;
				uint32_t L_19 = V_4;
				if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1146540468)))))
				{
					goto IL_00f8_1;
				}
			}
			{
				uint32_t L_20 = V_4;
				if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)1229132946)))))
				{
					goto IL_00b5_1;
				}
			}
			{
				uint32_t L_21 = V_4;
				if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)502968136)))))
				{
					goto IL_0098_1;
				}
			}
			{
				uint32_t L_22 = V_4;
				if ((((int32_t)L_22) == ((int32_t)((int32_t)247908339))))
				{
					goto IL_0202_1;
				}
			}
			{
				uint32_t L_23 = V_4;
				if ((((int32_t)L_23) == ((int32_t)((int32_t)502968136))))
				{
					goto IL_01c3_1;
				}
			}
			{
				goto IL_04b3_1;
			}

IL_0098_1:
			{
				uint32_t L_24 = V_4;
				if ((((int32_t)L_24) == ((int32_t)((int32_t)1029089800))))
				{
					goto IL_01ae_1;
				}
			}
			{
				uint32_t L_25 = V_4;
				if ((((int32_t)L_25) == ((int32_t)((int32_t)1229132946))))
				{
					goto IL_022c_1;
				}
			}
			{
				goto IL_04b3_1;
			}

IL_00b5_1:
			{
				uint32_t L_26 = V_4;
				if ((!(((uint32_t)L_26) <= ((uint32_t)((int32_t)-1971520285)))))
				{
					goto IL_00db_1;
				}
			}
			{
				uint32_t L_27 = V_4;
				if ((((int32_t)L_27) == ((int32_t)((int32_t)2082523534))))
				{
					goto IL_01ed_1;
				}
			}
			{
				uint32_t L_28 = V_4;
				if ((((int32_t)L_28) == ((int32_t)((int32_t)-1971520285))))
				{
					goto IL_0217_1;
				}
			}
			{
				goto IL_04b3_1;
			}

IL_00db_1:
			{
				uint32_t L_29 = V_4;
				if ((((int32_t)L_29) == ((int32_t)((int32_t)-1925595674))))
				{
					goto IL_0199_1;
				}
			}
			{
				uint32_t L_30 = V_4;
				if ((((int32_t)L_30) == ((int32_t)((int32_t)-1146540468))))
				{
					goto IL_02bf_1;
				}
			}
			{
				goto IL_04b3_1;
			}

IL_00f8_1:
			{
				uint32_t L_31 = V_4;
				if ((!(((uint32_t)L_31) <= ((uint32_t)((int32_t)-389315276)))))
				{
					goto IL_0141_1;
				}
			}
			{
				uint32_t L_32 = V_4;
				if ((!(((uint32_t)L_32) <= ((uint32_t)((int32_t)-660245694)))))
				{
					goto IL_0127_1;
				}
			}
			{
				uint32_t L_33 = V_4;
				if ((((int32_t)L_33) == ((int32_t)((int32_t)-1068190384))))
				{
					goto IL_01d8_1;
				}
			}
			{
				uint32_t L_34 = V_4;
				if ((((int32_t)L_34) == ((int32_t)((int32_t)-660245694))))
				{
					goto IL_0295_1;
				}
			}
			{
				goto IL_04b3_1;
			}

IL_0127_1:
			{
				uint32_t L_35 = V_4;
				if ((((int32_t)L_35) == ((int32_t)((int32_t)-609673453))))
				{
					goto IL_02aa_1;
				}
			}
			{
				uint32_t L_36 = V_4;
				if ((((int32_t)L_36) == ((int32_t)((int32_t)-389315276))))
				{
					goto IL_0184_1;
				}
			}
			{
				goto IL_04b3_1;
			}

IL_0141_1:
			{
				uint32_t L_37 = V_4;
				if ((!(((uint32_t)L_37) <= ((uint32_t)((int32_t)-191268896)))))
				{
					goto IL_0167_1;
				}
			}
			{
				uint32_t L_38 = V_4;
				if ((((int32_t)L_38) == ((int32_t)((int32_t)-220709380))))
				{
					goto IL_0280_1;
				}
			}
			{
				uint32_t L_39 = V_4;
				if ((((int32_t)L_39) == ((int32_t)((int32_t)-191268896))))
				{
					goto IL_0241_1;
				}
			}
			{
				goto IL_04b3_1;
			}

IL_0167_1:
			{
				uint32_t L_40 = V_4;
				if ((((int32_t)L_40) == ((int32_t)((int32_t)-174491277))))
				{
					goto IL_0256_1;
				}
			}
			{
				uint32_t L_41 = V_4;
				if ((((int32_t)L_41) == ((int32_t)((int32_t)-90603182))))
				{
					goto IL_026b_1;
				}
			}
			{
				goto IL_04b3_1;
			}

IL_0184_1:
			{
				String_t* L_42 = V_2;
				bool L_43;
				L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralE984152D2D2AC4D32829866F5F861E305BC13E2A, NULL);
				if (L_43)
				{
					goto IL_02d4_1;
				}
			}
			{
				goto IL_04b3_1;
			}

IL_0199_1:
			{
				String_t* L_44 = V_2;
				bool L_45;
				L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_45)
				{
					goto IL_02e5_1;
				}
			}
			{
				goto IL_04b3_1;
			}

IL_01ae_1:
			{
				String_t* L_46 = V_2;
				bool L_47;
				L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteral057B3BF6FF011F75099CE84564ABE58C872288F4, NULL);
				if (L_47)
				{
					goto IL_02fb_1;
				}
			}
			{
				goto IL_04b3_1;
			}

IL_01c3_1:
			{
				String_t* L_48 = V_2;
				bool L_49;
				L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteralB780B47DCEE9180898A6245E7652C29FC7F6A7BC, NULL);
				if (L_49)
				{
					goto IL_0311_1;
				}
			}
			{
				goto IL_04b3_1;
			}

IL_01d8_1:
			{
				String_t* L_50 = V_2;
				bool L_51;
				L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral3FDCFD736F0A209B476605D31B517A9412093986, NULL);
				if (L_51)
				{
					goto IL_0327_1;
				}
			}
			{
				goto IL_04b3_1;
			}

IL_01ed_1:
			{
				String_t* L_52 = V_2;
				bool L_53;
				L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteralB1C30CF60A2E69EC232854CAED20E364C46D862F, NULL);
				if (L_53)
				{
					goto IL_033d_1;
				}
			}
			{
				goto IL_04b3_1;
			}

IL_0202_1:
			{
				String_t* L_54 = V_2;
				bool L_55;
				L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteralBF92C939C85D8888B68A1C0E975839B22C2F1CA0, NULL);
				if (L_55)
				{
					goto IL_0353_1;
				}
			}
			{
				goto IL_04b3_1;
			}

IL_0217_1:
			{
				String_t* L_56 = V_2;
				bool L_57;
				L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteral695F5F858DF14780BC5525F0AA16CE70EB9C45E8, NULL);
				if (L_57)
				{
					goto IL_0369_1;
				}
			}
			{
				goto IL_04b3_1;
			}

IL_022c_1:
			{
				String_t* L_58 = V_2;
				bool L_59;
				L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral2E4D3331FC63E1049224549936FAF640E4D0E137, NULL);
				if (L_59)
				{
					goto IL_037f_1;
				}
			}
			{
				goto IL_04b3_1;
			}

IL_0241_1:
			{
				String_t* L_60 = V_2;
				bool L_61;
				L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral9A92D5C8DA89C6E80E74B010F4E5AAA4F4E0C945, NULL);
				if (L_61)
				{
					goto IL_0395_1;
				}
			}
			{
				goto IL_04b3_1;
			}

IL_0256_1:
			{
				String_t* L_62 = V_2;
				bool L_63;
				L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral05F6EAE9494DB0450DB43C3691D64129962ED751, NULL);
				if (L_63)
				{
					goto IL_03ab_1;
				}
			}
			{
				goto IL_04b3_1;
			}

IL_026b_1:
			{
				String_t* L_64 = V_2;
				bool L_65;
				L_65 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_64, _stringLiteralD66FED67EA1ADEC87F718BC4CEE5ABBE11B4ED17, NULL);
				if (L_65)
				{
					goto IL_03c1_1;
				}
			}
			{
				goto IL_04b3_1;
			}

IL_0280_1:
			{
				String_t* L_66 = V_2;
				bool L_67;
				L_67 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_66, _stringLiteralD52AA944806C2B3BFAE356FC41F3C256E5900C8D, NULL);
				if (L_67)
				{
					goto IL_03d7_1;
				}
			}
			{
				goto IL_04b3_1;
			}

IL_0295_1:
			{
				String_t* L_68 = V_2;
				bool L_69;
				L_69 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_68, _stringLiteral7EF771DC1DDB512A8FAB7AF357549BD349530F7D, NULL);
				if (L_69)
				{
					goto IL_03ed_1;
				}
			}
			{
				goto IL_04b3_1;
			}

IL_02aa_1:
			{
				String_t* L_70 = V_2;
				bool L_71;
				L_71 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_70, _stringLiteral3F8C67011B093417D89377E9DBF57017943FDA11, NULL);
				if (L_71)
				{
					goto IL_0403_1;
				}
			}
			{
				goto IL_04b3_1;
			}

IL_02bf_1:
			{
				String_t* L_72 = V_2;
				bool L_73;
				L_73 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_72, _stringLiteral35E33D0D22ADA345341B551985605AAB4DCA8260, NULL);
				if (L_73)
				{
					goto IL_043e_1;
				}
			}
			{
				goto IL_04b3_1;
			}

IL_02d4_1:
			{
				// instance.indexFormat = reader.Read<UnityEngine.Rendering.IndexFormat>();
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_74 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
				NullCheck(L_75);
				int32_t L_76;
				L_76 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisIndexFormat_tE699D38323B3B0887DF054EAFF0CF035DF28E2BB_m753DDC5DCEDA3E0CE8985492DECB239010A950E9_RuntimeMethod_var, L_75);
				NullCheck(L_74);
				Mesh_set_indexFormat_mCCC7837A0916FA7A272159DA6AF984B0022488F4(L_74, L_76, NULL);
				// break;
				goto IL_04b9_1;
			}

IL_02e5_1:
			{
				// instance.name = reader.Read<string>(ES3Type_string.Instance);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_77 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_79 = ((ES3Type_string_tF2C6B48AEF5F70E0C8CE33C9556FDFC7572D3A20_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tF2C6B48AEF5F70E0C8CE33C9556FDFC7572D3A20_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_78);
				String_t* L_80;
				L_80 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisString_t_m768535B1FBE236A964B82DC2B1781D823A20C5AB_RuntimeMethod_var, L_78, L_79);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_77);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_77, L_80, NULL);
				// break;
				goto IL_04b9_1;
			}

IL_02fb_1:
			{
				// instance.bounds = reader.Read<UnityEngine.Bounds>(ES3Type_Bounds.Instance);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_81 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_82 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_83 = ((ES3Type_Bounds_t211AB57F2637B2F66BE77D462E45D1A018E9C442_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Bounds_t211AB57F2637B2F66BE77D462E45D1A018E9C442_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_82);
				Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_84;
				L_84 = GenericVirtualFuncInvoker1< Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m757B5A2C186E2CA3E0A606C01A7FEEBA60C2BB8F_RuntimeMethod_var, L_82, L_83);
				NullCheck(L_81);
				Mesh_set_bounds_m2E526E9B61ACA77D644C22A9D8EB49583012B54E(L_81, L_84, NULL);
				// break;
				goto IL_04b9_1;
			}

IL_0311_1:
			{
				// instance.boneWeights = reader.Read<UnityEngine.BoneWeight[]>(ES3Type_BoneWeightArray.Instance);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_85 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_86 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_87 = ((ES3Type_BoneWeightArray_tE27276013064B700B2E9794E78A8413B4442B1A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_BoneWeightArray_tE27276013064B700B2E9794E78A8413B4442B1A2_il2cpp_TypeInfo_var))->___Instance_14;
				NullCheck(L_86);
				BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_88;
				L_88 = GenericVirtualFuncInvoker1< BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651_m603DAF8CC60FFBA1326CF540584FA401C996FE50_RuntimeMethod_var, L_86, L_87);
				NullCheck(L_85);
				Mesh_set_boneWeights_m4924E79620EDC7AAA1D05CFE8B535BB37F0E8FA7(L_85, L_88, NULL);
				// break;
				goto IL_04b9_1;
			}

IL_0327_1:
			{
				// instance.bindposes = reader.Read<UnityEngine.Matrix4x4[]>(ES3Type_Matrix4x4Array.Instance);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_89 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_90 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_91 = ((ES3Type_Matrix4x4Array_tDD91AD7E64D84E68919B835B1714AFFE56FAA997_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Matrix4x4Array_tDD91AD7E64D84E68919B835B1714AFFE56FAA997_il2cpp_TypeInfo_var))->___Instance_14;
				NullCheck(L_90);
				Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_92;
				L_92 = GenericVirtualFuncInvoker1< Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMatrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_mD84B9945BA647995B0BCCC8377EB97CB554D05DA_RuntimeMethod_var, L_90, L_91);
				NullCheck(L_89);
				Mesh_set_bindposes_m7BD70B3BC121F436B5836EABDE5E99CAD64C82FF(L_89, L_92, NULL);
				// break;
				goto IL_04b9_1;
			}

IL_033d_1:
			{
				// instance.vertices = reader.Read<UnityEngine.Vector3[]>(ES3Type_Vector3Array.Instance);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_93 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_94 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_95 = ((ES3Type_Vector3Array_t9704F872D5CC2A9118274ADEE416C0875AC42CB0_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3Array_t9704F872D5CC2A9118274ADEE416C0875AC42CB0_il2cpp_TypeInfo_var))->___Instance_14;
				NullCheck(L_94);
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_96;
				L_96 = GenericVirtualFuncInvoker1< Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_mCCDE0A157C504E37253D847A746D8FE89ADC4A5E_RuntimeMethod_var, L_94, L_95);
				NullCheck(L_93);
				Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_93, L_96, NULL);
				// break;
				goto IL_04b9_1;
			}

IL_0353_1:
			{
				// instance.normals = reader.Read<UnityEngine.Vector3[]>(ES3Type_Vector3Array.Instance);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_97 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_98 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_99 = ((ES3Type_Vector3Array_t9704F872D5CC2A9118274ADEE416C0875AC42CB0_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3Array_t9704F872D5CC2A9118274ADEE416C0875AC42CB0_il2cpp_TypeInfo_var))->___Instance_14;
				NullCheck(L_98);
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_100;
				L_100 = GenericVirtualFuncInvoker1< Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_mCCDE0A157C504E37253D847A746D8FE89ADC4A5E_RuntimeMethod_var, L_98, L_99);
				NullCheck(L_97);
				Mesh_set_normals_m85D73193C49211BE9FA135FF72D5749B16A4760B(L_97, L_100, NULL);
				// break;
				goto IL_04b9_1;
			}

IL_0369_1:
			{
				// instance.tangents = reader.Read<UnityEngine.Vector4[]>(ES3Type_Vector4Array.Instance);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_101 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_102 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_103 = ((ES3Type_Vector4Array_tCA2973339F6A2EC1CFF861CCDF21C435ABF5A978_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4Array_tCA2973339F6A2EC1CFF861CCDF21C435ABF5A978_il2cpp_TypeInfo_var))->___Instance_14;
				NullCheck(L_102);
				Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_104;
				L_104 = GenericVirtualFuncInvoker1< Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_m39105CE05F335D44D01ADCD81264E09B432F6B40_RuntimeMethod_var, L_102, L_103);
				NullCheck(L_101);
				Mesh_set_tangents_mF547B7E4F9C70FB7CD6168139180A70AD306169B(L_101, L_104, NULL);
				// break;
				goto IL_04b9_1;
			}

IL_037f_1:
			{
				// instance.uv = reader.Read<UnityEngine.Vector2[]>(ES3Type_Vector2Array.Instance);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_105 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_106 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_107 = ((ES3Type_Vector2Array_t41587B855D1799ADEFF3BE2182C0F87B35F2DDB1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2Array_t41587B855D1799ADEFF3BE2182C0F87B35F2DDB1_il2cpp_TypeInfo_var))->___Instance_14;
				NullCheck(L_106);
				Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_108;
				L_108 = GenericVirtualFuncInvoker1< Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_mD8F5521623FE2C540F85E6C72D6D909EEA295229_RuntimeMethod_var, L_106, L_107);
				NullCheck(L_105);
				Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617(L_105, L_108, NULL);
				// break;
				goto IL_04b9_1;
			}

IL_0395_1:
			{
				// instance.uv2 = reader.Read<UnityEngine.Vector2[]>(ES3Type_Vector2Array.Instance);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_109 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_110 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_111 = ((ES3Type_Vector2Array_t41587B855D1799ADEFF3BE2182C0F87B35F2DDB1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2Array_t41587B855D1799ADEFF3BE2182C0F87B35F2DDB1_il2cpp_TypeInfo_var))->___Instance_14;
				NullCheck(L_110);
				Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_112;
				L_112 = GenericVirtualFuncInvoker1< Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_mD8F5521623FE2C540F85E6C72D6D909EEA295229_RuntimeMethod_var, L_110, L_111);
				NullCheck(L_109);
				Mesh_set_uv2_m37B442C04EBB029C0AD9545C54F95D9BDAD8E9B5(L_109, L_112, NULL);
				// break;
				goto IL_04b9_1;
			}

IL_03ab_1:
			{
				// instance.uv3 = reader.Read<UnityEngine.Vector2[]>(ES3Type_Vector2Array.Instance);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_113 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_114 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_115 = ((ES3Type_Vector2Array_t41587B855D1799ADEFF3BE2182C0F87B35F2DDB1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2Array_t41587B855D1799ADEFF3BE2182C0F87B35F2DDB1_il2cpp_TypeInfo_var))->___Instance_14;
				NullCheck(L_114);
				Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_116;
				L_116 = GenericVirtualFuncInvoker1< Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_mD8F5521623FE2C540F85E6C72D6D909EEA295229_RuntimeMethod_var, L_114, L_115);
				NullCheck(L_113);
				Mesh_set_uv3_m447FE1800C6FA36F8E4AD996A001F4A26E04A5A2(L_113, L_116, NULL);
				// break;
				goto IL_04b9_1;
			}

IL_03c1_1:
			{
				// instance.uv4 = reader.Read<UnityEngine.Vector2[]>(ES3Type_Vector2Array.Instance);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_117 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_118 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_119 = ((ES3Type_Vector2Array_t41587B855D1799ADEFF3BE2182C0F87B35F2DDB1_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2Array_t41587B855D1799ADEFF3BE2182C0F87B35F2DDB1_il2cpp_TypeInfo_var))->___Instance_14;
				NullCheck(L_118);
				Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_120;
				L_120 = GenericVirtualFuncInvoker1< Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_mD8F5521623FE2C540F85E6C72D6D909EEA295229_RuntimeMethod_var, L_118, L_119);
				NullCheck(L_117);
				Mesh_set_uv4_mC87359C3EEA7219ABF70375148B98DC95577F9A3(L_117, L_120, NULL);
				// break;
				goto IL_04b9_1;
			}

IL_03d7_1:
			{
				// instance.colors32 = reader.Read<UnityEngine.Color32[]>(ES3Type_Color32Array.Instance);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_121 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_122 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_123 = ((ES3Type_Color32Array_t9B1C937FEF6D85CB0D1720B009554CE655E80DE3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color32Array_t9B1C937FEF6D85CB0D1720B009554CE655E80DE3_il2cpp_TypeInfo_var))->___Instance_14;
				NullCheck(L_122);
				Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_124;
				L_124 = GenericVirtualFuncInvoker1< Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisColor32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_m5E9010145F8A830C0FF8244B782C692C46B12801_RuntimeMethod_var, L_122, L_123);
				NullCheck(L_121);
				Mesh_set_colors32_m0E4462B7A1D613E6FB15DD7584BCE5491C17820F(L_121, L_124, NULL);
				// break;
				goto IL_04b9_1;
			}

IL_03ed_1:
			{
				// instance.triangles = reader.Read<System.Int32[]>(ES3Type_intArray.Instance);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_125 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_126 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_127 = ((ES3Type_intArray_tA8EB3EE2DAD629224B2904D493DE6504076E335F_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_intArray_tA8EB3EE2DAD629224B2904D493DE6504076E335F_il2cpp_TypeInfo_var))->___Instance_14;
				NullCheck(L_126);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_128;
				L_128 = GenericVirtualFuncInvoker1< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_mBF3D6E57DF157614F273F3CDCA8FFC9E896FF8CF_RuntimeMethod_var, L_126, L_127);
				NullCheck(L_125);
				Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B(L_125, L_128, NULL);
				// break;
				goto IL_04b9_1;
			}

IL_0403_1:
			{
				// instance.subMeshCount = reader.Read<System.Int32>(ES3Type_int.Instance);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_129 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_130 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_131 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_130);
				int32_t L_132;
				L_132 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_130, L_131);
				NullCheck(L_129);
				Mesh_set_subMeshCount_m8E4DB392DB0621F7DFF8543FF3943A13072B8A28(L_129, L_132, NULL);
				// for(int i=0; i<instance.subMeshCount; i++)
				V_5 = 0;
				goto IL_0432_1;
			}

IL_0419_1:
			{
				// instance.SetTriangles(reader.ReadProperty<int[]>(ES3Type_intArray.Instance), i);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_133 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_134 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_135 = ((ES3Type_intArray_tA8EB3EE2DAD629224B2904D493DE6504076E335F_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_intArray_tA8EB3EE2DAD629224B2904D493DE6504076E335F_il2cpp_TypeInfo_var))->___Instance_14;
				NullCheck(L_134);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_136;
				L_136 = ES3Reader_ReadProperty_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_m6C9035BE2883EB25F75F9F10F318181A241A48D2(L_134, L_135, ES3Reader_ReadProperty_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_m6C9035BE2883EB25F75F9F10F318181A241A48D2_RuntimeMethod_var);
				int32_t L_137 = V_5;
				NullCheck(L_133);
				Mesh_SetTriangles_mD97664344427EB85BB6DC2EF91479E03B9114258(L_133, L_136, L_137, NULL);
				// for(int i=0; i<instance.subMeshCount; i++)
				int32_t L_138 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_138, 1));
			}

IL_0432_1:
			{
				// for(int i=0; i<instance.subMeshCount; i++)
				int32_t L_139 = V_5;
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_140 = V_0;
				NullCheck(L_140);
				int32_t L_141;
				L_141 = Mesh_get_subMeshCount_mC0141293D0F339D8D721CCA2612B32E6FD7E3F8B(L_140, NULL);
				if ((((int32_t)L_139) < ((int32_t)L_141)))
				{
					goto IL_0419_1;
				}
			}
			{
				// break;
				goto IL_04b9_1;
			}

IL_043e_1:
			{
				// instance.ClearBlendShapes();
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_142 = V_0;
				NullCheck(L_142);
				Mesh_ClearBlendShapes_mFA2C9D2FE4C326F5817E1994B3C8F4F116DB683F(L_142, NULL);
				// var blendShapeCount = reader.Read<System.Int32>(ES3Type_int.Instance);
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_143 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_144 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_143);
				int32_t L_145;
				L_145 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_143, L_144);
				V_3 = L_145;
				// for (int blendShapeIndex = 0; blendShapeIndex < blendShapeCount; blendShapeIndex++)
				V_6 = 0;
				goto IL_04ac_1;
			}

IL_0455_1:
			{
				// var shapeName = reader.ReadProperty<string>();
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_146 = ___reader0;
				NullCheck(L_146);
				String_t* L_147;
				L_147 = ES3Reader_ReadProperty_TisString_t_m77ABFD00F5FD79E6B5FCEFD9BEF8154F3F09312C(L_146, ES3Reader_ReadProperty_TisString_t_m77ABFD00F5FD79E6B5FCEFD9BEF8154F3F09312C_RuntimeMethod_var);
				V_7 = L_147;
				// var frameCount = reader.ReadProperty<int>();
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_148 = ___reader0;
				NullCheck(L_148);
				int32_t L_149;
				L_149 = ES3Reader_ReadProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E538BCA2B4B482D5ADE5F78261F8C1C23A6BEB3(L_148, ES3Reader_ReadProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E538BCA2B4B482D5ADE5F78261F8C1C23A6BEB3_RuntimeMethod_var);
				V_8 = L_149;
				// for (int frameIndex = 0; frameIndex < frameCount; frameIndex++)
				V_9 = 0;
				goto IL_04a0_1;
			}

IL_046a_1:
			{
				// var deltaVertices = reader.ReadProperty<Vector3[]>();
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_150 = ___reader0;
				NullCheck(L_150);
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_151;
				L_151 = ES3Reader_ReadProperty_TisVector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_mEB7164B7A1A04E2C12F76DB2E3DB6694CBF05D63(L_150, ES3Reader_ReadProperty_TisVector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_mEB7164B7A1A04E2C12F76DB2E3DB6694CBF05D63_RuntimeMethod_var);
				V_10 = L_151;
				// var deltaNormals = reader.ReadProperty<Vector3[]>();
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_152 = ___reader0;
				NullCheck(L_152);
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_153;
				L_153 = ES3Reader_ReadProperty_TisVector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_mEB7164B7A1A04E2C12F76DB2E3DB6694CBF05D63(L_152, ES3Reader_ReadProperty_TisVector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_mEB7164B7A1A04E2C12F76DB2E3DB6694CBF05D63_RuntimeMethod_var);
				V_11 = L_153;
				// var deltaTangents = reader.ReadProperty<Vector3[]>();
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_154 = ___reader0;
				NullCheck(L_154);
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_155;
				L_155 = ES3Reader_ReadProperty_TisVector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_mEB7164B7A1A04E2C12F76DB2E3DB6694CBF05D63(L_154, ES3Reader_ReadProperty_TisVector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_mEB7164B7A1A04E2C12F76DB2E3DB6694CBF05D63_RuntimeMethod_var);
				V_12 = L_155;
				// var frameWeight = reader.ReadProperty<float>();
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_156 = ___reader0;
				NullCheck(L_156);
				float L_157;
				L_157 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m5388F68680AEF936029792873C798605E4A56B9F(L_156, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m5388F68680AEF936029792873C798605E4A56B9F_RuntimeMethod_var);
				V_13 = L_157;
				// instance.AddBlendShapeFrame(shapeName, frameWeight, deltaVertices, deltaNormals, deltaTangents);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_158 = V_0;
				String_t* L_159 = V_7;
				float L_160 = V_13;
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_161 = V_10;
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_162 = V_11;
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_163 = V_12;
				NullCheck(L_158);
				Mesh_AddBlendShapeFrame_m57DCAB3A7D6916ABD1D1B4FB0F8FC3BD3D876E11(L_158, L_159, L_160, L_161, L_162, L_163, NULL);
				// for (int frameIndex = 0; frameIndex < frameCount; frameIndex++)
				int32_t L_164 = V_9;
				V_9 = ((int32_t)il2cpp_codegen_add(L_164, 1));
			}

IL_04a0_1:
			{
				// for (int frameIndex = 0; frameIndex < frameCount; frameIndex++)
				int32_t L_165 = V_9;
				int32_t L_166 = V_8;
				if ((((int32_t)L_165) < ((int32_t)L_166)))
				{
					goto IL_046a_1;
				}
			}
			{
				// for (int blendShapeIndex = 0; blendShapeIndex < blendShapeCount; blendShapeIndex++)
				int32_t L_167 = V_6;
				V_6 = ((int32_t)il2cpp_codegen_add(L_167, 1));
			}

IL_04ac_1:
			{
				// for (int blendShapeIndex = 0; blendShapeIndex < blendShapeCount; blendShapeIndex++)
				int32_t L_168 = V_6;
				int32_t L_169 = V_3;
				if ((((int32_t)L_168) < ((int32_t)L_169)))
				{
					goto IL_0455_1;
				}
			}
			{
				// break;
				goto IL_04b9_1;
			}

IL_04b3_1:
			{
				// reader.Skip();
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_170 = ___reader0;
				NullCheck(L_170);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_170);
			}

IL_04b9_1:
			{
				// foreach (string propertyName in reader.Properties)
				RuntimeObject* L_171 = V_1;
				NullCheck(L_171);
				bool L_172;
				L_172 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_171);
				if (L_172)
				{
					goto IL_0036_1;
				}
			}
			{
				goto IL_04da;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_04da:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MeshCollider::ReadComponent<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MeshCollider_ReadComponent_TisRuntimeObject_mEA9F35C2A89780665C9BF4A1EB3E973CAD7FD304_gshared (ES3Type_MeshCollider_t203FDD11C59795E463BD58FFAE7346BA2910C948* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_mB373D7B8C51C9612A52C78209491DF864B63F56D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisPhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131_m22B142AFFF4F63E5C5ACB7650699BB4294BCCED6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Mesh_tC459CC632DC495F2F0DAFAA32F718B1F73B6381D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_PhysicMaterial_t46CF856C9DE9E5AD82B9AB43028BBA900B0E0152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3450A2BB8216F70D528215A296AEDB3D212C7EED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral416E9D0238C213CFB1C61EDAB93C78CA25E2D04B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72ECDD9F8744E37D4431E7D17FE954DD88ABF383);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAAD864060C726C9944913CA5D3695DC7027ADAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCA8FD5F6CF117BC613330313E82DF905908323F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// var instance = (UnityEngine.MeshCollider)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455*)CastclassClass((RuntimeObject*)L_0, MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_il2cpp_TypeInfo_var));
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

FINALLY_00f9:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_3;
					if (!L_5)
					{
						goto IL_0109;
					}
				}
				{
					RuntimeObject* L_6 = V_3;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0109:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00ec_1;
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
				bool L_10;
				L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteralBCA8FD5F6CF117BC613330313E82DF905908323F, NULL);
				if (L_10)
				{
					goto IL_0074_1;
				}
			}
			{
				String_t* L_11 = V_2;
				bool L_12;
				L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralBAAD864060C726C9944913CA5D3695DC7027ADAA, NULL);
				if (L_12)
				{
					goto IL_0087_1;
				}
			}
			{
				String_t* L_13 = V_2;
				bool L_14;
				L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
				if (L_14)
				{
					goto IL_009a_1;
				}
			}
			{
				String_t* L_15 = V_2;
				bool L_16;
				L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral416E9D0238C213CFB1C61EDAB93C78CA25E2D04B, NULL);
				if (L_16)
				{
					goto IL_00ad_1;
				}
			}
			{
				String_t* L_17 = V_2;
				bool L_18;
				L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral72ECDD9F8744E37D4431E7D17FE954DD88ABF383, NULL);
				if (L_18)
				{
					goto IL_00c0_1;
				}
			}
			{
				String_t* L_19 = V_2;
				bool L_20;
				L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral3450A2BB8216F70D528215A296AEDB3D212C7EED, NULL);
				if (L_20)
				{
					goto IL_00d3_1;
				}
			}
			{
				goto IL_00e6_1;
			}

IL_0074_1:
			{
				// instance.sharedMesh = reader.Read<UnityEngine.Mesh>(ES3Type_Mesh.Instance);
				MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_21 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_22 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_23 = ((ES3Type_Mesh_tC459CC632DC495F2F0DAFAA32F718B1F73B6381D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Mesh_tC459CC632DC495F2F0DAFAA32F718B1F73B6381D_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_22);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_24;
				L_24 = GenericVirtualFuncInvoker1< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_mB373D7B8C51C9612A52C78209491DF864B63F56D_RuntimeMethod_var, L_22, L_23);
				NullCheck(L_21);
				MeshCollider_set_sharedMesh_m05F87B9AC04139285EBBCC159F77B51C6940E79C(L_21, L_24, NULL);
				// break;
				goto IL_00ec_1;
			}

IL_0087_1:
			{
				// instance.convex = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_25 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_26 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_27 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_26);
				bool L_28;
				L_28 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_26, L_27);
				NullCheck(L_25);
				MeshCollider_set_convex_m20482D687240D0921BA76B77983403E55A2E3CE1(L_25, L_28, NULL);
				// break;
				goto IL_00ec_1;
			}

IL_009a_1:
			{
				// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_29 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_31 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_30);
				bool L_32;
				L_32 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_30, L_31);
				NullCheck((Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)L_29);
				Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70((Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)L_29, L_32, NULL);
				// break;
				goto IL_00ec_1;
			}

IL_00ad_1:
			{
				// instance.isTrigger = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_33 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_34);
				bool L_36;
				L_36 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_34, L_35);
				NullCheck((Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)L_33);
				Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78((Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)L_33, L_36, NULL);
				// break;
				goto IL_00ec_1;
			}

IL_00c0_1:
			{
				// instance.contactOffset = reader.Read<System.Single>(ES3Type_float.Instance);
				MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_37 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_38 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_39 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_38);
				float L_40;
				L_40 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_38, L_39);
				NullCheck((Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)L_37);
				Collider_set_contactOffset_mEDA8D778F641338733D140E76FCA0D6B29203B52((Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)L_37, L_40, NULL);
				// break;
				goto IL_00ec_1;
			}

IL_00d3_1:
			{
				// instance.sharedMaterial = reader.Read<UnityEngine.PhysicMaterial>(ES3Type_PhysicMaterial.Instance);
				MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_41 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_PhysicMaterial_t46CF856C9DE9E5AD82B9AB43028BBA900B0E0152_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_PhysicMaterial_t46CF856C9DE9E5AD82B9AB43028BBA900B0E0152_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_42);
				PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* L_44;
				L_44 = GenericVirtualFuncInvoker1< PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisPhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131_m22B142AFFF4F63E5C5ACB7650699BB4294BCCED6_RuntimeMethod_var, L_42, L_43);
				NullCheck((Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)L_41);
				Collider_set_sharedMaterial_m2AC21AB939A377ABACF8282CDC52EE61B54107ED((Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)L_41, L_44, NULL);
				// break;
				goto IL_00ec_1;
			}

IL_00e6_1:
			{
				// reader.Skip();
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
				NullCheck(L_45);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_45);
			}

IL_00ec_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_46 = V_1;
				NullCheck(L_46);
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_46);
				if (L_47)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_010a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_010a:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MeshFilter::ReadComponent<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MeshFilter_ReadComponent_TisRuntimeObject_m83B6AAC653921EE039DA65F52F55C05135648A6D_gshared (ES3Type_MeshFilter_t3607A6E665CB440763D08F3CCF57ECCB1D85A588* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_mB373D7B8C51C9612A52C78209491DF864B63F56D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Mesh_tC459CC632DC495F2F0DAFAA32F718B1F73B6381D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCA8FD5F6CF117BC613330313E82DF905908323F);
		s_Il2CppMethodInitialized = true;
	}
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// var instance = (UnityEngine.MeshFilter)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5*)CastclassSealed((RuntimeObject*)L_0, MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_il2cpp_TypeInfo_var));
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

FINALLY_004f:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_2;
					if (!L_5)
					{
						goto IL_005f;
					}
				}
				{
					RuntimeObject* L_6 = V_2;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_005f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0045_1;
			}

IL_0015_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				bool L_9;
				L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var)), _stringLiteralBCA8FD5F6CF117BC613330313E82DF905908323F, NULL);
				if (!L_9)
				{
					goto IL_003f_1;
				}
			}
			{
				// instance.sharedMesh = reader.Read<UnityEngine.Mesh>(ES3Type_Mesh.Instance);
				MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_10 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_11 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_12 = ((ES3Type_Mesh_tC459CC632DC495F2F0DAFAA32F718B1F73B6381D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Mesh_tC459CC632DC495F2F0DAFAA32F718B1F73B6381D_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_11);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_13;
				L_13 = GenericVirtualFuncInvoker1< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_mB373D7B8C51C9612A52C78209491DF864B63F56D_RuntimeMethod_var, L_11, L_12);
				NullCheck(L_10);
				MeshFilter_set_sharedMesh_m946F7E3F583761982642BDA4753784AF1DF6E16F(L_10, L_13, NULL);
				// break;
				goto IL_0045_1;
			}

IL_003f_1:
			{
				// reader.Skip();
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_14 = ___reader0;
				NullCheck(L_14);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_14);
			}

IL_0045_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_15 = V_1;
				NullCheck(L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_15);
				if (L_16)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0060;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0060:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MeshRenderer::ReadComponent<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MeshRenderer_ReadComponent_TisRuntimeObject_mFC208A7CF70C54B865746C503BD97ECAF33073CB_gshared (ES3Type_MeshRenderer_t415A4AEABDD0CF78CF3BA7F05F1F8D36C62DCC92* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m5A3742E41A2B632BBC94874A9EF9087EAC33BBF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLightProbeUsage_tC6292C7B7CBA0E5AA2A56F40D71F58A7E06C2948_m0D362281541B321DDF5152BA2FBB79A5365F9EB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_m31174DB686C153609DAFC00E5912B82F4C51C4BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_mB373D7B8C51C9612A52C78209491DF864B63F56D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMotionVectorGenerationMode_tE87C61556749260EF5429A0F8FE55DAD30EEAFCB_m69507452EE500B836A206B93C7A7D8F1655E0E87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisReflectionProbeUsage_t033508C14CD4AD926A3A215D19913DC21EA22705_m4DDADF6D026EF6288C6C705F87B838D3BE9342BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisShadowCastingMode_tF30806698B37CF120A1A506BD7549EAF308E7C6D_m5D515D5930F546F97E5C8689586A0633E40B2BE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m768535B1FBE236A964B82DC2B1781D823A20C5AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m76F72323D090F7BFE241E75E77F0B53A709F00CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA2A458447E513C25051A485702FF5B014291F986_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_GameObject_tCE2D774686F76B9AD7B35B975B97675F84F677E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Mesh_tC459CC632DC495F2F0DAFAA32F718B1F73B6381D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Transform_tC86C7755D546F3D4A97553E19C31F9E025AB13A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tF2C6B48AEF5F70E0C8CE33C9556FDFC7572D3A20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F9261ABE85940E10CA48B7B42F1E5267F122734);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23EC2E17148B28CC0FCAC476B21E689161203B19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral338DFB21C4BCDE10C2A6B0F6B758581AB45E283A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC42735CF07DB9169F6821DC94EB45DE6B5E1AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73792CCBAF937C765700AA0D7388BC226F003166);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82A38EB534B163662598A55A70842F5AA8919477);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral843D6122FFBBF465C80ECD6FDFC0DF88BEAF4E14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral892582A238DF4FFEB2A2E7DD5D90A9A7AC6C26C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DD0A7170C2DECE4F5E82F96AB9B00AAEBA9F438);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F76FFC503D9127950E3EAD1DFD82A8C6C91F728);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0ECA3668A8B14855295BD8DD5E88309AF31330B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA61873D60BF9FB4C32F7EA140D55CF8C712B7E86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDBEBC1E8A863EAF2A1EFDC4D2393F1540ABF0C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8D7651AAAFAAA9A55123A4B14C546BC27C603E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0D915A2B403702AB1F18A340F6557F4030455A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDA23639367EB0B86F361EA02AD294BDFDE6BA0B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	uint32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	{
		// var instance = (UnityEngine.MeshRenderer)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE*)CastclassClass((RuntimeObject*)L_0, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_il2cpp_TypeInfo_var));
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

FINALLY_0406:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_4;
					if (!L_5)
					{
						goto IL_0419;
					}
				}
				{
					RuntimeObject* L_6 = V_4;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0419:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_03f9_1;
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
				if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)1039612288)))))
				{
					goto IL_00ba_1;
				}
			}
			{
				uint32_t L_12 = V_3;
				if ((!(((uint32_t)L_12) <= ((uint32_t)((int32_t)394058932)))))
				{
					goto IL_007c_1;
				}
			}
			{
				uint32_t L_13 = V_3;
				if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)258071601)))))
				{
					goto IL_0061_1;
				}
			}
			{
				uint32_t L_14 = V_3;
				if ((((int32_t)L_14) == ((int32_t)((int32_t)49525662))))
				{
					goto IL_015b_1;
				}
			}
			{
				uint32_t L_15 = V_3;
				if ((((int32_t)L_15) == ((int32_t)((int32_t)258071601))))
				{
					goto IL_0257_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_0061_1:
			{
				uint32_t L_16 = V_3;
				if ((((int32_t)L_16) == ((int32_t)((int32_t)369730773))))
				{
					goto IL_01af_1;
				}
			}
			{
				uint32_t L_17 = V_3;
				if ((((int32_t)L_17) == ((int32_t)((int32_t)394058932))))
				{
					goto IL_01d9_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_007c_1:
			{
				uint32_t L_18 = V_3;
				if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)594369155)))))
				{
					goto IL_009f_1;
				}
			}
			{
				uint32_t L_19 = V_3;
				if ((((int32_t)L_19) == ((int32_t)((int32_t)560621451))))
				{
					goto IL_0185_1;
				}
			}
			{
				uint32_t L_20 = V_3;
				if ((((int32_t)L_20) == ((int32_t)((int32_t)594369155))))
				{
					goto IL_0146_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_009f_1:
			{
				uint32_t L_21 = V_3;
				if ((((int32_t)L_21) == ((int32_t)((int32_t)899577978))))
				{
					goto IL_01c4_1;
				}
			}
			{
				uint32_t L_22 = V_3;
				if ((((int32_t)L_22) == ((int32_t)((int32_t)1039612288))))
				{
					goto IL_0242_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_00ba_1:
			{
				uint32_t L_23 = V_3;
				if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)2066010489)))))
				{
					goto IL_0100_1;
				}
			}
			{
				uint32_t L_24 = V_3;
				if ((!(((uint32_t)L_24) <= ((uint32_t)((int32_t)1681590497)))))
				{
					goto IL_00e5_1;
				}
			}
			{
				uint32_t L_25 = V_3;
				if ((((int32_t)L_25) == ((int32_t)((int32_t)1435400483))))
				{
					goto IL_026c_1;
				}
			}
			{
				uint32_t L_26 = V_3;
				if ((((int32_t)L_26) == ((int32_t)((int32_t)1681590497))))
				{
					goto IL_0296_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_00e5_1:
			{
				uint32_t L_27 = V_3;
				if ((((int32_t)L_27) == ((int32_t)((int32_t)2056288458))))
				{
					goto IL_019a_1;
				}
			}
			{
				uint32_t L_28 = V_3;
				if ((((int32_t)L_28) == ((int32_t)((int32_t)2066010489))))
				{
					goto IL_01ee_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_0100_1:
			{
				uint32_t L_29 = V_3;
				if ((!(((uint32_t)L_29) <= ((uint32_t)((int32_t)-879427281)))))
				{
					goto IL_0120_1;
				}
			}
			{
				uint32_t L_30 = V_3;
				if ((((int32_t)L_30) == ((int32_t)((int32_t)-1450632603))))
				{
					goto IL_0170_1;
				}
			}
			{
				uint32_t L_31 = V_3;
				if ((((int32_t)L_31) == ((int32_t)((int32_t)-879427281))))
				{
					goto IL_0203_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_0120_1:
			{
				uint32_t L_32 = V_3;
				if ((((int32_t)L_32) == ((int32_t)((int32_t)-641088577))))
				{
					goto IL_022d_1;
				}
			}
			{
				uint32_t L_33 = V_3;
				if ((((int32_t)L_33) == ((int32_t)((int32_t)-170312451))))
				{
					goto IL_0281_1;
				}
			}
			{
				uint32_t L_34 = V_3;
				if ((((int32_t)L_34) == ((int32_t)((int32_t)-95858950))))
				{
					goto IL_0218_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_0146_1:
			{
				String_t* L_35 = V_2;
				bool L_36;
				L_36 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_35, _stringLiteralA61873D60BF9FB4C32F7EA140D55CF8C712B7E86, NULL);
				if (L_36)
				{
					goto IL_02ab_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_015b_1:
			{
				String_t* L_37 = V_2;
				bool L_38;
				L_38 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_37, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
				if (L_38)
				{
					goto IL_02c1_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_0170_1:
			{
				String_t* L_39 = V_2;
				bool L_40;
				L_40 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_39, _stringLiteralD0D915A2B403702AB1F18A340F6557F4030455A2, NULL);
				if (L_40)
				{
					goto IL_02d7_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_0185_1:
			{
				String_t* L_41 = V_2;
				bool L_42;
				L_42 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_41, _stringLiteralDDA23639367EB0B86F361EA02AD294BDFDE6BA0B, NULL);
				if (L_42)
				{
					goto IL_02e8_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_019a_1:
			{
				String_t* L_43 = V_2;
				bool L_44;
				L_44 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_43, _stringLiteral23EC2E17148B28CC0FCAC476B21E689161203B19, NULL);
				if (L_44)
				{
					goto IL_02fe_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_01af_1:
			{
				String_t* L_45 = V_2;
				bool L_46;
				L_46 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_45, _stringLiteral82A38EB534B163662598A55A70842F5AA8919477, NULL);
				if (L_46)
				{
					goto IL_030f_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_01c4_1:
			{
				String_t* L_47 = V_2;
				bool L_48;
				L_48 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_47, _stringLiteral73792CCBAF937C765700AA0D7388BC226F003166, NULL);
				if (L_48)
				{
					goto IL_0325_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_01d9_1:
			{
				String_t* L_49 = V_2;
				bool L_50;
				L_50 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_49, _stringLiteralA0ECA3668A8B14855295BD8DD5E88309AF31330B, NULL);
				if (L_50)
				{
					goto IL_033b_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_01ee_1:
			{
				String_t* L_51 = V_2;
				bool L_52;
				L_52 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_51, _stringLiteral8DD0A7170C2DECE4F5E82F96AB9B00AAEBA9F438, NULL);
				if (L_52)
				{
					goto IL_0351_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_0203_1:
			{
				String_t* L_53 = V_2;
				bool L_54;
				L_54 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_53, _stringLiteralBDBEBC1E8A863EAF2A1EFDC4D2393F1540ABF0C9, NULL);
				if (L_54)
				{
					goto IL_0362_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_0218_1:
			{
				String_t* L_55 = V_2;
				bool L_56;
				L_56 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_55, _stringLiteral8F76FFC503D9127950E3EAD1DFD82A8C6C91F728, NULL);
				if (L_56)
				{
					goto IL_0378_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_022d_1:
			{
				String_t* L_57 = V_2;
				bool L_58;
				L_58 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_57, _stringLiteralC8D7651AAAFAAA9A55123A4B14C546BC27C603E7, NULL);
				if (L_58)
				{
					goto IL_0386_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_0242_1:
			{
				String_t* L_59 = V_2;
				bool L_60;
				L_60 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_59, _stringLiteral338DFB21C4BCDE10C2A6B0F6B758581AB45E283A, NULL);
				if (L_60)
				{
					goto IL_0399_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_0257_1:
			{
				String_t* L_61 = V_2;
				bool L_62;
				L_62 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_61, _stringLiteral843D6122FFBBF465C80ECD6FDFC0DF88BEAF4E14, NULL);
				if (L_62)
				{
					goto IL_03ac_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_026c_1:
			{
				String_t* L_63 = V_2;
				bool L_64;
				L_64 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_63, _stringLiteral3EC42735CF07DB9169F6821DC94EB45DE6B5E1AA, NULL);
				if (L_64)
				{
					goto IL_03ba_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_0281_1:
			{
				String_t* L_65 = V_2;
				bool L_66;
				L_66 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_65, _stringLiteral892582A238DF4FFEB2A2E7DD5D90A9A7AC6C26C4, NULL);
				if (L_66)
				{
					goto IL_03cd_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_0296_1:
			{
				String_t* L_67 = V_2;
				bool L_68;
				L_68 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_67, _stringLiteral1F9261ABE85940E10CA48B7B42F1E5267F122734, NULL);
				if (L_68)
				{
					goto IL_03e0_1;
				}
			}
			{
				goto IL_03f3_1;
			}

IL_02ab_1:
			{
				// instance.additionalVertexStreams = reader.Read<UnityEngine.Mesh>(ES3Type_Mesh.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_69 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_70 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_71 = ((ES3Type_Mesh_tC459CC632DC495F2F0DAFAA32F718B1F73B6381D_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Mesh_tC459CC632DC495F2F0DAFAA32F718B1F73B6381D_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_70);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_72;
				L_72 = GenericVirtualFuncInvoker1< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_mB373D7B8C51C9612A52C78209491DF864B63F56D_RuntimeMethod_var, L_70, L_71);
				NullCheck(L_69);
				MeshRenderer_set_additionalVertexStreams_m868D054ACBD5ECCE2B5B43781F7932F886B86379(L_69, L_72, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_02c1_1:
			{
				// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_73 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_74 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_75 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_74);
				bool L_76;
				L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_74, L_75);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_73);
				Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_73, L_76, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_02d7_1:
			{
				// instance.shadowCastingMode = reader.Read<UnityEngine.Rendering.ShadowCastingMode>();
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_77 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_78 = ___reader0;
				NullCheck(L_78);
				int32_t L_79;
				L_79 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisShadowCastingMode_tF30806698B37CF120A1A506BD7549EAF308E7C6D_m5D515D5930F546F97E5C8689586A0633E40B2BE7_RuntimeMethod_var, L_78);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_77);
				Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_77, L_79, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_02e8_1:
			{
				// instance.receiveShadows = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_80 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_81 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_82 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_81);
				bool L_83;
				L_83 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_81, L_82);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_80);
				Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_80, L_83, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_02fe_1:
			{
				// instance.sharedMaterials = reader.Read<UnityEngine.Material[]>();
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_84 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_85 = ___reader0;
				NullCheck(L_85);
				MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_86;
				L_86 = GenericVirtualFuncInvoker0< MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* >::Invoke(ES3Reader_Read_TisMaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_m31174DB686C153609DAFC00E5912B82F4C51C4BC_RuntimeMethod_var, L_85);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_84);
				Renderer_set_sharedMaterials_m665ADE4190214CC2AC52490B4A7373D7EE75DEB2((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_84, L_86, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_030f_1:
			{
				// instance.lightmapIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_87 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_88 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_89 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_88);
				int32_t L_90;
				L_90 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_88, L_89);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_87);
				Renderer_set_lightmapIndex_mB6F2202FEC2ECBA3538EBDAEE17B073CEF2B5AB8((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_87, L_90, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_0325_1:
			{
				// instance.realtimeLightmapIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_91 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_92 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_93 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_92);
				int32_t L_94;
				L_94 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_92, L_93);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_91);
				Renderer_set_realtimeLightmapIndex_mE5684918EF41D05B218AEC5D6D3675B8A8F77389((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_91, L_94, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_033b_1:
			{
				// instance.lightmapScaleOffset = reader.Read<UnityEngine.Vector4>(ES3Type_Vector4.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_95 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_96 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_97 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_96);
				Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_98;
				L_98 = GenericVirtualFuncInvoker1< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA2A458447E513C25051A485702FF5B014291F986_RuntimeMethod_var, L_96, L_97);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_95);
				Renderer_set_lightmapScaleOffset_m1F7EB461298380CCD8EE337F9AAAE40BE5B732A2((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_95, L_98, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_0351_1:
			{
				// instance.motionVectorGenerationMode = reader.Read<UnityEngine.MotionVectorGenerationMode>();
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_99 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_100 = ___reader0;
				NullCheck(L_100);
				int32_t L_101;
				L_101 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisMotionVectorGenerationMode_tE87C61556749260EF5429A0F8FE55DAD30EEAFCB_m69507452EE500B836A206B93C7A7D8F1655E0E87_RuntimeMethod_var, L_100);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_99);
				Renderer_set_motionVectorGenerationMode_m5768AC38CBBAD505E34281889682CA464ED3A32F((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_99, L_101, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_0362_1:
			{
				// instance.realtimeLightmapScaleOffset = reader.Read<UnityEngine.Vector4>(ES3Type_Vector4.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_102 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_103 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_104 = ((ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector4_tB546178F475918A3CB9B553EAA3373CE7285D7D8_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_103);
				Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_105;
				L_105 = GenericVirtualFuncInvoker1< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA2A458447E513C25051A485702FF5B014291F986_RuntimeMethod_var, L_103, L_104);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_102);
				Renderer_set_realtimeLightmapScaleOffset_m391D14F3698B3D2BD88DC001931D261E5A3448E9((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_102, L_105, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_0378_1:
			{
				// instance.lightProbeUsage = reader.Read<UnityEngine.Rendering.LightProbeUsage>();
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_106 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_107 = ___reader0;
				NullCheck(L_107);
				int32_t L_108;
				L_108 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisLightProbeUsage_tC6292C7B7CBA0E5AA2A56F40D71F58A7E06C2948_m0D362281541B321DDF5152BA2FBB79A5365F9EB6_RuntimeMethod_var, L_107);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_106);
				Renderer_set_lightProbeUsage_mDCCD970DAC3546B32EF58876BABBD3353624F703((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_106, L_108, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_0386_1:
			{
				// instance.lightProbeProxyVolumeOverride = reader.Read<UnityEngine.GameObject>(ES3Type_GameObject.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_109 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_110 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_111 = ((ES3Type_GameObject_tCE2D774686F76B9AD7B35B975B97675F84F677E3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_GameObject_tCE2D774686F76B9AD7B35B975B97675F84F677E3_il2cpp_TypeInfo_var))->___Instance_15;
				NullCheck(L_110);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_112;
				L_112 = GenericVirtualFuncInvoker1< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m5A3742E41A2B632BBC94874A9EF9087EAC33BBF1_RuntimeMethod_var, L_110, L_111);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_109);
				Renderer_set_lightProbeProxyVolumeOverride_mEAF99A789A36BEDBAFCD2C2084578CF359587A21((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_109, L_112, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_0399_1:
			{
				// instance.probeAnchor = reader.Read<UnityEngine.Transform>(ES3Type_Transform.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_113 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_114 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_115 = ((ES3Type_Transform_tC86C7755D546F3D4A97553E19C31F9E025AB13A7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Transform_tC86C7755D546F3D4A97553E19C31F9E025AB13A7_il2cpp_TypeInfo_var))->___Instance_15;
				NullCheck(L_114);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_116;
				L_116 = GenericVirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m76F72323D090F7BFE241E75E77F0B53A709F00CD_RuntimeMethod_var, L_114, L_115);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_113);
				Renderer_set_probeAnchor_m0032C3CC1BBF36AC32FCCDE6F4A6F2CE73062327((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_113, L_116, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_03ac_1:
			{
				// instance.reflectionProbeUsage = reader.Read<UnityEngine.Rendering.ReflectionProbeUsage>();
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_117 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_118 = ___reader0;
				NullCheck(L_118);
				int32_t L_119;
				L_119 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisReflectionProbeUsage_t033508C14CD4AD926A3A215D19913DC21EA22705_m4DDADF6D026EF6288C6C705F87B838D3BE9342BC_RuntimeMethod_var, L_118);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_117);
				Renderer_set_reflectionProbeUsage_m54A268EACA655AC3C66C4CD7F8C1EF3B41F3E008((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_117, L_119, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_03ba_1:
			{
				// instance.sortingLayerName = reader.Read<System.String>(ES3Type_string.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_120 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_121 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_122 = ((ES3Type_string_tF2C6B48AEF5F70E0C8CE33C9556FDFC7572D3A20_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tF2C6B48AEF5F70E0C8CE33C9556FDFC7572D3A20_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_121);
				String_t* L_123;
				L_123 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisString_t_m768535B1FBE236A964B82DC2B1781D823A20C5AB_RuntimeMethod_var, L_121, L_122);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_120);
				Renderer_set_sortingLayerName_mF335BAE30015B49C27FF3C063B033E44C237AC8A((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_120, L_123, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_03cd_1:
			{
				// instance.sortingLayerID = reader.Read<System.Int32>(ES3Type_int.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_124 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_125 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_126 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_125);
				int32_t L_127;
				L_127 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_125, L_126);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_124);
				Renderer_set_sortingLayerID_m289E44FD06B6692C7B2ADD1189FE4FC013180C49((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_124, L_127, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_03e0_1:
			{
				// instance.sortingOrder = reader.Read<System.Int32>(ES3Type_int.Instance);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_128 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_129 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_130 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_129);
				int32_t L_131;
				L_131 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_129, L_130);
				NullCheck((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_128);
				Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_128, L_131, NULL);
				// break;
				goto IL_03f9_1;
			}

IL_03f3_1:
			{
				// reader.Skip();
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_132 = ___reader0;
				NullCheck(L_132);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_132);
			}

IL_03f9_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_133 = V_1;
				NullCheck(L_133);
				bool L_134;
				L_134 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_133);
				if (L_134)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_041a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_041a:
	{
		// }
		return;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF8528F03FA7EC70D441D46350713FF943215F2FC_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_47 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_49 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_50 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m5F6B590D31E97421BA3D1F6F704E640A95194A23_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_47 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_49 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_50 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9C756D25EDB5A6092F09D326C074BCAC4B107DB2_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_47 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_49 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_50 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mA4366161AA00949397C4A168762A61385219C3EF_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_47 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_49 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_50 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<System.Int16>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mCAF6331FDC5FFE62C4C4EF883B50E5FDC8C22550_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_47 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_49 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_50 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF7ED54CEFA2A5AC2123A6B6D9880516766FE6499_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_47 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_49 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_50 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mEDF55234DFABD01856D021651507102AD41B2B6E_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_47 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_49 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_50 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mF02EA5A6E2AD0826C6482AF8CB6E7E3C79EB54BD_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_47 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_49 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_50 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m1242DE1EE1F42A9D5C5F79EAE1B3240125F66927_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_47 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_49 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_50 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m78004D02F5488F1CD2164677B63289339F319906_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_47 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_49 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_50 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisRuntimeObject_m46B6989FC6621110DCDBA050817547E54C09939B_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_47 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_49 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_50 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mDFE9E7DFFB5E178CBE2F4D2A0BB7F35AB1EB9308_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_47 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_49 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_50 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m11764222B6AC4F6C4D9BC36A4119DDA0F0633391_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_47 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_49 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_50 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_mEEC04D9F0141260BE537DBC08D4781CDD36AD5C8_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_47 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_49 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_50 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m380F23126416F47365B888DC935CAD6216CA921D_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_47 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_49 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_50 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m2B2E0A574CEEF94CD2337A48747CB39A6E9CC7D6_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_47 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_49 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_50 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mA278022815BF7F7F36EBC6EB1DE1592B01AFD3A2_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_47 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_49 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_50 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mCE804FF79641F019E24792B32246A214A01370C6_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_47 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_49 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_50 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mAFF939467399CB4E388B6FF00596D6616D28B816_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_47 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_49 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_50 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Object ES3Types.ES3Type_MinMaxCurve::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_MinMaxCurve_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m3DA6601784457F9F1A89A894B2F401DE20DE0419_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = new UnityEngine.ParticleSystem.MinMaxCurve();
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23));
		goto IL_01d3;
	}

IL_000d:
	{
		String_t* L_0 = V_1;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_0, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_01cd;
	}

IL_003c:
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_01cd;
	}

IL_0054:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0074;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_01cd;
	}

IL_0074:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00db;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cd;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_14)
		{
			goto IL_012f;
		}
	}
	{
		goto IL_01cd;
	}

IL_009c:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_16)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_01cd;
	}

IL_00b1:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_18)
		{
			goto IL_0155;
		}
	}
	{
		goto IL_01cd;
	}

IL_00c6:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_20)
		{
			goto IL_0169;
		}
	}
	{
		goto IL_01cd;
	}

IL_00db:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_22)
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01cd;
	}

IL_00f0:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_24)
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01cd;
	}

IL_0105:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_26)
		{
			goto IL_01a5;
		}
	}
	{
		goto IL_01cd;
	}

IL_011a:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_28)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01cd;
	}

IL_012f:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_29 = ___reader0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_29);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_30, NULL);
		// break;
		goto IL_01d3;
	}

IL_0141:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_31 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_32 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_31);
		float L_33;
		L_33 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_31, L_32);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_33, NULL);
		// break;
		goto IL_01d3;
	}

IL_0155:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_34 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_35 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_34, L_35);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_36, NULL);
		// break;
		goto IL_01d3;
	}

IL_0169:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_37 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_38 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_37);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_39;
		L_39 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_37, L_38);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_39, NULL);
		// break;
		goto IL_01d3;
	}

IL_017d:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_40 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_41 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_40);
		float L_42;
		L_42 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_40, L_41);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_42, NULL);
		// break;
		goto IL_01d3;
	}

IL_0191:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_43 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_44 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_43);
		float L_45;
		L_45 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_43, L_44);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_45, NULL);
		// break;
		goto IL_01d3;
	}

IL_01a5:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_46 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_47 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_46);
		float L_48;
		L_48 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_46, L_47);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_48, NULL);
		// break;
		goto IL_01d3;
	}

IL_01b9:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_49 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_50 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_49);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_51;
		L_51 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_49, L_50);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_51, NULL);
		// break;
		goto IL_01d3;
	}

IL_01cd:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_52 = ___reader0;
		NullCheck(L_52);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_52);
	}

IL_01d3:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_53);
		String_t* L_55 = L_54;
		V_1 = L_55;
		if (L_55)
		{
			goto IL_000d;
		}
	}
	{
		// return instance;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_56 = V_0;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57 = L_56;
		RuntimeObject* L_58 = Box(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisRuntimeObject_m35C9F2F4F5282F7FB403A537423EA46E63369942_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_32 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_33 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_35 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_36 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_38 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_39 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_41 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_42 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_44 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_45 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_48 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_50 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_51 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/CollisionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_m5C8DA3EF8C7B057DDC4FF9FF165E64B28DB121E0_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_32 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_33 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_35 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_36 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_38 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_39 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_41 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_42 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_44 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_45 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_48 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_50 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_51 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/ColorBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_mAB4DE76920FCE7E048D000255D6132E18013B7F9_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_32 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_33 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_35 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_36 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_38 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_39 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_41 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_42 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_44 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_45 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_48 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_50 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_51 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/ColorOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_mA3D5BF0F8B3CB6A1711645A1E41935175FD75261_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_32 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_33 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_35 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_36 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_38 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_39 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_41 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_42 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_44 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_45 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_48 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_50 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_51 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/EmissionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_mD68BEE089BA7A4001F0DA767E0214A5607A640EA_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_32 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_33 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_35 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_36 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_38 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_39 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_41 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_42 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_44 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_45 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_48 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_50 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_51 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/ExternalForcesModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_mA6C568DB0D69DDF4AFADE2FCBF0F193B40E25E34_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_32 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_33 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_35 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_36 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_38 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_39 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_41 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_42 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_44 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_45 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_48 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_50 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_51 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/ForceOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_m23A3FA272F965C0E28A8FF32217133231E558B3A_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_32 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_33 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_35 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_36 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_38 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_39 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_41 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_42 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_44 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_45 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_48 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_50 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_51 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/InheritVelocityModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_mCCAE96FE6ED7CC5077A53317B9D5DC59CA3DC91D_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_32 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_33 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_35 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_36 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_38 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_39 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_41 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_42 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_44 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_45 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_48 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_50 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_51 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_MinMaxCurve::ReadInto<UnityEngine.ParticleSystem/LightsModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_MinMaxCurve_ReadInto_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_mAAFA0A99DCD9B5D96094659BE0B98CE4DEEEE5F5_gshared (ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27906925D50A15B990B586241F08C8ED14226340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36587A0761A180514C267B50EA888F89871F71DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A11128F810D574390DA344F324014E964D1876);
		s_Il2CppMethodInitialized = true;
	}
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.MinMaxCurve)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)((MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)(MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23*)UnBox(L_0, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_il2cpp_TypeInfo_var))));
		goto IL_01d2;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-725866558)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)740975083)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)110225957))))
		{
			goto IL_0104;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)740975083))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_01cc;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-1724381676))))
		{
			goto IL_0119;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-725866558))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01cc;
	}

IL_0053:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-559473464)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-581632105))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-559473464))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_01cc;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-345465511))))
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-328277998)))))
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_15)
		{
			goto IL_012e;
		}
	}
	{
		goto IL_01cc;
	}

IL_009b:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral227C22F51E4B6583CFC54387461605DDBBB00D14, NULL);
		if (L_17)
		{
			goto IL_0140;
		}
	}
	{
		goto IL_01cc;
	}

IL_00b0:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral27906925D50A15B990B586241F08C8ED14226340, NULL);
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01cc;
	}

IL_00c5:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralD4A11128F810D574390DA344F324014E964D1876, NULL);
		if (L_21)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_01cc;
	}

IL_00da:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralB5831A880405F69C8EF7F43534BF4D880F2B9A12, NULL);
		if (L_23)
		{
			goto IL_017c;
		}
	}
	{
		goto IL_01cc;
	}

IL_00ef:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral36587A0761A180514C267B50EA888F89871F71DF, NULL);
		if (L_25)
		{
			goto IL_0190;
		}
	}
	{
		goto IL_01cc;
	}

IL_0104:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral87E6319336195D789899F4791CCD5F2437BCC0B0, NULL);
		if (L_27)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01cc;
	}

IL_0119:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral6C9DED8087C891AE33ACFFCE806DBFF63795F56F, NULL);
		if (L_29)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01cc;
	}

IL_012e:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCurveMode>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___reader0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405_m76D19265CE08187AC59FAD67EE469814E1B44443_RuntimeMethod_var, L_30);
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_0), L_31, NULL);
		// break;
		goto IL_01d2;
	}

IL_0140:
	{
		// instance.curveMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_32 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_33 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_32);
		float L_34;
		L_34 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_32, L_33);
		MinMaxCurve_set_curveMultiplier_m9FCF7F21AECE399ACD9FEB9ADEEBD93FD12DDABC((&V_0), L_34, NULL);
		// break;
		goto IL_01d2;
	}

IL_0154:
	{
		// instance.curveMax = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_35 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_36 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_35);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37;
		L_37 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_35, L_36);
		MinMaxCurve_set_curveMax_m39B9E8AE4E62E874DA99AA7108C2C47C6CA333DF((&V_0), L_37, NULL);
		// break;
		goto IL_01d2;
	}

IL_0168:
	{
		// instance.curveMin = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_38 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_39 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_38);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_40;
		L_40 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_38, L_39);
		MinMaxCurve_set_curveMin_m17ADE22B882B75CBE87836C85C477A05122D9E75((&V_0), L_40, NULL);
		// break;
		goto IL_01d2;
	}

IL_017c:
	{
		// instance.constantMax = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_41 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_42 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_41, L_42);
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_0), L_43, NULL);
		// break;
		goto IL_01d2;
	}

IL_0190:
	{
		// instance.constantMin = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_44 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_45 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_44, L_45);
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_0), L_46, NULL);
		// break;
		goto IL_01d2;
	}

IL_01a4:
	{
		// instance.constant = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_47 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_48 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_47, L_48);
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_0), L_49, NULL);
		// break;
		goto IL_01d2;
	}

IL_01b8:
	{
		// instance.curve = reader.Read<UnityEngine.AnimationCurve>(ES3Type_AnimationCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_50 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_51 = ((ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_AnimationCurve_t2A56721ECA9A5AAF5EB1EF424278E3B405C03966_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_50);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52;
		L_52 = GenericVirtualFuncInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisAnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_m3E32426AFD1DE068F06ADCD8CFFA8F2394EFD050_RuntimeMethod_var, L_50, L_51);
		MinMaxCurve_set_curve_mC745A6526FBF122F96DA597997DFAB9D7D2529BF((&V_0), L_52, NULL);
		// break;
		goto IL_01d2;
	}

IL_01cc:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_53 = ___reader0;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_53);
	}

IL_01d2:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_54);
		String_t* L_56 = L_55;
		V_1 = L_56;
		if (L_56)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Implicit_mA8CF4745D766F4F610E1BE0A1ED2F4E5FE5D734C_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v0, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___v0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___v0;
		float L_3 = L_2.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___v0;
		float L_5 = L_4.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___v0;
		float L_7 = L_6.___w_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
