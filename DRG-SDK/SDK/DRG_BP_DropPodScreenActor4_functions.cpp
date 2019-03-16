// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_DropPodScreenActor4_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DropPodScreenActor4.BP_DropPodScreenActor4_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DropPodScreenActor4_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenActor4.BP_DropPodScreenActor4_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPodScreenActor4.BP_DropPodScreenActor4_C.TriggerCountdown
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DropPodScreenActor4_C::TriggerCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenActor4.BP_DropPodScreenActor4_C.TriggerCountdown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPodScreenActor4.BP_DropPodScreenActor4_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_DropPodScreenActor4_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenActor4.BP_DropPodScreenActor4_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPodScreenActor4.BP_DropPodScreenActor4_C.ExecuteUbergraph_BP_DropPodScreenActor4
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_DropPodScreenActor4_C::ExecuteUbergraph_BP_DropPodScreenActor4(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenActor4.BP_DropPodScreenActor4_C.ExecuteUbergraph_BP_DropPodScreenActor4");

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
