// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_MENU_SpaceRigTemplate_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.UpdatePlayerCount
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMENU_SpaceRigTemplate_C::UpdatePlayerCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.UpdatePlayerCount");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.SetCloseButtonVisible
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShowCloseButton                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMENU_SpaceRigTemplate_C::SetCloseButtonVisible(bool ShowCloseButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.SetCloseButtonVisible");

	struct
	{
		bool                           ShowCloseButton;
	} params;

	params.ShowCloseButton = ShowCloseButton;

	UObject::ProcessEvent(fn, &params);
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMENU_SpaceRigTemplate_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMENU_SpaceRigTemplate_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.Refresh
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMENU_SpaceRigTemplate_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.Refresh");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UMENU_SpaceRigTemplate_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnCreditsChanged_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Credits                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMENU_SpaceRigTemplate_C::OnCreditsChanged_Event(int Credits)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnCreditsChanged_Event");

	struct
	{
		int                            Credits;
	} params;

	params.Credits = Credits;

	UObject::ProcessEvent(fn, &params);
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnPlayerJoined_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFSDPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMENU_SpaceRigTemplate_C::OnPlayerJoined_Event(class AFSDPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnPlayerJoined_Event");

	struct
	{
		class AFSDPlayerState*         PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnPlayerLeave_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFSDPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMENU_SpaceRigTemplate_C::OnPlayerLeave_Event(class AFSDPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnPlayerLeave_Event");

	struct
	{
		class AFSDPlayerState*         PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnSelectedCharacterChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  NewCharacter                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMENU_SpaceRigTemplate_C::OnSelectedCharacterChanged(class UClass* NewCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnSelectedCharacterChanged");

	struct
	{
		class UClass*                  NewCharacter;
	} params;

	params.NewCharacter = NewCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.ExecuteUbergraph_MENU_SpaceRigTemplate
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMENU_SpaceRigTemplate_C::ExecuteUbergraph_MENU_SpaceRigTemplate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.ExecuteUbergraph_MENU_SpaceRigTemplate");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnClosedClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMENU_SpaceRigTemplate_C::OnClosedClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnClosedClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
