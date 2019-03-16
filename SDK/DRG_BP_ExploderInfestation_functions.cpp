// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_ExploderInfestation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ExploderInfestation.BP_ExploderInfestation_C.StartLogic
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_ExploderInfestation_C::StartLogic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExploderInfestation.BP_ExploderInfestation_C.StartLogic");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_ExploderInfestation.BP_ExploderInfestation_C.StartTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ExploderInfestation_C::StartTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExploderInfestation.BP_ExploderInfestation_C.StartTimer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_ExploderInfestation.BP_ExploderInfestation_C.SpawnExploders
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_ExploderInfestation_C::SpawnExploders()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExploderInfestation.BP_ExploderInfestation_C.SpawnExploders");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_ExploderInfestation.BP_ExploderInfestation_C.ExecuteUbergraph_BP_ExploderInfestation
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_ExploderInfestation_C::ExecuteUbergraph_BP_ExploderInfestation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExploderInfestation.BP_ExploderInfestation_C.ExecuteUbergraph_BP_ExploderInfestation");

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
