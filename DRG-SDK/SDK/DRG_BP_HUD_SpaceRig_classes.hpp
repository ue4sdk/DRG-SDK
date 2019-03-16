#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_HUD_SpaceRig_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_HUD_SpaceRig.BP_HUD_SpaceRig_C
// 0x0030 (0x0450 - 0x0420)
class ABP_HUD_SpaceRig_C : public AFSDHUD
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0428(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class APlayerCharacter*                            PlayerCharacter;                                          // 0x0430(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UHUD_SpaceRig_C*                             HUD;                                                      // 0x0438(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class UUserWidget*>                         OwnedWidgets;                                             // 0x0440(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_HUD_SpaceRig.BP_HUD_SpaceRig_C");
		return ptr;
	}


	void UserConstructionScript();
	void PlayerSpawned(class APlayerCharacter* Player);
	void OnVisibilityChanged();
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void OnCountdownCompleted();
	void Update_Visibility();
	void Handle_Count_Down();
	void Setup_Campaign_Notifications();
	void OnCampaignNotification_Event(class UCampaignNotification* Notification);
	void Open_Campaign_Rewards_Window();
	void Setup_Retirement_Shouts();
	void OnEligibleForRetirementAssignment(class UBP_GameInstance_C* GameInstance);
	void Setup_Spacerig_Notifications();
	void Setup_UI_Notifications();
	void ExecuteUbergraph_BP_HUD_SpaceRig(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
