// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Basic_Slider_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_Slider.Basic_Slider_C.Set Text
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   New_Text                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UBasic_Slider_C::Set_Text(const struct FText& New_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Slider.Basic_Slider_C.Set Text");

	struct
	{
		struct FText                   New_Text;
	} params;

	params.New_Text = New_Text;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_Slider.Basic_Slider_C.Get Value
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Value                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_Slider_C::Get_Value(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Slider.Basic_Slider_C.Get Value");

	struct
	{
		float                          Value;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Value != nullptr)
		*Value = params.Value;
}


// Function Basic_Slider.Basic_Slider_C.Get Percent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Percent                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_Slider_C::Get_Percent(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Slider.Basic_Slider_C.Get Percent");

	struct
	{
		float                          Percent;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Percent != nullptr)
		*Percent = params.Percent;
}


// Function Basic_Slider.Basic_Slider_C.Set Value
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_Slider_C::Set_Value(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Slider.Basic_Slider_C.Set Value");

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_Slider.Basic_Slider_C.Set Percent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          New_Percent                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_Slider_C::Set_Percent(float New_Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Slider.Basic_Slider_C.Set Percent");

	struct
	{
		float                          New_Percent;
	} params;

	params.New_Percent = New_Percent;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_Slider.Basic_Slider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_Slider_C::BndEvt__Slider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Slider.Basic_Slider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature");

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_Slider.Basic_Slider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBasic_Slider_C::BndEvt__Slider_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Slider.Basic_Slider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Basic_Slider.Basic_Slider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_6_OnMouseCaptureEndEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBasic_Slider_C::BndEvt__Slider_K2Node_ComponentBoundEvent_6_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Slider.Basic_Slider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_6_OnMouseCaptureEndEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Basic_Slider.Basic_Slider_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_Slider_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Slider.Basic_Slider_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_Slider.Basic_Slider_C.Update Text
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBasic_Slider_C::Update_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Slider.Basic_Slider_C.Update Text");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Basic_Slider.Basic_Slider_C.ExecuteUbergraph_Basic_Slider
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_Slider_C::ExecuteUbergraph_Basic_Slider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Slider.Basic_Slider_C.ExecuteUbergraph_Basic_Slider");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_Slider.Basic_Slider_C.OnPercentChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Percent                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_Slider_C::OnPercentChanged__DelegateSignature(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Slider.Basic_Slider_C.OnPercentChanged__DelegateSignature");

	struct
	{
		float                          Percent;
	} params;

	params.Percent = Percent;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_Slider.Basic_Slider_C.OnValueChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_Slider_C::OnValueChanged__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Slider.Basic_Slider_C.OnValueChanged__DelegateSignature");

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
