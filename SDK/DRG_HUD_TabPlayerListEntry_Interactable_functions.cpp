// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_TabPlayerListEntry_Interactable_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_TabPlayerListEntry_Interactable.HUD_TabPlayerListEntry_Interactable_C.SetPlayer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFSDPlayerState*         State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_TabPlayerListEntry_Interactable_C::SetPlayer(class AFSDPlayerState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry_Interactable.HUD_TabPlayerListEntry_Interactable_C.SetPlayer");

	struct
	{
		class AFSDPlayerState*         State;
	} params;

	params.State = State;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TabPlayerListEntry_Interactable.HUD_TabPlayerListEntry_Interactable_C.OnPlayerSet
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_TabPlayerListEntry_Interactable_C::OnPlayerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry_Interactable.HUD_TabPlayerListEntry_Interactable_C.OnPlayerSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TabPlayerListEntry_Interactable.HUD_TabPlayerListEntry_Interactable_C.OnPlayerCharacterSpawned_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        PlayerCharacter                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_TabPlayerListEntry_Interactable_C::OnPlayerCharacterSpawned_Event(class APlayerCharacter* PlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry_Interactable.HUD_TabPlayerListEntry_Interactable_C.OnPlayerCharacterSpawned_Event");

	struct
	{
		class APlayerCharacter*        PlayerCharacter;
	} params;

	params.PlayerCharacter = PlayerCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TabPlayerListEntry_Interactable.HUD_TabPlayerListEntry_Interactable_C.Update Mute Button
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_TabPlayerListEntry_Interactable_C::Update_Mute_Button()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry_Interactable.HUD_TabPlayerListEntry_Interactable_C.Update Mute Button");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TabPlayerListEntry_Interactable.HUD_TabPlayerListEntry_Interactable_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_TabPlayerListEntry_Interactable_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry_Interactable.HUD_TabPlayerListEntry_Interactable_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TabPlayerListEntry_Interactable.HUD_TabPlayerListEntry_Interactable_C.BndEvt__BTN_kick_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UHUD_TabPlayerListEntry_Interactable_C::BndEvt__BTN_kick_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry_Interactable.HUD_TabPlayerListEntry_Interactable_C.BndEvt__BTN_kick_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TabPlayerListEntry_Interactable.HUD_TabPlayerListEntry_Interactable_C.BndEvt__BTN_mute_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UHUD_TabPlayerListEntry_Interactable_C::BndEvt__BTN_mute_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry_Interactable.HUD_TabPlayerListEntry_Interactable_C.BndEvt__BTN_mute_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TabPlayerListEntry_Interactable.HUD_TabPlayerListEntry_Interactable_C.BndEvt__BTN_unmute_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UHUD_TabPlayerListEntry_Interactable_C::BndEvt__BTN_unmute_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry_Interactable.HUD_TabPlayerListEntry_Interactable_C.BndEvt__BTN_unmute_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TabPlayerListEntry_Interactable.HUD_TabPlayerListEntry_Interactable_C.BndEvt__BTN_Gamercard_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UHUD_TabPlayerListEntry_Interactable_C::BndEvt__BTN_Gamercard_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry_Interactable.HUD_TabPlayerListEntry_Interactable_C.BndEvt__BTN_Gamercard_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TabPlayerListEntry_Interactable.HUD_TabPlayerListEntry_Interactable_C.ExecuteUbergraph_HUD_TabPlayerListEntry_Interactable
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_TabPlayerListEntry_Interactable_C::ExecuteUbergraph_HUD_TabPlayerListEntry_Interactable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry_Interactable.HUD_TabPlayerListEntry_Interactable_C.ExecuteUbergraph_HUD_TabPlayerListEntry_Interactable");

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
