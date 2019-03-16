// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_TeamDisplay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_TeamDisplay.UI_TeamDisplay_C.GetTeam
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class AFSDPlayerState*> OutTeamMembers                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UUI_TeamDisplay_C::GetTeam(TArray<class AFSDPlayerState*>* OutTeamMembers)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDisplay.UI_TeamDisplay_C.GetTeam");

	struct
	{
		TArray<class AFSDPlayerState*> OutTeamMembers;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutTeamMembers != nullptr)
		*OutTeamMembers = params.OutTeamMembers;
}


// Function UI_TeamDisplay.UI_TeamDisplay_C.UpdateIcons
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_TeamDisplay_C::UpdateIcons()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDisplay.UI_TeamDisplay_C.UpdateIcons");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_TeamDisplay.UI_TeamDisplay_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_TeamDisplay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDisplay.UI_TeamDisplay_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_TeamDisplay.UI_TeamDisplay_C.OnFirstWindowOpened
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_TeamDisplay_C::OnFirstWindowOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDisplay.UI_TeamDisplay_C.OnFirstWindowOpened");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_TeamDisplay.UI_TeamDisplay_C.OnLastWindowClosed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_TeamDisplay_C::OnLastWindowClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDisplay.UI_TeamDisplay_C.OnLastWindowClosed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_TeamDisplay.UI_TeamDisplay_C.Setup Invite Friends
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_TeamDisplay_C::Setup_Invite_Friends()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDisplay.UI_TeamDisplay_C.Setup Invite Friends");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_TeamDisplay.UI_TeamDisplay_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_TeamDisplay_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDisplay.UI_TeamDisplay_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_TeamDisplay.UI_TeamDisplay_C.UpdateFriendInviteVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_TeamDisplay_C::UpdateFriendInviteVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDisplay.UI_TeamDisplay_C.UpdateFriendInviteVisibility");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_TeamDisplay.UI_TeamDisplay_C.OnPlayerJoined_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFSDPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_TeamDisplay_C::OnPlayerJoined_Event(class AFSDPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDisplay.UI_TeamDisplay_C.OnPlayerJoined_Event");

	struct
	{
		class AFSDPlayerState*         PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_TeamDisplay.UI_TeamDisplay_C.OnPlayerLeave_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFSDPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_TeamDisplay_C::OnPlayerLeave_Event(class AFSDPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDisplay.UI_TeamDisplay_C.OnPlayerLeave_Event");

	struct
	{
		class AFSDPlayerState*         PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_TeamDisplay.UI_TeamDisplay_C.ExecuteUbergraph_UI_TeamDisplay
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_TeamDisplay_C::ExecuteUbergraph_UI_TeamDisplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDisplay.UI_TeamDisplay_C.ExecuteUbergraph_UI_TeamDisplay");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
