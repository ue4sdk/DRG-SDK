// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG__MENU_CharacterCustomization_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply U_MENU_CharacterCustomization_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.OnKeyUp");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FKeyEvent               InKeyEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.GetCharacter
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class APlayerCharacter*        Character                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_MENU_CharacterCustomization_C::GetCharacter(class APlayerCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.GetCharacter");

	struct
	{
		class APlayerCharacter*        Character;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Character != nullptr)
		*Character = params.Character;
}


// Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.BndEvt__ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_MENU_CharacterCustomization_C::BndEvt__ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature(class UClass* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.BndEvt__ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature");

	struct
	{
		class UClass*                  Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.ShowInternal
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_MENU_CharacterCustomization_C::ShowInternal(class UClass* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.ShowInternal");

	struct
	{
		class UClass*                  Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void U_MENU_CharacterCustomization_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.OnClosed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void U_MENU_CharacterCustomization_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.OnClosed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.BndEvt__MENU_SpaceRig_K2Node_ComponentBoundEvent_0_OnClosedClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void U_MENU_CharacterCustomization_C::BndEvt__MENU_SpaceRig_K2Node_ComponentBoundEvent_0_OnClosedClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.BndEvt__MENU_SpaceRig_K2Node_ComponentBoundEvent_0_OnClosedClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.ReceiveCloseCommand
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void U_MENU_CharacterCustomization_C::ReceiveCloseCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.ReceiveCloseCommand");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.ExecuteUbergraph__MENU_CharacterCustomization
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_MENU_CharacterCustomization_C::ExecuteUbergraph__MENU_CharacterCustomization(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CharacterCustomization._MENU_CharacterCustomization_C.ExecuteUbergraph__MENU_CharacterCustomization");

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
