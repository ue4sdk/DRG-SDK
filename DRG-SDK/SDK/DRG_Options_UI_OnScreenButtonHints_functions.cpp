// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Options_UI_OnScreenButtonHints_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_UI_OnScreenButtonHints.Options_UI_OnScreenButtonHints_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOptions_UI_OnScreenButtonHints_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_UI_OnScreenButtonHints.Options_UI_OnScreenButtonHints_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_UI_OnScreenButtonHints.Options_UI_OnScreenButtonHints_C.UINeedsUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptions_UI_OnScreenButtonHints_C::UINeedsUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_UI_OnScreenButtonHints.Options_UI_OnScreenButtonHints_C.UINeedsUpdate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_UI_OnScreenButtonHints.Options_UI_OnScreenButtonHints_C.ShowOptions
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptions_UI_OnScreenButtonHints_C::ShowOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_UI_OnScreenButtonHints.Options_UI_OnScreenButtonHints_C.ShowOptions");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_UI_OnScreenButtonHints.Options_UI_OnScreenButtonHints_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_6_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           IsChecked                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_UI_OnScreenButtonHints_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_6_OnCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_UI_OnScreenButtonHints.Options_UI_OnScreenButtonHints_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_6_OnCheckStateChanged__DelegateSignature");

	struct
	{
		bool                           IsChecked;
	} params;

	params.IsChecked = IsChecked;

	UObject::ProcessEvent(fn, &params);
}


// Function Options_UI_OnScreenButtonHints.Options_UI_OnScreenButtonHints_C.ExecuteUbergraph_Options_UI_OnScreenButtonHints
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_UI_OnScreenButtonHints_C::ExecuteUbergraph_Options_UI_OnScreenButtonHints(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_UI_OnScreenButtonHints.Options_UI_OnScreenButtonHints_C.ExecuteUbergraph_Options_UI_OnScreenButtonHints");

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
