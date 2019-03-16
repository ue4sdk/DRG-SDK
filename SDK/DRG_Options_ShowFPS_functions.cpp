// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Options_ShowFPS_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_ShowFPS.Options_ShowFPS_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOptions_ShowFPS_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_ShowFPS.Options_ShowFPS_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_ShowFPS.Options_ShowFPS_C.OnShowFPSChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           NewValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_ShowFPS_C::OnShowFPSChanged(bool NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_ShowFPS.Options_ShowFPS_C.OnShowFPSChanged");

	struct
	{
		bool                           NewValue;
	} params;

	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}


// Function Options_ShowFPS.Options_ShowFPS_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           IsChecked                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_ShowFPS_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_ShowFPS.Options_ShowFPS_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature");

	struct
	{
		bool                           IsChecked;
	} params;

	params.IsChecked = IsChecked;

	UObject::ProcessEvent(fn, &params);
}


// Function Options_ShowFPS.Options_ShowFPS_C.ExecuteUbergraph_Options_ShowFPS
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_ShowFPS_C::ExecuteUbergraph_Options_ShowFPS(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_ShowFPS.Options_ShowFPS_C.ExecuteUbergraph_Options_ShowFPS");

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
