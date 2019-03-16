// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_DEC_SetAttackStance_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DEC_SetAttackStance.DEC_SetAttackStance_C.PerformConditionCheckAI
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APawn*                   ControlledPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UDEC_SetAttackStance_C::PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DEC_SetAttackStance.DEC_SetAttackStance_C.PerformConditionCheckAI");

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
		bool                           ReturnValue;
	} params;

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DEC_SetAttackStance.DEC_SetAttackStance_C.ReceiveExecutionStartAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APawn*                   ControlledPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDEC_SetAttackStance_C::ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DEC_SetAttackStance.DEC_SetAttackStance_C.ReceiveExecutionStartAI");

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
	} params;

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function DEC_SetAttackStance.DEC_SetAttackStance_C.ExecuteUbergraph_DEC_SetAttackStance
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDEC_SetAttackStance_C::ExecuteUbergraph_DEC_SetAttackStance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DEC_SetAttackStance.DEC_SetAttackStance_C.ExecuteUbergraph_DEC_SetAttackStance");

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
