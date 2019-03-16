// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_Salvage_Point_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Salvage_Point.BP_Salvage_Point_C.SetSalvagePointState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Salvage_Point_C::SetSalvagePointState(unsigned char State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point.BP_Salvage_Point_C.SetSalvagePointState");

	struct
	{
		unsigned char                  State;
	} params;

	params.State = State;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Salvage_Point.BP_Salvage_Point_C.OnRep_State
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Salvage_Point_C::OnRep_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point.BP_Salvage_Point_C.OnRep_State");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Salvage_Point.BP_Salvage_Point_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Salvage_Point_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point.BP_Salvage_Point_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Salvage_Point.BP_Salvage_Point_C.OnDefenseComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Salvage_Point_C::OnDefenseComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point.BP_Salvage_Point_C.OnDefenseComplete");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Salvage_Point.BP_Salvage_Point_C.OnDefenseStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Salvage_Point_C::OnDefenseStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point.BP_Salvage_Point_C.OnDefenseStart");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Salvage_Point.BP_Salvage_Point_C.EnableRepair
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Salvage_Point_C::EnableRepair()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point.BP_Salvage_Point_C.EnableRepair");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Salvage_Point.BP_Salvage_Point_C.OnDefenseFail
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Salvage_Point_C::OnDefenseFail()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point.BP_Salvage_Point_C.OnDefenseFail");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Salvage_Point.BP_Salvage_Point_C.ExecuteUbergraph_BP_Salvage_Point
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Salvage_Point_C::ExecuteUbergraph_BP_Salvage_Point(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point.BP_Salvage_Point_C.ExecuteUbergraph_BP_Salvage_Point");

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
