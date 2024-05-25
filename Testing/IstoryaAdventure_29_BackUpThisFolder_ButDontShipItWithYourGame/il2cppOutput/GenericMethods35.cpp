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
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// ES3Reader
struct ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A;
// ES3Settings
struct ES3Settings_t8500938678A8E9CAC90B24DD70C4C7D2E66026AB;
// ES3Types.ES3Type
struct ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687;
// ES3Types.ES3Type_Rect
struct ES3Type_Rect_tE9973AC15AA9CC898A6F365FE281501F732B82FF;
// ES3Types.ES3Type_RectTransform
struct ES3Type_RectTransform_t73C3A876501CDEA2E38175A12F71D4083E749619;
// ES3Types.ES3Type_RenderTexture
struct ES3Type_RenderTexture_t1C2C1B42EA5EFC864D44AA36349D2D457F2934DA;
// ES3Types.ES3Type_Rigidbody
struct ES3Type_Rigidbody_t6EB925A75F5D3C9B82479BF14045F1435583E432;
// ES3Types.ES3Type_RotationBySpeedModule
struct ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB;
// ES3Types.ES3Type_RotationOverLifetimeModule
struct ES3Type_RotationOverLifetimeModule_tE2626EAFE32CA2E60DC5D6DEFDAFF071F3DB63E9;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
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
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Quaternion_t6484CEB19562B8AF1894E20B82C9AFBCA6E78C16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Transform_tC86C7755D546F3D4A97553E19C31F9E025AB13A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Vector3_tBEBB6BA6FF3FA98D90871CDA974F8FD5A4CA364C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_string_tF2C6B48AEF5F70E0C8CE33C9556FDFC7572D3A20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rigidbody_t268697F5A994213ED97393309870968BC1C7393C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04A3E73E916A9D96C723D6248D07DF9DF1E7E8D6;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral07B42771F94A775E3DA27DF681FC6B5836E8C54F;
IL2CPP_EXTERN_C String_t* _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9;
IL2CPP_EXTERN_C String_t* _stringLiteral201D9D00BB60DC2318D21CF9902290EFE255D5DC;
IL2CPP_EXTERN_C String_t* _stringLiteral25CA075E7233E0F86172179489DCE5C905F99BF2;
IL2CPP_EXTERN_C String_t* _stringLiteral2ADFC3FFF7C52D554F0435A348A5345C9FCD7FF8;
IL2CPP_EXTERN_C String_t* _stringLiteral2E201D1972661439FD3C8523C55723E7E9BCC7DA;
IL2CPP_EXTERN_C String_t* _stringLiteral2EE7B6B0E37E14930BBA497867139BFD0617CE04;
IL2CPP_EXTERN_C String_t* _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5;
IL2CPP_EXTERN_C String_t* _stringLiteral363228C54B978F9E0862A8B083EFE811402DDCCA;
IL2CPP_EXTERN_C String_t* _stringLiteral3822549B6F7CA83FD1B03E6E44A6D1DE8981C58F;
IL2CPP_EXTERN_C String_t* _stringLiteral386EE79E0C1315CB902D6209A24E79E28710E583;
IL2CPP_EXTERN_C String_t* _stringLiteral387BDCC4F2454E2A62E9405643AF7EADAF442F5B;
IL2CPP_EXTERN_C String_t* _stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7;
IL2CPP_EXTERN_C String_t* _stringLiteral3BC15E3C2F40466B2DC85C4776499817B8306CBB;
IL2CPP_EXTERN_C String_t* _stringLiteral3E853921B3FA36BED3E3380983F770E9D78C1167;
IL2CPP_EXTERN_C String_t* _stringLiteral3F1522C8DB7943F2AE3AA1563D3AC25D9C8B93D1;
IL2CPP_EXTERN_C String_t* _stringLiteral4613D0F986526A6F03E1E5D07E13698655725A01;
IL2CPP_EXTERN_C String_t* _stringLiteral483DFA9A614472DBFD4B58265DDE1C943D92F756;
IL2CPP_EXTERN_C String_t* _stringLiteral4845015737DC41475709911228278216EE4DC3AF;
IL2CPP_EXTERN_C String_t* _stringLiteral48DC6A58A18098420AC1CD015B24A5856038A620;
IL2CPP_EXTERN_C String_t* _stringLiteral4DF417DF46EF8A7C67D3A1FE0CC53DCF5212FC81;
IL2CPP_EXTERN_C String_t* _stringLiteral53D3413057D7E52F44470A335C590748745352B1;
IL2CPP_EXTERN_C String_t* _stringLiteral5514320EE1A6E08163B07C2EF4B99B9A8002BD40;
IL2CPP_EXTERN_C String_t* _stringLiteral56BCA5E8F47F9F0842D96D19FE650B91285F2D53;
IL2CPP_EXTERN_C String_t* _stringLiteral588F553F93289F49C56014ECF461ECAB96A10F49;
IL2CPP_EXTERN_C String_t* _stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563;
IL2CPP_EXTERN_C String_t* _stringLiteral65B008F04EC40A696263EF679CF274BD10999A5D;
IL2CPP_EXTERN_C String_t* _stringLiteral69F581EEA4532CB86373BDE467E62B40C5353ADF;
IL2CPP_EXTERN_C String_t* _stringLiteral6BE6991311592B778BB540656302FE479334E0C1;
IL2CPP_EXTERN_C String_t* _stringLiteral71C5F9C3E2F3C81C5BBC7FD313F6938654E61138;
IL2CPP_EXTERN_C String_t* _stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA;
IL2CPP_EXTERN_C String_t* _stringLiteral7606720A7AEF5939309A8E4FCB8274252FA3D7BF;
IL2CPP_EXTERN_C String_t* _stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07;
IL2CPP_EXTERN_C String_t* _stringLiteral7FF61C3A55BCA1287974D8740F945250B3F0F084;
IL2CPP_EXTERN_C String_t* _stringLiteral800FCCC2C450FD3BE422706C42BEB4454271944B;
IL2CPP_EXTERN_C String_t* _stringLiteral83AC9669A9053DD15B9F2E82D2CE2369EFE131BA;
IL2CPP_EXTERN_C String_t* _stringLiteral88BDF3D0791A560245652E772545C49897854443;
IL2CPP_EXTERN_C String_t* _stringLiteral8902E1A7927E44CA278C207D20E9B3758FEAD21F;
IL2CPP_EXTERN_C String_t* _stringLiteral89E0069149A7FE28C0533923B9F779CE91ADEA58;
IL2CPP_EXTERN_C String_t* _stringLiteral8A9E9F41FB83E43385B4BF4AA395DC6C61CEF5AD;
IL2CPP_EXTERN_C String_t* _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB;
IL2CPP_EXTERN_C String_t* _stringLiteral8D07732265032EC34859337960AF5C34A24B362C;
IL2CPP_EXTERN_C String_t* _stringLiteral8F632BD073069C926450B792B45EAAB22036D149;
IL2CPP_EXTERN_C String_t* _stringLiteral90CF3FD4F8475D601EE96C2DAC1BDCB3A99F125B;
IL2CPP_EXTERN_C String_t* _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1;
IL2CPP_EXTERN_C String_t* _stringLiteral95F57476C0AA778364404E7CCCD7499BF1BF3757;
IL2CPP_EXTERN_C String_t* _stringLiteral9AB5ADF8A8A53110245466F7C226F7935F5FE95F;
IL2CPP_EXTERN_C String_t* _stringLiteral9BF0B5A4BB89E5C81AAA223E94154671C2E7D120;
IL2CPP_EXTERN_C String_t* _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1;
IL2CPP_EXTERN_C String_t* _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934;
IL2CPP_EXTERN_C String_t* _stringLiteral9F1E61D38CBC52C12B9D6319225F878BB2144E8F;
IL2CPP_EXTERN_C String_t* _stringLiteralA244DEC61623B0D226F61207A3A3C6133F9D9C02;
IL2CPP_EXTERN_C String_t* _stringLiteralABDCCB17E56605903DC5F7E295E289CE3971EA70;
IL2CPP_EXTERN_C String_t* _stringLiteralAE91BB56901658054F8D8F8016EA1970D3A3DEC6;
IL2CPP_EXTERN_C String_t* _stringLiteralB49A1DF483856544CEC6018E8C944DB6E16A8D57;
IL2CPP_EXTERN_C String_t* _stringLiteralBA9362732D25B1644B7D8DEC5DF6F036A4A66DE5;
IL2CPP_EXTERN_C String_t* _stringLiteralBAF092CD55C89B9907ED9267E2C3E9D6F8299316;
IL2CPP_EXTERN_C String_t* _stringLiteralC220E5ABB03B498FA9E8AE08256C71E0C463D910;
IL2CPP_EXTERN_C String_t* _stringLiteralC959D767B7F0BD38D9DA8A64A4750C3A0972E2A0;
IL2CPP_EXTERN_C String_t* _stringLiteralCD44AC57FFE6CAC7824F4CAA223F1BB8B4CB0D73;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralD3D4B9E7482A3ACC971856FE454424C1A233E4EF;
IL2CPP_EXTERN_C String_t* _stringLiteralD42E0D00318C368FE5B98209F0650AC5A54F5FB5;
IL2CPP_EXTERN_C String_t* _stringLiteralD7C9E5AB572028486B0F2E3887787D11180B2B4D;
IL2CPP_EXTERN_C String_t* _stringLiteralEA8FBF382D8AC9EDB8FFC14A350641B987F5C631;
IL2CPP_EXTERN_C String_t* _stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84;
IL2CPP_EXTERN_C String_t* _stringLiteralEC18B9A0F3C493B4942013A4FF84CE7D169509B3;
IL2CPP_EXTERN_C String_t* _stringLiteralECAEEB225F8689DE45DEB4FA21CE34E1960B1B50;
IL2CPP_EXTERN_C String_t* _stringLiteralF23E83744C9D6FC70D71B723AAED8006D6780BCB;
IL2CPP_EXTERN_C String_t* _stringLiteralF2AF7DD0BFF41B7B35037F018DAABE7DCF357A7B;
IL2CPP_EXTERN_C String_t* _stringLiteralF38CFAE6A91D072D4453C29FF44D81D459A582F1;
IL2CPP_EXTERN_C String_t* _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B;
IL2CPP_EXTERN_C String_t* _stringLiteralF9EE582B77C320A1F6A3DF72205857C4248BAC79;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_ReadProperty_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_m3BD87B6270D8D7E268863400439A854F60532A93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisAnisotropicFiltering_t4D9AB1E10B26E9F81E6209E1346D588E15EABBEA_mFDF1B926B3F1A343FCC72986DE2916E736C633CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisCollisionDetectionMode_tE78B6425ECA33250872A4B624D2B03A976163459_m44A4857AC8C54190725AF7C9E1991C4382113304_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisFilterMode_t4AD57F1A3FE272D650E0E688BA044AE872BD2A34_mED18EC8C268F8EFCB960D74CA5B270AC7EACD91C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisGraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713_m0C82F31A1E1CE62066B3C32079D01649C5CA2B2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisHideFlags_tC514182ACEFD3B847988C45D5DB812FF6DB1BF4A_m36F4D84DE5068416FE003C875121A214616DD8A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mC385FA4038A6C09E3FA70EBDEA178513D3FC53A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_mD8942C4530EDDC82CD293BD62A5B0006DE72DC00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisRenderTextureFormat_tB6F1ED5040395B46880CE00312D2FDDBF9EEB40F_m7EEE1397D6C82E0DA91812E214FB82649C4DCEEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisRenderTextureMemoryless_tE3B7F3AE353C3E9ACF86076376EB862131D19A69_mB0AFE6234A4B2CD51C96527D7BB5684FFDE51FB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisRigidbodyConstraints_tE93C9173FB4F24EF4D38166A288214D28D8E85C8_m4E1E968B2427F666DE5D8CA41531F6C29B8B90E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisRigidbodyInterpolation_tE2BE80352B0D72DB26B81EFD5A0845DEFEE994F8_m073565923144B5F57D1817E8A00F40AF2383F7D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisString_t_m768535B1FBE236A964B82DC2B1781D823A20C5AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisTextureDimension_t8D7148B9168256EE1E9AF91378ABA148888CE642_mA744972E280F5A24EC2CF0C4FF186AC889B75A6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisTextureWrapMode_tF9851343029052ED45668D1C99BAE09B2CCC13AD_mA5F35BEEA7861230233DE7E9A931F0D73052D3A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m76F72323D090F7BFE241E75E77F0B53A709F00CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisVRTextureUsage_t57FAA0077810142A461D74EDC5E33FC3D78BD2E8_m9E522C989CE6BCBC67A3BB3E62FA1A79DD512FB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m2FB5D193538173A928BC95202B90C4900D1F0F8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_0_0_0_var;


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

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
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

// ES3Types.ES3ObjectType
struct ES3ObjectType_tBA5571367FF8C40F7D824A9710B21A69EA9DC0B9  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
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

// ES3Types.ES3Type_Quaternion
struct ES3Type_Quaternion_t6484CEB19562B8AF1894E20B82C9AFBCA6E78C16  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};

struct ES3Type_Quaternion_t6484CEB19562B8AF1894E20B82C9AFBCA6E78C16_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Quaternion::Instance
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance_13;
};

// ES3Types.ES3Type_Rect
struct ES3Type_Rect_tE9973AC15AA9CC898A6F365FE281501F732B82FF  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};

struct ES3Type_Rect_tE9973AC15AA9CC898A6F365FE281501F732B82FF_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Rect::Instance
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance_13;
};

// ES3Types.ES3Type_RotationBySpeedModule
struct ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};

struct ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_RotationBySpeedModule::Instance
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance_13;
};

// ES3Types.ES3Type_RotationOverLifetimeModule
struct ES3Type_RotationOverLifetimeModule_tE2626EAFE32CA2E60DC5D6DEFDAFF071F3DB63E9  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};

struct ES3Type_RotationOverLifetimeModule_tE2626EAFE32CA2E60DC5D6DEFDAFF071F3DB63E9_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_RotationOverLifetimeModule::Instance
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance_13;
};

// ES3Types.ES3Type_Vector2
struct ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2  : public ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687
{
};

struct ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Vector2::Instance
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

// UnityEngine.RenderTextureDescriptor
struct RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 
{
	// System.Int32 UnityEngine.RenderTextureDescriptor::<width>k__BackingField
	int32_t ___U3CwidthU3Ek__BackingField_0;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<height>k__BackingField
	int32_t ___U3CheightU3Ek__BackingField_1;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<msaaSamples>k__BackingField
	int32_t ___U3CmsaaSamplesU3Ek__BackingField_2;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<volumeDepth>k__BackingField
	int32_t ___U3CvolumeDepthU3Ek__BackingField_3;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<mipCount>k__BackingField
	int32_t ___U3CmipCountU3Ek__BackingField_4;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::_graphicsFormat
	int32_t ____graphicsFormat_5;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::<stencilFormat>k__BackingField
	int32_t ___U3CstencilFormatU3Ek__BackingField_6;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::<depthStencilFormat>k__BackingField
	int32_t ___U3CdepthStencilFormatU3Ek__BackingField_7;
	// UnityEngine.Rendering.TextureDimension UnityEngine.RenderTextureDescriptor::<dimension>k__BackingField
	int32_t ___U3CdimensionU3Ek__BackingField_8;
	// UnityEngine.Rendering.ShadowSamplingMode UnityEngine.RenderTextureDescriptor::<shadowSamplingMode>k__BackingField
	int32_t ___U3CshadowSamplingModeU3Ek__BackingField_9;
	// UnityEngine.VRTextureUsage UnityEngine.RenderTextureDescriptor::<vrUsage>k__BackingField
	int32_t ___U3CvrUsageU3Ek__BackingField_10;
	// UnityEngine.RenderTextureCreationFlags UnityEngine.RenderTextureDescriptor::_flags
	int32_t ____flags_11;
	// UnityEngine.RenderTextureMemoryless UnityEngine.RenderTextureDescriptor::<memoryless>k__BackingField
	int32_t ___U3CmemorylessU3Ek__BackingField_12;
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

// UnityEngine.ParticleSystem/RotationBySpeedModule
struct RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/RotationBySpeedModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/RotationBySpeedModule
struct RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/RotationBySpeedModule
struct RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/RotationOverLifetimeModule
struct RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/RotationOverLifetimeModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/RotationOverLifetimeModule
struct RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/RotationOverLifetimeModule
struct RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// ES3Types.ES3Type_RenderTexture
struct ES3Type_RenderTexture_t1C2C1B42EA5EFC864D44AA36349D2D457F2934DA  : public ES3ObjectType_tBA5571367FF8C40F7D824A9710B21A69EA9DC0B9
{
};

struct ES3Type_RenderTexture_t1C2C1B42EA5EFC864D44AA36349D2D457F2934DA_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_RenderTexture::Instance
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// ES3Types.ES3ComponentType
struct ES3ComponentType_t66C6E8582E8061D09D4477097EE2869AD648F6E9  : public ES3UnityObjectType_tF653280D2691EBD1459EF886ACEA2E98FC30CAEE
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// ES3Types.ES3Type_RectTransform
struct ES3Type_RectTransform_t73C3A876501CDEA2E38175A12F71D4083E749619  : public ES3ComponentType_t66C6E8582E8061D09D4477097EE2869AD648F6E9
{
};

struct ES3Type_RectTransform_t73C3A876501CDEA2E38175A12F71D4083E749619_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_RectTransform::Instance
	ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___Instance_14;
};

// ES3Types.ES3Type_Rigidbody
struct ES3Type_Rigidbody_t6EB925A75F5D3C9B82479BF14045F1435583E432  : public ES3ComponentType_t66C6E8582E8061D09D4477097EE2869AD648F6E9
{
};

struct ES3Type_Rigidbody_t6EB925A75F5D3C9B82479BF14045F1435583E432_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Rigidbody::Instance
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

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// T ES3Reader::ReadProperty<System.Single>(ES3Types.ES3Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_gshared (ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* __this, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___type0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T ES3Reader::ReadProperty<UnityEngine.RenderTextureDescriptor>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ES3Reader_ReadProperty_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_m3BD87B6270D8D7E268863400439A854F60532A93_gshared (ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* __this, const RuntimeMethod* method) ;

// T ES3Reader::ReadProperty<System.Single>(ES3Types.ES3Type)
inline float ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E (ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* __this, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* ___type0, const RuntimeMethod* method)
{
	return ((  float (*) (ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*, const RuntimeMethod*))ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_gshared)(__this, ___type0, method);
}
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Collections.IEnumerator ES3Reader/ES3ReaderPropertyEnumerator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3ReaderPropertyEnumerator_GetEnumerator_mBF25A2B7B71596A1DCB090DD81E708091D1D4478 (ES3ReaderPropertyEnumerator_t2948B3DC88B88DF76A6ED9F660F7055F08697C37* __this, const RuntimeMethod* method) ;
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_offsetMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_offsetMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_hierarchyCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_hierarchyCapacity_mCCCBE056D948B5A918689637159F370D7EF5661E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetSiblingIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetSiblingIndex_m8A3B81F08B93991C05BFA89ADA2146836C4FC4B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T ES3Reader::ReadProperty<UnityEngine.RenderTextureDescriptor>()
inline RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ES3Reader_ReadProperty_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_m3BD87B6270D8D7E268863400439A854F60532A93 (ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* __this, const RuntimeMethod* method)
{
	return ((  RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 (*) (ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, const RuntimeMethod*))ES3Reader_ReadProperty_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_m3BD87B6270D8D7E268863400439A854F60532A93_gshared)(__this, method);
}
// System.Void UnityEngine.RenderTexture::.ctor(UnityEngine.RenderTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture__ctor_m1CBDB7F13C2CE49A31EE654081F01C4F874EA5E3 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___desc0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_useMipMap(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_useMipMap_mB280A39DAB18372D3A0050FF20F730E5B0B44C32 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_memorylessMode(UnityEngine.RenderTextureMemoryless)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_memorylessMode_m4F368B9C911EB033DFD44BDB2EF67CD451D74CED (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_format(UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_format_m6E5F83C36DA7EB9AD947AE3D6AFD95952E67EEFA (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_autoGenerateMips(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_autoGenerateMips_mDEFAC13954D315DE52B35B34577218D3AD4897A9 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_volumeDepth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_volumeDepth_mD9B1E6BA4BE6B1741427B34A23B9D48BA9493633 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_antiAliasing(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_antiAliasing_mA578276F4827A5CD4007DFE00117250A9336BC7A (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_enableRandomWrite(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_enableRandomWrite_m1F1B5E033802C193449803411560DB4D5D4AEEAB (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_isPowerOfTwo(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_isPowerOfTwo_mC484FC101ACE1B1BAFF21FA71F633A39765987A4 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_depth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_depth_m3D8EF7C98634724B2DB8279387A81C4E19B5DA53 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_descriptor(UnityEngine.RenderTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_descriptor_m5BB8245412A1C60628AD0089A9B1937CBDBAA8B8 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_anisotropicFiltering(UnityEngine.AnisotropicFiltering)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_anisotropicFiltering_mA22A3AD8E4848C073D58B32ACA9573DCBA22A616 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_wrapModeU(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapModeU_m2002CCB73143182032BD5ED6C80AB9A0ED2A0981 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_wrapModeV(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapModeV_m3C79177BAE70103DDBF871896AF464513A0F919D (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_wrapModeW(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapModeW_mCE8F0DA65C902D6D1A95823892D48E10A6949863 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_anisoLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_anisoLevel_m768759DE9D6BE15FCE995F5FC468980B904B9D1F (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_mipMapBias(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_mipMapBias_m945790033BD16B51B4EDD12E177207EBF5887286 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_vrUsage(UnityEngine.VRTextureUsage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_vrUsage_mAA13206DFE05C0A869A160CB1C2AC9D1C099D203 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_graphicsFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_graphicsFormat_m4CFDFF4CEC81B5350AE94D466585C8186E06B733 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_stencilFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_stencilFormat_m92E00333CD5EBDC5B73F43521B6E8132C1B087AE (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_bindTextureMS(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_bindTextureMS_m06A8FE127AEE42767530955453DBB9C55320208E (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_useDynamicScale(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_useDynamicScale_m0B6F123BB7FF0BA01515163A0EFA9B1D4375B883 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_streamingTextureForceLoadAll(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_streamingTextureForceLoadAll_m49BBAA185AC290FF1B92627CA6C7A0F1C7D243D6 (bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_streamingTextureDiscardUnusedMips(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_streamingTextureDiscardUnusedMips_mDB2B44B960BB3EEDC7DF7F013619F33FF4BE97EA (bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_allowThreadedTextureCreation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_allowThreadedTextureCreation_m20F9D0702196CB1762B85F495863F54272886F4F (bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_drag(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_drag_m9E9F375A26A8F3D1AABCEB015E41696F39088EE0 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_angularDrag(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_angularDrag_m4193B04EEFCA831DB99E29E98F778957557F130C (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_mass(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_mass_mC7F886DEDB57C742A16F8B6B779F69AFE164CA4B (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_useGravity(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_maxDepenetrationVelocity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_maxDepenetrationVelocity_mEE787E12E070438903558B0C79DDD98E3A5CFFD7 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_freezeRotation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_freezeRotation_m6D049F82E9133020C31EEFB35A179A56364325DC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_constraints(UnityEngine.RigidbodyConstraints)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_constraints_mE81BF0DAEB980E320538231E092CA4663885A9A3 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_collisionDetectionMode(UnityEngine.CollisionDetectionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_collisionDetectionMode_m70A22E9878027BF6D3D7E851A43A8E32B8E02343 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_centerOfMass(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_centerOfMass_m9D4A68D102498C7DBCD91278FF5EE7EE0BF2B188 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_inertiaTensorRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_inertiaTensorRotation_m732666F7ACD440F5472A04AAEF1545D12C63450C (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_inertiaTensor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_inertiaTensor_m68E7B9842A8125237E1DEE5251840DF2D4DBB8C9 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_detectCollisions(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_detectCollisions_m42A50DFACA7709DA1F87BCB9DC0BDA00720C80CF (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_position_mA15BE12B8D82220E8CA90A0F0CBFB206FE81B41C (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_rotation_mF2FC85A4A26AD9FED7DE0061889DF5A408461A5D (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_interpolation(UnityEngine.RigidbodyInterpolation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_interpolation_mC7D39114A7AC6ED0AB2B40FECA4E2ED3C1D7603C (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_solverIterations(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_solverIterations_m533625CFDF6CB3E9412AD2ACD3FA13A6636A401C (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_sleepThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_sleepThreshold_m5180E11C2D6A401352863FB66812C683C663B220 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_maxAngularVelocity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_maxAngularVelocity_m26E48B1DC6B9F8DBB81EE0681ABEB3AB255FC3F6 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_solverVelocityIterations(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_solverVelocityIterations_m53C09CB42CA4DA944D52E012BAF8112719AD753B (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/RotationBySpeedModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C (RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/RotationBySpeedModule::set_x(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164 (RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/RotationBySpeedModule::set_xMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44 (RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/RotationBySpeedModule::set_y(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948 (RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/RotationBySpeedModule::set_yMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4 (RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/RotationBySpeedModule::set_z(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF (RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/RotationBySpeedModule::set_zMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086 (RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/RotationBySpeedModule::set_separateAxes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915 (RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/RotationBySpeedModule::set_range(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6 (RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/RotationOverLifetimeModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66 (RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/RotationOverLifetimeModule::set_x(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4 (RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/RotationOverLifetimeModule::set_xMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD (RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/RotationOverLifetimeModule::set_y(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA (RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/RotationOverLifetimeModule::set_yMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF (RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/RotationOverLifetimeModule::set_z(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD (RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/RotationOverLifetimeModule::set_zMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF (RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/RotationOverLifetimeModule::set_separateAxes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E (RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Object ES3Types.ES3Type_Rect::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Rect_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m2BBE92DC87C2D2AC3591B9D4CD89F9517C6BB57F_gshared (ES3Type_Rect_tE9973AC15AA9CC898A6F365FE281501F732B82FF* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Rect(reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance));
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
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = L_12;
		RuntimeObject* L_14 = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Rect::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Rect_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m52F4A525D98CCC434633E3716555FD2EC3BB9113_gshared (ES3Type_Rect_tE9973AC15AA9CC898A6F365FE281501F732B82FF* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Rect(reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance));
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
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = L_12;
		RuntimeObject* L_14 = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Rect::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Rect_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m065D2C272C550253A6D0D0EF816063F7C78E1A6A_gshared (ES3Type_Rect_tE9973AC15AA9CC898A6F365FE281501F732B82FF* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Rect(reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance));
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
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = L_12;
		RuntimeObject* L_14 = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Rect::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Rect_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mF8F491E0863D2E5EB853F0AE6B6D153C2CAFB0CD_gshared (ES3Type_Rect_tE9973AC15AA9CC898A6F365FE281501F732B82FF* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Rect(reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance));
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
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = L_12;
		RuntimeObject* L_14 = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Rect::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Rect_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m984ABD5844D317D9751D26E585547A875C3F3F08_gshared (ES3Type_Rect_tE9973AC15AA9CC898A6F365FE281501F732B82FF* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Rect(reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance));
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
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = L_12;
		RuntimeObject* L_14 = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Rect::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Rect_Read_TisRuntimeObject_mD279119565AB0598694115F1A3DB96EEF5286B8A_gshared (ES3Type_Rect_tE9973AC15AA9CC898A6F365FE281501F732B82FF* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Rect(reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance));
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
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = L_12;
		RuntimeObject* L_14 = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Rect::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Rect_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mB6E65E1F930564C969A92388A8A53A546019194D_gshared (ES3Type_Rect_tE9973AC15AA9CC898A6F365FE281501F732B82FF* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Rect(reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance));
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
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = L_12;
		RuntimeObject* L_14 = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Rect::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Rect_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m4CB19E0ED1372A005CE145B8AD822C5AFBB9A929_gshared (ES3Type_Rect_tE9973AC15AA9CC898A6F365FE281501F732B82FF* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Rect(reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance));
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
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = L_12;
		RuntimeObject* L_14 = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Rect::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Rect_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_mD43592B1737F13B159394D35CAA7B578B55DCCE9_gshared (ES3Type_Rect_tE9973AC15AA9CC898A6F365FE281501F732B82FF* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Rect(reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance));
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
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = L_12;
		RuntimeObject* L_14 = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Rect::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Rect_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mCF111C7E633145B660D3677C4647F97B4A910413_gshared (ES3Type_Rect_tE9973AC15AA9CC898A6F365FE281501F732B82FF* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Rect(reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance));
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
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = L_12;
		RuntimeObject* L_14 = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Rect::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Rect_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m5E35B9DED5C6CAD056926A31FA0523CEAF4EA7EC_gshared (ES3Type_Rect_tE9973AC15AA9CC898A6F365FE281501F732B82FF* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Rect(reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance));
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
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = L_12;
		RuntimeObject* L_14 = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Rect::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Rect_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m090E35D198B850E35180D921CE124F5735A8134B_gshared (ES3Type_Rect_tE9973AC15AA9CC898A6F365FE281501F732B82FF* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Rect(reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance));
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
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = L_12;
		RuntimeObject* L_14 = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Rect::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Rect_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m9BC98FB6CCF55849240F12E2D0B0485B4D44EB11_gshared (ES3Type_Rect_tE9973AC15AA9CC898A6F365FE281501F732B82FF* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Rect(reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance));
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
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = L_12;
		RuntimeObject* L_14 = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Rect::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Rect_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m593FC1245A8E6AA024295096CE4CF2F044AF027C_gshared (ES3Type_Rect_tE9973AC15AA9CC898A6F365FE281501F732B82FF* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Rect(reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance));
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
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = L_12;
		RuntimeObject* L_14 = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Rect::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Rect_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mAA0F54514BDE351759B4A844E863A43E7EE5F9CC_gshared (ES3Type_Rect_tE9973AC15AA9CC898A6F365FE281501F732B82FF* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC3AE140E8126D381E17DB55350B54881CAF1856E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Rect(reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance),
		//                 reader.ReadProperty<float>(ES3Type_float.Instance));
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
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = L_12;
		RuntimeObject* L_14 = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Void ES3Types.ES3Type_RectTransform::ReadComponent<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RectTransform_ReadComponent_TisRuntimeObject_mD97764EF3A4D0F6BA4DCF8B247745AD950FBF33A_gshared (ES3Type_RectTransform_t73C3A876501CDEA2E38175A12F71D4083E749619* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisHideFlags_tC514182ACEFD3B847988C45D5DB812FF6DB1BF4A_m36F4D84DE5068416FE003C875121A214616DD8A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mC385FA4038A6C09E3FA70EBDEA178513D3FC53A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m76F72323D090F7BFE241E75E77F0B53A709F00CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m2FB5D193538173A928BC95202B90C4900D1F0F8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Quaternion_t6484CEB19562B8AF1894E20B82C9AFBCA6E78C16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Transform_tC86C7755D546F3D4A97553E19C31F9E025AB13A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_tBEBB6BA6FF3FA98D90871CDA974F8FD5A4CA364C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07B42771F94A775E3DA27DF681FC6B5836E8C54F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral363228C54B978F9E0862A8B083EFE811402DDCCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3822549B6F7CA83FD1B03E6E44A6D1DE8981C58F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E853921B3FA36BED3E3380983F770E9D78C1167);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4613D0F986526A6F03E1E5D07E13698655725A01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral483DFA9A614472DBFD4B58265DDE1C943D92F756);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8902E1A7927E44CA278C207D20E9B3758FEAD21F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A9E9F41FB83E43385B4BF4AA395DC6C61CEF5AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F632BD073069C926450B792B45EAAB22036D149);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BF0B5A4BB89E5C81AAA223E94154671C2E7D120);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F1E61D38CBC52C12B9D6319225F878BB2144E8F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA244DEC61623B0D226F61207A3A3C6133F9D9C02);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE91BB56901658054F8D8F8016EA1970D3A3DEC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC220E5ABB03B498FA9E8AE08256C71E0C463D910);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	uint32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	{
		// if (obj.GetType() == typeof(UnityEngine.Transform))
		RuntimeObject* L_0 = ___obj1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		// obj = ((Transform)obj).gameObject.AddComponent<RectTransform>();
		RuntimeObject* L_5 = ___obj1;
		NullCheck((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_5, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_5, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_6);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7;
		L_7 = GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388(L_6, GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var);
		___obj1 = (RuntimeObject*)L_7;
	}

IL_0029:
	{
		// var instance = (UnityEngine.RectTransform)obj;
		RuntimeObject* L_8 = ___obj1;
		V_0 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_8, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
		// foreach(string propertyName in reader.Properties)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_9 = ___reader0;
		NullCheck(L_9);
		ES3ReaderPropertyEnumerator_t2948B3DC88B88DF76A6ED9F660F7055F08697C37* L_10;
		L_10 = VirtualFuncInvoker0< ES3ReaderPropertyEnumerator_t2948B3DC88B88DF76A6ED9F660F7055F08697C37* >::Invoke(39 /* ES3Reader/ES3ReaderPropertyEnumerator ES3Reader::get_Properties() */, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = ES3ReaderPropertyEnumerator_GetEnumerator_mBF25A2B7B71596A1DCB090DD81E708091D1D4478(L_10, NULL);
		V_1 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0376:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_12 = V_1;
					V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_13 = V_4;
					if (!L_13)
					{
						goto IL_0389;
					}
				}
				{
					RuntimeObject* L_14 = V_4;
					NullCheck(L_14);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_14);
				}

IL_0389:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0369_1;
			}

