// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Options_ControlLayout_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_ControlLayout.Options_ControlLayout_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOptions_ControlLayout_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_ControlLayout.Options_ControlLayout_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_ControlLayout.Options_ControlLayout_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UOptions_ControlLayout_C::BndEvt__Button_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_ControlLayout.Options_ControlLayout_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_ControlLayout.Options_ControlLayout_C.OnInputSourceChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EInputSource                   InputSource                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_ControlLayout_C::OnInputSourceChanged(EInputSource InputSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_ControlLayout.Options_ControlLayout_C.OnInputSourceChanged");

	struct
	{
		EInputSource                   InputSource;
	} params;

	params.InputSource = InputSource;

	UObject::ProcessEvent(fn, &params);
}


// Function Options_ControlLayout.Options_ControlLayout_C.BndEvt__BTN_Back_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UOptions_ControlLayout_C::BndEvt__BTN_Back_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_ControlLayout.Options_ControlLayout_C.BndEvt__BTN_Back_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_ControlLayout.Options_ControlLayout_C.ExecuteUbergraph_Options_ControlLayout
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_ControlLayout_C::ExecuteUbergraph_Options_ControlLayout(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_ControlLayout.Options_ControlLayout_C.ExecuteUbergraph_Options_ControlLayout");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function Options_ControlLayout.Options_ControlLayout_C.OnClose__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptions_ControlLayout_C::OnClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_ControlLayout.Options_ControlLayout_C.OnClose__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
