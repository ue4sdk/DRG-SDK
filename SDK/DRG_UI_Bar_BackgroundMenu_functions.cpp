// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_Bar_BackgroundMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Bar_BackgroundMenu.UI_Bar_BackgroundMenu_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Bar_BackgroundMenu_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_BackgroundMenu.UI_Bar_BackgroundMenu_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_BackgroundMenu.UI_Bar_BackgroundMenu_C.Set Bartender
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_SpaceRig_Bartender_C* InBartender                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Bar_BackgroundMenu_C::Set_Bartender(class ABP_SpaceRig_Bartender_C* InBartender)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_BackgroundMenu.UI_Bar_BackgroundMenu_C.Set Bartender");

	struct
	{
		class ABP_SpaceRig_Bartender_C* InBartender;
	} params;

	params.InBartender = InBartender;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_BackgroundMenu.UI_Bar_BackgroundMenu_C.OnNewDrinkableSpecial
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDrinkableDataAsset*     Drinkable                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Bar_BackgroundMenu_C::OnNewDrinkableSpecial(class UDrinkableDataAsset* Drinkable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_BackgroundMenu.UI_Bar_BackgroundMenu_C.OnNewDrinkableSpecial");

	struct
	{
		class UDrinkableDataAsset*     Drinkable;
	} params;

	params.Drinkable = Drinkable;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_BackgroundMenu.UI_Bar_BackgroundMenu_C.ExecuteUbergraph_UI_Bar_BackgroundMenu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Bar_BackgroundMenu_C::ExecuteUbergraph_UI_Bar_BackgroundMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_BackgroundMenu.UI_Bar_BackgroundMenu_C.ExecuteUbergraph_UI_Bar_BackgroundMenu");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_BackgroundMenu.UI_Bar_BackgroundMenu_C.OnRoundSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASpaceRigBar*            Bar                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UDrinkableDataAsset*     RequestedDrink                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Bar_BackgroundMenu_C::OnRoundSelected__DelegateSignature(class ASpaceRigBar* Bar, class UDrinkableDataAsset* RequestedDrink)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_BackgroundMenu.UI_Bar_BackgroundMenu_C.OnRoundSelected__DelegateSignature");

	struct
	{
		class ASpaceRigBar*            Bar;
		class UDrinkableDataAsset*     RequestedDrink;
	} params;

	params.Bar = Bar;
	params.RequestedDrink = RequestedDrink;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
