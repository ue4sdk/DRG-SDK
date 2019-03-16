// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_EVENT_DropPodDefense_Uplink_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EVENT_DropPodDefense_Uplink.EVENT_DropPodDefense_Uplink_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEVENT_DropPodDefense_Uplink_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Uplink.EVENT_DropPodDefense_Uplink_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EVENT_DropPodDefense_Uplink.EVENT_DropPodDefense_Uplink_C.EventSucceded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEVENT_DropPodDefense_Uplink_C::EventSucceded()
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Uplink.EVENT_DropPodDefense_Uplink_C.EventSucceded");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EVENT_DropPodDefense_Uplink.EVENT_DropPodDefense_Uplink_C.EventFailed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEVENT_DropPodDefense_Uplink_C::EventFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Uplink.EVENT_DropPodDefense_Uplink_C.EventFailed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EVENT_DropPodDefense_Uplink.EVENT_DropPodDefense_Uplink_C.ExecuteUbergraph_EVENT_DropPodDefense_Uplink
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AEVENT_DropPodDefense_Uplink_C::ExecuteUbergraph_EVENT_DropPodDefense_Uplink(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Uplink.EVENT_DropPodDefense_Uplink_C.ExecuteUbergraph_EVENT_DropPodDefense_Uplink");

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
