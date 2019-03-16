// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Options_Language_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_Language.Options_Language_C.GetLanguageName
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 InName                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// struct FString                 InCode                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UOptions_Language_C::GetLanguageName(const struct FString& InName, const struct FString& InCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Language.Options_Language_C.GetLanguageName");

	struct
	{
		struct FString                 InName;
		struct FString                 InCode;
		struct FText                   ReturnValue;
	} params;

	params.InName = InName;
	params.InCode = InCode;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Options_Language.Options_Language_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOptions_Language_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Language.Options_Language_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_Language.Options_Language_C.UINeedsUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptions_Language_C::UINeedsUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Language.Options_Language_C.UINeedsUpdate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_Language.Options_Language_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_Language_C::BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(const struct FText& Value, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Language.Options_Language_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature");

	struct
	{
		struct FText                   Value;
		int                            Index;
	} params;

	params.Value = Value;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function Options_Language.Options_Language_C.ExecuteUbergraph_Options_Language
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_Language_C::ExecuteUbergraph_Options_Language(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Language.Options_Language_C.ExecuteUbergraph_Options_Language");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function Options_Language.Options_Language_C.OnLanguageChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLocalizedLanguageInfo  Selected_Language              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptions_Language_C::OnLanguageChanged__DelegateSignature(const struct FLocalizedLanguageInfo& Selected_Language)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Language.Options_Language_C.OnLanguageChanged__DelegateSignature");

	struct
	{
		struct FLocalizedLanguageInfo  Selected_Language;
	} params;

	params.Selected_Language = Selected_Language;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