IL_0041_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_15 = V_1;
				NullCheck(L_15);
				RuntimeObject* L_16;
				L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_15);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_16, String_t_il2cpp_TypeInfo_var));
				String_t* L_17 = V_2;
				uint32_t L_18;
				L_18 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_17, NULL);
				V_3 = L_18;
				uint32_t L_19 = V_3;
				if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-883186270)))))
				{
					goto IL_00c5_1;
				}
			}
			{
				uint32_t L_20 = V_3;
				if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)1458260364)))))
				{
					goto IL_008a_1;
				}
			}
			{
				uint32_t L_21 = V_3;
				if ((((int32_t)L_21) == ((int32_t)((int32_t)49430524))))
				{
					goto IL_01a6_1;
				}
			}
			{
				uint32_t L_22 = V_3;
				if ((((int32_t)L_22) == ((int32_t)((int32_t)583395338))))
				{
					goto IL_01e5_1;
				}
			}
			{
				uint32_t L_23 = V_3;
				if ((((int32_t)L_23) == ((int32_t)((int32_t)1458260364))))
				{
					goto IL_020f_1;
				}
			}
			{
				goto IL_0363_1;
			}

IL_008a_1:
			{
				uint32_t L_24 = V_3;
				if ((!(((uint32_t)L_24) <= ((uint32_t)((int32_t)-1363083094)))))
				{
					goto IL_00ad_1;
				}
			}
			{
				uint32_t L_25 = V_3;
				if ((((int32_t)L_25) == ((int32_t)((int32_t)-2119391441))))
				{
					goto IL_0239_1;
				}
			}
			{
				uint32_t L_26 = V_3;
				if ((((int32_t)L_26) == ((int32_t)((int32_t)-1363083094))))
				{
					goto IL_0167_1;
				}
			}
			{
				goto IL_0363_1;
			}

IL_00ad_1:
			{
				uint32_t L_27 = V_3;
				if ((((int32_t)L_27) == ((int32_t)((int32_t)-1171259574))))
				{
					goto IL_0152_1;
				}
			}
			{
				uint32_t L_28 = V_3;
				if ((((int32_t)L_28) == ((int32_t)((int32_t)-883186270))))
				{
					goto IL_013d_1;
				}
			}
			{
				goto IL_0363_1;
			}

IL_00c5_1:
			{
				uint32_t L_29 = V_3;
				if ((!(((uint32_t)L_29) <= ((uint32_t)((int32_t)-537486629)))))
				{
					goto IL_00f0_1;
				}
			}
			{
				uint32_t L_30 = V_3;
				if ((((int32_t)L_30) == ((int32_t)((int32_t)-716690008))))
				{
					goto IL_0128_1;
				}
			}
			{
				uint32_t L_31 = V_3;
				if ((((int32_t)L_31) == ((int32_t)((int32_t)-567617682))))
				{
					goto IL_01d0_1;
				}
			}
			{
				uint32_t L_32 = V_3;
				if ((((int32_t)L_32) == ((int32_t)((int32_t)-537486629))))
				{
					goto IL_01bb_1;
				}
			}
			{
				goto IL_0363_1;
			}

IL_00f0_1:
			{
				uint32_t L_33 = V_3;
				if ((!(((uint32_t)L_33) <= ((uint32_t)((int32_t)-350400524)))))
				{
					goto IL_0113_1;
				}
			}
			{
				uint32_t L_34 = V_3;
				if ((((int32_t)L_34) == ((int32_t)((int32_t)-355599107))))
				{
					goto IL_01fa_1;
				}
			}
			{
				uint32_t L_35 = V_3;
				if ((((int32_t)L_35) == ((int32_t)((int32_t)-350400524))))
				{
					goto IL_0224_1;
				}
			}
			{
				goto IL_0363_1;
			}

IL_0113_1:
			{
				uint32_t L_36 = V_3;
				if ((((int32_t)L_36) == ((int32_t)((int32_t)-251183522))))
				{
					goto IL_0191_1;
				}
			}
			{
				uint32_t L_37 = V_3;
				if ((((int32_t)L_37) == ((int32_t)((int32_t)-68135657))))
				{
					goto IL_017c_1;
				}
			}
			{
				goto IL_0363_1;
			}

IL_0128_1:
			{
				String_t* L_38 = V_2;
				bool L_39;
				L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralAE91BB56901658054F8D8F8016EA1970D3A3DEC6, NULL);
				if (L_39)
				{
					goto IL_024e_1;
				}
			}
			{
				goto IL_0363_1;
			}

IL_013d_1:
			{
				String_t* L_40 = V_2;
				bool L_41;
				L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral3822549B6F7CA83FD1B03E6E44A6D1DE8981C58F, NULL);
				if (L_41)
				{
					goto IL_0264_1;
				}
			}
			{
				goto IL_0363_1;
			}

IL_0152_1:
			{
				String_t* L_42 = V_2;
				bool L_43;
				L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteral9F1E61D38CBC52C12B9D6319225F878BB2144E8F, NULL);
				if (L_43)
				{
					goto IL_027a_1;
				}
			}
			{
				goto IL_0363_1;
			}

IL_0167_1:
			{
				String_t* L_44 = V_2;
				bool L_45;
				L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralA244DEC61623B0D226F61207A3A3C6133F9D9C02, NULL);
				if (L_45)
				{
					goto IL_0290_1;
				}
			}
			{
				goto IL_0363_1;
			}

IL_017c_1:
			{
				String_t* L_46 = V_2;
				bool L_47;
				L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteral07B42771F94A775E3DA27DF681FC6B5836E8C54F, NULL);
				if (L_47)
				{
					goto IL_02a6_1;
				}
			}
			{
				goto IL_0363_1;
			}

IL_0191_1:
			{
				String_t* L_48 = V_2;
				bool L_49;
				L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral363228C54B978F9E0862A8B083EFE811402DDCCA, NULL);
				if (L_49)
				{
					goto IL_02bc_1;
				}
			}
			{
				goto IL_0363_1;
			}

IL_01a6_1:
			{
				String_t* L_50 = V_2;
				bool L_51;
				L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral8902E1A7927E44CA278C207D20E9B3758FEAD21F, NULL);
				if (L_51)
				{
					goto IL_02d2_1;
				}
			}
			{
				goto IL_0363_1;
			}

IL_01bb_1:
			{
				String_t* L_52 = V_2;
				bool L_53;
				L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral8A9E9F41FB83E43385B4BF4AA395DC6C61CEF5AD, NULL);
				if (L_53)
				{
					goto IL_02e8_1;
				}
			}
			{
				goto IL_0363_1;
			}

IL_01d0_1:
			{
				String_t* L_54 = V_2;
				bool L_55;
				L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral9BF0B5A4BB89E5C81AAA223E94154671C2E7D120, NULL);
				if (L_55)
				{
					goto IL_02fb_1;
				}
			}
			{
				goto IL_0363_1;
			}

IL_01e5_1:
			{
				String_t* L_56 = V_2;
				bool L_57;
				L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteral4613D0F986526A6F03E1E5D07E13698655725A01, NULL);
				if (L_57)
				{
					goto IL_030e_1;
				}
			}
			{
				goto IL_0363_1;
			}

IL_01fa_1:
			{
				String_t* L_58 = V_2;
				bool L_59;
				L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral483DFA9A614472DBFD4B58265DDE1C943D92F756, NULL);
				if (L_59)
				{
					goto IL_0321_1;
				}
			}
			{
				goto IL_0363_1;
			}

IL_020f_1:
			{
				String_t* L_60 = V_2;
				bool L_61;
				L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral3E853921B3FA36BED3E3380983F770E9D78C1167, NULL);
				if (L_61)
				{
					goto IL_0334_1;
				}
			}
			{
				goto IL_0363_1;
			}

IL_0224_1:
			{
				String_t* L_62 = V_2;
				bool L_63;
				L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteralC220E5ABB03B498FA9E8AE08256C71E0C463D910, NULL);
				if (L_63)
				{
					goto IL_0347_1;
				}
			}
			{
				goto IL_0363_1;
			}

IL_0239_1:
			{
				String_t* L_64 = V_2;
				bool L_65;
				L_65 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_64, _stringLiteral8F632BD073069C926450B792B45EAAB22036D149, NULL);
				if (L_65)
				{
					goto IL_0355_1;
				}
			}
			{
				goto IL_0363_1;
			}

IL_024e_1:
			{
				// instance.anchorMin = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
				RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_66 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_67 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_68 = ((ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_67);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69;
				L_69 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var, L_67, L_68);
				NullCheck(L_66);
				RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_66, L_69, NULL);
				// break;
				goto IL_0369_1;
			}

IL_0264_1:
			{
				// instance.anchorMax = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
				RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_70 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_71 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_72 = ((ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_71);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_73;
				L_73 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var, L_71, L_72);
				NullCheck(L_70);
				RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_70, L_73, NULL);
				// break;
				goto IL_0369_1;
			}

IL_027a_1:
			{
				// instance.anchoredPosition = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
				RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_74 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_75 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_76 = ((ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_75);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_77;
				L_77 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var, L_75, L_76);
				NullCheck(L_74);
				RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_74, L_77, NULL);
				// break;
				goto IL_0369_1;
			}

IL_0290_1:
			{
				// instance.sizeDelta = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
				RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_78 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_79 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_80 = ((ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_79);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_81;
				L_81 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var, L_79, L_80);
				NullCheck(L_78);
				RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_78, L_81, NULL);
				// break;
				goto IL_0369_1;
			}

IL_02a6_1:
			{
				// instance.pivot = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
				RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_82 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_83 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_84 = ((ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_83);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_85;
				L_85 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var, L_83, L_84);
				NullCheck(L_82);
				RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_82, L_85, NULL);
				// break;
				goto IL_0369_1;
			}

IL_02bc_1:
			{
				// instance.offsetMin = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
				RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_86 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_87 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_88 = ((ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_87);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89;
				L_89 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var, L_87, L_88);
				NullCheck(L_86);
				RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9(L_86, L_89, NULL);
				// break;
				goto IL_0369_1;
			}

IL_02d2_1:
			{
				// instance.offsetMax = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
				RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_90 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_91 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_92 = ((ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_91);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_93;
				L_93 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var, L_91, L_92);
				NullCheck(L_90);
				RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D(L_90, L_93, NULL);
				// break;
				goto IL_0369_1;
			}

IL_02e8_1:
			{
				// instance.localPosition = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
				RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_94 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_95 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_96 = ((ES3Type_Vector3_tBEBB6BA6FF3FA98D90871CDA974F8FD5A4CA364C_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_tBEBB6BA6FF3FA98D90871CDA974F8FD5A4CA364C_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_95);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97;
				L_97 = GenericVirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m2FB5D193538173A928BC95202B90C4900D1F0F8D_RuntimeMethod_var, L_95, L_96);
				NullCheck((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_94);
				Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_94, L_97, NULL);
				// break;
				goto IL_0369_1;
			}

IL_02fb_1:
			{
				// instance.localRotation = reader.Read<UnityEngine.Quaternion>(ES3Type_Quaternion.Instance);
				RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_98 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_99 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_100 = ((ES3Type_Quaternion_t6484CEB19562B8AF1894E20B82C9AFBCA6E78C16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Quaternion_t6484CEB19562B8AF1894E20B82C9AFBCA6E78C16_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_99);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_101;
				L_101 = GenericVirtualFuncInvoker1< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mC385FA4038A6C09E3FA70EBDEA178513D3FC53A9_RuntimeMethod_var, L_99, L_100);
				NullCheck((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_98);
				Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_98, L_101, NULL);
				// break;
				goto IL_0369_1;
			}

IL_030e_1:
			{
				// instance.localScale = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
				RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_102 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_103 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_104 = ((ES3Type_Vector3_tBEBB6BA6FF3FA98D90871CDA974F8FD5A4CA364C_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_tBEBB6BA6FF3FA98D90871CDA974F8FD5A4CA364C_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_103);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105;
				L_105 = GenericVirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m2FB5D193538173A928BC95202B90C4900D1F0F8D_RuntimeMethod_var, L_103, L_104);
				NullCheck((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_102);
				Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_102, L_105, NULL);
				// break;
				goto IL_0369_1;
			}

IL_0321_1:
			{
				// instance.SetParent(reader.Read<UnityEngine.Transform>(ES3Type_Transform.Instance));
				RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_106 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_107 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_108 = ((ES3Type_Transform_tC86C7755D546F3D4A97553E19C31F9E025AB13A7_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Transform_tC86C7755D546F3D4A97553E19C31F9E025AB13A7_il2cpp_TypeInfo_var))->___Instance_15;
				NullCheck(L_107);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_109;
				L_109 = GenericVirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m76F72323D090F7BFE241E75E77F0B53A709F00CD_RuntimeMethod_var, L_107, L_108);
				NullCheck((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_106);
				Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_106, L_109, NULL);
				// break;
				goto IL_0369_1;
			}

IL_0334_1:
			{
				// instance.hierarchyCapacity = reader.Read<System.Int32>(ES3Type_int.Instance);
				RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_110 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_111 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_112 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_111);
				int32_t L_113;
				L_113 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_111, L_112);
				NullCheck((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_110);
				Transform_set_hierarchyCapacity_mCCCBE056D948B5A918689637159F370D7EF5661E((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_110, L_113, NULL);
				// break;
				goto IL_0369_1;
			}

IL_0347_1:
			{
				// instance.hideFlags = reader.Read<UnityEngine.HideFlags>();
				RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_114 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_115 = ___reader0;
				NullCheck(L_115);
				int32_t L_116;
				L_116 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisHideFlags_tC514182ACEFD3B847988C45D5DB812FF6DB1BF4A_m36F4D84DE5068416FE003C875121A214616DD8A8_RuntimeMethod_var, L_115);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_114);
				Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_114, L_116, NULL);
				// break;
				goto IL_0369_1;
			}

IL_0355_1:
			{
				// instance.SetSiblingIndex(reader.Read<int>());
				RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_117 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_118 = ___reader0;
				NullCheck(L_118);
				int32_t L_119;
				L_119 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m924234870C23C5552BCE2F1A0BE102B9C3B7E23A_RuntimeMethod_var, L_118);
				NullCheck((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_117);
				Transform_SetSiblingIndex_m8A3B81F08B93991C05BFA89ADA2146836C4FC4B2((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_117, L_119, NULL);
				// break;
				goto IL_0369_1;
			}

IL_0363_1:
			{
				// reader.Skip();
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_120 = ___reader0;
				NullCheck(L_120);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_120);
			}

IL_0369_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_121 = V_1;
				NullCheck(L_121);
				bool L_122;
				L_122 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_121);
				if (L_122)
				{
					goto IL_0041_1;
				}
			}
			{
				goto IL_038a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_038a:
	{
		// }
		return;
	}
}
// System.Object ES3Types.ES3Type_RenderTexture::ReadObject<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RenderTexture_ReadObject_TisRuntimeObject_mF6EC4B033BB1D3FDCED757757E9487CD9375B419_gshared (ES3Type_RenderTexture_t1C2C1B42EA5EFC864D44AA36349D2D457F2934DA* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_m3BD87B6270D8D7E268863400439A854F60532A93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_0 = NULL;
	{
		// var descriptor = reader.ReadProperty<RenderTextureDescriptor>();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		NullCheck(L_0);
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_1;
		L_1 = ES3Reader_ReadProperty_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_m3BD87B6270D8D7E268863400439A854F60532A93(L_0, ES3Reader_ReadProperty_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_m3BD87B6270D8D7E268863400439A854F60532A93_RuntimeMethod_var);
		// var instance = new UnityEngine.RenderTexture(descriptor);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		RenderTexture__ctor_m1CBDB7F13C2CE49A31EE654081F01C4F874EA5E3(L_2, L_1, NULL);
		V_0 = L_2;
		// ReadObject<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_3 = ___reader0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4 = V_0;
		NullCheck((ES3ObjectType_tBA5571367FF8C40F7D824A9710B21A69EA9DC0B9*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3ObjectType_tBA5571367FF8C40F7D824A9710B21A69EA9DC0B9*)__this, L_3, (RuntimeObject*)L_4);
		// return instance;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = V_0;
		return (RuntimeObject*)L_5;
	}
}
// System.Void ES3Types.ES3Type_RenderTexture::ReadObject<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RenderTexture_ReadObject_TisRuntimeObject_m05676838ADA6738802F9E8D09F59F78A5F0C24B8_gshared (ES3Type_RenderTexture_t1C2C1B42EA5EFC864D44AA36349D2D457F2934DA* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisAnisotropicFiltering_t4D9AB1E10B26E9F81E6209E1346D588E15EABBEA_mFDF1B926B3F1A343FCC72986DE2916E736C633CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisFilterMode_t4AD57F1A3FE272D650E0E688BA044AE872BD2A34_mED18EC8C268F8EFCB960D74CA5B270AC7EACD91C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisGraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713_m0C82F31A1E1CE62066B3C32079D01649C5CA2B2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_mD8942C4530EDDC82CD293BD62A5B0006DE72DC00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureFormat_tB6F1ED5040395B46880CE00312D2FDDBF9EEB40F_m7EEE1397D6C82E0DA91812E214FB82649C4DCEEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRenderTextureMemoryless_tE3B7F3AE353C3E9ACF86076376EB862131D19A69_mB0AFE6234A4B2CD51C96527D7BB5684FFDE51FB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m768535B1FBE236A964B82DC2B1781D823A20C5AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTextureDimension_t8D7148B9168256EE1E9AF91378ABA148888CE642_mA744972E280F5A24EC2CF0C4FF186AC889B75A6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTextureWrapMode_tF9851343029052ED45668D1C99BAE09B2CCC13AD_mA5F35BEEA7861230233DE7E9A931F0D73052D3A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVRTextureUsage_t57FAA0077810142A461D74EDC5E33FC3D78BD2E8_m9E522C989CE6BCBC67A3BB3E62FA1A79DD512FB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tF2C6B48AEF5F70E0C8CE33C9556FDFC7572D3A20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral201D9D00BB60DC2318D21CF9902290EFE255D5DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ADFC3FFF7C52D554F0435A348A5345C9FCD7FF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E201D1972661439FD3C8523C55723E7E9BCC7DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EE7B6B0E37E14930BBA497867139BFD0617CE04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BC15E3C2F40466B2DC85C4776499817B8306CBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F1522C8DB7943F2AE3AA1563D3AC25D9C8B93D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53D3413057D7E52F44470A335C590748745352B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65B008F04EC40A696263EF679CF274BD10999A5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71C5F9C3E2F3C81C5BBC7FD313F6938654E61138);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7606720A7AEF5939309A8E4FCB8274252FA3D7BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FF61C3A55BCA1287974D8740F945250B3F0F084);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83AC9669A9053DD15B9F2E82D2CE2369EFE131BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95F57476C0AA778364404E7CCCD7499BF1BF3757);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AB5ADF8A8A53110245466F7C226F7935F5FE95F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB49A1DF483856544CEC6018E8C944DB6E16A8D57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA9362732D25B1644B7D8DEC5DF6F036A4A66DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC959D767B7F0BD38D9DA8A64A4750C3A0972E2A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD44AC57FFE6CAC7824F4CAA223F1BB8B4CB0D73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA8FBF382D8AC9EDB8FFC14A350641B987F5C631);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECAEEB225F8689DE45DEB4FA21CE34E1960B1B50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF23E83744C9D6FC70D71B723AAED8006D6780BCB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2AF7DD0BFF41B7B35037F018DAABE7DCF357A7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF38CFAE6A91D072D4453C29FF44D81D459A582F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9EE582B77C320A1F6A3DF72205857C4248BAC79);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	uint32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	{
		// var instance = (UnityEngine.RenderTexture)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)CastclassClass((RuntimeObject*)L_0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var));
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

