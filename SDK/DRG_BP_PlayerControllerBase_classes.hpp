#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_PlayerControllerBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerControllerBase.BP_PlayerControllerBase_C
// 0x0058 (0x0888 - 0x0830)
class ABP_PlayerControllerBase_C : public AFSDPlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0830(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FScriptMulticastDelegate                    ReplyToInviteRequest;                                     // 0x0838(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	class UBP_Invitation_C*                            InviteRequest;                                            // 0x0848(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              InviteTimeElapsed;                                        // 0x0850(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0854(0x0004) MISSED OFFSET
	struct FDateTime                                   InviteWaitTime;                                           // 0x0858(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UMENU_TwitchOAuth_C*                         TwitchOAuth;                                              // 0x0860(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                AnselStatus;                                              // 0x0868(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                AnselCameraTries;                                         // 0x086C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UUserWidget*                                 TwitchInteractionUI;                                      // 0x0870(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class ABP_FSDCameraManager_C*                      CameraManager;                                            // 0x0878(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTimerHandle                                AnselTimerHandle;                                         // 0x0880(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_PlayerControllerBase.BP_PlayerControllerBase_C");
		return ptr;
	}


	void SetClassAnalytics();
	void GetUnlockedPrimary(TArray<class UClass*>* Unlocked_Items);
	void SetUnlockAnalytics(TArray<class UClass*>* primary, TArray<class UClass*>* Secundary);
	void GetUnlockedSecundary(TArray<class UClass*>* Unlocked_Items);
	void CreateTwitchInteractionIfNotCreated(int ID);
	void TwitchInteraction(int ID);
	void ReStartAnsel();
	void StartAnsel();
	void StopAnsel();
	void CloseTwitchOAuth(bool ChangeStatus);
	void CreateTwitchOAuthIfNotCreated();
	void CreateInviteRequestIfNotCreated();
	void UserConstructionScript();
	void InpActEvt_AcceptInvite_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_RejectInvite_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_IgnoreInvite_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void SetPhotographyMode(bool Active);
	void Return_Client_Camera();
	void Setup_Invite_Handling();
	void Setup_Retirement_Notification();
	void OnCharacterCanRetire_Event(class UClass* CharacterClass);
	void UpdateAnalytics();
	void AdjustCamera();
	void Setup_Change_User();
	void ChangeUser();
	void ChangeUserReply(bool Yes);
	void Event_On_Join_Request_Reply(int Reply);
	void Event_On_Join_Request(const struct FDiscordUser& handleDiscordJoinRequest);
	void ExecuteUbergraph_BP_PlayerControllerBase(int EntryPoint);
	void ReplyToInviteRequest__DelegateSignature(int Reply);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
