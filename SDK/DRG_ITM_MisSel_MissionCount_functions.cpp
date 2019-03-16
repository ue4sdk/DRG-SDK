// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_MisSel_MissionCount_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_MisSel_MissionCount.ITM_MisSel_MissionCount_C.SetMissionCount
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UGeneratedMission*> missions                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FBlueprintSessionResult> SeachResults                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UITM_MisSel_MissionCount_C::SetMissionCount(TArray<class UGeneratedMission*>* missions, TArray<struct FBlueprintSessionResult>* SeachResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionCount.ITM_MisSel_MissionCount_C.SetMissionCount");

	struct
	{
		TArray<class UGeneratedMission*> missions;
		TArray<struct FBlueprintSessionResult> SeachResults;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (missions != nullptr)
		*missions = params.missions;
	if (SeachResults != nullptr)
		*SeachResults = params.SeachResults;
}


// Function ITM_MisSel_MissionCount.ITM_MisSel_MissionCount_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_MisSel_MissionCount_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionCount.ITM_MisSel_MissionCount_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_MisSel_MissionCount.ITM_MisSel_MissionCount_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UITM_MisSel_MissionCount_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionCount.ITM_MisSel_MissionCount_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_MisSel_MissionCount.ITM_MisSel_MissionCount_C.ServerUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_MisSel_MissionCount_C::ServerUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionCount.ITM_MisSel_MissionCount_C.ServerUpdate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_MisSel_MissionCount.ITM_MisSel_MissionCount_C.ExecuteUbergraph_ITM_MisSel_MissionCount
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_MisSel_MissionCount_C::ExecuteUbergraph_ITM_MisSel_MissionCount(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionCount.ITM_MisSel_MissionCount_C.ExecuteUbergraph_ITM_MisSel_MissionCount");

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
