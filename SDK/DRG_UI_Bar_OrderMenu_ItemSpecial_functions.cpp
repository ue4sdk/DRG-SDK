// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_Bar_OrderMenu_ItemSpecial_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.GetTemporaryBuf
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UTemporaryBuff*          buff                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Bar_OrderMenu_ItemSpecial_C::GetTemporaryBuf(class UTemporaryBuff** buff)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.GetTemporaryBuf");

	struct
	{
		class UTemporaryBuff*          buff;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (buff != nullptr)
		*buff = params.buff;
}


// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.UpdateItemStatus
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_Bar_OrderMenu_ItemSpecial_C::UpdateItemStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.UpdateItemStatus");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.GetBorderColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            OutputColor                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Bar_OrderMenu_ItemSpecial_C::GetBorderColor(struct FLinearColor* OutputColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.GetBorderColor");

	struct
	{
		struct FLinearColor            OutputColor;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutputColor != nullptr)
		*OutputColor = params.OutputColor;
}


// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.IsInteractable
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUI_Bar_OrderMenu_ItemSpecial_C::IsInteractable()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.IsInteractable");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Bar_OrderMenu_ItemSpecial_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_Bar_OrderMenu_ItemSpecial_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.OnCreditsChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Credits                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Bar_OrderMenu_ItemSpecial_C::OnCreditsChanged(int Credits)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.OnCreditsChanged");

	struct
	{
		int                            Credits;
	} params;

	params.Credits = Credits;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_Bar_OrderMenu_ItemSpecial_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_Bar_OrderMenu_ItemSpecial_C::BndEvt__BuyButton_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_Bar_OrderMenu_ItemSpecial_C::BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.OnPlayerProgressChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Rank                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Stars                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Bar_OrderMenu_ItemSpecial_C::OnPlayerProgressChanged(int Rank, int Stars)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.OnPlayerProgressChanged");

	struct
	{
		int                            Rank;
		int                            Stars;
	} params;

	params.Rank = Rank;
	params.Stars = Stars;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.BndEvt__Hover_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_Bar_OrderMenu_ItemSpecial_C::BndEvt__Hover_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.BndEvt__Hover_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.SetDrinkable
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDrinkableDataAsset*     Drink                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Bar_OrderMenu_ItemSpecial_C::SetDrinkable(class UDrinkableDataAsset* Drink)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.SetDrinkable");

	struct
	{
		class UDrinkableDataAsset*     Drink;
	} params;

	params.Drink = Drink;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.Select
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_Bar_OrderMenu_ItemSpecial_C::Select()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.Select");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.Unselect
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_Bar_OrderMenu_ItemSpecial_C::Unselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.Unselect");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.ExecuteUbergraph_UI_Bar_OrderMenu_ItemSpecial
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Bar_OrderMenu_ItemSpecial_C::ExecuteUbergraph_UI_Bar_OrderMenu_ItemSpecial(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.ExecuteUbergraph_UI_Bar_OrderMenu_ItemSpecial");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.OnSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USpaceRigBarMenuItem*    Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_Bar_OrderMenu_ItemSpecial_C::OnSelected__DelegateSignature(class USpaceRigBarMenuItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.OnSelected__DelegateSignature");

	struct
	{
		class USpaceRigBarMenuItem*    Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.OnPurchaseDenied__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_Bar_OrderMenu_ItemSpecial_C::OnPurchaseDenied__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.OnPurchaseDenied__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.OnUnhover__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USpaceRigBarMenuItem*    OrderItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_Bar_OrderMenu_ItemSpecial_C::OnUnhover__DelegateSignature(class USpaceRigBarMenuItem* OrderItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.OnUnhover__DelegateSignature");

	struct
	{
		class USpaceRigBarMenuItem*    OrderItem;
	} params;

	params.OrderItem = OrderItem;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.OnHover__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USpaceRigBarMenuItem*    OrderItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_Bar_OrderMenu_ItemSpecial_C::OnHover__DelegateSignature(class USpaceRigBarMenuItem* OrderItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.OnHover__DelegateSignature");

	struct
	{
		class USpaceRigBarMenuItem*    OrderItem;
	} params;

	params.OrderItem = OrderItem;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.OnDrinksPurchased__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDrinkableDataAsset*     Drink                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Bar_OrderMenu_ItemSpecial_C::OnDrinksPurchased__DelegateSignature(class UDrinkableDataAsset* Drink)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.OnDrinksPurchased__DelegateSignature");

	struct
	{
		class UDrinkableDataAsset*     Drink;
	} params;

	params.Drink = Drink;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
