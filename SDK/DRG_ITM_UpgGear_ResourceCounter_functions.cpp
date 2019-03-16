// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_UpgGear_ResourceCounter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.SetCanAfford
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsAffordable                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_UpgGear_ResourceCounter_C::SetCanAfford(bool IsAffordable)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.SetCanAfford");

	struct
	{
		bool                           IsAffordable;
	} params;

	params.IsAffordable = IsAffordable;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.SetResourceData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UResourceData*           InResource                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InAmount                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InRequiredAmount               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           InShowRequiredAmount           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_UpgGear_ResourceCounter_C::SetResourceData(class UResourceData* InResource, float InAmount, float InRequiredAmount, bool InShowRequiredAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.SetResourceData");

	struct
	{
		class UResourceData*           InResource;
		float                          InAmount;
		float                          InRequiredAmount;
		bool                           InShowRequiredAmount;
	} params;

	params.InResource = InResource;
	params.InAmount = InAmount;
	params.InRequiredAmount = InRequiredAmount;
	params.InShowRequiredAmount = InShowRequiredAmount;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UITM_UpgGear_ResourceCounter_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_UpgGear_ResourceCounter_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.UpdateAmount
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InAmount                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_UpgGear_ResourceCounter_C::UpdateAmount(float InAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.UpdateAmount");

	struct
	{
		float                          InAmount;
	} params;

	params.InAmount = InAmount;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.ExecuteUbergraph_ITM_UpgGear_ResourceCounter
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_UpgGear_ResourceCounter_C::ExecuteUbergraph_ITM_UpgGear_ResourceCounter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.ExecuteUbergraph_ITM_UpgGear_ResourceCounter");

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
