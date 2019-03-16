#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_PlayerController_SpaceRig_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C
// 0x00F8 (0x0980 - 0x0888)
class ABP_PlayerController_SpaceRig_C : public ABP_PlayerControllerBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0888(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWindowWidget*                               ServerBrowser;                                            // 0x0890(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UMENU_Loadout_C*                             Loadout;                                                  // 0x0898(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWindowWidget*                               Options;                                                  // 0x08A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWindowWidget*                               MissionSelect;                                            // 0x08A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPopup_GearUpgrade_C*                        ItemScreen;                                               // 0x08B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                OldCounter;                                               // 0x08B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x08BC(0x0004) MISSED OFFSET
	TArray<class UUserWidget*>                         Widgets;                                                  // 0x08C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UPopup_GearUpgrade_Buy_C*                    PopUp_BuyUpgrade;                                         // 0x08D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FVector                                     StartLocation;                                            // 0x08D8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               CharacterPossed;                                          // 0x08E4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x08E5(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnToggleHUD;                                              // 0x08E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	class UWindowWidget*                               CharCustomization;                                        // 0x08F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWindowWidget*                               Crafting;                                                 // 0x0900(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWindowWidget*                               Popup_Crafting;                                           // 0x0908(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               ShowingReconnectcontroller;                               // 0x0910(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               IsHUDVisible;                                             // 0x0911(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0912(0x0006) MISSED OFFSET
	class USCREEN_CharacterSelection_Clean_C*          CharacterSelection;                                       // 0x0918(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               HasShownCharacterSelector;                                // 0x0920(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0921(0x0007) MISSED OFFSET
	class UWindowWidget*                               ReconnectController;                                      // 0x0928(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWindowWidget*                               NetworkError;                                             // 0x0930(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWindowWidget*                               Trading;                                                  // 0x0938(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWindowWidget*                               Cheat;                                                    // 0x0940(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWindowWidget*                               Jobs;                                                     // 0x0948(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UUI_CampaignNotificationManager_C*           C;                                                        // 0x0950(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWindowWidget*                               RetirementPopup;                                          // 0x0958(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UMENU_UpgradeScreen_C*                       ItemUpgrade;                                              // 0x0960(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               EscapeMenuEnabled;                                        // 0x0968(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0969(0x0007) MISSED OFFSET
	class UWindowWidget*                               Bosco;                                                    // 0x0970(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                Medbay_speech_counter;                                    // 0x0978(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Time_between_shouts;                                      // 0x097C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C");
		return ptr;
	}


	void SetIsEscapeMenuEnabled(bool InEscapeMenuEnabled);
	bool hudVisible();
	void ChangeHUDVisible(bool IsHUDVisible, EHUDVisibilityReason reason);
	void SelectLastPlayedCharacter();
	void AddWidget(int ZOrder, ESlateVisibility InVisibility, class UUserWidget** Widget);
	void ChangeCharacter(class UClass* NewCharacter);
	void CreateUI();
	void UserConstructionScript();
	void InpActEvt_PushToTalk_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_PushToTalk_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_O_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_MenuButton_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_Chat_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_P_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_CallDonkey_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_MapTool_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ShowServerBrowser();
	void ShowMissionSelect();
	void Client_OpenMap();
	void PlayerChangeCharacter(class UClass* NewCharacter);
	void RecievePreClientTravel();
	void ShowCharacterSelect();
	void ShowItemScreen(class UClass* itemClass);
	void ControllerReady();
	void RecieveOnControllerReady();
	void ShowBuyItemPopup(class UClass* Item, class UItemUpgrade* Upgrade);
	void ReceiveDestroyed();
	void OnCharacterPossesd();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ShowCharCustomization();
	void ShowCrafting();
	void ShowCharacterScreenAndWorld();
	void ShowCraftingAndWorld();
	void ShowCustomizationAndWorld();
	void SpawnPlayer();
	void ShowFirstCharacterSelect();
	void ShowMatchMakingRandom();
	void OpenCharacterSelector(bool OpenVideo, bool AllowBack);
	void ShowReconnectController();
	void OnFirstWindowOpened();
	void OnLastWindowClosed();
	void ShowNetworkError();
	void ShowTrading();
	void ShowWindowByClass(class UClass* windowClass, int ZOrder);
	void ShowCheatMenu();
	void ShowBarMenu(class ASpaceRigBar* Bar);
	void OnRoundSelected_Event(class ASpaceRigBar* Bar, class UDrinkableDataAsset* RequestedDrink);
	void OrderBarRound(class ASpaceRigBar* Bar, class UDrinkableDataAsset* Drink);
	void Deduct_Credits_On_Client(int Amount);
	void ShowJobs();
	void ShowItemUpgradeScreen(class UClass* CharacterClass, class UClass* itemClass, EItemCategory ItemCategory);
	void ShowBoscoUpgrades();
	void OnPlayerSpawnBegin(int PlayerId);
	void Back_Event_1();
	void OnCharacterSelected();
	void OnHostTimerChanged(float newTime);
	void OnMissionTimerChanged(float newTime);
	void DoCountDown(float newTime);
	void ShowReconnect(bool Show);
	void OnGravityChanged(float CurrentGravity, float Change);
	void ExecuteUbergraph_BP_PlayerController_SpaceRig(int EntryPoint);
	void OnToggleHUD__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
