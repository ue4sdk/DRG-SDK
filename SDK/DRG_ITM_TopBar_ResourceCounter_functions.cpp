// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_TopBar_ResourceCounter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.SetResourceData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UResourceData*           InResource                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InAmount                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InRequiredAmount               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_TopBar_ResourceCounter_C::SetResourceData(class UResourceData* InResource, float InAmount, float InRequiredAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.SetResourceData");

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


// Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_TopBar_ResourceCounter_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.UpdateAmount
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InAmount                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_TopBar_ResourceCounter_C::UpdateAmount(float InAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.UpdateAmount");

	struct
	{
		float                          InAmount;
	} params;

	params.InAmount = InAmount;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.OnResourceAmountChanged_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UResourceData*           Resource                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          currentAmount                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_TopBar_ResourceCounter_C::OnResourceAmountChanged_Event(class UResourceData* Resource, float currentAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.OnResourceAmountChanged_Event");

	struct
	{
		class UResourceData*           Resource;
		float                          currentAmount;
	} params;

	params.Resource = Resource;
	params.currentAmount = currentAmount;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.ExecuteUbergraph_ITM_TopBar_ResourceCounter
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_TopBar_ResourceCounter_C::ExecuteUbergraph_ITM_TopBar_ResourceCounter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.ExecuteUbergraph_ITM_TopBar_ResourceCounter");

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
