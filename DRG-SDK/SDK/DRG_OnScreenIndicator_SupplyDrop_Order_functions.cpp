// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_OnScreenIndicator_SupplyDrop_Order_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OnScreenIndicator_SupplyDrop_Order.OnScreenIndicator_SupplyDrop_Order_C.SetDetails
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            Cost                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UResourceData*           ResourceRequired               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOnScreenIndicator_SupplyDrop_Order_C::SetDetails(const struct FText& Name, int Cost, class UResourceData* ResourceRequired)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_SupplyDrop_Order.OnScreenIndicator_SupplyDrop_Order_C.SetDetails");

	struct
	{
		struct FText                   Name;
		int                            Cost;
		class UResourceData*           ResourceRequired;
	} params;

	params.Name = Name;
	params.Cost = Cost;
	params.ResourceRequired = ResourceRequired;

	UObject::ProcessEvent(fn, &params);
}


// Function OnScreenIndicator_SupplyDrop_Order.OnScreenIndicator_SupplyDrop_Order_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOnScreenIndicator_SupplyDrop_Order_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_SupplyDrop_Order.OnScreenIndicator_SupplyDrop_Order_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function OnScreenIndicator_SupplyDrop_Order.OnScreenIndicator_SupplyDrop_Order_C.ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOnScreenIndicator_SupplyDrop_Order_C::ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_SupplyDrop_Order.OnScreenIndicator_SupplyDrop_Order_C.ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order");

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
