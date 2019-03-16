#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_GameState_SpaceRig_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GameState_SpaceRig.BP_GameState_SpaceRig_C
// 0x00B2 (0x0782 - 0x06D0)
class ABP_GameState_SpaceRig_C : public ABP_GameState_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FScriptMulticastDelegate                    OnMisionSelected;                                         // 0x06D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	float                                              MissionCountdown;                                         // 0x06E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               MissionCountdownActive;                                   // 0x06EC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x06ED(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMissionCountdownChanged;                                // 0x06F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	bool                                               HostReady;                                                // 0x0700(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               HostCountdownActive;                                      // 0x0701(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0702(0x0002) MISSED OFFSET
	float                                              HostCountdown;                                            // 0x0704(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    OnHostCountdownChanged;                                   // 0x0708(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCountdownCompleted;                                     // 0x0718(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHostTimerChanged;                                       // 0x0728(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMissionTimerChanged;                                    // 0x0738(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	bool                                               AllReady;                                                 // 0x0748(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0749(0x0007) MISSED OFFSET
	TArray<struct FBlueprintSessionResult>             ServerList;                                               // 0x0750(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnServerListChanged;                                      // 0x0760(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	TArray<struct FBlueprintSessionResult>             FullServerList;                                           // 0x0770(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	bool                                               SearchingInProgress;                                      // 0x0780(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               ForceQuickJoinSearch;                                     // 0x0781(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_GameState_SpaceRig.BP_GameState_SpaceRig_C");
		return ptr;
	}


	void OnRep_HostCountdown();
	void OnRep_HostCountdownActive();
	void OnRep_MissionTimerActive();
	void OnRep_MissionCountdown();
	void UserConstructionScript();
	void OnRefresh_3EF307534AC5AC56C0D60384C554CF10(TArray<struct FBlueprintSessionResult> Results);
	void OnFailure_3EF307534AC5AC56C0D60384C554CF10(TArray<struct FBlueprintSessionResult> Results);
	void OnSuccess_3EF307534AC5AC56C0D60384C554CF10(TArray<struct FBlueprintSessionResult> Results);
	void OnRefresh_8D994FD64F4749765ACCEC97E6E233AC(TArray<struct FBlueprintSessionResult> Results);
	void OnFailure_8D994FD64F4749765ACCEC97E6E233AC(TArray<struct FBlueprintSessionResult> Results);
	void OnSuccess_8D994FD64F4749765ACCEC97E6E233AC(TArray<struct FBlueprintSessionResult> Results);
	void ReceiveTick(float DeltaSeconds);
	void StartMissionTimer();
	void StopMissionTimer();
	void StartHostTimer();
	void StopHostTimer();
	void CountDownCompleted();
	void ReceiveBeginPlay();
	void Search();
	void ReceiveGeneratedMissionReplicated();
	void ManualRefreshServerlist();
	void ExecuteUbergraph_BP_GameState_SpaceRig(int EntryPoint);
	void OnServerListChanged__DelegateSignature();
	void OnMissionTimerChanged__DelegateSignature(float newTime);
	void OnHostTimerChanged__DelegateSignature(float newTime);
	void OnCountdownCompleted__DelegateSignature();
	void OnHostCountdownChanged__DelegateSignature(bool IsActive);
	void OnMissionCountdownChanged__DelegateSignature(bool IsActive);
	void OnMisionSelected__DelegateSignature(class UGeneratedMission* Mission);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
