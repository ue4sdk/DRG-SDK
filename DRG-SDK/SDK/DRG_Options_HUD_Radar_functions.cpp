// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Options_HUD_Radar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_HUD_Radar.Options_HUD_Radar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOptions_HUD_Radar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_HUD_Radar.Options_HUD_Radar_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_HUD_Radar.Options_HUD_Radar_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           IsChecked                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_HUD_Radar_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_HUD_Radar.Options_HUD_Radar_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature");

	struct
	{
		bool                           IsChecked;
	} params;

	params.IsChecked = IsChecked;

	UObject::ProcessEvent(fn, &params);
}


// Function Options_HUD_Radar.Options_HUD_Radar_C.OnHUDVisibilityChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptions_HUD_Radar_C::OnHUDVisibilityChanged_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_HUD_Radar.Options_HUD_Radar_C.OnHUDVisibilityChanged_Event_1");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_HUD_Radar.Options_HUD_Radar_C.ExecuteUbergraph_Options_HUD_Radar
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_HUD_Radar_C::ExecuteUbergraph_Options_HUD_Radar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_HUD_Radar.Options_HUD_Radar_C.ExecuteUbergraph_Options_HUD_Radar");

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
