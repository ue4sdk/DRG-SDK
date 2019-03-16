// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_Salvage_FuelPoint_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Salvage_FuelPoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.EnableRepair
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Salvage_FuelPoint_C::EnableRepair()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.EnableRepair");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.OnDefenseStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Salvage_FuelPoint_C::OnDefenseStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.OnDefenseStart");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.OnDefenseComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Salvage_FuelPoint_C::OnDefenseComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.OnDefenseComplete");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.OnDefenseFail
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Salvage_FuelPoint_C::OnDefenseFail()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.OnDefenseFail");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.ExecuteUbergraph_BP_Salvage_FuelPoint
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Salvage_FuelPoint_C::ExecuteUbergraph_BP_Salvage_FuelPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.ExecuteUbergraph_BP_Salvage_FuelPoint");

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
