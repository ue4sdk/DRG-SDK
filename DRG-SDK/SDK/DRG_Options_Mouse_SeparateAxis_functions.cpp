// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Options_Mouse_SeparateAxis_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_Mouse_SeparateAxis.Options_Mouse_SeparateAxis_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOptions_Mouse_SeparateAxis_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Mouse_SeparateAxis.Options_Mouse_SeparateAxis_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_Mouse_SeparateAxis.Options_Mouse_SeparateAxis_C.UINeedsUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptions_Mouse_SeparateAxis_C::UINeedsUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Mouse_SeparateAxis.Options_Mouse_SeparateAxis_C.UINeedsUpdate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_Mouse_SeparateAxis.Options_Mouse_SeparateAxis_C.ShowOptions
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptions_Mouse_SeparateAxis_C::ShowOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Mouse_SeparateAxis.Options_Mouse_SeparateAxis_C.ShowOptions");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_Mouse_SeparateAxis.Options_Mouse_SeparateAxis_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           IsChecked                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_Mouse_SeparateAxis_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Mouse_SeparateAxis.Options_Mouse_SeparateAxis_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature");

	struct
	{
		bool                           IsChecked;
	} params;

	params.IsChecked = IsChecked;

	UObject::ProcessEvent(fn, &params);
}


// Function Options_Mouse_SeparateAxis.Options_Mouse_SeparateAxis_C.ExecuteUbergraph_Options_Mouse_SeparateAxis
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_Mouse_SeparateAxis_C::ExecuteUbergraph_Options_Mouse_SeparateAxis(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Mouse_SeparateAxis.Options_Mouse_SeparateAxis_C.ExecuteUbergraph_Options_Mouse_SeparateAxis");

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
