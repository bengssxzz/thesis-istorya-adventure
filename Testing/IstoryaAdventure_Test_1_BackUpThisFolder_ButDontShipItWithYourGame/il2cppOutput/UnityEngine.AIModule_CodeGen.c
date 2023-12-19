#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Single UnityEngine.AI.NavMeshHit::get_distance()
extern void NavMeshHit_get_distance_m2B9E0F1A139278132493964480B1A833A4FCCFEB (void);
// 0x00000002 System.Void UnityEngine.AI.NavMesh::Internal_CallOnNavMeshPreUpdate()
extern void NavMesh_Internal_CallOnNavMeshPreUpdate_m2A62DB32F5E1435F527AD8A59A882B9F2A193177 (void);
// 0x00000003 System.Boolean UnityEngine.AI.NavMesh::FindClosestEdge(UnityEngine.Vector3,UnityEngine.AI.NavMeshHit&,System.Int32)
extern void NavMesh_FindClosestEdge_mB15BD11F352180085D038CBE8F1DB85CCD4D0B70 (void);
// 0x00000004 System.Boolean UnityEngine.AI.NavMesh::SamplePosition(UnityEngine.Vector3,UnityEngine.AI.NavMeshHit&,System.Single,System.Int32)
extern void NavMesh_SamplePosition_mEDAE8240217EED82B4519D4435E670A1655B2109 (void);
// 0x00000005 System.Boolean UnityEngine.AI.NavMesh::FindClosestEdge_Injected(UnityEngine.Vector3&,UnityEngine.AI.NavMeshHit&,System.Int32)
extern void NavMesh_FindClosestEdge_Injected_mDE3BC2E6BB797C58A690B2E18F601B59DC699DC2 (void);
// 0x00000006 System.Boolean UnityEngine.AI.NavMesh::SamplePosition_Injected(UnityEngine.Vector3&,UnityEngine.AI.NavMeshHit&,System.Single,System.Int32)
extern void NavMesh_SamplePosition_Injected_m57BB80634365C0545A79CC653FCFECAA1879C6F0 (void);
// 0x00000007 System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::.ctor(System.Object,System.IntPtr)
extern void OnNavMeshPreUpdate__ctor_m7142A3AA991BE50B637A16D946AB7604C64EF9BA (void);
// 0x00000008 System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::Invoke()
extern void OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914 (void);
static Il2CppMethodPointer s_methodPointers[8] = 
{
	NavMeshHit_get_distance_m2B9E0F1A139278132493964480B1A833A4FCCFEB,
	NavMesh_Internal_CallOnNavMeshPreUpdate_m2A62DB32F5E1435F527AD8A59A882B9F2A193177,
	NavMesh_FindClosestEdge_mB15BD11F352180085D038CBE8F1DB85CCD4D0B70,
	NavMesh_SamplePosition_mEDAE8240217EED82B4519D4435E670A1655B2109,
	NavMesh_FindClosestEdge_Injected_mDE3BC2E6BB797C58A690B2E18F601B59DC699DC2,
	NavMesh_SamplePosition_Injected_m57BB80634365C0545A79CC653FCFECAA1879C6F0,
	OnNavMeshPreUpdate__ctor_m7142A3AA991BE50B637A16D946AB7604C64EF9BA,
	OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914,
};
extern void NavMeshHit_get_distance_m2B9E0F1A139278132493964480B1A833A4FCCFEB_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[1] = 
{
	{ 0x06000001, NavMeshHit_get_distance_m2B9E0F1A139278132493964480B1A833A4FCCFEB_AdjustorThunk },
};
static const int32_t s_InvokerIndices[8] = 
{
	5232,
	8072,
	6389,
	5945,
	6339,
	5910,
	2364,
	5298,
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_AIModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_AIModule_CodeGenModule = 
{
	"UnityEngine.AIModule.dll",
	8,
	s_methodPointers,
	1,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
