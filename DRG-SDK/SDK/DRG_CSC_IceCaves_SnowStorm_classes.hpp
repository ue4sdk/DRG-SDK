#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_CSC_IceCaves_SnowStorm_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CSC_IceCaves_SnowStorm.CSC_IceCaves_SnowStorm_C
// 0x001C (0x010C - 0x00F0)
class UCSC_IceCaves_SnowStorm_C : public UCaveScriptComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FVector2D                                   SnowStormFrequencyMinMax;                                 // 0x00F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SnowStormProbability;                                     // 0x0100(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   SnowStormFirstInstanceDelayMinMax;                        // 0x0104(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass CSC_IceCaves_SnowStorm.CSC_IceCaves_SnowStorm_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void MatchStart();
	void ExecuteUbergraph_CSC_IceCaves_SnowStorm(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
