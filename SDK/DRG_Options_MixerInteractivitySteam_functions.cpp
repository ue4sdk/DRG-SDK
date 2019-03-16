// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Options_MixerInteractivitySteam_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_MixerInteractivitySteam.Options_MixerInteractivitySteam_C.RefreshState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptions_MixerInteractivitySteam_C::RefreshState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_MixerInteractivitySteam.Options_MixerInteractivitySteam_C.RefreshState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_MixerInteractivitySteam.Options_MixerInteractivitySteam_C.BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UOptions_MixerInteractivitySteam_C::BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_MixerInteractivitySteam.Options_MixerInteractivitySteam_C.BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_MixerInteractivitySteam.Options_MixerInteractivitySteam_C.MioxerStateChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFSDMixerLoginState            State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_MixerInteractivitySteam_C::MioxerStateChange(EFSDMixerLoginState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_MixerInteractivitySteam.Options_MixerInteractivitySteam_C.MioxerStateChange");

	struct
	{
		EFSDMixerLoginState            State;
	} params;

	params.State = State;

	UObject::ProcessEvent(fn, &params);
}


// Function Options_MixerInteractivitySteam.Options_MixerInteractivitySteam_C.BndEvt__Mixer_Logout_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UOptions_MixerInteractivitySteam_C::BndEvt__Mixer_Logout_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_MixerInteractivitySteam.Options_MixerInteractivitySteam_C.BndEvt__Mixer_Logout_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_MixerInteractivitySteam.Options_MixerInteractivitySteam_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           IsChecked                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_MixerInteractivitySteam_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_MixerInteractivitySteam.Options_MixerInteractivitySteam_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature");

	struct
	{
		bool                           IsChecked;
	} params;

	params.IsChecked = IsChecked;

	UObject::ProcessEvent(fn, &params);
}


// Function Options_MixerInteractivitySteam.Options_MixerInteractivitySteam_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOptions_MixerInteractivitySteam_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_MixerInteractivitySteam.Options_MixerInteractivitySteam_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_MixerInteractivitySteam.Options_MixerInteractivitySteam_C.ExecuteUbergraph_Options_MixerInteractivitySteam
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_MixerInteractivitySteam_C::ExecuteUbergraph_Options_MixerInteractivitySteam(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_MixerInteractivitySteam.Options_MixerInteractivitySteam_C.ExecuteUbergraph_Options_MixerInteractivitySteam");

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
