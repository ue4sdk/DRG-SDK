// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Check_ServerWorkEnvironment_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.SetIsChecked
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InIsChecked                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCheck_ServerWorkEnvironment_C::SetIsChecked(bool InIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.SetIsChecked");

	struct
	{
		bool                           InIsChecked;
	} params;

	params.InIsChecked = InIsChecked;

	UObject::ProcessEvent(fn, &params);
}


// Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.IsInteractable
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCheck_ServerWorkEnvironment_C::IsInteractable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.IsInteractable");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.GetIsChecked
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           Checked                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCheck_ServerWorkEnvironment_C::GetIsChecked(bool* Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.GetIsChecked");

	struct
	{
		bool                           Checked;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Checked != nullptr)
		*Checked = params.Checked;
}


// Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCheck_ServerWorkEnvironment_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           IsChecked                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCheck_ServerWorkEnvironment_C::BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature");

	struct
	{
		bool                           IsChecked;
	} params;

	params.IsChecked = IsChecked;

	UObject::ProcessEvent(fn, &params);
}


// Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UCheck_ServerWorkEnvironment_C::BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UCheck_ServerWorkEnvironment_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.ExecuteUbergraph_Check_ServerWorkEnvironment
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCheck_ServerWorkEnvironment_C::ExecuteUbergraph_Check_ServerWorkEnvironment(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.ExecuteUbergraph_Check_ServerWorkEnvironment");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.OnCheckedChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCheck_ServerWorkEnvironment_C* CheckBox                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UDifficultySetting*      Difficulty                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsChecked                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCheck_ServerWorkEnvironment_C::OnCheckedChanged__DelegateSignature(class UCheck_ServerWorkEnvironment_C* CheckBox, class UDifficultySetting* Difficulty, bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.OnCheckedChanged__DelegateSignature");

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
