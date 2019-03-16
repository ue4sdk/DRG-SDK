// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_Perk_Equipping_Selector_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Perk_Equipping_Selector.UI_Perk_Equipping_Selector_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perk_Equipping_Selector_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping_Selector.UI_Perk_Equipping_Selector_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perk_Equipping_Selector.UI_Perk_Equipping_Selector_C.Refresh
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPerkAsset*              SelectedPerk                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  CharacterClass                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perk_Equipping_Selector_C::Refresh(class UPerkAsset* SelectedPerk, class UClass* CharacterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping_Selector.UI_Perk_Equipping_Selector_C.Refresh");

	struct
	{
		class UPerkAsset*              SelectedPerk;
		class UClass*                  CharacterClass;
	} params;

	params.SelectedPerk = SelectedPerk;
	params.CharacterClass = CharacterClass;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perk_Equipping_Selector.UI_Perk_Equipping_Selector_C.Add Perk
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPerkAsset*              Perk                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perk_Equipping_Selector_C::Add_Perk(class UPerkAsset* Perk)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping_Selector.UI_Perk_Equipping_Selector_C.Add Perk");

	struct
	{
		class UPerkAsset*              Perk;
	} params;

	params.Perk = Perk;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perk_Equipping_Selector.UI_Perk_Equipping_Selector_C.OnClicked_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_Perk_Equipping_Item_C* Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_Perk_Equipping_Selector_C::OnClicked_Event(class UUI_Perk_Equipping_Item_C* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping_Selector.UI_Perk_Equipping_Selector_C.OnClicked_Event");

	struct
	{
		class UUI_Perk_Equipping_Item_C* Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perk_Equipping_Selector.UI_Perk_Equipping_Selector_C.Add None
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_Perk_Equipping_Selector_C::Add_None()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping_Selector.UI_Perk_Equipping_Selector_C.Add None");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perk_Equipping_Selector.UI_Perk_Equipping_Selector_C.OnNoneClicked_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_Perk_Equipping_Selector_C::OnNoneClicked_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping_Selector.UI_Perk_Equipping_Selector_C.OnNoneClicked_Event");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perk_Equipping_Selector.UI_Perk_Equipping_Selector_C.ExecuteUbergraph_UI_Perk_Equipping_Selector
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perk_Equipping_Selector_C::ExecuteUbergraph_UI_Perk_Equipping_Selector(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping_Selector.UI_Perk_Equipping_Selector_C.ExecuteUbergraph_UI_Perk_Equipping_Selector");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perk_Equipping_Selector.UI_Perk_Equipping_Selector_C.OnPerkClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPerkAsset*              PerkAsset                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perk_Equipping_Selector_C::OnPerkClicked__DelegateSignature(class UPerkAsset* PerkAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping_Selector.UI_Perk_Equipping_Selector_C.OnPerkClicked__DelegateSignature");

	struct
	{
		class UPerkAsset*              PerkAsset;
	} params;

	params.PerkAsset = PerkAsset;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
