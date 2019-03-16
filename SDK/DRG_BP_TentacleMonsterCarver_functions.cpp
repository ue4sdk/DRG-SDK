// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_TentacleMonsterCarver_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TentacleMonsterCarver.BP_TentacleMonsterCarver_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_TentacleMonsterCarver_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TentacleMonsterCarver.BP_TentacleMonsterCarver_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TentacleMonsterCarver.BP_TentacleMonsterCarver_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_TentacleMonsterCarver_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TentacleMonsterCarver.BP_TentacleMonsterCarver_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TentacleMonsterCarver.BP_TentacleMonsterCarver_C.ExecuteUbergraph_BP_TentacleMonsterCarver
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_TentacleMonsterCarver_C::ExecuteUbergraph_BP_TentacleMonsterCarver(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TentacleMonsterCarver.BP_TentacleMonsterCarver_C.ExecuteUbergraph_BP_TentacleMonsterCarver");

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
