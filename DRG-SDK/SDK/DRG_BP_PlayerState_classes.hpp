#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_PlayerState_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerState.BP_PlayerState_C
// 0x0029 (0x04F9 - 0x04D0)
class ABP_PlayerState_C : public AFSDPlayerState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UPlayerResourceComponent*                    PlayerResource;                                           // 0x04D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    ReadyChanged;                                             // 0x04E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	bool                                               LateJoinFinished;                                         // 0x04F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_PlayerState.BP_PlayerState_C");
		return ptr;
	}


	TArray<struct FXPReward> GetXPRewardsCustom(TMap<class UResourceData*, float> resources, int EnemiesKilled, bool FailPrimaryObjectiveCompleted, bool FailSecondaryObjectiveCompleted);
	void UserConstructionScript();
	void CharacterSelected();
	void OnLateJoinFinished();
	void ReceiveBeginPlay();
	void WaitForDropPod();
	void LogState();
	void ExecuteUbergraph_BP_PlayerState(int EntryPoint);
	void ReadyChanged__DelegateSignature(bool IsReady);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
