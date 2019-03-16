// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_CharSelect_HeroSelect_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CharSelect_HeroSelect.CharSelect_HeroSelect_C.SetSelectedIndex
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCharSelect_HeroSelect_C::SetSelectedIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect.CharSelect_HeroSelect_C.SetSelectedIndex");

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function CharSelect_HeroSelect.CharSelect_HeroSelect_C.GetSelectedIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCharSelect_HeroSelect_C::GetSelectedIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect.CharSelect_HeroSelect_C.GetSelectedIndex");

	struct
	{
		int                            Index;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Index != nullptr)
		*Index = params.Index;
}


// Function CharSelect_HeroSelect.CharSelect_HeroSelect_C.HandleKeyEvent
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
// bool                           Handled                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

struct FEventReply UCharSelect_HeroSelect_C::HandleKeyEvent(struct FKeyEvent* InKeyEvent, bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect.CharSelect_HeroSelect_C.HandleKeyEvent");

	struct
	{
		struct FKeyEvent               InKeyEvent;
		struct FEventReply             ReturnValue;
		bool                           Handled;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (InKeyEvent != nullptr)
		*InKeyEvent = params.InKeyEvent;
	if (Handled != nullptr)
		*Handled = params.Handled;

	return params.ReturnValue;
}


// Function CharSelect_HeroSelect.CharSelect_HeroSelect_C.Select
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCharSelect_HeroSelect_C::Select()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect.CharSelect_HeroSelect_C.Select");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CharSelect_HeroSelect.CharSelect_HeroSelect_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UCharSelect_HeroSelect_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect.CharSelect_HeroSelect_C.OnKeyUp");

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


// Function CharSelect_HeroSelect.CharSelect_HeroSelect_C.Prev
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCharSelect_HeroSelect_C::Prev()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect.CharSelect_HeroSelect_C.Prev");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CharSelect_HeroSelect.CharSelect_HeroSelect_C.Next
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCharSelect_HeroSelect_C::Next()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect.CharSelect_HeroSelect_C.Next");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CharSelect_HeroSelect.CharSelect_HeroSelect_C.OnCharacterSelected_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCharSelect_HeroSelect_C::OnCharacterSelected_Event(class UClass* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect.CharSelect_HeroSelect_C.OnCharacterSelected_Event");

	struct
	{
		class UClass*                  Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function CharSelect_HeroSelect.CharSelect_HeroSelect_C.Update
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCharSelect_HeroSelect_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect.CharSelect_HeroSelect_C.Update");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CharSelect_HeroSelect.CharSelect_HeroSelect_C.BndEvt__BTN_Select_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UCharSelect_HeroSelect_C::BndEvt__BTN_Select_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect.CharSelect_HeroSelect_C.BndEvt__BTN_Select_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CharSelect_HeroSelect.CharSelect_HeroSelect_C.ExecuteUbergraph_CharSelect_HeroSelect
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCharSelect_HeroSelect_C::ExecuteUbergraph_CharSelect_HeroSelect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect.CharSelect_HeroSelect_C.ExecuteUbergraph_CharSelect_HeroSelect");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function CharSelect_HeroSelect.CharSelect_HeroSelect_C.OnCharacterSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCharSelect_HeroSelect_C::OnCharacterSelected__DelegateSignature(class UClass* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect.CharSelect_HeroSelect_C.OnCharacterSelected__DelegateSignature");

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
