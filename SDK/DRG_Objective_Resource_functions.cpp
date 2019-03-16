// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Objective_Resource_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Objective_Resource.Objective_Resource_C.InitObjective
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObjective*              Objective                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UObjective_Resource_C::InitObjective(class UObjective* Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function Objective_Resource.Objective_Resource_C.InitObjective");

	struct
	{
		class UObjective*              Objective;
	} params;

	params.Objective = Objective;

	UObject::ProcessEvent(fn, &params);
}


// Function Objective_Resource.Objective_Resource_C.OnObjectiveUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObjective*              Objective                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UObjective_Resource_C::OnObjectiveUpdated(class UObjective* Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function Objective_Resource.Objective_Resource_C.OnObjectiveUpdated");

	struct
	{
		class UObjective*              Objective;
	} params;

	params.Objective = Objective;

	UObject::ProcessEvent(fn, &params);
}


// Function Objective_Resource.Objective_Resource_C.ExecuteUbergraph_Objective_Resource
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObjective_Resource_C::ExecuteUbergraph_Objective_Resource(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Objective_Resource.Objective_Resource_C.ExecuteUbergraph_Objective_Resource");

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
