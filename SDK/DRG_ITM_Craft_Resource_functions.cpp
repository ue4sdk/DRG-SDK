// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_Craft_Resource_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_Craft_Resource.ITM_Craft_Resource_C.OnResourceAmountChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UResourceData*           Resource                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          currentAmount                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Craft_Resource_C::OnResourceAmountChanged(class UResourceData* Resource, float currentAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_Resource.ITM_Craft_Resource_C.OnResourceAmountChanged");

	struct
	{
		class UResourceData*           Resource;
		float                          currentAmount;
	} params;

	params.Resource = Resource;
	params.currentAmount = currentAmount;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Craft_Resource.ITM_Craft_Resource_C.SetAmount
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Craft_Resource_C::SetAmount(float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_Resource.ITM_Craft_Resource_C.SetAmount");

	struct
	{
		float                          Amount;
	} params;

	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Craft_Resource.ITM_Craft_Resource_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UITM_Craft_Resource_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_Resource.ITM_Craft_Resource_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Craft_Resource.ITM_Craft_Resource_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Craft_Resource_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_Resource.ITM_Craft_Resource_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Craft_Resource.ITM_Craft_Resource_C.ExecuteUbergraph_ITM_Craft_Resource
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Craft_Resource_C::ExecuteUbergraph_ITM_Craft_Resource(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_Resource.ITM_Craft_Resource_C.ExecuteUbergraph_ITM_Craft_Resource");

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
