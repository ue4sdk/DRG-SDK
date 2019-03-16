// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_DEC_ShowOutline_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DEC_ShowOutline.DEC_ShowOutline_C.PerformConditionCheckAI
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APawn*                   ControlledPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UDEC_ShowOutline_C::PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DEC_ShowOutline.DEC_ShowOutline_C.PerformConditionCheckAI");

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


// Function DEC_ShowOutline.DEC_ShowOutline_C.ReceiveExecutionStartAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APawn*                   ControlledPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDEC_ShowOutline_C::ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DEC_ShowOutline.DEC_ShowOutline_C.ReceiveExecutionStartAI");

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
	} params;

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function DEC_ShowOutline.DEC_ShowOutline_C.ReceiveExecutionFinishAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APawn*                   ControlledPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EBTNodeResult>     NodeResult                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDEC_ShowOutline_C::ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, TEnumAsByte<EBTNodeResult> NodeResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function DEC_ShowOutline.DEC_ShowOutline_C.ReceiveExecutionFinishAI");

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
		TEnumAsByte<EBTNodeResult>     NodeResult;
	} params;

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.NodeResult = NodeResult;

	UObject::ProcessEvent(fn, &params);
}


// Function DEC_ShowOutline.DEC_ShowOutline_C.ExecuteUbergraph_DEC_ShowOutline
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDEC_ShowOutline_C::ExecuteUbergraph_DEC_ShowOutline(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DEC_ShowOutline.DEC_ShowOutline_C.ExecuteUbergraph_DEC_ShowOutline");

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
