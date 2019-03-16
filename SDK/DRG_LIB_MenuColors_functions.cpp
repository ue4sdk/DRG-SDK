// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_LIB_MenuColors_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LIB_MenuColors.LIB_MenuColors_C.SelectTextColor
// (FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTextBlock*              Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// TEnumAsByte<ENUM_MenuColors>   FALSE                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<ENUM_MenuColors>   TRUE                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULIB_MenuColors_C::SelectTextColor(class UTextBlock* Text, TEnumAsByte<ENUM_MenuColors> FALSE, TEnumAsByte<ENUM_MenuColors> TRUE, bool Condition, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_MenuColors.LIB_MenuColors_C.SelectTextColor");

	struct
	{
		class UTextBlock*              Text;
		TEnumAsByte<ENUM_MenuColors>   FALSE;
		TEnumAsByte<ENUM_MenuColors>   TRUE;
		bool                           Condition;
		class UObject*                 __WorldContext;
	} params;

	params.Text = Text;
	params.FALSE = FALSE;
	params.TRUE = TRUE;
	params.Condition = Condition;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function LIB_MenuColors.LIB_MenuColors_C.SetTextColor
// (FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTextBlock*              Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// TEnumAsByte<ENUM_MenuColors>   Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULIB_MenuColors_C::SetTextColor(class UTextBlock* Text, TEnumAsByte<ENUM_MenuColors> Color, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_MenuColors.LIB_MenuColors_C.SetTextColor");

	struct
	{
		class UTextBlock*              Text;
		TEnumAsByte<ENUM_MenuColors>   Color;
		class UObject*                 __WorldContext;
	} params;

	params.Text = Text;
	params.Color = Color;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function LIB_MenuColors.LIB_MenuColors_C.SelectMenuColor
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<ENUM_MenuColors>   FALSE                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<ENUM_MenuColors>   TRUE                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            OutputColor                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULIB_MenuColors_C::SelectMenuColor(TEnumAsByte<ENUM_MenuColors> FALSE, TEnumAsByte<ENUM_MenuColors> TRUE, bool Condition, class UObject* __WorldContext, struct FLinearColor* OutputColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_MenuColors.LIB_MenuColors_C.SelectMenuColor");

	struct
	{
		TEnumAsByte<ENUM_MenuColors>   FALSE;
		TEnumAsByte<ENUM_MenuColors>   TRUE;
		bool                           Condition;
		class UObject*                 __WorldContext;
		struct FLinearColor            OutputColor;
	} params;

	params.FALSE = FALSE;
	params.TRUE = TRUE;
	params.Condition = Condition;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutputColor != nullptr)
		*OutputColor = params.OutputColor;
}


// Function LIB_MenuColors.LIB_MenuColors_C.MenuColorsAndOpacity
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<ENUM_MenuColors>   ColorSelector                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Opacity                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            OutputColor                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULIB_MenuColors_C::MenuColorsAndOpacity(TEnumAsByte<ENUM_MenuColors> ColorSelector, float Opacity, class UObject* __WorldContext, struct FLinearColor* OutputColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_MenuColors.LIB_MenuColors_C.MenuColorsAndOpacity");

	struct
	{
		TEnumAsByte<ENUM_MenuColors>   ColorSelector;
		float                          Opacity;
		class UObject*                 __WorldContext;
		struct FLinearColor            OutputColor;
	} params;

	params.ColorSelector = ColorSelector;
	params.Opacity = Opacity;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutputColor != nullptr)
		*OutputColor = params.OutputColor;
}


// Function LIB_MenuColors.LIB_MenuColors_C.MenuColors
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<ENUM_MenuColors>   ColorSelector                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            OutputColor                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULIB_MenuColors_C::MenuColors(TEnumAsByte<ENUM_MenuColors> ColorSelector, class UObject* __WorldContext, struct FLinearColor* OutputColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_MenuColors.LIB_MenuColors_C.MenuColors");

	struct
	{
		TEnumAsByte<ENUM_MenuColors>   ColorSelector;
		class UObject*                 __WorldContext;
		struct FLinearColor            OutputColor;
	} params;

	params.ColorSelector = ColorSelector;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutputColor != nullptr)
		*OutputColor = params.OutputColor;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
