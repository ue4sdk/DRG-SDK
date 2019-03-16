// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_CountDownActor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CountDownActor.BP_CountDownActor_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_CountDownActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CountDownActor.BP_CountDownActor_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CountDownActor.BP_CountDownActor_C.TriggerCountdown
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_CountDownActor_C::TriggerCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CountDownActor.BP_CountDownActor_C.TriggerCountdown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CountDownActor.BP_CountDownActor_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_CountDownActor_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CountDownActor.BP_CountDownActor_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CountDownActor.BP_CountDownActor_C.ExecuteUbergraph_BP_CountDownActor
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_CountDownActor_C::ExecuteUbergraph_BP_CountDownActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CountDownActor.BP_CountDownActor_C.ExecuteUbergraph_BP_CountDownActor");

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
