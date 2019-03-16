// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ICON_HeroSelect_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ICON_HeroSelect.ICON_HeroSelect_C.IsInteractable
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UICON_HeroSelect_C::IsInteractable()
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.IsInteractable");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.GetSelectedClass
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UClass*                  DesiredCharacterClass          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UICON_HeroSelect_C::GetSelectedClass(class UClass** DesiredCharacterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.GetSelectedClass");

	struct
	{
		class UClass*                  DesiredCharacterClass;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (DesiredCharacterClass != nullptr)
		*DesiredCharacterClass = params.DesiredCharacterClass;
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.OnMouseButtonUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UICON_HeroSelect_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.OnMouseButtonUp");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.SetScale
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Scale                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UICON_HeroSelect_C::SetScale(float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.SetScale");

	struct
	{
		float                          Scale;
	} params;

	params.Scale = Scale;

	UObject::ProcessEvent(fn, &params);
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.UpdateSelected
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UICON_HeroSelect_C::UpdateSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.UpdateSelected");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.IsSelected
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsSelected                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UICON_HeroSelect_C::IsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.IsSelected");

	struct
	{
		bool                           IsSelected;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsSelected != nullptr)
		*IsSelected = params.IsSelected;
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.SetCharacterClass
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UICON_HeroSelect_C::SetCharacterClass(class UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.SetCharacterClass");

	struct
	{
		class UClass*                  Class;
	} params;

	params.Class = Class;

	UObject::ProcessEvent(fn, &params);
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UICON_HeroSelect_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.OnMouseEnter");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UICON_HeroSelect_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.OnMouseLeave");

	struct
	{
		struct FPointerEvent           MouseEvent;
	} params;

	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.On Click
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UICON_HeroSelect_C::On_Click()
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.On Click");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.SelectedCharacterChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  NewCharacter                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UICON_HeroSelect_C::SelectedCharacterChanged(class UClass* NewCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.SelectedCharacterChanged");

	struct
	{
		class UClass*                  NewCharacter;
	} params;

	params.NewCharacter = NewCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.OnCharacterStatsChanged_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFSDPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UICON_HeroSelect_C::OnCharacterStatsChanged_Event(class AFSDPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.OnCharacterStatsChanged_Event");

	struct
	{
		class AFSDPlayerState*         PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.Init
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  CharacterClass                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UICON_HeroSelect_C::Init(class UClass* CharacterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.Init");

	struct
	{
		class UClass*                  CharacterClass;
	} params;

	params.CharacterClass = CharacterClass;

	UObject::ProcessEvent(fn, &params);
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UICON_HeroSelect_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_25_OnHovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UICON_HeroSelect_C::BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_25_OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_25_OnHovered__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_0_OnUnhovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UICON_HeroSelect_C::BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_0_OnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_0_OnUnhovered__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_63_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UICON_HeroSelect_C::BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_63_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_63_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.Update Retirement Button
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UICON_HeroSelect_C::Update_Retirement_Button()
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.Update Retirement Button");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UICON_HeroSelect_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.ExecuteUbergraph_ICON_HeroSelect
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UICON_HeroSelect_C::ExecuteUbergraph_ICON_HeroSelect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.ExecuteUbergraph_ICON_HeroSelect");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.OnRetireClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UICON_HeroSelect_C::OnRetireClicked__DelegateSignature(class UClass* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.OnRetireClicked__DelegateSignature");

	struct
	{
		class UClass*                  Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.OnRetirementUnhovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UICON_HeroSelect_C::OnRetirementUnhovered__DelegateSignature(class UClass* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.OnRetirementUnhovered__DelegateSignature");

	struct
	{
		class UClass*                  Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.OnRetirementHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UICON_HeroSelect_C::OnRetirementHovered__DelegateSignature(class UClass* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.OnRetirementHovered__DelegateSignature");

	struct
	{
		class UClass*                  Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.OnHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UICON_HeroSelect_C::OnHovered__DelegateSignature(class UClass* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.OnHovered__DelegateSignature");

	struct
	{
		class UClass*                  Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.OnCharacterSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UICON_HeroSelect_C::OnCharacterSelected__DelegateSignature(class UClass* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.OnCharacterSelected__DelegateSignature");

	struct
	{
		class UClass*                  Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
