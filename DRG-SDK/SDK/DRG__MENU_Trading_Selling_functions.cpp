// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG__MENU_Trading_Selling_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function _MENU_Trading_Selling._MENU_Trading_Selling_C.SellSelectedItems
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Minerals_Sold                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_MENU_Trading_Selling_C::SellSelectedItems(bool* Minerals_Sold)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading_Selling._MENU_Trading_Selling_C.SellSelectedItems");

	struct
	{
		bool                           Minerals_Sold;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Minerals_Sold != nullptr)
		*Minerals_Sold = params.Minerals_Sold;
}


// Function _MENU_Trading_Selling._MENU_Trading_Selling_C.UpdateValue
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            CurrentValue                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_MENU_Trading_Selling_C::UpdateValue(int* CurrentValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading_Selling._MENU_Trading_Selling_C.UpdateValue");

	struct
	{
		int                            CurrentValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (CurrentValue != nullptr)
		*CurrentValue = params.CurrentValue;
}


// Function _MENU_Trading_Selling._MENU_Trading_Selling_C.SetResources
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UResourceData*>   resources                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<class UTrading_Selling_Item_C*> Items                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void U_MENU_Trading_Selling_C::SetResources(TArray<class UResourceData*>* resources, TArray<class UTrading_Selling_Item_C*>* Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading_Selling._MENU_Trading_Selling_C.SetResources");

	struct
	{
		TArray<class UResourceData*>   resources;
		TArray<class UTrading_Selling_Item_C*> Items;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (resources != nullptr)
		*resources = params.resources;
	if (Items != nullptr)
		*Items = params.Items;
}


// Function _MENU_Trading_Selling._MENU_Trading_Selling_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_MENU_Trading_Selling_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading_Selling._MENU_Trading_Selling_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_Trading_Selling._MENU_Trading_Selling_C.OnAmountChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTrading_Selling_Item_C* Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_MENU_Trading_Selling_C::OnAmountChanged(class UTrading_Selling_Item_C* Item, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading_Selling._MENU_Trading_Selling_C.OnAmountChanged");

	struct
	{
		class UTrading_Selling_Item_C* Item;
		int                            Amount;
	} params;

	params.Item = Item;
	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_Trading_Selling._MENU_Trading_Selling_C.BndEvt__ClearButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void U_MENU_Trading_Selling_C::BndEvt__ClearButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading_Selling._MENU_Trading_Selling_C.BndEvt__ClearButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_Trading_Selling._MENU_Trading_Selling_C.BndEvt__SellButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void U_MENU_Trading_Selling_C::BndEvt__SellButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading_Selling._MENU_Trading_Selling_C.BndEvt__SellButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_Trading_Selling._MENU_Trading_Selling_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void U_MENU_Trading_Selling_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading_Selling._MENU_Trading_Selling_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_Trading_Selling._MENU_Trading_Selling_C.ExecuteUbergraph__MENU_Trading_Selling
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_MENU_Trading_Selling_C::ExecuteUbergraph__MENU_Trading_Selling(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading_Selling._MENU_Trading_Selling_C.ExecuteUbergraph__MENU_Trading_Selling");

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
