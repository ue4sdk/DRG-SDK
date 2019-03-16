#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ENE_Spider_Grunt_Mixer1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ENE_Spider_Grunt_Mixer1.ENE_Spider_Grunt_Mixer1_C
// 0x0028 (0x05A8 - 0x0580)
class AENE_Spider_Grunt_Mixer1_C : public AENE_Spider_Grunt_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0580(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetComponent*                            MixerNameDisplay;                                         // 0x0588(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class URotateToFace*                               RotateToFace;                                             // 0x0590(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FString                                     mixerName;                                                // 0x0598(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ENE_Spider_Grunt_Mixer1.ENE_Spider_Grunt_Mixer1_C");
		return ptr;
	}


	void OnRep_MixerName();
	void UserConstructionScript();
	void OnRagdoll();
	void OnMixerNameChanged(const struct FString& mixerName);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ENE_Spider_Grunt_Mixer1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
