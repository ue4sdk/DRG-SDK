// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Elevator2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Elevator2.Elevator2_C.OnRep_GoingUp
// (FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AElevator2_C::OnRep_GoingUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Elevator2.Elevator2_C.OnRep_GoingUp");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Elevator2.Elevator2_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AElevator2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Elevator2.Elevator2_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Elevator2.Elevator2_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AElevator2_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Elevator2.Elevator2_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function Elevator2.Elevator2_C.ExecuteUbergraph_Elevator2
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AElevator2_C::ExecuteUbergraph_Elevator2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Elevator2.Elevator2_C.ExecuteUbergraph_Elevator2");

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