FINALLY_06e3:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_4;
					if (!L_5)
					{
						goto IL_06f6;
					}
				}
				{
					RuntimeObject* L_6 = V_4;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_06f6:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_06d6_1;
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
				uint32_t L_10;
				L_10 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_9, NULL);
				V_3 = L_10;
				uint32_t L_11 = V_3;
				if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)1508062721)))))
				{
					goto IL_012e_1;
				}
			}
			{
				uint32_t L_12 = V_3;
				if ((!(((uint32_t)L_12) <= ((uint32_t)((int32_t)698754697)))))
				{
					goto IL_00aa_1;
				}
			}
			{
				uint32_t L_13 = V_3;
				if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)472844700)))))
				{
					goto IL_006c_1;
				}
			}
			{
				uint32_t L_14 = V_3;
				if ((((int32_t)L_14) == ((int32_t)((int32_t)87590155))))
				{
					goto IL_0406_1;
				}
			}
			{
				uint32_t L_15 = V_3;
				if ((((int32_t)L_15) == ((int32_t)((int32_t)301255720))))
				{
					goto IL_02b6_1;
				}
			}
			{
				uint32_t L_16 = V_3;
				if ((((int32_t)L_16) == ((int32_t)((int32_t)472844700))))
				{
					goto IL_0262_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_006c_1:
			{
				uint32_t L_17 = V_3;
				if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)549791583)))))
				{
					goto IL_008f_1;
				}
			}
			{
				uint32_t L_18 = V_3;
				if ((((int32_t)L_18) == ((int32_t)((int32_t)533013964))))
				{
					goto IL_0373_1;
				}
			}
			{
				uint32_t L_19 = V_3;
				if ((((int32_t)L_19) == ((int32_t)((int32_t)549791583))))
				{
					goto IL_0388_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_008f_1:
			{
				uint32_t L_20 = V_3;
				if ((((int32_t)L_20) == ((int32_t)((int32_t)583346821))))
				{
					goto IL_035e_1;
				}
			}
			{
				uint32_t L_21 = V_3;
				if ((((int32_t)L_21) == ((int32_t)((int32_t)698754697))))
				{
					goto IL_02cb_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_00aa_1:
			{
				uint32_t L_22 = V_3;
				if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)1235622516)))))
				{
					goto IL_00f0_1;
				}
			}
			{
				uint32_t L_23 = V_3;
				if ((!(((uint32_t)L_23) <= ((uint32_t)((int32_t)740612720)))))
				{
					goto IL_00d5_1;
				}
			}
			{
				uint32_t L_24 = V_3;
				if ((((int32_t)L_24) == ((int32_t)((int32_t)705796271))))
				{
					goto IL_02f5_1;
				}
			}
			{
				uint32_t L_25 = V_3;
				if ((((int32_t)L_25) == ((int32_t)((int32_t)740612720))))
				{
					goto IL_039d_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_00d5_1:
			{
				uint32_t L_26 = V_3;
				if ((((int32_t)L_26) == ((int32_t)((int32_t)1059843136))))
				{
					goto IL_031f_1;
				}
			}
			{
				uint32_t L_27 = V_3;
				if ((((int32_t)L_27) == ((int32_t)((int32_t)1235622516))))
				{
					goto IL_0334_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_00f0_1:
			{
				uint32_t L_28 = V_3;
				if ((!(((uint32_t)L_28) <= ((uint32_t)((int32_t)1320492961)))))
				{
					goto IL_0113_1;
				}
			}
			{
				uint32_t L_29 = V_3;
				if ((((int32_t)L_29) == ((int32_t)((int32_t)1310955452))))
				{
					goto IL_045a_1;
				}
			}
			{
				uint32_t L_30 = V_3;
				if ((((int32_t)L_30) == ((int32_t)((int32_t)1320492961))))
				{
					goto IL_0445_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_0113_1:
			{
				uint32_t L_31 = V_3;
				if ((((int32_t)L_31) == ((int32_t)((int32_t)1458352709))))
				{
					goto IL_0430_1;
				}
			}
			{
				uint32_t L_32 = V_3;
				if ((((int32_t)L_32) == ((int32_t)((int32_t)1508062721))))
				{
					goto IL_046f_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_012e_1:
			{
				uint32_t L_33 = V_3;
				if ((!(((uint32_t)L_33) <= ((uint32_t)((int32_t)-1522491664)))))
				{
					goto IL_01a2_1;
				}
			}
			{
				uint32_t L_34 = V_3;
				if ((!(((uint32_t)L_34) <= ((uint32_t)((int32_t)1728801507)))))
				{
					goto IL_0164_1;
				}
			}
			{
				uint32_t L_35 = V_3;
				if ((((int32_t)L_35) == ((int32_t)((int32_t)1560124071))))
				{
					goto IL_0484_1;
				}
			}
			{
				uint32_t L_36 = V_3;
				if ((((int32_t)L_36) == ((int32_t)((int32_t)1640355324))))
				{
					goto IL_041b_1;
				}
			}
			{
				uint32_t L_37 = V_3;
				if ((((int32_t)L_37) == ((int32_t)((int32_t)1728801507))))
				{
					goto IL_024d_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_0164_1:
			{
				uint32_t L_38 = V_3;
				if ((!(((uint32_t)L_38) <= ((uint32_t)((int32_t)-1925595674)))))
				{
					goto IL_0187_1;
				}
			}
			{
				uint32_t L_39 = V_3;
				if ((((int32_t)L_39) == ((int32_t)((int32_t)2129631044))))
				{
					goto IL_03c7_1;
				}
			}
			{
				uint32_t L_40 = V_3;
				if ((((int32_t)L_40) == ((int32_t)((int32_t)-1925595674))))
				{
					goto IL_03dc_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_0187_1:
			{
				uint32_t L_41 = V_3;
				if ((((int32_t)L_41) == ((int32_t)((int32_t)-1786286561))))
				{
					goto IL_0223_1;
				}
			}
			{
				uint32_t L_42 = V_3;
				if ((((int32_t)L_42) == ((int32_t)((int32_t)-1522491664))))
				{
					goto IL_0277_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_01a2_1:
			{
				uint32_t L_43 = V_3;
				if ((!(((uint32_t)L_43) <= ((uint32_t)((int32_t)-558361902)))))
				{
					goto IL_01e5_1;
				}
			}
			{
				uint32_t L_44 = V_3;
				if ((!(((uint32_t)L_44) <= ((uint32_t)((int32_t)-1180859054)))))
				{
					goto IL_01cd_1;
				}
			}
			{
				uint32_t L_45 = V_3;
				if ((((int32_t)L_45) == ((int32_t)((int32_t)-1335745110))))
				{
					goto IL_02a1_1;
				}
			}
			{
				uint32_t L_46 = V_3;
				if ((((int32_t)L_46) == ((int32_t)((int32_t)-1180859054))))
				{
					goto IL_028c_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_01cd_1:
			{
				uint32_t L_47 = V_3;
				if ((((int32_t)L_47) == ((int32_t)((int32_t)-708986046))))
				{
					goto IL_0238_1;
				}
			}
			{
				uint32_t L_48 = V_3;
				if ((((int32_t)L_48) == ((int32_t)((int32_t)-558361902))))
				{
					goto IL_0349_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_01e5_1:
			{
				uint32_t L_49 = V_3;
				if ((!(((uint32_t)L_49) <= ((uint32_t)((int32_t)-255211260)))))
				{
					goto IL_0208_1;
				}
			}
			{
				uint32_t L_50 = V_3;
				if ((((int32_t)L_50) == ((int32_t)((int32_t)-345285761))))
				{
					goto IL_03b2_1;
				}
			}
			{
				uint32_t L_51 = V_3;
				if ((((int32_t)L_51) == ((int32_t)((int32_t)-255211260))))
				{
					goto IL_03f1_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_0208_1:
			{
				uint32_t L_52 = V_3;
				if ((((int32_t)L_52) == ((int32_t)((int32_t)-42086080))))
				{
					goto IL_02e0_1;
				}
			}
			{
				uint32_t L_53 = V_3;
				if ((((int32_t)L_53) == ((int32_t)((int32_t)-25846038))))
				{
					goto IL_030a_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_0223_1:
			{
				String_t* L_54 = V_2;
				bool L_55;
				L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84, NULL);
				if (L_55)
				{
					goto IL_0499_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_0238_1:
			{
				String_t* L_56 = V_2;
				bool L_57;
				L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563, NULL);
				if (L_57)
				{
					goto IL_04af_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_024d_1:
			{
				String_t* L_58 = V_2;
				bool L_59;
				L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteralF9EE582B77C320A1F6A3DF72205857C4248BAC79, NULL);
				if (L_59)
				{
					goto IL_04c5_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_0262_1:
			{
				String_t* L_60 = V_2;
				bool L_61;
				L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral53D3413057D7E52F44470A335C590748745352B1, NULL);
				if (L_61)
				{
					goto IL_04d6_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_0277_1:
			{
				String_t* L_62 = V_2;
				bool L_63;
				L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteralC959D767B7F0BD38D9DA8A64A4750C3A0972E2A0, NULL);
				if (L_63)
				{
					goto IL_04ec_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_028c_1:
			{
				String_t* L_64 = V_2;
				bool L_65;
				L_65 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_64, _stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA, NULL);
				if (L_65)
				{
					goto IL_04fd_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_02a1_1:
			{
				String_t* L_66 = V_2;
				bool L_67;
				L_67 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_66, _stringLiteral7606720A7AEF5939309A8E4FCB8274252FA3D7BF, NULL);
				if (L_67)
				{
					goto IL_050e_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_02b6_1:
			{
				String_t* L_68 = V_2;
				bool L_69;
				L_69 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_68, _stringLiteral71C5F9C3E2F3C81C5BBC7FD313F6938654E61138, NULL);
				if (L_69)
				{
					goto IL_0524_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_02cb_1:
			{
				String_t* L_70 = V_2;
				bool L_71;
				L_71 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_70, _stringLiteral3F1522C8DB7943F2AE3AA1563D3AC25D9C8B93D1, NULL);
				if (L_71)
				{
					goto IL_053a_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_02e0_1:
			{
				String_t* L_72 = V_2;
				bool L_73;
				L_73 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_72, _stringLiteralF23E83744C9D6FC70D71B723AAED8006D6780BCB, NULL);
				if (L_73)
				{
					goto IL_0550_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_02f5_1:
			{
				String_t* L_74 = V_2;
				bool L_75;
				L_75 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_74, _stringLiteralB49A1DF483856544CEC6018E8C944DB6E16A8D57, NULL);
				if (L_75)
				{
					goto IL_0566_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_030a_1:
			{
				String_t* L_76 = V_2;
				bool L_77;
				L_77 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_76, _stringLiteral3A04F86957625CB28FA670EECF997E6BAD45BBE7, NULL);
				if (L_77)
				{
					goto IL_057c_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_031f_1:
			{
				String_t* L_78 = V_2;
				bool L_79;
				L_79 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_78, _stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07, NULL);
				if (L_79)
				{
					goto IL_0592_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_0334_1:
			{
				String_t* L_80 = V_2;
				bool L_81;
				L_81 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_80, _stringLiteralBA9362732D25B1644B7D8DEC5DF6F036A4A66DE5, NULL);
				if (L_81)
				{
					goto IL_05a3_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_0349_1:
			{
				String_t* L_82 = V_2;
				bool L_83;
				L_83 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_82, _stringLiteral95F57476C0AA778364404E7CCCD7499BF1BF3757, NULL);
				if (L_83)
				{
					goto IL_05b3_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_035e_1:
			{
				String_t* L_84 = V_2;
				bool L_85;
				L_85 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_84, _stringLiteral9AB5ADF8A8A53110245466F7C226F7935F5FE95F, NULL);
				if (L_85)
				{
					goto IL_05c4_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_0373_1:
			{
				String_t* L_86 = V_2;
				bool L_87;
				L_87 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_86, _stringLiteralEA8FBF382D8AC9EDB8FFC14A350641B987F5C631, NULL);
				if (L_87)
				{
					goto IL_05d5_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_0388_1:
			{
				String_t* L_88 = V_2;
				bool L_89;
				L_89 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_88, _stringLiteral201D9D00BB60DC2318D21CF9902290EFE255D5DC, NULL);
				if (L_89)
				{
					goto IL_05e6_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_039d_1:
			{
				String_t* L_90 = V_2;
				bool L_91;
				L_91 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_90, _stringLiteral65B008F04EC40A696263EF679CF274BD10999A5D, NULL);
				if (L_91)
				{
					goto IL_05f7_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_03b2_1:
			{
				String_t* L_92 = V_2;
				bool L_93;
				L_93 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_92, _stringLiteralF38CFAE6A91D072D4453C29FF44D81D459A582F1, NULL);
				if (L_93)
				{
					goto IL_0608_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_03c7_1:
			{
				String_t* L_94 = V_2;
				bool L_95;
				L_95 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_94, _stringLiteral3BC15E3C2F40466B2DC85C4776499817B8306CBB, NULL);
				if (L_95)
				{
					goto IL_061e_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_03dc_1:
			{
				String_t* L_96 = V_2;
				bool L_97;
				L_97 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_96, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_97)
				{
					goto IL_0634_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_03f1_1:
			{
				String_t* L_98 = V_2;
				bool L_99;
				L_99 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_98, _stringLiteral83AC9669A9053DD15B9F2E82D2CE2369EFE131BA, NULL);
				if (L_99)
				{
					goto IL_064a_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_0406_1:
			{
				String_t* L_100 = V_2;
				bool L_101;
				L_101 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_100, _stringLiteralECAEEB225F8689DE45DEB4FA21CE34E1960B1B50, NULL);
				if (L_101)
				{
					goto IL_0658_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_041b_1:
			{
				String_t* L_102 = V_2;
				bool L_103;
				L_103 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_102, _stringLiteral2EE7B6B0E37E14930BBA497867139BFD0617CE04, NULL);
				if (L_103)
				{
					goto IL_0666_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_0430_1:
			{
				String_t* L_104 = V_2;
				bool L_105;
				L_105 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_104, _stringLiteralF2AF7DD0BFF41B7B35037F018DAABE7DCF357A7B, NULL);
				if (L_105)
				{
					goto IL_0674_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_0445_1:
			{
				String_t* L_106 = V_2;
				bool L_107;
				L_107 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_106, _stringLiteral7FF61C3A55BCA1287974D8740F945250B3F0F084, NULL);
				if (L_107)
				{
					goto IL_0687_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_045a_1:
			{
				String_t* L_108 = V_2;
				bool L_109;
				L_109 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_108, _stringLiteral2ADFC3FFF7C52D554F0435A348A5345C9FCD7FF8, NULL);
				if (L_109)
				{
					goto IL_069a_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_046f_1:
			{
				String_t* L_110 = V_2;
				bool L_111;
				L_111 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_110, _stringLiteral2E201D1972661439FD3C8523C55723E7E9BCC7DA, NULL);
				if (L_111)
				{
					goto IL_06ac_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_0484_1:
			{
				String_t* L_112 = V_2;
				bool L_113;
				L_113 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_112, _stringLiteralCD44AC57FFE6CAC7824F4CAA223F1BB8B4CB0D73, NULL);
				if (L_113)
				{
					goto IL_06be_1;
				}
			}
			{
				goto IL_06d0_1;
			}

IL_0499_1:
			{
				// instance.width = reader.Read<System.Int32>(ES3Type_int.Instance);
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_114 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_115 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_116 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_115);
				int32_t L_117;
				L_117 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_115, L_116);
				NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_114);
				VirtualActionInvoker1< int32_t >::Invoke(6 /* System.Void UnityEngine.Texture::set_width(System.Int32) */, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_114, L_117);
				// break;
				goto IL_06d6_1;
			}

IL_04af_1:
			{
				// instance.height = reader.Read<System.Int32>(ES3Type_int.Instance);
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_118 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_119 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_120 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_119);
				int32_t L_121;
				L_121 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_119, L_120);
				NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_118);
				VirtualActionInvoker1< int32_t >::Invoke(8 /* System.Void UnityEngine.Texture::set_height(System.Int32) */, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_118, L_121);
				// break;
				goto IL_06d6_1;
			}

IL_04c5_1:
			{
				// instance.dimension = reader.Read<UnityEngine.Rendering.TextureDimension>();
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_122 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_123 = ___reader0;
				NullCheck(L_123);
				int32_t L_124;
				L_124 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureDimension_t8D7148B9168256EE1E9AF91378ABA148888CE642_mA744972E280F5A24EC2CF0C4FF186AC889B75A6A_RuntimeMethod_var, L_123);
				NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_122);
				VirtualActionInvoker1< int32_t >::Invoke(10 /* System.Void UnityEngine.Texture::set_dimension(UnityEngine.Rendering.TextureDimension) */, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_122, L_124);
				// break;
				goto IL_06d6_1;
			}

IL_04d6_1:
			{
				// instance.useMipMap = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_125 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_126 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_127 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_126);
				bool L_128;
				L_128 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_126, L_127);
				NullCheck(L_125);
				RenderTexture_set_useMipMap_mB280A39DAB18372D3A0050FF20F730E5B0B44C32(L_125, L_128, NULL);
				// break;
				goto IL_06d6_1;
			}

IL_04ec_1:
			{
				// instance.memorylessMode = reader.Read<UnityEngine.RenderTextureMemoryless>();
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_129 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_130 = ___reader0;
				NullCheck(L_130);
				int32_t L_131;
				L_131 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisRenderTextureMemoryless_tE3B7F3AE353C3E9ACF86076376EB862131D19A69_mB0AFE6234A4B2CD51C96527D7BB5684FFDE51FB9_RuntimeMethod_var, L_130);
				NullCheck(L_129);
				RenderTexture_set_memorylessMode_m4F368B9C911EB033DFD44BDB2EF67CD451D74CED(L_129, L_131, NULL);
				// break;
				goto IL_06d6_1;
			}

IL_04fd_1:
			{
				// instance.format = reader.Read<UnityEngine.RenderTextureFormat>();
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_132 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_133 = ___reader0;
				NullCheck(L_133);
				int32_t L_134;
				L_134 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisRenderTextureFormat_tB6F1ED5040395B46880CE00312D2FDDBF9EEB40F_m7EEE1397D6C82E0DA91812E214FB82649C4DCEEC_RuntimeMethod_var, L_133);
				NullCheck(L_132);
				RenderTexture_set_format_m6E5F83C36DA7EB9AD947AE3D6AFD95952E67EEFA(L_132, L_134, NULL);
				// break;
				goto IL_06d6_1;
			}

IL_050e_1:
			{
				// instance.autoGenerateMips = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_135 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_136 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_137 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_136);
				bool L_138;
				L_138 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_136, L_137);
				NullCheck(L_135);
				RenderTexture_set_autoGenerateMips_mDEFAC13954D315DE52B35B34577218D3AD4897A9(L_135, L_138, NULL);
				// break;
				goto IL_06d6_1;
			}

IL_0524_1:
			{
				// instance.volumeDepth = reader.Read<System.Int32>(ES3Type_int.Instance);
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_139 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_140 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_141 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_140);
				int32_t L_142;
				L_142 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_140, L_141);
				NullCheck(L_139);
				RenderTexture_set_volumeDepth_mD9B1E6BA4BE6B1741427B34A23B9D48BA9493633(L_139, L_142, NULL);
				// break;
				goto IL_06d6_1;
			}

IL_053a_1:
			{
				// instance.antiAliasing = reader.Read<System.Int32>(ES3Type_int.Instance);
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_143 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_144 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_145 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_144);
				int32_t L_146;
				L_146 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_144, L_145);
				NullCheck(L_143);
				RenderTexture_set_antiAliasing_mA578276F4827A5CD4007DFE00117250A9336BC7A(L_143, L_146, NULL);
				// break;
				goto IL_06d6_1;
			}

IL_0550_1:
			{
				// instance.enableRandomWrite = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_147 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_148 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_149 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_148);
				bool L_150;
				L_150 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_148, L_149);
				NullCheck(L_147);
				RenderTexture_set_enableRandomWrite_m1F1B5E033802C193449803411560DB4D5D4AEEAB(L_147, L_150, NULL);
				// break;
				goto IL_06d6_1;
			}

IL_0566_1:
			{
				// instance.isPowerOfTwo = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_151 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_152 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_153 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_152);
				bool L_154;
				L_154 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_152, L_153);
				NullCheck(L_151);
				RenderTexture_set_isPowerOfTwo_mC484FC101ACE1B1BAFF21FA71F633A39765987A4(L_151, L_154, NULL);
				// break;
				goto IL_06d6_1;
			}

IL_057c_1:
			{
				// instance.depth = reader.Read<System.Int32>(ES3Type_int.Instance);
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_155 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_156 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_157 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_156);
				int32_t L_158;
				L_158 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_156, L_157);
				NullCheck(L_155);
				RenderTexture_set_depth_m3D8EF7C98634724B2DB8279387A81C4E19B5DA53(L_155, L_158, NULL);
				// break;
				goto IL_06d6_1;
			}

IL_0592_1:
			{
				// instance.descriptor = reader.Read<UnityEngine.RenderTextureDescriptor>();
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_159 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_160 = ___reader0;
				NullCheck(L_160);
				RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_161;
				L_161 = GenericVirtualFuncInvoker0< RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 >::Invoke(ES3Reader_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_mD8942C4530EDDC82CD293BD62A5B0006DE72DC00_RuntimeMethod_var, L_160);
				NullCheck(L_159);
				RenderTexture_set_descriptor_m5BB8245412A1C60628AD0089A9B1937CBDBAA8B8(L_159, L_161, NULL);
				// break;
				goto IL_06d6_1;
			}

IL_05a3_1:
			{
				// UnityEngine.RenderTexture.anisotropicFiltering = reader.Read<UnityEngine.AnisotropicFiltering>();
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_162 = ___reader0;
				NullCheck(L_162);
				int32_t L_163;
				L_163 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisAnisotropicFiltering_t4D9AB1E10B26E9F81E6209E1346D588E15EABBEA_mFDF1B926B3F1A343FCC72986DE2916E736C633CF_RuntimeMethod_var, L_162);
				il2cpp_codegen_runtime_class_init_inline(Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_il2cpp_TypeInfo_var);
				Texture_set_anisotropicFiltering_mA22A3AD8E4848C073D58B32ACA9573DCBA22A616(L_163, NULL);
				// break;
				goto IL_06d6_1;
			}

IL_05b3_1:
			{
				// instance.wrapMode = reader.Read<UnityEngine.TextureWrapMode>();
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_164 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_165 = ___reader0;
				NullCheck(L_165);
				int32_t L_166;
				L_166 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_tF9851343029052ED45668D1C99BAE09B2CCC13AD_mA5F35BEEA7861230233DE7E9A931F0D73052D3A0_RuntimeMethod_var, L_165);
				NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_164);
				Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_164, L_166, NULL);
				// break;
				goto IL_06d6_1;
			}

IL_05c4_1:
			{
				// instance.wrapModeU = reader.Read<UnityEngine.TextureWrapMode>();
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_167 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_168 = ___reader0;
				NullCheck(L_168);
				int32_t L_169;
				L_169 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_tF9851343029052ED45668D1C99BAE09B2CCC13AD_mA5F35BEEA7861230233DE7E9A931F0D73052D3A0_RuntimeMethod_var, L_168);
				NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_167);
				Texture_set_wrapModeU_m2002CCB73143182032BD5ED6C80AB9A0ED2A0981((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_167, L_169, NULL);
				// break;
				goto IL_06d6_1;
			}

IL_05d5_1:
			{
				// instance.wrapModeV = reader.Read<UnityEngine.TextureWrapMode>();
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_170 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_171 = ___reader0;
				NullCheck(L_171);
				int32_t L_172;
				L_172 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_tF9851343029052ED45668D1C99BAE09B2CCC13AD_mA5F35BEEA7861230233DE7E9A931F0D73052D3A0_RuntimeMethod_var, L_171);
				NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_170);
				Texture_set_wrapModeV_m3C79177BAE70103DDBF871896AF464513A0F919D((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_170, L_172, NULL);
				// break;
				goto IL_06d6_1;
			}

IL_05e6_1:
			{
				// instance.wrapModeW = reader.Read<UnityEngine.TextureWrapMode>();
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_173 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_174 = ___reader0;
				NullCheck(L_174);
				int32_t L_175;
				L_175 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_tF9851343029052ED45668D1C99BAE09B2CCC13AD_mA5F35BEEA7861230233DE7E9A931F0D73052D3A0_RuntimeMethod_var, L_174);
				NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_173);
				Texture_set_wrapModeW_mCE8F0DA65C902D6D1A95823892D48E10A6949863((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_173, L_175, NULL);
				// break;
				goto IL_06d6_1;
			}

IL_05f7_1:
			{
				// instance.filterMode = reader.Read<UnityEngine.FilterMode>();
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_176 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_177 = ___reader0;
				NullCheck(L_177);
				int32_t L_178;
				L_178 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisFilterMode_t4AD57F1A3FE272D650E0E688BA044AE872BD2A34_mED18EC8C268F8EFCB960D74CA5B270AC7EACD91C_RuntimeMethod_var, L_177);
				NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_176);
				Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_176, L_178, NULL);
				// break;
				goto IL_06d6_1;
			}

IL_0608_1:
			{
				// instance.anisoLevel = reader.Read<System.Int32>(ES3Type_int.Instance);
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_179 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_180 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_181 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_180);
				int32_t L_182;
				L_182 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_180, L_181);
				NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_179);
				Texture_set_anisoLevel_m768759DE9D6BE15FCE995F5FC468980B904B9D1F((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_179, L_182, NULL);
				// break;
				goto IL_06d6_1;
			}

IL_061e_1:
			{
				// instance.mipMapBias = reader.Read<System.Single>(ES3Type_float.Instance);
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_183 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_184 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_185 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_184);
				float L_186;
				L_186 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_184, L_185);
				NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_183);
				Texture_set_mipMapBias_m945790033BD16B51B4EDD12E177207EBF5887286((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_183, L_186, NULL);
				// break;
				goto IL_06d6_1;
			}

IL_0634_1:
			{
				// instance.name = reader.Read<System.String>(ES3Type_string.Instance);
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_187 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_188 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_189 = ((ES3Type_string_tF2C6B48AEF5F70E0C8CE33C9556FDFC7572D3A20_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tF2C6B48AEF5F70E0C8CE33C9556FDFC7572D3A20_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_188);
				String_t* L_190;
				L_190 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisString_t_m768535B1FBE236A964B82DC2B1781D823A20C5AB_RuntimeMethod_var, L_188, L_189);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_187);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_187, L_190, NULL);
				// break;
				goto IL_06d6_1;
			}

IL_064a_1:
			{
				// instance.vrUsage = reader.Read<UnityEngine.VRTextureUsage>();
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_191 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_192 = ___reader0;
				NullCheck(L_192);
				int32_t L_193;
				L_193 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisVRTextureUsage_t57FAA0077810142A461D74EDC5E33FC3D78BD2E8_m9E522C989CE6BCBC67A3BB3E62FA1A79DD512FB9_RuntimeMethod_var, L_192);
				NullCheck(L_191);
				RenderTexture_set_vrUsage_mAA13206DFE05C0A869A160CB1C2AC9D1C099D203(L_191, L_193, NULL);
				// break;
				goto IL_06d6_1;
			}

IL_0658_1:
			{
				// instance.graphicsFormat = reader.Read<UnityEngine.Experimental.Rendering.GraphicsFormat>();
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_194 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_195 = ___reader0;
				NullCheck(L_195);
				int32_t L_196;
				L_196 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisGraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713_m0C82F31A1E1CE62066B3C32079D01649C5CA2B2F_RuntimeMethod_var, L_195);
				NullCheck(L_194);
				RenderTexture_set_graphicsFormat_m4CFDFF4CEC81B5350AE94D466585C8186E06B733(L_194, L_196, NULL);
				// break;
				goto IL_06d6_1;
			}

IL_0666_1:
			{
				// instance.stencilFormat = reader.Read<UnityEngine.Experimental.Rendering.GraphicsFormat>();
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_197 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_198 = ___reader0;
				NullCheck(L_198);
				int32_t L_199;
				L_199 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisGraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713_m0C82F31A1E1CE62066B3C32079D01649C5CA2B2F_RuntimeMethod_var, L_198);
				NullCheck(L_197);
				RenderTexture_set_stencilFormat_m92E00333CD5EBDC5B73F43521B6E8132C1B087AE(L_197, L_199, NULL);
				// break;
				goto IL_06d6_1;
			}

IL_0674_1:
			{
				// instance.bindTextureMS = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_200 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_201 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_202 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_201);
				bool L_203;
				L_203 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_201, L_202);
				NullCheck(L_200);
				RenderTexture_set_bindTextureMS_m06A8FE127AEE42767530955453DBB9C55320208E(L_200, L_203, NULL);
				// break;
				goto IL_06d6_1;
			}

IL_0687_1:
			{
				// instance.useDynamicScale = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_204 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_205 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_206 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_205);
				bool L_207;
				L_207 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_205, L_206);
				NullCheck(L_204);
				RenderTexture_set_useDynamicScale_m0B6F123BB7FF0BA01515163A0EFA9B1D4375B883(L_204, L_207, NULL);
				// break;
				goto IL_06d6_1;
			}

IL_069a_1:
			{
				// UnityEngine.RenderTexture.streamingTextureForceLoadAll = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_208 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_209 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_208);
				bool L_210;
				L_210 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_208, L_209);
				il2cpp_codegen_runtime_class_init_inline(Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_il2cpp_TypeInfo_var);
				Texture_set_streamingTextureForceLoadAll_m49BBAA185AC290FF1B92627CA6C7A0F1C7D243D6(L_210, NULL);
				// break;
				goto IL_06d6_1;
			}

IL_06ac_1:
			{
				// UnityEngine.RenderTexture.streamingTextureDiscardUnusedMips = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_211 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_212 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_211);
				bool L_213;
				L_213 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_211, L_212);
				il2cpp_codegen_runtime_class_init_inline(Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_il2cpp_TypeInfo_var);
				Texture_set_streamingTextureDiscardUnusedMips_mDB2B44B960BB3EEDC7DF7F013619F33FF4BE97EA(L_213, NULL);
				// break;
				goto IL_06d6_1;
			}

IL_06be_1:
			{
				// UnityEngine.RenderTexture.allowThreadedTextureCreation = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_214 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_215 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_214);
				bool L_216;
				L_216 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_214, L_215);
				il2cpp_codegen_runtime_class_init_inline(Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_il2cpp_TypeInfo_var);
				Texture_set_allowThreadedTextureCreation_m20F9D0702196CB1762B85F495863F54272886F4F(L_216, NULL);
				// break;
				goto IL_06d6_1;
			}

IL_06d0_1:
			{
				// reader.Skip();
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_217 = ___reader0;
				NullCheck(L_217);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_217);
			}

IL_06d6_1:
			{
				// foreach (string propertyName in reader.Properties)
				RuntimeObject* L_218 = V_1;
				NullCheck(L_218);
				bool L_219;
				L_219 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_218);
				if (L_219)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_06f7;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_06f7:
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_Rigidbody::ReadComponent<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Rigidbody_ReadComponent_TisRuntimeObject_mB629E7027643E453DF0FD11186E5D5E8661C3914_gshared (ES3Type_Rigidbody_t6EB925A75F5D3C9B82479BF14045F1435583E432* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisCollisionDetectionMode_tE78B6425ECA33250872A4B624D2B03A976163459_m44A4857AC8C54190725AF7C9E1991C4382113304_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mC385FA4038A6C09E3FA70EBDEA178513D3FC53A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRigidbodyConstraints_tE93C9173FB4F24EF4D38166A288214D28D8E85C8_m4E1E968B2427F666DE5D8CA41531F6C29B8B90E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisRigidbodyInterpolation_tE2BE80352B0D72DB26B81EFD5A0845DEFEE994F8_m073565923144B5F57D1817E8A00F40AF2383F7D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m2FB5D193538173A928BC95202B90C4900D1F0F8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Quaternion_t6484CEB19562B8AF1894E20B82C9AFBCA6E78C16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_tBEBB6BA6FF3FA98D90871CDA974F8FD5A4CA364C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rigidbody_t268697F5A994213ED97393309870968BC1C7393C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04A3E73E916A9D96C723D6248D07DF9DF1E7E8D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25CA075E7233E0F86172179489DCE5C905F99BF2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral386EE79E0C1315CB902D6209A24E79E28710E583);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral387BDCC4F2454E2A62E9405643AF7EADAF442F5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48DC6A58A18098420AC1CD015B24A5856038A620);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DF417DF46EF8A7C67D3A1FE0CC53DCF5212FC81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5514320EE1A6E08163B07C2EF4B99B9A8002BD40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56BCA5E8F47F9F0842D96D19FE650B91285F2D53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral588F553F93289F49C56014ECF461ECAB96A10F49);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69F581EEA4532CB86373BDE467E62B40C5353ADF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BE6991311592B778BB540656302FE479334E0C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral800FCCC2C450FD3BE422706C42BEB4454271944B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BDF3D0791A560245652E772545C49897854443);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89E0069149A7FE28C0533923B9F779CE91ADEA58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D07732265032EC34859337960AF5C34A24B362C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90CF3FD4F8475D601EE96C2DAC1BDCB3A99F125B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABDCCB17E56605903DC5F7E295E289CE3971EA70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAF092CD55C89B9907ED9267E2C3E9D6F8299316);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3D4B9E7482A3ACC971856FE454424C1A233E4EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD42E0D00318C368FE5B98209F0650AC5A54F5FB5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7C9E5AB572028486B0F2E3887787D11180B2B4D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC18B9A0F3C493B4942013A4FF84CE7D169509B3);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	uint32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	{
		// var instance = (UnityEngine.Rigidbody)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((Rigidbody_t268697F5A994213ED97393309870968BC1C7393C*)CastclassClass((RuntimeObject*)L_0, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C_il2cpp_TypeInfo_var));
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

FINALLY_054b:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_5;
					if (!L_5)
					{
						goto IL_055e;
					}
				}
				{
					RuntimeObject* L_6 = V_5;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_055e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_053e_1;
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
				V_4 = L_10;
				uint32_t L_11 = V_4;
				if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-1680862109)))))
				{
					goto IL_00eb_1;
				}
			}
			{
				uint32_t L_12 = V_4;
				if ((!(((uint32_t)L_12) <= ((uint32_t)((int32_t)846470194)))))
				{
					goto IL_0090_1;
				}
			}
			{
				uint32_t L_13 = V_4;
				if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)132777611)))))
				{
					goto IL_0067_1;
				}
			}
			{
				uint32_t L_14 = V_4;
				if ((((int32_t)L_14) == ((int32_t)((int32_t)69535816))))
				{
					goto IL_0216_1;
				}
			}
			{
				uint32_t L_15 = V_4;
				if ((((int32_t)L_15) == ((int32_t)((int32_t)132777611))))
				{
					goto IL_0255_1;
				}
			}
			{
				goto IL_0538_1;
			}

