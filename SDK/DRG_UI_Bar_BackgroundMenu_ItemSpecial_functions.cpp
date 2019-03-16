// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_Bar_BackgroundMenu_ItemSpecial_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Bar_BackgroundMenu_ItemSpecial.UI_Bar_BackgroundMenu_ItemSpecial_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Bar_BackgroundMenu_ItemSpecial_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_BackgroundMenu_ItemSpecial.UI_Bar_BackgroundMenu_ItemSpecial_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_BackgroundMenu_ItemSpecial.UI_Bar_BackgroundMenu_ItemSpecial_C.SetDrinkable
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDrinkableDataAsset*     InDrinkable                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Bar_BackgroundMenu_ItemSpecial_C::SetDrinkable(class UDrinkableDataAsset* InDrinkable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_BackgroundMenu_ItemSpecial.UI_Bar_BackgroundMenu_ItemSpecial_C.SetDrinkable");

	struct
	{
		class UDrinkableDataAsset*     InDrinkable;
	} params;

	params.InDrinkable = InDrinkable;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_BackgroundMenu_ItemSpecial.UI_Bar_BackgroundMenu_ItemSpecial_C.ExecuteUbergraph_UI_Bar_BackgroundMenu_ItemSpecial
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Bar_BackgroundMenu_ItemSpecial_C::ExecuteUbergraph_UI_Bar_BackgroundMenu_ItemSpecial(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_BackgroundMenu_ItemSpecial.UI_Bar_BackgroundMenu_ItemSpecial_C.ExecuteUbergraph_UI_Bar_BackgroundMenu_ItemSpecial");

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
