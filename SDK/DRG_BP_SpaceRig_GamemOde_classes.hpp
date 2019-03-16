#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_SpaceRig_GamemOde_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C
// 0x0029 (0x05D1 - 0x05A8)
class ABP_SpaceRig_Gamemode_C : public AFSDGameModeSpaceRig
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UDifficultyManager*                          DifficultyManager;                                        // 0x05B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x05B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class ABP_CabinController_C*>               Cabins;                                                   // 0x05C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	bool                                               StartedSession;                                           // 0x05D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C");
		return ptr;
	}


	bool PlayerCanRestart(class APlayerController* Player);
	void SendMissionStartAnalytics();
	void FindOwnedCabin(class AController* Player, class ABP_CabinController_C** Cabin);
	void FreeCabin(class ABP_PlayerController_SpaceRig_C* Player);
	void AssignCabin(class AController* Player, class ABP_CabinController_C** Cabin);
	void FindCabins();
	void SelectRandomAvailableClass(class AFSDPlayerState* Player);
	class AActor* ChoosePlayerStart(class AController* Player);
	void GetGameState(class ABP_GameState_SpaceRig_C** GameState);
	class UClass* GetDefaultPawnClassForController(class AController* InController);
	void UserConstructionScript();
	void OnFailure_1E75EB674DDE2C1E6C7EC18D18AFDB55();
	void OnSuccess_1E75EB674DDE2C1E6C7EC18D18AFDB55();
	void ReceiveBeginPlay();
	void OnCountdownComplete();
	void K2_OnLogout(class AController* ExitingController);
	void K2_OnRestartPlayer(class AController* NewPlayer);
	void ControllerReady(class AFSDPlayerController* Target);
	void InstantlyStartMission();
	void ExecuteUbergraph_BP_SpaceRig_Gamemode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
