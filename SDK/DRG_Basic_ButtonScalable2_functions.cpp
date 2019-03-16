// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Basic_ButtonScalable2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetBackgroundColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_MenuColors>   ColorSelector                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_ButtonScalable2_C::SetBackgroundColor(TEnumAsByte<ENUM_MenuColors> ColorSelector)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetBackgroundColor");

	struct
	{
		TEnumAsByte<ENUM_MenuColors>   ColorSelector;
	} params;

	params.ColorSelector = ColorSelector;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetIconBrush
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UImage*                  Icon                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FSlateBrush             InBrush                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FMargin                 InPadding                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_ButtonScalable2_C::SetIconBrush(const struct FSlateBrush& InBrush, const struct FMargin& InPadding, class UImage** Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetIconBrush");

	struct
	{
		class UImage*                  Icon;
		struct FSlateBrush             InBrush;
		struct FMargin                 InPadding;
	} params;

	params.InBrush = InBrush;
	params.InPadding = InPadding;

	UObject::ProcessEvent(fn, &params);

	if (Icon != nullptr)
		*Icon = params.Icon;
}


// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetTints
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            PC__Icon_Tint                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Controller_Icon_Tint           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_ButtonScalable2_C::SetTints(const struct FLinearColor& PC__Icon_Tint, const struct FLinearColor& Controller_Icon_Tint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetTints");

	struct
	{
		struct FLinearColor            PC__Icon_Tint;
		struct FLinearColor            Controller_Icon_Tint;
	} params;

	params.PC__Icon_Tint = PC__Icon_Tint;
	params.Controller_Icon_Tint = Controller_Icon_Tint;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetIconTint
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            PC__Icon_Tint                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Controller_Icon_Tint           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_ButtonScalable2_C::SetIconTint(const struct FLinearColor& PC__Icon_Tint, const struct FLinearColor& Controller_Icon_Tint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetIconTint");

	struct
	{
		struct FLinearColor            PC__Icon_Tint;
		struct FLinearColor            Controller_Icon_Tint;
	} params;

	params.PC__Icon_Tint = PC__Icon_Tint;
	params.Controller_Icon_Tint = Controller_Icon_Tint;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnNewLine
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_ButtonScalable2_C::OnNewLine(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnNewLine");

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnAddIcon
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// struct FActionIconMapping      Icon                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBasic_ButtonScalable2_C::OnAddIcon(const struct FString& Name, const struct FActionIconMapping& Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnAddIcon");

	struct
	{
		struct FString                 Name;
		struct FActionIconMapping      Icon;
	} params;

	params.Name = Name;
	params.Icon = Icon;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnAddKeyName
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UBasic_ButtonScalable2_C::OnAddKeyName(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnAddKeyName");

	struct
	{
		struct FString                 Name;
	} params;

	params.Name = Name;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_ButtonScalable2_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBasic_ButtonScalable2_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBasic_ButtonScalable2_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBasic_ButtonScalable2_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnAddString
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UBasic_ButtonScalable2_C::OnAddString(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnAddString");

	struct
	{
		struct FString                 Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnReset
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBasic_ButtonScalable2_C::OnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnReset");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.Toggle
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsToggledOn                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_ButtonScalable2_C::Toggle(bool IsToggledOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.Toggle");

	struct
	{
		bool                           IsToggledOn;
	} params;

	params.IsToggledOn = IsToggledOn;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetToggled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBasic_ButtonScalable2_C::SetToggled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetToggled");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetUntoggled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBasic_ButtonScalable2_C::SetUntoggled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetUntoggled");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.Click
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBasic_ButtonScalable2_C::Click()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.Click");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.ExecuteUbergraph_Basic_ButtonScalable2
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_ButtonScalable2_C::ExecuteUbergraph_Basic_ButtonScalable2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.ExecuteUbergraph_Basic_ButtonScalable2");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnUnhovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBasic_ButtonScalable2_C::OnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnUnhovered__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBasic_ButtonScalable2_C::OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnHovered__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBasic_ButtonScalable2_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
