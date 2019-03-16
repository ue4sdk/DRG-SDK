// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG__MENU_Trading_Buying_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function _MENU_Trading_Buying._MENU_Trading_Buying_C.GetCurrentCost
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            CurrentCost                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_MENU_Trading_Buying_C::GetCurrentCost(int* CurrentCost)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading_Buying._MENU_Trading_Buying_C.GetCurrentCost");

	struct
	{
		int                            CurrentCost;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (CurrentCost != nullptr)
		*CurrentCost = params.CurrentCost;
}


// Function _MENU_Trading_Buying._MENU_Trading_Buying_C.BuySelected
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           MineralsBought                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_MENU_Trading_Buying_C::BuySelected(bool* MineralsBought)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading_Buying._MENU_Trading_Buying_C.BuySelected");

	struct
	{
		bool                           MineralsBought;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (MineralsBought != nullptr)
		*MineralsBought = params.MineralsBought;
}


// Function _MENU_Trading_Buying._MENU_Trading_Buying_C.UpdateCost
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            TotalCost                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_MENU_Trading_Buying_C::UpdateCost(int* TotalCost)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading_Buying._MENU_Trading_Buying_C.UpdateCost");

	struct
	{
		int                            TotalCost;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (TotalCost != nullptr)
		*TotalCost = params.TotalCost;
}


// Function _MENU_Trading_Buying._MENU_Trading_Buying_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_MENU_Trading_Buying_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading_Buying._MENU_Trading_Buying_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_Trading_Buying._MENU_Trading_Buying_C.BndEvt__ClearButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void U_MENU_Trading_Buying_C::BndEvt__ClearButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading_Buying._MENU_Trading_Buying_C.BndEvt__ClearButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_Trading_Buying._MENU_Trading_Buying_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void U_MENU_Trading_Buying_C::BndEvt__BuyButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading_Buying._MENU_Trading_Buying_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_Trading_Buying._MENU_Trading_Buying_C.Clear
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void U_MENU_Trading_Buying_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading_Buying._MENU_Trading_Buying_C.Clear");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_Trading_Buying._MENU_Trading_Buying_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void U_MENU_Trading_Buying_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading_Buying._MENU_Trading_Buying_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_Trading_Buying._MENU_Trading_Buying_C.OnCreditsChanged_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Credits                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_MENU_Trading_Buying_C::OnCreditsChanged_Event(int Credits)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading_Buying._MENU_Trading_Buying_C.OnCreditsChanged_Event");

	struct
	{
		int                            Credits;
	} params;

	params.Credits = Credits;

	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_Trading_Buying._MENU_Trading_Buying_C.OnAmountChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTrading_Buying_Item_C*  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_MENU_Trading_Buying_C::OnAmountChanged(class UTrading_Buying_Item_C* Item, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading_Buying._MENU_Trading_Buying_C.OnAmountChanged");

	struct
	{
		class UTrading_Buying_Item_C*  Item;
		int                            Amount;
	} params;

	params.Item = Item;
	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_Trading_Buying._MENU_Trading_Buying_C.ExecuteUbergraph__MENU_Trading_Buying
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_MENU_Trading_Buying_C::ExecuteUbergraph__MENU_Trading_Buying(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading_Buying._MENU_Trading_Buying_C.ExecuteUbergraph__MENU_Trading_Buying");

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
