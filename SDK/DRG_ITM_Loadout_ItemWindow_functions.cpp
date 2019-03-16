// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_Loadout_ItemWindow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.GetNextItem
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Direction                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  NextItem                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Loadout_ItemWindow_C::GetNextItem(int Direction, class UClass** NextItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.GetNextItem");

	struct
	{
		int                            Direction;
		class UClass*                  NextItem;
	} params;

	params.Direction = Direction;

	UObject::ProcessEvent(fn, &params);

	if (NextItem != nullptr)
		*NextItem = params.NextItem;
}


// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.GetOwnedItems
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UClass*                  InCharacterClass               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EItemCategory                  InCategory                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class UClass*>          Owned_Items                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// bool                           HaveUnlockableItems            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Loadout_ItemWindow_C::GetOwnedItems(class UClass* InCharacterClass, EItemCategory InCategory, TArray<class UClass*>* Owned_Items, bool* HaveUnlockableItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.GetOwnedItems");

	struct
	{
		class UClass*                  InCharacterClass;
		EItemCategory                  InCategory;
		TArray<class UClass*>          Owned_Items;
		bool                           HaveUnlockableItems;
	} params;

	params.InCharacterClass = InCharacterClass;
	params.InCategory = InCategory;

	UObject::ProcessEvent(fn, &params);

	if (Owned_Items != nullptr)
		*Owned_Items = params.Owned_Items;
	if (HaveUnlockableItems != nullptr)
		*HaveUnlockableItems = params.HaveUnlockableItems;
}


// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.GetSelectedItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UClass*                  itemClass                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EItemCategory                  Item_Category                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Loadout_ItemWindow_C::GetSelectedItem(class UClass** itemClass, EItemCategory* Item_Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.GetSelectedItem");

	struct
	{
		class UClass*                  itemClass;
		EItemCategory                  Item_Category;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (itemClass != nullptr)
		*itemClass = params.itemClass;
	if (Item_Category != nullptr)
		*Item_Category = params.Item_Category;
}


// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SetCharacterClass
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  InCharacterClass               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Loadout_ItemWindow_C::SetCharacterClass(class UClass* InCharacterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SetCharacterClass");

	struct
	{
		class UClass*                  InCharacterClass;
	} params;

	params.InCharacterClass = InCharacterClass;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SetHovered
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InHovered                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Loadout_ItemWindow_C::SetHovered(bool InHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SetHovered");

	struct
	{
		bool                           InHovered;
	} params;

	params.InHovered = InHovered;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.IsHovering
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UITM_Loadout_ItemWindow_C::IsHovering()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.IsHovering");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_Loadout_ItemWindow_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UITM_Loadout_ItemWindow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_Loadout_ItemWindow_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_Loadout_ItemWindow_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Loadout_ItemWindow_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SelectNext
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_Loadout_ItemWindow_C::SelectNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SelectNext");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SelectPrevious
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_Loadout_ItemWindow_C::SelectPrevious()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SelectPrevious");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.Select Item
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  InItemClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Loadout_ItemWindow_C::Select_Item(class UClass* InItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.Select Item");

	struct
	{
		class UClass*                  InItemClass;
	} params;

	params.InItemClass = InItemClass;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__ClickAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_Loadout_ItemWindow_C::BndEvt__ClickAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__ClickAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_511_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_Loadout_ItemWindow_C::BndEvt__ButtonRight_K2Node_ComponentBoundEvent_511_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_511_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_528_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_Loadout_ItemWindow_C::BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_528_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_528_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.ExecuteUbergraph_ITM_Loadout_ItemWindow
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Loadout_ItemWindow_C::ExecuteUbergraph_ITM_Loadout_ItemWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.ExecuteUbergraph_ITM_Loadout_ItemWindow");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.On Unhovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_Loadout_ItemWindow_C* Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_Loadout_ItemWindow_C::On_Unhovered__DelegateSignature(class UITM_Loadout_ItemWindow_C* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.On Unhovered__DelegateSignature");

	struct
	{
		class UITM_Loadout_ItemWindow_C* Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.On Hovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_Loadout_ItemWindow_C* Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_Loadout_ItemWindow_C::On_Hovered__DelegateSignature(class UITM_Loadout_ItemWindow_C* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.On Hovered__DelegateSignature");

	struct
	{
		class UITM_Loadout_ItemWindow_C* Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.On Clicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_Loadout_ItemWindow_C* Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_Loadout_ItemWindow_C::On_Clicked__DelegateSignature(class UITM_Loadout_ItemWindow_C* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.On Clicked__DelegateSignature");

	struct
	{
		class UITM_Loadout_ItemWindow_C* Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