IL_0067_1:
			{
				uint32_t L_16 = V_4;
				if ((((int32_t)L_16) == ((int32_t)((int32_t)520558326))))
				{
					goto IL_022b_1;
				}
			}
			{
				uint32_t L_17 = V_4;
				if ((((int32_t)L_17) == ((int32_t)((int32_t)564937055))))
				{
					goto IL_02e8_1;
				}
			}
			{
				uint32_t L_18 = V_4;
				if ((((int32_t)L_18) == ((int32_t)((int32_t)846470194))))
				{
					goto IL_0198_1;
				}
			}
			{
				goto IL_0538_1;
			}

IL_0090_1:
			{
				uint32_t L_19 = V_4;
				if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)1590826182)))))
				{
					goto IL_00c2_1;
				}
			}
			{
				uint32_t L_20 = V_4;
				if ((((int32_t)L_20) == ((int32_t)((int32_t)905125296))))
				{
					goto IL_0240_1;
				}
			}
			{
				uint32_t L_21 = V_4;
				if ((((int32_t)L_21) == ((int32_t)((int32_t)965172509))))
				{
					goto IL_02fd_1;
				}
			}
			{
				uint32_t L_22 = V_4;
				if ((((int32_t)L_22) == ((int32_t)((int32_t)1590826182))))
				{
					goto IL_0294_1;
				}
			}
			{
				goto IL_0538_1;
			}

IL_00c2_1:
			{
				uint32_t L_23 = V_4;
				if ((((int32_t)L_23) == ((int32_t)((int32_t)-1823519222))))
				{
					goto IL_02d3_1;
				}
			}
			{
				uint32_t L_24 = V_4;
				if ((((int32_t)L_24) == ((int32_t)((int32_t)-1698013973))))
				{
					goto IL_0327_1;
				}
			}
			{
				uint32_t L_25 = V_4;
				if ((((int32_t)L_25) == ((int32_t)((int32_t)-1680862109))))
				{
					goto IL_02be_1;
				}
			}
			{
				goto IL_0538_1;
			}

IL_00eb_1:
			{
				uint32_t L_26 = V_4;
				if ((!(((uint32_t)L_26) <= ((uint32_t)((int32_t)-800222937)))))
				{
					goto IL_0143_1;
				}
			}
			{
				uint32_t L_27 = V_4;
				if ((!(((uint32_t)L_27) <= ((uint32_t)((int32_t)-1217444223)))))
				{
					goto IL_011a_1;
				}
			}
			{
				uint32_t L_28 = V_4;
				if ((((int32_t)L_28) == ((int32_t)((int32_t)-1276460738))))
				{
					goto IL_01ad_1;
				}
			}
			{
				uint32_t L_29 = V_4;
				if ((((int32_t)L_29) == ((int32_t)((int32_t)-1217444223))))
				{
					goto IL_027f_1;
				}
			}
			{
				goto IL_0538_1;
			}

IL_011a_1:
			{
				uint32_t L_30 = V_4;
				if ((((int32_t)L_30) == ((int32_t)((int32_t)-1198781117))))
				{
					goto IL_01c2_1;
				}
			}
			{
				uint32_t L_31 = V_4;
				if ((((int32_t)L_31) == ((int32_t)((int32_t)-855228832))))
				{
					goto IL_02a9_1;
				}
			}
			{
				uint32_t L_32 = V_4;
				if ((((int32_t)L_32) == ((int32_t)((int32_t)-800222937))))
				{
					goto IL_01d7_1;
				}
			}
			{
				goto IL_0538_1;
			}

IL_0143_1:
			{
				uint32_t L_33 = V_4;
				if ((!(((uint32_t)L_33) <= ((uint32_t)((int32_t)-545834799)))))
				{
					goto IL_0172_1;
				}
			}
			{
				uint32_t L_34 = V_4;
				if ((((int32_t)L_34) == ((int32_t)((int32_t)-696840654))))
				{
					goto IL_0312_1;
				}
			}
			{
				uint32_t L_35 = V_4;
				if ((((int32_t)L_35) == ((int32_t)((int32_t)-646633571))))
				{
					goto IL_0351_1;
				}
			}
			{
				uint32_t L_36 = V_4;
				if ((((int32_t)L_36) == ((int32_t)((int32_t)-545834799))))
				{
					goto IL_01ec_1;
				}
			}
			{
				goto IL_0538_1;
			}

IL_0172_1:
			{
				uint32_t L_37 = V_4;
				if ((((int32_t)L_37) == ((int32_t)((int32_t)-520104043))))
				{
					goto IL_026a_1;
				}
			}
			{
				uint32_t L_38 = V_4;
				if ((((int32_t)L_38) == ((int32_t)((int32_t)-455973614))))
				{
					goto IL_0201_1;
				}
			}
			{
				uint32_t L_39 = V_4;
				if ((((int32_t)L_39) == ((int32_t)((int32_t)-428423614))))
				{
					goto IL_033c_1;
				}
			}
			{
				goto IL_0538_1;
			}

IL_0198_1:
			{
				String_t* L_40 = V_2;
				bool L_41;
				L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral48DC6A58A18098420AC1CD015B24A5856038A620, NULL);
				if (L_41)
				{
					goto IL_0366_1;
				}
			}
			{
				goto IL_0538_1;
			}

IL_01ad_1:
			{
				String_t* L_42 = V_2;
				bool L_43;
				L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralABDCCB17E56605903DC5F7E295E289CE3971EA70, NULL);
				if (L_43)
				{
					goto IL_037c_1;
				}
			}
			{
				goto IL_0538_1;
			}

IL_01c2_1:
			{
				String_t* L_44 = V_2;
				bool L_45;
				L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral588F553F93289F49C56014ECF461ECAB96A10F49, NULL);
				if (L_45)
				{
					goto IL_0392_1;
				}
			}
			{
				goto IL_0538_1;
			}

IL_01d7_1:
			{
				String_t* L_46 = V_2;
				bool L_47;
				L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteral800FCCC2C450FD3BE422706C42BEB4454271944B, NULL);
				if (L_47)
				{
					goto IL_03a8_1;
				}
			}
			{
				goto IL_0538_1;
			}

IL_01ec_1:
			{
				String_t* L_48 = V_2;
				bool L_49;
				L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral25CA075E7233E0F86172179489DCE5C905F99BF2, NULL);
				if (L_49)
				{
					goto IL_03be_1;
				}
			}
			{
				goto IL_0538_1;
			}

IL_0201_1:
			{
				String_t* L_50 = V_2;
				bool L_51;
				L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral90CF3FD4F8475D601EE96C2DAC1BDCB3A99F125B, NULL);
				if (L_51)
				{
					goto IL_03d4_1;
				}
			}
			{
				goto IL_0538_1;
			}

IL_0216_1:
			{
				String_t* L_52 = V_2;
				bool L_53;
				L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral6BE6991311592B778BB540656302FE479334E0C1, NULL);
				if (L_53)
				{
					goto IL_03ea_1;
				}
			}
			{
				goto IL_0538_1;
			}

IL_022b_1:
			{
				String_t* L_54 = V_2;
				bool L_55;
				L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteralD7C9E5AB572028486B0F2E3887787D11180B2B4D, NULL);
				if (L_55)
				{
					goto IL_0400_1;
				}
			}
			{
				goto IL_0538_1;
			}

IL_0240_1:
			{
				String_t* L_56 = V_2;
				bool L_57;
				L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteralBAF092CD55C89B9907ED9267E2C3E9D6F8299316, NULL);
				if (L_57)
				{
					goto IL_0416_1;
				}
			}
			{
				goto IL_0538_1;
			}

IL_0255_1:
			{
				String_t* L_58 = V_2;
				bool L_59;
				L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral5514320EE1A6E08163B07C2EF4B99B9A8002BD40, NULL);
				if (L_59)
				{
					goto IL_042c_1;
				}
			}
			{
				goto IL_0538_1;
			}

IL_026a_1:
			{
				String_t* L_60 = V_2;
				bool L_61;
				L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral386EE79E0C1315CB902D6209A24E79E28710E583, NULL);
				if (L_61)
				{
					goto IL_043d_1;
				}
			}
			{
				goto IL_0538_1;
			}

IL_027f_1:
			{
				String_t* L_62 = V_2;
				bool L_63;
				L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral69F581EEA4532CB86373BDE467E62B40C5353ADF, NULL);
				if (L_63)
				{
					goto IL_044e_1;
				}
			}
			{
				goto IL_0538_1;
			}

IL_0294_1:
			{
				String_t* L_64 = V_2;
				bool L_65;
				L_65 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_64, _stringLiteral56BCA5E8F47F9F0842D96D19FE650B91285F2D53, NULL);
				if (L_65)
				{
					goto IL_0464_1;
				}
			}
			{
				goto IL_0538_1;
			}

IL_02a9_1:
			{
				String_t* L_66 = V_2;
				bool L_67;
				L_67 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_66, _stringLiteral387BDCC4F2454E2A62E9405643AF7EADAF442F5B, NULL);
				if (L_67)
				{
					goto IL_047a_1;
				}
			}
			{
				goto IL_0538_1;
			}

IL_02be_1:
			{
				String_t* L_68 = V_2;
				bool L_69;
				L_69 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_68, _stringLiteral89E0069149A7FE28C0533923B9F779CE91ADEA58, NULL);
				if (L_69)
				{
					goto IL_04a2_1;
				}
			}
			{
				goto IL_0538_1;
			}

IL_02d3_1:
			{
				String_t* L_70 = V_2;
				bool L_71;
				L_71 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_70, _stringLiteral88BDF3D0791A560245652E772545C49897854443, NULL);
				if (L_71)
				{
					goto IL_04b8_1;
				}
			}
			{
				goto IL_0538_1;
			}

IL_02e8_1:
			{
				String_t* L_72 = V_2;
				bool L_73;
				L_73 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_72, _stringLiteral4DF417DF46EF8A7C67D3A1FE0CC53DCF5212FC81, NULL);
				if (L_73)
				{
					goto IL_04cb_1;
				}
			}
			{
				goto IL_0538_1;
			}

IL_02fd_1:
			{
				String_t* L_74 = V_2;
				bool L_75;
				L_75 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_74, _stringLiteralD42E0D00318C368FE5B98209F0650AC5A54F5FB5, NULL);
				if (L_75)
				{
					goto IL_04de_1;
				}
			}
			{
				goto IL_0538_1;
			}

IL_0312_1:
			{
				String_t* L_76 = V_2;
				bool L_77;
				L_77 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_76, _stringLiteral04A3E73E916A9D96C723D6248D07DF9DF1E7E8D6, NULL);
				if (L_77)
				{
					goto IL_04ec_1;
				}
			}
			{
				goto IL_0538_1;
			}

IL_0327_1:
			{
				String_t* L_78 = V_2;
				bool L_79;
				L_79 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_78, _stringLiteral8D07732265032EC34859337960AF5C34A24B362C, NULL);
				if (L_79)
				{
					goto IL_04ff_1;
				}
			}
			{
				goto IL_0538_1;
			}

IL_033c_1:
			{
				String_t* L_80 = V_2;
				bool L_81;
				L_81 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_80, _stringLiteralEC18B9A0F3C493B4942013A4FF84CE7D169509B3, NULL);
				if (L_81)
				{
					goto IL_0512_1;
				}
			}
			{
				goto IL_0538_1;
			}

IL_0351_1:
			{
				String_t* L_82 = V_2;
				bool L_83;
				L_83 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_82, _stringLiteralD3D4B9E7482A3ACC971856FE454424C1A233E4EF, NULL);
				if (L_83)
				{
					goto IL_0525_1;
				}
			}
			{
				goto IL_0538_1;
			}

IL_0366_1:
			{
				// instance.velocity = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_84 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_85 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_86 = ((ES3Type_Vector3_tBEBB6BA6FF3FA98D90871CDA974F8FD5A4CA364C_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_tBEBB6BA6FF3FA98D90871CDA974F8FD5A4CA364C_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_85);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
				L_87 = GenericVirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m2FB5D193538173A928BC95202B90C4900D1F0F8D_RuntimeMethod_var, L_85, L_86);
				NullCheck(L_84);
				Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_84, L_87, NULL);
				// break;
				goto IL_053e_1;
			}

IL_037c_1:
			{
				// instance.angularVelocity = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_88 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_89 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_90 = ((ES3Type_Vector3_tBEBB6BA6FF3FA98D90871CDA974F8FD5A4CA364C_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_tBEBB6BA6FF3FA98D90871CDA974F8FD5A4CA364C_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_89);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91;
				L_91 = GenericVirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m2FB5D193538173A928BC95202B90C4900D1F0F8D_RuntimeMethod_var, L_89, L_90);
				NullCheck(L_88);
				Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0(L_88, L_91, NULL);
				// break;
				goto IL_053e_1;
			}

IL_0392_1:
			{
				// instance.drag = reader.Read<System.Single>(ES3Type_float.Instance);
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_92 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_93 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_94 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_93);
				float L_95;
				L_95 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_93, L_94);
				NullCheck(L_92);
				Rigidbody_set_drag_m9E9F375A26A8F3D1AABCEB015E41696F39088EE0(L_92, L_95, NULL);
				// break;
				goto IL_053e_1;
			}

IL_03a8_1:
			{
				// instance.angularDrag = reader.Read<System.Single>(ES3Type_float.Instance);
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_96 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_97 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_98 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_97);
				float L_99;
				L_99 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_97, L_98);
				NullCheck(L_96);
				Rigidbody_set_angularDrag_m4193B04EEFCA831DB99E29E98F778957557F130C(L_96, L_99, NULL);
				// break;
				goto IL_053e_1;
			}

IL_03be_1:
			{
				// instance.mass = reader.Read<System.Single>(ES3Type_float.Instance);
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_100 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_101 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_102 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_101);
				float L_103;
				L_103 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_101, L_102);
				NullCheck(L_100);
				Rigidbody_set_mass_mC7F886DEDB57C742A16F8B6B779F69AFE164CA4B(L_100, L_103, NULL);
				// break;
				goto IL_053e_1;
			}

IL_03d4_1:
			{
				// instance.useGravity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_104 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_105 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_106 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_105);
				bool L_107;
				L_107 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_105, L_106);
				NullCheck(L_104);
				Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389(L_104, L_107, NULL);
				// break;
				goto IL_053e_1;
			}

IL_03ea_1:
			{
				// instance.maxDepenetrationVelocity = reader.Read<System.Single>(ES3Type_float.Instance);
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_108 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_109 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_110 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_109);
				float L_111;
				L_111 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_109, L_110);
				NullCheck(L_108);
				Rigidbody_set_maxDepenetrationVelocity_mEE787E12E070438903558B0C79DDD98E3A5CFFD7(L_108, L_111, NULL);
				// break;
				goto IL_053e_1;
			}

IL_0400_1:
			{
				// instance.isKinematic = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_112 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_113 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_114 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_113);
				bool L_115;
				L_115 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_113, L_114);
				NullCheck(L_112);
				Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_112, L_115, NULL);
				// break;
				goto IL_053e_1;
			}

IL_0416_1:
			{
				// instance.freezeRotation = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_116 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_117 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_118 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_117);
				bool L_119;
				L_119 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_117, L_118);
				NullCheck(L_116);
				Rigidbody_set_freezeRotation_m6D049F82E9133020C31EEFB35A179A56364325DC(L_116, L_119, NULL);
				// break;
				goto IL_053e_1;
			}

IL_042c_1:
			{
				// instance.constraints = reader.Read<UnityEngine.RigidbodyConstraints>();
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_120 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_121 = ___reader0;
				NullCheck(L_121);
				int32_t L_122;
				L_122 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisRigidbodyConstraints_tE93C9173FB4F24EF4D38166A288214D28D8E85C8_m4E1E968B2427F666DE5D8CA41531F6C29B8B90E7_RuntimeMethod_var, L_121);
				NullCheck(L_120);
				Rigidbody_set_constraints_mE81BF0DAEB980E320538231E092CA4663885A9A3(L_120, L_122, NULL);
				// break;
				goto IL_053e_1;
			}

IL_043d_1:
			{
				// instance.collisionDetectionMode = reader.Read<UnityEngine.CollisionDetectionMode>();
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_123 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_124 = ___reader0;
				NullCheck(L_124);
				int32_t L_125;
				L_125 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisCollisionDetectionMode_tE78B6425ECA33250872A4B624D2B03A976163459_m44A4857AC8C54190725AF7C9E1991C4382113304_RuntimeMethod_var, L_124);
				NullCheck(L_123);
				Rigidbody_set_collisionDetectionMode_m70A22E9878027BF6D3D7E851A43A8E32B8E02343(L_123, L_125, NULL);
				// break;
				goto IL_053e_1;
			}

IL_044e_1:
			{
				// instance.centerOfMass = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_126 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_127 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_128 = ((ES3Type_Vector3_tBEBB6BA6FF3FA98D90871CDA974F8FD5A4CA364C_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_tBEBB6BA6FF3FA98D90871CDA974F8FD5A4CA364C_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_127);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_129;
				L_129 = GenericVirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m2FB5D193538173A928BC95202B90C4900D1F0F8D_RuntimeMethod_var, L_127, L_128);
				NullCheck(L_126);
				Rigidbody_set_centerOfMass_m9D4A68D102498C7DBCD91278FF5EE7EE0BF2B188(L_126, L_129, NULL);
				// break;
				goto IL_053e_1;
			}

IL_0464_1:
			{
				// instance.inertiaTensorRotation = reader.Read<UnityEngine.Quaternion>(ES3Type_Quaternion.Instance);
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_130 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_131 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_132 = ((ES3Type_Quaternion_t6484CEB19562B8AF1894E20B82C9AFBCA6E78C16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Quaternion_t6484CEB19562B8AF1894E20B82C9AFBCA6E78C16_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_131);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_133;
				L_133 = GenericVirtualFuncInvoker1< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mC385FA4038A6C09E3FA70EBDEA178513D3FC53A9_RuntimeMethod_var, L_131, L_132);
				NullCheck(L_130);
				Rigidbody_set_inertiaTensorRotation_m732666F7ACD440F5472A04AAEF1545D12C63450C(L_130, L_133, NULL);
				// break;
				goto IL_053e_1;
			}

IL_047a_1:
			{
				// var inertiaTensor = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_134 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_135 = ((ES3Type_Vector3_tBEBB6BA6FF3FA98D90871CDA974F8FD5A4CA364C_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_tBEBB6BA6FF3FA98D90871CDA974F8FD5A4CA364C_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_134);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_136;
				L_136 = GenericVirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m2FB5D193538173A928BC95202B90C4900D1F0F8D_RuntimeMethod_var, L_134, L_135);
				V_3 = L_136;
				// if(inertiaTensor != Vector3.zero)
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_137 = V_3;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_138;
				L_138 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
				bool L_139;
				L_139 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_137, L_138, NULL);
				if (!L_139)
				{
					goto IL_053e_1;
				}
			}
			{
				// instance.inertiaTensor = inertiaTensor;
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_140 = V_0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_141 = V_3;
				NullCheck(L_140);
				Rigidbody_set_inertiaTensor_m68E7B9842A8125237E1DEE5251840DF2D4DBB8C9(L_140, L_141, NULL);
				// break;
				goto IL_053e_1;
			}

IL_04a2_1:
			{
				// instance.detectCollisions = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_142 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_143 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_144 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_143);
				bool L_145;
				L_145 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_143, L_144);
				NullCheck(L_142);
				Rigidbody_set_detectCollisions_m42A50DFACA7709DA1F87BCB9DC0BDA00720C80CF(L_142, L_145, NULL);
				// break;
				goto IL_053e_1;
			}

IL_04b8_1:
			{
				// instance.position = reader.Read<UnityEngine.Vector3>(ES3Type_Vector3.Instance);
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_146 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_147 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_148 = ((ES3Type_Vector3_tBEBB6BA6FF3FA98D90871CDA974F8FD5A4CA364C_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_tBEBB6BA6FF3FA98D90871CDA974F8FD5A4CA364C_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_147);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_149;
				L_149 = GenericVirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m2FB5D193538173A928BC95202B90C4900D1F0F8D_RuntimeMethod_var, L_147, L_148);
				NullCheck(L_146);
				Rigidbody_set_position_mA15BE12B8D82220E8CA90A0F0CBFB206FE81B41C(L_146, L_149, NULL);
				// break;
				goto IL_053e_1;
			}

IL_04cb_1:
			{
				// instance.rotation = reader.Read<UnityEngine.Quaternion>(ES3Type_Quaternion.Instance);
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_150 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_151 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_152 = ((ES3Type_Quaternion_t6484CEB19562B8AF1894E20B82C9AFBCA6E78C16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Quaternion_t6484CEB19562B8AF1894E20B82C9AFBCA6E78C16_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_151);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_153;
				L_153 = GenericVirtualFuncInvoker1< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mC385FA4038A6C09E3FA70EBDEA178513D3FC53A9_RuntimeMethod_var, L_151, L_152);
				NullCheck(L_150);
				Rigidbody_set_rotation_mF2FC85A4A26AD9FED7DE0061889DF5A408461A5D(L_150, L_153, NULL);
				// break;
				goto IL_053e_1;
			}

IL_04de_1:
			{
				// instance.interpolation = reader.Read<UnityEngine.RigidbodyInterpolation>();
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_154 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_155 = ___reader0;
				NullCheck(L_155);
				int32_t L_156;
				L_156 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisRigidbodyInterpolation_tE2BE80352B0D72DB26B81EFD5A0845DEFEE994F8_m073565923144B5F57D1817E8A00F40AF2383F7D6_RuntimeMethod_var, L_155);
				NullCheck(L_154);
				Rigidbody_set_interpolation_mC7D39114A7AC6ED0AB2B40FECA4E2ED3C1D7603C(L_154, L_156, NULL);
				// break;
				goto IL_053e_1;
			}

IL_04ec_1:
			{
				// instance.solverIterations = reader.Read<System.Int32>(ES3Type_int.Instance);
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_157 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_158 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_159 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_158);
				int32_t L_160;
				L_160 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_158, L_159);
				NullCheck(L_157);
				Rigidbody_set_solverIterations_m533625CFDF6CB3E9412AD2ACD3FA13A6636A401C(L_157, L_160, NULL);
				// break;
				goto IL_053e_1;
			}

