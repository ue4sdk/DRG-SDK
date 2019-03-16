// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Options_MouseX_Sensitivity_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_MouseX_Sensitivity.Options_MouseX_Sensitivity_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOptions_MouseX_Sensitivity_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_MouseX_Sensitivity.Options_MouseX_Sensitivity_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_MouseX_Sensitivity.Options_MouseX_Sensitivity_C.UINeedsUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptions_MouseX_Sensitivity_C::UINeedsUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_MouseX_Sensitivity.Options_MouseX_Sensitivity_C.UINeedsUpdate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_MouseX_Sensitivity.Options_MouseX_Sensitivity_C.ShowOptions
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptions_MouseX_Sensitivity_C::ShowOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_MouseX_Sensitivity.Options_MouseX_Sensitivity_C.ShowOptions");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_MouseX_Sensitivity.Options_MouseX_Sensitivity_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_MouseX_Sensitivity_C::BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_MouseX_Sensitivity.Options_MouseX_Sensitivity_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature");

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function Options_MouseX_Sensitivity.Options_MouseX_Sensitivity_C.ExecuteUbergraph_Options_MouseX_Sensitivity
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_MouseX_Sensitivity_C::ExecuteUbergraph_Options_MouseX_Sensitivity(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_MouseX_Sensitivity.Options_MouseX_Sensitivity_C.ExecuteUbergraph_Options_MouseX_Sensitivity");

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
