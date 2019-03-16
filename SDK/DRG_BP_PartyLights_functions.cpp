// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_PartyLights_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PartyLights.BP_PartyLights_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PartyLights_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PartyLights.BP_PartyLights_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PartyLights.BP_PartyLights_C.Timeline_0__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_PartyLights_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PartyLights.BP_PartyLights_C.Timeline_0__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PartyLights.BP_PartyLights_C.Timeline_0__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_PartyLights_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PartyLights.BP_PartyLights_C.Timeline_0__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PartyLights.BP_PartyLights_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_PartyLights_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PartyLights.BP_PartyLights_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PartyLights.BP_PartyLights_C.ExecuteUbergraph_BP_PartyLights
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PartyLights_C::ExecuteUbergraph_BP_PartyLights(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PartyLights.BP_PartyLights_C.ExecuteUbergraph_BP_PartyLights");

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