IL_04ff_1:
			{
				// instance.sleepThreshold = reader.Read<System.Single>(ES3Type_float.Instance);
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_161 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_162 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_163 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_162);
				float L_164;
				L_164 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_162, L_163);
				NullCheck(L_161);
				Rigidbody_set_sleepThreshold_m5180E11C2D6A401352863FB66812C683C663B220(L_161, L_164, NULL);
				// break;
				goto IL_053e_1;
			}

IL_0512_1:
			{
				// instance.maxAngularVelocity = reader.Read<System.Single>(ES3Type_float.Instance);
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_165 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_166 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_167 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_166);
				float L_168;
				L_168 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_166, L_167);
				NullCheck(L_165);
				Rigidbody_set_maxAngularVelocity_m26E48B1DC6B9F8DBB81EE0681ABEB3AB255FC3F6(L_165, L_168, NULL);
				// break;
				goto IL_053e_1;
			}

IL_0525_1:
			{
				// instance.solverVelocityIterations = reader.Read<System.Int32>(ES3Type_int.Instance);
				Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_169 = V_0;
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_170 = ___reader0;
				ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_171 = ((ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t29EB02D0557DF7351015511AD97C3A1D728882EB_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_170);
				int32_t L_172;
				L_172 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3249E286E04ACCB4DF3D310D233443BE95493008_RuntimeMethod_var, L_170, L_171);
				NullCheck(L_169);
				Rigidbody_set_solverVelocityIterations_m53C09CB42CA4DA944D52E012BAF8112719AD753B(L_169, L_172, NULL);
				// break;
				goto IL_053e_1;
			}

IL_0538_1:
			{
				// reader.Skip();
				ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_173 = ___reader0;
				NullCheck(L_173);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_173);
			}

IL_053e_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_174 = V_1;
				NullCheck(L_174);
				bool L_175;
				L_175 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_174);
				if (L_175)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_055f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_055f:
	{
		// }
		return;
	}
}
// System.Object ES3Types.ES3Type_RotationBySpeedModule::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationBySpeedModule_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m46A4E7B7B06BFD3533200CA29E686BDD6F68CD27_gshared (ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.RotationBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_1 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_4 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_RotationBySpeedModule::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationBySpeedModule_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m82EFAC7995D58D04E9D5407C988876DA67DA435E_gshared (ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.RotationBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_1 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_4 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_RotationBySpeedModule::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationBySpeedModule_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB0D55CF43CC1CF3AA77B0B81DEBEC30EFA12CE17_gshared (ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.RotationBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_1 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_4 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_RotationBySpeedModule::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationBySpeedModule_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m2BCEB99AEDBD656E2561448E3843D18A6DDAA491_gshared (ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.RotationBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_1 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_4 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_RotationBySpeedModule::Read<System.Int16>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationBySpeedModule_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m1425B79BB8E8276FB0118E09AF67C1949E3A0767_gshared (ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.RotationBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_1 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_4 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_RotationBySpeedModule::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationBySpeedModule_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9F8A7417E2D69C0A6BE6F63F634DE3DFB912BDA4_gshared (ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.RotationBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_1 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_4 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_RotationBySpeedModule::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationBySpeedModule_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mB8FD8E7F8E753D75A7261139B37715374DA7DDF2_gshared (ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.RotationBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_1 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_4 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_RotationBySpeedModule::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationBySpeedModule_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mB900CA5E952EAC4F2EA8E8EFF43821D328C7B1A1_gshared (ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.RotationBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_1 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_4 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_RotationBySpeedModule::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationBySpeedModule_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m623CEE9A5C8AAF65746E494503753517C9804500_gshared (ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.RotationBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_1 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_4 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_RotationBySpeedModule::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationBySpeedModule_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m4599EC57F6E066F5EFCE9C3F117B8271F5DECABA_gshared (ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.RotationBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_1 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_4 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_RotationBySpeedModule::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationBySpeedModule_Read_TisRuntimeObject_m8FF01E4D5E699CC4B40BEB2E7D44BC57028907F9_gshared (ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.RotationBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_1 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_4 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_RotationBySpeedModule::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationBySpeedModule_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mC54A54DF99C4422AC2BA33068048D32A2B60CB53_gshared (ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.RotationBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_1 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_4 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_RotationBySpeedModule::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationBySpeedModule_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m040785565721D194EC0922A86534C94CB969279B_gshared (ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.RotationBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_1 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_4 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_RotationBySpeedModule::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationBySpeedModule_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_mBD545C7B98519C0600561E58A378B0A6089C3D14_gshared (ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.RotationBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_1 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_4 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_RotationBySpeedModule::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationBySpeedModule_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF1E948EEA1C96D21CF904EAC16972097FC090D65_gshared (ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.RotationBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_1 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_4 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_RotationBySpeedModule::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationBySpeedModule_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m0CB39C3F9940A8E5EE9AC92C1F29F2BC9367AA46_gshared (ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.RotationBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_1 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_4 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_RotationBySpeedModule::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationBySpeedModule_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE6E4D26C582C489927B642107922D80801AF250D_gshared (ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.RotationBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_1 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_4 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_RotationBySpeedModule::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationBySpeedModule_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m42FA5AF24695ADD5C2BAB43BB1E4F8DED7C3F2B3_gshared (ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.RotationBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_1 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_4 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_RotationBySpeedModule::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationBySpeedModule_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mADDF446131B7826855B33F556B9DCBFEFC105594_gshared (ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.RotationBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_1 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_4 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_RotationBySpeedModule::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationBySpeedModule_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mAA71AB4FF6151FC5BBCD43E43B7F26E5B64AF556_gshared (ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.RotationBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_1 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_4 = V_0;
		RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisRuntimeObject_m46F2B3F78273204A95DFDEE8A8973707FA7482FC_gshared (ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_0210;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_020a;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_020a;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0076;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_013b;
		}
	}
	{
		goto IL_020a;
	}

IL_0076:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00a8;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_020a;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_16)
		{
			goto IL_0150;
		}
	}
	{
		goto IL_020a;
	}

IL_00a8:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_18)
		{
			goto IL_0167;
		}
	}
	{
		goto IL_020a;
	}

IL_00bd:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_20)
		{
			goto IL_017e;
		}
	}
	{
		goto IL_020a;
	}

IL_00d2:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_22)
		{
			goto IL_0192;
		}
	}
	{
		goto IL_020a;
	}

IL_00e7:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_24)
		{
			goto IL_01a6;
		}
	}
	{
		goto IL_020a;
	}

IL_00fc:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_26)
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_020a;
	}

IL_0111:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_28)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_020a;
	}

IL_0126:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_30)
		{
			goto IL_01e2;
		}
	}
	{
		goto IL_020a;
	}

IL_013b:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_32)
		{
			goto IL_01f6;
		}
	}
	{
		goto IL_020a;
	}

IL_0150:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_33);
		bool L_35;
		L_35 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_33, L_34);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_35, NULL);
		// break;
		goto IL_0210;
	}

IL_0167:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_38;
		L_38 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_36, L_37);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_38, NULL);
		// break;
		goto IL_0210;
	}

IL_017e:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		float L_41;
		L_41 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_39, L_40);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_41, NULL);
		// break;
		goto IL_0210;
	}

IL_0192:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_42, L_43);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_44, NULL);
		// break;
		goto IL_0210;
	}

IL_01a6:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_47, NULL);
		// break;
		goto IL_0210;
	}

IL_01ba:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_48, L_49);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_50, NULL);
		// break;
		goto IL_0210;
	}

IL_01ce:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_51, L_52);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_53, NULL);
		// break;
		goto IL_0210;
	}

IL_01e2:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_56, NULL);
		// break;
		goto IL_0210;
	}

IL_01f6:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59;
		L_59 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var, L_57, L_58);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_59, NULL);
		// break;
		goto IL_0210;
	}

IL_020a:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		NullCheck(L_60);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_60);
	}

IL_0210:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_61 = ___reader0;
		NullCheck(L_61);
		String_t* L_62;
		L_62 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_61);
		String_t* L_63 = L_62;
		V_1 = L_63;
		if (L_63)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<UnityEngine.ParticleSystem/CollisionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_m802962C9C93D057200694C7CC4A2BDDF66DD493F_gshared (ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_0210;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_020a;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_020a;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0076;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_013b;
		}
	}
	{
		goto IL_020a;
	}

IL_0076:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00a8;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_020a;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_16)
		{
			goto IL_0150;
		}
	}
	{
		goto IL_020a;
	}

IL_00a8:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_18)
		{
			goto IL_0167;
		}
	}
	{
		goto IL_020a;
	}

IL_00bd:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_20)
		{
			goto IL_017e;
		}
	}
	{
		goto IL_020a;
	}

IL_00d2:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_22)
		{
			goto IL_0192;
		}
	}
	{
		goto IL_020a;
	}

IL_00e7:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_24)
		{
			goto IL_01a6;
		}
	}
	{
		goto IL_020a;
	}

IL_00fc:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_26)
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_020a;
	}

IL_0111:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_28)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_020a;
	}

IL_0126:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_30)
		{
			goto IL_01e2;
		}
	}
	{
		goto IL_020a;
	}

IL_013b:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_32)
		{
			goto IL_01f6;
		}
	}
	{
		goto IL_020a;
	}

IL_0150:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_33);
		bool L_35;
		L_35 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_33, L_34);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_35, NULL);
		// break;
		goto IL_0210;
	}

IL_0167:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_38;
		L_38 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_36, L_37);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_38, NULL);
		// break;
		goto IL_0210;
	}

IL_017e:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		float L_41;
		L_41 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_39, L_40);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_41, NULL);
		// break;
		goto IL_0210;
	}

IL_0192:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_42, L_43);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_44, NULL);
		// break;
		goto IL_0210;
	}

IL_01a6:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_47, NULL);
		// break;
		goto IL_0210;
	}

IL_01ba:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_48, L_49);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_50, NULL);
		// break;
		goto IL_0210;
	}

IL_01ce:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_51, L_52);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_53, NULL);
		// break;
		goto IL_0210;
	}

IL_01e2:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_56, NULL);
		// break;
		goto IL_0210;
	}

IL_01f6:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59;
		L_59 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var, L_57, L_58);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_59, NULL);
		// break;
		goto IL_0210;
	}

IL_020a:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		NullCheck(L_60);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_60);
	}

IL_0210:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_61 = ___reader0;
		NullCheck(L_61);
		String_t* L_62;
		L_62 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_61);
		String_t* L_63 = L_62;
		V_1 = L_63;
		if (L_63)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<UnityEngine.ParticleSystem/ColorBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_m1BF81E4D71A51F455BFF57FCE7AA77C2EA8D8E67_gshared (ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_0210;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_020a;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_020a;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0076;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_013b;
		}
	}
	{
		goto IL_020a;
	}

IL_0076:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00a8;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_020a;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_16)
		{
			goto IL_0150;
		}
	}
	{
		goto IL_020a;
	}

IL_00a8:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_18)
		{
			goto IL_0167;
		}
	}
	{
		goto IL_020a;
	}

IL_00bd:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_20)
		{
			goto IL_017e;
		}
	}
	{
		goto IL_020a;
	}

IL_00d2:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_22)
		{
			goto IL_0192;
		}
	}
	{
		goto IL_020a;
	}

IL_00e7:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_24)
		{
			goto IL_01a6;
		}
	}
	{
		goto IL_020a;
	}

IL_00fc:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_26)
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_020a;
	}

IL_0111:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_28)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_020a;
	}

IL_0126:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_30)
		{
			goto IL_01e2;
		}
	}
	{
		goto IL_020a;
	}

IL_013b:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_32)
		{
			goto IL_01f6;
		}
	}
	{
		goto IL_020a;
	}

IL_0150:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_33);
		bool L_35;
		L_35 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_33, L_34);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_35, NULL);
		// break;
		goto IL_0210;
	}

IL_0167:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_38;
		L_38 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_36, L_37);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_38, NULL);
		// break;
		goto IL_0210;
	}

IL_017e:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		float L_41;
		L_41 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_39, L_40);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_41, NULL);
		// break;
		goto IL_0210;
	}

IL_0192:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_42, L_43);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_44, NULL);
		// break;
		goto IL_0210;
	}

IL_01a6:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_47, NULL);
		// break;
		goto IL_0210;
	}

IL_01ba:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_48, L_49);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_50, NULL);
		// break;
		goto IL_0210;
	}

IL_01ce:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_51, L_52);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_53, NULL);
		// break;
		goto IL_0210;
	}

IL_01e2:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_56, NULL);
		// break;
		goto IL_0210;
	}

IL_01f6:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59;
		L_59 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var, L_57, L_58);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_59, NULL);
		// break;
		goto IL_0210;
	}

IL_020a:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		NullCheck(L_60);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_60);
	}

IL_0210:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_61 = ___reader0;
		NullCheck(L_61);
		String_t* L_62;
		L_62 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_61);
		String_t* L_63 = L_62;
		V_1 = L_63;
		if (L_63)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<UnityEngine.ParticleSystem/ColorOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_m26EFB338C70F489536B33831AA0DB4A71304C13C_gshared (ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_0210;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_020a;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_020a;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0076;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_013b;
		}
	}
	{
		goto IL_020a;
	}

IL_0076:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00a8;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_020a;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_16)
		{
			goto IL_0150;
		}
	}
	{
		goto IL_020a;
	}

IL_00a8:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_18)
		{
			goto IL_0167;
		}
	}
	{
		goto IL_020a;
	}

IL_00bd:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_20)
		{
			goto IL_017e;
		}
	}
	{
		goto IL_020a;
	}

IL_00d2:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_22)
		{
			goto IL_0192;
		}
	}
	{
		goto IL_020a;
	}

IL_00e7:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_24)
		{
			goto IL_01a6;
		}
	}
	{
		goto IL_020a;
	}

IL_00fc:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_26)
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_020a;
	}

IL_0111:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_28)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_020a;
	}

IL_0126:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_30)
		{
			goto IL_01e2;
		}
	}
	{
		goto IL_020a;
	}

IL_013b:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_32)
		{
			goto IL_01f6;
		}
	}
	{
		goto IL_020a;
	}

IL_0150:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_33);
		bool L_35;
		L_35 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_33, L_34);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_35, NULL);
		// break;
		goto IL_0210;
	}

IL_0167:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_38;
		L_38 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_36, L_37);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_38, NULL);
		// break;
		goto IL_0210;
	}

IL_017e:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		float L_41;
		L_41 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_39, L_40);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_41, NULL);
		// break;
		goto IL_0210;
	}

IL_0192:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_42, L_43);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_44, NULL);
		// break;
		goto IL_0210;
	}

IL_01a6:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_47, NULL);
		// break;
		goto IL_0210;
	}

IL_01ba:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_48, L_49);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_50, NULL);
		// break;
		goto IL_0210;
	}

IL_01ce:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_51, L_52);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_53, NULL);
		// break;
		goto IL_0210;
	}

IL_01e2:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_56, NULL);
		// break;
		goto IL_0210;
	}

IL_01f6:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59;
		L_59 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var, L_57, L_58);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_59, NULL);
		// break;
		goto IL_0210;
	}

IL_020a:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		NullCheck(L_60);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_60);
	}

IL_0210:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_61 = ___reader0;
		NullCheck(L_61);
		String_t* L_62;
		L_62 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_61);
		String_t* L_63 = L_62;
		V_1 = L_63;
		if (L_63)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<UnityEngine.ParticleSystem/EmissionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_m3868629A43E3DC195240F68F58E1CC86DCF72031_gshared (ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_0210;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_020a;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_020a;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0076;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_013b;
		}
	}
	{
		goto IL_020a;
	}

IL_0076:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00a8;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_020a;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_16)
		{
			goto IL_0150;
		}
	}
	{
		goto IL_020a;
	}

IL_00a8:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_18)
		{
			goto IL_0167;
		}
	}
	{
		goto IL_020a;
	}

IL_00bd:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_20)
		{
			goto IL_017e;
		}
	}
	{
		goto IL_020a;
	}

IL_00d2:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_22)
		{
			goto IL_0192;
		}
	}
	{
		goto IL_020a;
	}

IL_00e7:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_24)
		{
			goto IL_01a6;
		}
	}
	{
		goto IL_020a;
	}

IL_00fc:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_26)
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_020a;
	}

IL_0111:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_28)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_020a;
	}

IL_0126:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_30)
		{
			goto IL_01e2;
		}
	}
	{
		goto IL_020a;
	}

IL_013b:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_32)
		{
			goto IL_01f6;
		}
	}
	{
		goto IL_020a;
	}

IL_0150:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_33);
		bool L_35;
		L_35 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_33, L_34);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_35, NULL);
		// break;
		goto IL_0210;
	}

IL_0167:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_38;
		L_38 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_36, L_37);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_38, NULL);
		// break;
		goto IL_0210;
	}

IL_017e:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		float L_41;
		L_41 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_39, L_40);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_41, NULL);
		// break;
		goto IL_0210;
	}

IL_0192:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_42, L_43);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_44, NULL);
		// break;
		goto IL_0210;
	}

IL_01a6:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_47, NULL);
		// break;
		goto IL_0210;
	}

IL_01ba:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_48, L_49);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_50, NULL);
		// break;
		goto IL_0210;
	}

IL_01ce:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_51, L_52);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_53, NULL);
		// break;
		goto IL_0210;
	}

IL_01e2:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_56, NULL);
		// break;
		goto IL_0210;
	}

IL_01f6:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59;
		L_59 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var, L_57, L_58);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_59, NULL);
		// break;
		goto IL_0210;
	}

IL_020a:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		NullCheck(L_60);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_60);
	}

IL_0210:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_61 = ___reader0;
		NullCheck(L_61);
		String_t* L_62;
		L_62 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_61);
		String_t* L_63 = L_62;
		V_1 = L_63;
		if (L_63)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<UnityEngine.ParticleSystem/ExternalForcesModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_mBB0993AFF51EC25AC0A3CB80E0F5E97AD5BAAA06_gshared (ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_0210;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_020a;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_020a;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0076;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_013b;
		}
	}
	{
		goto IL_020a;
	}

IL_0076:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00a8;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_020a;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_16)
		{
			goto IL_0150;
		}
	}
	{
		goto IL_020a;
	}

IL_00a8:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_18)
		{
			goto IL_0167;
		}
	}
	{
		goto IL_020a;
	}

IL_00bd:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_20)
		{
			goto IL_017e;
		}
	}
	{
		goto IL_020a;
	}

IL_00d2:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_22)
		{
			goto IL_0192;
		}
	}
	{
		goto IL_020a;
	}

IL_00e7:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_24)
		{
			goto IL_01a6;
		}
	}
	{
		goto IL_020a;
	}

IL_00fc:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_26)
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_020a;
	}

IL_0111:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_28)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_020a;
	}

IL_0126:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_30)
		{
			goto IL_01e2;
		}
	}
	{
		goto IL_020a;
	}

IL_013b:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_32)
		{
			goto IL_01f6;
		}
	}
	{
		goto IL_020a;
	}

IL_0150:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_33);
		bool L_35;
		L_35 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_33, L_34);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_35, NULL);
		// break;
		goto IL_0210;
	}

IL_0167:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_38;
		L_38 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_36, L_37);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_38, NULL);
		// break;
		goto IL_0210;
	}

IL_017e:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		float L_41;
		L_41 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_39, L_40);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_41, NULL);
		// break;
		goto IL_0210;
	}

IL_0192:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_42, L_43);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_44, NULL);
		// break;
		goto IL_0210;
	}

IL_01a6:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_47, NULL);
		// break;
		goto IL_0210;
	}

IL_01ba:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_48, L_49);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_50, NULL);
		// break;
		goto IL_0210;
	}

IL_01ce:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_51, L_52);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_53, NULL);
		// break;
		goto IL_0210;
	}

IL_01e2:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_56, NULL);
		// break;
		goto IL_0210;
	}

IL_01f6:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59;
		L_59 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var, L_57, L_58);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_59, NULL);
		// break;
		goto IL_0210;
	}

IL_020a:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		NullCheck(L_60);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_60);
	}

IL_0210:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_61 = ___reader0;
		NullCheck(L_61);
		String_t* L_62;
		L_62 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_61);
		String_t* L_63 = L_62;
		V_1 = L_63;
		if (L_63)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<UnityEngine.ParticleSystem/ForceOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_m68DC29A2ABE0033BD2AED3CFFBBFB50ECD625770_gshared (ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_0210;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_020a;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_020a;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0076;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_013b;
		}
	}
	{
		goto IL_020a;
	}

IL_0076:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00a8;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_020a;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_16)
		{
			goto IL_0150;
		}
	}
	{
		goto IL_020a;
	}

IL_00a8:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_18)
		{
			goto IL_0167;
		}
	}
	{
		goto IL_020a;
	}

IL_00bd:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_20)
		{
			goto IL_017e;
		}
	}
	{
		goto IL_020a;
	}

IL_00d2:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_22)
		{
			goto IL_0192;
		}
	}
	{
		goto IL_020a;
	}

IL_00e7:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_24)
		{
			goto IL_01a6;
		}
	}
	{
		goto IL_020a;
	}

IL_00fc:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_26)
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_020a;
	}

IL_0111:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_28)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_020a;
	}

IL_0126:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_30)
		{
			goto IL_01e2;
		}
	}
	{
		goto IL_020a;
	}

IL_013b:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_32)
		{
			goto IL_01f6;
		}
	}
	{
		goto IL_020a;
	}

IL_0150:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_33);
		bool L_35;
		L_35 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_33, L_34);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_35, NULL);
		// break;
		goto IL_0210;
	}

IL_0167:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_38;
		L_38 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_36, L_37);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_38, NULL);
		// break;
		goto IL_0210;
	}

IL_017e:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		float L_41;
		L_41 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_39, L_40);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_41, NULL);
		// break;
		goto IL_0210;
	}

IL_0192:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_42, L_43);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_44, NULL);
		// break;
		goto IL_0210;
	}

IL_01a6:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_47, NULL);
		// break;
		goto IL_0210;
	}

IL_01ba:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_48, L_49);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_50, NULL);
		// break;
		goto IL_0210;
	}

IL_01ce:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_51, L_52);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_53, NULL);
		// break;
		goto IL_0210;
	}

IL_01e2:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_56, NULL);
		// break;
		goto IL_0210;
	}

IL_01f6:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59;
		L_59 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var, L_57, L_58);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_59, NULL);
		// break;
		goto IL_0210;
	}

IL_020a:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		NullCheck(L_60);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_60);
	}

IL_0210:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_61 = ___reader0;
		NullCheck(L_61);
		String_t* L_62;
		L_62 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_61);
		String_t* L_63 = L_62;
		V_1 = L_63;
		if (L_63)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<UnityEngine.ParticleSystem/InheritVelocityModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_m49C733D145D500AA843B2BC91B3DCD03A136EC35_gshared (ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_0210;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_020a;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_020a;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0076;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_013b;
		}
	}
	{
		goto IL_020a;
	}

IL_0076:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00a8;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_020a;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_16)
		{
			goto IL_0150;
		}
	}
	{
		goto IL_020a;
	}

IL_00a8:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_18)
		{
			goto IL_0167;
		}
	}
	{
		goto IL_020a;
	}

IL_00bd:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_20)
		{
			goto IL_017e;
		}
	}
	{
		goto IL_020a;
	}

IL_00d2:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_22)
		{
			goto IL_0192;
		}
	}
	{
		goto IL_020a;
	}

IL_00e7:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_24)
		{
			goto IL_01a6;
		}
	}
	{
		goto IL_020a;
	}

IL_00fc:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_26)
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_020a;
	}

IL_0111:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_28)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_020a;
	}

IL_0126:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_30)
		{
			goto IL_01e2;
		}
	}
	{
		goto IL_020a;
	}

IL_013b:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_32)
		{
			goto IL_01f6;
		}
	}
	{
		goto IL_020a;
	}

IL_0150:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_33);
		bool L_35;
		L_35 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_33, L_34);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_35, NULL);
		// break;
		goto IL_0210;
	}

IL_0167:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_38;
		L_38 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_36, L_37);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_38, NULL);
		// break;
		goto IL_0210;
	}

IL_017e:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		float L_41;
		L_41 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_39, L_40);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_41, NULL);
		// break;
		goto IL_0210;
	}

IL_0192:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_42, L_43);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_44, NULL);
		// break;
		goto IL_0210;
	}

IL_01a6:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_47, NULL);
		// break;
		goto IL_0210;
	}

IL_01ba:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_48, L_49);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_50, NULL);
		// break;
		goto IL_0210;
	}

IL_01ce:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_51, L_52);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_53, NULL);
		// break;
		goto IL_0210;
	}

IL_01e2:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_56, NULL);
		// break;
		goto IL_0210;
	}

IL_01f6:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59;
		L_59 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var, L_57, L_58);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_59, NULL);
		// break;
		goto IL_0210;
	}

IL_020a:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		NullCheck(L_60);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_60);
	}

IL_0210:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_61 = ___reader0;
		NullCheck(L_61);
		String_t* L_62;
		L_62 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_61);
		String_t* L_63 = L_62;
		V_1 = L_63;
		if (L_63)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<UnityEngine.ParticleSystem/LightsModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_m7D967C675656DED26088BC7B62068201FCBACB77_gshared (ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_0210;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_020a;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_020a;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0076;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_013b;
		}
	}
	{
		goto IL_020a;
	}

IL_0076:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00a8;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_020a;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_16)
		{
			goto IL_0150;
		}
	}
	{
		goto IL_020a;
	}

IL_00a8:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_18)
		{
			goto IL_0167;
		}
	}
	{
		goto IL_020a;
	}

IL_00bd:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_20)
		{
			goto IL_017e;
		}
	}
	{
		goto IL_020a;
	}

IL_00d2:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_22)
		{
			goto IL_0192;
		}
	}
	{
		goto IL_020a;
	}

IL_00e7:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_24)
		{
			goto IL_01a6;
		}
	}
	{
		goto IL_020a;
	}

IL_00fc:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_26)
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_020a;
	}

IL_0111:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_28)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_020a;
	}

IL_0126:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_30)
		{
			goto IL_01e2;
		}
	}
	{
		goto IL_020a;
	}

IL_013b:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_32)
		{
			goto IL_01f6;
		}
	}
	{
		goto IL_020a;
	}

IL_0150:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_33);
		bool L_35;
		L_35 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_33, L_34);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_35, NULL);
		// break;
		goto IL_0210;
	}

IL_0167:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_38;
		L_38 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_36, L_37);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_38, NULL);
		// break;
		goto IL_0210;
	}

IL_017e:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		float L_41;
		L_41 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_39, L_40);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_41, NULL);
		// break;
		goto IL_0210;
	}

IL_0192:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_42, L_43);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_44, NULL);
		// break;
		goto IL_0210;
	}

IL_01a6:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_47, NULL);
		// break;
		goto IL_0210;
	}

IL_01ba:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_48, L_49);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_50, NULL);
		// break;
		goto IL_0210;
	}

IL_01ce:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_51, L_52);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_53, NULL);
		// break;
		goto IL_0210;
	}

IL_01e2:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_56, NULL);
		// break;
		goto IL_0210;
	}

IL_01f6:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59;
		L_59 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var, L_57, L_58);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_59, NULL);
		// break;
		goto IL_0210;
	}

IL_020a:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		NullCheck(L_60);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_60);
	}

IL_0210:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_61 = ___reader0;
		NullCheck(L_61);
		String_t* L_62;
		L_62 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_61);
		String_t* L_63 = L_62;
		V_1 = L_63;
		if (L_63)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisLimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_m50BEB1768D67B9C59D643540BAE8AE84F891956C_gshared (ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_0210;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_020a;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_020a;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0076;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_013b;
		}
	}
	{
		goto IL_020a;
	}

