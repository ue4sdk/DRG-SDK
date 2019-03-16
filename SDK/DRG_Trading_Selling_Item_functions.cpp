// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Trading_Selling_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Trading_Selling_Item.Trading_Selling_Item_C.Sell
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Sold                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Price                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTrading_Selling_Item_C::Sell(bool* Sold, int* Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Selling_Item.Trading_Selling_Item_C.Sell");

	struct
	{
		bool                           Sold;
		int                            Price;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Sold != nullptr)
		*Sold = params.Sold;
	if (Price != nullptr)
		*Price = params.Price;
}


// Function Trading_Selling_Item.Trading_Selling_Item_C.GetValue
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Cost                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTrading_Selling_Item_C::GetValue(int* Cost)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Selling_Item.Trading_Selling_Item_C.GetValue");

	struct
	{
		int                            Cost;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Cost != nullptr)
		*Cost = params.Cost;
}


// Function Trading_Selling_Item.Trading_Selling_Item_C.GetAmount
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Value                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTrading_Selling_Item_C::GetAmount(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Selling_Item.Trading_Selling_Item_C.GetAmount");

	struct
	{
		int                            Value;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Value != nullptr)
		*Value = params.Value;
}


// Function Trading_Selling_Item.Trading_Selling_Item_C.SetAmount
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTrading_Selling_Item_C::SetAmount(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Selling_Item.Trading_Selling_Item_C.SetAmount");

	struct
	{
		int                            Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function Trading_Selling_Item.Trading_Selling_Item_C.OnMouseButtonUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UTrading_Selling_Item_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Selling_Item.Trading_Selling_Item_C.OnMouseButtonUp");

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


// Function Trading_Selling_Item.Trading_Selling_Item_C.GetResource
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UResourceData*           Resource                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTrading_Selling_Item_C::GetResource(class UResourceData** Resource)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Selling_Item.Trading_Selling_Item_C.GetResource");

	struct
	{
		class UResourceData*           Resource;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Resource != nullptr)
		*Resource = params.Resource;
}


// Function Trading_Selling_Item.Trading_Selling_Item_C.SetSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTrading_Selling_Item_C::SetSelected(bool IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Selling_Item.Trading_Selling_Item_C.SetSelected");

	struct
	{
		bool                           IsSelected;
	} params;

	params.IsSelected = IsSelected;

	UObject::ProcessEvent(fn, &params);
}


// Function Trading_Selling_Item.Trading_Selling_Item_C.SetHovered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsHovered                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTrading_Selling_Item_C::SetHovered(bool IsHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Selling_Item.Trading_Selling_Item_C.SetHovered");

	struct
	{
		bool                           IsHovered;
	} params;

	params.IsHovered = IsHovered;

	UObject::ProcessEvent(fn, &params);
}


// Function Trading_Selling_Item.Trading_Selling_Item_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTrading_Selling_Item_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Selling_Item.Trading_Selling_Item_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function Trading_Selling_Item.Trading_Selling_Item_C.SetResource
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UResourceData*           NewResource                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTrading_Selling_Item_C::SetResource(class UResourceData* NewResource)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Selling_Item.Trading_Selling_Item_C.SetResource");

	struct
	{
		class UResourceData*           NewResource;
	} params;

	params.NewResource = NewResource;

	UObject::ProcessEvent(fn, &params);
}


// Function Trading_Selling_Item.Trading_Selling_Item_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTrading_Selling_Item_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Selling_Item.Trading_Selling_Item_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Trading_Selling_Item.Trading_Selling_Item_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTrading_Selling_Item_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Selling_Item.Trading_Selling_Item_C.OnMouseEnter");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function Trading_Selling_Item.Trading_Selling_Item_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTrading_Selling_Item_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Selling_Item.Trading_Selling_Item_C.OnMouseLeave");

	struct
	{
		struct FPointerEvent           MouseEvent;
	} params;

	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function Trading_Selling_Item.Trading_Selling_Item_C.BndEvt__Trading_Counter_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTrading_Selling_Item_C::BndEvt__Trading_Counter_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Selling_Item.Trading_Selling_Item_C.BndEvt__Trading_Counter_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature");

	struct
	{
		int                            Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function Trading_Selling_Item.Trading_Selling_Item_C.OnResourceAmountChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UResourceData*           Resource                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          currentAmount                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTrading_Selling_Item_C::OnResourceAmountChanged(class UResourceData* Resource, float currentAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Selling_Item.Trading_Selling_Item_C.OnResourceAmountChanged");

	struct
	{
		class UResourceData*           Resource;
		float                          currentAmount;
	} params;

	params.Resource = Resource;
	params.currentAmount = currentAmount;

	UObject::ProcessEvent(fn, &params);
}


// Function Trading_Selling_Item.Trading_Selling_Item_C.ExecuteUbergraph_Trading_Selling_Item
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTrading_Selling_Item_C::ExecuteUbergraph_Trading_Selling_Item(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Selling_Item.Trading_Selling_Item_C.ExecuteUbergraph_Trading_Selling_Item");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function Trading_Selling_Item.Trading_Selling_Item_C.OnAmountChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTrading_Selling_Item_C* Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTrading_Selling_Item_C::OnAmountChanged__DelegateSignature(class UTrading_Selling_Item_C* Item, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Selling_Item.Trading_Selling_Item_C.OnAmountChanged__DelegateSignature");

	struct
	{
		class UTrading_Selling_Item_C* Item;
		int                            Amount;
	} params;

	params.Item = Item;
	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);
}


// Function Trading_Selling_Item.Trading_Selling_Item_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTrading_Selling_Item_C* Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UTrading_Selling_Item_C::OnClicked__DelegateSignature(class UTrading_Selling_Item_C* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Selling_Item.Trading_Selling_Item_C.OnClicked__DelegateSignature");

	struct
	{
		class UTrading_Selling_Item_C* Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function Trading_Selling_Item.Trading_Selling_Item_C.OnHoverEnd__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTrading_Selling_Item_C* Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UTrading_Selling_Item_C::OnHoverEnd__DelegateSignature(class UTrading_Selling_Item_C* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Selling_Item.Trading_Selling_Item_C.OnHoverEnd__DelegateSignature");

	struct
	{
		class UTrading_Selling_Item_C* Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function Trading_Selling_Item.Trading_Selling_Item_C.OnHoverBegin__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTrading_Selling_Item_C* Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UTrading_Selling_Item_C::OnHoverBegin__DelegateSignature(class UTrading_Selling_Item_C* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Selling_Item.Trading_Selling_Item_C.OnHoverBegin__DelegateSignature");

	struct
	{
		class UTrading_Selling_Item_C* Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
