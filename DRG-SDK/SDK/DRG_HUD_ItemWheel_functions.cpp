// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_ItemWheel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_ItemWheel.HUD_ItemWheel_C.SwapUpperItems
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Unselected                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UWidget*                 Selected                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UHUD_ItemWheel_C::SwapUpperItems(class UWidget* Unselected, class UWidget* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.SwapUpperItems");

	struct
	{
		class UWidget*                 Unselected;
		class UWidget*                 Selected;
	} params;

	params.Unselected = Unselected;
	params.Selected = Selected;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ItemWheel.HUD_ItemWheel_C.OnItemAdded
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UItemsBarIcon*           ItemIcon                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UHUD_ItemWheel_C::OnItemAdded(class UItemsBarIcon* ItemIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.OnItemAdded");

	struct
	{
		class UItemsBarIcon*           ItemIcon;
	} params;

	params.ItemIcon = ItemIcon;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ItemWheel.HUD_ItemWheel_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_ItemWheel_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ItemWheel.HUD_ItemWheel_C.OnItemEquipped
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UItemsBarIcon*           ItemIcon                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UHUD_ItemWheel_C::OnItemEquipped(class UItemsBarIcon* ItemIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.OnItemEquipped");

	struct
	{
		class UItemsBarIcon*           ItemIcon;
	} params;

	params.ItemIcon = ItemIcon;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ItemWheel.HUD_ItemWheel_C.AddIcon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UItemsBarIcon*           Icon                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_ItemWheel_C::AddIcon(class UItemsBarIcon* Icon, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.AddIcon");

	struct
	{
		class UItemsBarIcon*           Icon;
		int                            Index;
	} params;

	params.Icon = Icon;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ItemWheel.HUD_ItemWheel_C.OnClear
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UHUD_ItemWheel_C::OnClear()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.OnClear");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ItemWheel.HUD_ItemWheel_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_ItemWheel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ItemWheel.HUD_ItemWheel_C.BndEvt__FadeInOut_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UHUD_ItemWheel_C::BndEvt__FadeInOut_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.BndEvt__FadeInOut_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ItemWheel.HUD_ItemWheel_C.BndEvt__FadeInOut_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UHUD_ItemWheel_C::BndEvt__FadeInOut_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.BndEvt__FadeInOut_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ItemWheel.HUD_ItemWheel_C.OnInputSourceChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EInputSource                   InputSource                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_ItemWheel_C::OnInputSourceChanged(EInputSource InputSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.OnInputSourceChanged");

	struct
	{
		EInputSource                   InputSource;
	} params;

	params.InputSource = InputSource;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ItemWheel.HUD_ItemWheel_C.Show
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_ItemWheel_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.Show");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ItemWheel.HUD_ItemWheel_C.OnItemClicked
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UHUD_ItemWheel_C::OnItemClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.OnItemClicked");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ItemWheel.HUD_ItemWheel_C.OnSupplyItemAdded
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UItemsBarIcon*           ItemIcon                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UHUD_ItemWheel_C::OnSupplyItemAdded(class UItemsBarIcon* ItemIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.OnSupplyItemAdded");

	struct
	{
		class UItemsBarIcon*           ItemIcon;
	} params;

	params.ItemIcon = ItemIcon;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ItemWheel.HUD_ItemWheel_C.OnSupplyItemUnequipped
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UItemsBarIcon*           ItemIcon                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UHUD_ItemWheel_C::OnSupplyItemUnequipped(class UItemsBarIcon* ItemIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.OnSupplyItemUnequipped");

	struct
	{
		class UItemsBarIcon*           ItemIcon;
	} params;

	params.ItemIcon = ItemIcon;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ItemWheel.HUD_ItemWheel_C.OnSupplyItemEquipped
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UItemsBarIcon*           ItemIcon                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UHUD_ItemWheel_C::OnSupplyItemEquipped(class UItemsBarIcon* ItemIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.OnSupplyItemEquipped");

	struct
	{
		class UItemsBarIcon*           ItemIcon;
	} params;

	params.ItemIcon = ItemIcon;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ItemWheel.HUD_ItemWheel_C.ExecuteUbergraph_HUD_ItemWheel
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_ItemWheel_C::ExecuteUbergraph_HUD_ItemWheel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ItemWheel.HUD_ItemWheel_C.ExecuteUbergraph_HUD_ItemWheel");

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
