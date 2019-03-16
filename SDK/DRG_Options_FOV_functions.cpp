// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Options_FOV_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_FOV.Options_FOV_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOptions_FOV_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_FOV.Options_FOV_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_FOV.Options_FOV_C.UINeedsUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptions_FOV_C::UINeedsUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_FOV.Options_FOV_C.UINeedsUpdate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_FOV.Options_FOV_C.ShowUI
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptions_FOV_C::ShowUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_FOV.Options_FOV_C.ShowUI");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_FOV.Options_FOV_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_32_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_FOV_C::BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_32_OnValueChanged__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_FOV.Options_FOV_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_32_OnValueChanged__DelegateSignature");

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function Options_FOV.Options_FOV_C.ExecuteUbergraph_Options_FOV
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_FOV_C::ExecuteUbergraph_Options_FOV(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_FOV.Options_FOV_C.ExecuteUbergraph_Options_FOV");

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
