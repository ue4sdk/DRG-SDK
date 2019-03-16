// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Options_UIScale_Slider_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_UIScale_Slider.Options_UIScale_Slider_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOptions_UIScale_Slider_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_UIScale_Slider.Options_UIScale_Slider_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_UIScale_Slider.Options_UIScale_Slider_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_UIScale_Slider_C::BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_UIScale_Slider.Options_UIScale_Slider_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature");

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function Options_UIScale_Slider.Options_UIScale_Slider_C.ExecuteUbergraph_Options_UIScale_Slider
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_UIScale_Slider_C::ExecuteUbergraph_Options_UIScale_Slider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_UIScale_Slider.Options_UIScale_Slider_C.ExecuteUbergraph_Options_UIScale_Slider");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function Options_UIScale_Slider.Options_UIScale_Slider_C.OnVolumeChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Volume                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_UIScale_Slider_C::OnVolumeChanged__DelegateSignature(float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_UIScale_Slider.Options_UIScale_Slider_C.OnVolumeChanged__DelegateSignature");

	struct
	{
		float                          Volume;
	} params;

	params.Volume = Volume;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
