// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_Bar_AbyssBarSignenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Bar_AbyssBarSignenu.UI_Bar_AbyssBarSignenu_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Bar_AbyssBarSignenu_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_AbyssBarSignenu.UI_Bar_AbyssBarSignenu_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_AbyssBarSignenu.UI_Bar_AbyssBarSignenu_C.ExecuteUbergraph_UI_Bar_AbyssBarSignenu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Bar_AbyssBarSignenu_C::ExecuteUbergraph_UI_Bar_AbyssBarSignenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_AbyssBarSignenu.UI_Bar_AbyssBarSignenu_C.ExecuteUbergraph_UI_Bar_AbyssBarSignenu");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_AbyssBarSignenu.UI_Bar_AbyssBarSignenu_C.OnRoundSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASpaceRigBar*            Bar                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UDrinkableDataAsset*     RequestedDrink                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Bar_AbyssBarSignenu_C::OnRoundSelected__DelegateSignature(class ASpaceRigBar* Bar, class UDrinkableDataAsset* RequestedDrink)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_AbyssBarSignenu.UI_Bar_AbyssBarSignenu_C.OnRoundSelected__DelegateSignature");

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
