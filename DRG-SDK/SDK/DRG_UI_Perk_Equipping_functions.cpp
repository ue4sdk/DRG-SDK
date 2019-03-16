// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_Perk_Equipping_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Perk_Equipping.UI_Perk_Equipping_C.Get_PerkStar_ToolTipWidget_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UWidget* UUI_Perk_Equipping_C::Get_PerkStar_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping.UI_Perk_Equipping_C.Get_PerkStar_ToolTipWidget_1");

	struct
	{
		class UWidget*                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_Perk_Equipping.UI_Perk_Equipping_C.GetEquippedPerkAt
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPerkAsset*              Perk                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perk_Equipping_C::GetEquippedPerkAt(int Index, class UPerkAsset** Perk)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping.UI_Perk_Equipping_C.GetEquippedPerkAt");

	struct
	{
		int                            Index;
		class UPerkAsset*              Perk;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);

	if (Perk != nullptr)
		*Perk = params.Perk;
}


// Function UI_Perk_Equipping.UI_Perk_Equipping_C.UpdateEquippedPerks
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_Perk_Equipping_C::UpdateEquippedPerks()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping.UI_Perk_Equipping_C.UpdateEquippedPerks");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perk_Equipping.UI_Perk_Equipping_C.Set Selected Item
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_Perk_Equipping_Item_C* Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_Perk_Equipping_C::Set_Selected_Item(class UUI_Perk_Equipping_Item_C* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping.UI_Perk_Equipping_C.Set Selected Item");

	struct
	{
		class UUI_Perk_Equipping_Item_C* Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perk_Equipping.UI_Perk_Equipping_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perk_Equipping_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping.UI_Perk_Equipping_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perk_Equipping.UI_Perk_Equipping_C.OnClicked_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_Perk_Equipping_Item_C* Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_Perk_Equipping_C::OnClicked_Event(class UUI_Perk_Equipping_Item_C* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping.UI_Perk_Equipping_C.OnClicked_Event");

	struct
	{
		class UUI_Perk_Equipping_Item_C* Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perk_Equipping.UI_Perk_Equipping_C.Refresh
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_Perk_Equipping_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping.UI_Perk_Equipping_C.Refresh");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perk_Equipping.UI_Perk_Equipping_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_Perk_Equipping_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping.UI_Perk_Equipping_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perk_Equipping.UI_Perk_Equipping_C.BndEvt__UI_Perk_Equipping_Selector_K2Node_ComponentBoundEvent_0_OnPerkClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UPerkAsset*              PerkAsset                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perk_Equipping_C::BndEvt__UI_Perk_Equipping_Selector_K2Node_ComponentBoundEvent_0_OnPerkClicked__DelegateSignature(class UPerkAsset* PerkAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping.UI_Perk_Equipping_C.BndEvt__UI_Perk_Equipping_Selector_K2Node_ComponentBoundEvent_0_OnPerkClicked__DelegateSignature");

	struct
	{
		class UPerkAsset*              PerkAsset;
	} params;

	params.PerkAsset = PerkAsset;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perk_Equipping.UI_Perk_Equipping_C.Set Character Class
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  CharacterClass                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perk_Equipping_C::Set_Character_Class(class UClass* CharacterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping.UI_Perk_Equipping_C.Set Character Class");

	struct
	{
		class UClass*                  CharacterClass;
	} params;

	params.CharacterClass = CharacterClass;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perk_Equipping.UI_Perk_Equipping_C.BndEvt__RetirementBonusSlot_K2Node_ComponentBoundEvent_58_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UUI_Perk_Equipping_Item_C* Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_Perk_Equipping_C::BndEvt__RetirementBonusSlot_K2Node_ComponentBoundEvent_58_OnClicked__DelegateSignature(class UUI_Perk_Equipping_Item_C* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping.UI_Perk_Equipping_C.BndEvt__RetirementBonusSlot_K2Node_ComponentBoundEvent_58_OnClicked__DelegateSignature");

	struct
	{
		class UUI_Perk_Equipping_Item_C* Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perk_Equipping.UI_Perk_Equipping_C.ExecuteUbergraph_UI_Perk_Equipping
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perk_Equipping_C::ExecuteUbergraph_UI_Perk_Equipping(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping.UI_Perk_Equipping_C.ExecuteUbergraph_UI_Perk_Equipping");

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
