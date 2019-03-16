#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_NetworkPlayerController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_NetworkPlayerController.BP_NetworkPlayerController_C
// 0x0050 (0x0920 - 0x08D0)
class ABP_NetworkPlayerController_C : public ABP_PlayerController_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USCREEN_CharacterSelection_Clean_C*          CharSelectScreen;                                         // 0x08D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UScreen_LoadLevel_C*                         LoaderScreenUI;                                           // 0x08E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UMenu_ServerStatus_C*                        TopBar;                                                   // 0x08E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPopup_ReconnectController_C*                ReconnectWidget;                                          // 0x08F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               ShowingReconnectcontroller;                               // 0x08F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x08F9(0x0007) MISSED OFFSET
	class UScreen_CharacterInfo_C*                     CharInfo;                                                 // 0x0900(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                MixerGiveHealthCooldownSeconds;                           // 0x0908(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                MixerSpawnDreadnaughtCooldownSeconds;                     // 0x090C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                MixerSpawn3PraeCooldown;                                  // 0x0910(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                MixerSpawnLootbugCooldown;                                // 0x0914(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                MixerSpawnGrunt;                                          // 0x0918(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                MixerNitraCooldown;                                       // 0x091C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_NetworkPlayerController.BP_NetworkPlayerController_C");
		return ptr;
	}


	void CalcMixerName(int ParticipantId, struct FString* Name);
	void GetNonTakenHero(class UClass** SelectedClass);
	void UserConstructionScript();
	void MixerButtonEvt_spawnDreadnought_Pressed(const struct FMixerButtonReference& Button, int ParticipantId, const struct FMixerTransactionId& TransactionId, int SparkCost);
	void MixerButtonEvt_spawn3Praetorians_Pressed(const struct FMixerButtonReference& Button, int ParticipantId, const struct FMixerTransactionId& TransactionId, int SparkCost);
	void MixerButtonEvt_spawnLootBug_Pressed(const struct FMixerButtonReference& Button, int ParticipantId, const struct FMixerTransactionId& TransactionId, int SparkCost);
	void MixerButtonEvt_spawnAGrunt_Pressed(const struct FMixerButtonReference& Button, int ParticipantId, const struct FMixerTransactionId& TransactionId, int SparkCost);
	void MixerButtonEvt_giveNitra_Pressed(const struct FMixerButtonReference& Button, int ParticipantId, const struct FMixerTransactionId& TransactionId, int SparkCost);
	void MixerButtonEvt_giveHealth_Pressed(const struct FMixerButtonReference& Button, int ParticipantId, const struct FMixerTransactionId& TransactionId, int SparkCost);
	void ReceiveBeginPlay();
	void OnBack();
	void OnPlayerCharacterPossesed_Event();
	void Server_RequestNonTakenHero();
	void Client_RecieveNonTakenHero(class UClass* New_Character);
	void Server_Mixer_GiveHealth();
	void Server_SetCharacterSelected();
	void ShowReconnect(bool Show);
	void ExecuteUbergraph_BP_NetworkPlayerController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
