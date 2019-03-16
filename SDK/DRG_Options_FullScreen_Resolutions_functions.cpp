// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Options_FullScreen_Resolutions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.ShouldResolutionBeEnabled
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFSDGameUserSettings*    usersettings                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UOptions_FullScreen_Resolutions_C::ShouldResolutionBeEnabled(class UFSDGameUserSettings* usersettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.ShouldResolutionBeEnabled");

	struct
	{
		class UFSDGameUserSettings*    usersettings;
		bool                           ReturnValue;
	} params;

	params.usersettings = usersettings;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.StringToRes
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 String                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// struct FIntPoint               IntPoint                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_FullScreen_Resolutions_C::StringToRes(const struct FString& String, struct FIntPoint* IntPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.StringToRes");

	struct
	{
		struct FString                 String;
		struct FIntPoint               IntPoint;
	} params;

	params.String = String;

	UObject::ProcessEvent(fn, &params);

	if (IntPoint != nullptr)
		*IntPoint = params.IntPoint;
}


// Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.ResToString
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FIntPoint               IntPoint                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FString                 String                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UOptions_FullScreen_Resolutions_C::ResToString(struct FIntPoint* IntPoint, struct FString* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.ResToString");

	struct
	{
		struct FIntPoint               IntPoint;
		struct FString                 String;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IntPoint != nullptr)
		*IntPoint = params.IntPoint;
	if (String != nullptr)
		*String = params.String;
}


// Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOptions_FullScreen_Resolutions_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.UINeedsUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptions_FullScreen_Resolutions_C::UINeedsUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.UINeedsUpdate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.ShowUI
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptions_FullScreen_Resolutions_C::ShowUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.ShowUI");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_20_OnSelectionChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_FullScreen_Resolutions_C::BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_20_OnSelectionChanged__DelegateSignature(const struct FText& Value, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_20_OnSelectionChanged__DelegateSignature");

	struct
	{
		struct FText                   Value;
		int                            Index;
	} params;

	params.Value = Value;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.ExecuteUbergraph_Options_FullScreen_Resolutions
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_FullScreen_Resolutions_C::ExecuteUbergraph_Options_FullScreen_Resolutions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.ExecuteUbergraph_Options_FullScreen_Resolutions");

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
