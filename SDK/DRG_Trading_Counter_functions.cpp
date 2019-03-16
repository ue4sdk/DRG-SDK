// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Trading_Counter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Trading_Counter.Trading_Counter_C.SetMaxValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Max_Value                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTrading_Counter_C::SetMaxValue(int Max_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Counter.Trading_Counter_C.SetMaxValue");

	struct
	{
		int                            Max_Value;
	} params;

	params.Max_Value = Max_Value;

	UObject::ProcessEvent(fn, &params);
}


// Function Trading_Counter.Trading_Counter_C.GetValue
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Value                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTrading_Counter_C::GetValue(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Counter.Trading_Counter_C.GetValue");

	struct
	{
		int                            Value;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Value != nullptr)
		*Value = params.Value;
}


// Function Trading_Counter.Trading_Counter_C.SetValue
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTrading_Counter_C::SetValue(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Counter.Trading_Counter_C.SetValue");

	struct
	{
		int                            Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function Trading_Counter.Trading_Counter_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTrading_Counter_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Counter.Trading_Counter_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function Trading_Counter.Trading_Counter_C.BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_255_OnPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTrading_Counter_C::BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_255_OnPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Counter.Trading_Counter_C.BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_255_OnPressed__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Trading_Counter.Trading_Counter_C.BndEvt__ButtonMinus_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTrading_Counter_C::BndEvt__ButtonMinus_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Counter.Trading_Counter_C.BndEvt__ButtonMinus_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Trading_Counter.Trading_Counter_C.Hold Button
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Direction                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UBasic_ButtonScalable_C* Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UTrading_Counter_C::Hold_Button(int Direction, class UBasic_ButtonScalable_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Counter.Trading_Counter_C.Hold Button");

	struct
	{
		int                            Direction;
		class UBasic_ButtonScalable_C* Button;
	} params;

	params.Direction = Direction;
	params.Button = Button;

	UObject::ProcessEvent(fn, &params);
}


// Function Trading_Counter.Trading_Counter_C.ExecuteUbergraph_Trading_Counter
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTrading_Counter_C::ExecuteUbergraph_Trading_Counter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Counter.Trading_Counter_C.ExecuteUbergraph_Trading_Counter");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function Trading_Counter.Trading_Counter_C.OnValueChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTrading_Counter_C::OnValueChanged__DelegateSignature(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Counter.Trading_Counter_C.OnValueChanged__DelegateSignature");

	struct
	{
		int                            Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
