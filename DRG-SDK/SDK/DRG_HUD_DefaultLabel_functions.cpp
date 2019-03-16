// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_DefaultLabel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetTextColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_MenuColors>   ColorSelector                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_DefaultLabel_C::SetTextColor(TEnumAsByte<ENUM_MenuColors> ColorSelector)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetTextColor");

	struct
	{
		TEnumAsByte<ENUM_MenuColors>   ColorSelector;
	} params;

	params.ColorSelector = ColorSelector;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetOutlineSettings
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFontOutlineSettings    InFontInfo_OutlineSettings     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UHUD_DefaultLabel_C::SetOutlineSettings(const struct FFontOutlineSettings& InFontInfo_OutlineSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetOutlineSettings");

	struct
	{
		struct FFontOutlineSettings    InFontInfo_OutlineSettings;
	} params;

	params.InFontInfo_OutlineSettings = InFontInfo_OutlineSettings;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetJustification
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ETextJustify>      InJustification                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_DefaultLabel_C::SetJustification(TEnumAsByte<ETextJustify> InJustification)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetJustification");

	struct
	{
		TEnumAsByte<ETextJustify>      InJustification;
	} params;

	params.InJustification = InJustification;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetTypeFace
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_AcuminCondensedTypeface> Typeface                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_DefaultLabel_C::SetTypeFace(TEnumAsByte<ENUM_AcuminCondensedTypeface> Typeface)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetTypeFace");

	struct
	{
		TEnumAsByte<ENUM_AcuminCondensedTypeface> Typeface;
	} params;

	params.Typeface = Typeface;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetFontSize
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            inFontSize                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_DefaultLabel_C::SetFontSize(int inFontSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetFontSize");

	struct
	{
		int                            inFontSize;
	} params;

	params.inFontSize = inFontSize;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   NewText                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UHUD_DefaultLabel_C::SetText(const struct FText& NewText)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetText");

	struct
	{
		struct FText                   NewText;
	} params;

	params.NewText = NewText;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_DefaultLabel.HUD_DefaultLabel_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_DefaultLabel_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DefaultLabel.HUD_DefaultLabel_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_DefaultLabel.HUD_DefaultLabel_C.ExecuteUbergraph_HUD_DefaultLabel
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_DefaultLabel_C::ExecuteUbergraph_HUD_DefaultLabel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DefaultLabel.HUD_DefaultLabel_C.ExecuteUbergraph_HUD_DefaultLabel");

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
