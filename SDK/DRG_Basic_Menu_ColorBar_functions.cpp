// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Basic_Menu_ColorBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_Menu_ColorBar.Basic_Menu_ColorBar_C.SetThinkness
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_PixelWidths>  Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_Menu_ColorBar_C::SetThinkness(TEnumAsByte<ENUM_PixelWidths> Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_ColorBar.Basic_Menu_ColorBar_C.SetThinkness");

	struct
	{
		TEnumAsByte<ENUM_PixelWidths>  Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_Menu_ColorBar.Basic_Menu_ColorBar_C.SetColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_MenuColors>   Brush_Color                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_Menu_ColorBar_C::SetColor(TEnumAsByte<ENUM_MenuColors> Brush_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_ColorBar.Basic_Menu_ColorBar_C.SetColor");

	struct
	{
		TEnumAsByte<ENUM_MenuColors>   Brush_Color;
	} params;

	params.Brush_Color = Brush_Color;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_Menu_ColorBar.Basic_Menu_ColorBar_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_Menu_ColorBar_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_ColorBar.Basic_Menu_ColorBar_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_Menu_ColorBar.Basic_Menu_ColorBar_C.ExecuteUbergraph_Basic_Menu_ColorBar
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_Menu_ColorBar_C::ExecuteUbergraph_Basic_Menu_ColorBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_ColorBar.Basic_Menu_ColorBar_C.ExecuteUbergraph_Basic_Menu_ColorBar");

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
