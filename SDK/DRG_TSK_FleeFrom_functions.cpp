// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_TSK_FleeFrom_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TSK_FleeFrom.TSK_FleeFrom_C.SetFleeFalse
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AController*             Controller                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTSK_FleeFrom_C::SetFleeFalse(class AController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function TSK_FleeFrom.TSK_FleeFrom_C.SetFleeFalse");

	struct
	{
		class AController*             Controller;
	} params;

	params.Controller = Controller;

	UObject::ProcessEvent(fn, &params);
}


// Function TSK_FleeFrom.TSK_FleeFrom_C.OutsideDanger
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           res                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTSK_FleeFrom_C::OutsideDanger(class AActor* Pawn, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function TSK_FleeFrom.TSK_FleeFrom_C.OutsideDanger");

	struct
	{
		class AActor*                  Pawn;
		bool                           res;
	} params;

	params.Pawn = Pawn;

	UObject::ProcessEvent(fn, &params);

	if (res != nullptr)
		*res = params.res;
}


// Function TSK_FleeFrom.TSK_FleeFrom_C.ReceiveExecuteAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APawn*                   ControlledPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTSK_FleeFrom_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function TSK_FleeFrom.TSK_FleeFrom_C.ReceiveExecuteAI");

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
	} params;

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function TSK_FleeFrom.TSK_FleeFrom_C.PathDone
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           success                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTSK_FleeFrom_C::PathDone(bool success)
{
	static auto fn = UObject::FindObject<UFunction>("Function TSK_FleeFrom.TSK_FleeFrom_C.PathDone");

	struct
	{
		bool                           success;
	} params;

	params.success = success;

	UObject::ProcessEvent(fn, &params);
}


// Function TSK_FleeFrom.TSK_FleeFrom_C.RefreshDest
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTSK_FleeFrom_C::RefreshDest()
{
	static auto fn = UObject::FindObject<UFunction>("Function TSK_FleeFrom.TSK_FleeFrom_C.RefreshDest");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function TSK_FleeFrom.TSK_FleeFrom_C.ReceiveAbortAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APawn*                   ControlledPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTSK_FleeFrom_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function TSK_FleeFrom.TSK_FleeFrom_C.ReceiveAbortAI");

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
	} params;

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function TSK_FleeFrom.TSK_FleeFrom_C.ExecuteUbergraph_TSK_FleeFrom
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTSK_FleeFrom_C::ExecuteUbergraph_TSK_FleeFrom(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TSK_FleeFrom.TSK_FleeFrom_C.ExecuteUbergraph_TSK_FleeFrom");

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
