// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Basic_OptionSwitcher_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.RemoveOption
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBasic_OptionSwitcher_C::RemoveOption(struct FText* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.RemoveOption");

	struct
	{
		struct FText                   Item;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Item != nullptr)
		*Item = params.Item;

	return params.ReturnValue;
}


// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.GetOptionCount
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Count                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_OptionSwitcher_C::GetOptionCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.GetOptionCount");

	struct
	{
		int                            Count;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Count != nullptr)
		*Count = params.Count;
}


// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.ClearOptions
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBasic_OptionSwitcher_C::ClearOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.ClearOptions");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.Add Option
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Option                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            Index                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_OptionSwitcher_C::Add_Option(const struct FText& Option, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.Add Option");

	struct
	{
		struct FText                   Option;
		int                            Index;
	} params;

	params.Option = Option;

	UObject::ProcessEvent(fn, &params);

	if (Index != nullptr)
		*Index = params.Index;
}


// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.GetSelectedValue
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   Value                          (CPF_Parm, CPF_OutParm)

void UBasic_OptionSwitcher_C::GetSelectedValue(struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.GetSelectedValue");

	struct
	{
		struct FText                   Value;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Value != nullptr)
		*Value = params.Value;
}


// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.GetSelectedIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_OptionSwitcher_C::GetSelectedIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.GetSelectedIndex");

	struct
	{
		int                            Index;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Index != nullptr)
		*Index = params.Index;
}


// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.SetSelectedValue
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UBasic_OptionSwitcher_C::SetSelectedValue(const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.SetSelectedValue");

	struct
	{
		struct FText                   Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.SetSelectedIndex
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_OptionSwitcher_C::SetSelectedIndex(int NewIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.SetSelectedIndex");

	struct
	{
		int                            NewIndex;
	} params;

	params.NewIndex = NewIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.Set Options
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FText>           Options                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// int                            DefaultIndex                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_OptionSwitcher_C::Set_Options(int DefaultIndex, TArray<struct FText>* Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.Set Options");

	struct
	{
		TArray<struct FText>           Options;
		int                            DefaultIndex;
	} params;

	params.DefaultIndex = DefaultIndex;

	UObject::ProcessEvent(fn, &params);

	if (Options != nullptr)
		*Options = params.Options;
}


// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_OptionSwitcher_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_143_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBasic_OptionSwitcher_C::BndEvt__Button_Left_K2Node_ComponentBoundEvent_143_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_143_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_164_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBasic_OptionSwitcher_C::BndEvt__Button_Right_K2Node_ComponentBoundEvent_164_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_164_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.ExecuteUbergraph_Basic_OptionSwitcher
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_OptionSwitcher_C::ExecuteUbergraph_Basic_OptionSwitcher(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.ExecuteUbergraph_Basic_OptionSwitcher");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.OnSelectionChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_OptionSwitcher_C::OnSelectionChanged__DelegateSignature(const struct FText& Value, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.OnSelectionChanged__DelegateSignature");

	struct
	{
		struct FText                   Value;
		int                            Index;
	} params;

	params.Value = Value;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
