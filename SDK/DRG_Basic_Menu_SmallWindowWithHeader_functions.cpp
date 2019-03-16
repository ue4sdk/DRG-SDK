// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Basic_Menu_SmallWindowWithHeader_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.SetHeaderText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   NewHeaderText                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UBasic_Menu_SmallWindowWithHeader_C::SetHeaderText(const struct FText& NewHeaderText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.SetHeaderText");

	struct
	{
		struct FText                   NewHeaderText;
	} params;

	params.NewHeaderText = NewHeaderText;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.IsHovering
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBasic_Menu_SmallWindowWithHeader_C::IsHovering()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.IsHovering");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBasic_Menu_SmallWindowWithHeader_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBasic_Menu_SmallWindowWithHeader_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBasic_Menu_SmallWindowWithHeader_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_Menu_SmallWindowWithHeader_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.SetCounterText
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UBasic_Menu_SmallWindowWithHeader_C::SetCounterText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.SetCounterText");

	struct
	{
		struct FText                   InText;
	} params;

	params.InText = InText;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.ExecuteUbergraph_Basic_Menu_SmallWindowWithHeader
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_Menu_SmallWindowWithHeader_C::ExecuteUbergraph_Basic_Menu_SmallWindowWithHeader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.ExecuteUbergraph_Basic_Menu_SmallWindowWithHeader");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.On Clicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBasic_Menu_SmallWindowWithHeader_C::On_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.On Clicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
