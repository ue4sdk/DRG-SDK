// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Console_MissionStatistics_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Console_MissionStatistics.Console_MissionStatistics_C.HasClaimablePerkPoints
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Claimable                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UConsole_MissionStatistics_C::HasClaimablePerkPoints(bool* Claimable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_MissionStatistics.Console_MissionStatistics_C.HasClaimablePerkPoints");

	struct
	{
		bool                           Claimable;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Claimable != nullptr)
		*Claimable = params.Claimable;
}


// Function Console_MissionStatistics.Console_MissionStatistics_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UConsole_MissionStatistics_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_MissionStatistics.Console_MissionStatistics_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Console_MissionStatistics.Console_MissionStatistics_C.StartClaimable
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UConsole_MissionStatistics_C::StartClaimable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_MissionStatistics.Console_MissionStatistics_C.StartClaimable");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Console_MissionStatistics.Console_MissionStatistics_C.StopClaimable
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UConsole_MissionStatistics_C::StopClaimable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_MissionStatistics.Console_MissionStatistics_C.StopClaimable");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Console_MissionStatistics.Console_MissionStatistics_C.Update
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UConsole_MissionStatistics_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_MissionStatistics.Console_MissionStatistics_C.Update");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Console_MissionStatistics.Console_MissionStatistics_C.OnCountChanged_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMissionStat*            MissionStat                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UConsole_MissionStatistics_C::OnCountChanged_Event(class UMissionStat* MissionStat, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_MissionStatistics.Console_MissionStatistics_C.OnCountChanged_Event");

	struct
	{
		class UMissionStat*            MissionStat;
		float                          Value;
	} params;

	params.MissionStat = MissionStat;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function Console_MissionStatistics.Console_MissionStatistics_C.OnMilestoneClaimed_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMilestoneAsset*         Milestone                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ClaimedTier                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UConsole_MissionStatistics_C::OnMilestoneClaimed_Event(class UMilestoneAsset* Milestone, int ClaimedTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_MissionStatistics.Console_MissionStatistics_C.OnMilestoneClaimed_Event");

	struct
	{
		class UMilestoneAsset*         Milestone;
		int                            ClaimedTier;
	} params;

	params.Milestone = Milestone;
	params.ClaimedTier = ClaimedTier;

	UObject::ProcessEvent(fn, &params);
}


// Function Console_MissionStatistics.Console_MissionStatistics_C.ExecuteUbergraph_Console_MissionStatistics
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UConsole_MissionStatistics_C::ExecuteUbergraph_Console_MissionStatistics(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Console_MissionStatistics.Console_MissionStatistics_C.ExecuteUbergraph_Console_MissionStatistics");

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
