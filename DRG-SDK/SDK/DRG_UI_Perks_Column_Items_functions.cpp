// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_Perks_Column_Items_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.IsInteractable
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUI_Perks_Column_Items_C::IsInteractable()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.IsInteractable");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.RefreshTier
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_Perks_Column_Items_C::RefreshTier()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.RefreshTier");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.AddPerk
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPerkAsset*              Perk                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPerkAsset*              OutPerk                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UUI_Perks_Item_C*        OutWidget                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_Perks_Column_Items_C::AddPerk(class UPerkAsset* Perk, class UPerkAsset** OutPerk, class UUI_Perks_Item_C** OutWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.AddPerk");

	struct
	{
		class UPerkAsset*              Perk;
		class UPerkAsset*              OutPerk;
		class UUI_Perks_Item_C*        OutWidget;
	} params;

	params.Perk = Perk;

	UObject::ProcessEvent(fn, &params);

	if (OutPerk != nullptr)
		*OutPerk = params.OutPerk;
	if (OutWidget != nullptr)
		*OutWidget = params.OutWidget;
}


// Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perks_Column_Items_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_Perks_Column_Items_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.OnPerkClicked_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_Perks_Item_C*        Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_Perks_Column_Items_C::OnPerkClicked_Event(class UUI_Perks_Item_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.OnPerkClicked_Event");

	struct
	{
		class UUI_Perks_Item_C*        Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.OnPerkClaimed_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPerkAsset*              Perk                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ClaimedTier                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perks_Column_Items_C::OnPerkClaimed_Event(class UPerkAsset* Perk, int ClaimedTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.OnPerkClaimed_Event");

	struct
	{
		class UPerkAsset*              Perk;
		int                            ClaimedTier;
	} params;

	params.Perk = Perk;
	params.ClaimedTier = ClaimedTier;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.ExecuteUbergraph_UI_Perks_Column_Items
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perks_Column_Items_C::ExecuteUbergraph_UI_Perks_Column_Items(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.ExecuteUbergraph_UI_Perks_Column_Items");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.OnPerkClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_Perks_Item_C*        PerkWidget                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_Perks_Column_Items_C::OnPerkClicked__DelegateSignature(class UUI_Perks_Item_C* PerkWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.OnPerkClicked__DelegateSignature");

	struct
	{
		class UUI_Perks_Item_C*        PerkWidget;
	} params;

	params.PerkWidget = PerkWidget;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