IL_0076:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00a8;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_020a;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_16)
		{
			goto IL_0150;
		}
	}
	{
		goto IL_020a;
	}

IL_00a8:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_18)
		{
			goto IL_0167;
		}
	}
	{
		goto IL_020a;
	}

IL_00bd:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_20)
		{
			goto IL_017e;
		}
	}
	{
		goto IL_020a;
	}

IL_00d2:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_22)
		{
			goto IL_0192;
		}
	}
	{
		goto IL_020a;
	}

IL_00e7:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_24)
		{
			goto IL_01a6;
		}
	}
	{
		goto IL_020a;
	}

IL_00fc:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_26)
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_020a;
	}

IL_0111:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_28)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_020a;
	}

IL_0126:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_30)
		{
			goto IL_01e2;
		}
	}
	{
		goto IL_020a;
	}

IL_013b:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_32)
		{
			goto IL_01f6;
		}
	}
	{
		goto IL_020a;
	}

IL_0150:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_33);
		bool L_35;
		L_35 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_33, L_34);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_35, NULL);
		// break;
		goto IL_0210;
	}

IL_0167:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_38;
		L_38 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_36, L_37);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_38, NULL);
		// break;
		goto IL_0210;
	}

IL_017e:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		float L_41;
		L_41 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_39, L_40);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_41, NULL);
		// break;
		goto IL_0210;
	}

IL_0192:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_42, L_43);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_44, NULL);
		// break;
		goto IL_0210;
	}

IL_01a6:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_47, NULL);
		// break;
		goto IL_0210;
	}

IL_01ba:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_48, L_49);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_50, NULL);
		// break;
		goto IL_0210;
	}

IL_01ce:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_51, L_52);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_53, NULL);
		// break;
		goto IL_0210;
	}

IL_01e2:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_56, NULL);
		// break;
		goto IL_0210;
	}

IL_01f6:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59;
		L_59 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var, L_57, L_58);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_59, NULL);
		// break;
		goto IL_0210;
	}

IL_020a:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		NullCheck(L_60);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_60);
	}

IL_0210:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_61 = ___reader0;
		NullCheck(L_61);
		String_t* L_62;
		L_62 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_61);
		String_t* L_63 = L_62;
		V_1 = L_63;
		if (L_63)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<UnityEngine.ParticleSystem/MainModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisMainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_mCED1AB3EB75BA9643318645A4BF95411A8DAD7E6_gshared (ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_0210;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_020a;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_020a;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0076;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_013b;
		}
	}
	{
		goto IL_020a;
	}

IL_0076:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00a8;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_020a;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_16)
		{
			goto IL_0150;
		}
	}
	{
		goto IL_020a;
	}

IL_00a8:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_18)
		{
			goto IL_0167;
		}
	}
	{
		goto IL_020a;
	}

IL_00bd:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_20)
		{
			goto IL_017e;
		}
	}
	{
		goto IL_020a;
	}

IL_00d2:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_22)
		{
			goto IL_0192;
		}
	}
	{
		goto IL_020a;
	}

IL_00e7:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_24)
		{
			goto IL_01a6;
		}
	}
	{
		goto IL_020a;
	}

IL_00fc:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_26)
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_020a;
	}

IL_0111:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_28)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_020a;
	}

IL_0126:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_30)
		{
			goto IL_01e2;
		}
	}
	{
		goto IL_020a;
	}

IL_013b:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_32)
		{
			goto IL_01f6;
		}
	}
	{
		goto IL_020a;
	}

IL_0150:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_33);
		bool L_35;
		L_35 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_33, L_34);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_35, NULL);
		// break;
		goto IL_0210;
	}

IL_0167:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_38;
		L_38 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_36, L_37);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_38, NULL);
		// break;
		goto IL_0210;
	}

IL_017e:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		float L_41;
		L_41 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_39, L_40);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_41, NULL);
		// break;
		goto IL_0210;
	}

IL_0192:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_42, L_43);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_44, NULL);
		// break;
		goto IL_0210;
	}

IL_01a6:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_47, NULL);
		// break;
		goto IL_0210;
	}

IL_01ba:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_48, L_49);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_50, NULL);
		// break;
		goto IL_0210;
	}

IL_01ce:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_51, L_52);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_53, NULL);
		// break;
		goto IL_0210;
	}

IL_01e2:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_56, NULL);
		// break;
		goto IL_0210;
	}

IL_01f6:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59;
		L_59 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var, L_57, L_58);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_59, NULL);
		// break;
		goto IL_0210;
	}

IL_020a:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		NullCheck(L_60);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_60);
	}

IL_0210:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_61 = ___reader0;
		NullCheck(L_61);
		String_t* L_62;
		L_62 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_61);
		String_t* L_63 = L_62;
		V_1 = L_63;
		if (L_63)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<UnityEngine.ParticleSystem/NoiseModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisNoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_m888619DD45515E524082C6D99DFDDE2EEB237D11_gshared (ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_0210;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_020a;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_020a;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0076;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_013b;
		}
	}
	{
		goto IL_020a;
	}

IL_0076:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00a8;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_020a;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_16)
		{
			goto IL_0150;
		}
	}
	{
		goto IL_020a;
	}

IL_00a8:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_18)
		{
			goto IL_0167;
		}
	}
	{
		goto IL_020a;
	}

IL_00bd:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_20)
		{
			goto IL_017e;
		}
	}
	{
		goto IL_020a;
	}

IL_00d2:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_22)
		{
			goto IL_0192;
		}
	}
	{
		goto IL_020a;
	}

IL_00e7:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_24)
		{
			goto IL_01a6;
		}
	}
	{
		goto IL_020a;
	}

IL_00fc:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_26)
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_020a;
	}

IL_0111:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_28)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_020a;
	}

IL_0126:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_30)
		{
			goto IL_01e2;
		}
	}
	{
		goto IL_020a;
	}

IL_013b:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_32)
		{
			goto IL_01f6;
		}
	}
	{
		goto IL_020a;
	}

IL_0150:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_33);
		bool L_35;
		L_35 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_33, L_34);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_35, NULL);
		// break;
		goto IL_0210;
	}

IL_0167:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_38;
		L_38 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_36, L_37);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_38, NULL);
		// break;
		goto IL_0210;
	}

IL_017e:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		float L_41;
		L_41 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_39, L_40);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_41, NULL);
		// break;
		goto IL_0210;
	}

IL_0192:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_42, L_43);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_44, NULL);
		// break;
		goto IL_0210;
	}

IL_01a6:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_47, NULL);
		// break;
		goto IL_0210;
	}

IL_01ba:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_48, L_49);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_50, NULL);
		// break;
		goto IL_0210;
	}

IL_01ce:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_51, L_52);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_53, NULL);
		// break;
		goto IL_0210;
	}

IL_01e2:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_56, NULL);
		// break;
		goto IL_0210;
	}

IL_01f6:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59;
		L_59 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var, L_57, L_58);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_59, NULL);
		// break;
		goto IL_0210;
	}

IL_020a:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		NullCheck(L_60);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_60);
	}

IL_0210:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_61 = ___reader0;
		NullCheck(L_61);
		String_t* L_62;
		L_62 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_61);
		String_t* L_63 = L_62;
		V_1 = L_63;
		if (L_63)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<UnityEngine.ParticleSystem/RotationBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisRotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_mDAFC26A06E5B5AC5D4635D235628A742198B1D19_gshared (ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_0210;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_020a;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_020a;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0076;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_013b;
		}
	}
	{
		goto IL_020a;
	}

IL_0076:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00a8;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_020a;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_16)
		{
			goto IL_0150;
		}
	}
	{
		goto IL_020a;
	}

IL_00a8:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_18)
		{
			goto IL_0167;
		}
	}
	{
		goto IL_020a;
	}

IL_00bd:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_20)
		{
			goto IL_017e;
		}
	}
	{
		goto IL_020a;
	}

IL_00d2:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_22)
		{
			goto IL_0192;
		}
	}
	{
		goto IL_020a;
	}

IL_00e7:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_24)
		{
			goto IL_01a6;
		}
	}
	{
		goto IL_020a;
	}

IL_00fc:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_26)
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_020a;
	}

IL_0111:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_28)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_020a;
	}

IL_0126:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_30)
		{
			goto IL_01e2;
		}
	}
	{
		goto IL_020a;
	}

IL_013b:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_32)
		{
			goto IL_01f6;
		}
	}
	{
		goto IL_020a;
	}

IL_0150:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_33);
		bool L_35;
		L_35 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_33, L_34);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_35, NULL);
		// break;
		goto IL_0210;
	}

IL_0167:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_38;
		L_38 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_36, L_37);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_38, NULL);
		// break;
		goto IL_0210;
	}

IL_017e:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		float L_41;
		L_41 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_39, L_40);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_41, NULL);
		// break;
		goto IL_0210;
	}

IL_0192:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_42, L_43);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_44, NULL);
		// break;
		goto IL_0210;
	}

IL_01a6:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_47, NULL);
		// break;
		goto IL_0210;
	}

IL_01ba:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_48, L_49);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_50, NULL);
		// break;
		goto IL_0210;
	}

IL_01ce:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_51, L_52);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_53, NULL);
		// break;
		goto IL_0210;
	}

IL_01e2:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_56, NULL);
		// break;
		goto IL_0210;
	}

IL_01f6:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59;
		L_59 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var, L_57, L_58);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_59, NULL);
		// break;
		goto IL_0210;
	}

IL_020a:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		NullCheck(L_60);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_60);
	}

IL_0210:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_61 = ___reader0;
		NullCheck(L_61);
		String_t* L_62;
		L_62 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_61);
		String_t* L_63 = L_62;
		V_1 = L_63;
		if (L_63)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<UnityEngine.ParticleSystem/RotationOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisRotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_mF04904FC1ABF0B3F386EEA1AA87BA4E345E35CFD_gshared (ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_0210;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_020a;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_020a;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0076;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_013b;
		}
	}
	{
		goto IL_020a;
	}

IL_0076:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00a8;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_020a;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_16)
		{
			goto IL_0150;
		}
	}
	{
		goto IL_020a;
	}

IL_00a8:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_18)
		{
			goto IL_0167;
		}
	}
	{
		goto IL_020a;
	}

IL_00bd:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_20)
		{
			goto IL_017e;
		}
	}
	{
		goto IL_020a;
	}

IL_00d2:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_22)
		{
			goto IL_0192;
		}
	}
	{
		goto IL_020a;
	}

IL_00e7:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_24)
		{
			goto IL_01a6;
		}
	}
	{
		goto IL_020a;
	}

IL_00fc:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_26)
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_020a;
	}

IL_0111:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_28)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_020a;
	}

IL_0126:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_30)
		{
			goto IL_01e2;
		}
	}
	{
		goto IL_020a;
	}

IL_013b:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_32)
		{
			goto IL_01f6;
		}
	}
	{
		goto IL_020a;
	}

IL_0150:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_33);
		bool L_35;
		L_35 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_33, L_34);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_35, NULL);
		// break;
		goto IL_0210;
	}

IL_0167:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_38;
		L_38 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_36, L_37);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_38, NULL);
		// break;
		goto IL_0210;
	}

IL_017e:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		float L_41;
		L_41 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_39, L_40);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_41, NULL);
		// break;
		goto IL_0210;
	}

IL_0192:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_42, L_43);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_44, NULL);
		// break;
		goto IL_0210;
	}

IL_01a6:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_47, NULL);
		// break;
		goto IL_0210;
	}

IL_01ba:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_48, L_49);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_50, NULL);
		// break;
		goto IL_0210;
	}

IL_01ce:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_51, L_52);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_53, NULL);
		// break;
		goto IL_0210;
	}

IL_01e2:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_56, NULL);
		// break;
		goto IL_0210;
	}

IL_01f6:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59;
		L_59 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var, L_57, L_58);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_59, NULL);
		// break;
		goto IL_0210;
	}

IL_020a:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		NullCheck(L_60);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_60);
	}

IL_0210:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_61 = ___reader0;
		NullCheck(L_61);
		String_t* L_62;
		L_62 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_61);
		String_t* L_63 = L_62;
		V_1 = L_63;
		if (L_63)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<UnityEngine.ParticleSystem/ShapeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_m112692826A4559F1958C04CB0316E76F7F58DA48_gshared (ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_0210;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_020a;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_020a;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0076;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_013b;
		}
	}
	{
		goto IL_020a;
	}

IL_0076:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00a8;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_020a;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_16)
		{
			goto IL_0150;
		}
	}
	{
		goto IL_020a;
	}

IL_00a8:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_18)
		{
			goto IL_0167;
		}
	}
	{
		goto IL_020a;
	}

IL_00bd:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_20)
		{
			goto IL_017e;
		}
	}
	{
		goto IL_020a;
	}

IL_00d2:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_22)
		{
			goto IL_0192;
		}
	}
	{
		goto IL_020a;
	}

IL_00e7:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_24)
		{
			goto IL_01a6;
		}
	}
	{
		goto IL_020a;
	}

IL_00fc:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_26)
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_020a;
	}

IL_0111:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_28)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_020a;
	}

IL_0126:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_30)
		{
			goto IL_01e2;
		}
	}
	{
		goto IL_020a;
	}

IL_013b:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_32)
		{
			goto IL_01f6;
		}
	}
	{
		goto IL_020a;
	}

IL_0150:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_33);
		bool L_35;
		L_35 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_33, L_34);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_35, NULL);
		// break;
		goto IL_0210;
	}

IL_0167:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_38;
		L_38 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_36, L_37);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_38, NULL);
		// break;
		goto IL_0210;
	}

IL_017e:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		float L_41;
		L_41 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_39, L_40);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_41, NULL);
		// break;
		goto IL_0210;
	}

IL_0192:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_42, L_43);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_44, NULL);
		// break;
		goto IL_0210;
	}

IL_01a6:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_47, NULL);
		// break;
		goto IL_0210;
	}

IL_01ba:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_48, L_49);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_50, NULL);
		// break;
		goto IL_0210;
	}

IL_01ce:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_51, L_52);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_53, NULL);
		// break;
		goto IL_0210;
	}

IL_01e2:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_56, NULL);
		// break;
		goto IL_0210;
	}

IL_01f6:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59;
		L_59 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var, L_57, L_58);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_59, NULL);
		// break;
		goto IL_0210;
	}

IL_020a:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		NullCheck(L_60);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_60);
	}

IL_0210:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_61 = ___reader0;
		NullCheck(L_61);
		String_t* L_62;
		L_62 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_61);
		String_t* L_63 = L_62;
		V_1 = L_63;
		if (L_63)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<UnityEngine.ParticleSystem/SizeBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisSizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_m43D44AF3A372760815D0637E641ED0BCF028654A_gshared (ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_0210;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_020a;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_020a;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0076;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_013b;
		}
	}
	{
		goto IL_020a;
	}

IL_0076:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00a8;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_020a;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_16)
		{
			goto IL_0150;
		}
	}
	{
		goto IL_020a;
	}

IL_00a8:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_18)
		{
			goto IL_0167;
		}
	}
	{
		goto IL_020a;
	}

IL_00bd:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_20)
		{
			goto IL_017e;
		}
	}
	{
		goto IL_020a;
	}

IL_00d2:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_22)
		{
			goto IL_0192;
		}
	}
	{
		goto IL_020a;
	}

IL_00e7:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_24)
		{
			goto IL_01a6;
		}
	}
	{
		goto IL_020a;
	}

IL_00fc:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_26)
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_020a;
	}

IL_0111:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_28)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_020a;
	}

IL_0126:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_30)
		{
			goto IL_01e2;
		}
	}
	{
		goto IL_020a;
	}

IL_013b:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_32)
		{
			goto IL_01f6;
		}
	}
	{
		goto IL_020a;
	}

IL_0150:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_33);
		bool L_35;
		L_35 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_33, L_34);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_35, NULL);
		// break;
		goto IL_0210;
	}

IL_0167:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_38;
		L_38 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_36, L_37);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_38, NULL);
		// break;
		goto IL_0210;
	}

IL_017e:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		float L_41;
		L_41 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_39, L_40);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_41, NULL);
		// break;
		goto IL_0210;
	}

IL_0192:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_42, L_43);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_44, NULL);
		// break;
		goto IL_0210;
	}

IL_01a6:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_47, NULL);
		// break;
		goto IL_0210;
	}

IL_01ba:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_48, L_49);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_50, NULL);
		// break;
		goto IL_0210;
	}

IL_01ce:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_51, L_52);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_53, NULL);
		// break;
		goto IL_0210;
	}

IL_01e2:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_56, NULL);
		// break;
		goto IL_0210;
	}

IL_01f6:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59;
		L_59 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var, L_57, L_58);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_59, NULL);
		// break;
		goto IL_0210;
	}

IL_020a:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		NullCheck(L_60);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_60);
	}

IL_0210:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_61 = ___reader0;
		NullCheck(L_61);
		String_t* L_62;
		L_62 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_61);
		String_t* L_63 = L_62;
		V_1 = L_63;
		if (L_63)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<UnityEngine.ParticleSystem/SizeOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisSizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_m070AE16D14F7C564487503E738883036A1C9B52D_gshared (ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_0210;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_020a;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_020a;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0076;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_013b;
		}
	}
	{
		goto IL_020a;
	}

IL_0076:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00a8;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_020a;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_16)
		{
			goto IL_0150;
		}
	}
	{
		goto IL_020a;
	}

IL_00a8:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_18)
		{
			goto IL_0167;
		}
	}
	{
		goto IL_020a;
	}

IL_00bd:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_20)
		{
			goto IL_017e;
		}
	}
	{
		goto IL_020a;
	}

IL_00d2:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_22)
		{
			goto IL_0192;
		}
	}
	{
		goto IL_020a;
	}

IL_00e7:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_24)
		{
			goto IL_01a6;
		}
	}
	{
		goto IL_020a;
	}

IL_00fc:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_26)
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_020a;
	}

IL_0111:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_28)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_020a;
	}

IL_0126:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_30)
		{
			goto IL_01e2;
		}
	}
	{
		goto IL_020a;
	}

IL_013b:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_32)
		{
			goto IL_01f6;
		}
	}
	{
		goto IL_020a;
	}

IL_0150:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_33);
		bool L_35;
		L_35 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_33, L_34);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_35, NULL);
		// break;
		goto IL_0210;
	}

IL_0167:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_38;
		L_38 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_36, L_37);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_38, NULL);
		// break;
		goto IL_0210;
	}

IL_017e:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		float L_41;
		L_41 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_39, L_40);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_41, NULL);
		// break;
		goto IL_0210;
	}

IL_0192:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_42, L_43);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_44, NULL);
		// break;
		goto IL_0210;
	}

IL_01a6:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_47, NULL);
		// break;
		goto IL_0210;
	}

IL_01ba:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_48, L_49);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_50, NULL);
		// break;
		goto IL_0210;
	}

IL_01ce:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_51, L_52);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_53, NULL);
		// break;
		goto IL_0210;
	}

IL_01e2:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_56, NULL);
		// break;
		goto IL_0210;
	}

IL_01f6:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59;
		L_59 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var, L_57, L_58);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_59, NULL);
		// break;
		goto IL_0210;
	}

IL_020a:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		NullCheck(L_60);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_60);
	}

IL_0210:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_61 = ___reader0;
		NullCheck(L_61);
		String_t* L_62;
		L_62 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_61);
		String_t* L_63 = L_62;
		V_1 = L_63;
		if (L_63)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<UnityEngine.ParticleSystem/SubEmittersModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisSubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_mE3A4998C61B8DADCE8FA5B298B4BF02D809B496E_gshared (ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_0210;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_020a;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_020a;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0076;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_013b;
		}
	}
	{
		goto IL_020a;
	}

IL_0076:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00a8;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_020a;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_16)
		{
			goto IL_0150;
		}
	}
	{
		goto IL_020a;
	}

IL_00a8:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_18)
		{
			goto IL_0167;
		}
	}
	{
		goto IL_020a;
	}

IL_00bd:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_20)
		{
			goto IL_017e;
		}
	}
	{
		goto IL_020a;
	}

IL_00d2:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_22)
		{
			goto IL_0192;
		}
	}
	{
		goto IL_020a;
	}

IL_00e7:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_24)
		{
			goto IL_01a6;
		}
	}
	{
		goto IL_020a;
	}

IL_00fc:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_26)
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_020a;
	}

IL_0111:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_28)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_020a;
	}

IL_0126:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_30)
		{
			goto IL_01e2;
		}
	}
	{
		goto IL_020a;
	}

IL_013b:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_32)
		{
			goto IL_01f6;
		}
	}
	{
		goto IL_020a;
	}

IL_0150:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_33);
		bool L_35;
		L_35 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_33, L_34);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_35, NULL);
		// break;
		goto IL_0210;
	}

IL_0167:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_38;
		L_38 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_36, L_37);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_38, NULL);
		// break;
		goto IL_0210;
	}

IL_017e:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		float L_41;
		L_41 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_39, L_40);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_41, NULL);
		// break;
		goto IL_0210;
	}

IL_0192:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_42, L_43);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_44, NULL);
		// break;
		goto IL_0210;
	}

IL_01a6:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_47, NULL);
		// break;
		goto IL_0210;
	}

IL_01ba:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_48, L_49);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_50, NULL);
		// break;
		goto IL_0210;
	}

IL_01ce:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_51, L_52);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_53, NULL);
		// break;
		goto IL_0210;
	}

IL_01e2:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_56, NULL);
		// break;
		goto IL_0210;
	}

IL_01f6:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59;
		L_59 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var, L_57, L_58);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_59, NULL);
		// break;
		goto IL_0210;
	}

IL_020a:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		NullCheck(L_60);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_60);
	}

IL_0210:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_61 = ___reader0;
		NullCheck(L_61);
		String_t* L_62;
		L_62 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_61);
		String_t* L_63 = L_62;
		V_1 = L_63;
		if (L_63)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<UnityEngine.ParticleSystem/TextureSheetAnimationModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisTextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_m5390F255E630AE84D5C3E8CFA7D744AB1C77B7C5_gshared (ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_0210;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_020a;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_020a;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0076;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_013b;
		}
	}
	{
		goto IL_020a;
	}

IL_0076:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00a8;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_020a;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_16)
		{
			goto IL_0150;
		}
	}
	{
		goto IL_020a;
	}

IL_00a8:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_18)
		{
			goto IL_0167;
		}
	}
	{
		goto IL_020a;
	}

IL_00bd:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_20)
		{
			goto IL_017e;
		}
	}
	{
		goto IL_020a;
	}

IL_00d2:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_22)
		{
			goto IL_0192;
		}
	}
	{
		goto IL_020a;
	}

IL_00e7:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_24)
		{
			goto IL_01a6;
		}
	}
	{
		goto IL_020a;
	}

IL_00fc:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_26)
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_020a;
	}

IL_0111:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_28)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_020a;
	}

IL_0126:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_30)
		{
			goto IL_01e2;
		}
	}
	{
		goto IL_020a;
	}

IL_013b:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_32)
		{
			goto IL_01f6;
		}
	}
	{
		goto IL_020a;
	}

IL_0150:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_33);
		bool L_35;
		L_35 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_33, L_34);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_35, NULL);
		// break;
		goto IL_0210;
	}

IL_0167:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_38;
		L_38 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_36, L_37);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_38, NULL);
		// break;
		goto IL_0210;
	}

IL_017e:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		float L_41;
		L_41 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_39, L_40);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_41, NULL);
		// break;
		goto IL_0210;
	}

IL_0192:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_42, L_43);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_44, NULL);
		// break;
		goto IL_0210;
	}

IL_01a6:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_47, NULL);
		// break;
		goto IL_0210;
	}

IL_01ba:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_48, L_49);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_50, NULL);
		// break;
		goto IL_0210;
	}

IL_01ce:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_51, L_52);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_53, NULL);
		// break;
		goto IL_0210;
	}

IL_01e2:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_56, NULL);
		// break;
		goto IL_0210;
	}

IL_01f6:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59;
		L_59 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var, L_57, L_58);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_59, NULL);
		// break;
		goto IL_0210;
	}

IL_020a:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		NullCheck(L_60);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_60);
	}

IL_0210:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_61 = ___reader0;
		NullCheck(L_61);
		String_t* L_62;
		L_62 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_61);
		String_t* L_63 = L_62;
		V_1 = L_63;
		if (L_63)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<UnityEngine.ParticleSystem/TrailModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisTrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_mFE87D7CADEB11542A20DD611B61755415C40F673_gshared (ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_0210;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_020a;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_020a;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0076;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_013b;
		}
	}
	{
		goto IL_020a;
	}

IL_0076:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00a8;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_020a;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_16)
		{
			goto IL_0150;
		}
	}
	{
		goto IL_020a;
	}

IL_00a8:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_18)
		{
			goto IL_0167;
		}
	}
	{
		goto IL_020a;
	}

IL_00bd:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_20)
		{
			goto IL_017e;
		}
	}
	{
		goto IL_020a;
	}

IL_00d2:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_22)
		{
			goto IL_0192;
		}
	}
	{
		goto IL_020a;
	}

IL_00e7:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_24)
		{
			goto IL_01a6;
		}
	}
	{
		goto IL_020a;
	}

IL_00fc:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_26)
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_020a;
	}

IL_0111:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_28)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_020a;
	}

IL_0126:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_30)
		{
			goto IL_01e2;
		}
	}
	{
		goto IL_020a;
	}

IL_013b:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_32)
		{
			goto IL_01f6;
		}
	}
	{
		goto IL_020a;
	}

IL_0150:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_33);
		bool L_35;
		L_35 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_33, L_34);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_35, NULL);
		// break;
		goto IL_0210;
	}

IL_0167:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_38;
		L_38 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_36, L_37);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_38, NULL);
		// break;
		goto IL_0210;
	}

IL_017e:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		float L_41;
		L_41 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_39, L_40);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_41, NULL);
		// break;
		goto IL_0210;
	}

IL_0192:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_42, L_43);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_44, NULL);
		// break;
		goto IL_0210;
	}

IL_01a6:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_47, NULL);
		// break;
		goto IL_0210;
	}

IL_01ba:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_48, L_49);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_50, NULL);
		// break;
		goto IL_0210;
	}

IL_01ce:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_51, L_52);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_53, NULL);
		// break;
		goto IL_0210;
	}

IL_01e2:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_56, NULL);
		// break;
		goto IL_0210;
	}

IL_01f6:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59;
		L_59 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var, L_57, L_58);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_59, NULL);
		// break;
		goto IL_0210;
	}

IL_020a:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		NullCheck(L_60);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_60);
	}

IL_0210:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_61 = ___reader0;
		NullCheck(L_61);
		String_t* L_62;
		L_62 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_61);
		String_t* L_63 = L_62;
		V_1 = L_63;
		if (L_63)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<UnityEngine.ParticleSystem/TriggerModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisTriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_m1FF845306DD5903DF99A5B1361A1BC73FF60399B_gshared (ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_0210;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_020a;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_020a;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0076;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_013b;
		}
	}
	{
		goto IL_020a;
	}

IL_0076:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00a8;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_020a;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_16)
		{
			goto IL_0150;
		}
	}
	{
		goto IL_020a;
	}

IL_00a8:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_18)
		{
			goto IL_0167;
		}
	}
	{
		goto IL_020a;
	}

IL_00bd:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_20)
		{
			goto IL_017e;
		}
	}
	{
		goto IL_020a;
	}

IL_00d2:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_22)
		{
			goto IL_0192;
		}
	}
	{
		goto IL_020a;
	}

IL_00e7:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_24)
		{
			goto IL_01a6;
		}
	}
	{
		goto IL_020a;
	}

IL_00fc:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_26)
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_020a;
	}

IL_0111:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_28)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_020a;
	}

