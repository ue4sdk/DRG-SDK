// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_Perks_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Perks_Item.UI_Perks_Item_C.CreateToolTipWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UWidget* UUI_Perks_Item_C::CreateToolTipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Item.UI_Perks_Item_C.CreateToolTipWidget");

	struct
	{
		class UWidget*                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_Perks_Item.UI_Perks_Item_C.OnMouseButtonUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_Perks_Item_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Item.UI_Perks_Item_C.OnMouseButtonUp");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_Perks_Item.UI_Perks_Item_C.GetPerkAsset
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UPerkAsset*              PerkAsset                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EPerkTierState                 State                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Tier                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perks_Item_C::GetPerkAsset(class UPerkAsset** PerkAsset, EPerkTierState* State, int* Tier)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Item.UI_Perks_Item_C.GetPerkAsset");

	struct
	{
		class UPerkAsset*              PerkAsset;
		EPerkTierState                 State;
		int                            Tier;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (PerkAsset != nullptr)
		*PerkAsset = params.PerkAsset;
	if (State != nullptr)
		*State = params.State;
	if (Tier != nullptr)
		*Tier = params.Tier;
}


// Function UI_Perks_Item.UI_Perks_Item_C.OnPerkClaimed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPerkAsset*              Perk                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ClaimedTier                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perks_Item_C::OnPerkClaimed(class UPerkAsset* Perk, int ClaimedTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Item.UI_Perks_Item_C.OnPerkClaimed");

	struct
	{
		class UPerkAsset*              Perk;
		int                            ClaimedTier;
	} params;

	params.Perk = Perk;
	params.ClaimedTier = ClaimedTier;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perks_Item.UI_Perks_Item_C.Refresh
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_Perks_Item_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Item.UI_Perks_Item_C.Refresh");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perks_Item.UI_Perks_Item_C.Set Selected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perks_Item_C::Set_Selected(bool IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Item.UI_Perks_Item_C.Set Selected");

	struct
	{
		bool                           IsSelected;
	} params;

	params.IsSelected = IsSelected;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perks_Item.UI_Perks_Item_C.Update Selection Border
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_Perks_Item_C::Update_Selection_Border()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Item.UI_Perks_Item_C.Update Selection Border");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perks_Item.UI_Perks_Item_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUI_Perks_Item_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Item.UI_Perks_Item_C.OnMouseLeave");

	struct
	{
		struct FPointerEvent           MouseEvent;
	} params;

	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perks_Item.UI_Perks_Item_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUI_Perks_Item_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Item.UI_Perks_Item_C.OnMouseEnter");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perks_Item.UI_Perks_Item_C.OnPerkHighlighted_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPerkAsset*              Perk                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsHighlighted                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perks_Item_C::OnPerkHighlighted_Event(class UPerkAsset* Perk, bool IsHighlighted)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Item.UI_Perks_Item_C.OnPerkHighlighted_Event");

	struct
	{
		class UPerkAsset*              Perk;
		bool                           IsHighlighted;
	} params;

	params.Perk = Perk;
	params.IsHighlighted = IsHighlighted;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perks_Item.UI_Perks_Item_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perks_Item_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Item.UI_Perks_Item_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perks_Item.UI_Perks_Item_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_Perks_Item_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Item.UI_Perks_Item_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perks_Item.UI_Perks_Item_C.Set Hovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Hovered                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perks_Item_C::Set_Hovered(bool Hovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Item.UI_Perks_Item_C.Set Hovered");

	struct
	{
		bool                           Hovered;
	} params;

	params.Hovered = Hovered;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perks_Item.UI_Perks_Item_C.OnPerkPointsChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PerkPoints                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Change                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perks_Item_C::OnPerkPointsChanged(int PerkPoints, int Change)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Item.UI_Perks_Item_C.OnPerkPointsChanged");

	struct
	{
		int                            PerkPoints;
		int                            Change;
	} params;

	params.PerkPoints = PerkPoints;
	params.Change = Change;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perks_Item.UI_Perks_Item_C.BndEvt__Ping_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_Perks_Item_C::BndEvt__Ping_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Item.UI_Perks_Item_C.BndEvt__Ping_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perks_Item.UI_Perks_Item_C.ExecuteUbergraph_UI_Perks_Item
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perks_Item_C::ExecuteUbergraph_UI_Perks_Item(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Item.UI_Perks_Item_C.ExecuteUbergraph_UI_Perks_Item");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perks_Item.UI_Perks_Item_C.OnClick__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_Perks_Item_C*        Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_Perks_Item_C::OnClick__DelegateSignature(class UUI_Perks_Item_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Item.UI_Perks_Item_C.OnClick__DelegateSignature");

	struct
	{
		class UUI_Perks_Item_C*        Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perks_Item.UI_Perks_Item_C.OnHoverLeave__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_Perks_Item_C*        Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_Perks_Item_C::OnHoverLeave__DelegateSignature(class UUI_Perks_Item_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Item.UI_Perks_Item_C.OnHoverLeave__DelegateSignature");

	struct
	{
		class UUI_Perks_Item_C*        Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perks_Item.UI_Perks_Item_C.OnHoverEnter__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_Perks_Item_C*        Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_Perks_Item_C::OnHoverEnter__DelegateSignature(class UUI_Perks_Item_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Item.UI_Perks_Item_C.OnHoverEnter__DelegateSignature");

	struct
	{
		class UUI_Perks_Item_C*        Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
