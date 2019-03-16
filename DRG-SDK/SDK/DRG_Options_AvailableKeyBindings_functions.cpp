// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Options_AvailableKeyBindings_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_AvailableKeyBindings.Options_AvailableKeyBindings_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOptions_AvailableKeyBindings_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_AvailableKeyBindings.Options_AvailableKeyBindings_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_AvailableKeyBindings.Options_AvailableKeyBindings_C.BndEvt__BTN_ResetToDefaults_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UOptions_AvailableKeyBindings_C::BndEvt__BTN_ResetToDefaults_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_AvailableKeyBindings.Options_AvailableKeyBindings_C.BndEvt__BTN_ResetToDefaults_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_AvailableKeyBindings.Options_AvailableKeyBindings_C.ExecuteUbergraph_Options_AvailableKeyBindings
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_AvailableKeyBindings_C::ExecuteUbergraph_Options_AvailableKeyBindings(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_AvailableKeyBindings.Options_AvailableKeyBindings_C.ExecuteUbergraph_Options_AvailableKeyBindings");

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
