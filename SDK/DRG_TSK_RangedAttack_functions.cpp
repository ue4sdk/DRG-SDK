// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_TSK_RangedAttack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TSK_RangedAttack.TSK_RangedAttack_C.ReceiveExecuteAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APawn*                   ControlledPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTSK_RangedAttack_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function TSK_RangedAttack.TSK_RangedAttack_C.ReceiveExecuteAI");

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
	} params;

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function TSK_RangedAttack.TSK_RangedAttack_C.OnRangeAttack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTSK_RangedAttack_C::OnRangeAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function TSK_RangedAttack.TSK_RangedAttack_C.OnRangeAttack");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function TSK_RangedAttack.TSK_RangedAttack_C.ReceiveAbortAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APawn*                   ControlledPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTSK_RangedAttack_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function TSK_RangedAttack.TSK_RangedAttack_C.ReceiveAbortAI");

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
	} params;

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function TSK_RangedAttack.TSK_RangedAttack_C.ExecuteUbergraph_TSK_RangedAttack
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTSK_RangedAttack_C::ExecuteUbergraph_TSK_RangedAttack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TSK_RangedAttack.TSK_RangedAttack_C.ExecuteUbergraph_TSK_RangedAttack");

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
