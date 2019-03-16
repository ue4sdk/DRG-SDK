// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Options_Tab_UI_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_Tab_UI.Options_Tab_UI_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOptions_Tab_UI_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Tab_UI.Options_Tab_UI_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_Tab_UI.Options_Tab_UI_C.BndEvt__Options_Language_K2Node_ComponentBoundEvent_0_OnLanguageChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FLocalizedLanguageInfo  Selected_Language              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptions_Tab_UI_C::BndEvt__Options_Language_K2Node_ComponentBoundEvent_0_OnLanguageChanged__DelegateSignature(const struct FLocalizedLanguageInfo& Selected_Language)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Tab_UI.Options_Tab_UI_C.BndEvt__Options_Language_K2Node_ComponentBoundEvent_0_OnLanguageChanged__DelegateSignature");

	struct
	{
		struct FLocalizedLanguageInfo  Selected_Language;
	} params;

	params.Selected_Language = Selected_Language;

	UObject::ProcessEvent(fn, &params);
}


// Function Options_Tab_UI.Options_Tab_UI_C.ExecuteUbergraph_Options_Tab_UI
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_Tab_UI_C::ExecuteUbergraph_Options_Tab_UI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Tab_UI.Options_Tab_UI_C.ExecuteUbergraph_Options_Tab_UI");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function Options_Tab_UI.Options_Tab_UI_C.SettingsChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptions_Tab_UI_C::SettingsChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Tab_UI.Options_Tab_UI_C.SettingsChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
