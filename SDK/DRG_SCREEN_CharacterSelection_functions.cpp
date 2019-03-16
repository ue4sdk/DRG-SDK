// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_SCREEN_CharacterSelection_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SCREEN_CharacterSelection.SCREEN_CharacterSelection_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply USCREEN_CharacterSelection_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection.SCREEN_CharacterSelection_C.OnKeyUp");

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


// Function SCREEN_CharacterSelection.SCREEN_CharacterSelection_C.GetSelectedClass
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UClass*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UClass* USCREEN_CharacterSelection_C::GetSelectedClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection.SCREEN_CharacterSelection_C.GetSelectedClass");

	struct
	{
		class UClass*                  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SCREEN_CharacterSelection.SCREEN_CharacterSelection_C.Clear
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USCREEN_CharacterSelection_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection.SCREEN_CharacterSelection_C.Clear");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SCREEN_CharacterSelection.SCREEN_CharacterSelection_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void USCREEN_CharacterSelection_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection.SCREEN_CharacterSelection_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SCREEN_CharacterSelection.SCREEN_CharacterSelection_C.BackPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USCREEN_CharacterSelection_C::BackPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection.SCREEN_CharacterSelection_C.BackPressed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SCREEN_CharacterSelection.SCREEN_CharacterSelection_C.OnCharacterSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USCREEN_CharacterSelection_C::OnCharacterSelected(class UClass* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection.SCREEN_CharacterSelection_C.OnCharacterSelected");

	struct
	{
		class UClass*                  Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function SCREEN_CharacterSelection.SCREEN_CharacterSelection_C.OnClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USCREEN_CharacterSelection_C::OnClicked(class UClass* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection.SCREEN_CharacterSelection_C.OnClicked");

	struct
	{
		class UClass*                  Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function SCREEN_CharacterSelection.SCREEN_CharacterSelection_C.SelectedCharacterChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  NewCharacter                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USCREEN_CharacterSelection_C::SelectedCharacterChanged(class UClass* NewCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection.SCREEN_CharacterSelection_C.SelectedCharacterChanged");

	struct
	{
		class UClass*                  NewCharacter;
	} params;

	params.NewCharacter = NewCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function SCREEN_CharacterSelection.SCREEN_CharacterSelection_C.BndEvt__Buttom_Custominze_K2Node_ComponentBoundEvent_34_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void USCREEN_CharacterSelection_C::BndEvt__Buttom_Custominze_K2Node_ComponentBoundEvent_34_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection.SCREEN_CharacterSelection_C.BndEvt__Buttom_Custominze_K2Node_ComponentBoundEvent_34_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SCREEN_CharacterSelection.SCREEN_CharacterSelection_C.BndEvt__ITM_ChaCus_ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USCREEN_CharacterSelection_C::BndEvt__ITM_ChaCus_ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature(class UClass* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection.SCREEN_CharacterSelection_C.BndEvt__ITM_ChaCus_ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature");

	struct
	{
		class UClass*                  Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function SCREEN_CharacterSelection.SCREEN_CharacterSelection_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void USCREEN_CharacterSelection_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection.SCREEN_CharacterSelection_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SCREEN_CharacterSelection.SCREEN_CharacterSelection_C.ExecuteUbergraph_SCREEN_CharacterSelection
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USCREEN_CharacterSelection_C::ExecuteUbergraph_SCREEN_CharacterSelection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection.SCREEN_CharacterSelection_C.ExecuteUbergraph_SCREEN_CharacterSelection");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function SCREEN_CharacterSelection.SCREEN_CharacterSelection_C.Back__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USCREEN_CharacterSelection_C::Back__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection.SCREEN_CharacterSelection_C.Back__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SCREEN_CharacterSelection.SCREEN_CharacterSelection_C.CharacterSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USCREEN_CharacterSelection_C::CharacterSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection.SCREEN_CharacterSelection_C.CharacterSelected__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
