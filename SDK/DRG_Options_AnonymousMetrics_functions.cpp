// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Options_AnonymousMetrics_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_AnonymousMetrics.Options_AnonymousMetrics_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOptions_AnonymousMetrics_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_AnonymousMetrics.Options_AnonymousMetrics_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_AnonymousMetrics.Options_AnonymousMetrics_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           IsChecked                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_AnonymousMetrics_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_AnonymousMetrics.Options_AnonymousMetrics_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature");

	struct
	{
		bool                           IsChecked;
	} params;

	params.IsChecked = IsChecked;

	UObject::ProcessEvent(fn, &params);
}


// Function Options_AnonymousMetrics.Options_AnonymousMetrics_C.OnAnonymousMetricsChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           AllowAnonymousMetrics          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_AnonymousMetrics_C::OnAnonymousMetricsChanged(bool AllowAnonymousMetrics)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_AnonymousMetrics.Options_AnonymousMetrics_C.OnAnonymousMetricsChanged");

	struct
	{
		bool                           AllowAnonymousMetrics;
	} params;

	params.AllowAnonymousMetrics = AllowAnonymousMetrics;

	UObject::ProcessEvent(fn, &params);
}


// Function Options_AnonymousMetrics.Options_AnonymousMetrics_C.ExecuteUbergraph_Options_AnonymousMetrics
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_AnonymousMetrics_C::ExecuteUbergraph_Options_AnonymousMetrics(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_AnonymousMetrics.Options_AnonymousMetrics_C.ExecuteUbergraph_Options_AnonymousMetrics");

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
