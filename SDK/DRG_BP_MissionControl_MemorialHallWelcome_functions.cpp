// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_MissionControl_MemorialHallWelcome_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MissionControl_MemorialHallWelcome.BP_MissionControl_MemorialHallWelcome_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MissionControl_MemorialHallWelcome_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionControl_MemorialHallWelcome.BP_MissionControl_MemorialHallWelcome_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MissionControl_MemorialHallWelcome.BP_MissionControl_MemorialHallWelcome_C.ReceiveActorBeginOverlap
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MissionControl_MemorialHallWelcome_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionControl_MemorialHallWelcome.BP_MissionControl_MemorialHallWelcome_C.ReceiveActorBeginOverlap");

	struct
	{
		class AActor*                  OtherActor;
	} params;

	params.OtherActor = OtherActor;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MissionControl_MemorialHallWelcome.BP_MissionControl_MemorialHallWelcome_C.ExecuteUbergraph_BP_MissionControl_MemorialHallWelcome
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MissionControl_MemorialHallWelcome_C::ExecuteUbergraph_BP_MissionControl_MemorialHallWelcome(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionControl_MemorialHallWelcome.BP_MissionControl_MemorialHallWelcome_C.ExecuteUbergraph_BP_MissionControl_MemorialHallWelcome");

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
