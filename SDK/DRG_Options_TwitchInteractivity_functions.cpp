// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Options_TwitchInteractivity_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_TwitchInteractivity.Options_TwitchInteractivity_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOptions_TwitchInteractivity_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_TwitchInteractivity.Options_TwitchInteractivity_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_TwitchInteractivity.Options_TwitchInteractivity_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           IsChecked                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_TwitchInteractivity_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_TwitchInteractivity.Options_TwitchInteractivity_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature");

	struct
	{
		bool                           IsChecked;
	} params;

	params.IsChecked = IsChecked;

	UObject::ProcessEvent(fn, &params);
}


// Function Options_TwitchInteractivity.Options_TwitchInteractivity_C.BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UOptions_TwitchInteractivity_C::BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_TwitchInteractivity.Options_TwitchInteractivity_C.BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_TwitchInteractivity.Options_TwitchInteractivity_C.BndEvt__Mixer_Logout_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UOptions_TwitchInteractivity_C::BndEvt__Mixer_Logout_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_TwitchInteractivity.Options_TwitchInteractivity_C.BndEvt__Mixer_Logout_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_TwitchInteractivity.Options_TwitchInteractivity_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_TwitchInteractivity_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_TwitchInteractivity.Options_TwitchInteractivity_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function Options_TwitchInteractivity.Options_TwitchInteractivity_C.ExecuteUbergraph_Options_TwitchInteractivity
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_TwitchInteractivity_C::ExecuteUbergraph_Options_TwitchInteractivity(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_TwitchInteractivity.Options_TwitchInteractivity_C.ExecuteUbergraph_Options_TwitchInteractivity");

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
