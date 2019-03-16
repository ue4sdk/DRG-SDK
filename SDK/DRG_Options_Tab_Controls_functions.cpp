// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Options_Tab_Controls_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_Tab_Controls.Options_Tab_Controls_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOptions_Tab_Controls_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Tab_Controls.Options_Tab_Controls_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_Tab_Controls.Options_Tab_Controls_C.BndEvt__BTN_ResetToDefaults_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UOptions_Tab_Controls_C::BndEvt__BTN_ResetToDefaults_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Tab_Controls.Options_Tab_Controls_C.BndEvt__BTN_ResetToDefaults_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_Tab_Controls.Options_Tab_Controls_C.ExecuteUbergraph_Options_Tab_Controls
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_Tab_Controls_C::ExecuteUbergraph_Options_Tab_Controls(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Tab_Controls.Options_Tab_Controls_C.ExecuteUbergraph_Options_Tab_Controls");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function Options_Tab_Controls.Options_Tab_Controls_C.SettingsChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptions_Tab_Controls_C::SettingsChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Tab_Controls.Options_Tab_Controls_C.SettingsChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
