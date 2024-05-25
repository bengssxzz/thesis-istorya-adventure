#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// DTT.PublishingTools.Attributes.DTTAssetAttribute
struct DTTAssetAttribute_t7DAC17C2F4340FA9ED6764D97FD332B1FE17DFBC;
// System.String
struct String_t;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t691181DC67847DE266F123D0B39BB968767BDBB1 
{
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
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

// DTT.PublishingTools.Attributes.DTTAssetAttribute
struct DTTAssetAttribute_t7DAC17C2F4340FA9ED6764D97FD332B1FE17DFBC  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String DTT.PublishingTools.Attributes.DTTAssetAttribute::fullPackageName
	String_t* ___fullPackageName_0;
	// System.Boolean DTT.PublishingTools.Attributes.DTTAssetAttribute::isResource
	bool ___isResource_1;
	// System.String DTT.PublishingTools.Attributes.DTTAssetAttribute::relativePath
	String_t* ___relativePath_2;
	// System.String DTT.PublishingTools.Attributes.DTTAssetAttribute::assetName
	String_t* ___assetName_3;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
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
// System.Void DTT.PublishingTools.Attributes.DTTAssetAttribute::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTTAssetAttribute__ctor_mD3A90261DCA1DF646EF510194B780B488B637839 (DTTAssetAttribute_t7DAC17C2F4340FA9ED6764D97FD332B1FE17DFBC* __this, String_t* ___fullPackageName0, bool ___isResource1, const RuntimeMethod* method) 
{
	{
		// public DTTAssetAttribute(string fullPackageName, bool isResource)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.fullPackageName = fullPackageName;
		String_t* L_0 = ___fullPackageName0;
		__this->___fullPackageName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fullPackageName_0), (void*)L_0);
		// this.isResource = isResource;
		bool L_1 = ___isResource1;
		__this->___isResource_1 = L_1;
		// }
		return;
	}
}
// System.Void DTT.PublishingTools.Attributes.DTTAssetAttribute::.ctor(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTTAssetAttribute__ctor_mCAF3C029E5A1E8FE954C16AC381FA73920E3C33C (DTTAssetAttribute_t7DAC17C2F4340FA9ED6764D97FD332B1FE17DFBC* __this, String_t* ___fullPackageName0, String_t* ___assetName1, bool ___isResource2, const RuntimeMethod* method) 
{
	{
		// public DTTAssetAttribute(string fullPackageName, string assetName, bool isResource)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.fullPackageName = fullPackageName;
		String_t* L_0 = ___fullPackageName0;
		__this->___fullPackageName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fullPackageName_0), (void*)L_0);
		// this.assetName = assetName;
		String_t* L_1 = ___assetName1;
		__this->___assetName_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___assetName_3), (void*)L_1);
		// this.isResource = isResource;
		bool L_2 = ___isResource2;
		__this->___isResource_1 = L_2;
		// }
		return;
	}
}
// System.Void DTT.PublishingTools.Attributes.DTTAssetAttribute::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTTAssetAttribute__ctor_m6D9138518250BC357992650F08E0596A3A0B53A7 (DTTAssetAttribute_t7DAC17C2F4340FA9ED6764D97FD332B1FE17DFBC* __this, String_t* ___fullPackageName0, String_t* ___relativePath1, const RuntimeMethod* method) 
{
	{
		// public DTTAssetAttribute(string fullPackageName, string relativePath)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.fullPackageName = fullPackageName;
		String_t* L_0 = ___fullPackageName0;
		__this->___fullPackageName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fullPackageName_0), (void*)L_0);
		// this.relativePath = relativePath;
		String_t* L_1 = ___relativePath1;
		__this->___relativePath_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___relativePath_2), (void*)L_1);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
