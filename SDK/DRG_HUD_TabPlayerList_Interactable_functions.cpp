// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_TabPlayerList_Interactable_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_TabPlayerList_Interactable.HUD_TabPlayerList_Interactable_C.FindPlayerList
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class AFSDPlayerState*> OutPlayers                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UHUD_TabPlayerList_Interactable_C::FindPlayerList(TArray<class AFSDPlayerState*>* OutPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerList_Interactable.HUD_TabPlayerList_Interactable_C.FindPlayerList");

	struct
	{
		TArray<class AFSDPlayerState*> OutPlayers;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutPlayers != nullptr)
		*OutPlayers = params.OutPlayers;
}


// Function HUD_TabPlayerList_Interactable.HUD_TabPlayerList_Interactable_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_TabPlayerList_Interactable_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerList_Interactable.HUD_TabPlayerList_Interactable_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TabPlayerList_Interactable.HUD_TabPlayerList_Interactable_C.AddPlayer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_TabPlayerList_Interactable_C::AddPlayer(class AFSDPlayerState* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerList_Interactable.HUD_TabPlayerList_Interactable_C.AddPlayer");

	struct
	{
		class AFSDPlayerState*         Player;
	} params;

	params.Player = Player;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TabPlayerList_Interactable.HUD_TabPlayerList_Interactable_C.Update
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_TabPlayerList_Interactable_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerList_Interactable.HUD_TabPlayerList_Interactable_C.Update");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TabPlayerList_Interactable.HUD_TabPlayerList_Interactable_C.OnPlayerJoined_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFSDPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_TabPlayerList_Interactable_C::OnPlayerJoined_Event(class AFSDPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerList_Interactable.HUD_TabPlayerList_Interactable_C.OnPlayerJoined_Event");

	struct
	{
		class AFSDPlayerState*         PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TabPlayerList_Interactable.HUD_TabPlayerList_Interactable_C.OnPlayerLeave_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFSDPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_TabPlayerList_Interactable_C::OnPlayerLeave_Event(class AFSDPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerList_Interactable.HUD_TabPlayerList_Interactable_C.OnPlayerLeave_Event");

	struct
	{
		class AFSDPlayerState*         PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TabPlayerList_Interactable.HUD_TabPlayerList_Interactable_C.ExecuteUbergraph_HUD_TabPlayerList_Interactable
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_TabPlayerList_Interactable_C::ExecuteUbergraph_HUD_TabPlayerList_Interactable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerList_Interactable.HUD_TabPlayerList_Interactable_C.ExecuteUbergraph_HUD_TabPlayerList_Interactable");

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
