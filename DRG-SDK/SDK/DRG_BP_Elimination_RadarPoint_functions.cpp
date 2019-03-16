// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_Elimination_RadarPoint_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Elimination_RadarPoint.BP_Elimination_RadarPoint_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Elimination_RadarPoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Elimination_RadarPoint.BP_Elimination_RadarPoint_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Elimination_RadarPoint.BP_Elimination_RadarPoint_C.Receive_EncounterHasSpawned
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   spawnedPawn                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Elimination_RadarPoint_C::Receive_EncounterHasSpawned(class APawn* spawnedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Elimination_RadarPoint.BP_Elimination_RadarPoint_C.Receive_EncounterHasSpawned");

	struct
	{
		class APawn*                   spawnedPawn;
	} params;

	params.spawnedPawn = spawnedPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Elimination_RadarPoint.BP_Elimination_RadarPoint_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Elimination_RadarPoint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Elimination_RadarPoint.BP_Elimination_RadarPoint_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Elimination_RadarPoint.BP_Elimination_RadarPoint_C.ExecuteUbergraph_BP_Elimination_RadarPoint
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Elimination_RadarPoint_C::ExecuteUbergraph_BP_Elimination_RadarPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Elimination_RadarPoint.BP_Elimination_RadarPoint_C.ExecuteUbergraph_BP_Elimination_RadarPoint");

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
