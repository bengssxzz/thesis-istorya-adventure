#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Func`2<UnityEngine.EventSystems.RaycastResult,System.Boolean>
struct Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.RaycastResult>
struct IEnumerable_1_t133C4F6184F4EFFAE7084D293093D6B6CF884215;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// DTT.AreaOfEffectRegions.LineRegionProjector[]
struct LineRegionProjectorU5BU5D_t06EB8A81ADB758B190CEB4100223A2DAA634145B;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// DTT.AreaOfEffectRegions.ArcRegionProjector
struct ArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5;
// DTT.AreaOfEffectRegions.Demo.ArcSettings
struct ArcSettings_tC23AB06EAF151A4B75FC755A45A7B9F7267A4421;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// DTT.AreaOfEffectRegions.CircleRegionProjector
struct CircleRegionProjector_t4620C0C797FE7C92C07CA7D806A32916B91B3B15;
// DTT.AreaOfEffectRegions.Demo.CircleSettings
struct CircleSettings_t95DABBB997ADECE41AF8685385F8D2F1AB75E974;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// DTT.AreaOfEffectRegions.Demo.ConfigurationHidingButton
struct ConfigurationHidingButton_tA942794A707F3331CD60C5F71C040F1F733DE697;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// DTT.AreaOfEffectRegions.LineRegionProjector
struct LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// DTT.AreaOfEffectRegions.Demo.MoveObject
struct MoveObject_t330CBE2729E7A62787EB2088F41C2F2648E00A7A;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.Projector
struct Projector_t18530C57B97A1017348D5B69C9E65ABFCEC2B5F3;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// DTT.AreaOfEffectRegions.ScatterLineRegionProjector
struct ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC;
// DTT.AreaOfEffectRegions.Demo.ScatterLineSettings
struct ScatterLineSettings_t8E4138E4EA614FADB824050BD77459C7CA16A9C7;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// DTT.AreaOfEffectRegions.Demo.SelectionMenuHandler
struct SelectionMenuHandler_t19B59E861F8781E4D153FF7722F864D40D7F38A6;
// DTT.AreaOfEffectRegions.Demo.SettingsHandler
struct SettingsHandler_tB636B5A74BCFB7A3A01608E4CCD0FDFFF4F8CF47;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// DTT.AreaOfEffectRegions.Demo.TerrainHandler
struct TerrainHandler_tA199E733870712DC57B522813E1A32FCACA97D4D;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// DTT.AreaOfEffectRegions.Demo.TextureSelectionUI
struct TextureSelectionUI_t66A687E26FBF9BE0B61CEDD9E5BA64C1977F718D;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// DTT.AreaOfEffectRegions.Demo.TypeSelectionUI
struct TypeSelectionUI_t5D98D5D6804B4340BD6269E48732A97453B86772;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// DTT.AreaOfEffectRegions.Demo.lineSettings
struct lineSettings_t643AAC879365116F3D0C91FAACF037093A063632;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// DTT.AreaOfEffectRegions.Demo.ConfigurationHidingButton/<HideConfigAnimation>d__9
struct U3CHideConfigAnimationU3Ed__9_t8AA44A08E7AA6098FBCC886F275800A4C31AD4FF;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// DTT.AreaOfEffectRegions.Demo.MoveObject/<>c
struct U3CU3Ec_t9F19172EFD5247B66F6D9C412440FAD6D0565EB2;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;

IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8292C421BBB00D7661DC07462822936152BAB446_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProjectorType_t696F3657C2D1DF101BE745F6FE7A6F00BBF44382_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CHideConfigAnimationU3Ed__9_t8AA44A08E7AA6098FBCC886F275800A4C31AD4FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9F19172EFD5247B66F6D9C412440FAD6D0565EB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7;
IL2CPP_EXTERN_C const RuntimeMethod* ArcSettings_UpdateAngle_m74A1DFC09035B962A74F12A1689BFC8D308E209C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArcSettings_UpdateArc_mCD1354D807930D1F6582DEB8F93771E4CB0D92C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArcSettings_UpdateFill_mA630CE0D917DC8A62ECB0A3A20F3714893424B93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArcSettings_UpdateRadius_mA76272BC2CB5513D6048FDCDE205EF3DC6500ED5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CircleSettings_UpdateFill_m4EA368A0C7491B251E484734CED7F85AEC7A17DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CircleSettings_UpdateRadius_m40A4A0397A133A99CE3D0A1C47FA02E277F44C74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfigurationHidingButton_ChangeConfigState_m4991C1646D6C06B1E860646EA04AF4772F7C56D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisRaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_m72DE92C05387759173F7E5F871E6B95A0B531D75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5_mEDE8705D63483A4CAAC934FA9BFB0E494A19BDC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCircleRegionProjector_t4620C0C797FE7C92C07CA7D806A32916B91B3B15_mD48734997407D8FE3765CAFBC47210E4EB4B81E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F_mB54F69C3AEB28A70919086078C9D6E8BCA4BB92C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC_m4330D64899951209694626A43798C696B966079D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScatterLineSettings_AddLine_m38676800395DC8A962D4163A1A75393BC089FF7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScatterLineSettings_RemoveLine_mAC32415240F9D7AE8B69C7DA864018E34D090CC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScatterLineSettings_UpdateArc_m342F1F6B6DD43214C475CFAFB94839A0DBFB78E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScatterLineSettings_UpdateFade_m92D2D1D555D21E591DB6C5C1ABE28F8969F2522B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScatterLineSettings_UpdateFill_m070C84EFBCDEFF513C752E5779DE8FD23C3E51C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScatterLineSettings_UpdateLength_m0624654AB3F3C0D9C62030EE403D181FE3B9981E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScatterLineSettings_UpdateWidth_m79E3CBEDF310BB41604ACEE53C5DC82DBE76D24A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsHandler_UpdateSettings_m307E91A276357AE6502087E4CC6769500D7F6C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextureSelectionUI_U3CAddListenerU3Eb__5_0_mC84934AF22EF9880ACAF713077CCBD18DF6C9D11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextureSelectionUI_U3CAddListenerU3Eb__5_1_m67FCADA9B4DBA5153CF61ADA55653C65F4E0FC70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextureSelectionUI_U3CAddListenerU3Eb__5_2_m28A8C5C564A0DDBF6900DB55A83B78E835B64950_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextureSelectionUI_U3CRemoveListenerU3Eb__6_0_mE8BCEA0C85BAE50BFDA813FC8BA09F62D97F47B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextureSelectionUI_U3CRemoveListenerU3Eb__6_1_m62DB8874468082198EA3A0405EC8E072AA49F65B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextureSelectionUI_U3CRemoveListenerU3Eb__6_2_m5847248F292405D615A2C2966FB2DC2BEC423DA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeSelectionUI_U3CAddListenerU3Eb__6_0_m5B29B5CEB1971300089D4F07E90FCF2961699DF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeSelectionUI_U3CAddListenerU3Eb__6_1_m297A550DEA6E804D50D796C757F14A43E9050B95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeSelectionUI_U3CAddListenerU3Eb__6_2_m4F16849DE52A62A65DC79BC818E463D3403AFB22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeSelectionUI_U3CAddListenerU3Eb__6_3_m576C6E83789DC0C1215D3B0A5B7A698FB29529E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeSelectionUI_U3CRemoveListenerU3Eb__7_0_mFF968D03F77EAE8D1BAFB105232BAF6589DD192F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeSelectionUI_U3CRemoveListenerU3Eb__7_1_m9A74513ACC2AAFD956855B79C3E99CDBA219274E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeSelectionUI_U3CRemoveListenerU3Eb__7_2_m543096FBF55C1E62BDB81A8DA8ECEAE0D17A6545_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeSelectionUI_U3CRemoveListenerU3Eb__7_3_mC83EC2DD9ABBB555179EE8A29B22F48018FEEC0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CHideConfigAnimationU3Ed__9_System_Collections_IEnumerator_Reset_m0B21BC3F4D81470358562C5F5689DE73B8D781A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CIsPointerOverUIElementU3Eb__11_0_m05033E077EECBE9A61EBD4FC97D4CFCBC7638177_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* lineSettings_UpdateAngle_mD1739C22A1BB1CBF4C523475F45B8C41BB337B74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* lineSettings_UpdateFade_mA830B84B5F98E9460EDE5F3833609D704EA62E88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* lineSettings_UpdateFill_m6D5B543DCFB3232E57949C8287202F6B0D10F4DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* lineSettings_UpdateLength_m403EE6B94BD7CD751E8610FC828D80D07FEB9EF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* lineSettings_UpdateWidth_m42DCEAAB5AB8FAEE8DD33D7A0E56DBC55A256A68_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t96125EF1123745DCAFADE3E164B9C342BDCA4EB7 
{
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8292C421BBB00D7661DC07462822936152BAB446_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7* ___s_emptyArray_5;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
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

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// DTT.AreaOfEffectRegions.Demo.ConfigurationHidingButton/<HideConfigAnimation>d__9
struct U3CHideConfigAnimationU3Ed__9_t8AA44A08E7AA6098FBCC886F275800A4C31AD4FF  : public RuntimeObject
{
	// System.Int32 DTT.AreaOfEffectRegions.Demo.ConfigurationHidingButton/<HideConfigAnimation>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DTT.AreaOfEffectRegions.Demo.ConfigurationHidingButton/<HideConfigAnimation>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// DTT.AreaOfEffectRegions.Demo.ConfigurationHidingButton DTT.AreaOfEffectRegions.Demo.ConfigurationHidingButton/<HideConfigAnimation>d__9::<>4__this
	ConfigurationHidingButton_tA942794A707F3331CD60C5F71C040F1F733DE697* ___U3CU3E4__this_2;
};

// DTT.AreaOfEffectRegions.Demo.MoveObject/<>c
struct U3CU3Ec_t9F19172EFD5247B66F6D9C412440FAD6D0565EB2  : public RuntimeObject
{
};

struct U3CU3Ec_t9F19172EFD5247B66F6D9C412440FAD6D0565EB2_StaticFields
{
	// DTT.AreaOfEffectRegions.Demo.MoveObject/<>c DTT.AreaOfEffectRegions.Demo.MoveObject/<>c::<>9
	U3CU3Ec_t9F19172EFD5247B66F6D9C412440FAD6D0565EB2* ___U3CU3E9_0;
	// System.Func`2<UnityEngine.EventSystems.RaycastResult,System.Boolean> DTT.AreaOfEffectRegions.Demo.MoveObject/<>c::<>9__11_0
	Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A* ___U3CU3E9__11_0_1;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
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

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Func`2<UnityEngine.EventSystems.RaycastResult,System.Boolean>
struct Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
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

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
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

// DTT.AreaOfEffectRegions.ArcRegionProjector
struct ArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Projector DTT.AreaOfEffectRegions.ArcRegionProjector::_circleProjector
	Projector_t18530C57B97A1017348D5B69C9E65ABFCEC2B5F3* ____circleProjector_4;
	// UnityEngine.Projector DTT.AreaOfEffectRegions.ArcRegionProjector::_circleDecorationProjector
	Projector_t18530C57B97A1017348D5B69C9E65ABFCEC2B5F3* ____circleDecorationProjector_5;
	// UnityEngine.Projector DTT.AreaOfEffectRegions.ArcRegionProjector::_centerDotProjector
	Projector_t18530C57B97A1017348D5B69C9E65ABFCEC2B5F3* ____centerDotProjector_6;
	// UnityEngine.Projector DTT.AreaOfEffectRegions.ArcRegionProjector::_leftBorderProjector
	Projector_t18530C57B97A1017348D5B69C9E65ABFCEC2B5F3* ____leftBorderProjector_7;
	// UnityEngine.Projector DTT.AreaOfEffectRegions.ArcRegionProjector::_rightBorderProjector
	Projector_t18530C57B97A1017348D5B69C9E65ABFCEC2B5F3* ____rightBorderProjector_8;
	// UnityEngine.Transform DTT.AreaOfEffectRegions.ArcRegionProjector::_leftBorderPivot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____leftBorderPivot_9;
	// UnityEngine.Transform DTT.AreaOfEffectRegions.ArcRegionProjector::_rightBorderPivot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____rightBorderPivot_10;
	// System.Single DTT.AreaOfEffectRegions.ArcRegionProjector::_radius
	float ____radius_11;
	// System.Single DTT.AreaOfEffectRegions.ArcRegionProjector::_angle
	float ____angle_12;
	// System.Single DTT.AreaOfEffectRegions.ArcRegionProjector::_arc
	float ____arc_13;
	// System.Single DTT.AreaOfEffectRegions.ArcRegionProjector::_fillProgress
	float ____fillProgress_14;
	// DTT.AreaOfEffectRegions.Shaders.Origin DTT.AreaOfEffectRegions.ArcRegionProjector::_fillOrigin
	int32_t ____fillOrigin_15;
	// UnityEngine.Color DTT.AreaOfEffectRegions.ArcRegionProjector::_circleBaseColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____circleBaseColor_20;
	// UnityEngine.Color DTT.AreaOfEffectRegions.ArcRegionProjector::_circleFillColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____circleFillColor_21;
	// UnityEngine.Color DTT.AreaOfEffectRegions.ArcRegionProjector::_circleDecoratorBaseColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____circleDecoratorBaseColor_22;
	// UnityEngine.Color DTT.AreaOfEffectRegions.ArcRegionProjector::_circleDecoratorFillColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____circleDecoratorFillColor_23;
	// UnityEngine.Color DTT.AreaOfEffectRegions.ArcRegionProjector::_leftBorderColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____leftBorderColor_24;
	// UnityEngine.Color DTT.AreaOfEffectRegions.ArcRegionProjector::_rightBorderColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____rightBorderColor_25;
	// UnityEngine.Color DTT.AreaOfEffectRegions.ArcRegionProjector::_centerDotColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____centerDotColor_26;
};

struct ArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5_StaticFields
{
	// System.Int32 DTT.AreaOfEffectRegions.ArcRegionProjector::ColorShaderID
	int32_t ___ColorShaderID_27;
	// System.Int32 DTT.AreaOfEffectRegions.ArcRegionProjector::FillColorShaderID
	int32_t ___FillColorShaderID_28;
	// System.Int32 DTT.AreaOfEffectRegions.ArcRegionProjector::FillProgressShaderID
	int32_t ___FillProgressShaderID_29;
	// System.Int32 DTT.AreaOfEffectRegions.ArcRegionProjector::ArcShaderID
	int32_t ___ArcShaderID_30;
	// System.Int32 DTT.AreaOfEffectRegions.ArcRegionProjector::AngleShaderID
	int32_t ___AngleShaderID_31;
	// System.Int32 DTT.AreaOfEffectRegions.ArcRegionProjector::FillDirection
	int32_t ___FillDirection_32;
};

// DTT.AreaOfEffectRegions.Demo.ArcSettings
struct ArcSettings_tC23AB06EAF151A4B75FC755A45A7B9F7267A4421  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Slider DTT.AreaOfEffectRegions.Demo.ArcSettings::_radius
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ____radius_4;
	// UnityEngine.UI.Slider DTT.AreaOfEffectRegions.Demo.ArcSettings::_angle
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ____angle_5;
	// UnityEngine.UI.Slider DTT.AreaOfEffectRegions.Demo.ArcSettings::_arc
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ____arc_6;
	// UnityEngine.UI.Slider DTT.AreaOfEffectRegions.Demo.ArcSettings::_fillProgress
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ____fillProgress_7;
	// DTT.AreaOfEffectRegions.ArcRegionProjector DTT.AreaOfEffectRegions.Demo.ArcSettings::_projector
	ArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5* ____projector_8;
};

// DTT.AreaOfEffectRegions.CircleRegionProjector
struct CircleRegionProjector_t4620C0C797FE7C92C07CA7D806A32916B91B3B15  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Projector DTT.AreaOfEffectRegions.CircleRegionProjector::_circleProjector
	Projector_t18530C57B97A1017348D5B69C9E65ABFCEC2B5F3* ____circleProjector_4;
	// UnityEngine.Projector DTT.AreaOfEffectRegions.CircleRegionProjector::_centerDotProjector
	Projector_t18530C57B97A1017348D5B69C9E65ABFCEC2B5F3* ____centerDotProjector_5;
	// UnityEngine.Transform DTT.AreaOfEffectRegions.CircleRegionProjector::_regionTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____regionTransform_6;
	// UnityEngine.Vector2 DTT.AreaOfEffectRegions.CircleRegionProjector::_offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____offset_7;
	// System.Single DTT.AreaOfEffectRegions.CircleRegionProjector::_radius
	float ____radius_8;
	// System.Single DTT.AreaOfEffectRegions.CircleRegionProjector::_fillProgress
	float ____fillProgress_9;
	// DTT.AreaOfEffectRegions.Shaders.Origin DTT.AreaOfEffectRegions.CircleRegionProjector::_fillOrigin
	int32_t ____fillOrigin_10;
	// UnityEngine.Color DTT.AreaOfEffectRegions.CircleRegionProjector::_circleBaseColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____circleBaseColor_11;
	// UnityEngine.Color DTT.AreaOfEffectRegions.CircleRegionProjector::_circleFillColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____circleFillColor_12;
	// UnityEngine.Color DTT.AreaOfEffectRegions.CircleRegionProjector::_centerDotColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____centerDotColor_13;
};

struct CircleRegionProjector_t4620C0C797FE7C92C07CA7D806A32916B91B3B15_StaticFields
{
	// System.Int32 DTT.AreaOfEffectRegions.CircleRegionProjector::ColorShaderID
	int32_t ___ColorShaderID_14;
	// System.Int32 DTT.AreaOfEffectRegions.CircleRegionProjector::FillColorShaderID
	int32_t ___FillColorShaderID_15;
	// System.Int32 DTT.AreaOfEffectRegions.CircleRegionProjector::FillProgressShaderID
	int32_t ___FillProgressShaderID_16;
	// System.Int32 DTT.AreaOfEffectRegions.CircleRegionProjector::FillDirection
	int32_t ___FillDirection_17;
};

// DTT.AreaOfEffectRegions.Demo.CircleSettings
struct CircleSettings_t95DABBB997ADECE41AF8685385F8D2F1AB75E974  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Slider DTT.AreaOfEffectRegions.Demo.CircleSettings::_radius
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ____radius_4;
	// UnityEngine.UI.Slider DTT.AreaOfEffectRegions.Demo.CircleSettings::_fillProgress
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ____fillProgress_5;
	// DTT.AreaOfEffectRegions.CircleRegionProjector DTT.AreaOfEffectRegions.Demo.CircleSettings::_projector
	CircleRegionProjector_t4620C0C797FE7C92C07CA7D806A32916B91B3B15* ____projector_6;
};

// DTT.AreaOfEffectRegions.Demo.ConfigurationHidingButton
struct ConfigurationHidingButton_tA942794A707F3331CD60C5F71C040F1F733DE697  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject DTT.AreaOfEffectRegions.Demo.ConfigurationHidingButton::_settingsTab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____settingsTab_4;
	// UnityEngine.RectTransform DTT.AreaOfEffectRegions.Demo.ConfigurationHidingButton::_configurationTab
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____configurationTab_5;
	// System.Single DTT.AreaOfEffectRegions.Demo.ConfigurationHidingButton::_topAnchorValue
	float ____topAnchorValue_6;
	// System.Boolean DTT.AreaOfEffectRegions.Demo.ConfigurationHidingButton::_goingUp
	bool ____goingUp_7;
	// UnityEngine.UI.Button DTT.AreaOfEffectRegions.Demo.ConfigurationHidingButton::_arrowButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____arrowButton_8;
};

// DTT.AreaOfEffectRegions.LineRegionProjector
struct LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Projector DTT.AreaOfEffectRegions.LineRegionProjector::_headProjector
	Projector_t18530C57B97A1017348D5B69C9E65ABFCEC2B5F3* ____headProjector_4;
	// UnityEngine.Projector DTT.AreaOfEffectRegions.LineRegionProjector::_bodyProjector
	Projector_t18530C57B97A1017348D5B69C9E65ABFCEC2B5F3* ____bodyProjector_5;
	// System.Single DTT.AreaOfEffectRegions.LineRegionProjector::_fillProgress
	float ____fillProgress_6;
	// DTT.AreaOfEffectRegions.Shaders.Origin DTT.AreaOfEffectRegions.LineRegionProjector::_fillOrigin
	int32_t ____fillOrigin_7;
	// System.Single DTT.AreaOfEffectRegions.LineRegionProjector::_fadeAmount
	float ____fadeAmount_8;
	// System.Single DTT.AreaOfEffectRegions.LineRegionProjector::_angle
	float ____angle_9;
	// System.Single DTT.AreaOfEffectRegions.LineRegionProjector::_length
	float ____length_10;
	// System.Single DTT.AreaOfEffectRegions.LineRegionProjector::_width
	float ____width_11;
	// UnityEngine.Color DTT.AreaOfEffectRegions.LineRegionProjector::_color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____color_14;
	// UnityEngine.Color DTT.AreaOfEffectRegions.LineRegionProjector::_fillColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____fillColor_15;
};

struct LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F_StaticFields
{
	// System.Int32 DTT.AreaOfEffectRegions.LineRegionProjector::ColorShaderID
	int32_t ___ColorShaderID_16;
	// System.Int32 DTT.AreaOfEffectRegions.LineRegionProjector::FillColorShaderID
	int32_t ___FillColorShaderID_17;
	// System.Int32 DTT.AreaOfEffectRegions.LineRegionProjector::FillProgressShaderID
	int32_t ___FillProgressShaderID_18;
	// System.Int32 DTT.AreaOfEffectRegions.LineRegionProjector::FadeAmountShaderID
	int32_t ___FadeAmountShaderID_19;
	// System.Int32 DTT.AreaOfEffectRegions.LineRegionProjector::FillDirection
	int32_t ___FillDirection_20;
};

// DTT.AreaOfEffectRegions.Demo.MoveObject
struct MoveObject_t330CBE2729E7A62787EB2088F41C2F2648E00A7A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.LayerMask DTT.AreaOfEffectRegions.Demo.MoveObject::_terrainLayer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ____terrainLayer_4;
	// UnityEngine.GameObject DTT.AreaOfEffectRegions.Demo.MoveObject::_projector
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____projector_5;
	// UnityEngine.GameObject DTT.AreaOfEffectRegions.Demo.MoveObject::_anchorPoint
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____anchorPoint_6;
	// UnityEngine.Vector3 DTT.AreaOfEffectRegions.Demo.MoveObject::_currentPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____currentPosition_7;
	// UnityEngine.Camera DTT.AreaOfEffectRegions.Demo.MoveObject::_camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____camera_8;
};

// DTT.AreaOfEffectRegions.ScatterLineRegionProjector
struct ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// DTT.AreaOfEffectRegions.LineRegionProjector DTT.AreaOfEffectRegions.ScatterLineRegionProjector::_linePrefab
	LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F* ____linePrefab_4;
	// DTT.AreaOfEffectRegions.LineRegionProjector[] DTT.AreaOfEffectRegions.ScatterLineRegionProjector::_regions
	LineRegionProjectorU5BU5D_t06EB8A81ADB758B190CEB4100223A2DAA634145B* ____regions_5;
	// System.Single DTT.AreaOfEffectRegions.ScatterLineRegionProjector::_fillProgress
	float ____fillProgress_6;
	// DTT.AreaOfEffectRegions.Shaders.Origin DTT.AreaOfEffectRegions.ScatterLineRegionProjector::_fillOrigin
	int32_t ____fillOrigin_7;
	// System.Boolean DTT.AreaOfEffectRegions.ScatterLineRegionProjector::_individual
	bool ____individual_8;
	// System.Single DTT.AreaOfEffectRegions.ScatterLineRegionProjector::_fadeAmount
	float ____fadeAmount_9;
	// System.Single DTT.AreaOfEffectRegions.ScatterLineRegionProjector::_length
	float ____length_10;
	// System.Single DTT.AreaOfEffectRegions.ScatterLineRegionProjector::_width
	float ____width_11;
	// System.Single DTT.AreaOfEffectRegions.ScatterLineRegionProjector::_arc
	float ____arc_12;
	// System.Int32 DTT.AreaOfEffectRegions.ScatterLineRegionProjector::_prevCount
	int32_t ____prevCount_13;
	// UnityEngine.Color DTT.AreaOfEffectRegions.ScatterLineRegionProjector::_lineBaseColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____lineBaseColor_14;
	// UnityEngine.Color DTT.AreaOfEffectRegions.ScatterLineRegionProjector::_lineFillColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____lineFillColor_15;
};

// DTT.AreaOfEffectRegions.Demo.ScatterLineSettings
struct ScatterLineSettings_t8E4138E4EA614FADB824050BD77459C7CA16A9C7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Slider DTT.AreaOfEffectRegions.Demo.ScatterLineSettings::_fillProgress
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ____fillProgress_4;
	// UnityEngine.UI.Slider DTT.AreaOfEffectRegions.Demo.ScatterLineSettings::_fadeAmount
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ____fadeAmount_5;
	// UnityEngine.UI.Slider DTT.AreaOfEffectRegions.Demo.ScatterLineSettings::_arc
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ____arc_6;
	// UnityEngine.UI.Slider DTT.AreaOfEffectRegions.Demo.ScatterLineSettings::_length
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ____length_7;
	// UnityEngine.UI.Slider DTT.AreaOfEffectRegions.Demo.ScatterLineSettings::_width
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ____width_8;
	// UnityEngine.UI.Button DTT.AreaOfEffectRegions.Demo.ScatterLineSettings::_plusButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____plusButton_9;
	// UnityEngine.UI.Button DTT.AreaOfEffectRegions.Demo.ScatterLineSettings::_minusButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____minusButton_10;
	// UnityEngine.UI.Text DTT.AreaOfEffectRegions.Demo.ScatterLineSettings::_countInfo
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____countInfo_11;
	// System.Int32 DTT.AreaOfEffectRegions.Demo.ScatterLineSettings::_count
	int32_t ____count_12;
	// DTT.AreaOfEffectRegions.ScatterLineRegionProjector DTT.AreaOfEffectRegions.Demo.ScatterLineSettings::_projector
	ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* ____projector_13;
};

// DTT.AreaOfEffectRegions.Demo.SelectionMenuHandler
struct SelectionMenuHandler_t19B59E861F8781E4D153FF7722F864D40D7F38A6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// DTT.AreaOfEffectRegions.Demo.MoveObject DTT.AreaOfEffectRegions.Demo.SelectionMenuHandler::_indicator
	MoveObject_t330CBE2729E7A62787EB2088F41C2F2648E00A7A* ____indicator_4;
	// DTT.AreaOfEffectRegions.Demo.SettingsHandler DTT.AreaOfEffectRegions.Demo.SelectionMenuHandler::_settingsHandler
	SettingsHandler_tB636B5A74BCFB7A3A01608E4CCD0FDFFF4F8CF47* ____settingsHandler_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> DTT.AreaOfEffectRegions.Demo.SelectionMenuHandler::_projectors
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____projectors_6;
	// DTT.AreaOfEffectRegions.Demo.ProjectorType DTT.AreaOfEffectRegions.Demo.SelectionMenuHandler::_currentType
	int32_t ____currentType_7;
	// System.Int32 DTT.AreaOfEffectRegions.Demo.SelectionMenuHandler::_currentTexture
	int32_t ____currentTexture_8;
};

// DTT.AreaOfEffectRegions.Demo.SettingsHandler
struct SettingsHandler_tB636B5A74BCFB7A3A01608E4CCD0FDFFF4F8CF47  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// DTT.AreaOfEffectRegions.Demo.ArcSettings DTT.AreaOfEffectRegions.Demo.SettingsHandler::_arcSettings
	ArcSettings_tC23AB06EAF151A4B75FC755A45A7B9F7267A4421* ____arcSettings_4;
	// DTT.AreaOfEffectRegions.Demo.CircleSettings DTT.AreaOfEffectRegions.Demo.SettingsHandler::_circleSettings
	CircleSettings_t95DABBB997ADECE41AF8685385F8D2F1AB75E974* ____circleSettings_5;
	// DTT.AreaOfEffectRegions.Demo.lineSettings DTT.AreaOfEffectRegions.Demo.SettingsHandler::_lineSettings
	lineSettings_t643AAC879365116F3D0C91FAACF037093A063632* ____lineSettings_6;
	// DTT.AreaOfEffectRegions.Demo.ScatterLineSettings DTT.AreaOfEffectRegions.Demo.SettingsHandler::_scatterSettings
	ScatterLineSettings_t8E4138E4EA614FADB824050BD77459C7CA16A9C7* ____scatterSettings_7;
};

// DTT.AreaOfEffectRegions.Demo.TerrainHandler
struct TerrainHandler_tA199E733870712DC57B522813E1A32FCACA97D4D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// DTT.AreaOfEffectRegions.Demo.TextureSelectionUI
struct TextureSelectionUI_t66A687E26FBF9BE0B61CEDD9E5BA64C1977F718D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button DTT.AreaOfEffectRegions.Demo.TextureSelectionUI::_color1
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____color1_4;
	// UnityEngine.UI.Button DTT.AreaOfEffectRegions.Demo.TextureSelectionUI::_color2
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____color2_5;
	// UnityEngine.UI.Button DTT.AreaOfEffectRegions.Demo.TextureSelectionUI::_color3
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____color3_6;
	// DTT.AreaOfEffectRegions.Demo.SelectionMenuHandler DTT.AreaOfEffectRegions.Demo.TextureSelectionUI::_selectionMenu
	SelectionMenuHandler_t19B59E861F8781E4D153FF7722F864D40D7F38A6* ____selectionMenu_7;
};

// DTT.AreaOfEffectRegions.Demo.TypeSelectionUI
struct TypeSelectionUI_t5D98D5D6804B4340BD6269E48732A97453B86772  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button DTT.AreaOfEffectRegions.Demo.TypeSelectionUI::_arcButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____arcButton_4;
	// UnityEngine.UI.Button DTT.AreaOfEffectRegions.Demo.TypeSelectionUI::_circleButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____circleButton_5;
	// UnityEngine.UI.Button DTT.AreaOfEffectRegions.Demo.TypeSelectionUI::_lineButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____lineButton_6;
	// UnityEngine.UI.Button DTT.AreaOfEffectRegions.Demo.TypeSelectionUI::_scatterLineButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____scatterLineButton_7;
	// DTT.AreaOfEffectRegions.Demo.SelectionMenuHandler DTT.AreaOfEffectRegions.Demo.TypeSelectionUI::_selectionMenu
	SelectionMenuHandler_t19B59E861F8781E4D153FF7722F864D40D7F38A6* ____selectionMenu_8;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// DTT.AreaOfEffectRegions.Demo.lineSettings
struct lineSettings_t643AAC879365116F3D0C91FAACF037093A063632  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Slider DTT.AreaOfEffectRegions.Demo.lineSettings::_fillProgress
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ____fillProgress_4;
	// UnityEngine.UI.Slider DTT.AreaOfEffectRegions.Demo.lineSettings::_fadeAmount
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ____fadeAmount_5;
	// UnityEngine.UI.Slider DTT.AreaOfEffectRegions.Demo.lineSettings::_angle
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ____angle_6;
	// UnityEngine.UI.Slider DTT.AreaOfEffectRegions.Demo.lineSettings::_length
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ____length_7;
	// UnityEngine.UI.Slider DTT.AreaOfEffectRegions.Demo.lineSettings::_width
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ____width_8;
	// DTT.AreaOfEffectRegions.LineRegionProjector DTT.AreaOfEffectRegions.Demo.lineSettings::_projector
	LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F* ____projector_9;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<UnityEngine.EventSystems.RaycastResult,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mB85E020AD21C2930C06CC933CED0D8514AAE6506_gshared (Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<UnityEngine.EventSystems.RaycastResult>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_m72DE92C05387759173F7E5F871E6B95A0B531D75_gshared (RuntimeObject* ___source0, Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_gshared (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5_gshared (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_gshared (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9_gshared (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* ___call0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchorMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchorMax_mEF870BE2A134CEB9C2326930A71D3961271297DB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.Demo.ConfigurationHidingButton::AddListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationHidingButton_AddListener_m6ACAB8B90516E0B760E75AC5549E9582B09F062E (ConfigurationHidingButton_tA942794A707F3331CD60C5F71C040F1F733DE697* __this, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::RemoveListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator DTT.AreaOfEffectRegions.Demo.ConfigurationHidingButton::HideConfigAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConfigurationHidingButton_HideConfigAnimation_m3EA8CD931731BD77A421A684D1BB7CEA11D96069 (ConfigurationHidingButton_tA942794A707F3331CD60C5F71C040F1F733DE697* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.Demo.ConfigurationHidingButton/<HideConfigAnimation>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHideConfigAnimationU3Ed__9__ctor_m83243A53E1EB9BE35AA224027FB4D187EB123959 (U3CHideConfigAnimationU3Ed__9_t8AA44A08E7AA6098FBCC886F275800A4C31AD4FF* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis0, float ___angle1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSystem_IsPointerOverGameObject_mC89BFEA46B0DA67F914B9B90356E63BFBE11EB38 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// System.Boolean DTT.AreaOfEffectRegions.Demo.MoveObject::get__isMouseOverGameWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MoveObject_get__isMouseOverGameWindow_m6BB2F5A8C6130DBEE80966759C3F512F8E4633B1 (MoveObject_t330CBE2729E7A62787EB2088F41C2F2648E00A7A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> DTT.AreaOfEffectRegions.Demo.MoveObject::GetEventSystemRaycastResults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8292C421BBB00D7661DC07462822936152BAB446* MoveObject_GetEventSystemRaycastResults_m50629E76704733ACB0526C8DD25AB0C0F821E75B (MoveObject_t330CBE2729E7A62787EB2088F41C2F2648E00A7A* __this, const RuntimeMethod* method) ;
// System.Boolean DTT.AreaOfEffectRegions.Demo.MoveObject::IsPointerOverUIElement(System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MoveObject_IsPointerOverUIElement_m1173F89E0D60D1700C84EF8562CEFC85986B8FEB (MoveObject_t330CBE2729E7A62787EB2088F41C2F2648E00A7A* __this, List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___eventSystemRaycastResults0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m34AC1210E893A9EF969BD2C7104B10BE5B580025 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, float ___maxDistance2, int32_t ___layerMask3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 DTT.AreaOfEffectRegions.Demo.MoveObject::GetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MoveObject_GetPosition_m6B3DB887981FC67BFE42C613B2D34EA2C7E9587A (MoveObject_t330CBE2729E7A62787EB2088F41C2F2648E00A7A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void System.Func`2<UnityEngine.EventSystems.RaycastResult,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mB85E020AD21C2930C06CC933CED0D8514AAE6506 (Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mB85E020AD21C2930C06CC933CED0D8514AAE6506_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean System.Linq.Enumerable::Any<UnityEngine.EventSystems.RaycastResult>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline bool Enumerable_Any_TisRaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_m72DE92C05387759173F7E5F871E6B95A0B531D75 (RuntimeObject* ___source0, Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A* ___predicate1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A*, const RuntimeMethod*))Enumerable_Any_TisRaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_m72DE92C05387759173F7E5F871E6B95A0B531D75_gshared)(___source0, ___predicate1, method);
}
// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventData__ctor_m63837790B68893F0022CCEFEF26ADD55A975F71C (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___eventSystem0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_position(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
inline void List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8292C421BBB00D7661DC07462822936152BAB446*, const RuntimeMethod*))List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_gshared)(__this, method);
}
// System.Void UnityEngine.EventSystems.EventSystem::RaycastAll(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystem_RaycastAll_mE93CC75909438D20D17A0EF98348A064FBFEA528 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___raycastResults1, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.Demo.MoveObject/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAE47A15C4C5EF0C14E1EFBA953EBD088F5B4BEC0 (U3CU3Ec_t9F19172EFD5247B66F6D9C412440FAD6D0565EB2* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::get_gameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* RaycastResult_get_gameObject_m77014B442B9E2D10F2CC3AEEDC07AA95CDE1E2F1_inline (RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139 (String_t* ___layerName0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void DTT.AreaOfEffectRegions.Demo.SelectionMenuHandler::UpdateIndicator(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionMenuHandler_UpdateIndicator_mF1E5BC74041BFCDDDBCF94EC2A755307FB806CD2 (SelectionMenuHandler_t19B59E861F8781E4D153FF7722F864D40D7F38A6* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27 (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void DTT.AreaOfEffectRegions.Demo.MoveObject::ChangeIndicator(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MoveObject_ChangeIndicator_mBFEA9AB87D9FFCBE3C1A38EB5A4E75A08D9476E4_inline (MoveObject_t330CBE2729E7A62787EB2088F41C2F2648E00A7A* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___projector0, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.Demo.SettingsHandler::UpdateSettings(UnityEngine.GameObject,DTT.AreaOfEffectRegions.Demo.ProjectorType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsHandler_UpdateSettings_m307E91A276357AE6502087E4CC6769500D7F6C7C (SettingsHandler_tB636B5A74BCFB7A3A01608E4CCD0FDFFF4F8CF47* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___newindicator0, int32_t ___type1, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.Demo.TextureSelectionUI::AddListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSelectionUI_AddListener_m6F53DD5D2A07E33003A7325B377696FFD6A779D0 (TextureSelectionUI_t66A687E26FBF9BE0B61CEDD9E5BA64C1977F718D* __this, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.Demo.SelectionMenuHandler::UpdateProjectorTexture(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionMenuHandler_UpdateProjectorTexture_m396BD74EBEF78EA9D8077D70DCA1CA21880FCC26 (SelectionMenuHandler_t19B59E861F8781E4D153FF7722F864D40D7F38A6* __this, int32_t ___texture0, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.Demo.TypeSelectionUI::AddListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeSelectionUI_AddListener_m975D41D8E38B41C219B0D720A876ED748C0C51F4 (TypeSelectionUI_t5D98D5D6804B4340BD6269E48732A97453B86772* __this, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.Demo.SelectionMenuHandler::UpdateProjectorType(DTT.AreaOfEffectRegions.Demo.ProjectorType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionMenuHandler_UpdateProjectorType_mB84B2C86D1BFC05DB38C98279B40A9D3E8805363 (SelectionMenuHandler_t19B59E861F8781E4D153FF7722F864D40D7F38A6* __this, int32_t ___type0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Slider::set_minValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_set_minValue_mC4D1F7709276A9A418F9284A04799FF767DEDC4F (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single DTT.AreaOfEffectRegions.ArcRegionProjector::get_Angle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ArcRegionProjector_get_Angle_m2CD99483F16C796C3A3E6C3F6A43FA1E8956FBAE_inline (ArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5* __this, const RuntimeMethod* method) ;
// System.Single DTT.AreaOfEffectRegions.ArcRegionProjector::get_Radius()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ArcRegionProjector_get_Radius_m9FAC34360F4517ECA76473A7A4A6F74F7225A9EE_inline (ArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5* __this, const RuntimeMethod* method) ;
// System.Single DTT.AreaOfEffectRegions.ArcRegionProjector::get_Arc()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ArcRegionProjector_get_Arc_mFC74E7300A7D39918A55E964E680421911A208B9_inline (ArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5* __this, const RuntimeMethod* method) ;
// System.Single DTT.AreaOfEffectRegions.ArcRegionProjector::get_FillProgress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ArcRegionProjector_get_FillProgress_m583AEFF29C0890507524E17A7B0447B3FFCA6AE7_inline (ArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5* __this, const RuntimeMethod* method) ;
// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::get_onValueChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5 (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4*, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*, const RuntimeMethod*))UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9 (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4*, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9_gshared)(__this, ___call0, method);
}
// System.Void DTT.AreaOfEffectRegions.ArcRegionProjector::set_Arc(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArcRegionProjector_set_Arc_m3F4CAC8C70FFCB4680C5E5A603DC6586D164E02E (ArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.ArcRegionProjector::UpdateProjectors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArcRegionProjector_UpdateProjectors_mCF43036B1B46447D6F634BA05E0809362FC7BFB3 (ArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5* __this, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.ArcRegionProjector::set_Radius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArcRegionProjector_set_Radius_m042E060194F37C0C4DDB5230529BE7AAE2EE40F8 (ArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.ArcRegionProjector::set_FillProgress(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArcRegionProjector_set_FillProgress_m53BF379AB28BF08995BA571FADE8B4CB7BB73ED3 (ArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.ArcRegionProjector::set_Angle(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ArcRegionProjector_set_Angle_m140F62FD9F9E707BED1383824F5AC11D84682176_inline (ArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.Demo.ArcSettings::RemoveListerner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArcSettings_RemoveListerner_m68397E386B1681B863446E7C403243B54784DD0E (ArcSettings_tC23AB06EAF151A4B75FC755A45A7B9F7267A4421* __this, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.Demo.ArcSettings::InitializeSlider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArcSettings_InitializeSlider_m8625DE1E2A959A5800E6F55058644C2E209CBEE2 (ArcSettings_tC23AB06EAF151A4B75FC755A45A7B9F7267A4421* __this, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.Demo.ArcSettings::InitializeIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArcSettings_InitializeIndicator_mE31B16EAFE4ED52C076EEECD065DE29500D5DEB3 (ArcSettings_tC23AB06EAF151A4B75FC755A45A7B9F7267A4421* __this, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.Demo.ArcSettings::InitializeValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArcSettings_InitializeValues_m984511D6E5CEB987A66C7174D4246917312C2783 (ArcSettings_tC23AB06EAF151A4B75FC755A45A7B9F7267A4421* __this, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.Demo.ArcSettings::AddListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArcSettings_AddListener_m2DF75A4CDC2BA78C1D60836E6AB1939DC3D47C6F (ArcSettings_tC23AB06EAF151A4B75FC755A45A7B9F7267A4421* __this, const RuntimeMethod* method) ;
// System.Single DTT.AreaOfEffectRegions.CircleRegionProjector::get_Radius()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CircleRegionProjector_get_Radius_mBD8FD056D9EE9260C1FECBD41906DE5031F10B66_inline (CircleRegionProjector_t4620C0C797FE7C92C07CA7D806A32916B91B3B15* __this, const RuntimeMethod* method) ;
// System.Single DTT.AreaOfEffectRegions.CircleRegionProjector::get_FillProgress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CircleRegionProjector_get_FillProgress_m093C884D82AEDD4B68596366CCBBA5ECAE52FDD7_inline (CircleRegionProjector_t4620C0C797FE7C92C07CA7D806A32916B91B3B15* __this, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.CircleRegionProjector::set_Radius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleRegionProjector_set_Radius_m4EA56897FBEB9AA1524244FF790DA664C91AE98C (CircleRegionProjector_t4620C0C797FE7C92C07CA7D806A32916B91B3B15* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.CircleRegionProjector::UpdateProjectors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleRegionProjector_UpdateProjectors_mBDFFA03A52EB1D4A8355467ABA33FBAA69E328E0 (CircleRegionProjector_t4620C0C797FE7C92C07CA7D806A32916B91B3B15* __this, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.CircleRegionProjector::set_FillProgress(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleRegionProjector_set_FillProgress_m67F8593DEA4BC1E786FF7930AF9B9F95CBFC1DD6 (CircleRegionProjector_t4620C0C797FE7C92C07CA7D806A32916B91B3B15* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.Demo.CircleSettings::RemoveListerner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleSettings_RemoveListerner_m22A7E9828C90417D4E2739CA920077A8D7B37011 (CircleSettings_t95DABBB997ADECE41AF8685385F8D2F1AB75E974* __this, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.Demo.CircleSettings::InitializeSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleSettings_InitializeSettings_mFCCDF496A37B93B2E1A5F3D91CF8A9489C8DAF04 (CircleSettings_t95DABBB997ADECE41AF8685385F8D2F1AB75E974* __this, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.Demo.CircleSettings::InitializeIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleSettings_InitializeIndicator_m63875FF1FF1A467C83212B3D4B7AB62E476ABA17 (CircleSettings_t95DABBB997ADECE41AF8685385F8D2F1AB75E974* __this, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.Demo.CircleSettings::InitializeValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleSettings_InitializeValues_mB46228191FEF944BFB78DDF40A0DDCAA305340B5 (CircleSettings_t95DABBB997ADECE41AF8685385F8D2F1AB75E974* __this, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.Demo.CircleSettings::AddListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleSettings_AddListener_m2365E8743E11390E39DC10BAD835E93779EEDE00 (CircleSettings_t95DABBB997ADECE41AF8685385F8D2F1AB75E974* __this, const RuntimeMethod* method) ;
// System.Single DTT.AreaOfEffectRegions.LineRegionProjector::get_FillProgress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float LineRegionProjector_get_FillProgress_m435C08178C41DF92FE78B6EE73DEAC5A2C788CD8_inline (LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F* __this, const RuntimeMethod* method) ;
// System.Single DTT.AreaOfEffectRegions.LineRegionProjector::get_FadeAmount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float LineRegionProjector_get_FadeAmount_mB5FB1748C81DCC914C6386DD42F6B3381D0F8BF1_inline (LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F* __this, const RuntimeMethod* method) ;
// System.Single DTT.AreaOfEffectRegions.LineRegionProjector::get_Angle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float LineRegionProjector_get_Angle_mE80DEDF785AC370BBD5B1D2664927A4DFA7BEDE3_inline (LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F* __this, const RuntimeMethod* method) ;
// System.Single DTT.AreaOfEffectRegions.LineRegionProjector::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float LineRegionProjector_get_Length_mE7F932F4FBEBCE3F5287C391E1E05AFAD94BE410_inline (LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F* __this, const RuntimeMethod* method) ;
// System.Single DTT.AreaOfEffectRegions.LineRegionProjector::get_Width()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float LineRegionProjector_get_Width_m85F88522328A432F1752BFE92F724E7233855354_inline (LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F* __this, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.LineRegionProjector::set_FadeAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRegionProjector_set_FadeAmount_m992F8F8E99BB93D73A0CBC5C5DC96CFCCF515C61 (LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.LineRegionProjector::UpdateProjectors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRegionProjector_UpdateProjectors_m7F245182643DEAFA73C6BA8DA1A9A4E13FC9185D (LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F* __this, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.LineRegionProjector::set_Angle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRegionProjector_set_Angle_m2E42FC6275301C6029B76237CAF604C7477A70CB (LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.LineRegionProjector::set_Length(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRegionProjector_set_Length_mBBDFF7E648BB811A5A5FE9602D73C30323BABD70 (LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.LineRegionProjector::set_Width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRegionProjector_set_Width_m77EADEEA025DB54714E881D377774C38613C5CA3 (LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.LineRegionProjector::set_FillProgress(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRegionProjector_set_FillProgress_mE7A0D789DFC86E55576EF6FC81F46D74B496212B (LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.Demo.lineSettings::RemoveListerner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lineSettings_RemoveListerner_m772AA2F5963B682F38CA317FB13DE03430C82D2E (lineSettings_t643AAC879365116F3D0C91FAACF037093A063632* __this, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.Demo.lineSettings::InitializeSlider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lineSettings_InitializeSlider_m178F104DB954B01C4283D7E6E1ECABE1516B9D97 (lineSettings_t643AAC879365116F3D0C91FAACF037093A063632* __this, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.Demo.lineSettings::InitializeIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lineSettings_InitializeIndicator_m7BEFED027C32162117DB88BA1647263B9D01C58C (lineSettings_t643AAC879365116F3D0C91FAACF037093A063632* __this, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.Demo.lineSettings::InitializeValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lineSettings_InitializeValues_m61699CD07CF44D8767A87BC132C2DB8442086D47 (lineSettings_t643AAC879365116F3D0C91FAACF037093A063632* __this, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.Demo.lineSettings::AddListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lineSettings_AddListener_m36B9876A1B5F602B2C719E92B945E7A076B693F5 (lineSettings_t643AAC879365116F3D0C91FAACF037093A063632* __this, const RuntimeMethod* method) ;
// System.Single DTT.AreaOfEffectRegions.ScatterLineRegionProjector::get_FillProgress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ScatterLineRegionProjector_get_FillProgress_m9ED31825EA0F76D03EB7F5C5DDFD23F6021ED5BA_inline (ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* __this, const RuntimeMethod* method) ;
// System.Single DTT.AreaOfEffectRegions.ScatterLineRegionProjector::get_FadeAmount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ScatterLineRegionProjector_get_FadeAmount_m6F2064CCAD15E2426A1DDB60FA2E599D09C191E8_inline (ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* __this, const RuntimeMethod* method) ;
// System.Single DTT.AreaOfEffectRegions.ScatterLineRegionProjector::get_Arc()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ScatterLineRegionProjector_get_Arc_m06338451DF8D9E57CAB4B912D69E910A1F65951B_inline (ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* __this, const RuntimeMethod* method) ;
// System.Single DTT.AreaOfEffectRegions.ScatterLineRegionProjector::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ScatterLineRegionProjector_get_Length_m7F1B50250A03005B346673E85805F9E32543629F_inline (ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* __this, const RuntimeMethod* method) ;
// System.Single DTT.AreaOfEffectRegions.ScatterLineRegionProjector::get_Width()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ScatterLineRegionProjector_get_Width_mC52DF0BD65096DF3330821263014E754232BAF35_inline (ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* __this, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.ScatterLineRegionProjector::Add(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScatterLineRegionProjector_Add_mBD7C3C0C9AEE99218EE233F526ACD49CA3084965 (ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* __this, int32_t ___amount0, const RuntimeMethod* method) ;
// System.Int32 DTT.AreaOfEffectRegions.ScatterLineRegionProjector::get_NumberOfLines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScatterLineRegionProjector_get_NumberOfLines_mE88EF4754F06C997D708B9DD67545F1844275E10 (ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.ScatterLineRegionProjector::Remove(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScatterLineRegionProjector_Remove_m8193A44CDDF614BC3D6896656C0DA52217B94608 (ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* __this, int32_t ___amount0, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.ScatterLineRegionProjector::set_FadeAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScatterLineRegionProjector_set_FadeAmount_m7CDDE5A905A2F32EF13B074A8B1B3D9F00F24BC8 (ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.ScatterLineRegionProjector::UpdateLines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScatterLineRegionProjector_UpdateLines_m5B3ADAD7A5EF7882090DE64820EEB4ACF2BC4589 (ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* __this, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.ScatterLineRegionProjector::set_Arc(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScatterLineRegionProjector_set_Arc_mCA2E1BAB9EAD918105188AC8C5D3355317893DA5 (ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.ScatterLineRegionProjector::set_Length(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScatterLineRegionProjector_set_Length_m16E58943276E51BE03B7CFC3C15AA05A7ACD13EB (ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.ScatterLineRegionProjector::set_Width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScatterLineRegionProjector_set_Width_m175CDE7B391FCD31E1A0B9975D81A6BAC55324A5 (ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.ScatterLineRegionProjector::set_FillProgress(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScatterLineRegionProjector_set_FillProgress_mC06E1AEE777A99E88B38F5981057BDCCD1B3BAE7 (ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.Demo.ScatterLineSettings::RemoveListerner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScatterLineSettings_RemoveListerner_m3D77326829D9DE79E0B8E10EC3DC0D2D284F31B1 (ScatterLineSettings_t8E4138E4EA614FADB824050BD77459C7CA16A9C7* __this, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.Demo.ScatterLineSettings::InitializeSlider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScatterLineSettings_InitializeSlider_m81101441ABDFD08AFC0824A24F4CB114C9E158C1 (ScatterLineSettings_t8E4138E4EA614FADB824050BD77459C7CA16A9C7* __this, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.Demo.ScatterLineSettings::InitializeIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScatterLineSettings_InitializeIndicator_mC21DE4936FD42605C622759DC9818815A6E0401E (ScatterLineSettings_t8E4138E4EA614FADB824050BD77459C7CA16A9C7* __this, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.Demo.ScatterLineSettings::InitializeValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScatterLineSettings_InitializeValues_m9767E7BA3E6CC0B8AAC2E2CB859FFD9ED98EEE6C (ScatterLineSettings_t8E4138E4EA614FADB824050BD77459C7CA16A9C7* __this, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.Demo.ScatterLineSettings::AddListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScatterLineSettings_AddListener_mD4B487A238CF653C91D1A33FF881653277EDB38D (ScatterLineSettings_t8E4138E4EA614FADB824050BD77459C7CA16A9C7* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<DTT.AreaOfEffectRegions.ArcRegionProjector>()
inline ArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5* GameObject_GetComponent_TisArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5_mEDE8705D63483A4CAAC934FA9BFB0E494A19BDC3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void DTT.AreaOfEffectRegions.Demo.ArcSettings::ChangeIndicator(DTT.AreaOfEffectRegions.ArcRegionProjector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArcSettings_ChangeIndicator_m1C21B6F4377513A3B37821C2E6FCA6AAE447FC47 (ArcSettings_tC23AB06EAF151A4B75FC755A45A7B9F7267A4421* __this, ArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5* ___indic0, const RuntimeMethod* method) ;
// System.Void DTT.AreaOfEffectRegions.Demo.SettingsHandler::ShowSettings(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsHandler_ShowSettings_m285DA3677A18BE9A0D2188615D1721DC6B5646F7 (SettingsHandler_tB636B5A74BCFB7A3A01608E4CCD0FDFFF4F8CF47* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___settings0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<DTT.AreaOfEffectRegions.CircleRegionProjector>()
inline CircleRegionProjector_t4620C0C797FE7C92C07CA7D806A32916B91B3B15* GameObject_GetComponent_TisCircleRegionProjector_t4620C0C797FE7C92C07CA7D806A32916B91B3B15_mD48734997407D8FE3765CAFBC47210E4EB4B81E4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CircleRegionProjector_t4620C0C797FE7C92C07CA7D806A32916B91B3B15* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void DTT.AreaOfEffectRegions.Demo.CircleSettings::ChangeIndicator(DTT.AreaOfEffectRegions.CircleRegionProjector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleSettings_ChangeIndicator_m253B257E8A4FC744B93769B3B6D6A85749D2B68C (CircleSettings_t95DABBB997ADECE41AF8685385F8D2F1AB75E974* __this, CircleRegionProjector_t4620C0C797FE7C92C07CA7D806A32916B91B3B15* ___indic0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<DTT.AreaOfEffectRegions.LineRegionProjector>()
inline LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F* GameObject_GetComponent_TisLineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F_mB54F69C3AEB28A70919086078C9D6E8BCA4BB92C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void DTT.AreaOfEffectRegions.Demo.lineSettings::ChangeIndicator(DTT.AreaOfEffectRegions.LineRegionProjector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lineSettings_ChangeIndicator_m78E5D39E6E10E04D3F5F1C8266A80B7C2566E961 (lineSettings_t643AAC879365116F3D0C91FAACF037093A063632* __this, LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F* ___indic0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<DTT.AreaOfEffectRegions.ScatterLineRegionProjector>()
inline ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* GameObject_GetComponent_TisScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC_m4330D64899951209694626A43798C696B966079D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void DTT.AreaOfEffectRegions.Demo.ScatterLineSettings::ChangeIndicator(DTT.AreaOfEffectRegions.ScatterLineRegionProjector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScatterLineSettings_ChangeIndicator_mB47DE421C0556DB5C89E3567F59658710C0530E9 (ScatterLineSettings_t8E4138E4EA614FADB824050BD77459C7CA16A9C7* __this, ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* ___indic0, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, RuntimeObject* ___actualValue1, String_t* ___message2, const RuntimeMethod* method) ;
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
// System.Void DTT.AreaOfEffectRegions.Demo.ConfigurationHidingButton::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationHidingButton_Awake_m99155BA1F5E1F97362EE9EB2464D1DA132E82327 (ConfigurationHidingButton_tA942794A707F3331CD60C5F71C040F1F733DE697* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _arrowButton = GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0;
		L_0 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(__this, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		__this->____arrowButton_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arrowButton_8), (void*)L_0);
		// _topAnchorValue = _configurationTab.anchorMax.y;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->____configurationTab_5;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = RectTransform_get_anchorMax_mEF870BE2A134CEB9C2326930A71D3961271297DB(L_1, NULL);
		float L_3 = L_2.___y_1;
		__this->____topAnchorValue_6 = L_3;
		// _goingUp = false;
		__this->____goingUp_7 = (bool)0;
		// AddListener();
		ConfigurationHidingButton_AddListener_m6ACAB8B90516E0B760E75AC5549E9582B09F062E(__this, NULL);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.ConfigurationHidingButton::AddListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationHidingButton_AddListener_m6ACAB8B90516E0B760E75AC5549E9582B09F062E (ConfigurationHidingButton_tA942794A707F3331CD60C5F71C040F1F733DE697* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigurationHidingButton_ChangeConfigState_m4991C1646D6C06B1E860646EA04AF4772F7C56D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private void AddListener() => _arrowButton.onClick.AddListener(ChangeConfigState);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->____arrowButton_8;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)ConfigurationHidingButton_ChangeConfigState_m4991C1646D6C06B1E860646EA04AF4772F7C56D3_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_1, L_2, NULL);
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.ConfigurationHidingButton::RemoveListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationHidingButton_RemoveListener_mA3C983909CBB276D0E7E712D44B1B7784CF86945 (ConfigurationHidingButton_tA942794A707F3331CD60C5F71C040F1F733DE697* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigurationHidingButton_ChangeConfigState_m4991C1646D6C06B1E860646EA04AF4772F7C56D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private void RemoveListener() => _arrowButton.onClick.RemoveListener(ChangeConfigState);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->____arrowButton_8;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)ConfigurationHidingButton_ChangeConfigState_m4991C1646D6C06B1E860646EA04AF4772F7C56D3_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_1, L_2, NULL);
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.ConfigurationHidingButton::ChangeConfigState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationHidingButton_ChangeConfigState_m4991C1646D6C06B1E860646EA04AF4772F7C56D3 (ConfigurationHidingButton_tA942794A707F3331CD60C5F71C040F1F733DE697* __this, const RuntimeMethod* method) 
{
	{
		// private void ChangeConfigState() => StartCoroutine(HideConfigAnimation());
		RuntimeObject* L_0;
		L_0 = ConfigurationHidingButton_HideConfigAnimation_m3EA8CD931731BD77A421A684D1BB7CEA11D96069(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		return;
	}
}
// System.Collections.IEnumerator DTT.AreaOfEffectRegions.Demo.ConfigurationHidingButton::HideConfigAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConfigurationHidingButton_HideConfigAnimation_m3EA8CD931731BD77A421A684D1BB7CEA11D96069 (ConfigurationHidingButton_tA942794A707F3331CD60C5F71C040F1F733DE697* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CHideConfigAnimationU3Ed__9_t8AA44A08E7AA6098FBCC886F275800A4C31AD4FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CHideConfigAnimationU3Ed__9_t8AA44A08E7AA6098FBCC886F275800A4C31AD4FF* L_0 = (U3CHideConfigAnimationU3Ed__9_t8AA44A08E7AA6098FBCC886F275800A4C31AD4FF*)il2cpp_codegen_object_new(U3CHideConfigAnimationU3Ed__9_t8AA44A08E7AA6098FBCC886F275800A4C31AD4FF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CHideConfigAnimationU3Ed__9__ctor_m83243A53E1EB9BE35AA224027FB4D187EB123959(L_0, 0, NULL);
		U3CHideConfigAnimationU3Ed__9_t8AA44A08E7AA6098FBCC886F275800A4C31AD4FF* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.ConfigurationHidingButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationHidingButton__ctor_m5C4BFACA50F251E21A2C97F82EFCAEFA97399521 (ConfigurationHidingButton_tA942794A707F3331CD60C5F71C040F1F733DE697* __this, const RuntimeMethod* method) 
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
// System.Void DTT.AreaOfEffectRegions.Demo.ConfigurationHidingButton/<HideConfigAnimation>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHideConfigAnimationU3Ed__9__ctor_m83243A53E1EB9BE35AA224027FB4D187EB123959 (U3CHideConfigAnimationU3Ed__9_t8AA44A08E7AA6098FBCC886F275800A4C31AD4FF* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.ConfigurationHidingButton/<HideConfigAnimation>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHideConfigAnimationU3Ed__9_System_IDisposable_Dispose_m409496112C4BEC00893D2637D9452D240AC763E7 (U3CHideConfigAnimationU3Ed__9_t8AA44A08E7AA6098FBCC886F275800A4C31AD4FF* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean DTT.AreaOfEffectRegions.Demo.ConfigurationHidingButton/<HideConfigAnimation>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CHideConfigAnimationU3Ed__9_MoveNext_m01F657CAC044C0A58AC9BA5C0DF926E3E20E6B20 (U3CHideConfigAnimationU3Ed__9_t8AA44A08E7AA6098FBCC886F275800A4C31AD4FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ConfigurationHidingButton_tA942794A707F3331CD60C5F71C040F1F733DE697* V_1 = NULL;
	float G_B6_0 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B6_1;
	memset((&G_B6_1), 0, sizeof(G_B6_1));
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B6_2 = NULL;
	float G_B5_0 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B5_1;
	memset((&G_B5_1), 0, sizeof(G_B5_1));
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B5_2 = NULL;
	float G_B7_0 = 0.0f;
	float G_B7_1 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B7_2;
	memset((&G_B7_2), 0, sizeof(G_B7_2));
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B7_3 = NULL;
	float G_B12_0 = 0.0f;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B12_1 = NULL;
	float G_B11_0 = 0.0f;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B11_1 = NULL;
	float G_B13_0 = 0.0f;
	float G_B13_1 = 0.0f;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B13_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ConfigurationHidingButton_tA942794A707F3331CD60C5F71C040F1F733DE697* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_006d;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0074;
	}

IL_0020:
	{
		// _configurationTab.anchorMax += new Vector2(0, (_goingUp) ? 0.1f : -0.1f);
		ConfigurationHidingButton_tA942794A707F3331CD60C5F71C040F1F733DE697* L_4 = V_1;
		NullCheck(L_4);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = L_4->____configurationTab_5;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = L_5;
		NullCheck(L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = RectTransform_get_anchorMax_mEF870BE2A134CEB9C2326930A71D3961271297DB(L_6, NULL);
		ConfigurationHidingButton_tA942794A707F3331CD60C5F71C040F1F733DE697* L_8 = V_1;
		NullCheck(L_8);
		bool L_9 = L_8->____goingUp_7;
		G_B5_0 = (0.0f);
		G_B5_1 = L_7;
		G_B5_2 = L_6;
		if (L_9)
		{
			G_B6_0 = (0.0f);
			G_B6_1 = L_7;
			G_B6_2 = L_6;
			goto IL_0040;
		}
	}
	{
		G_B7_0 = (-0.100000001f);
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		G_B7_3 = G_B5_2;
		goto IL_0045;
	}

IL_0040:
	{
		G_B7_0 = (0.100000001f);
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
		G_B7_3 = G_B6_2;
	}

IL_0045:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_10), G_B7_1, G_B7_0, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(G_B7_2, L_10, NULL);
		NullCheck(G_B7_3);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(G_B7_3, L_11, NULL);
		// yield return new WaitForSeconds(0.01f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_12 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_12, (0.00999999978f), NULL);
		__this->___U3CU3E2__current_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_12);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_006d:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0074:
	{
		// while (_configurationTab.anchorMax.y > 0)
		ConfigurationHidingButton_tA942794A707F3331CD60C5F71C040F1F733DE697* L_13 = V_1;
		NullCheck(L_13);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14 = L_13->____configurationTab_5;
		NullCheck(L_14);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = RectTransform_get_anchorMax_mEF870BE2A134CEB9C2326930A71D3961271297DB(L_14, NULL);
		float L_16 = L_15.___y_1;
		if ((((float)L_16) > ((float)(0.0f))))
		{
			goto IL_0020;
		}
	}
	{
		// _configurationTab.anchorMax = new Vector2(_configurationTab.anchorMax.x, (_goingUp) ? _topAnchorValue : 0f);
		ConfigurationHidingButton_tA942794A707F3331CD60C5F71C040F1F733DE697* L_17 = V_1;
		NullCheck(L_17);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_18 = L_17->____configurationTab_5;
		ConfigurationHidingButton_tA942794A707F3331CD60C5F71C040F1F733DE697* L_19 = V_1;
		NullCheck(L_19);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_20 = L_19->____configurationTab_5;
		NullCheck(L_20);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = RectTransform_get_anchorMax_mEF870BE2A134CEB9C2326930A71D3961271297DB(L_20, NULL);
		float L_22 = L_21.___x_0;
		ConfigurationHidingButton_tA942794A707F3331CD60C5F71C040F1F733DE697* L_23 = V_1;
		NullCheck(L_23);
		bool L_24 = L_23->____goingUp_7;
		G_B11_0 = L_22;
		G_B11_1 = L_18;
		if (L_24)
		{
			G_B12_0 = L_22;
			G_B12_1 = L_18;
			goto IL_00b0;
		}
	}
	{
		G_B13_0 = (0.0f);
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		goto IL_00b6;
	}

IL_00b0:
	{
		ConfigurationHidingButton_tA942794A707F3331CD60C5F71C040F1F733DE697* L_25 = V_1;
		NullCheck(L_25);
		float L_26 = L_25->____topAnchorValue_6;
		G_B13_0 = L_26;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
	}

IL_00b6:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_27), G_B13_1, G_B13_0, /*hidden argument*/NULL);
		NullCheck(G_B13_2);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(G_B13_2, L_27, NULL);
		// RectTransform trans = (RectTransform) gameObject.transform;
		ConfigurationHidingButton_tA942794A707F3331CD60C5F71C040F1F733DE697* L_28 = V_1;
		NullCheck(L_28);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_28, NULL);
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_29, NULL);
		// trans.Rotate(Vector3.forward, 180);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		NullCheck(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_30, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_30, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), L_31, (180.0f), NULL);
		// _settingsTab.SetActive(!_settingsTab.activeInHierarchy);
		ConfigurationHidingButton_tA942794A707F3331CD60C5F71C040F1F733DE697* L_32 = V_1;
		NullCheck(L_32);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = L_32->____settingsTab_4;
		ConfigurationHidingButton_tA942794A707F3331CD60C5F71C040F1F733DE697* L_34 = V_1;
		NullCheck(L_34);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = L_34->____settingsTab_4;
		NullCheck(L_35);
		bool L_36;
		L_36 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_35, NULL);
		NullCheck(L_33);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_33, (bool)((((int32_t)L_36) == ((int32_t)0))? 1 : 0), NULL);
		// _goingUp = !_goingUp;
		ConfigurationHidingButton_tA942794A707F3331CD60C5F71C040F1F733DE697* L_37 = V_1;
		ConfigurationHidingButton_tA942794A707F3331CD60C5F71C040F1F733DE697* L_38 = V_1;
		NullCheck(L_38);
		bool L_39 = L_38->____goingUp_7;
		NullCheck(L_37);
		L_37->____goingUp_7 = (bool)((((int32_t)L_39) == ((int32_t)0))? 1 : 0);
		// }
		return (bool)0;
	}
}
// System.Object DTT.AreaOfEffectRegions.Demo.ConfigurationHidingButton/<HideConfigAnimation>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CHideConfigAnimationU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB66F74513C64490360A95E594875A0A558BF782B (U3CHideConfigAnimationU3Ed__9_t8AA44A08E7AA6098FBCC886F275800A4C31AD4FF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.ConfigurationHidingButton/<HideConfigAnimation>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHideConfigAnimationU3Ed__9_System_Collections_IEnumerator_Reset_m0B21BC3F4D81470358562C5F5689DE73B8D781A9 (U3CHideConfigAnimationU3Ed__9_t8AA44A08E7AA6098FBCC886F275800A4C31AD4FF* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CHideConfigAnimationU3Ed__9_System_Collections_IEnumerator_Reset_m0B21BC3F4D81470358562C5F5689DE73B8D781A9_RuntimeMethod_var)));
	}
}
// System.Object DTT.AreaOfEffectRegions.Demo.ConfigurationHidingButton/<HideConfigAnimation>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CHideConfigAnimationU3Ed__9_System_Collections_IEnumerator_get_Current_m824C74C97E7BC1E25063C89CEC5628CA821700DD (U3CHideConfigAnimationU3Ed__9_t8AA44A08E7AA6098FBCC886F275800A4C31AD4FF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Boolean DTT.AreaOfEffectRegions.Demo.MoveObject::get__isMouseOverGameWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MoveObject_get__isMouseOverGameWindow_m6BB2F5A8C6130DBEE80966759C3F512F8E4633B1 (MoveObject_t330CBE2729E7A62787EB2088F41C2F2648E00A7A* __this, const RuntimeMethod* method) 
{
	{
		// private bool _isMouseOverGameWindow => !(0 > Input.mousePosition.x ||
		//                                         0 > Input.mousePosition.y ||
		//                                         Screen.width < Input.mousePosition.x ||
		//                                         Screen.height < Input.mousePosition.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		float L_1 = L_0.___x_2;
		if ((((float)(0.0f)) > ((float)L_1)))
		{
			goto IL_004a;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		float L_3 = L_2.___y_3;
		if ((((float)(0.0f)) > ((float)L_3)))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_4;
		L_4 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		float L_6 = L_5.___x_2;
		if ((((float)((float)L_4)) < ((float)L_6)))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_7;
		L_7 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		float L_9 = L_8.___y_3;
		return (bool)((((int32_t)((((float)((float)L_7)) < ((float)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_004a:
	{
		return (bool)0;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.MoveObject::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveObject_Awake_m20BB58F8415470B1AF23D2B4C1BAEBC7BEB56FB8 (MoveObject_t330CBE2729E7A62787EB2088F41C2F2648E00A7A* __this, const RuntimeMethod* method) 
{
	{
		// private void Awake() => _camera = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		__this->____camera_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____camera_8), (void*)L_0);
		return;
	}
}
// UnityEngine.Vector3 DTT.AreaOfEffectRegions.Demo.MoveObject::GetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MoveObject_GetPosition_m6B3DB887981FC67BFE42C613B2D34EA2C7E9587A (MoveObject_t330CBE2729E7A62787EB2088F41C2F2648E00A7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_1;
	memset((&V_1), 0, sizeof(V_1));
	MoveObject_t330CBE2729E7A62787EB2088F41C2F2648E00A7A* G_B6_0 = NULL;
	MoveObject_t330CBE2729E7A62787EB2088F41C2F2648E00A7A* G_B5_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	MoveObject_t330CBE2729E7A62787EB2088F41C2F2648E00A7A* G_B7_1 = NULL;
	{
		// if (EventSystem.current.IsPointerOverGameObject() || !_isMouseOverGameWindow || IsPointerOverUIElement(GetEventSystemRaycastResults()))
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = EventSystem_IsPointerOverGameObject_mC89BFEA46B0DA67F914B9B90356E63BFBE11EB38(L_0, NULL);
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		bool L_2;
		L_2 = MoveObject_get__isMouseOverGameWindow_m6BB2F5A8C6130DBEE80966759C3F512F8E4633B1(__this, NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_3;
		L_3 = MoveObject_GetEventSystemRaycastResults_m50629E76704733ACB0526C8DD25AB0C0F821E75B(__this, NULL);
		bool L_4;
		L_4 = MoveObject_IsPointerOverUIElement_m1173F89E0D60D1700C84EF8562CEFC85986B8FEB(__this, L_3, NULL);
		if (!L_4)
		{
			goto IL_0033;
		}
	}

IL_0022:
	{
		// return _anchorPoint.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->____anchorPoint_6;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		return L_7;
	}

IL_0033:
	{
		// Ray ray = _camera.ScreenPointToRay(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8 = __this->____camera_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_8);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_10;
		L_10 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_8, L_9, NULL);
		V_1 = L_10;
		// _currentPosition = Physics.Raycast(ray, out hit,Mathf.Infinity,_terrainLayer) ? hit.point+new Vector3(0,50,0) : new Vector3(0, 50, 0);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_11 = V_1;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_12 = __this->____terrainLayer_4;
		int32_t L_13;
		L_13 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_12, NULL);
		bool L_14;
		L_14 = Physics_Raycast_m34AC1210E893A9EF969BD2C7104B10BE5B580025(L_11, (&V_0), (std::numeric_limits<float>::infinity()), L_13, NULL);
		G_B5_0 = __this;
		if (L_14)
		{
			G_B6_0 = __this;
			goto IL_0075;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), (0.0f), (50.0f), (0.0f), /*hidden argument*/NULL);
		G_B7_0 = L_15;
		G_B7_1 = G_B5_0;
		goto IL_0095;
	}

IL_0075:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), (0.0f), (50.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_16, L_17, NULL);
		G_B7_0 = L_18;
		G_B7_1 = G_B6_0;
	}

IL_0095:
	{
		NullCheck(G_B7_1);
		G_B7_1->____currentPosition_7 = G_B7_0;
		// return _currentPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = __this->____currentPosition_7;
		return L_19;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.MoveObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveObject_Update_mA982CFE866A4F06581F59372C1B1FB03D6F15ABC (MoveObject_t330CBE2729E7A62787EB2088F41C2F2648E00A7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_projector)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____projector_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// _projector.transform.position = GetPosition();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->____projector_5;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = MoveObject_GetPosition_m6B3DB887981FC67BFE42C613B2D34EA2C7E9587A(__this, NULL);
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.MoveObject::ChangeIndicator(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveObject_ChangeIndicator_mBFEA9AB87D9FFCBE3C1A38EB5A4E75A08D9476E4 (MoveObject_t330CBE2729E7A62787EB2088F41C2F2648E00A7A* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___projector0, const RuntimeMethod* method) 
{
	{
		// public void ChangeIndicator(GameObject projector) => _projector = projector;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___projector0;
		__this->____projector_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____projector_5), (void*)L_0);
		return;
	}
}
// System.Boolean DTT.AreaOfEffectRegions.Demo.MoveObject::IsPointerOverUIElement(System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MoveObject_IsPointerOverUIElement_m1173F89E0D60D1700C84EF8562CEFC85986B8FEB (MoveObject_t330CBE2729E7A62787EB2088F41C2F2648E00A7A* __this, List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___eventSystemRaycastResults0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisRaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_m72DE92C05387759173F7E5F871E6B95A0B531D75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CIsPointerOverUIElementU3Eb__11_0_m05033E077EECBE9A61EBD4FC97D4CFCBC7638177_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9F19172EFD5247B66F6D9C412440FAD6D0565EB2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A* G_B2_0 = NULL;
	List_1_t8292C421BBB00D7661DC07462822936152BAB446* G_B2_1 = NULL;
	Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A* G_B1_0 = NULL;
	List_1_t8292C421BBB00D7661DC07462822936152BAB446* G_B1_1 = NULL;
	{
		// private bool IsPointerOverUIElement(List<RaycastResult> eventSystemRaycastResults) => eventSystemRaycastResults.Any(curRaycastResult => curRaycastResult.gameObject.layer == LayerMask.NameToLayer("UI"));
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_0 = ___eventSystemRaycastResults0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9F19172EFD5247B66F6D9C412440FAD6D0565EB2_il2cpp_TypeInfo_var);
		Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A* L_1 = ((U3CU3Ec_t9F19172EFD5247B66F6D9C412440FAD6D0565EB2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9F19172EFD5247B66F6D9C412440FAD6D0565EB2_il2cpp_TypeInfo_var))->___U3CU3E9__11_0_1;
		Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9F19172EFD5247B66F6D9C412440FAD6D0565EB2_il2cpp_TypeInfo_var);
		U3CU3Ec_t9F19172EFD5247B66F6D9C412440FAD6D0565EB2* L_3 = ((U3CU3Ec_t9F19172EFD5247B66F6D9C412440FAD6D0565EB2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9F19172EFD5247B66F6D9C412440FAD6D0565EB2_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A* L_4 = (Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A*)il2cpp_codegen_object_new(Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_mB85E020AD21C2930C06CC933CED0D8514AAE6506(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CIsPointerOverUIElementU3Eb__11_0_m05033E077EECBE9A61EBD4FC97D4CFCBC7638177_RuntimeMethod_var), NULL);
		Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A* L_5 = L_4;
		((U3CU3Ec_t9F19172EFD5247B66F6D9C412440FAD6D0565EB2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9F19172EFD5247B66F6D9C412440FAD6D0565EB2_il2cpp_TypeInfo_var))->___U3CU3E9__11_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9F19172EFD5247B66F6D9C412440FAD6D0565EB2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9F19172EFD5247B66F6D9C412440FAD6D0565EB2_il2cpp_TypeInfo_var))->___U3CU3E9__11_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		bool L_6;
		L_6 = Enumerable_Any_TisRaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_m72DE92C05387759173F7E5F871E6B95A0B531D75(G_B2_1, G_B2_0, Enumerable_Any_TisRaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_m72DE92C05387759173F7E5F871E6B95A0B531D75_RuntimeMethod_var);
		return L_6;
	}
}
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> DTT.AreaOfEffectRegions.Demo.MoveObject::GetEventSystemRaycastResults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8292C421BBB00D7661DC07462822936152BAB446* MoveObject_GetEventSystemRaycastResults_m50629E76704733ACB0526C8DD25AB0C0F821E75B (MoveObject_t330CBE2729E7A62787EB2088F41C2F2648E00A7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8292C421BBB00D7661DC07462822936152BAB446_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* V_0 = NULL;
	List_1_t8292C421BBB00D7661DC07462822936152BAB446* V_1 = NULL;
	{
		// PointerEventData eventData = new PointerEventData(EventSystem.current);
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)il2cpp_codegen_object_new(PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		PointerEventData__ctor_m63837790B68893F0022CCEFEF26ADD55A975F71C(L_1, L_0, NULL);
		V_0 = L_1;
		// eventData.position = Input.mousePosition;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_3, NULL);
		NullCheck(L_2);
		PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline(L_2, L_4, NULL);
		// List<RaycastResult> raysastResults = new List<RaycastResult>();
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_5 = (List_1_t8292C421BBB00D7661DC07462822936152BAB446*)il2cpp_codegen_object_new(List_1_t8292C421BBB00D7661DC07462822936152BAB446_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B(L_5, List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_RuntimeMethod_var);
		V_1 = L_5;
		// EventSystem.current.RaycastAll(eventData, raysastResults);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_6;
		L_6 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_7 = V_0;
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_8 = V_1;
		NullCheck(L_6);
		EventSystem_RaycastAll_mE93CC75909438D20D17A0EF98348A064FBFEA528(L_6, L_7, L_8, NULL);
		// return raysastResults;
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_9 = V_1;
		return L_9;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.MoveObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveObject__ctor_m868B883399ADFAEEBA8ECB6B61398B59BC212ED4 (MoveObject_t330CBE2729E7A62787EB2088F41C2F2648E00A7A* __this, const RuntimeMethod* method) 
{
	{
		// private Vector3 _currentPosition = new Vector3(0,0,0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->____currentPosition_7 = L_0;
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
// System.Void DTT.AreaOfEffectRegions.Demo.MoveObject/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA7AAA25ED6DD2986467DF88012A36236FE3DF199 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9F19172EFD5247B66F6D9C412440FAD6D0565EB2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t9F19172EFD5247B66F6D9C412440FAD6D0565EB2* L_0 = (U3CU3Ec_t9F19172EFD5247B66F6D9C412440FAD6D0565EB2*)il2cpp_codegen_object_new(U3CU3Ec_t9F19172EFD5247B66F6D9C412440FAD6D0565EB2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mAE47A15C4C5EF0C14E1EFBA953EBD088F5B4BEC0(L_0, NULL);
		((U3CU3Ec_t9F19172EFD5247B66F6D9C412440FAD6D0565EB2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9F19172EFD5247B66F6D9C412440FAD6D0565EB2_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9F19172EFD5247B66F6D9C412440FAD6D0565EB2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9F19172EFD5247B66F6D9C412440FAD6D0565EB2_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.MoveObject/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAE47A15C4C5EF0C14E1EFBA953EBD088F5B4BEC0 (U3CU3Ec_t9F19172EFD5247B66F6D9C412440FAD6D0565EB2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean DTT.AreaOfEffectRegions.Demo.MoveObject/<>c::<IsPointerOverUIElement>b__11_0(UnityEngine.EventSystems.RaycastResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CIsPointerOverUIElementU3Eb__11_0_m05033E077EECBE9A61EBD4FC97D4CFCBC7638177 (U3CU3Ec_t9F19172EFD5247B66F6D9C412440FAD6D0565EB2* __this, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___curRaycastResult0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool IsPointerOverUIElement(List<RaycastResult> eventSystemRaycastResults) => eventSystemRaycastResults.Any(curRaycastResult => curRaycastResult.gameObject.layer == LayerMask.NameToLayer("UI"));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = RaycastResult_get_gameObject_m77014B442B9E2D10F2CC3AEEDC07AA95CDE1E2F1_inline((&___curRaycastResult0), NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_0, NULL);
		int32_t L_2;
		L_2 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
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
// System.Void DTT.AreaOfEffectRegions.Demo.SelectionMenuHandler::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionMenuHandler_Awake_mDDB9694319B2AEA5AFBA0CF0A130EFE99AEAF33D (SelectionMenuHandler_t19B59E861F8781E4D153FF7722F864D40D7F38A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// _projectors = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->____projectors_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____projectors_6), (void*)L_0);
		// foreach (Transform child in _indicator.transform)
		MoveObject_t330CBE2729E7A62787EB2088F41C2F2648E00A7A* L_1 = __this->____indicator_4;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_2, NULL);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_2;
					if (!L_5)
					{
						goto IL_0055;
					}
				}
				{
					RuntimeObject* L_6 = V_2;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0055:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003b_1;
			}

IL_001e_1:
			{
				// foreach (Transform child in _indicator.transform)
				RuntimeObject* L_7 = V_0;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_1 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_8, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// _projectors.Add(child.gameObject);
				List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_9 = __this->____projectors_6;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = V_1;
				NullCheck(L_10);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
				L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
				NullCheck(L_9);
				List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_9, L_11, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
			}

IL_003b_1:
			{
				// foreach (Transform child in _indicator.transform)
				RuntimeObject* L_12 = V_0;
				NullCheck(L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_12);
				if (L_13)
				{
					goto IL_001e_1;
				}
			}
			{
				goto IL_0056;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0056:
	{
		// UpdateIndicator(0);
		SelectionMenuHandler_UpdateIndicator_mF1E5BC74041BFCDDDBCF94EC2A755307FB806CD2(__this, 0, NULL);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.SelectionMenuHandler::UpdateIndicator(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionMenuHandler_UpdateIndicator_mF1E5BC74041BFCDDDBCF94EC2A755307FB806CD2 (SelectionMenuHandler_t19B59E861F8781E4D153FF7722F864D40D7F38A6* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (GameObject projector in _projectors)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->____projectors_6;
		NullCheck(L_0);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_1;
		L_1 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_0, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0026:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001b_1;
			}

IL_000e_1:
			{
				// foreach (GameObject projector in _projectors)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
				L_2 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				// projector.SetActive(false);
				NullCheck(L_2);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
			}

IL_001b_1:
			{
				// foreach (GameObject projector in _projectors)
				bool L_3;
				L_3 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0034;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0034:
	{
		// _projectors[index].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->____projectors_6;
		int32_t L_5 = ___index0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_4, L_5, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// _indicator.ChangeIndicator(_projectors[index]);
		MoveObject_t330CBE2729E7A62787EB2088F41C2F2648E00A7A* L_7 = __this->____indicator_4;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_8 = __this->____projectors_6;
		int32_t L_9 = ___index0;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_8, L_9, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_7);
		MoveObject_ChangeIndicator_mBFEA9AB87D9FFCBE3C1A38EB5A4E75A08D9476E4_inline(L_7, L_10, NULL);
		// _settingsHandler.UpdateSettings(_projectors[index], _currentType);
		SettingsHandler_tB636B5A74BCFB7A3A01608E4CCD0FDFFF4F8CF47* L_11 = __this->____settingsHandler_5;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_12 = __this->____projectors_6;
		int32_t L_13 = ___index0;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_12, L_13, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		int32_t L_15 = __this->____currentType_7;
		NullCheck(L_11);
		SettingsHandler_UpdateSettings_m307E91A276357AE6502087E4CC6769500D7F6C7C(L_11, L_14, L_15, NULL);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.SelectionMenuHandler::UpdateProjectorType(DTT.AreaOfEffectRegions.Demo.ProjectorType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionMenuHandler_UpdateProjectorType_mB84B2C86D1BFC05DB38C98279B40A9D3E8805363 (SelectionMenuHandler_t19B59E861F8781E4D153FF7722F864D40D7F38A6* __this, int32_t ___type0, const RuntimeMethod* method) 
{
	{
		// _currentType = type;
		int32_t L_0 = ___type0;
		__this->____currentType_7 = L_0;
		// UpdateIndicator(((int)_currentType * 3) + _currentTexture);
		int32_t L_1 = __this->____currentType_7;
		int32_t L_2 = __this->____currentTexture_8;
		SelectionMenuHandler_UpdateIndicator_mF1E5BC74041BFCDDDBCF94EC2A755307FB806CD2(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_1, 3)), L_2)), NULL);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.SelectionMenuHandler::UpdateProjectorTexture(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionMenuHandler_UpdateProjectorTexture_m396BD74EBEF78EA9D8077D70DCA1CA21880FCC26 (SelectionMenuHandler_t19B59E861F8781E4D153FF7722F864D40D7F38A6* __this, int32_t ___texture0, const RuntimeMethod* method) 
{
	{
		// _currentTexture = texture;
		int32_t L_0 = ___texture0;
		__this->____currentTexture_8 = L_0;
		// UpdateIndicator(((int)_currentType * 3) + _currentTexture);
		int32_t L_1 = __this->____currentType_7;
		int32_t L_2 = __this->____currentTexture_8;
		SelectionMenuHandler_UpdateIndicator_mF1E5BC74041BFCDDDBCF94EC2A755307FB806CD2(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_1, 3)), L_2)), NULL);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.SelectionMenuHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionMenuHandler__ctor_mCB57637A8BCB0B92E4CBD79C155D610000B037C4 (SelectionMenuHandler_t19B59E861F8781E4D153FF7722F864D40D7F38A6* __this, const RuntimeMethod* method) 
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
// System.Void DTT.AreaOfEffectRegions.Demo.TextureSelectionUI::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSelectionUI_Awake_m296DD46A98196E0CEE69414451EB324CD485F70D (TextureSelectionUI_t66A687E26FBF9BE0B61CEDD9E5BA64C1977F718D* __this, const RuntimeMethod* method) 
{
	{
		// private void Awake() => AddListener();
		TextureSelectionUI_AddListener_m6F53DD5D2A07E33003A7325B377696FFD6A779D0(__this, NULL);
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.TextureSelectionUI::AddListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSelectionUI_AddListener_m6F53DD5D2A07E33003A7325B377696FFD6A779D0 (TextureSelectionUI_t66A687E26FBF9BE0B61CEDD9E5BA64C1977F718D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSelectionUI_U3CAddListenerU3Eb__5_0_mC84934AF22EF9880ACAF713077CCBD18DF6C9D11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSelectionUI_U3CAddListenerU3Eb__5_1_m67FCADA9B4DBA5153CF61ADA55653C65F4E0FC70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSelectionUI_U3CAddListenerU3Eb__5_2_m28A8C5C564A0DDBF6900DB55A83B78E835B64950_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _color1.onClick.AddListener(() => _selectionMenu.UpdateProjectorTexture(0));
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->____color1_4;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)TextureSelectionUI_U3CAddListenerU3Eb__5_0_mC84934AF22EF9880ACAF713077CCBD18DF6C9D11_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_1, L_2, NULL);
		// _color2.onClick.AddListener(() => _selectionMenu.UpdateProjectorTexture(1));
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->____color2_5;
		NullCheck(L_3);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_4;
		L_4 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_3, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, __this, (intptr_t)((void*)TextureSelectionUI_U3CAddListenerU3Eb__5_1_m67FCADA9B4DBA5153CF61ADA55653C65F4E0FC70_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_4, L_5, NULL);
		// _color3.onClick.AddListener(() => _selectionMenu.UpdateProjectorTexture(2));
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->____color3_6;
		NullCheck(L_6);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_7;
		L_7 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_6, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_8 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_8, __this, (intptr_t)((void*)TextureSelectionUI_U3CAddListenerU3Eb__5_2_m28A8C5C564A0DDBF6900DB55A83B78E835B64950_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.TextureSelectionUI::RemoveListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSelectionUI_RemoveListener_m1AE25F9F7A05715B749D9012F11A8CA02083A44C (TextureSelectionUI_t66A687E26FBF9BE0B61CEDD9E5BA64C1977F718D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSelectionUI_U3CRemoveListenerU3Eb__6_0_mE8BCEA0C85BAE50BFDA813FC8BA09F62D97F47B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSelectionUI_U3CRemoveListenerU3Eb__6_1_m62DB8874468082198EA3A0405EC8E072AA49F65B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSelectionUI_U3CRemoveListenerU3Eb__6_2_m5847248F292405D615A2C2966FB2DC2BEC423DA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _color1.onClick.RemoveListener(() => _selectionMenu.UpdateProjectorTexture(0));
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->____color1_4;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)TextureSelectionUI_U3CRemoveListenerU3Eb__6_0_mE8BCEA0C85BAE50BFDA813FC8BA09F62D97F47B3_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_1, L_2, NULL);
		// _color2.onClick.RemoveListener(() => _selectionMenu.UpdateProjectorTexture(1));
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->____color2_5;
		NullCheck(L_3);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_4;
		L_4 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_3, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, __this, (intptr_t)((void*)TextureSelectionUI_U3CRemoveListenerU3Eb__6_1_m62DB8874468082198EA3A0405EC8E072AA49F65B_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_4, L_5, NULL);
		// _color3.onClick.RemoveListener(() => _selectionMenu.UpdateProjectorTexture(2));
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->____color3_6;
		NullCheck(L_6);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_7;
		L_7 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_6, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_8 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_8, __this, (intptr_t)((void*)TextureSelectionUI_U3CRemoveListenerU3Eb__6_2_m5847248F292405D615A2C2966FB2DC2BEC423DA7_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.TextureSelectionUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSelectionUI__ctor_m07219EAF31F2CC3D04B2411AA7305AFC516382F1 (TextureSelectionUI_t66A687E26FBF9BE0B61CEDD9E5BA64C1977F718D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.TextureSelectionUI::<AddListener>b__5_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSelectionUI_U3CAddListenerU3Eb__5_0_mC84934AF22EF9880ACAF713077CCBD18DF6C9D11 (TextureSelectionUI_t66A687E26FBF9BE0B61CEDD9E5BA64C1977F718D* __this, const RuntimeMethod* method) 
{
	{
		// _color1.onClick.AddListener(() => _selectionMenu.UpdateProjectorTexture(0));
		SelectionMenuHandler_t19B59E861F8781E4D153FF7722F864D40D7F38A6* L_0 = __this->____selectionMenu_7;
		NullCheck(L_0);
		SelectionMenuHandler_UpdateProjectorTexture_m396BD74EBEF78EA9D8077D70DCA1CA21880FCC26(L_0, 0, NULL);
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.TextureSelectionUI::<AddListener>b__5_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSelectionUI_U3CAddListenerU3Eb__5_1_m67FCADA9B4DBA5153CF61ADA55653C65F4E0FC70 (TextureSelectionUI_t66A687E26FBF9BE0B61CEDD9E5BA64C1977F718D* __this, const RuntimeMethod* method) 
{
	{
		// _color2.onClick.AddListener(() => _selectionMenu.UpdateProjectorTexture(1));
		SelectionMenuHandler_t19B59E861F8781E4D153FF7722F864D40D7F38A6* L_0 = __this->____selectionMenu_7;
		NullCheck(L_0);
		SelectionMenuHandler_UpdateProjectorTexture_m396BD74EBEF78EA9D8077D70DCA1CA21880FCC26(L_0, 1, NULL);
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.TextureSelectionUI::<AddListener>b__5_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSelectionUI_U3CAddListenerU3Eb__5_2_m28A8C5C564A0DDBF6900DB55A83B78E835B64950 (TextureSelectionUI_t66A687E26FBF9BE0B61CEDD9E5BA64C1977F718D* __this, const RuntimeMethod* method) 
{
	{
		// _color3.onClick.AddListener(() => _selectionMenu.UpdateProjectorTexture(2));
		SelectionMenuHandler_t19B59E861F8781E4D153FF7722F864D40D7F38A6* L_0 = __this->____selectionMenu_7;
		NullCheck(L_0);
		SelectionMenuHandler_UpdateProjectorTexture_m396BD74EBEF78EA9D8077D70DCA1CA21880FCC26(L_0, 2, NULL);
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.TextureSelectionUI::<RemoveListener>b__6_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSelectionUI_U3CRemoveListenerU3Eb__6_0_mE8BCEA0C85BAE50BFDA813FC8BA09F62D97F47B3 (TextureSelectionUI_t66A687E26FBF9BE0B61CEDD9E5BA64C1977F718D* __this, const RuntimeMethod* method) 
{
	{
		// _color1.onClick.RemoveListener(() => _selectionMenu.UpdateProjectorTexture(0));
		SelectionMenuHandler_t19B59E861F8781E4D153FF7722F864D40D7F38A6* L_0 = __this->____selectionMenu_7;
		NullCheck(L_0);
		SelectionMenuHandler_UpdateProjectorTexture_m396BD74EBEF78EA9D8077D70DCA1CA21880FCC26(L_0, 0, NULL);
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.TextureSelectionUI::<RemoveListener>b__6_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSelectionUI_U3CRemoveListenerU3Eb__6_1_m62DB8874468082198EA3A0405EC8E072AA49F65B (TextureSelectionUI_t66A687E26FBF9BE0B61CEDD9E5BA64C1977F718D* __this, const RuntimeMethod* method) 
{
	{
		// _color2.onClick.RemoveListener(() => _selectionMenu.UpdateProjectorTexture(1));
		SelectionMenuHandler_t19B59E861F8781E4D153FF7722F864D40D7F38A6* L_0 = __this->____selectionMenu_7;
		NullCheck(L_0);
		SelectionMenuHandler_UpdateProjectorTexture_m396BD74EBEF78EA9D8077D70DCA1CA21880FCC26(L_0, 1, NULL);
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.TextureSelectionUI::<RemoveListener>b__6_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSelectionUI_U3CRemoveListenerU3Eb__6_2_m5847248F292405D615A2C2966FB2DC2BEC423DA7 (TextureSelectionUI_t66A687E26FBF9BE0B61CEDD9E5BA64C1977F718D* __this, const RuntimeMethod* method) 
{
	{
		// _color3.onClick.RemoveListener(() => _selectionMenu.UpdateProjectorTexture(2));
		SelectionMenuHandler_t19B59E861F8781E4D153FF7722F864D40D7F38A6* L_0 = __this->____selectionMenu_7;
		NullCheck(L_0);
		SelectionMenuHandler_UpdateProjectorTexture_m396BD74EBEF78EA9D8077D70DCA1CA21880FCC26(L_0, 2, NULL);
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
// System.Void DTT.AreaOfEffectRegions.Demo.TypeSelectionUI::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeSelectionUI_Awake_mB37CBC66802AAB7722C1CD685D136890CBD207D4 (TypeSelectionUI_t5D98D5D6804B4340BD6269E48732A97453B86772* __this, const RuntimeMethod* method) 
{
	{
		// private void Awake() => AddListener();
		TypeSelectionUI_AddListener_m975D41D8E38B41C219B0D720A876ED748C0C51F4(__this, NULL);
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.TypeSelectionUI::AddListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeSelectionUI_AddListener_m975D41D8E38B41C219B0D720A876ED748C0C51F4 (TypeSelectionUI_t5D98D5D6804B4340BD6269E48732A97453B86772* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeSelectionUI_U3CAddListenerU3Eb__6_0_m5B29B5CEB1971300089D4F07E90FCF2961699DF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeSelectionUI_U3CAddListenerU3Eb__6_1_m297A550DEA6E804D50D796C757F14A43E9050B95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeSelectionUI_U3CAddListenerU3Eb__6_2_m4F16849DE52A62A65DC79BC818E463D3403AFB22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeSelectionUI_U3CAddListenerU3Eb__6_3_m576C6E83789DC0C1215D3B0A5B7A698FB29529E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _arcButton.onClick.AddListener(() => _selectionMenu.UpdateProjectorType(ProjectorType.ARC));
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->____arcButton_4;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)TypeSelectionUI_U3CAddListenerU3Eb__6_0_m5B29B5CEB1971300089D4F07E90FCF2961699DF9_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_1, L_2, NULL);
		// _circleButton.onClick.AddListener(() => _selectionMenu.UpdateProjectorType(ProjectorType.CIRCLE));
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->____circleButton_5;
		NullCheck(L_3);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_4;
		L_4 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_3, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, __this, (intptr_t)((void*)TypeSelectionUI_U3CAddListenerU3Eb__6_1_m297A550DEA6E804D50D796C757F14A43E9050B95_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_4, L_5, NULL);
		// _lineButton.onClick.AddListener(() => _selectionMenu.UpdateProjectorType(ProjectorType.LINE));
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->____lineButton_6;
		NullCheck(L_6);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_7;
		L_7 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_6, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_8 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_8, __this, (intptr_t)((void*)TypeSelectionUI_U3CAddListenerU3Eb__6_2_m4F16849DE52A62A65DC79BC818E463D3403AFB22_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_7, L_8, NULL);
		// _scatterLineButton.onClick.AddListener(() => _selectionMenu.UpdateProjectorType(ProjectorType.SCATTERLINE));
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_9 = __this->____scatterLineButton_7;
		NullCheck(L_9);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_10;
		L_10 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_9, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_11 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_11, __this, (intptr_t)((void*)TypeSelectionUI_U3CAddListenerU3Eb__6_3_m576C6E83789DC0C1215D3B0A5B7A698FB29529E1_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.TypeSelectionUI::RemoveListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeSelectionUI_RemoveListener_m66D4DA8586F7C8B8DE586F5A39F2F91D61ADE2F5 (TypeSelectionUI_t5D98D5D6804B4340BD6269E48732A97453B86772* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeSelectionUI_U3CRemoveListenerU3Eb__7_0_mFF968D03F77EAE8D1BAFB105232BAF6589DD192F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeSelectionUI_U3CRemoveListenerU3Eb__7_1_m9A74513ACC2AAFD956855B79C3E99CDBA219274E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeSelectionUI_U3CRemoveListenerU3Eb__7_2_m543096FBF55C1E62BDB81A8DA8ECEAE0D17A6545_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeSelectionUI_U3CRemoveListenerU3Eb__7_3_mC83EC2DD9ABBB555179EE8A29B22F48018FEEC0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _arcButton.onClick.RemoveListener(() => _selectionMenu.UpdateProjectorType(ProjectorType.ARC));
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->____arcButton_4;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)TypeSelectionUI_U3CRemoveListenerU3Eb__7_0_mFF968D03F77EAE8D1BAFB105232BAF6589DD192F_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_1, L_2, NULL);
		// _circleButton.onClick.RemoveListener(() => _selectionMenu.UpdateProjectorType(ProjectorType.CIRCLE));
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->____circleButton_5;
		NullCheck(L_3);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_4;
		L_4 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_3, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, __this, (intptr_t)((void*)TypeSelectionUI_U3CRemoveListenerU3Eb__7_1_m9A74513ACC2AAFD956855B79C3E99CDBA219274E_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_4, L_5, NULL);
		// _lineButton.onClick.RemoveListener(() => _selectionMenu.UpdateProjectorType(ProjectorType.LINE));
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->____lineButton_6;
		NullCheck(L_6);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_7;
		L_7 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_6, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_8 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_8, __this, (intptr_t)((void*)TypeSelectionUI_U3CRemoveListenerU3Eb__7_2_m543096FBF55C1E62BDB81A8DA8ECEAE0D17A6545_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_7, L_8, NULL);
		// _scatterLineButton.onClick.RemoveListener(() => _selectionMenu.UpdateProjectorType(ProjectorType.SCATTERLINE));
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_9 = __this->____scatterLineButton_7;
		NullCheck(L_9);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_10;
		L_10 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_9, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_11 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_11, __this, (intptr_t)((void*)TypeSelectionUI_U3CRemoveListenerU3Eb__7_3_mC83EC2DD9ABBB555179EE8A29B22F48018FEEC0C_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.TypeSelectionUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeSelectionUI__ctor_mA9A2428896B7A88A5632A70B954B7CC3EF9771FB (TypeSelectionUI_t5D98D5D6804B4340BD6269E48732A97453B86772* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.TypeSelectionUI::<AddListener>b__6_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeSelectionUI_U3CAddListenerU3Eb__6_0_m5B29B5CEB1971300089D4F07E90FCF2961699DF9 (TypeSelectionUI_t5D98D5D6804B4340BD6269E48732A97453B86772* __this, const RuntimeMethod* method) 
{
	{
		// _arcButton.onClick.AddListener(() => _selectionMenu.UpdateProjectorType(ProjectorType.ARC));
		SelectionMenuHandler_t19B59E861F8781E4D153FF7722F864D40D7F38A6* L_0 = __this->____selectionMenu_8;
		NullCheck(L_0);
		SelectionMenuHandler_UpdateProjectorType_mB84B2C86D1BFC05DB38C98279B40A9D3E8805363(L_0, 0, NULL);
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.TypeSelectionUI::<AddListener>b__6_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeSelectionUI_U3CAddListenerU3Eb__6_1_m297A550DEA6E804D50D796C757F14A43E9050B95 (TypeSelectionUI_t5D98D5D6804B4340BD6269E48732A97453B86772* __this, const RuntimeMethod* method) 
{
	{
		// _circleButton.onClick.AddListener(() => _selectionMenu.UpdateProjectorType(ProjectorType.CIRCLE));
		SelectionMenuHandler_t19B59E861F8781E4D153FF7722F864D40D7F38A6* L_0 = __this->____selectionMenu_8;
		NullCheck(L_0);
		SelectionMenuHandler_UpdateProjectorType_mB84B2C86D1BFC05DB38C98279B40A9D3E8805363(L_0, 1, NULL);
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.TypeSelectionUI::<AddListener>b__6_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeSelectionUI_U3CAddListenerU3Eb__6_2_m4F16849DE52A62A65DC79BC818E463D3403AFB22 (TypeSelectionUI_t5D98D5D6804B4340BD6269E48732A97453B86772* __this, const RuntimeMethod* method) 
{
	{
		// _lineButton.onClick.AddListener(() => _selectionMenu.UpdateProjectorType(ProjectorType.LINE));
		SelectionMenuHandler_t19B59E861F8781E4D153FF7722F864D40D7F38A6* L_0 = __this->____selectionMenu_8;
		NullCheck(L_0);
		SelectionMenuHandler_UpdateProjectorType_mB84B2C86D1BFC05DB38C98279B40A9D3E8805363(L_0, 2, NULL);
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.TypeSelectionUI::<AddListener>b__6_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeSelectionUI_U3CAddListenerU3Eb__6_3_m576C6E83789DC0C1215D3B0A5B7A698FB29529E1 (TypeSelectionUI_t5D98D5D6804B4340BD6269E48732A97453B86772* __this, const RuntimeMethod* method) 
{
	{
		// _scatterLineButton.onClick.AddListener(() => _selectionMenu.UpdateProjectorType(ProjectorType.SCATTERLINE));
		SelectionMenuHandler_t19B59E861F8781E4D153FF7722F864D40D7F38A6* L_0 = __this->____selectionMenu_8;
		NullCheck(L_0);
		SelectionMenuHandler_UpdateProjectorType_mB84B2C86D1BFC05DB38C98279B40A9D3E8805363(L_0, 3, NULL);
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.TypeSelectionUI::<RemoveListener>b__7_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeSelectionUI_U3CRemoveListenerU3Eb__7_0_mFF968D03F77EAE8D1BAFB105232BAF6589DD192F (TypeSelectionUI_t5D98D5D6804B4340BD6269E48732A97453B86772* __this, const RuntimeMethod* method) 
{
	{
		// _arcButton.onClick.RemoveListener(() => _selectionMenu.UpdateProjectorType(ProjectorType.ARC));
		SelectionMenuHandler_t19B59E861F8781E4D153FF7722F864D40D7F38A6* L_0 = __this->____selectionMenu_8;
		NullCheck(L_0);
		SelectionMenuHandler_UpdateProjectorType_mB84B2C86D1BFC05DB38C98279B40A9D3E8805363(L_0, 0, NULL);
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.TypeSelectionUI::<RemoveListener>b__7_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeSelectionUI_U3CRemoveListenerU3Eb__7_1_m9A74513ACC2AAFD956855B79C3E99CDBA219274E (TypeSelectionUI_t5D98D5D6804B4340BD6269E48732A97453B86772* __this, const RuntimeMethod* method) 
{
	{
		// _circleButton.onClick.RemoveListener(() => _selectionMenu.UpdateProjectorType(ProjectorType.CIRCLE));
		SelectionMenuHandler_t19B59E861F8781E4D153FF7722F864D40D7F38A6* L_0 = __this->____selectionMenu_8;
		NullCheck(L_0);
		SelectionMenuHandler_UpdateProjectorType_mB84B2C86D1BFC05DB38C98279B40A9D3E8805363(L_0, 1, NULL);
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.TypeSelectionUI::<RemoveListener>b__7_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeSelectionUI_U3CRemoveListenerU3Eb__7_2_m543096FBF55C1E62BDB81A8DA8ECEAE0D17A6545 (TypeSelectionUI_t5D98D5D6804B4340BD6269E48732A97453B86772* __this, const RuntimeMethod* method) 
{
	{
		// _lineButton.onClick.RemoveListener(() => _selectionMenu.UpdateProjectorType(ProjectorType.LINE));
		SelectionMenuHandler_t19B59E861F8781E4D153FF7722F864D40D7F38A6* L_0 = __this->____selectionMenu_8;
		NullCheck(L_0);
		SelectionMenuHandler_UpdateProjectorType_mB84B2C86D1BFC05DB38C98279B40A9D3E8805363(L_0, 2, NULL);
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.TypeSelectionUI::<RemoveListener>b__7_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeSelectionUI_U3CRemoveListenerU3Eb__7_3_mC83EC2DD9ABBB555179EE8A29B22F48018FEEC0C (TypeSelectionUI_t5D98D5D6804B4340BD6269E48732A97453B86772* __this, const RuntimeMethod* method) 
{
	{
		// _scatterLineButton.onClick.RemoveListener(() => _selectionMenu.UpdateProjectorType(ProjectorType.SCATTERLINE));
		SelectionMenuHandler_t19B59E861F8781E4D153FF7722F864D40D7F38A6* L_0 = __this->____selectionMenu_8;
		NullCheck(L_0);
		SelectionMenuHandler_UpdateProjectorType_mB84B2C86D1BFC05DB38C98279B40A9D3E8805363(L_0, 3, NULL);
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
// System.Void DTT.AreaOfEffectRegions.Demo.ArcSettings::InitializeSlider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArcSettings_InitializeSlider_m8625DE1E2A959A5800E6F55058644C2E209CBEE2 (ArcSettings_tC23AB06EAF151A4B75FC755A45A7B9F7267A4421* __this, const RuntimeMethod* method) 
{
	{
		// _radius.maxValue = 200;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->____radius_4;
		NullCheck(L_0);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_0, (200.0f), NULL);
		// _radius.minValue = 50;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = __this->____radius_4;
		NullCheck(L_1);
		Slider_set_minValue_mC4D1F7709276A9A418F9284A04799FF767DEDC4F(L_1, (50.0f), NULL);
		// _angle.maxValue = 360;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_2 = __this->____angle_5;
		NullCheck(L_2);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_2, (360.0f), NULL);
		// _angle.minValue = 0;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = __this->____angle_5;
		NullCheck(L_3);
		Slider_set_minValue_mC4D1F7709276A9A418F9284A04799FF767DEDC4F(L_3, (0.0f), NULL);
		// _arc.maxValue = 360;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = __this->____arc_6;
		NullCheck(L_4);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_4, (360.0f), NULL);
		// _arc.minValue = 0;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_5 = __this->____arc_6;
		NullCheck(L_5);
		Slider_set_minValue_mC4D1F7709276A9A418F9284A04799FF767DEDC4F(L_5, (0.0f), NULL);
		// _fillProgress.minValue = 0;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_6 = __this->____fillProgress_7;
		NullCheck(L_6);
		Slider_set_minValue_mC4D1F7709276A9A418F9284A04799FF767DEDC4F(L_6, (0.0f), NULL);
		// _fillProgress.maxValue = 1;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_7 = __this->____fillProgress_7;
		NullCheck(L_7);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_7, (1.0f), NULL);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.ArcSettings::InitializeValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArcSettings_InitializeValues_m984511D6E5CEB987A66C7174D4246917312C2783 (ArcSettings_tC23AB06EAF151A4B75FC755A45A7B9F7267A4421* __this, const RuntimeMethod* method) 
{
	{
		// _angle.value = _projector.Angle ;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->____angle_5;
		ArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5* L_1 = __this->____projector_8;
		NullCheck(L_1);
		float L_2;
		L_2 = ArcRegionProjector_get_Angle_m2CD99483F16C796C3A3E6C3F6A43FA1E8956FBAE_inline(L_1, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, L_2);
		// _radius.value = _projector.Radius ;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = __this->____radius_4;
		ArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5* L_4 = __this->____projector_8;
		NullCheck(L_4);
		float L_5;
		L_5 = ArcRegionProjector_get_Radius_m9FAC34360F4517ECA76473A7A4A6F74F7225A9EE_inline(L_4, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_3, L_5);
		// _arc.value = _projector.Arc ;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_6 = __this->____arc_6;
		ArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5* L_7 = __this->____projector_8;
		NullCheck(L_7);
		float L_8;
		L_8 = ArcRegionProjector_get_Arc_mFC74E7300A7D39918A55E964E680421911A208B9_inline(L_7, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_6, L_8);
		// _fillProgress.value = _projector.FillProgress;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_9 = __this->____fillProgress_7;
		ArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5* L_10 = __this->____projector_8;
		NullCheck(L_10);
		float L_11;
		L_11 = ArcRegionProjector_get_FillProgress_m583AEFF29C0890507524E17A7B0447B3FFCA6AE7_inline(L_10, NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_9, L_11);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.ArcSettings::AddListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArcSettings_AddListener_m2DF75A4CDC2BA78C1D60836E6AB1939DC3D47C6F (ArcSettings_tC23AB06EAF151A4B75FC755A45A7B9F7267A4421* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArcSettings_UpdateAngle_m74A1DFC09035B962A74F12A1689BFC8D308E209C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArcSettings_UpdateArc_mCD1354D807930D1F6582DEB8F93771E4CB0D92C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArcSettings_UpdateFill_mA630CE0D917DC8A62ECB0A3A20F3714893424B93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArcSettings_UpdateRadius_mA76272BC2CB5513D6048FDCDE205EF3DC6500ED5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _arc.onValueChanged.AddListener(UpdateArc);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->____arc_6;
		NullCheck(L_0);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_1;
		L_1 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_0, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_2 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_2, __this, (intptr_t)((void*)ArcSettings_UpdateArc_mCD1354D807930D1F6582DEB8F93771E4CB0D92C4_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC(L_1, L_2, UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		// _fillProgress.onValueChanged.AddListener(UpdateFill);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = __this->____fillProgress_7;
		NullCheck(L_3);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_4;
		L_4 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_3, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_5 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_5, __this, (intptr_t)((void*)ArcSettings_UpdateFill_mA630CE0D917DC8A62ECB0A3A20F3714893424B93_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC(L_4, L_5, UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		// _angle.onValueChanged.AddListener(UpdateAngle);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_6 = __this->____angle_5;
		NullCheck(L_6);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_7;
		L_7 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_6, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_8 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_8, __this, (intptr_t)((void*)ArcSettings_UpdateAngle_m74A1DFC09035B962A74F12A1689BFC8D308E209C_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC(L_7, L_8, UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		// _radius.onValueChanged.AddListener(UpdateRadius);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_9 = __this->____radius_4;
		NullCheck(L_9);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_10;
		L_10 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_9, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_11 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_11, __this, (intptr_t)((void*)ArcSettings_UpdateRadius_mA76272BC2CB5513D6048FDCDE205EF3DC6500ED5_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC(L_10, L_11, UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.ArcSettings::RemoveListerner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArcSettings_RemoveListerner_m68397E386B1681B863446E7C403243B54784DD0E (ArcSettings_tC23AB06EAF151A4B75FC755A45A7B9F7267A4421* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArcSettings_UpdateAngle_m74A1DFC09035B962A74F12A1689BFC8D308E209C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArcSettings_UpdateArc_mCD1354D807930D1F6582DEB8F93771E4CB0D92C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArcSettings_UpdateFill_mA630CE0D917DC8A62ECB0A3A20F3714893424B93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArcSettings_UpdateRadius_mA76272BC2CB5513D6048FDCDE205EF3DC6500ED5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _arc.onValueChanged.RemoveListener(UpdateArc);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->____arc_6;
		NullCheck(L_0);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_1;
		L_1 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_0, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_2 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_2, __this, (intptr_t)((void*)ArcSettings_UpdateArc_mCD1354D807930D1F6582DEB8F93771E4CB0D92C4_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9(L_1, L_2, UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9_RuntimeMethod_var);
		// _fillProgress.onValueChanged.RemoveListener(UpdateFill);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = __this->____fillProgress_7;
		NullCheck(L_3);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_4;
		L_4 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_3, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_5 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_5, __this, (intptr_t)((void*)ArcSettings_UpdateFill_mA630CE0D917DC8A62ECB0A3A20F3714893424B93_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9(L_4, L_5, UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9_RuntimeMethod_var);
		// _angle.onValueChanged.RemoveListener(UpdateAngle);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_6 = __this->____angle_5;
		NullCheck(L_6);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_7;
		L_7 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_6, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_8 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_8, __this, (intptr_t)((void*)ArcSettings_UpdateAngle_m74A1DFC09035B962A74F12A1689BFC8D308E209C_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9(L_7, L_8, UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9_RuntimeMethod_var);
		// _radius.onValueChanged.RemoveListener(UpdateRadius);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_9 = __this->____radius_4;
		NullCheck(L_9);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_10;
		L_10 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_9, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_11 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_11, __this, (intptr_t)((void*)ArcSettings_UpdateRadius_mA76272BC2CB5513D6048FDCDE205EF3DC6500ED5_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9(L_10, L_11, UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.ArcSettings::UpdateArc(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArcSettings_UpdateArc_mCD1354D807930D1F6582DEB8F93771E4CB0D92C4 (ArcSettings_tC23AB06EAF151A4B75FC755A45A7B9F7267A4421* __this, float ___arc0, const RuntimeMethod* method) 
{
	{
		// _projector.Arc = arc;
		ArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5* L_0 = __this->____projector_8;
		float L_1 = ___arc0;
		NullCheck(L_0);
		ArcRegionProjector_set_Arc_m3F4CAC8C70FFCB4680C5E5A603DC6586D164E02E(L_0, L_1, NULL);
		// _projector.UpdateProjectors();
		ArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5* L_2 = __this->____projector_8;
		NullCheck(L_2);
		ArcRegionProjector_UpdateProjectors_mCF43036B1B46447D6F634BA05E0809362FC7BFB3(L_2, NULL);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.ArcSettings::UpdateRadius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArcSettings_UpdateRadius_mA76272BC2CB5513D6048FDCDE205EF3DC6500ED5 (ArcSettings_tC23AB06EAF151A4B75FC755A45A7B9F7267A4421* __this, float ___arc0, const RuntimeMethod* method) 
{
	{
		// _projector.Radius = arc;
		ArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5* L_0 = __this->____projector_8;
		float L_1 = ___arc0;
		NullCheck(L_0);
		ArcRegionProjector_set_Radius_m042E060194F37C0C4DDB5230529BE7AAE2EE40F8(L_0, L_1, NULL);
		// _projector.UpdateProjectors();
		ArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5* L_2 = __this->____projector_8;
		NullCheck(L_2);
		ArcRegionProjector_UpdateProjectors_mCF43036B1B46447D6F634BA05E0809362FC7BFB3(L_2, NULL);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.ArcSettings::UpdateFill(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArcSettings_UpdateFill_mA630CE0D917DC8A62ECB0A3A20F3714893424B93 (ArcSettings_tC23AB06EAF151A4B75FC755A45A7B9F7267A4421* __this, float ___arc0, const RuntimeMethod* method) 
{
	{
		// _projector.FillProgress = arc;
		ArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5* L_0 = __this->____projector_8;
		float L_1 = ___arc0;
		NullCheck(L_0);
		ArcRegionProjector_set_FillProgress_m53BF379AB28BF08995BA571FADE8B4CB7BB73ED3(L_0, L_1, NULL);
		// _projector.UpdateProjectors();
		ArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5* L_2 = __this->____projector_8;
		NullCheck(L_2);
		ArcRegionProjector_UpdateProjectors_mCF43036B1B46447D6F634BA05E0809362FC7BFB3(L_2, NULL);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.ArcSettings::UpdateAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArcSettings_UpdateAngle_m74A1DFC09035B962A74F12A1689BFC8D308E209C (ArcSettings_tC23AB06EAF151A4B75FC755A45A7B9F7267A4421* __this, float ___angle0, const RuntimeMethod* method) 
{
	{
		// _projector.Angle = angle;
		ArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5* L_0 = __this->____projector_8;
		float L_1 = ___angle0;
		NullCheck(L_0);
		ArcRegionProjector_set_Angle_m140F62FD9F9E707BED1383824F5AC11D84682176_inline(L_0, L_1, NULL);
		// _projector.UpdateProjectors();
		ArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5* L_2 = __this->____projector_8;
		NullCheck(L_2);
		ArcRegionProjector_UpdateProjectors_mCF43036B1B46447D6F634BA05E0809362FC7BFB3(L_2, NULL);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.ArcSettings::ChangeIndicator(DTT.AreaOfEffectRegions.ArcRegionProjector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArcSettings_ChangeIndicator_m1C21B6F4377513A3B37821C2E6FCA6AAE447FC47 (ArcSettings_tC23AB06EAF151A4B75FC755A45A7B9F7267A4421* __this, ArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5* ___indic0, const RuntimeMethod* method) 
{
	{
		// RemoveListerner();
		ArcSettings_RemoveListerner_m68397E386B1681B863446E7C403243B54784DD0E(__this, NULL);
		// _projector = indic;
		ArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5* L_0 = ___indic0;
		__this->____projector_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____projector_8), (void*)L_0);
		// InitializeSlider();
		ArcSettings_InitializeSlider_m8625DE1E2A959A5800E6F55058644C2E209CBEE2(__this, NULL);
		// InitializeIndicator();
		ArcSettings_InitializeIndicator_mE31B16EAFE4ED52C076EEECD065DE29500D5DEB3(__this, NULL);
		// InitializeValues();
		ArcSettings_InitializeValues_m984511D6E5CEB987A66C7174D4246917312C2783(__this, NULL);
		// _angle.value = _projector.Angle ;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = __this->____angle_5;
		ArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5* L_2 = __this->____projector_8;
		NullCheck(L_2);
		float L_3;
		L_3 = ArcRegionProjector_get_Angle_m2CD99483F16C796C3A3E6C3F6A43FA1E8956FBAE_inline(L_2, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_1, L_3);
		// _radius.value = _projector.Radius ;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = __this->____radius_4;
		ArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5* L_5 = __this->____projector_8;
		NullCheck(L_5);
		float L_6;
		L_6 = ArcRegionProjector_get_Radius_m9FAC34360F4517ECA76473A7A4A6F74F7225A9EE_inline(L_5, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_4, L_6);
		// _arc.value = _projector.Arc ;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_7 = __this->____arc_6;
		ArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5* L_8 = __this->____projector_8;
		NullCheck(L_8);
		float L_9;
		L_9 = ArcRegionProjector_get_Arc_mFC74E7300A7D39918A55E964E680421911A208B9_inline(L_8, NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_7, L_9);
		// _fillProgress.value = _projector.FillProgress;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_10 = __this->____fillProgress_7;
		ArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5* L_11 = __this->____projector_8;
		NullCheck(L_11);
		float L_12;
		L_12 = ArcRegionProjector_get_FillProgress_m583AEFF29C0890507524E17A7B0447B3FFCA6AE7_inline(L_11, NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_10, L_12);
		// AddListener();
		ArcSettings_AddListener_m2DF75A4CDC2BA78C1D60836E6AB1939DC3D47C6F(__this, NULL);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.ArcSettings::InitializeIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArcSettings_InitializeIndicator_mE31B16EAFE4ED52C076EEECD065DE29500D5DEB3 (ArcSettings_tC23AB06EAF151A4B75FC755A45A7B9F7267A4421* __this, const RuntimeMethod* method) 
{
	{
		// private void InitializeIndicator() => _projector.Radius = 50;
		ArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5* L_0 = __this->____projector_8;
		NullCheck(L_0);
		ArcRegionProjector_set_Radius_m042E060194F37C0C4DDB5230529BE7AAE2EE40F8(L_0, (50.0f), NULL);
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.ArcSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArcSettings__ctor_mA5404A1512A7F81770B212105E16976ECC3B54D6 (ArcSettings_tC23AB06EAF151A4B75FC755A45A7B9F7267A4421* __this, const RuntimeMethod* method) 
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
// System.Void DTT.AreaOfEffectRegions.Demo.CircleSettings::InitializeSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleSettings_InitializeSettings_mFCCDF496A37B93B2E1A5F3D91CF8A9489C8DAF04 (CircleSettings_t95DABBB997ADECE41AF8685385F8D2F1AB75E974* __this, const RuntimeMethod* method) 
{
	{
		// _radius.minValue = 50;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->____radius_4;
		NullCheck(L_0);
		Slider_set_minValue_mC4D1F7709276A9A418F9284A04799FF767DEDC4F(L_0, (50.0f), NULL);
		// _radius.maxValue = 200;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = __this->____radius_4;
		NullCheck(L_1);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_1, (200.0f), NULL);
		// _fillProgress.minValue = 0;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_2 = __this->____fillProgress_5;
		NullCheck(L_2);
		Slider_set_minValue_mC4D1F7709276A9A418F9284A04799FF767DEDC4F(L_2, (0.0f), NULL);
		// _fillProgress.maxValue = 1;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = __this->____fillProgress_5;
		NullCheck(L_3);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_3, (1.0f), NULL);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.CircleSettings::InitializeValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleSettings_InitializeValues_mB46228191FEF944BFB78DDF40A0DDCAA305340B5 (CircleSettings_t95DABBB997ADECE41AF8685385F8D2F1AB75E974* __this, const RuntimeMethod* method) 
{
	{
		// _radius.value = _projector.Radius ;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->____radius_4;
		CircleRegionProjector_t4620C0C797FE7C92C07CA7D806A32916B91B3B15* L_1 = __this->____projector_6;
		NullCheck(L_1);
		float L_2;
		L_2 = CircleRegionProjector_get_Radius_mBD8FD056D9EE9260C1FECBD41906DE5031F10B66_inline(L_1, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, L_2);
		// _fillProgress.value = _projector.FillProgress;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = __this->____fillProgress_5;
		CircleRegionProjector_t4620C0C797FE7C92C07CA7D806A32916B91B3B15* L_4 = __this->____projector_6;
		NullCheck(L_4);
		float L_5;
		L_5 = CircleRegionProjector_get_FillProgress_m093C884D82AEDD4B68596366CCBBA5ECAE52FDD7_inline(L_4, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_3, L_5);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.CircleSettings::AddListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleSettings_AddListener_m2365E8743E11390E39DC10BAD835E93779EEDE00 (CircleSettings_t95DABBB997ADECE41AF8685385F8D2F1AB75E974* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CircleSettings_UpdateFill_m4EA368A0C7491B251E484734CED7F85AEC7A17DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CircleSettings_UpdateRadius_m40A4A0397A133A99CE3D0A1C47FA02E277F44C74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _fillProgress.onValueChanged.AddListener(UpdateFill);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->____fillProgress_5;
		NullCheck(L_0);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_1;
		L_1 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_0, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_2 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_2, __this, (intptr_t)((void*)CircleSettings_UpdateFill_m4EA368A0C7491B251E484734CED7F85AEC7A17DC_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC(L_1, L_2, UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		// _radius.onValueChanged.AddListener(UpdateRadius);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = __this->____radius_4;
		NullCheck(L_3);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_4;
		L_4 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_3, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_5 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_5, __this, (intptr_t)((void*)CircleSettings_UpdateRadius_m40A4A0397A133A99CE3D0A1C47FA02E277F44C74_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC(L_4, L_5, UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.CircleSettings::RemoveListerner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleSettings_RemoveListerner_m22A7E9828C90417D4E2739CA920077A8D7B37011 (CircleSettings_t95DABBB997ADECE41AF8685385F8D2F1AB75E974* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CircleSettings_UpdateFill_m4EA368A0C7491B251E484734CED7F85AEC7A17DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CircleSettings_UpdateRadius_m40A4A0397A133A99CE3D0A1C47FA02E277F44C74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _fillProgress.onValueChanged.RemoveListener(UpdateFill);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->____fillProgress_5;
		NullCheck(L_0);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_1;
		L_1 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_0, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_2 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_2, __this, (intptr_t)((void*)CircleSettings_UpdateFill_m4EA368A0C7491B251E484734CED7F85AEC7A17DC_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9(L_1, L_2, UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9_RuntimeMethod_var);
		// _radius.onValueChanged.RemoveListener(UpdateRadius);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = __this->____radius_4;
		NullCheck(L_3);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_4;
		L_4 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_3, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_5 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_5, __this, (intptr_t)((void*)CircleSettings_UpdateRadius_m40A4A0397A133A99CE3D0A1C47FA02E277F44C74_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9(L_4, L_5, UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.CircleSettings::UpdateRadius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleSettings_UpdateRadius_m40A4A0397A133A99CE3D0A1C47FA02E277F44C74 (CircleSettings_t95DABBB997ADECE41AF8685385F8D2F1AB75E974* __this, float ___radius0, const RuntimeMethod* method) 
{
	{
		// _projector.Radius = radius;
		CircleRegionProjector_t4620C0C797FE7C92C07CA7D806A32916B91B3B15* L_0 = __this->____projector_6;
		float L_1 = ___radius0;
		NullCheck(L_0);
		CircleRegionProjector_set_Radius_m4EA56897FBEB9AA1524244FF790DA664C91AE98C(L_0, L_1, NULL);
		// _projector.UpdateProjectors();
		CircleRegionProjector_t4620C0C797FE7C92C07CA7D806A32916B91B3B15* L_2 = __this->____projector_6;
		NullCheck(L_2);
		CircleRegionProjector_UpdateProjectors_mBDFFA03A52EB1D4A8355467ABA33FBAA69E328E0(L_2, NULL);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.CircleSettings::UpdateFill(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleSettings_UpdateFill_m4EA368A0C7491B251E484734CED7F85AEC7A17DC (CircleSettings_t95DABBB997ADECE41AF8685385F8D2F1AB75E974* __this, float ___fill0, const RuntimeMethod* method) 
{
	{
		// _projector.FillProgress = fill;
		CircleRegionProjector_t4620C0C797FE7C92C07CA7D806A32916B91B3B15* L_0 = __this->____projector_6;
		float L_1 = ___fill0;
		NullCheck(L_0);
		CircleRegionProjector_set_FillProgress_m67F8593DEA4BC1E786FF7930AF9B9F95CBFC1DD6(L_0, L_1, NULL);
		// _projector.UpdateProjectors();
		CircleRegionProjector_t4620C0C797FE7C92C07CA7D806A32916B91B3B15* L_2 = __this->____projector_6;
		NullCheck(L_2);
		CircleRegionProjector_UpdateProjectors_mBDFFA03A52EB1D4A8355467ABA33FBAA69E328E0(L_2, NULL);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.CircleSettings::ChangeIndicator(DTT.AreaOfEffectRegions.CircleRegionProjector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleSettings_ChangeIndicator_m253B257E8A4FC744B93769B3B6D6A85749D2B68C (CircleSettings_t95DABBB997ADECE41AF8685385F8D2F1AB75E974* __this, CircleRegionProjector_t4620C0C797FE7C92C07CA7D806A32916B91B3B15* ___indic0, const RuntimeMethod* method) 
{
	{
		// RemoveListerner();
		CircleSettings_RemoveListerner_m22A7E9828C90417D4E2739CA920077A8D7B37011(__this, NULL);
		// _projector = indic;
		CircleRegionProjector_t4620C0C797FE7C92C07CA7D806A32916B91B3B15* L_0 = ___indic0;
		__this->____projector_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____projector_6), (void*)L_0);
		// InitializeSettings();
		CircleSettings_InitializeSettings_mFCCDF496A37B93B2E1A5F3D91CF8A9489C8DAF04(__this, NULL);
		// InitializeIndicator();
		CircleSettings_InitializeIndicator_m63875FF1FF1A467C83212B3D4B7AB62E476ABA17(__this, NULL);
		// InitializeValues();
		CircleSettings_InitializeValues_mB46228191FEF944BFB78DDF40A0DDCAA305340B5(__this, NULL);
		// _radius.value = _projector.Radius ;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = __this->____radius_4;
		CircleRegionProjector_t4620C0C797FE7C92C07CA7D806A32916B91B3B15* L_2 = __this->____projector_6;
		NullCheck(L_2);
		float L_3;
		L_3 = CircleRegionProjector_get_Radius_mBD8FD056D9EE9260C1FECBD41906DE5031F10B66_inline(L_2, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_1, L_3);
		// _fillProgress.value = _projector.FillProgress;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = __this->____fillProgress_5;
		CircleRegionProjector_t4620C0C797FE7C92C07CA7D806A32916B91B3B15* L_5 = __this->____projector_6;
		NullCheck(L_5);
		float L_6;
		L_6 = CircleRegionProjector_get_FillProgress_m093C884D82AEDD4B68596366CCBBA5ECAE52FDD7_inline(L_5, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_4, L_6);
		// AddListener();
		CircleSettings_AddListener_m2365E8743E11390E39DC10BAD835E93779EEDE00(__this, NULL);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.CircleSettings::InitializeIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleSettings_InitializeIndicator_m63875FF1FF1A467C83212B3D4B7AB62E476ABA17 (CircleSettings_t95DABBB997ADECE41AF8685385F8D2F1AB75E974* __this, const RuntimeMethod* method) 
{
	{
		// private void InitializeIndicator() => _projector.Radius = 50;
		CircleRegionProjector_t4620C0C797FE7C92C07CA7D806A32916B91B3B15* L_0 = __this->____projector_6;
		NullCheck(L_0);
		CircleRegionProjector_set_Radius_m4EA56897FBEB9AA1524244FF790DA664C91AE98C(L_0, (50.0f), NULL);
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.CircleSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleSettings__ctor_m3253035C083709DD60B2F30DE30F8520284BD83C (CircleSettings_t95DABBB997ADECE41AF8685385F8D2F1AB75E974* __this, const RuntimeMethod* method) 
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
// System.Void DTT.AreaOfEffectRegions.Demo.lineSettings::InitializeValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lineSettings_InitializeValues_m61699CD07CF44D8767A87BC132C2DB8442086D47 (lineSettings_t643AAC879365116F3D0C91FAACF037093A063632* __this, const RuntimeMethod* method) 
{
	{
		// _fillProgress.value = _projector.FillProgress;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->____fillProgress_4;
		LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F* L_1 = __this->____projector_9;
		NullCheck(L_1);
		float L_2;
		L_2 = LineRegionProjector_get_FillProgress_m435C08178C41DF92FE78B6EE73DEAC5A2C788CD8_inline(L_1, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, L_2);
		// _fadeAmount.value = _projector.FadeAmount;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = __this->____fadeAmount_5;
		LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F* L_4 = __this->____projector_9;
		NullCheck(L_4);
		float L_5;
		L_5 = LineRegionProjector_get_FadeAmount_mB5FB1748C81DCC914C6386DD42F6B3381D0F8BF1_inline(L_4, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_3, L_5);
		// _angle.value = _projector.Angle;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_6 = __this->____angle_6;
		LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F* L_7 = __this->____projector_9;
		NullCheck(L_7);
		float L_8;
		L_8 = LineRegionProjector_get_Angle_mE80DEDF785AC370BBD5B1D2664927A4DFA7BEDE3_inline(L_7, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_6, L_8);
		// _length.value = _projector.Length;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_9 = __this->____length_7;
		LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F* L_10 = __this->____projector_9;
		NullCheck(L_10);
		float L_11;
		L_11 = LineRegionProjector_get_Length_mE7F932F4FBEBCE3F5287C391E1E05AFAD94BE410_inline(L_10, NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_9, L_11);
		// _width.value = _projector.Width;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_12 = __this->____width_8;
		LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F* L_13 = __this->____projector_9;
		NullCheck(L_13);
		float L_14;
		L_14 = LineRegionProjector_get_Width_m85F88522328A432F1752BFE92F724E7233855354_inline(L_13, NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_12, L_14);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.lineSettings::InitializeSlider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lineSettings_InitializeSlider_m178F104DB954B01C4283D7E6E1ECABE1516B9D97 (lineSettings_t643AAC879365116F3D0C91FAACF037093A063632* __this, const RuntimeMethod* method) 
{
	{
		// _fillProgress.maxValue = 1;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->____fillProgress_4;
		NullCheck(L_0);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_0, (1.0f), NULL);
		// _fillProgress.minValue = 0;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = __this->____fillProgress_4;
		NullCheck(L_1);
		Slider_set_minValue_mC4D1F7709276A9A418F9284A04799FF767DEDC4F(L_1, (0.0f), NULL);
		// _fadeAmount.maxValue = 1;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_2 = __this->____fadeAmount_5;
		NullCheck(L_2);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_2, (1.0f), NULL);
		// _fadeAmount.minValue = 0;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = __this->____fadeAmount_5;
		NullCheck(L_3);
		Slider_set_minValue_mC4D1F7709276A9A418F9284A04799FF767DEDC4F(L_3, (0.0f), NULL);
		// _angle.maxValue = 360;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = __this->____angle_6;
		NullCheck(L_4);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_4, (360.0f), NULL);
		// _angle.minValue = 0;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_5 = __this->____angle_6;
		NullCheck(L_5);
		Slider_set_minValue_mC4D1F7709276A9A418F9284A04799FF767DEDC4F(L_5, (0.0f), NULL);
		// _length.maxValue = 100;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_6 = __this->____length_7;
		NullCheck(L_6);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_6, (100.0f), NULL);
		// _length.minValue = 25;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_7 = __this->____length_7;
		NullCheck(L_7);
		Slider_set_minValue_mC4D1F7709276A9A418F9284A04799FF767DEDC4F(L_7, (25.0f), NULL);
		// _width.maxValue = 25;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_8 = __this->____width_8;
		NullCheck(L_8);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_8, (25.0f), NULL);
		// _width.minValue = 1;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_9 = __this->____width_8;
		NullCheck(L_9);
		Slider_set_minValue_mC4D1F7709276A9A418F9284A04799FF767DEDC4F(L_9, (1.0f), NULL);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.lineSettings::AddListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lineSettings_AddListener_m36B9876A1B5F602B2C719E92B945E7A076B693F5 (lineSettings_t643AAC879365116F3D0C91FAACF037093A063632* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&lineSettings_UpdateAngle_mD1739C22A1BB1CBF4C523475F45B8C41BB337B74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&lineSettings_UpdateFade_mA830B84B5F98E9460EDE5F3833609D704EA62E88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&lineSettings_UpdateFill_m6D5B543DCFB3232E57949C8287202F6B0D10F4DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&lineSettings_UpdateLength_m403EE6B94BD7CD751E8610FC828D80D07FEB9EF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&lineSettings_UpdateWidth_m42DCEAAB5AB8FAEE8DD33D7A0E56DBC55A256A68_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _fillProgress.onValueChanged.AddListener(UpdateFill);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->____fillProgress_4;
		NullCheck(L_0);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_1;
		L_1 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_0, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_2 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_2, __this, (intptr_t)((void*)lineSettings_UpdateFill_m6D5B543DCFB3232E57949C8287202F6B0D10F4DF_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC(L_1, L_2, UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		// _fadeAmount.onValueChanged.AddListener(UpdateFade);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = __this->____fadeAmount_5;
		NullCheck(L_3);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_4;
		L_4 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_3, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_5 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_5, __this, (intptr_t)((void*)lineSettings_UpdateFade_mA830B84B5F98E9460EDE5F3833609D704EA62E88_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC(L_4, L_5, UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		// _angle.onValueChanged.AddListener(UpdateAngle);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_6 = __this->____angle_6;
		NullCheck(L_6);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_7;
		L_7 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_6, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_8 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_8, __this, (intptr_t)((void*)lineSettings_UpdateAngle_mD1739C22A1BB1CBF4C523475F45B8C41BB337B74_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC(L_7, L_8, UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		// _length.onValueChanged.AddListener(UpdateLength);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_9 = __this->____length_7;
		NullCheck(L_9);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_10;
		L_10 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_9, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_11 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_11, __this, (intptr_t)((void*)lineSettings_UpdateLength_m403EE6B94BD7CD751E8610FC828D80D07FEB9EF5_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC(L_10, L_11, UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		// _width.onValueChanged.AddListener(UpdateWidth);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_12 = __this->____width_8;
		NullCheck(L_12);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_13;
		L_13 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_12, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_14 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_14, __this, (intptr_t)((void*)lineSettings_UpdateWidth_m42DCEAAB5AB8FAEE8DD33D7A0E56DBC55A256A68_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC(L_13, L_14, UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.lineSettings::RemoveListerner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lineSettings_RemoveListerner_m772AA2F5963B682F38CA317FB13DE03430C82D2E (lineSettings_t643AAC879365116F3D0C91FAACF037093A063632* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&lineSettings_UpdateAngle_mD1739C22A1BB1CBF4C523475F45B8C41BB337B74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&lineSettings_UpdateFade_mA830B84B5F98E9460EDE5F3833609D704EA62E88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&lineSettings_UpdateFill_m6D5B543DCFB3232E57949C8287202F6B0D10F4DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&lineSettings_UpdateLength_m403EE6B94BD7CD751E8610FC828D80D07FEB9EF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&lineSettings_UpdateWidth_m42DCEAAB5AB8FAEE8DD33D7A0E56DBC55A256A68_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _fillProgress.onValueChanged.RemoveListener(UpdateFill);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->____fillProgress_4;
		NullCheck(L_0);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_1;
		L_1 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_0, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_2 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_2, __this, (intptr_t)((void*)lineSettings_UpdateFill_m6D5B543DCFB3232E57949C8287202F6B0D10F4DF_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9(L_1, L_2, UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9_RuntimeMethod_var);
		// _fadeAmount.onValueChanged.RemoveListener(UpdateFade);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = __this->____fadeAmount_5;
		NullCheck(L_3);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_4;
		L_4 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_3, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_5 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_5, __this, (intptr_t)((void*)lineSettings_UpdateFade_mA830B84B5F98E9460EDE5F3833609D704EA62E88_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9(L_4, L_5, UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9_RuntimeMethod_var);
		// _angle.onValueChanged.RemoveListener(UpdateAngle);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_6 = __this->____angle_6;
		NullCheck(L_6);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_7;
		L_7 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_6, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_8 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_8, __this, (intptr_t)((void*)lineSettings_UpdateAngle_mD1739C22A1BB1CBF4C523475F45B8C41BB337B74_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9(L_7, L_8, UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9_RuntimeMethod_var);
		// _length.onValueChanged.RemoveListener(UpdateLength);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_9 = __this->____length_7;
		NullCheck(L_9);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_10;
		L_10 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_9, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_11 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_11, __this, (intptr_t)((void*)lineSettings_UpdateLength_m403EE6B94BD7CD751E8610FC828D80D07FEB9EF5_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9(L_10, L_11, UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9_RuntimeMethod_var);
		// _width.onValueChanged.RemoveListener(UpdateWidth);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_12 = __this->____width_8;
		NullCheck(L_12);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_13;
		L_13 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_12, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_14 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_14, __this, (intptr_t)((void*)lineSettings_UpdateWidth_m42DCEAAB5AB8FAEE8DD33D7A0E56DBC55A256A68_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9(L_13, L_14, UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.lineSettings::UpdateFade(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lineSettings_UpdateFade_mA830B84B5F98E9460EDE5F3833609D704EA62E88 (lineSettings_t643AAC879365116F3D0C91FAACF037093A063632* __this, float ___fade0, const RuntimeMethod* method) 
{
	{
		// _projector.FadeAmount = fade;
		LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F* L_0 = __this->____projector_9;
		float L_1 = ___fade0;
		NullCheck(L_0);
		LineRegionProjector_set_FadeAmount_m992F8F8E99BB93D73A0CBC5C5DC96CFCCF515C61(L_0, L_1, NULL);
		// _projector.UpdateProjectors();
		LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F* L_2 = __this->____projector_9;
		NullCheck(L_2);
		LineRegionProjector_UpdateProjectors_m7F245182643DEAFA73C6BA8DA1A9A4E13FC9185D(L_2, NULL);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.lineSettings::UpdateAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lineSettings_UpdateAngle_mD1739C22A1BB1CBF4C523475F45B8C41BB337B74 (lineSettings_t643AAC879365116F3D0C91FAACF037093A063632* __this, float ___angle0, const RuntimeMethod* method) 
{
	{
		// _projector.Angle = angle;
		LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F* L_0 = __this->____projector_9;
		float L_1 = ___angle0;
		NullCheck(L_0);
		LineRegionProjector_set_Angle_m2E42FC6275301C6029B76237CAF604C7477A70CB(L_0, L_1, NULL);
		// _projector.UpdateProjectors();
		LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F* L_2 = __this->____projector_9;
		NullCheck(L_2);
		LineRegionProjector_UpdateProjectors_m7F245182643DEAFA73C6BA8DA1A9A4E13FC9185D(L_2, NULL);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.lineSettings::UpdateLength(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lineSettings_UpdateLength_m403EE6B94BD7CD751E8610FC828D80D07FEB9EF5 (lineSettings_t643AAC879365116F3D0C91FAACF037093A063632* __this, float ___length0, const RuntimeMethod* method) 
{
	{
		// _projector.Length = length;
		LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F* L_0 = __this->____projector_9;
		float L_1 = ___length0;
		NullCheck(L_0);
		LineRegionProjector_set_Length_mBBDFF7E648BB811A5A5FE9602D73C30323BABD70(L_0, L_1, NULL);
		// _projector.UpdateProjectors();
		LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F* L_2 = __this->____projector_9;
		NullCheck(L_2);
		LineRegionProjector_UpdateProjectors_m7F245182643DEAFA73C6BA8DA1A9A4E13FC9185D(L_2, NULL);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.lineSettings::UpdateWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lineSettings_UpdateWidth_m42DCEAAB5AB8FAEE8DD33D7A0E56DBC55A256A68 (lineSettings_t643AAC879365116F3D0C91FAACF037093A063632* __this, float ___width0, const RuntimeMethod* method) 
{
	{
		// _projector.Width = width;
		LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F* L_0 = __this->____projector_9;
		float L_1 = ___width0;
		NullCheck(L_0);
		LineRegionProjector_set_Width_m77EADEEA025DB54714E881D377774C38613C5CA3(L_0, L_1, NULL);
		// _projector.UpdateProjectors();
		LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F* L_2 = __this->____projector_9;
		NullCheck(L_2);
		LineRegionProjector_UpdateProjectors_m7F245182643DEAFA73C6BA8DA1A9A4E13FC9185D(L_2, NULL);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.lineSettings::UpdateFill(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lineSettings_UpdateFill_m6D5B543DCFB3232E57949C8287202F6B0D10F4DF (lineSettings_t643AAC879365116F3D0C91FAACF037093A063632* __this, float ___arc0, const RuntimeMethod* method) 
{
	{
		// _projector.FillProgress = arc;
		LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F* L_0 = __this->____projector_9;
		float L_1 = ___arc0;
		NullCheck(L_0);
		LineRegionProjector_set_FillProgress_mE7A0D789DFC86E55576EF6FC81F46D74B496212B(L_0, L_1, NULL);
		// _projector.UpdateProjectors();
		LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F* L_2 = __this->____projector_9;
		NullCheck(L_2);
		LineRegionProjector_UpdateProjectors_m7F245182643DEAFA73C6BA8DA1A9A4E13FC9185D(L_2, NULL);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.lineSettings::ChangeIndicator(DTT.AreaOfEffectRegions.LineRegionProjector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lineSettings_ChangeIndicator_m78E5D39E6E10E04D3F5F1C8266A80B7C2566E961 (lineSettings_t643AAC879365116F3D0C91FAACF037093A063632* __this, LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F* ___indic0, const RuntimeMethod* method) 
{
	{
		// RemoveListerner();
		lineSettings_RemoveListerner_m772AA2F5963B682F38CA317FB13DE03430C82D2E(__this, NULL);
		// InitializeSlider();
		lineSettings_InitializeSlider_m178F104DB954B01C4283D7E6E1ECABE1516B9D97(__this, NULL);
		// _projector = indic;
		LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F* L_0 = ___indic0;
		__this->____projector_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____projector_9), (void*)L_0);
		// InitializeIndicator();
		lineSettings_InitializeIndicator_m7BEFED027C32162117DB88BA1647263B9D01C58C(__this, NULL);
		// InitializeValues();
		lineSettings_InitializeValues_m61699CD07CF44D8767A87BC132C2DB8442086D47(__this, NULL);
		// AddListener();
		lineSettings_AddListener_m36B9876A1B5F602B2C719E92B945E7A076B693F5(__this, NULL);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.lineSettings::InitializeIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lineSettings_InitializeIndicator_m7BEFED027C32162117DB88BA1647263B9D01C58C (lineSettings_t643AAC879365116F3D0C91FAACF037093A063632* __this, const RuntimeMethod* method) 
{
	{
		// private void InitializeIndicator() => _projector.Length = 15;
		LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F* L_0 = __this->____projector_9;
		NullCheck(L_0);
		LineRegionProjector_set_Length_mBBDFF7E648BB811A5A5FE9602D73C30323BABD70(L_0, (15.0f), NULL);
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.lineSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lineSettings__ctor_m29928120792571E53DB369AA1364A346D4DA4AC6 (lineSettings_t643AAC879365116F3D0C91FAACF037093A063632* __this, const RuntimeMethod* method) 
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
// System.Void DTT.AreaOfEffectRegions.Demo.ScatterLineSettings::InitializeValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScatterLineSettings_InitializeValues_m9767E7BA3E6CC0B8AAC2E2CB859FFD9ED98EEE6C (ScatterLineSettings_t8E4138E4EA614FADB824050BD77459C7CA16A9C7* __this, const RuntimeMethod* method) 
{
	{
		// _fillProgress.value = _projector.FillProgress;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->____fillProgress_4;
		ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* L_1 = __this->____projector_13;
		NullCheck(L_1);
		float L_2;
		L_2 = ScatterLineRegionProjector_get_FillProgress_m9ED31825EA0F76D03EB7F5C5DDFD23F6021ED5BA_inline(L_1, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, L_2);
		// _fadeAmount.value = _projector.FadeAmount;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = __this->____fadeAmount_5;
		ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* L_4 = __this->____projector_13;
		NullCheck(L_4);
		float L_5;
		L_5 = ScatterLineRegionProjector_get_FadeAmount_m6F2064CCAD15E2426A1DDB60FA2E599D09C191E8_inline(L_4, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_3, L_5);
		// _arc.value = _projector.Arc;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_6 = __this->____arc_6;
		ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* L_7 = __this->____projector_13;
		NullCheck(L_7);
		float L_8;
		L_8 = ScatterLineRegionProjector_get_Arc_m06338451DF8D9E57CAB4B912D69E910A1F65951B_inline(L_7, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_6, L_8);
		// _length.value = _projector.Length;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_9 = __this->____length_7;
		ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* L_10 = __this->____projector_13;
		NullCheck(L_10);
		float L_11;
		L_11 = ScatterLineRegionProjector_get_Length_m7F1B50250A03005B346673E85805F9E32543629F_inline(L_10, NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_9, L_11);
		// _width.value = _projector.Width;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_12 = __this->____width_8;
		ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* L_13 = __this->____projector_13;
		NullCheck(L_13);
		float L_14;
		L_14 = ScatterLineRegionProjector_get_Width_mC52DF0BD65096DF3330821263014E754232BAF35_inline(L_13, NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_12, L_14);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.ScatterLineSettings::InitializeSlider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScatterLineSettings_InitializeSlider_m81101441ABDFD08AFC0824A24F4CB114C9E158C1 (ScatterLineSettings_t8E4138E4EA614FADB824050BD77459C7CA16A9C7* __this, const RuntimeMethod* method) 
{
	{
		// _fillProgress.maxValue = 1;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->____fillProgress_4;
		NullCheck(L_0);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_0, (1.0f), NULL);
		// _fillProgress.minValue = 0;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = __this->____fillProgress_4;
		NullCheck(L_1);
		Slider_set_minValue_mC4D1F7709276A9A418F9284A04799FF767DEDC4F(L_1, (0.0f), NULL);
		// _fadeAmount.maxValue = 1;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_2 = __this->____fadeAmount_5;
		NullCheck(L_2);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_2, (1.0f), NULL);
		// _fadeAmount.minValue = 0;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = __this->____fadeAmount_5;
		NullCheck(L_3);
		Slider_set_minValue_mC4D1F7709276A9A418F9284A04799FF767DEDC4F(L_3, (0.0f), NULL);
		// _arc.maxValue = 360;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = __this->____arc_6;
		NullCheck(L_4);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_4, (360.0f), NULL);
		// _arc.minValue = 0;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_5 = __this->____arc_6;
		NullCheck(L_5);
		Slider_set_minValue_mC4D1F7709276A9A418F9284A04799FF767DEDC4F(L_5, (0.0f), NULL);
		// _length.maxValue = 100;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_6 = __this->____length_7;
		NullCheck(L_6);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_6, (100.0f), NULL);
		// _length.minValue = 25;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_7 = __this->____length_7;
		NullCheck(L_7);
		Slider_set_minValue_mC4D1F7709276A9A418F9284A04799FF767DEDC4F(L_7, (25.0f), NULL);
		// _width.maxValue = 25;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_8 = __this->____width_8;
		NullCheck(L_8);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_8, (25.0f), NULL);
		// _width.minValue = 1;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_9 = __this->____width_8;
		NullCheck(L_9);
		Slider_set_minValue_mC4D1F7709276A9A418F9284A04799FF767DEDC4F(L_9, (1.0f), NULL);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.ScatterLineSettings::AddListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScatterLineSettings_AddListener_mD4B487A238CF653C91D1A33FF881653277EDB38D (ScatterLineSettings_t8E4138E4EA614FADB824050BD77459C7CA16A9C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScatterLineSettings_AddLine_m38676800395DC8A962D4163A1A75393BC089FF7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScatterLineSettings_RemoveLine_mAC32415240F9D7AE8B69C7DA864018E34D090CC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScatterLineSettings_UpdateArc_m342F1F6B6DD43214C475CFAFB94839A0DBFB78E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScatterLineSettings_UpdateFade_m92D2D1D555D21E591DB6C5C1ABE28F8969F2522B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScatterLineSettings_UpdateFill_m070C84EFBCDEFF513C752E5779DE8FD23C3E51C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScatterLineSettings_UpdateLength_m0624654AB3F3C0D9C62030EE403D181FE3B9981E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScatterLineSettings_UpdateWidth_m79E3CBEDF310BB41604ACEE53C5DC82DBE76D24A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _fillProgress.onValueChanged.AddListener(UpdateFill);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->____fillProgress_4;
		NullCheck(L_0);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_1;
		L_1 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_0, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_2 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_2, __this, (intptr_t)((void*)ScatterLineSettings_UpdateFill_m070C84EFBCDEFF513C752E5779DE8FD23C3E51C2_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC(L_1, L_2, UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		// _fadeAmount.onValueChanged.AddListener(UpdateFade);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = __this->____fadeAmount_5;
		NullCheck(L_3);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_4;
		L_4 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_3, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_5 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_5, __this, (intptr_t)((void*)ScatterLineSettings_UpdateFade_m92D2D1D555D21E591DB6C5C1ABE28F8969F2522B_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC(L_4, L_5, UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		// _arc.onValueChanged.AddListener(UpdateArc);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_6 = __this->____arc_6;
		NullCheck(L_6);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_7;
		L_7 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_6, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_8 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_8, __this, (intptr_t)((void*)ScatterLineSettings_UpdateArc_m342F1F6B6DD43214C475CFAFB94839A0DBFB78E9_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC(L_7, L_8, UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		// _plusButton.onClick.AddListener(AddLine);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_9 = __this->____plusButton_9;
		NullCheck(L_9);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_10;
		L_10 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_9, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_11 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_11, __this, (intptr_t)((void*)ScatterLineSettings_AddLine_m38676800395DC8A962D4163A1A75393BC089FF7E_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_10, L_11, NULL);
		// _minusButton.onClick.AddListener(RemoveLine);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_12 = __this->____minusButton_10;
		NullCheck(L_12);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_13;
		L_13 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_12, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_14 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_14, __this, (intptr_t)((void*)ScatterLineSettings_RemoveLine_mAC32415240F9D7AE8B69C7DA864018E34D090CC2_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_13, L_14, NULL);
		// _length.onValueChanged.AddListener(UpdateLength);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_15 = __this->____length_7;
		NullCheck(L_15);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_16;
		L_16 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_15, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_17 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_17, __this, (intptr_t)((void*)ScatterLineSettings_UpdateLength_m0624654AB3F3C0D9C62030EE403D181FE3B9981E_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC(L_16, L_17, UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		// _width.onValueChanged.AddListener(UpdateWidth);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_18 = __this->____width_8;
		NullCheck(L_18);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_19;
		L_19 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_18, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_20 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_20, __this, (intptr_t)((void*)ScatterLineSettings_UpdateWidth_m79E3CBEDF310BB41604ACEE53C5DC82DBE76D24A_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC(L_19, L_20, UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.ScatterLineSettings::RemoveListerner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScatterLineSettings_RemoveListerner_m3D77326829D9DE79E0B8E10EC3DC0D2D284F31B1 (ScatterLineSettings_t8E4138E4EA614FADB824050BD77459C7CA16A9C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScatterLineSettings_AddLine_m38676800395DC8A962D4163A1A75393BC089FF7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScatterLineSettings_RemoveLine_mAC32415240F9D7AE8B69C7DA864018E34D090CC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScatterLineSettings_UpdateArc_m342F1F6B6DD43214C475CFAFB94839A0DBFB78E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScatterLineSettings_UpdateFade_m92D2D1D555D21E591DB6C5C1ABE28F8969F2522B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScatterLineSettings_UpdateFill_m070C84EFBCDEFF513C752E5779DE8FD23C3E51C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScatterLineSettings_UpdateLength_m0624654AB3F3C0D9C62030EE403D181FE3B9981E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScatterLineSettings_UpdateWidth_m79E3CBEDF310BB41604ACEE53C5DC82DBE76D24A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _fillProgress.onValueChanged.RemoveListener(UpdateFill);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->____fillProgress_4;
		NullCheck(L_0);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_1;
		L_1 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_0, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_2 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_2, __this, (intptr_t)((void*)ScatterLineSettings_UpdateFill_m070C84EFBCDEFF513C752E5779DE8FD23C3E51C2_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9(L_1, L_2, UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9_RuntimeMethod_var);
		// _fadeAmount.onValueChanged.RemoveListener(UpdateFade);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = __this->____fadeAmount_5;
		NullCheck(L_3);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_4;
		L_4 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_3, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_5 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_5, __this, (intptr_t)((void*)ScatterLineSettings_UpdateFade_m92D2D1D555D21E591DB6C5C1ABE28F8969F2522B_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9(L_4, L_5, UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9_RuntimeMethod_var);
		// _arc.onValueChanged.RemoveListener(UpdateArc);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_6 = __this->____arc_6;
		NullCheck(L_6);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_7;
		L_7 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_6, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_8 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_8, __this, (intptr_t)((void*)ScatterLineSettings_UpdateArc_m342F1F6B6DD43214C475CFAFB94839A0DBFB78E9_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9(L_7, L_8, UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9_RuntimeMethod_var);
		// _plusButton.onClick.RemoveListener(AddLine);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_9 = __this->____plusButton_9;
		NullCheck(L_9);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_10;
		L_10 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_9, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_11 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_11, __this, (intptr_t)((void*)ScatterLineSettings_AddLine_m38676800395DC8A962D4163A1A75393BC089FF7E_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_10, L_11, NULL);
		// _minusButton.onClick.RemoveListener(RemoveLine);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_12 = __this->____minusButton_10;
		NullCheck(L_12);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_13;
		L_13 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_12, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_14 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_14, __this, (intptr_t)((void*)ScatterLineSettings_RemoveLine_mAC32415240F9D7AE8B69C7DA864018E34D090CC2_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_13, L_14, NULL);
		// _length.onValueChanged.RemoveListener(UpdateLength);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_15 = __this->____length_7;
		NullCheck(L_15);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_16;
		L_16 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_15, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_17 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_17, __this, (intptr_t)((void*)ScatterLineSettings_UpdateLength_m0624654AB3F3C0D9C62030EE403D181FE3B9981E_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9(L_16, L_17, UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9_RuntimeMethod_var);
		// _width.onValueChanged.RemoveListener(UpdateWidth);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_18 = __this->____width_8;
		NullCheck(L_18);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_19;
		L_19 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_18, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_20 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_20, __this, (intptr_t)((void*)ScatterLineSettings_UpdateWidth_m79E3CBEDF310BB41604ACEE53C5DC82DBE76D24A_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9(L_19, L_20, UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.ScatterLineSettings::AddLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScatterLineSettings_AddLine_m38676800395DC8A962D4163A1A75393BC089FF7E (ScatterLineSettings_t8E4138E4EA614FADB824050BD77459C7CA16A9C7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// _projector.Add(1);
		ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* L_0 = __this->____projector_13;
		NullCheck(L_0);
		ScatterLineRegionProjector_Add_mBD7C3C0C9AEE99218EE233F526ACD49CA3084965(L_0, 1, NULL);
		// _countInfo.text = (_projector.NumberOfLines+1).ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->____countInfo_11;
		ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* L_2 = __this->____projector_13;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ScatterLineRegionProjector_get_NumberOfLines_mE88EF4754F06C997D708B9DD67545F1844275E10(L_2, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.ScatterLineSettings::RemoveLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScatterLineSettings_RemoveLine_mAC32415240F9D7AE8B69C7DA864018E34D090CC2 (ScatterLineSettings_t8E4138E4EA614FADB824050BD77459C7CA16A9C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_1 = NULL;
	{
		// _projector.Remove(1);
		ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* L_0 = __this->____projector_13;
		NullCheck(L_0);
		ScatterLineRegionProjector_Remove_m8193A44CDDF614BC3D6896656C0DA52217B94608(L_0, 1, NULL);
		// _countInfo.text = _projector.NumberOfLines == 1 ? "1" : (_projector.NumberOfLines-1).ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->____countInfo_11;
		ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* L_2 = __this->____projector_13;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ScatterLineRegionProjector_get_NumberOfLines_mE88EF4754F06C997D708B9DD67545F1844275E10(L_2, NULL);
		G_B1_0 = L_1;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			G_B2_0 = L_1;
			goto IL_0037;
		}
	}
	{
		ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* L_4 = __this->____projector_13;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = ScatterLineRegionProjector_get_NumberOfLines_mE88EF4754F06C997D708B9DD67545F1844275E10(L_4, NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_003c;
	}

IL_0037:
	{
		G_B3_0 = _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
		G_B3_1 = G_B2_0;
	}

IL_003c:
	{
		NullCheck(G_B3_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.ScatterLineSettings::UpdateFade(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScatterLineSettings_UpdateFade_m92D2D1D555D21E591DB6C5C1ABE28F8969F2522B (ScatterLineSettings_t8E4138E4EA614FADB824050BD77459C7CA16A9C7* __this, float ___fade0, const RuntimeMethod* method) 
{
	{
		// _projector.FadeAmount = fade;
		ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* L_0 = __this->____projector_13;
		float L_1 = ___fade0;
		NullCheck(L_0);
		ScatterLineRegionProjector_set_FadeAmount_m7CDDE5A905A2F32EF13B074A8B1B3D9F00F24BC8(L_0, L_1, NULL);
		// _projector.UpdateLines();
		ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* L_2 = __this->____projector_13;
		NullCheck(L_2);
		ScatterLineRegionProjector_UpdateLines_m5B3ADAD7A5EF7882090DE64820EEB4ACF2BC4589(L_2, NULL);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.ScatterLineSettings::UpdateArc(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScatterLineSettings_UpdateArc_m342F1F6B6DD43214C475CFAFB94839A0DBFB78E9 (ScatterLineSettings_t8E4138E4EA614FADB824050BD77459C7CA16A9C7* __this, float ___arc0, const RuntimeMethod* method) 
{
	{
		// _projector.Arc = arc;
		ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* L_0 = __this->____projector_13;
		float L_1 = ___arc0;
		NullCheck(L_0);
		ScatterLineRegionProjector_set_Arc_mCA2E1BAB9EAD918105188AC8C5D3355317893DA5(L_0, L_1, NULL);
		// _projector.UpdateLines();
		ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* L_2 = __this->____projector_13;
		NullCheck(L_2);
		ScatterLineRegionProjector_UpdateLines_m5B3ADAD7A5EF7882090DE64820EEB4ACF2BC4589(L_2, NULL);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.ScatterLineSettings::UpdateLength(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScatterLineSettings_UpdateLength_m0624654AB3F3C0D9C62030EE403D181FE3B9981E (ScatterLineSettings_t8E4138E4EA614FADB824050BD77459C7CA16A9C7* __this, float ___length0, const RuntimeMethod* method) 
{
	{
		// _projector.Length = length;
		ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* L_0 = __this->____projector_13;
		float L_1 = ___length0;
		NullCheck(L_0);
		ScatterLineRegionProjector_set_Length_m16E58943276E51BE03B7CFC3C15AA05A7ACD13EB(L_0, L_1, NULL);
		// _projector.UpdateLines();
		ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* L_2 = __this->____projector_13;
		NullCheck(L_2);
		ScatterLineRegionProjector_UpdateLines_m5B3ADAD7A5EF7882090DE64820EEB4ACF2BC4589(L_2, NULL);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.ScatterLineSettings::UpdateWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScatterLineSettings_UpdateWidth_m79E3CBEDF310BB41604ACEE53C5DC82DBE76D24A (ScatterLineSettings_t8E4138E4EA614FADB824050BD77459C7CA16A9C7* __this, float ___width0, const RuntimeMethod* method) 
{
	{
		// _projector.Width = width;
		ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* L_0 = __this->____projector_13;
		float L_1 = ___width0;
		NullCheck(L_0);
		ScatterLineRegionProjector_set_Width_m175CDE7B391FCD31E1A0B9975D81A6BAC55324A5(L_0, L_1, NULL);
		// _projector.UpdateLines();
		ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* L_2 = __this->____projector_13;
		NullCheck(L_2);
		ScatterLineRegionProjector_UpdateLines_m5B3ADAD7A5EF7882090DE64820EEB4ACF2BC4589(L_2, NULL);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.ScatterLineSettings::UpdateFill(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScatterLineSettings_UpdateFill_m070C84EFBCDEFF513C752E5779DE8FD23C3E51C2 (ScatterLineSettings_t8E4138E4EA614FADB824050BD77459C7CA16A9C7* __this, float ___arc0, const RuntimeMethod* method) 
{
	{
		// _projector.FillProgress = arc;
		ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* L_0 = __this->____projector_13;
		float L_1 = ___arc0;
		NullCheck(L_0);
		ScatterLineRegionProjector_set_FillProgress_mC06E1AEE777A99E88B38F5981057BDCCD1B3BAE7(L_0, L_1, NULL);
		// _projector.UpdateLines();
		ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* L_2 = __this->____projector_13;
		NullCheck(L_2);
		ScatterLineRegionProjector_UpdateLines_m5B3ADAD7A5EF7882090DE64820EEB4ACF2BC4589(L_2, NULL);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.ScatterLineSettings::ChangeIndicator(DTT.AreaOfEffectRegions.ScatterLineRegionProjector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScatterLineSettings_ChangeIndicator_mB47DE421C0556DB5C89E3567F59658710C0530E9 (ScatterLineSettings_t8E4138E4EA614FADB824050BD77459C7CA16A9C7* __this, ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* ___indic0, const RuntimeMethod* method) 
{
	{
		// RemoveListerner();
		ScatterLineSettings_RemoveListerner_m3D77326829D9DE79E0B8E10EC3DC0D2D284F31B1(__this, NULL);
		// InitializeSlider();
		ScatterLineSettings_InitializeSlider_m81101441ABDFD08AFC0824A24F4CB114C9E158C1(__this, NULL);
		// _count = indic.NumberOfLines;
		ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* L_0 = ___indic0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ScatterLineRegionProjector_get_NumberOfLines_mE88EF4754F06C997D708B9DD67545F1844275E10(L_0, NULL);
		__this->____count_12 = L_1;
		// _countInfo.text = _count.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->____countInfo_11;
		int32_t* L_3 = (&__this->____count_12);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_4);
		// _projector = indic;
		ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* L_5 = ___indic0;
		__this->____projector_13 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____projector_13), (void*)L_5);
		// InitializeIndicator();
		ScatterLineSettings_InitializeIndicator_mC21DE4936FD42605C622759DC9818815A6E0401E(__this, NULL);
		// InitializeValues();
		ScatterLineSettings_InitializeValues_m9767E7BA3E6CC0B8AAC2E2CB859FFD9ED98EEE6C(__this, NULL);
		// AddListener();
		ScatterLineSettings_AddListener_mD4B487A238CF653C91D1A33FF881653277EDB38D(__this, NULL);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.ScatterLineSettings::InitializeIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScatterLineSettings_InitializeIndicator_mC21DE4936FD42605C622759DC9818815A6E0401E (ScatterLineSettings_t8E4138E4EA614FADB824050BD77459C7CA16A9C7* __this, const RuntimeMethod* method) 
{
	{
		// private void InitializeIndicator() => _projector.Length = 15;
		ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* L_0 = __this->____projector_13;
		NullCheck(L_0);
		ScatterLineRegionProjector_set_Length_m16E58943276E51BE03B7CFC3C15AA05A7ACD13EB(L_0, (15.0f), NULL);
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.ScatterLineSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScatterLineSettings__ctor_m200D644BA5E03FA49B5B00759C162B316F836DD6 (ScatterLineSettings_t8E4138E4EA614FADB824050BD77459C7CA16A9C7* __this, const RuntimeMethod* method) 
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
// System.Void DTT.AreaOfEffectRegions.Demo.SettingsHandler::UpdateSettings(UnityEngine.GameObject,DTT.AreaOfEffectRegions.Demo.ProjectorType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsHandler_UpdateSettings_m307E91A276357AE6502087E4CC6769500D7F6C7C (SettingsHandler_tB636B5A74BCFB7A3A01608E4CCD0FDFFF4F8CF47* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___newindicator0, int32_t ___type1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5_mEDE8705D63483A4CAAC934FA9BFB0E494A19BDC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCircleRegionProjector_t4620C0C797FE7C92C07CA7D806A32916B91B3B15_mD48734997407D8FE3765CAFBC47210E4EB4B81E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F_mB54F69C3AEB28A70919086078C9D6E8BCA4BB92C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC_m4330D64899951209694626A43798C696B966079D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___type1;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_003e;
			}
			case 2:
			{
				goto IL_0061;
			}
			case 3:
			{
				goto IL_0084;
			}
		}
	}
	{
		goto IL_00a7;
	}

IL_001b:
	{
		// _arcSettings.ChangeIndicator(newindicator.GetComponent<ArcRegionProjector>());
		ArcSettings_tC23AB06EAF151A4B75FC755A45A7B9F7267A4421* L_1 = __this->____arcSettings_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___newindicator0;
		NullCheck(L_2);
		ArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5* L_3;
		L_3 = GameObject_GetComponent_TisArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5_mEDE8705D63483A4CAAC934FA9BFB0E494A19BDC3(L_2, GameObject_GetComponent_TisArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5_mEDE8705D63483A4CAAC934FA9BFB0E494A19BDC3_RuntimeMethod_var);
		NullCheck(L_1);
		ArcSettings_ChangeIndicator_m1C21B6F4377513A3B37821C2E6FCA6AAE447FC47(L_1, L_3, NULL);
		// ShowSettings(_arcSettings.gameObject);
		ArcSettings_tC23AB06EAF151A4B75FC755A45A7B9F7267A4421* L_4 = __this->____arcSettings_4;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		SettingsHandler_ShowSettings_m285DA3677A18BE9A0D2188615D1721DC6B5646F7(__this, L_5, NULL);
		// break;
		return;
	}

IL_003e:
	{
		// _circleSettings.ChangeIndicator(newindicator.GetComponent<CircleRegionProjector>());
		CircleSettings_t95DABBB997ADECE41AF8685385F8D2F1AB75E974* L_6 = __this->____circleSettings_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = ___newindicator0;
		NullCheck(L_7);
		CircleRegionProjector_t4620C0C797FE7C92C07CA7D806A32916B91B3B15* L_8;
		L_8 = GameObject_GetComponent_TisCircleRegionProjector_t4620C0C797FE7C92C07CA7D806A32916B91B3B15_mD48734997407D8FE3765CAFBC47210E4EB4B81E4(L_7, GameObject_GetComponent_TisCircleRegionProjector_t4620C0C797FE7C92C07CA7D806A32916B91B3B15_mD48734997407D8FE3765CAFBC47210E4EB4B81E4_RuntimeMethod_var);
		NullCheck(L_6);
		CircleSettings_ChangeIndicator_m253B257E8A4FC744B93769B3B6D6A85749D2B68C(L_6, L_8, NULL);
		// ShowSettings(_circleSettings.gameObject);
		CircleSettings_t95DABBB997ADECE41AF8685385F8D2F1AB75E974* L_9 = __this->____circleSettings_5;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		SettingsHandler_ShowSettings_m285DA3677A18BE9A0D2188615D1721DC6B5646F7(__this, L_10, NULL);
		// break;
		return;
	}

IL_0061:
	{
		// _lineSettings.ChangeIndicator(newindicator.GetComponent<LineRegionProjector>());
		lineSettings_t643AAC879365116F3D0C91FAACF037093A063632* L_11 = __this->____lineSettings_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = ___newindicator0;
		NullCheck(L_12);
		LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F* L_13;
		L_13 = GameObject_GetComponent_TisLineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F_mB54F69C3AEB28A70919086078C9D6E8BCA4BB92C(L_12, GameObject_GetComponent_TisLineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F_mB54F69C3AEB28A70919086078C9D6E8BCA4BB92C_RuntimeMethod_var);
		NullCheck(L_11);
		lineSettings_ChangeIndicator_m78E5D39E6E10E04D3F5F1C8266A80B7C2566E961(L_11, L_13, NULL);
		// ShowSettings(_lineSettings.gameObject);
		lineSettings_t643AAC879365116F3D0C91FAACF037093A063632* L_14 = __this->____lineSettings_6;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
		SettingsHandler_ShowSettings_m285DA3677A18BE9A0D2188615D1721DC6B5646F7(__this, L_15, NULL);
		// break;
		return;
	}

IL_0084:
	{
		// _scatterSettings.ChangeIndicator(newindicator.GetComponent<ScatterLineRegionProjector>());
		ScatterLineSettings_t8E4138E4EA614FADB824050BD77459C7CA16A9C7* L_16 = __this->____scatterSettings_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = ___newindicator0;
		NullCheck(L_17);
		ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* L_18;
		L_18 = GameObject_GetComponent_TisScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC_m4330D64899951209694626A43798C696B966079D(L_17, GameObject_GetComponent_TisScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC_m4330D64899951209694626A43798C696B966079D_RuntimeMethod_var);
		NullCheck(L_16);
		ScatterLineSettings_ChangeIndicator_mB47DE421C0556DB5C89E3567F59658710C0530E9(L_16, L_18, NULL);
		// ShowSettings(_scatterSettings.gameObject);
		ScatterLineSettings_t8E4138E4EA614FADB824050BD77459C7CA16A9C7* L_19 = __this->____scatterSettings_7;
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_19, NULL);
		SettingsHandler_ShowSettings_m285DA3677A18BE9A0D2188615D1721DC6B5646F7(__this, L_20, NULL);
		// break;
		return;
	}

IL_00a7:
	{
		// throw new ArgumentOutOfRangeException(nameof(type), type, null);
		int32_t L_21 = ___type1;
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ProjectorType_t696F3657C2D1DF101BE745F6FE7A6F00BBF44382_il2cpp_TypeInfo_var)), &L_22);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_24 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_24);
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_24, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7)), L_23, (String_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SettingsHandler_UpdateSettings_m307E91A276357AE6502087E4CC6769500D7F6C7C_RuntimeMethod_var)));
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.SettingsHandler::ShowSettings(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsHandler_ShowSettings_m285DA3677A18BE9A0D2188615D1721DC6B5646F7 (SettingsHandler_tB636B5A74BCFB7A3A01608E4CCD0FDFFF4F8CF47* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___settings0, const RuntimeMethod* method) 
{
	{
		// _scatterSettings.gameObject.SetActive(false);
		ScatterLineSettings_t8E4138E4EA614FADB824050BD77459C7CA16A9C7* L_0 = __this->____scatterSettings_7;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// _lineSettings.gameObject.SetActive(false);
		lineSettings_t643AAC879365116F3D0C91FAACF037093A063632* L_2 = __this->____lineSettings_6;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// _circleSettings.gameObject.SetActive(false);
		CircleSettings_t95DABBB997ADECE41AF8685385F8D2F1AB75E974* L_4 = __this->____circleSettings_5;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// _arcSettings.gameObject.SetActive(false);
		ArcSettings_tC23AB06EAF151A4B75FC755A45A7B9F7267A4421* L_6 = __this->____arcSettings_4;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// settings.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = ___settings0;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.SettingsHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsHandler__ctor_m5C10044D08300B819E27E975422E96DB074D3B2A (SettingsHandler_tB636B5A74BCFB7A3A01608E4CCD0FDFFF4F8CF47* __this, const RuntimeMethod* method) 
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
// System.Void DTT.AreaOfEffectRegions.Demo.TerrainHandler::ChangeState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainHandler_ChangeState_m8F3F49D2B675E8840E7FC9A880FEA006DCF15758 (TerrainHandler_tA199E733870712DC57B522813E1A32FCACA97D4D* __this, const RuntimeMethod* method) 
{
	{
		// public void ChangeState() => gameObject.SetActive(!gameObject.activeInHierarchy);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_1, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), NULL);
		return;
	}
}
// System.Void DTT.AreaOfEffectRegions.Demo.TerrainHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainHandler__ctor_mC03F39FC08EFA173D1A445344CD263D4E9626E86 (TerrainHandler_tA199E733870712DC57B522813E1A32FCACA97D4D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		__this->___U3CpositionU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* RaycastResult_get_gameObject_m77014B442B9E2D10F2CC3AEEDC07AA95CDE1E2F1_inline (RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_GameObject; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_GameObject_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MoveObject_ChangeIndicator_mBFEA9AB87D9FFCBE3C1A38EB5A4E75A08D9476E4_inline (MoveObject_t330CBE2729E7A62787EB2088F41C2F2648E00A7A* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___projector0, const RuntimeMethod* method) 
{
	{
		// public void ChangeIndicator(GameObject projector) => _projector = projector;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___projector0;
		__this->____projector_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____projector_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ArcRegionProjector_get_Angle_m2CD99483F16C796C3A3E6C3F6A43FA1E8956FBAE_inline (ArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5* __this, const RuntimeMethod* method) 
{
	{
		// get => _angle;
		float L_0 = __this->____angle_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ArcRegionProjector_get_Radius_m9FAC34360F4517ECA76473A7A4A6F74F7225A9EE_inline (ArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5* __this, const RuntimeMethod* method) 
{
	{
		// get => _radius;
		float L_0 = __this->____radius_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ArcRegionProjector_get_Arc_mFC74E7300A7D39918A55E964E680421911A208B9_inline (ArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5* __this, const RuntimeMethod* method) 
{
	{
		// get => _arc;
		float L_0 = __this->____arc_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ArcRegionProjector_get_FillProgress_m583AEFF29C0890507524E17A7B0447B3FFCA6AE7_inline (ArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5* __this, const RuntimeMethod* method) 
{
	{
		// get => _fillProgress;
		float L_0 = __this->____fillProgress_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, const RuntimeMethod* method) 
{
	{
		// public SliderEvent onValueChanged { get { return m_OnValueChanged; } set { m_OnValueChanged = value; } }
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_0 = __this->___m_OnValueChanged_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ArcRegionProjector_set_Angle_m140F62FD9F9E707BED1383824F5AC11D84682176_inline (ArcRegionProjector_tD92F9D66F37D2854CEFCFC6FD2F763BA7BC450B5* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => _angle = value;
		float L_0 = ___value0;
		__this->____angle_12 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CircleRegionProjector_get_Radius_mBD8FD056D9EE9260C1FECBD41906DE5031F10B66_inline (CircleRegionProjector_t4620C0C797FE7C92C07CA7D806A32916B91B3B15* __this, const RuntimeMethod* method) 
{
	{
		// get => _radius;
		float L_0 = __this->____radius_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CircleRegionProjector_get_FillProgress_m093C884D82AEDD4B68596366CCBBA5ECAE52FDD7_inline (CircleRegionProjector_t4620C0C797FE7C92C07CA7D806A32916B91B3B15* __this, const RuntimeMethod* method) 
{
	{
		// get => _fillProgress;
		float L_0 = __this->____fillProgress_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float LineRegionProjector_get_FillProgress_m435C08178C41DF92FE78B6EE73DEAC5A2C788CD8_inline (LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F* __this, const RuntimeMethod* method) 
{
	{
		// get => _fillProgress;
		float L_0 = __this->____fillProgress_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float LineRegionProjector_get_FadeAmount_mB5FB1748C81DCC914C6386DD42F6B3381D0F8BF1_inline (LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F* __this, const RuntimeMethod* method) 
{
	{
		// get => _fadeAmount;
		float L_0 = __this->____fadeAmount_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float LineRegionProjector_get_Angle_mE80DEDF785AC370BBD5B1D2664927A4DFA7BEDE3_inline (LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F* __this, const RuntimeMethod* method) 
{
	{
		// get => _angle;
		float L_0 = __this->____angle_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float LineRegionProjector_get_Length_mE7F932F4FBEBCE3F5287C391E1E05AFAD94BE410_inline (LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F* __this, const RuntimeMethod* method) 
{
	{
		// get => _length;
		float L_0 = __this->____length_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float LineRegionProjector_get_Width_m85F88522328A432F1752BFE92F724E7233855354_inline (LineRegionProjector_t53E2AE54081C0DAC8ACA7493327B188FA465595F* __this, const RuntimeMethod* method) 
{
	{
		// get => _width;
		float L_0 = __this->____width_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ScatterLineRegionProjector_get_FillProgress_m9ED31825EA0F76D03EB7F5C5DDFD23F6021ED5BA_inline (ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* __this, const RuntimeMethod* method) 
{
	{
		// get => _fillProgress;
		float L_0 = __this->____fillProgress_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ScatterLineRegionProjector_get_FadeAmount_m6F2064CCAD15E2426A1DDB60FA2E599D09C191E8_inline (ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* __this, const RuntimeMethod* method) 
{
	{
		// get => _fadeAmount;
		float L_0 = __this->____fadeAmount_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ScatterLineRegionProjector_get_Arc_m06338451DF8D9E57CAB4B912D69E910A1F65951B_inline (ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* __this, const RuntimeMethod* method) 
{
	{
		// get => _arc;
		float L_0 = __this->____arc_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ScatterLineRegionProjector_get_Length_m7F1B50250A03005B346673E85805F9E32543629F_inline (ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* __this, const RuntimeMethod* method) 
{
	{
		// get => _length;
		float L_0 = __this->____length_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ScatterLineRegionProjector_get_Width_mC52DF0BD65096DF3330821263014E754232BAF35_inline (ScatterLineRegionProjector_t097473EBA22BF99874E4DD9D43BCC2D67F488CCC* __this, const RuntimeMethod* method) 
{
	{
		// get => _width;
		float L_0 = __this->____width_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
