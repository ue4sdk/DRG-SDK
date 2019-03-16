// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Basic_FlatButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_FlatButton.Basic_FlatButton_C.CreateMenuStyle
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<ENUM_MenuColors>   ColorSelector                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FSlateBrush             SlateBrush                     (CPF_Parm, CPF_OutParm)

void UBasic_FlatButton_C::CreateMenuStyle(TEnumAsByte<ENUM_MenuColors> ColorSelector, struct FSlateBrush* SlateBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_FlatButton.Basic_FlatButton_C.CreateMenuStyle");

	struct
	{
		TEnumAsByte<ENUM_MenuColors>   ColorSelector;
		struct FSlateBrush             SlateBrush;
	} params;

	params.ColorSelector = ColorSelector;

	UObject::ProcessEvent(fn, &params);

	if (SlateBrush != nullptr)
		*SlateBrush = params.SlateBrush;
}


// Function Basic_FlatButton.Basic_FlatButton_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_FlatButton_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_FlatButton.Basic_FlatButton_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_FlatButton.Basic_FlatButton_C.Set Text
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           UpperCase                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_FlatButton_C::Set_Text(const struct FText& Text, bool UpperCase)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_FlatButton.Basic_FlatButton_C.Set Text");

	struct
	{
		struct FText                   Text;
		bool                           UpperCase;
	} params;

	params.Text = Text;
	params.UpperCase = UpperCase;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_FlatButton.Basic_FlatButton_C.Set Font Size
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            FontSize                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_FlatButton_C::Set_Font_Size(int FontSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_FlatButton.Basic_FlatButton_C.Set Font Size");

	struct
	{
		int                            FontSize;
	} params;

	params.FontSize = FontSize;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_FlatButton.Basic_FlatButton_C.BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBasic_FlatButton_C::BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_FlatButton.Basic_FlatButton_C.BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Basic_FlatButton.Basic_FlatButton_C.ExecuteUbergraph_Basic_FlatButton
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_FlatButton_C::ExecuteUbergraph_Basic_FlatButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_FlatButton.Basic_FlatButton_C.ExecuteUbergraph_Basic_FlatButton");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_FlatButton.Basic_FlatButton_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBasic_FlatButton_C*     Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UBasic_FlatButton_C::OnClicked__DelegateSignature(class UBasic_FlatButton_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_FlatButton.Basic_FlatButton_C.OnClicked__DelegateSignature");

	struct
	{
		class UBasic_FlatButton_C*     Button;
	} params;

	params.Button = Button;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
