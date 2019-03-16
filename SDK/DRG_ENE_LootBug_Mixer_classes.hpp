#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ENE_LootBug_Mixer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ENE_LootBug_Mixer.ENE_LootBug_Mixer_C
// 0x002C (0x04E0 - 0x04B4)
class AENE_LootBug_Mixer_C : public AENE_LootBug_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x04B4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetComponent*                            MixerDisplayName;                                         // 0x04C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class URotateToFace*                               RotateToFace;                                             // 0x04C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FString                                     mixerName;                                                // 0x04D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ENE_LootBug_Mixer.ENE_LootBug_Mixer_C");
		return ptr;
	}


	void OnRep_MixerName();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnMixerNameChanged(const struct FString& mixerName);
	void ExecuteUbergraph_ENE_LootBug_Mixer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
