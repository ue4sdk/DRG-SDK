// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_PlayerState_SpaceRig_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.GetHealthInsuranceStatus
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            HealthInsuranceStatus          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerState_SpaceRig_C::GetHealthInsuranceStatus(int* HealthInsuranceStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.GetHealthInsuranceStatus");

	struct
	{
		int                            HealthInsuranceStatus;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (HealthInsuranceStatus != nullptr)
		*HealthInsuranceStatus = params.HealthInsuranceStatus;
}


// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerState_SpaceRig_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.WatchStat
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMissionStat*            MissionStat                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerState_SpaceRig_C::WatchStat(class UMissionStat* MissionStat)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.WatchStat");

	struct
	{
		class UMissionStat*            MissionStat;
	} params;

	params.MissionStat = MissionStat;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.OnStatChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMissionStat*            MissionStat                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerState_SpaceRig_C::OnStatChanged(class UMissionStat* MissionStat, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.OnStatChanged");

	struct
	{
		class UMissionStat*            MissionStat;
		float                          Value;
	} params;

	params.MissionStat = MissionStat;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.CommunicatStatChangeToServer
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 StatTitle                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// struct FString                 StatValue                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void ABP_PlayerState_SpaceRig_C::CommunicatStatChangeToServer(const struct FString& StatTitle, const struct FString& StatValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.CommunicatStatChangeToServer");

	struct
	{
		struct FString                 StatTitle;
		struct FString                 StatValue;
	} params;

	params.StatTitle = StatTitle;
	params.StatValue = StatValue;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.CommunicateStatChangeToAll
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 StatTitle                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// struct FString                 StatValue                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void ABP_PlayerState_SpaceRig_C::CommunicateStatChangeToAll(const struct FString& StatTitle, const struct FString& StatValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.CommunicateStatChangeToAll");

	struct
	{
		struct FString                 StatTitle;
		struct FString                 StatValue;
	} params;

	params.StatTitle = StatTitle;
	params.StatValue = StatValue;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.ExecuteUbergraph_BP_PlayerState_SpaceRig
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerState_SpaceRig_C::ExecuteUbergraph_BP_PlayerState_SpaceRig(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.ExecuteUbergraph_BP_PlayerState_SpaceRig");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.OnStatChange__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 StatTitle                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// struct FString                 StatValue                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void ABP_PlayerState_SpaceRig_C::OnStatChange__DelegateSignature(const struct FString& StatTitle, const struct FString& StatValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.OnStatChange__DelegateSignature");

	struct
	{
		struct FString                 StatTitle;
		struct FString                 StatValue;
	} params;

	params.StatTitle = StatTitle;
	params.StatValue = StatValue;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
