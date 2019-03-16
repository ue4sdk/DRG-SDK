// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Options_PreventLatejoinCharacterDuplication_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_PreventLatejoinCharacterDuplication.Options_PreventLatejoinCharacterDuplication_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOptions_PreventLatejoinCharacterDuplication_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_PreventLatejoinCharacterDuplication.Options_PreventLatejoinCharacterDuplication_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_PreventLatejoinCharacterDuplication.Options_PreventLatejoinCharacterDuplication_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           IsChecked                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_PreventLatejoinCharacterDuplication_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_PreventLatejoinCharacterDuplication.Options_PreventLatejoinCharacterDuplication_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature");

	struct
	{
		bool                           IsChecked;
	} params;

	params.IsChecked = IsChecked;

	UObject::ProcessEvent(fn, &params);
}


// Function Options_PreventLatejoinCharacterDuplication.Options_PreventLatejoinCharacterDuplication_C.OnGameUserSettingsChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptions_PreventLatejoinCharacterDuplication_C::OnGameUserSettingsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_PreventLatejoinCharacterDuplication.Options_PreventLatejoinCharacterDuplication_C.OnGameUserSettingsChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_PreventLatejoinCharacterDuplication.Options_PreventLatejoinCharacterDuplication_C.ExecuteUbergraph_Options_PreventLatejoinCharacterDuplication
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_PreventLatejoinCharacterDuplication_C::ExecuteUbergraph_Options_PreventLatejoinCharacterDuplication(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_PreventLatejoinCharacterDuplication.Options_PreventLatejoinCharacterDuplication_C.ExecuteUbergraph_Options_PreventLatejoinCharacterDuplication");

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