IL_0126:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_30)
		{
			goto IL_01e2;
		}
	}
	{
		goto IL_020a;
	}

IL_013b:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_32)
		{
			goto IL_01f6;
		}
	}
	{
		goto IL_020a;
	}

IL_0150:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_33);
		bool L_35;
		L_35 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_33, L_34);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_35, NULL);
		// break;
		goto IL_0210;
	}

IL_0167:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_38;
		L_38 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_36, L_37);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_38, NULL);
		// break;
		goto IL_0210;
	}

IL_017e:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		float L_41;
		L_41 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_39, L_40);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_41, NULL);
		// break;
		goto IL_0210;
	}

IL_0192:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_42, L_43);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_44, NULL);
		// break;
		goto IL_0210;
	}

IL_01a6:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_47, NULL);
		// break;
		goto IL_0210;
	}

IL_01ba:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_48, L_49);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_50, NULL);
		// break;
		goto IL_0210;
	}

IL_01ce:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_51, L_52);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_53, NULL);
		// break;
		goto IL_0210;
	}

IL_01e2:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_56, NULL);
		// break;
		goto IL_0210;
	}

IL_01f6:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59;
		L_59 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var, L_57, L_58);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_59, NULL);
		// break;
		goto IL_0210;
	}

IL_020a:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		NullCheck(L_60);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_60);
	}

IL_0210:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_61 = ___reader0;
		NullCheck(L_61);
		String_t* L_62;
		L_62 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_61);
		String_t* L_63 = L_62;
		V_1 = L_63;
		if (L_63)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationBySpeedModule::ReadInto<UnityEngine.ParticleSystem/VelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisVelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_m6C1EDD2D4B9DFEE91F572FC15F75348C2A7D8D7E_gshared (ES3Type_RotationBySpeedModule_tE94351B6D7477AF1E551DD60FF8BF538670CC4DB* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)((RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var))));
		goto IL_0210;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_020a;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_020a;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_0076;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_013b;
		}
	}
	{
		goto IL_020a;
	}

IL_0076:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00a8;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_020a;
	}

IL_0093:
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_16)
		{
			goto IL_0150;
		}
	}
	{
		goto IL_020a;
	}

IL_00a8:
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_18)
		{
			goto IL_0167;
		}
	}
	{
		goto IL_020a;
	}

IL_00bd:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_20)
		{
			goto IL_017e;
		}
	}
	{
		goto IL_020a;
	}

IL_00d2:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_22)
		{
			goto IL_0192;
		}
	}
	{
		goto IL_020a;
	}

IL_00e7:
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_24)
		{
			goto IL_01a6;
		}
	}
	{
		goto IL_020a;
	}

IL_00fc:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_26)
		{
			goto IL_01ba;
		}
	}
	{
		goto IL_020a;
	}

IL_0111:
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_28)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_020a;
	}

IL_0126:
	{
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_30)
		{
			goto IL_01e2;
		}
	}
	{
		goto IL_020a;
	}

IL_013b:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_32)
		{
			goto IL_01f6;
		}
	}
	{
		goto IL_020a;
	}

IL_0150:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_33);
		bool L_35;
		L_35 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_33, L_34);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_35, NULL);
		// break;
		goto IL_0210;
	}

IL_0167:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_38;
		L_38 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_36, L_37);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_38, NULL);
		// break;
		goto IL_0210;
	}

IL_017e:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		float L_41;
		L_41 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_39, L_40);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_41, NULL);
		// break;
		goto IL_0210;
	}

IL_0192:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_44;
		L_44 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_42, L_43);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_44, NULL);
		// break;
		goto IL_0210;
	}

IL_01a6:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_45, L_46);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_47, NULL);
		// break;
		goto IL_0210;
	}

IL_01ba:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_48, L_49);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_50, NULL);
		// break;
		goto IL_0210;
	}

IL_01ce:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		float L_53;
		L_53 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_51, L_52);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_53, NULL);
		// break;
		goto IL_0210;
	}

IL_01e2:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_55 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_54, L_55);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_56, NULL);
		// break;
		goto IL_0210;
	}

IL_01f6:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_57 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_58 = ((ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_t39D1294499A121C5EB6E875095E911C92B9424B2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59;
		L_59 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAB1D07863A4A9C59DD9B3AE7C872F7B82985CFC9_RuntimeMethod_var, L_57, L_58);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_59, NULL);
		// break;
		goto IL_0210;
	}

IL_020a:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_60 = ___reader0;
		NullCheck(L_60);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_60);
	}

IL_0210:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_61 = ___reader0;
		NullCheck(L_61);
		String_t* L_62;
		L_62 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_61);
		String_t* L_63 = L_62;
		V_1 = L_63;
		if (L_63)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Object ES3Types.ES3Type_RotationOverLifetimeModule::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9F5EFC12F8E28BAAD5A6DD6A49A30D3CEFADA762_gshared (ES3Type_RotationOverLifetimeModule_tE2626EAFE32CA2E60DC5D6DEFDAFF071F3DB63E9* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.RotationOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_RotationOverLifetimeModule::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m2310F2C94FDA6461DCF684C748148DCCA4262682_gshared (ES3Type_RotationOverLifetimeModule_tE2626EAFE32CA2E60DC5D6DEFDAFF071F3DB63E9* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.RotationOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_RotationOverLifetimeModule::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB538E9B22967033106FC9F822182D71E18D24C63_gshared (ES3Type_RotationOverLifetimeModule_tE2626EAFE32CA2E60DC5D6DEFDAFF071F3DB63E9* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.RotationOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_RotationOverLifetimeModule::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mB63A0BBD98040D20AA13352F6A3F8D43C42FA78C_gshared (ES3Type_RotationOverLifetimeModule_tE2626EAFE32CA2E60DC5D6DEFDAFF071F3DB63E9* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.RotationOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_RotationOverLifetimeModule::Read<System.Int16>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA6459E2CB503AA60D2F1514822FDB14FCD773DCA_gshared (ES3Type_RotationOverLifetimeModule_tE2626EAFE32CA2E60DC5D6DEFDAFF071F3DB63E9* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.RotationOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_RotationOverLifetimeModule::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4C40BD7C5AC2180B346D0EBF21BB2D717FE7D968_gshared (ES3Type_RotationOverLifetimeModule_tE2626EAFE32CA2E60DC5D6DEFDAFF071F3DB63E9* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.RotationOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_RotationOverLifetimeModule::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mBD09C7185FDF90E3AD548E61C8E92CF5FC7E0A9E_gshared (ES3Type_RotationOverLifetimeModule_tE2626EAFE32CA2E60DC5D6DEFDAFF071F3DB63E9* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.RotationOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_RotationOverLifetimeModule::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4F92BF3B4D93437B84E48442E1B83D9BCEF3134D_gshared (ES3Type_RotationOverLifetimeModule_tE2626EAFE32CA2E60DC5D6DEFDAFF071F3DB63E9* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.RotationOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_RotationOverLifetimeModule::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m41B7F2CE3731F4BBC9886CDB0FCD00F546AA3185_gshared (ES3Type_RotationOverLifetimeModule_tE2626EAFE32CA2E60DC5D6DEFDAFF071F3DB63E9* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.RotationOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_RotationOverLifetimeModule::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m2A7DA83137DED10884EEEFFB918372B1433D2291_gshared (ES3Type_RotationOverLifetimeModule_tE2626EAFE32CA2E60DC5D6DEFDAFF071F3DB63E9* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.RotationOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_RotationOverLifetimeModule::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisRuntimeObject_mA56DA7E424C42D71BF19C0C0C0BA277BE68EFAFE_gshared (ES3Type_RotationOverLifetimeModule_tE2626EAFE32CA2E60DC5D6DEFDAFF071F3DB63E9* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.RotationOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_RotationOverLifetimeModule::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m5453023EC58607744C7FDB7F820F711DDBB56B5F_gshared (ES3Type_RotationOverLifetimeModule_tE2626EAFE32CA2E60DC5D6DEFDAFF071F3DB63E9* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.RotationOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_RotationOverLifetimeModule::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_mA62F40610EAA56837380321BE89F7826EDF0FA02_gshared (ES3Type_RotationOverLifetimeModule_tE2626EAFE32CA2E60DC5D6DEFDAFF071F3DB63E9* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.RotationOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_RotationOverLifetimeModule::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_mD55202A33752E3E90CF2751C9EB075DEA2A77385_gshared (ES3Type_RotationOverLifetimeModule_tE2626EAFE32CA2E60DC5D6DEFDAFF071F3DB63E9* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.RotationOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_RotationOverLifetimeModule::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m13BD55E333153A2E89287F2D72D958E45AF39E62_gshared (ES3Type_RotationOverLifetimeModule_tE2626EAFE32CA2E60DC5D6DEFDAFF071F3DB63E9* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.RotationOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_RotationOverLifetimeModule::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m513D80E6F5A9AA57A1B5E6872826FF9702BA5000_gshared (ES3Type_RotationOverLifetimeModule_tE2626EAFE32CA2E60DC5D6DEFDAFF071F3DB63E9* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.RotationOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_RotationOverLifetimeModule::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m60403109987071B9A1F56E5CF7DF0203C960C0E5_gshared (ES3Type_RotationOverLifetimeModule_tE2626EAFE32CA2E60DC5D6DEFDAFF071F3DB63E9* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.RotationOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_RotationOverLifetimeModule::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m4DAAE8C7AE924079B8A13097D6F5AFB77759AC4D_gshared (ES3Type_RotationOverLifetimeModule_tE2626EAFE32CA2E60DC5D6DEFDAFF071F3DB63E9* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.RotationOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_RotationOverLifetimeModule::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m3C1B8CDBB38B0EA102F975BE1965F2B99B087983_gshared (ES3Type_RotationOverLifetimeModule_tE2626EAFE32CA2E60DC5D6DEFDAFF071F3DB63E9* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.RotationOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_RotationOverLifetimeModule::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mEE585DBB9691D65FA749FC7D8A46BAEE6A3CF4AB_gshared (ES3Type_RotationOverLifetimeModule_tE2626EAFE32CA2E60DC5D6DEFDAFF071F3DB63E9* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.RotationOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		// ReadInto<T>(reader, instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_0 = ___reader0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687*)__this, L_0, L_3);
		// return instance;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Void ES3Types.ES3Type_RotationOverLifetimeModule::ReadInto<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisRuntimeObject_mACC1E21EC104BDB9878849569A48E1A50E2E9D5B_gshared (ES3Type_RotationOverLifetimeModule_tE2626EAFE32CA2E60DC5D6DEFDAFF071F3DB63E9* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)((RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var))));
		goto IL_01d9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0088;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0106;
		}
	}
	{
		goto IL_01d3;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_011b;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00dc;
		}
	}
	{
		goto IL_01d3;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00c7;
		}
	}
	{
		goto IL_01d3;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00f1;
		}
	}
	{
		goto IL_01d3;
	}

IL_0088:
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_15)
		{
			goto IL_0130;
		}
	}
	{
		goto IL_01d3;
	}

IL_009d:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_17)
		{
			goto IL_0147;
		}
	}
	{
		goto IL_01d3;
	}

IL_00b2:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_19)
		{
			goto IL_015b;
		}
	}
	{
		goto IL_01d3;
	}

IL_00c7:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_21)
		{
			goto IL_016f;
		}
	}
	{
		goto IL_01d3;
	}

IL_00dc:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_23)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01d3;
	}

IL_00f1:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_25)
		{
			goto IL_0197;
		}
	}
	{
		goto IL_01d3;
	}

IL_0106:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_27)
		{
			goto IL_01ab;
		}
	}
	{
		goto IL_01d3;
	}

IL_011b:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_29)
		{
			goto IL_01bf;
		}
	}
	{
		goto IL_01d3;
	}

IL_0130:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_31 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_30);
		bool L_32;
		L_32 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_30, L_31);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_32, NULL);
		// break;
		goto IL_01d9;
	}

IL_0147:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_33);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_35;
		L_35 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_33, L_34);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_35, NULL);
		// break;
		goto IL_01d9;
	}

IL_015b:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		float L_38;
		L_38 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_36, L_37);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_38, NULL);
		// break;
		goto IL_01d9;
	}

IL_016f:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_39, L_40);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_41, NULL);
		// break;
		goto IL_01d9;
	}

IL_0183:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_42, L_43);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_44, NULL);
		// break;
		goto IL_01d9;
	}

IL_0197:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_45, L_46);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_47, NULL);
		// break;
		goto IL_01d9;
	}

IL_01ab:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_48, L_49);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_50, NULL);
		// break;
		goto IL_01d9;
	}

IL_01bf:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		bool L_53;
		L_53 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_51, L_52);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_53, NULL);
		// break;
		goto IL_01d9;
	}

IL_01d3:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		NullCheck(L_54);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_54);
	}

IL_01d9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_55);
		String_t* L_57 = L_56;
		V_1 = L_57;
		if (L_57)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/CollisionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_mB497B5415D16D83469F62338430DA8A572E046F9_gshared (ES3Type_RotationOverLifetimeModule_tE2626EAFE32CA2E60DC5D6DEFDAFF071F3DB63E9* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)((RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var))));
		goto IL_01d9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0088;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0106;
		}
	}
	{
		goto IL_01d3;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_011b;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00dc;
		}
	}
	{
		goto IL_01d3;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00c7;
		}
	}
	{
		goto IL_01d3;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00f1;
		}
	}
	{
		goto IL_01d3;
	}

IL_0088:
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_15)
		{
			goto IL_0130;
		}
	}
	{
		goto IL_01d3;
	}

IL_009d:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_17)
		{
			goto IL_0147;
		}
	}
	{
		goto IL_01d3;
	}

IL_00b2:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_19)
		{
			goto IL_015b;
		}
	}
	{
		goto IL_01d3;
	}

IL_00c7:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_21)
		{
			goto IL_016f;
		}
	}
	{
		goto IL_01d3;
	}

IL_00dc:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_23)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01d3;
	}

IL_00f1:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_25)
		{
			goto IL_0197;
		}
	}
	{
		goto IL_01d3;
	}

IL_0106:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_27)
		{
			goto IL_01ab;
		}
	}
	{
		goto IL_01d3;
	}

IL_011b:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_29)
		{
			goto IL_01bf;
		}
	}
	{
		goto IL_01d3;
	}

IL_0130:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_31 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_30);
		bool L_32;
		L_32 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_30, L_31);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_32, NULL);
		// break;
		goto IL_01d9;
	}

IL_0147:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_33);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_35;
		L_35 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_33, L_34);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_35, NULL);
		// break;
		goto IL_01d9;
	}

IL_015b:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		float L_38;
		L_38 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_36, L_37);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_38, NULL);
		// break;
		goto IL_01d9;
	}

IL_016f:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_39, L_40);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_41, NULL);
		// break;
		goto IL_01d9;
	}

IL_0183:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_42, L_43);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_44, NULL);
		// break;
		goto IL_01d9;
	}

IL_0197:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_45, L_46);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_47, NULL);
		// break;
		goto IL_01d9;
	}

IL_01ab:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_48, L_49);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_50, NULL);
		// break;
		goto IL_01d9;
	}

IL_01bf:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		bool L_53;
		L_53 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_51, L_52);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_53, NULL);
		// break;
		goto IL_01d9;
	}

IL_01d3:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		NullCheck(L_54);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_54);
	}

IL_01d9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_55);
		String_t* L_57 = L_56;
		V_1 = L_57;
		if (L_57)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/ColorBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_mF7723A5D08C28C6326B65DDBC94C053019D60C56_gshared (ES3Type_RotationOverLifetimeModule_tE2626EAFE32CA2E60DC5D6DEFDAFF071F3DB63E9* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)((RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var))));
		goto IL_01d9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0088;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0106;
		}
	}
	{
		goto IL_01d3;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_011b;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00dc;
		}
	}
	{
		goto IL_01d3;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00c7;
		}
	}
	{
		goto IL_01d3;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00f1;
		}
	}
	{
		goto IL_01d3;
	}

IL_0088:
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_15)
		{
			goto IL_0130;
		}
	}
	{
		goto IL_01d3;
	}

IL_009d:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_17)
		{
			goto IL_0147;
		}
	}
	{
		goto IL_01d3;
	}

IL_00b2:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_19)
		{
			goto IL_015b;
		}
	}
	{
		goto IL_01d3;
	}

IL_00c7:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_21)
		{
			goto IL_016f;
		}
	}
	{
		goto IL_01d3;
	}

IL_00dc:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_23)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01d3;
	}

IL_00f1:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_25)
		{
			goto IL_0197;
		}
	}
	{
		goto IL_01d3;
	}

IL_0106:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_27)
		{
			goto IL_01ab;
		}
	}
	{
		goto IL_01d3;
	}

IL_011b:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_29)
		{
			goto IL_01bf;
		}
	}
	{
		goto IL_01d3;
	}

IL_0130:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_31 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_30);
		bool L_32;
		L_32 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_30, L_31);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_32, NULL);
		// break;
		goto IL_01d9;
	}

IL_0147:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_33);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_35;
		L_35 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_33, L_34);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_35, NULL);
		// break;
		goto IL_01d9;
	}

IL_015b:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		float L_38;
		L_38 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_36, L_37);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_38, NULL);
		// break;
		goto IL_01d9;
	}

IL_016f:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_39, L_40);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_41, NULL);
		// break;
		goto IL_01d9;
	}

IL_0183:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_42, L_43);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_44, NULL);
		// break;
		goto IL_01d9;
	}

IL_0197:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_45, L_46);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_47, NULL);
		// break;
		goto IL_01d9;
	}

IL_01ab:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_48, L_49);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_50, NULL);
		// break;
		goto IL_01d9;
	}

IL_01bf:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		bool L_53;
		L_53 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_51, L_52);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_53, NULL);
		// break;
		goto IL_01d9;
	}

IL_01d3:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		NullCheck(L_54);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_54);
	}

IL_01d9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_55);
		String_t* L_57 = L_56;
		V_1 = L_57;
		if (L_57)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/ColorOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_m56EF7435A3B623320E54BEEA0A3DC36BABF54624_gshared (ES3Type_RotationOverLifetimeModule_tE2626EAFE32CA2E60DC5D6DEFDAFF071F3DB63E9* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)((RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var))));
		goto IL_01d9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0088;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0106;
		}
	}
	{
		goto IL_01d3;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_011b;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00dc;
		}
	}
	{
		goto IL_01d3;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00c7;
		}
	}
	{
		goto IL_01d3;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00f1;
		}
	}
	{
		goto IL_01d3;
	}

IL_0088:
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_15)
		{
			goto IL_0130;
		}
	}
	{
		goto IL_01d3;
	}

IL_009d:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_17)
		{
			goto IL_0147;
		}
	}
	{
		goto IL_01d3;
	}

IL_00b2:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_19)
		{
			goto IL_015b;
		}
	}
	{
		goto IL_01d3;
	}

IL_00c7:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_21)
		{
			goto IL_016f;
		}
	}
	{
		goto IL_01d3;
	}

IL_00dc:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_23)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01d3;
	}

IL_00f1:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_25)
		{
			goto IL_0197;
		}
	}
	{
		goto IL_01d3;
	}

IL_0106:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_27)
		{
			goto IL_01ab;
		}
	}
	{
		goto IL_01d3;
	}

IL_011b:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_29)
		{
			goto IL_01bf;
		}
	}
	{
		goto IL_01d3;
	}

IL_0130:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_31 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_30);
		bool L_32;
		L_32 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_30, L_31);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_32, NULL);
		// break;
		goto IL_01d9;
	}

IL_0147:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_33);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_35;
		L_35 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_33, L_34);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_35, NULL);
		// break;
		goto IL_01d9;
	}

IL_015b:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		float L_38;
		L_38 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_36, L_37);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_38, NULL);
		// break;
		goto IL_01d9;
	}

IL_016f:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_39, L_40);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_41, NULL);
		// break;
		goto IL_01d9;
	}

IL_0183:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_42, L_43);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_44, NULL);
		// break;
		goto IL_01d9;
	}

IL_0197:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_45, L_46);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_47, NULL);
		// break;
		goto IL_01d9;
	}

IL_01ab:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_48, L_49);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_50, NULL);
		// break;
		goto IL_01d9;
	}

IL_01bf:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		bool L_53;
		L_53 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_51, L_52);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_53, NULL);
		// break;
		goto IL_01d9;
	}

IL_01d3:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		NullCheck(L_54);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_54);
	}

IL_01d9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_55);
		String_t* L_57 = L_56;
		V_1 = L_57;
		if (L_57)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/EmissionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_m163ED6B373C64B294771A3BA9EC92F95F4BEE649_gshared (ES3Type_RotationOverLifetimeModule_tE2626EAFE32CA2E60DC5D6DEFDAFF071F3DB63E9* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)((RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var))));
		goto IL_01d9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0088;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0106;
		}
	}
	{
		goto IL_01d3;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_011b;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00dc;
		}
	}
	{
		goto IL_01d3;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00c7;
		}
	}
	{
		goto IL_01d3;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00f1;
		}
	}
	{
		goto IL_01d3;
	}

IL_0088:
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_15)
		{
			goto IL_0130;
		}
	}
	{
		goto IL_01d3;
	}

IL_009d:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_17)
		{
			goto IL_0147;
		}
	}
	{
		goto IL_01d3;
	}

IL_00b2:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_19)
		{
			goto IL_015b;
		}
	}
	{
		goto IL_01d3;
	}

IL_00c7:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_21)
		{
			goto IL_016f;
		}
	}
	{
		goto IL_01d3;
	}

IL_00dc:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_23)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01d3;
	}

IL_00f1:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_25)
		{
			goto IL_0197;
		}
	}
	{
		goto IL_01d3;
	}

IL_0106:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_27)
		{
			goto IL_01ab;
		}
	}
	{
		goto IL_01d3;
	}

IL_011b:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_29)
		{
			goto IL_01bf;
		}
	}
	{
		goto IL_01d3;
	}

IL_0130:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_31 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_30);
		bool L_32;
		L_32 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_30, L_31);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_32, NULL);
		// break;
		goto IL_01d9;
	}

IL_0147:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_33);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_35;
		L_35 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_33, L_34);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_35, NULL);
		// break;
		goto IL_01d9;
	}

IL_015b:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		float L_38;
		L_38 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_36, L_37);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_38, NULL);
		// break;
		goto IL_01d9;
	}

IL_016f:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_39, L_40);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_41, NULL);
		// break;
		goto IL_01d9;
	}

IL_0183:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_42, L_43);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_44, NULL);
		// break;
		goto IL_01d9;
	}

IL_0197:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_45, L_46);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_47, NULL);
		// break;
		goto IL_01d9;
	}

IL_01ab:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_48, L_49);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_50, NULL);
		// break;
		goto IL_01d9;
	}

IL_01bf:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		bool L_53;
		L_53 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_51, L_52);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_53, NULL);
		// break;
		goto IL_01d9;
	}

IL_01d3:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		NullCheck(L_54);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_54);
	}

IL_01d9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_55);
		String_t* L_57 = L_56;
		V_1 = L_57;
		if (L_57)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/ExternalForcesModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_m8DA41B671D22B23B47221C8048C1CAF0A11442D1_gshared (ES3Type_RotationOverLifetimeModule_tE2626EAFE32CA2E60DC5D6DEFDAFF071F3DB63E9* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)((RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var))));
		goto IL_01d9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0088;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0106;
		}
	}
	{
		goto IL_01d3;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_011b;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00dc;
		}
	}
	{
		goto IL_01d3;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00c7;
		}
	}
	{
		goto IL_01d3;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00f1;
		}
	}
	{
		goto IL_01d3;
	}

IL_0088:
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_15)
		{
			goto IL_0130;
		}
	}
	{
		goto IL_01d3;
	}

IL_009d:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_17)
		{
			goto IL_0147;
		}
	}
	{
		goto IL_01d3;
	}

IL_00b2:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_19)
		{
			goto IL_015b;
		}
	}
	{
		goto IL_01d3;
	}

IL_00c7:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_21)
		{
			goto IL_016f;
		}
	}
	{
		goto IL_01d3;
	}

IL_00dc:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_23)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01d3;
	}

IL_00f1:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_25)
		{
			goto IL_0197;
		}
	}
	{
		goto IL_01d3;
	}

IL_0106:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_27)
		{
			goto IL_01ab;
		}
	}
	{
		goto IL_01d3;
	}

IL_011b:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_29)
		{
			goto IL_01bf;
		}
	}
	{
		goto IL_01d3;
	}

IL_0130:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_31 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_30);
		bool L_32;
		L_32 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_30, L_31);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_32, NULL);
		// break;
		goto IL_01d9;
	}

IL_0147:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_33);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_35;
		L_35 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_33, L_34);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_35, NULL);
		// break;
		goto IL_01d9;
	}

IL_015b:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		float L_38;
		L_38 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_36, L_37);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_38, NULL);
		// break;
		goto IL_01d9;
	}

IL_016f:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_39, L_40);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_41, NULL);
		// break;
		goto IL_01d9;
	}

IL_0183:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_42, L_43);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_44, NULL);
		// break;
		goto IL_01d9;
	}

IL_0197:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_45, L_46);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_47, NULL);
		// break;
		goto IL_01d9;
	}

IL_01ab:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_48, L_49);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_50, NULL);
		// break;
		goto IL_01d9;
	}

IL_01bf:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		bool L_53;
		L_53 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_51, L_52);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_53, NULL);
		// break;
		goto IL_01d9;
	}

IL_01d3:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		NullCheck(L_54);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_54);
	}

IL_01d9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_55);
		String_t* L_57 = L_56;
		V_1 = L_57;
		if (L_57)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/ForceOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_m1F3B7DC50F7C02529C474DB1F07403A301F89F9D_gshared (ES3Type_RotationOverLifetimeModule_tE2626EAFE32CA2E60DC5D6DEFDAFF071F3DB63E9* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)((RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var))));
		goto IL_01d9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0088;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0106;
		}
	}
	{
		goto IL_01d3;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_011b;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00dc;
		}
	}
	{
		goto IL_01d3;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00c7;
		}
	}
	{
		goto IL_01d3;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00f1;
		}
	}
	{
		goto IL_01d3;
	}

IL_0088:
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_15)
		{
			goto IL_0130;
		}
	}
	{
		goto IL_01d3;
	}

IL_009d:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_17)
		{
			goto IL_0147;
		}
	}
	{
		goto IL_01d3;
	}

IL_00b2:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_19)
		{
			goto IL_015b;
		}
	}
	{
		goto IL_01d3;
	}

IL_00c7:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_21)
		{
			goto IL_016f;
		}
	}
	{
		goto IL_01d3;
	}

IL_00dc:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_23)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01d3;
	}

IL_00f1:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_25)
		{
			goto IL_0197;
		}
	}
	{
		goto IL_01d3;
	}

IL_0106:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_27)
		{
			goto IL_01ab;
		}
	}
	{
		goto IL_01d3;
	}

IL_011b:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_29)
		{
			goto IL_01bf;
		}
	}
	{
		goto IL_01d3;
	}

IL_0130:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_31 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_30);
		bool L_32;
		L_32 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_30, L_31);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_32, NULL);
		// break;
		goto IL_01d9;
	}

IL_0147:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_33);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_35;
		L_35 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_33, L_34);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_35, NULL);
		// break;
		goto IL_01d9;
	}

IL_015b:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		float L_38;
		L_38 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_36, L_37);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_38, NULL);
		// break;
		goto IL_01d9;
	}

IL_016f:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_39, L_40);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_41, NULL);
		// break;
		goto IL_01d9;
	}

IL_0183:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_42, L_43);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_44, NULL);
		// break;
		goto IL_01d9;
	}

IL_0197:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_45, L_46);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_47, NULL);
		// break;
		goto IL_01d9;
	}

