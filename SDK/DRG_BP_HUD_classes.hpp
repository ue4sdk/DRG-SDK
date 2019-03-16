#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_HUD_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_HUD.BP_HUD_C
// 0x0070 (0x0490 - 0x0420)
class ABP_HUD_C : public AFSDHUD
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0428(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class UWidget*>                             Widgets;                                                  // 0x0430(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class APlayerController*                           PlayerController;                                         // 0x0440(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               HudInitialized;                                           // 0x0448(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0449(0x0007) MISSED OFFSET
	class UFSDMainHUDWidget*                           HudWidget;                                                // 0x0450(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class URadarPointComponent*>                RadarPointsInQueue;                                       // 0x0458(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class APlayerCharacter*                            PlayerCharacter;                                          // 0x0468(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UWindowWidget*                               EscMenu;                                                  // 0x0470(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWindowWidget*                               CheatMenu;                                                // 0x0478(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UScreenOverlay_Afflictions_C*                AfflictionWidget;                                         // 0x0480(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBP_Invitation_C*                            InviteRequest;                                            // 0x0488(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_HUD.BP_HUD_C");
		return ptr;
	}


	void PushEvent(class UWidget* EventWidget);
	void CreateCheatsIfNotCreated();
	void RemoveAllWidgetsFromParents();
	void AddAllWidgetToViewport();
	void AddWidget(class UClass* Class, class UWidget** Widget);
	void UserConstructionScript();
	void PlayerSpawned(class APlayerCharacter* Player);
	void RadarPointAdded(class URadarPointComponent* radarPoint);
	void HandleSeamlessTravel();
	void OnVisibilityChanged();
	void ReceiveDestroyed();
	void OnHit_Event(float Damage, class UDamageClass* DamageClass, class AActor* DamageCauser, bool anyHealthLost);
	void OnShowMainMenu();
	void CheatMenuRequest();
	void ExecuteUbergraph_BP_HUD(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
