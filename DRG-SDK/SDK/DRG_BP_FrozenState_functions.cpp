// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_FrozenState_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FrozenState.BP_FrozenState_C.ReceiveStateEnter
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_FrozenState_C::ReceiveStateEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrozenState.BP_FrozenState_C.ReceiveStateEnter");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_FrozenState.BP_FrozenState_C.ReceiveStateExit
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_FrozenState_C::ReceiveStateExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrozenState.BP_FrozenState_C.ReceiveStateExit");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_FrozenState.BP_FrozenState_C.ReceiveOnDefrosting
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_FrozenState_C::ReceiveOnDefrosting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrozenState.BP_FrozenState_C.ReceiveOnDefrosting");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_FrozenState.BP_FrozenState_C.ExecuteUbergraph_BP_FrozenState
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FrozenState_C::ExecuteUbergraph_BP_FrozenState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrozenState.BP_FrozenState_C.ExecuteUbergraph_BP_FrozenState");

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