IL_01ab:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_48, L_49);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_50, NULL);
		// break;
		goto IL_01d9;
	}

IL_01bf:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		bool L_53;
		L_53 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_51, L_52);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_53, NULL);
		// break;
		goto IL_01d9;
	}

IL_01d3:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		NullCheck(L_54);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_54);
	}

IL_01d9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_55);
		String_t* L_57 = L_56;
		V_1 = L_57;
		if (L_57)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/InheritVelocityModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_m5E90ECEA1C2699247B871CAF3A0D99C580C55055_gshared (ES3Type_RotationOverLifetimeModule_tE2626EAFE32CA2E60DC5D6DEFDAFF071F3DB63E9* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)((RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var))));
		goto IL_01d9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0088;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0106;
		}
	}
	{
		goto IL_01d3;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_011b;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00dc;
		}
	}
	{
		goto IL_01d3;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00c7;
		}
	}
	{
		goto IL_01d3;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00f1;
		}
	}
	{
		goto IL_01d3;
	}

IL_0088:
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_15)
		{
			goto IL_0130;
		}
	}
	{
		goto IL_01d3;
	}

IL_009d:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_17)
		{
			goto IL_0147;
		}
	}
	{
		goto IL_01d3;
	}

IL_00b2:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_19)
		{
			goto IL_015b;
		}
	}
	{
		goto IL_01d3;
	}

IL_00c7:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_21)
		{
			goto IL_016f;
		}
	}
	{
		goto IL_01d3;
	}

IL_00dc:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_23)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01d3;
	}

IL_00f1:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_25)
		{
			goto IL_0197;
		}
	}
	{
		goto IL_01d3;
	}

IL_0106:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_27)
		{
			goto IL_01ab;
		}
	}
	{
		goto IL_01d3;
	}

IL_011b:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_29)
		{
			goto IL_01bf;
		}
	}
	{
		goto IL_01d3;
	}

IL_0130:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_31 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_30);
		bool L_32;
		L_32 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_30, L_31);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_32, NULL);
		// break;
		goto IL_01d9;
	}

IL_0147:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_33);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_35;
		L_35 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_33, L_34);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_35, NULL);
		// break;
		goto IL_01d9;
	}

IL_015b:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		float L_38;
		L_38 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_36, L_37);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_38, NULL);
		// break;
		goto IL_01d9;
	}

IL_016f:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_39, L_40);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_41, NULL);
		// break;
		goto IL_01d9;
	}

IL_0183:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_42, L_43);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_44, NULL);
		// break;
		goto IL_01d9;
	}

IL_0197:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_45, L_46);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_47, NULL);
		// break;
		goto IL_01d9;
	}

IL_01ab:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_48, L_49);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_50, NULL);
		// break;
		goto IL_01d9;
	}

IL_01bf:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		bool L_53;
		L_53 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_51, L_52);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_53, NULL);
		// break;
		goto IL_01d9;
	}

IL_01d3:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		NullCheck(L_54);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_54);
	}

IL_01d9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_55);
		String_t* L_57 = L_56;
		V_1 = L_57;
		if (L_57)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/LightsModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_m91C261D7E5DB822F1A3368C9C99617B120591D0F_gshared (ES3Type_RotationOverLifetimeModule_tE2626EAFE32CA2E60DC5D6DEFDAFF071F3DB63E9* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)((RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var))));
		goto IL_01d9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0088;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0106;
		}
	}
	{
		goto IL_01d3;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_011b;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00dc;
		}
	}
	{
		goto IL_01d3;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00c7;
		}
	}
	{
		goto IL_01d3;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00f1;
		}
	}
	{
		goto IL_01d3;
	}

IL_0088:
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_15)
		{
			goto IL_0130;
		}
	}
	{
		goto IL_01d3;
	}

IL_009d:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_17)
		{
			goto IL_0147;
		}
	}
	{
		goto IL_01d3;
	}

IL_00b2:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_19)
		{
			goto IL_015b;
		}
	}
	{
		goto IL_01d3;
	}

IL_00c7:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_21)
		{
			goto IL_016f;
		}
	}
	{
		goto IL_01d3;
	}

IL_00dc:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_23)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01d3;
	}

IL_00f1:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_25)
		{
			goto IL_0197;
		}
	}
	{
		goto IL_01d3;
	}

IL_0106:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_27)
		{
			goto IL_01ab;
		}
	}
	{
		goto IL_01d3;
	}

IL_011b:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_29)
		{
			goto IL_01bf;
		}
	}
	{
		goto IL_01d3;
	}

IL_0130:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_31 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_30);
		bool L_32;
		L_32 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_30, L_31);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_32, NULL);
		// break;
		goto IL_01d9;
	}

IL_0147:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_33);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_35;
		L_35 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_33, L_34);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_35, NULL);
		// break;
		goto IL_01d9;
	}

IL_015b:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		float L_38;
		L_38 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_36, L_37);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_38, NULL);
		// break;
		goto IL_01d9;
	}

IL_016f:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_39, L_40);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_41, NULL);
		// break;
		goto IL_01d9;
	}

IL_0183:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_42, L_43);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_44, NULL);
		// break;
		goto IL_01d9;
	}

IL_0197:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_45, L_46);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_47, NULL);
		// break;
		goto IL_01d9;
	}

IL_01ab:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_48, L_49);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_50, NULL);
		// break;
		goto IL_01d9;
	}

IL_01bf:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		bool L_53;
		L_53 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_51, L_52);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_53, NULL);
		// break;
		goto IL_01d9;
	}

IL_01d3:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		NullCheck(L_54);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_54);
	}

IL_01d9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_55);
		String_t* L_57 = L_56;
		V_1 = L_57;
		if (L_57)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisLimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_mADEF72171D35C5C77793994AC8DB414C6EB73E4D_gshared (ES3Type_RotationOverLifetimeModule_tE2626EAFE32CA2E60DC5D6DEFDAFF071F3DB63E9* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)((RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var))));
		goto IL_01d9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0088;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0106;
		}
	}
	{
		goto IL_01d3;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_011b;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00dc;
		}
	}
	{
		goto IL_01d3;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00c7;
		}
	}
	{
		goto IL_01d3;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00f1;
		}
	}
	{
		goto IL_01d3;
	}

IL_0088:
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_15)
		{
			goto IL_0130;
		}
	}
	{
		goto IL_01d3;
	}

IL_009d:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_17)
		{
			goto IL_0147;
		}
	}
	{
		goto IL_01d3;
	}

IL_00b2:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_19)
		{
			goto IL_015b;
		}
	}
	{
		goto IL_01d3;
	}

IL_00c7:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_21)
		{
			goto IL_016f;
		}
	}
	{
		goto IL_01d3;
	}

IL_00dc:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_23)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01d3;
	}

IL_00f1:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_25)
		{
			goto IL_0197;
		}
	}
	{
		goto IL_01d3;
	}

IL_0106:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_27)
		{
			goto IL_01ab;
		}
	}
	{
		goto IL_01d3;
	}

IL_011b:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_29)
		{
			goto IL_01bf;
		}
	}
	{
		goto IL_01d3;
	}

IL_0130:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_31 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_30);
		bool L_32;
		L_32 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_30, L_31);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_32, NULL);
		// break;
		goto IL_01d9;
	}

IL_0147:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_33);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_35;
		L_35 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_33, L_34);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_35, NULL);
		// break;
		goto IL_01d9;
	}

IL_015b:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		float L_38;
		L_38 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_36, L_37);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_38, NULL);
		// break;
		goto IL_01d9;
	}

IL_016f:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_39, L_40);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_41, NULL);
		// break;
		goto IL_01d9;
	}

IL_0183:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_42, L_43);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_44, NULL);
		// break;
		goto IL_01d9;
	}

IL_0197:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_45, L_46);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_47, NULL);
		// break;
		goto IL_01d9;
	}

IL_01ab:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_48, L_49);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_50, NULL);
		// break;
		goto IL_01d9;
	}

IL_01bf:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		bool L_53;
		L_53 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_51, L_52);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_53, NULL);
		// break;
		goto IL_01d9;
	}

IL_01d3:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		NullCheck(L_54);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_54);
	}

IL_01d9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_55);
		String_t* L_57 = L_56;
		V_1 = L_57;
		if (L_57)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/MainModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisMainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_m521ACD5815D0B936833A48962EEE562305FC0DE9_gshared (ES3Type_RotationOverLifetimeModule_tE2626EAFE32CA2E60DC5D6DEFDAFF071F3DB63E9* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)((RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var))));
		goto IL_01d9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0088;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0106;
		}
	}
	{
		goto IL_01d3;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_011b;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00dc;
		}
	}
	{
		goto IL_01d3;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00c7;
		}
	}
	{
		goto IL_01d3;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00f1;
		}
	}
	{
		goto IL_01d3;
	}

IL_0088:
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_15)
		{
			goto IL_0130;
		}
	}
	{
		goto IL_01d3;
	}

IL_009d:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_17)
		{
			goto IL_0147;
		}
	}
	{
		goto IL_01d3;
	}

IL_00b2:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_19)
		{
			goto IL_015b;
		}
	}
	{
		goto IL_01d3;
	}

IL_00c7:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_21)
		{
			goto IL_016f;
		}
	}
	{
		goto IL_01d3;
	}

IL_00dc:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_23)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01d3;
	}

IL_00f1:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_25)
		{
			goto IL_0197;
		}
	}
	{
		goto IL_01d3;
	}

IL_0106:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_27)
		{
			goto IL_01ab;
		}
	}
	{
		goto IL_01d3;
	}

IL_011b:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_29)
		{
			goto IL_01bf;
		}
	}
	{
		goto IL_01d3;
	}

IL_0130:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_31 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_30);
		bool L_32;
		L_32 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_30, L_31);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_32, NULL);
		// break;
		goto IL_01d9;
	}

IL_0147:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_33);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_35;
		L_35 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_33, L_34);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_35, NULL);
		// break;
		goto IL_01d9;
	}

IL_015b:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		float L_38;
		L_38 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_36, L_37);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_38, NULL);
		// break;
		goto IL_01d9;
	}

IL_016f:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_39, L_40);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_41, NULL);
		// break;
		goto IL_01d9;
	}

IL_0183:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_42, L_43);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_44, NULL);
		// break;
		goto IL_01d9;
	}

IL_0197:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_45, L_46);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_47, NULL);
		// break;
		goto IL_01d9;
	}

IL_01ab:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_48, L_49);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_50, NULL);
		// break;
		goto IL_01d9;
	}

IL_01bf:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		bool L_53;
		L_53 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_51, L_52);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_53, NULL);
		// break;
		goto IL_01d9;
	}

IL_01d3:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		NullCheck(L_54);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_54);
	}

IL_01d9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_55);
		String_t* L_57 = L_56;
		V_1 = L_57;
		if (L_57)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/NoiseModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisNoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_mF031FD1F7B73377E1BEFFB92572BDB61584BBFF4_gshared (ES3Type_RotationOverLifetimeModule_tE2626EAFE32CA2E60DC5D6DEFDAFF071F3DB63E9* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)((RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var))));
		goto IL_01d9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0088;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0106;
		}
	}
	{
		goto IL_01d3;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_011b;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00dc;
		}
	}
	{
		goto IL_01d3;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00c7;
		}
	}
	{
		goto IL_01d3;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00f1;
		}
	}
	{
		goto IL_01d3;
	}

IL_0088:
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_15)
		{
			goto IL_0130;
		}
	}
	{
		goto IL_01d3;
	}

IL_009d:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_17)
		{
			goto IL_0147;
		}
	}
	{
		goto IL_01d3;
	}

IL_00b2:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_19)
		{
			goto IL_015b;
		}
	}
	{
		goto IL_01d3;
	}

IL_00c7:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_21)
		{
			goto IL_016f;
		}
	}
	{
		goto IL_01d3;
	}

IL_00dc:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_23)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01d3;
	}

IL_00f1:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_25)
		{
			goto IL_0197;
		}
	}
	{
		goto IL_01d3;
	}

IL_0106:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_27)
		{
			goto IL_01ab;
		}
	}
	{
		goto IL_01d3;
	}

IL_011b:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_29)
		{
			goto IL_01bf;
		}
	}
	{
		goto IL_01d3;
	}

IL_0130:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_31 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_30);
		bool L_32;
		L_32 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_30, L_31);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_32, NULL);
		// break;
		goto IL_01d9;
	}

IL_0147:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_33);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_35;
		L_35 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_33, L_34);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_35, NULL);
		// break;
		goto IL_01d9;
	}

IL_015b:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		float L_38;
		L_38 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_36, L_37);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_38, NULL);
		// break;
		goto IL_01d9;
	}

IL_016f:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_39, L_40);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_41, NULL);
		// break;
		goto IL_01d9;
	}

IL_0183:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_42, L_43);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_44, NULL);
		// break;
		goto IL_01d9;
	}

IL_0197:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_45, L_46);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_47, NULL);
		// break;
		goto IL_01d9;
	}

IL_01ab:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_48, L_49);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_50, NULL);
		// break;
		goto IL_01d9;
	}

IL_01bf:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		bool L_53;
		L_53 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_51, L_52);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_53, NULL);
		// break;
		goto IL_01d9;
	}

IL_01d3:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		NullCheck(L_54);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_54);
	}

IL_01d9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_55);
		String_t* L_57 = L_56;
		V_1 = L_57;
		if (L_57)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/RotationBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisRotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_m3F68ECE0BAE676F5E6553766A1D178CB152E1DB7_gshared (ES3Type_RotationOverLifetimeModule_tE2626EAFE32CA2E60DC5D6DEFDAFF071F3DB63E9* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)((RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var))));
		goto IL_01d9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0088;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0106;
		}
	}
	{
		goto IL_01d3;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_011b;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00dc;
		}
	}
	{
		goto IL_01d3;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00c7;
		}
	}
	{
		goto IL_01d3;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00f1;
		}
	}
	{
		goto IL_01d3;
	}

IL_0088:
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_15)
		{
			goto IL_0130;
		}
	}
	{
		goto IL_01d3;
	}

IL_009d:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_17)
		{
			goto IL_0147;
		}
	}
	{
		goto IL_01d3;
	}

IL_00b2:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_19)
		{
			goto IL_015b;
		}
	}
	{
		goto IL_01d3;
	}

IL_00c7:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_21)
		{
			goto IL_016f;
		}
	}
	{
		goto IL_01d3;
	}

IL_00dc:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_23)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01d3;
	}

IL_00f1:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_25)
		{
			goto IL_0197;
		}
	}
	{
		goto IL_01d3;
	}

IL_0106:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_27)
		{
			goto IL_01ab;
		}
	}
	{
		goto IL_01d3;
	}

IL_011b:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_29)
		{
			goto IL_01bf;
		}
	}
	{
		goto IL_01d3;
	}

IL_0130:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_31 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_30);
		bool L_32;
		L_32 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_30, L_31);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_32, NULL);
		// break;
		goto IL_01d9;
	}

IL_0147:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_33);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_35;
		L_35 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_33, L_34);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_35, NULL);
		// break;
		goto IL_01d9;
	}

IL_015b:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		float L_38;
		L_38 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_36, L_37);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_38, NULL);
		// break;
		goto IL_01d9;
	}

IL_016f:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_39, L_40);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_41, NULL);
		// break;
		goto IL_01d9;
	}

IL_0183:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_42, L_43);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_44, NULL);
		// break;
		goto IL_01d9;
	}

IL_0197:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_45, L_46);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_47, NULL);
		// break;
		goto IL_01d9;
	}

IL_01ab:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_48, L_49);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_50, NULL);
		// break;
		goto IL_01d9;
	}

IL_01bf:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		bool L_53;
		L_53 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_51, L_52);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_53, NULL);
		// break;
		goto IL_01d9;
	}

IL_01d3:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		NullCheck(L_54);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_54);
	}

IL_01d9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_55);
		String_t* L_57 = L_56;
		V_1 = L_57;
		if (L_57)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/RotationOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisRotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_mC5F952F41EA81E6B0CE9FDFAE219F6213BA50847_gshared (ES3Type_RotationOverLifetimeModule_tE2626EAFE32CA2E60DC5D6DEFDAFF071F3DB63E9* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)((RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var))));
		goto IL_01d9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0088;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0106;
		}
	}
	{
		goto IL_01d3;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_011b;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00dc;
		}
	}
	{
		goto IL_01d3;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00c7;
		}
	}
	{
		goto IL_01d3;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00f1;
		}
	}
	{
		goto IL_01d3;
	}

IL_0088:
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_15)
		{
			goto IL_0130;
		}
	}
	{
		goto IL_01d3;
	}

IL_009d:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_17)
		{
			goto IL_0147;
		}
	}
	{
		goto IL_01d3;
	}

IL_00b2:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_19)
		{
			goto IL_015b;
		}
	}
	{
		goto IL_01d3;
	}

IL_00c7:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_21)
		{
			goto IL_016f;
		}
	}
	{
		goto IL_01d3;
	}

IL_00dc:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_23)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01d3;
	}

IL_00f1:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_25)
		{
			goto IL_0197;
		}
	}
	{
		goto IL_01d3;
	}

IL_0106:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_27)
		{
			goto IL_01ab;
		}
	}
	{
		goto IL_01d3;
	}

IL_011b:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_29)
		{
			goto IL_01bf;
		}
	}
	{
		goto IL_01d3;
	}

IL_0130:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_31 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_30);
		bool L_32;
		L_32 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_30, L_31);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_32, NULL);
		// break;
		goto IL_01d9;
	}

IL_0147:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_33);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_35;
		L_35 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_33, L_34);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_35, NULL);
		// break;
		goto IL_01d9;
	}

IL_015b:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		float L_38;
		L_38 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_36, L_37);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_38, NULL);
		// break;
		goto IL_01d9;
	}

IL_016f:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_39, L_40);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_41, NULL);
		// break;
		goto IL_01d9;
	}

IL_0183:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_42, L_43);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_44, NULL);
		// break;
		goto IL_01d9;
	}

IL_0197:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_45, L_46);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_47, NULL);
		// break;
		goto IL_01d9;
	}

IL_01ab:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_48, L_49);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_50, NULL);
		// break;
		goto IL_01d9;
	}

IL_01bf:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		bool L_53;
		L_53 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_51, L_52);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_53, NULL);
		// break;
		goto IL_01d9;
	}

IL_01d3:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		NullCheck(L_54);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_54);
	}

IL_01d9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_55);
		String_t* L_57 = L_56;
		V_1 = L_57;
		if (L_57)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/ShapeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_m030231187D8FFBBE3A9C00C5A7103A61E9CC2919_gshared (ES3Type_RotationOverLifetimeModule_tE2626EAFE32CA2E60DC5D6DEFDAFF071F3DB63E9* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)((RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var))));
		goto IL_01d9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0088;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0106;
		}
	}
	{
		goto IL_01d3;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_011b;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00dc;
		}
	}
	{
		goto IL_01d3;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00c7;
		}
	}
	{
		goto IL_01d3;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00f1;
		}
	}
	{
		goto IL_01d3;
	}

IL_0088:
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_15)
		{
			goto IL_0130;
		}
	}
	{
		goto IL_01d3;
	}

IL_009d:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_17)
		{
			goto IL_0147;
		}
	}
	{
		goto IL_01d3;
	}

IL_00b2:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_19)
		{
			goto IL_015b;
		}
	}
	{
		goto IL_01d3;
	}

IL_00c7:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_21)
		{
			goto IL_016f;
		}
	}
	{
		goto IL_01d3;
	}

IL_00dc:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_23)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01d3;
	}

IL_00f1:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_25)
		{
			goto IL_0197;
		}
	}
	{
		goto IL_01d3;
	}

IL_0106:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_27)
		{
			goto IL_01ab;
		}
	}
	{
		goto IL_01d3;
	}

IL_011b:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_29)
		{
			goto IL_01bf;
		}
	}
	{
		goto IL_01d3;
	}

IL_0130:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_31 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_30);
		bool L_32;
		L_32 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_30, L_31);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_32, NULL);
		// break;
		goto IL_01d9;
	}

IL_0147:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_33);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_35;
		L_35 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_33, L_34);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_35, NULL);
		// break;
		goto IL_01d9;
	}

IL_015b:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		float L_38;
		L_38 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_36, L_37);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_38, NULL);
		// break;
		goto IL_01d9;
	}

IL_016f:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_39, L_40);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_41, NULL);
		// break;
		goto IL_01d9;
	}

IL_0183:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_42, L_43);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_44, NULL);
		// break;
		goto IL_01d9;
	}

IL_0197:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_45, L_46);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_47, NULL);
		// break;
		goto IL_01d9;
	}

IL_01ab:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_48, L_49);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_50, NULL);
		// break;
		goto IL_01d9;
	}

IL_01bf:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		bool L_53;
		L_53 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_51, L_52);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_53, NULL);
		// break;
		goto IL_01d9;
	}

IL_01d3:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		NullCheck(L_54);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_54);
	}

IL_01d9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_55);
		String_t* L_57 = L_56;
		V_1 = L_57;
		if (L_57)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/SizeBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisSizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_m8EB0E5546D01E2A78201A2BA6971F95C4D55AABF_gshared (ES3Type_RotationOverLifetimeModule_tE2626EAFE32CA2E60DC5D6DEFDAFF071F3DB63E9* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)((RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var))));
		goto IL_01d9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0088;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0106;
		}
	}
	{
		goto IL_01d3;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_011b;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00dc;
		}
	}
	{
		goto IL_01d3;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00c7;
		}
	}
	{
		goto IL_01d3;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00f1;
		}
	}
	{
		goto IL_01d3;
	}

IL_0088:
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_15)
		{
			goto IL_0130;
		}
	}
	{
		goto IL_01d3;
	}

IL_009d:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_17)
		{
			goto IL_0147;
		}
	}
	{
		goto IL_01d3;
	}

IL_00b2:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_19)
		{
			goto IL_015b;
		}
	}
	{
		goto IL_01d3;
	}

IL_00c7:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_21)
		{
			goto IL_016f;
		}
	}
	{
		goto IL_01d3;
	}

IL_00dc:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_23)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01d3;
	}

IL_00f1:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_25)
		{
			goto IL_0197;
		}
	}
	{
		goto IL_01d3;
	}

IL_0106:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_27)
		{
			goto IL_01ab;
		}
	}
	{
		goto IL_01d3;
	}

IL_011b:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_29)
		{
			goto IL_01bf;
		}
	}
	{
		goto IL_01d3;
	}

IL_0130:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_31 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_30);
		bool L_32;
		L_32 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_30, L_31);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_32, NULL);
		// break;
		goto IL_01d9;
	}

IL_0147:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_33);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_35;
		L_35 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_33, L_34);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_35, NULL);
		// break;
		goto IL_01d9;
	}

IL_015b:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		float L_38;
		L_38 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_36, L_37);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_38, NULL);
		// break;
		goto IL_01d9;
	}

IL_016f:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_39, L_40);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_41, NULL);
		// break;
		goto IL_01d9;
	}

IL_0183:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_42, L_43);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_44, NULL);
		// break;
		goto IL_01d9;
	}

IL_0197:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_45, L_46);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_47, NULL);
		// break;
		goto IL_01d9;
	}

IL_01ab:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_48, L_49);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_50, NULL);
		// break;
		goto IL_01d9;
	}

IL_01bf:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		bool L_53;
		L_53 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_51, L_52);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_53, NULL);
		// break;
		goto IL_01d9;
	}

IL_01d3:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		NullCheck(L_54);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_54);
	}

IL_01d9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_55);
		String_t* L_57 = L_56;
		V_1 = L_57;
		if (L_57)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_RotationOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/SizeOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisSizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_mB23638E0D3E05A340E73A332635651997FD0B5BC_gshared (ES3Type_RotationOverLifetimeModule_tE2626EAFE32CA2E60DC5D6DEFDAFF071F3DB63E9* __this, ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.RotationOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)((RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var))));
		goto IL_01d9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF7AC71BDDA3ABF133958ADA5E630E718759FFB13(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0056;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0088;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0106;
		}
	}
	{
		goto IL_01d3;
	}

IL_003b:
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_011b;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00dc;
		}
	}
	{
		goto IL_01d3;
	}

IL_0056:
	{
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00c7;
		}
	}
	{
		goto IL_01d3;
	}

IL_0073:
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_00f1;
		}
	}
	{
		goto IL_01d3;
	}

IL_0088:
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_15)
		{
			goto IL_0130;
		}
	}
	{
		goto IL_01d3;
	}

IL_009d:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_17)
		{
			goto IL_0147;
		}
	}
	{
		goto IL_01d3;
	}

IL_00b2:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_19)
		{
			goto IL_015b;
		}
	}
	{
		goto IL_01d3;
	}

IL_00c7:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_21)
		{
			goto IL_016f;
		}
	}
	{
		goto IL_01d3;
	}

IL_00dc:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_23)
		{
			goto IL_0183;
		}
	}
	{
		goto IL_01d3;
	}

IL_00f1:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_25)
		{
			goto IL_0197;
		}
	}
	{
		goto IL_01d3;
	}

IL_0106:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_27)
		{
			goto IL_01ab;
		}
	}
	{
		goto IL_01d3;
	}

IL_011b:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_29)
		{
			goto IL_01bf;
		}
	}
	{
		goto IL_01d3;
	}

IL_0130:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_30 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_31 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_30);
		bool L_32;
		L_32 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_30, L_31);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_32, NULL);
		// break;
		goto IL_01d9;
	}

IL_0147:
	{
		// instance.x = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_33 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_34 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_33);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_35;
		L_35 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_33, L_34);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_35, NULL);
		// break;
		goto IL_01d9;
	}

IL_015b:
	{
		// instance.xMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_36 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_37 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_36);
		float L_38;
		L_38 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_36, L_37);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_38, NULL);
		// break;
		goto IL_01d9;
	}

IL_016f:
	{
		// instance.y = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_39 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_40 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_39);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_39, L_40);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_41, NULL);
		// break;
		goto IL_01d9;
	}

IL_0183:
	{
		// instance.yMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_42 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_43 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		float L_44;
		L_44 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_42, L_43);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_44, NULL);
		// break;
		goto IL_01d9;
	}

IL_0197:
	{
		// instance.z = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_45 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_46 = ((ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t2BDE0B178D986FE11C501047BD0BDC27DF7A3A10_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDABE8BB3B7EA21D113C6EB5B05936FEF90F69F2A_RuntimeMethod_var, L_45, L_46);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_47, NULL);
		// break;
		goto IL_01d9;
	}

IL_01ab:
	{
		// instance.zMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_48 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_49 = ((ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t7FB4228FB3EF55686B0D2FC6B19DC58E43F9C58A_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7B6C83A85CDD52E37E924B4E7290C48C5BBF8E5F_RuntimeMethod_var, L_48, L_49);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_50, NULL);
		// break;
		goto IL_01d9;
	}

IL_01bf:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_51 = ___reader0;
		ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* L_52 = ((ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t28F1AD417C2573984B65BFC0852C2B1603705833_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_51);
		bool L_53;
		L_53 = GenericVirtualFuncInvoker1< bool, ES3Type_tCF24056DBA2AD8FDB9394A9F9A642522F5CCB687* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7323199207A6B8C4BC79B699C5B37822A520B8A_RuntimeMethod_var, L_51, L_52);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_53, NULL);
		// break;
		goto IL_01d9;
	}

IL_01d3:
	{
		// reader.Skip();
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_54 = ___reader0;
		NullCheck(L_54);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_54);
	}

IL_01d9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tFF699315393BC0B08C6E7E9391C41EEA2078EE5A* L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_55);
		String_t* L_57 = L_56;
		V_1 = L_57;
		if (L_57)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
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
