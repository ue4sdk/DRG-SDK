// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Basic_ButtonTab_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_ButtonTab.Basic_ButtonTab_C.SetIconRightVisible
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_ButtonTab_C::SetIconRightVisible(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonTab.Basic_ButtonTab_C.SetIconRightVisible");

	struct
	{
		bool                           IsVisible;
	} params;

	params.IsVisible = IsVisible;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ButtonTab.Basic_ButtonTab_C.SetIconRight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateBrush             Brush                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UBasic_ButtonTab_C::SetIconRight(const struct FSlateBrush& Brush)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonTab.Basic_ButtonTab_C.SetIconRight");

	struct
	{
		struct FSlateBrush             Brush;
	} params;

	params.Brush = Brush;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ButtonTab.Basic_ButtonTab_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_ButtonTab_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonTab.Basic_ButtonTab_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ButtonTab.Basic_ButtonTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBasic_ButtonTab_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonTab.Basic_ButtonTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ButtonTab.Basic_ButtonTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBasic_ButtonTab_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonTab.Basic_ButtonTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ButtonTab.Basic_ButtonTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBasic_ButtonTab_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonTab.Basic_ButtonTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ButtonTab.Basic_ButtonTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBasic_ButtonTab_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonTab.Basic_ButtonTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ButtonTab.Basic_ButtonTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBasic_ButtonTab_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonTab.Basic_ButtonTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ButtonTab.Basic_ButtonTab_C.Toggle
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           on                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_ButtonTab_C::Toggle(bool on)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonTab.Basic_ButtonTab_C.Toggle");

	struct
	{
		bool                           on;
	} params;

	params.on = on;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ButtonTab.Basic_ButtonTab_C.ExecuteUbergraph_Basic_ButtonTab
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_ButtonTab_C::ExecuteUbergraph_Basic_ButtonTab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonTab.Basic_ButtonTab_C.ExecuteUbergraph_Basic_ButtonTab");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ButtonTab.Basic_ButtonTab_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBasic_ButtonTab_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonTab.Basic_ButtonTab_C.OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
