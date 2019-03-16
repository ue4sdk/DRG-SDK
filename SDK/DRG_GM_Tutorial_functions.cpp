// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_GM_Tutorial_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GM_Tutorial.GM_Tutorial_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AGM_Tutorial_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Tutorial.GM_Tutorial_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GM_Tutorial.GM_Tutorial_C.SpawnBosco
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform              Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void AGM_Tutorial_C::SpawnBosco(const struct FTransform& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Tutorial.GM_Tutorial_C.SpawnBosco");

	struct
	{
		struct FTransform              Location;
	} params;

	params.Location = Location;

	UObject::ProcessEvent(fn, &params);
}


// Function GM_Tutorial.GM_Tutorial_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AGM_Tutorial_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Tutorial.GM_Tutorial_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GM_Tutorial.GM_Tutorial_C.ExecuteUbergraph_GM_Tutorial
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AGM_Tutorial_C::ExecuteUbergraph_GM_Tutorial(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Tutorial.GM_Tutorial_C.ExecuteUbergraph_GM_Tutorial");

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
