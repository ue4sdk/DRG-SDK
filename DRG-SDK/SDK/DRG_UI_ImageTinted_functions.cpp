// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_ImageTinted_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_ImageTinted.UI_ImageTinted_C.SetBrushFromTexture
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           MatchSize                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_ImageTinted_C::SetBrushFromTexture(class UTexture2D* Texture, bool MatchSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ImageTinted.UI_ImageTinted_C.SetBrushFromTexture");

	struct
	{
		class UTexture2D*              Texture;
		bool                           MatchSize;
	} params;

	params.Texture = Texture;
	params.MatchSize = MatchSize;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_ImageTinted.UI_ImageTinted_C.SetTint
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_MenuColors>   InTint                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InOpacity                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_ImageTinted_C::SetTint(TEnumAsByte<ENUM_MenuColors> InTint, float InOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ImageTinted.UI_ImageTinted_C.SetTint");

	struct
	{
		TEnumAsByte<ENUM_MenuColors>   InTint;
		float                          InOpacity;
	} params;

	params.InTint = InTint;
	params.InOpacity = InOpacity;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_ImageTinted.UI_ImageTinted_C.SetBrush
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateBrush             InBrush                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUI_ImageTinted_C::SetBrush(const struct FSlateBrush& InBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ImageTinted.UI_ImageTinted_C.SetBrush");

	struct
	{
		struct FSlateBrush             InBrush;
	} params;

	params.InBrush = InBrush;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_ImageTinted.UI_ImageTinted_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_ImageTinted_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ImageTinted.UI_ImageTinted_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_ImageTinted.UI_ImageTinted_C.ExecuteUbergraph_UI_ImageTinted
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_ImageTinted_C::ExecuteUbergraph_UI_ImageTinted(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ImageTinted.UI_ImageTinted_C.ExecuteUbergraph_UI_ImageTinted");

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
