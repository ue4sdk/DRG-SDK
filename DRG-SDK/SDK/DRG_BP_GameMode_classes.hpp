#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_GameMode_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GameMode.BP_GameMode_C
// 0x0031 (0x05C1 - 0x0590)
class ABP_GameMode_C : public AFSDGameMode
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0590(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UEnemyWaveManager*                           EnemyWaveManager;                                         // 0x0598(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UDifficultyManager*                          DifficultyManager;                                        // 0x05A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UEncounterManager*                           EncounterManager;                                         // 0x05A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x05B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FTimerHandle                                TimerHandle;                                              // 0x05B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               CanSpawnBosco;                                            // 0x05C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_GameMode.BP_GameMode_C");
		return ptr;
	}


	void LoadToMission(class UMissionTemplate* Mission);
	class UClass* GetDefaultPawnClassForController(class AController* InController);
	bool PlayersAreReady();
	void SetDesiredDifficulty();
	class AActor* ChoosePlayerStart(class AController* Player);
	void UserConstructionScript();
	void RecieveEndLevel();
	void ReceiveBeginPlay();
	void WaitForGeneration();
	void Recieve_ContinueTimerEnded();
	void Call_DropPod();
	void Trigger_End_Wave(bool cancelAllWaves);
	void SpawnBosco(const struct FTransform& Location);
	void RemoveBosco();
	void OnPlayerJoined_Event_1(class AFSDPlayerState* PlayerState);
	void DonkeyButtonPressed();
	void Handle_Bosco_Respawn();
	void OnPlayerLeave(class AFSDPlayerState* PlayerState);
	void ExecuteUbergraph_BP_GameMode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
