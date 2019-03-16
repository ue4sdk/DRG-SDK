// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_DeadState_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DeadState.BP_DeadState_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_DeadState_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeadState.BP_DeadState_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DeadState.BP_DeadState_C.ReceiveStateExit
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_DeadState_C::ReceiveStateExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeadState.BP_DeadState_C.ReceiveStateExit");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DeadState.BP_DeadState_C.ReceiveStateEnter
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_DeadState_C::ReceiveStateEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeadState.BP_DeadState_C.ReceiveStateEnter");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DeadState.BP_DeadState_C.Set Death parameters
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Respawn_delay                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Effect_Delay                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAnimMontage*            Death_montage                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UParticleSystem*         Death_Effect                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Use_animtime_as_respawn_time   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_DeadState_C::Set_Death_parameters(float Respawn_delay, float Effect_Delay, class UAnimMontage* Death_montage, class UParticleSystem* Death_Effect, bool Use_animtime_as_respawn_time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeadState.BP_DeadState_C.Set Death parameters");

	struct
	{
		float                          Respawn_delay;
		float                          Effect_Delay;
		class UAnimMontage*            Death_montage;
		class UParticleSystem*         Death_Effect;
		bool                           Use_animtime_as_respawn_time;
	} params;

	params.Respawn_delay = Respawn_delay;
	params.Effect_Delay = Effect_Delay;
	params.Death_montage = Death_montage;
	params.Death_Effect = Death_Effect;
	params.Use_animtime_as_respawn_time = Use_animtime_as_respawn_time;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DeadState.BP_DeadState_C.ExecuteUbergraph_BP_DeadState
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_DeadState_C::ExecuteUbergraph_BP_DeadState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeadState.BP_DeadState_C.ExecuteUbergraph_BP_DeadState");

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
