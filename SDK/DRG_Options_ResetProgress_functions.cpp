// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Options_ResetProgress_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_ResetProgress.Options_ResetProgress_C.BndEvt__Basic_ButtonWithControls_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UOptions_ResetProgress_C::BndEvt__Basic_ButtonWithControls_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_ResetProgress.Options_ResetProgress_C.BndEvt__Basic_ButtonWithControls_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_ResetProgress.Options_ResetProgress_C.Answer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Yes                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_ResetProgress_C::Answer(bool Yes)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_ResetProgress.Options_ResetProgress_C.Answer");

	struct
	{
		bool                           Yes;
	} params;

	params.Yes = Yes;

	UObject::ProcessEvent(fn, &params);
}


// Function Options_ResetProgress.Options_ResetProgress_C.ExecuteUbergraph_Options_ResetProgress
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_ResetProgress_C::ExecuteUbergraph_Options_ResetProgress(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_ResetProgress.Options_ResetProgress_C.ExecuteUbergraph_Options_ResetProgress");

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
