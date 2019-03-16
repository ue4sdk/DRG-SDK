// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Options_Scalability_Textures_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_Scalability_Textures.Options_Scalability_Textures_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOptions_Scalability_Textures_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Scalability_Textures.Options_Scalability_Textures_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_Scalability_Textures.Options_Scalability_Textures_C.UINeedsUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptions_Scalability_Textures_C::UINeedsUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Scalability_Textures.Options_Scalability_Textures_C.UINeedsUpdate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_Scalability_Textures.Options_Scalability_Textures_C.ShowOptions
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptions_Scalability_Textures_C::ShowOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Scalability_Textures.Options_Scalability_Textures_C.ShowOptions");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_Scalability_Textures.Options_Scalability_Textures_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_9_OnSelectionChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_Scalability_Textures_C::BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_9_OnSelectionChanged__DelegateSignature(const struct FText& Value, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Scalability_Textures.Options_Scalability_Textures_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_9_OnSelectionChanged__DelegateSignature");

	struct
	{
		struct FText                   Value;
		int                            Index;
	} params;

	params.Value = Value;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function Options_Scalability_Textures.Options_Scalability_Textures_C.ExecuteUbergraph_Options_Scalability_Textures
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_Scalability_Textures_C::ExecuteUbergraph_Options_Scalability_Textures(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Scalability_Textures.Options_Scalability_Textures_C.ExecuteUbergraph_Options_Scalability_Textures");

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
