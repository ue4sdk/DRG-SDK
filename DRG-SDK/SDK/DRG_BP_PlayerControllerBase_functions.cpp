// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_PlayerControllerBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SetClassAnalytics
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerControllerBase_C::SetClassAnalytics()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SetClassAnalytics");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.GetUnlockedPrimary
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class UClass*>          Unlocked_Items                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void ABP_PlayerControllerBase_C::GetUnlockedPrimary(TArray<class UClass*>* Unlocked_Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.GetUnlockedPrimary");

	struct
	{
		TArray<class UClass*>          Unlocked_Items;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Unlocked_Items != nullptr)
		*Unlocked_Items = params.Unlocked_Items;
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SetUnlockAnalytics
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UClass*>          primary                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<class UClass*>          Secundary                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void ABP_PlayerControllerBase_C::SetUnlockAnalytics(TArray<class UClass*>* primary, TArray<class UClass*>* Secundary)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SetUnlockAnalytics");

	struct
	{
		TArray<class UClass*>          primary;
		TArray<class UClass*>          Secundary;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (primary != nullptr)
		*primary = params.primary;
	if (Secundary != nullptr)
		*Secundary = params.Secundary;
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.GetUnlockedSecundary
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class UClass*>          Unlocked_Items                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void ABP_PlayerControllerBase_C::GetUnlockedSecundary(TArray<class UClass*>* Unlocked_Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.GetUnlockedSecundary");

	struct
	{
		TArray<class UClass*>          Unlocked_Items;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Unlocked_Items != nullptr)
		*Unlocked_Items = params.Unlocked_Items;
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.CreateTwitchInteractionIfNotCreated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerControllerBase_C::CreateTwitchInteractionIfNotCreated(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.CreateTwitchInteractionIfNotCreated");

	struct
	{
		int                            ID;
	} params;

	params.ID = ID;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.TwitchInteraction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerControllerBase_C::TwitchInteraction(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.TwitchInteraction");

	struct
	{
		int                            ID;
	} params;

	params.ID = ID;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ReStartAnsel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerControllerBase_C::ReStartAnsel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ReStartAnsel");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.StartAnsel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerControllerBase_C::StartAnsel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.StartAnsel");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.StopAnsel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerControllerBase_C::StopAnsel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.StopAnsel");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.CloseTwitchOAuth
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ChangeStatus                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerControllerBase_C::CloseTwitchOAuth(bool ChangeStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.CloseTwitchOAuth");

	struct
	{
		bool                           ChangeStatus;
	} params;

	params.ChangeStatus = ChangeStatus;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.CreateTwitchOAuthIfNotCreated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerControllerBase_C::CreateTwitchOAuthIfNotCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.CreateTwitchOAuthIfNotCreated");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.CreateInviteRequestIfNotCreated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerControllerBase_C::CreateInviteRequestIfNotCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.CreateInviteRequestIfNotCreated");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerControllerBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.InpActEvt_AcceptInvite_K2Node_InputActionEvent_3
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_PlayerControllerBase_C::InpActEvt_AcceptInvite_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.InpActEvt_AcceptInvite_K2Node_InputActionEvent_3");

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.InpActEvt_RejectInvite_K2Node_InputActionEvent_2
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_PlayerControllerBase_C::InpActEvt_RejectInvite_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.InpActEvt_RejectInvite_K2Node_InputActionEvent_2");

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.InpActEvt_IgnoreInvite_K2Node_InputActionEvent_1
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_PlayerControllerBase_C::InpActEvt_IgnoreInvite_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.InpActEvt_IgnoreInvite_K2Node_InputActionEvent_1");

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_PlayerControllerBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SetPhotographyMode
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Active                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerControllerBase_C::SetPhotographyMode(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SetPhotographyMode");

	struct
	{
		bool                           Active;
	} params;

	params.Active = Active;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Return Client Camera
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerControllerBase_C::Return_Client_Camera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Return Client Camera");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Setup Invite Handling
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerControllerBase_C::Setup_Invite_Handling()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Setup Invite Handling");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Setup Retirement Notification
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerControllerBase_C::Setup_Retirement_Notification()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Setup Retirement Notification");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.OnCharacterCanRetire_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  CharacterClass                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerControllerBase_C::OnCharacterCanRetire_Event(class UClass* CharacterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.OnCharacterCanRetire_Event");

	struct
	{
		class UClass*                  CharacterClass;
	} params;

	params.CharacterClass = CharacterClass;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.UpdateAnalytics
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerControllerBase_C::UpdateAnalytics()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.UpdateAnalytics");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.AdjustCamera
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerControllerBase_C::AdjustCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.AdjustCamera");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Setup Change User
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerControllerBase_C::Setup_Change_User()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Setup Change User");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ChangeUser
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerControllerBase_C::ChangeUser()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ChangeUser");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ChangeUserReply
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Yes                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerControllerBase_C::ChangeUserReply(bool Yes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ChangeUserReply");

	struct
	{
		bool                           Yes;
	} params;

	params.Yes = Yes;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Event On Join Request Reply
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Reply                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerControllerBase_C::Event_On_Join_Request_Reply(int Reply)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Event On Join Request Reply");

	struct
	{
		int                            Reply;
	} params;

	params.Reply = Reply;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Event On Join Request
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDiscordUser            handleDiscordJoinRequest       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ABP_PlayerControllerBase_C::Event_On_Join_Request(const struct FDiscordUser& handleDiscordJoinRequest)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Event On Join Request");

	struct
	{
		struct FDiscordUser            handleDiscordJoinRequest;
	} params;

	params.handleDiscordJoinRequest = handleDiscordJoinRequest;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ExecuteUbergraph_BP_PlayerControllerBase
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerControllerBase_C::ExecuteUbergraph_BP_PlayerControllerBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ExecuteUbergraph_BP_PlayerControllerBase");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ReplyToInviteRequest__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Reply                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerControllerBase_C::ReplyToInviteRequest__DelegateSignature(int Reply)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ReplyToInviteRequest__DelegateSignature");

	struct
	{
		int                            Reply;
	} params;

	params.Reply = Reply;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
