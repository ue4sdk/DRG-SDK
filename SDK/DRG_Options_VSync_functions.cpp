// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Options_VSync_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_VSync.Options_VSync_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOptions_VSync_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_VSync.Options_VSync_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_VSync.Options_VSync_C.UINeedsUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptions_VSync_C::UINeedsUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_VSync.Options_VSync_C.UINeedsUpdate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_VSync.Options_VSync_C.ShowOptions
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptions_VSync_C::ShowOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_VSync.Options_VSync_C.ShowOptions");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_VSync.Options_VSync_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_15_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           IsChecked                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_VSync_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_15_OnCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_VSync.Options_VSync_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_15_OnCheckStateChanged__DelegateSignature");

	struct
	{
		bool                           IsChecked;
	} params;

	params.IsChecked = IsChecked;

	UObject::ProcessEvent(fn, &params);
}


// Function Options_VSync.Options_VSync_C.ExecuteUbergraph_Options_VSync
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_VSync_C::ExecuteUbergraph_Options_VSync(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_VSync.Options_VSync_C.ExecuteUbergraph_Options_VSync");

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
