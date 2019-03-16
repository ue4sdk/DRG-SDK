// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Basic_ButtonScalable_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_ButtonScalable.Basic_ButtonScalable_C.IsPressed
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsPressed                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_ButtonScalable_C::IsPressed(bool* IsPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable.Basic_ButtonScalable_C.IsPressed");

	struct
	{
		bool                           IsPressed;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsPressed != nullptr)
		*IsPressed = params.IsPressed;
}


// Function Basic_ButtonScalable.Basic_ButtonScalable_C.SetButtonText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UBasic_ButtonScalable_C::SetButtonText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable.Basic_ButtonScalable_C.SetButtonText");

	struct
	{
		struct FText                   Text;
	} params;

	params.Text = Text;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ButtonScalable.Basic_ButtonScalable_C.SetFontSize
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            FontSize                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_ButtonScalable_C::SetFontSize(int FontSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable.Basic_ButtonScalable_C.SetFontSize");

	struct
	{
		int                            FontSize;
	} params;

	params.FontSize = FontSize;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ButtonScalable.Basic_ButtonScalable_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_ButtonScalable_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable.Basic_ButtonScalable_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ButtonScalable.Basic_ButtonScalable_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBasic_ButtonScalable_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable.Basic_ButtonScalable_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ButtonScalable.Basic_ButtonScalable_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBasic_ButtonScalable_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable.Basic_ButtonScalable_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ButtonScalable.Basic_ButtonScalable_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBasic_ButtonScalable_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable.Basic_ButtonScalable_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ButtonScalable.Basic_ButtonScalable_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBasic_ButtonScalable_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable.Basic_ButtonScalable_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ButtonScalable.Basic_ButtonScalable_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBasic_ButtonScalable_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable.Basic_ButtonScalable_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ButtonScalable.Basic_ButtonScalable_C.ExecuteUbergraph_Basic_ButtonScalable
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_ButtonScalable_C::ExecuteUbergraph_Basic_ButtonScalable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable.Basic_ButtonScalable_C.ExecuteUbergraph_Basic_ButtonScalable");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ButtonScalable.Basic_ButtonScalable_C.OnReleased__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBasic_ButtonScalable_C::OnReleased__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable.Basic_ButtonScalable_C.OnReleased__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ButtonScalable.Basic_ButtonScalable_C.OnPressed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBasic_ButtonScalable_C::OnPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable.Basic_ButtonScalable_C.OnPressed__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ButtonScalable.Basic_ButtonScalable_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBasic_ButtonScalable_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable.Basic_ButtonScalable_C.OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
