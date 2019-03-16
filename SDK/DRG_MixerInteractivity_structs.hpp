#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Basic.hpp"
#include "DRG_MixerInteractivity_enums.hpp"
#include "DRG_CoreUObject_classes.hpp"
#include "DRG_Engine_classes.hpp"
#include "DRG_UMG_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MixerInteractivity.MixerButtonEventDynamicDelegateWrapper
// 0x0020
struct FMixerButtonEventDynamicDelegateWrapper
{
	struct FScriptMulticastDelegate                    PressedDelegate;                                          // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference)
	struct FScriptMulticastDelegate                    ReleasedDelegate;                                         // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference)
};

// ScriptStruct MixerInteractivity.MixerStickEventDynamicDelegateWrapper
// 0x0010
struct FMixerStickEventDynamicDelegateWrapper
{
	struct FScriptMulticastDelegate                    Delegate;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference)
};

// ScriptStruct MixerInteractivity.MixerButtonEventBinding
// 0x0018
struct FMixerButtonEventBinding
{
	struct FName                                       TargetFunctionName;                                       // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ButtonId;                                                 // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Pressed;                                                  // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct MixerInteractivity.MixerStickEventBinding
// 0x0010
struct FMixerStickEventBinding
{
	struct FName                                       TargetFunctionName;                                       // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       StickId;                                                  // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct MixerInteractivity.MixerObjectReference
// 0x0008
struct FMixerObjectReference
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct MixerInteractivity.MixerButtonReference
// 0x0000 (0x0008 - 0x0008)
struct FMixerButtonReference : public FMixerObjectReference
{

};

// ScriptStruct MixerInteractivity.MixerSceneReference
// 0x0000 (0x0008 - 0x0008)
struct FMixerSceneReference : public FMixerObjectReference
{

};

// ScriptStruct MixerInteractivity.MixerGroupReference
// 0x0000 (0x0008 - 0x0008)
struct FMixerGroupReference : public FMixerObjectReference
{

};

// ScriptStruct MixerInteractivity.MixerStickReference
// 0x0000 (0x0008 - 0x0008)
struct FMixerStickReference : public FMixerObjectReference
{

};

// ScriptStruct MixerInteractivity.MixerTransactionId
// 0x0010
struct FMixerTransactionId
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct MixerInteractivity.MixerPredefinedGroup
// 0x0010
struct FMixerPredefinedGroup
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       InitialScene;                                             // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
