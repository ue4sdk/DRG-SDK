// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_TSK_FindRandomPoint_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TSK_FindRandomPoint.TSK_FindRandomPoint_C.snap
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           SnapToCeiling                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UDeepPathfinderMovement* Pathfinder                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UTSK_FindRandomPoint_C::snap(bool SnapToCeiling, class UDeepPathfinderMovement* Pathfinder, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function TSK_FindRandomPoint.TSK_FindRandomPoint_C.snap");

	struct
	{
		bool                           SnapToCeiling;
		class UDeepPathfinderMovement* Pathfinder;
		struct FVector                 Location;
	} params;

	params.SnapToCeiling = SnapToCeiling;
	params.Pathfinder = Pathfinder;

	UObject::ProcessEvent(fn, &params);

	if (Location != nullptr)
		*Location = params.Location;
}


// Function TSK_FindRandomPoint.TSK_FindRandomPoint_C.ReceiveExecuteAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APawn*                   ControlledPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTSK_FindRandomPoint_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function TSK_FindRandomPoint.TSK_FindRandomPoint_C.ReceiveExecuteAI");

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
	} params;

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function TSK_FindRandomPoint.TSK_FindRandomPoint_C.ExecuteUbergraph_TSK_FindRandomPoint
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTSK_FindRandomPoint_C::ExecuteUbergraph_TSK_FindRandomPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TSK_FindRandomPoint.TSK_FindRandomPoint_C.ExecuteUbergraph_TSK_FindRandomPoint");

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
