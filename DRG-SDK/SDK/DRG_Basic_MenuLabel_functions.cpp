// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Basic_MenuLabel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_MenuLabel.Basic_MenuLabel_C.SetJustification
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ETextJustify>      InJustification                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_MenuLabel_C::SetJustification(TEnumAsByte<ETextJustify> InJustification)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_MenuLabel.Basic_MenuLabel_C.SetJustification");

	struct
	{
		TEnumAsByte<ETextJustify>      InJustification;
	} params;

	params.InJustification = InJustification;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_MenuLabel.Basic_MenuLabel_C.SetTypeFace
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_CarbonTypeface> Typeface                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_MenuLabel_C::SetTypeFace(TEnumAsByte<ENUM_CarbonTypeface> Typeface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_MenuLabel.Basic_MenuLabel_C.SetTypeFace");

	struct
	{
		TEnumAsByte<ENUM_CarbonTypeface> Typeface;
	} params;

	params.Typeface = Typeface;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_MenuLabel.Basic_MenuLabel_C.SetFontSize
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            inFontSize                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_MenuLabel_C::SetFontSize(int inFontSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_MenuLabel.Basic_MenuLabel_C.SetFontSize");

	struct
	{
		int                            inFontSize;
	} params;

	params.inFontSize = inFontSize;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_MenuLabel.Basic_MenuLabel_C.SetText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   NewText                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UBasic_MenuLabel_C::SetText(const struct FText& NewText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_MenuLabel.Basic_MenuLabel_C.SetText");

	struct
	{
		struct FText                   NewText;
	} params;

	params.NewText = NewText;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_MenuLabel.Basic_MenuLabel_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_MenuLabel_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_MenuLabel.Basic_MenuLabel_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_MenuLabel.Basic_MenuLabel_C.ExecuteUbergraph_Basic_MenuLabel
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_MenuLabel_C::ExecuteUbergraph_Basic_MenuLabel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_MenuLabel.Basic_MenuLabel_C.ExecuteUbergraph_Basic_MenuLabel");

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
