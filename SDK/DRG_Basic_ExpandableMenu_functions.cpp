// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Basic_ExpandableMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetFixedSizeOpenHeight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Item_Count                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Item_Height                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_ExpandableMenu_C::SetFixedSizeOpenHeight(int Item_Count, float Item_Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetFixedSizeOpenHeight");

	struct
	{
		int                            Item_Count;
		float                          Item_Height;
	} params;

	params.Item_Count = Item_Count;
	params.Item_Height = Item_Height;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetOpenHeight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          OpenHeight                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_ExpandableMenu_C::SetOpenHeight(float OpenHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetOpenHeight");

	struct
	{
		float                          OpenHeight;
	} params;

	params.OpenHeight = OpenHeight;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetHovered
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InHovered                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_ExpandableMenu_C::SetHovered(bool InHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetHovered");

	struct
	{
		bool                           InHovered;
	} params;

	params.InHovered = InHovered;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetHeader2
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UBasic_ExpandableMenu_C::SetHeader2(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetHeader2");

	struct
	{
		struct FText                   InText;
	} params;

	params.InText = InText;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetHeader1
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UBasic_ExpandableMenu_C::SetHeader1(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetHeader1");

	struct
	{
		struct FText                   InText;
	} params;

	params.InText = InText;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetMenuOpen
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsOpen                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           OutIsOpen                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_ExpandableMenu_C::SetMenuOpen(bool IsOpen, bool* OutIsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetMenuOpen");

	struct
	{
		bool                           IsOpen;
		bool                           OutIsOpen;
	} params;

	params.IsOpen = IsOpen;

	UObject::ProcessEvent(fn, &params);

	if (OutIsOpen != nullptr)
		*OutIsOpen = params.OutIsOpen;
}


// Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.GetButtonStyle
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<ENUM_MenuColors>   Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FSlateBrush             SlateBrush                     (CPF_Parm, CPF_OutParm)

void UBasic_ExpandableMenu_C::GetButtonStyle(TEnumAsByte<ENUM_MenuColors> Color, struct FSlateBrush* SlateBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.GetButtonStyle");

	struct
	{
		TEnumAsByte<ENUM_MenuColors>   Color;
		struct FSlateBrush             SlateBrush;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);

	if (SlateBrush != nullptr)
		*SlateBrush = params.SlateBrush;
}


// Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.BndEvt__CategoryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBasic_ExpandableMenu_C::BndEvt__CategoryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.BndEvt__CategoryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetHeightScale
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          NewScale                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_ExpandableMenu_C::SetHeightScale(float NewScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetHeightScale");

	struct
	{
		float                          NewScale;
	} params;

	params.NewScale = NewScale;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_ExpandableMenu_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.BndEvt__CategoryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBasic_ExpandableMenu_C::BndEvt__CategoryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.BndEvt__CategoryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.BndEvt__CategoryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UBasic_ExpandableMenu_C::BndEvt__CategoryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.BndEvt__CategoryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.ExecuteUbergraph_Basic_ExpandableMenu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_ExpandableMenu_C::ExecuteUbergraph_Basic_ExpandableMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.ExecuteUbergraph_Basic_ExpandableMenu");

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
