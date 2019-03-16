// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_PreventDuplicateCharacters_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_PreventDuplicateCharacters.ITM_PreventDuplicateCharacters_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_15_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           IsChecked                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_PreventDuplicateCharacters_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_15_OnCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_PreventDuplicateCharacters.ITM_PreventDuplicateCharacters_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_15_OnCheckStateChanged__DelegateSignature");

	struct
	{
		bool                           IsChecked;
	} params;

	params.IsChecked = IsChecked;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_PreventDuplicateCharacters.ITM_PreventDuplicateCharacters_C.UpdateState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_PreventDuplicateCharacters_C::UpdateState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_PreventDuplicateCharacters.ITM_PreventDuplicateCharacters_C.UpdateState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_PreventDuplicateCharacters.ITM_PreventDuplicateCharacters_C.ExecuteUbergraph_ITM_PreventDuplicateCharacters
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_PreventDuplicateCharacters_C::ExecuteUbergraph_ITM_PreventDuplicateCharacters(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_PreventDuplicateCharacters.ITM_PreventDuplicateCharacters_C.ExecuteUbergraph_ITM_PreventDuplicateCharacters");

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
