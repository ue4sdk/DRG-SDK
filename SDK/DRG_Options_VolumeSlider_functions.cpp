// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Options_VolumeSlider_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_VolumeSlider.Options_VolumeSlider_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOptions_VolumeSlider_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_VolumeSlider.Options_VolumeSlider_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_VolumeSlider.Options_VolumeSlider_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_VolumeSlider_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_VolumeSlider.Options_VolumeSlider_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function Options_VolumeSlider.Options_VolumeSlider_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_VolumeSlider_C::BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_VolumeSlider.Options_VolumeSlider_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature");

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function Options_VolumeSlider.Options_VolumeSlider_C.UINeedsUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptions_VolumeSlider_C::UINeedsUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_VolumeSlider.Options_VolumeSlider_C.UINeedsUpdate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_VolumeSlider.Options_VolumeSlider_C.Update Percentage Text
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptions_VolumeSlider_C::Update_Percentage_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_VolumeSlider.Options_VolumeSlider_C.Update Percentage Text");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_VolumeSlider.Options_VolumeSlider_C.ExecuteUbergraph_Options_VolumeSlider
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_VolumeSlider_C::ExecuteUbergraph_Options_VolumeSlider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_VolumeSlider.Options_VolumeSlider_C.ExecuteUbergraph_Options_VolumeSlider");

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
