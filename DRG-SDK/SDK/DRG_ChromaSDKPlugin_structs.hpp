#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Basic.hpp"
#include "DRG_ChromaSDKPlugin_enums.hpp"
#include "DRG_CoreUObject_classes.hpp"
#include "DRG_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ChromaSDKPlugin.ChromaSDKColorFrame1D
// 0x0010
struct FChromaSDKColorFrame1D
{
	TArray<struct FLinearColor>                        Colors;                                                   // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct ChromaSDKPlugin.ChromaSDKColors
// 0x0010
struct FChromaSDKColors
{
	TArray<struct FLinearColor>                        Colors;                                                   // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct ChromaSDKPlugin.ChromaSDKColorFrame2D
// 0x0010
struct FChromaSDKColorFrame2D
{
	TArray<struct FChromaSDKColors>                    Colors;                                                   // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct ChromaSDKPlugin.ChromaSDKGuid
// 0x0010
struct FChromaSDKGuid
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ChromaSDKPlugin.ChromaSDKEffectResult
// 0x0014
struct FChromaSDKEffectResult
{
	int                                                Result;                                                   // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FChromaSDKGuid                              EffectId;                                                 // 0x0004(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
