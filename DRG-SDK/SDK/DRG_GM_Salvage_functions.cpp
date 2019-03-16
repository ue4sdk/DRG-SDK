// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_GM_Salvage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GM_Salvage.GM_Salvage_C.SpawnRepairPoints
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AGM_Salvage_C::SpawnRepairPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.SpawnRepairPoints");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GM_Salvage.GM_Salvage_C.EnableNextRepairPoint
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AGM_Salvage_C::EnableNextRepairPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.EnableNextRepairPoint");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GM_Salvage.GM_Salvage_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AGM_Salvage_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GM_Salvage.GM_Salvage_C.AllMulesSalvaged
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class AActor*>          Mules                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void AGM_Salvage_C::AllMulesSalvaged(TArray<class AActor*> Mules)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.AllMulesSalvaged");

	struct
	{
		TArray<class AActor*>          Mules;
	} params;

	params.Mules = Mules;

	UObject::ProcessEvent(fn, &params);
}


// Function GM_Salvage.GM_Salvage_C.OnLevelGenerationComplete
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            pass                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AGM_Salvage_C::OnLevelGenerationComplete(int pass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.OnLevelGenerationComplete");

	struct
	{
		int                            pass;
	} params;

	params.pass = pass;

	UObject::ProcessEvent(fn, &params);
}


// Function GM_Salvage.GM_Salvage_C.Call DropPod
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AGM_Salvage_C::Call_DropPod()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.Call DropPod");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GM_Salvage.GM_Salvage_C.DonkeyButtonPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AGM_Salvage_C::DonkeyButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.DonkeyButtonPressed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GM_Salvage.GM_Salvage_C.ReachedDropShip
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AGM_Salvage_C::ReachedDropShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.ReachedDropShip");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GM_Salvage.GM_Salvage_C.RepairPoint_Repaired
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  RepairPoint                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AGM_Salvage_C::RepairPoint_Repaired(class AActor* RepairPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.RepairPoint_Repaired");

	struct
	{
		class AActor*                  RepairPoint;
	} params;

	params.RepairPoint = RepairPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function GM_Salvage.GM_Salvage_C.DefendFail
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AGM_Salvage_C::DefendFail()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.DefendFail");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GM_Salvage.GM_Salvage_C.DefendDone
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AGM_Salvage_C::DefendDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.DefendDone");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GM_Salvage.GM_Salvage_C.SetObjective
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UOBJ_1st_Salvage_C*      Objective                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void AGM_Salvage_C::SetObjective(class UOBJ_1st_Salvage_C* Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.SetObjective");

	struct
	{
		class UOBJ_1st_Salvage_C*      Objective;
	} params;

	params.Objective = Objective;

	UObject::ProcessEvent(fn, &params);
}


// Function GM_Salvage.GM_Salvage_C.OnCountdownFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AGM_Salvage_C::OnCountdownFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.OnCountdownFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GM_Salvage.GM_Salvage_C.Countdowncomplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AGM_Salvage_C::Countdowncomplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.Countdowncomplete");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GM_Salvage.GM_Salvage_C.ExecuteUbergraph_GM_Salvage
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AGM_Salvage_C::ExecuteUbergraph_GM_Salvage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.ExecuteUbergraph_GM_Salvage");

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
