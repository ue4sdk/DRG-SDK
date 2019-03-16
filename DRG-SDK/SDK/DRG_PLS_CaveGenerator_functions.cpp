// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_PLS_CaveGenerator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PLS_CaveGenerator.PLS_CaveGenerator_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APLS_CaveGenerator_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_CaveGenerator.PLS_CaveGenerator_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PLS_CaveGenerator.PLS_CaveGenerator_C.CreateCaveGraph
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APLS_CaveGenerator_C::CreateCaveGraph()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_CaveGenerator.PLS_CaveGenerator_C.CreateCaveGraph");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PLS_CaveGenerator.PLS_CaveGenerator_C.SpawnDropPod
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APLS_CaveGenerator_C::SpawnDropPod()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_CaveGenerator.PLS_CaveGenerator_C.SpawnDropPod");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PLS_CaveGenerator.PLS_CaveGenerator_C.ExecuteUbergraph_PLS_CaveGenerator
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APLS_CaveGenerator_C::ExecuteUbergraph_PLS_CaveGenerator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_CaveGenerator.PLS_CaveGenerator_C.ExecuteUbergraph_PLS_CaveGenerator");

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
