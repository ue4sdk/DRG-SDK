// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_SalvageFuelCells_Beacon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SalvageFuelCells_Beacon.BP_SalvageFuelCells_Beacon_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SalvageFuelCells_Beacon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SalvageFuelCells_Beacon.BP_SalvageFuelCells_Beacon_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SalvageFuelCells_Beacon.BP_SalvageFuelCells_Beacon_C.Light Animation__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_SalvageFuelCells_Beacon_C::Light_Animation__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SalvageFuelCells_Beacon.BP_SalvageFuelCells_Beacon_C.Light Animation__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SalvageFuelCells_Beacon.BP_SalvageFuelCells_Beacon_C.Light Animation__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_SalvageFuelCells_Beacon_C::Light_Animation__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SalvageFuelCells_Beacon.BP_SalvageFuelCells_Beacon_C.Light Animation__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SalvageFuelCells_Beacon.BP_SalvageFuelCells_Beacon_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SalvageFuelCells_Beacon_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SalvageFuelCells_Beacon.BP_SalvageFuelCells_Beacon_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SalvageFuelCells_Beacon.BP_SalvageFuelCells_Beacon_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_SalvageFuelCells_Beacon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SalvageFuelCells_Beacon.BP_SalvageFuelCells_Beacon_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SalvageFuelCells_Beacon.BP_SalvageFuelCells_Beacon_C.ExecuteUbergraph_BP_SalvageFuelCells_Beacon
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SalvageFuelCells_Beacon_C::ExecuteUbergraph_BP_SalvageFuelCells_Beacon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SalvageFuelCells_Beacon.BP_SalvageFuelCells_Beacon_C.ExecuteUbergraph_BP_SalvageFuelCells_Beacon");

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
