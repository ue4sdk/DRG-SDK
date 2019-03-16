#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Basic.hpp"
#include "DRG_MediaAssets_enums.hpp"
#include "DRG_CoreUObject_classes.hpp"
#include "DRG_MediaUtils_classes.hpp"
#include "DRG_Engine_classes.hpp"
#include "DRG_AudioMixer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MediaAssets.MediaCaptureDevice
// 0x0028
struct FMediaCaptureDevice
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Transient)
	struct FString                                     URL;                                                      // 0x0018(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
