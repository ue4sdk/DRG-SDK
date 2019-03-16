#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ENE_Spider_Tank_Boss_Mixer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ENE_Spider_Tank_Boss_Mixer.ENE_Spider_Tank_Boss_Mixer_C
// 0x0028 (0x05E8 - 0x05C0)
class AENE_Spider_Tank_Boss_Mixer_C : public AENE_Spider_Tank_Boss_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetComponent*                            MixerDisplayName;                                         // 0x05C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class URotateToFace*                               RotateToFace;                                             // 0x05D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FString                                     mixerName;                                                // 0x05D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ENE_Spider_Tank_Boss_Mixer.ENE_Spider_Tank_Boss_Mixer_C");
		return ptr;
	}


	void OnRep_MixerName();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnMixerNameChanged(const struct FString& mixerName);
	void ExecuteUbergraph_ENE_Spider_Tank_Boss_Mixer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
