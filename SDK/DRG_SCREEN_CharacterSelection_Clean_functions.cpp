// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_SCREEN_CharacterSelection_Clean_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply USCREEN_CharacterSelection_Clean_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnKeyUp");

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


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnCloseMenuReleased
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Handled                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USCREEN_CharacterSelection_Clean_C::OnCloseMenuReleased(bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnCloseMenuReleased");

	struct
	{
		bool                           Handled;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.GetSelectedClass
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UClass*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UClass* USCREEN_CharacterSelection_Clean_C::GetSelectedClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.GetSelectedClass");

	struct
	{
		class UClass*                  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnFailure_0D1BB19C4CA8D7117BC6A688077A0BDE
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USCREEN_CharacterSelection_Clean_C::OnFailure_0D1BB19C4CA8D7117BC6A688077A0BDE()
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnFailure_0D1BB19C4CA8D7117BC6A688077A0BDE");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnSuccess_0D1BB19C4CA8D7117BC6A688077A0BDE
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USCREEN_CharacterSelection_Clean_C::OnSuccess_0D1BB19C4CA8D7117BC6A688077A0BDE()
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnSuccess_0D1BB19C4CA8D7117BC6A688077A0BDE");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_2_OnCharacterSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USCREEN_CharacterSelection_Clean_C::BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_2_OnCharacterSelected__DelegateSignature(class UClass* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_2_OnCharacterSelected__DelegateSignature");

	struct
	{
		class UClass*                  Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_3_OnCharacterHovered__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USCREEN_CharacterSelection_Clean_C::BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_3_OnCharacterHovered__DelegateSignature(class UClass* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_3_OnCharacterHovered__DelegateSignature");

	struct
	{
		class UClass*                  Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnInputSourceChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EInputSource                   InputSource                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USCREEN_CharacterSelection_Clean_C::OnInputSourceChanged(EInputSource InputSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnInputSourceChanged");

	struct
	{
		EInputSource                   InputSource;
	} params;

	params.InputSource = InputSource;

	UObject::ProcessEvent(fn, &params);
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnSelectedCharacterChanged_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  NewCharacter                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USCREEN_CharacterSelection_Clean_C::OnSelectedCharacterChanged_Event(class UClass* NewCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnSelectedCharacterChanged_Event");

	struct
	{
		class UClass*                  NewCharacter;
	} params;

	params.NewCharacter = NewCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USCREEN_CharacterSelection_Clean_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.UpdateCharacterDescription
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  CharacterClass                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USCREEN_CharacterSelection_Clean_C::UpdateCharacterDescription(class UClass* CharacterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.UpdateCharacterDescription");

	struct
	{
		class UClass*                  CharacterClass;
	} params;

	params.CharacterClass = CharacterClass;

	UObject::ProcessEvent(fn, &params);
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.ReceiveNewVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               NewVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USCREEN_CharacterSelection_Clean_C::ReceiveNewVisibility(ESlateVisibility NewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.ReceiveNewVisibility");

	struct
	{
		ESlateVisibility               NewVisibility;
	} params;

	params.NewVisibility = NewVisibility;

	UObject::ProcessEvent(fn, &params);
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void USCREEN_CharacterSelection_Clean_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.Show
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USCREEN_CharacterSelection_Clean_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.Show");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_3_OnRetirementHovered__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USCREEN_CharacterSelection_Clean_C::BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_3_OnRetirementHovered__DelegateSignature(class UClass* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_3_OnRetirementHovered__DelegateSignature");

	struct
	{
		class UClass*                  Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_4_OnRetirementUnhovered__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USCREEN_CharacterSelection_Clean_C::BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_4_OnRetirementUnhovered__DelegateSignature(class UClass* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_4_OnRetirementUnhovered__DelegateSignature");

	struct
	{
		class UClass*                  Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_2_OnRetireCharacter__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USCREEN_CharacterSelection_Clean_C::BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_2_OnRetireCharacter__DelegateSignature(class UClass* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_2_OnRetireCharacter__DelegateSignature");

	struct
	{
		class UClass*                  Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnClosed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void USCREEN_CharacterSelection_Clean_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnClosed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.BackPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USCREEN_CharacterSelection_Clean_C::BackPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.BackPressed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.CreateMovie
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USCREEN_CharacterSelection_Clean_C::CreateMovie()
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.CreateMovie");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void USCREEN_CharacterSelection_Clean_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.StopMovie
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USCREEN_CharacterSelection_Clean_C::StopMovie()
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.StopMovie");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void USCREEN_CharacterSelection_Clean_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.ExecuteUbergraph_SCREEN_CharacterSelection_Clean
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USCREEN_CharacterSelection_Clean_C::ExecuteUbergraph_SCREEN_CharacterSelection_Clean(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.ExecuteUbergraph_SCREEN_CharacterSelection_Clean");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.Back__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USCREEN_CharacterSelection_Clean_C::Back__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.Back__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.CharacterSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USCREEN_CharacterSelection_Clean_C::CharacterSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.CharacterSelected__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
