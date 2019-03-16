// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_Bar_OrderMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.SetMenu
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDrinkableDataAsset*     Special                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class UDrinkableDataAsset*> Drinks                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UUI_Bar_OrderMenu_C::SetMenu(class UDrinkableDataAsset* Special, TArray<class UDrinkableDataAsset*>* Drinks)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.SetMenu");

	struct
	{
		class UDrinkableDataAsset*     Special;
		TArray<class UDrinkableDataAsset*> Drinks;
	} params;

	params.Special = Special;

	UObject::ProcessEvent(fn, &params);

	if (Drinks != nullptr)
		*Drinks = params.Drinks;
}


// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_Bar_OrderMenu_C::BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Bar_OrderMenu_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnDrinkAdded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_Bar_OrderMenu_Item_C* DrinkWidget                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_Bar_OrderMenu_C::OnDrinkAdded(class UUI_Bar_OrderMenu_Item_C* DrinkWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnDrinkAdded");

	struct
	{
		class UUI_Bar_OrderMenu_Item_C* DrinkWidget;
	} params;

	params.DrinkWidget = DrinkWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnDrinksPurchased_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDrinkableDataAsset*     Drink                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Bar_OrderMenu_C::OnDrinksPurchased_Event(class UDrinkableDataAsset* Drink)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnDrinksPurchased_Event");

	struct
	{
		class UDrinkableDataAsset*     Drink;
	} params;

	params.Drink = Drink;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.Cancel Order
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_Bar_OrderMenu_C::Cancel_Order()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.Cancel Order");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_Bar_OrderMenu_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnHover_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USpaceRigBarMenuItem*    OrderItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_Bar_OrderMenu_C::OnHover_Event(class USpaceRigBarMenuItem* OrderItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnHover_Event");

	struct
	{
		class USpaceRigBarMenuItem*    OrderItem;
	} params;

	params.OrderItem = OrderItem;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__Preview_K2Node_ComponentBoundEvent_2_OnPreviewItemChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class USpaceRigBarMenuItem*    Previous_Item                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class USpaceRigBarMenuItem*    New_Item                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_Bar_OrderMenu_C::BndEvt__Preview_K2Node_ComponentBoundEvent_2_OnPreviewItemChanged__DelegateSignature(class USpaceRigBarMenuItem* Previous_Item, class USpaceRigBarMenuItem* New_Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__Preview_K2Node_ComponentBoundEvent_2_OnPreviewItemChanged__DelegateSignature");

	struct
	{
		class USpaceRigBarMenuItem*    Previous_Item;
		class USpaceRigBarMenuItem*    New_Item;
	} params;

	params.Previous_Item = Previous_Item;
	params.New_Item = New_Item;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnPurchaseDenied_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_Bar_OrderMenu_C::OnPurchaseDenied_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnPurchaseDenied_Event");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_43_OnHover__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class USpaceRigBarMenuItem*    OrderItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_Bar_OrderMenu_C::BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_43_OnHover__DelegateSignature(class USpaceRigBarMenuItem* OrderItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_43_OnHover__DelegateSignature");

	struct
	{
		class USpaceRigBarMenuItem*    OrderItem;
	} params;

	params.OrderItem = OrderItem;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_0_OnPurchaseDenied__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_Bar_OrderMenu_C::BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_0_OnPurchaseDenied__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_0_OnPurchaseDenied__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnClosed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_Bar_OrderMenu_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnClosed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_1_OnDrinksPurchased__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UDrinkableDataAsset*     Drink                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Bar_OrderMenu_C::BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_1_OnDrinksPurchased__DelegateSignature(class UDrinkableDataAsset* Drink)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_1_OnDrinksPurchased__DelegateSignature");

	struct
	{
		class UDrinkableDataAsset*     Drink;
	} params;

	params.Drink = Drink;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.SetBartender
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASpaceRigBar*            BarActor                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Bar_OrderMenu_C::SetBartender(class ASpaceRigBar* BarActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.SetBartender");

	struct
	{
		class ASpaceRigBar*            BarActor;
	} params;

	params.BarActor = BarActor;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnNewDrinkableSpecial
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDrinkableDataAsset*     Drinkable                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Bar_OrderMenu_C::OnNewDrinkableSpecial(class UDrinkableDataAsset* Drinkable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnNewDrinkableSpecial");

	struct
	{
		class UDrinkableDataAsset*     Drinkable;
	} params;

	params.Drinkable = Drinkable;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.ReceiveCloseCommand
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUI_Bar_OrderMenu_C::ReceiveCloseCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.ReceiveCloseCommand");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_11_OnClosedClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_Bar_OrderMenu_C::BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_11_OnClosedClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_11_OnClosedClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.ExecuteUbergraph_UI_Bar_OrderMenu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Bar_OrderMenu_C::ExecuteUbergraph_UI_Bar_OrderMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.ExecuteUbergraph_UI_Bar_OrderMenu");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnRoundSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASpaceRigBar*            Bar                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UDrinkableDataAsset*     RequestedDrink                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Bar_OrderMenu_C::OnRoundSelected__DelegateSignature(class ASpaceRigBar* Bar, class UDrinkableDataAsset* RequestedDrink)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnRoundSelected__DelegateSignature");

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
