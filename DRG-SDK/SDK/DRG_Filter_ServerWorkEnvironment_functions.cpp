// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Filter_ServerWorkEnvironment_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.IsDifficultySelected
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UDifficultySetting*      InDifficulty                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Selected                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFilter_ServerWorkEnvironment_C::IsDifficultySelected(class UDifficultySetting* InDifficulty, bool* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.IsDifficultySelected");

	struct
	{
		class UDifficultySetting*      InDifficulty;
		bool                           Selected;
	} params;

	params.InDifficulty = InDifficulty;

	UObject::ProcessEvent(fn, &params);

	if (Selected != nullptr)
		*Selected = params.Selected;
}


// Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.UpdateSubheader
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFilter_ServerWorkEnvironment_C::UpdateSubheader()
{
	static auto fn = UObject::FindObject<UFunction>("Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.UpdateSubheader");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.Add Work Environment
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDifficultySetting*      Difficulty                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCheck_ServerWorkEnvironment_C* OutWidget                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           OutIsChecked                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFilter_ServerWorkEnvironment_C::Add_Work_Environment(class UDifficultySetting* Difficulty, class UCheck_ServerWorkEnvironment_C** OutWidget, bool* OutIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.Add Work Environment");

	struct
	{
		class UDifficultySetting*      Difficulty;
		class UCheck_ServerWorkEnvironment_C* OutWidget;
		bool                           OutIsChecked;
	} params;

	params.Difficulty = Difficulty;

	UObject::ProcessEvent(fn, &params);

	if (OutWidget != nullptr)
		*OutWidget = params.OutWidget;
	if (OutIsChecked != nullptr)
		*OutIsChecked = params.OutIsChecked;
}


// Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFilter_ServerWorkEnvironment_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.OnCheckedChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCheck_ServerWorkEnvironment_C* CheckBox                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UDifficultySetting*      Difficulty                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsChecked                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFilter_ServerWorkEnvironment_C::OnCheckedChanged(class UCheck_ServerWorkEnvironment_C* CheckBox, class UDifficultySetting* Difficulty, bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.OnCheckedChanged");

	struct
	{
		class UCheck_ServerWorkEnvironment_C* CheckBox;
		class UDifficultySetting*      Difficulty;
		bool                           IsChecked;
	} params;

	params.CheckBox = CheckBox;
	params.Difficulty = Difficulty;
	params.IsChecked = IsChecked;

	UObject::ProcessEvent(fn, &params);
}


// Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.Reset
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFilter_ServerWorkEnvironment_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.Reset");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.ExecuteUbergraph_Filter_ServerWorkEnvironment
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFilter_ServerWorkEnvironment_C::ExecuteUbergraph_Filter_ServerWorkEnvironment(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.ExecuteUbergraph_Filter_ServerWorkEnvironment");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.OnSelectionChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFilter_ServerWorkEnvironment_C::OnSelectionChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.OnSelectionChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
