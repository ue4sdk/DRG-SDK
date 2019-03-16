// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_MissionBarDropPod_Objective_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_MissionBarDropPod_Objective.ITM_MissionBarDropPod_Objective_C.SetObjective
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UGeneratedMission*       Mission                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  ObjectiveType                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_MissionBarDropPod_Objective_C::SetObjective(class UGeneratedMission* Mission, class UClass* ObjectiveType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MissionBarDropPod_Objective.ITM_MissionBarDropPod_Objective_C.SetObjective");

	struct
	{
		class UGeneratedMission*       Mission;
		class UClass*                  ObjectiveType;
	} params;

	params.Mission = Mission;
	params.ObjectiveType = ObjectiveType;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_MissionBarDropPod_Objective.ITM_MissionBarDropPod_Objective_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_MissionBarDropPod_Objective_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MissionBarDropPod_Objective.ITM_MissionBarDropPod_Objective_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_MissionBarDropPod_Objective.ITM_MissionBarDropPod_Objective_C.ExecuteUbergraph_ITM_MissionBarDropPod_Objective
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_MissionBarDropPod_Objective_C::ExecuteUbergraph_ITM_MissionBarDropPod_Objective(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MissionBarDropPod_Objective.ITM_MissionBarDropPod_Objective_C.ExecuteUbergraph_ITM_MissionBarDropPod_Objective");

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
