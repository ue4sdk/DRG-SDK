// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_PlayerState_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PlayerState.BP_PlayerState_C.GetXPRewardsCustom
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TMap<class UResourceData*, float> resources                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// int                            EnemiesKilled                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           FailPrimaryObjectiveCompleted  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           FailSecondaryObjectiveCompleted (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FXPReward>       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FXPReward> ABP_PlayerState_C::GetXPRewardsCustom(TMap<class UResourceData*, float> resources, int EnemiesKilled, bool FailPrimaryObjectiveCompleted, bool FailSecondaryObjectiveCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.GetXPRewardsCustom");

	struct
	{
		TMap<class UResourceData*, float> resources;
		int                            EnemiesKilled;
		bool                           FailPrimaryObjectiveCompleted;
		bool                           FailSecondaryObjectiveCompleted;
		TArray<struct FXPReward>       ReturnValue;
	} params;

	params.resources = resources;
	params.EnemiesKilled = EnemiesKilled;
	params.FailPrimaryObjectiveCompleted = FailPrimaryObjectiveCompleted;
	params.FailSecondaryObjectiveCompleted = FailSecondaryObjectiveCompleted;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_PlayerState.BP_PlayerState_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerState_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerState.BP_PlayerState_C.CharacterSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerState_C::CharacterSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.CharacterSelected");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerState.BP_PlayerState_C.OnLateJoinFinished
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_PlayerState_C::OnLateJoinFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.OnLateJoinFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerState.BP_PlayerState_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_PlayerState_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerState.BP_PlayerState_C.WaitForDropPod
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerState_C::WaitForDropPod()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.WaitForDropPod");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerState.BP_PlayerState_C.LogState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerState_C::LogState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.LogState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerState.BP_PlayerState_C.ExecuteUbergraph_BP_PlayerState
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerState_C::ExecuteUbergraph_BP_PlayerState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.ExecuteUbergraph_BP_PlayerState");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerState.BP_PlayerState_C.ReadyChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsReady                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerState_C::ReadyChanged__DelegateSignature(bool IsReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.ReadyChanged__DelegateSignature");

	struct
	{
		bool                           IsReady;
	} params;

	params.IsReady = IsReady;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
