// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BTTask_ReachedDropship_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTTask_ReachedDropship.BTTask_ReachedDropship_C.ReceiveExecuteAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APawn*                   ControlledPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTTask_ReachedDropship_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_ReachedDropship.BTTask_ReachedDropship_C.ReceiveExecuteAI");

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
	} params;

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function BTTask_ReachedDropship.BTTask_ReachedDropship_C.ExecuteUbergraph_BTTask_ReachedDropship
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTTask_ReachedDropship_C::ExecuteUbergraph_BTTask_ReachedDropship(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_ReachedDropship.BTTask_ReachedDropship_C.ExecuteUbergraph_BTTask_ReachedDropship");

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
