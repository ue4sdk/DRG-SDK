// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_HorizontalResourceBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.SetCraftingCost
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FCraftingCost>   Cost                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// bool                           OutCanAfford                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_HorizontalResourceBar_C::SetCraftingCost(TArray<struct FCraftingCost>* Cost, bool* OutCanAfford)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.SetCraftingCost");

	struct
	{
		TArray<struct FCraftingCost>   Cost;
		bool                           OutCanAfford;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Cost != nullptr)
		*Cost = params.Cost;
	if (OutCanAfford != nullptr)
		*OutCanAfford = params.OutCanAfford;
}


// Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.AddResource
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UResourceData*           InResource                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InAmount                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InRequiredAmount               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_HorizontalResourceBar_C::AddResource(class UResourceData* InResource, float InAmount, float InRequiredAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.AddResource");

	struct
	{
		class UResourceData*           InResource;
		float                          InAmount;
		float                          InRequiredAmount;
	} params;

	params.InResource = InResource;
	params.InAmount = InAmount;
	params.InRequiredAmount = InRequiredAmount;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.Clear
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_HorizontalResourceBar_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.Clear");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.AddResourceCustom
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UResourceData*           InResource                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InAmount                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InRequiredAmount               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IconOnRight                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ShowRequiredAmount             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_HorizontalResourceBar_C::AddResourceCustom(class UResourceData* InResource, float InAmount, float InRequiredAmount, bool IconOnRight, bool ShowRequiredAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.AddResourceCustom");

	struct
	{
		class UResourceData*           InResource;
		float                          InAmount;
		float                          InRequiredAmount;
		bool                           IconOnRight;
		bool                           ShowRequiredAmount;
	} params;

	params.InResource = InResource;
	params.InAmount = InAmount;
	params.InRequiredAmount = InRequiredAmount;
	params.IconOnRight = IconOnRight;
	params.ShowRequiredAmount = ShowRequiredAmount;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_HorizontalResourceBar_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.ExecuteUbergraph_UI_HorizontalResourceBar
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_HorizontalResourceBar_C::ExecuteUbergraph_UI_HorizontalResourceBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.ExecuteUbergraph_UI_HorizontalResourceBar");

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
