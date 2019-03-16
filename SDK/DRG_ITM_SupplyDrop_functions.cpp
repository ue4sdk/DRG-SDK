// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_SupplyDrop_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_SupplyDrop.ITM_SupplyDrop_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AITM_SupplyDrop_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SupplyDrop.ITM_SupplyDrop_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_SupplyDrop.ITM_SupplyDrop_C.RecieveCycledItem
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AITM_SupplyDrop_C::RecieveCycledItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SupplyDrop.ITM_SupplyDrop_C.RecieveCycledItem");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_SupplyDrop.ITM_SupplyDrop_C.RecieveEquipped
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AITM_SupplyDrop_C::RecieveEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SupplyDrop.ITM_SupplyDrop_C.RecieveEquipped");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_SupplyDrop.ITM_SupplyDrop_C.ExecuteUbergraph_ITM_SupplyDrop
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AITM_SupplyDrop_C::ExecuteUbergraph_ITM_SupplyDrop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SupplyDrop.ITM_SupplyDrop_C.ExecuteUbergraph_ITM_SupplyDrop");

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
