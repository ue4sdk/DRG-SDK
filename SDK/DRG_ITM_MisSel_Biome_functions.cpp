// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_MisSel_Biome_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.SetCampaignVisiblity
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_MisSel_Biome_C::SetCampaignVisiblity()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.SetCampaignVisiblity");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.IsUnlocked
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UITM_MisSel_Biome_C::IsUnlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.IsUnlocked");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.CreateMissionIcons
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UGeneratedMission*> Array                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UITM_MisSel_Biome_C::CreateMissionIcons(TArray<class UGeneratedMission*>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.CreateMissionIcons");

	struct
	{
		TArray<class UGeneratedMission*> Array;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Array != nullptr)
		*Array = params.Array;
}


// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.HasMissions
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UITM_MisSel_Biome_C::HasMissions()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.HasMissions");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.GetController
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ABP_PlayerController_SpaceRig_C* AsBP_Player_Controller_Space_Rig (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_MisSel_Biome_C::GetController(class ABP_PlayerController_SpaceRig_C** AsBP_Player_Controller_Space_Rig)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.GetController");

	struct
	{
		class ABP_PlayerController_SpaceRig_C* AsBP_Player_Controller_Space_Rig;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AsBP_Player_Controller_Space_Rig != nullptr)
		*AsBP_Player_Controller_Space_Rig = params.AsBP_Player_Controller_Space_Rig;
}


// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.SortMissions
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UGeneratedMission*> missions                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TMap<class UMissionTemplate*, int> MissionCount1                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UITM_MisSel_Biome_C::SortMissions(TArray<class UGeneratedMission*>* missions, TMap<class UMissionTemplate*, int>* MissionCount1)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.SortMissions");

	struct
	{
		TArray<class UGeneratedMission*> missions;
		TMap<class UMissionTemplate*, int> MissionCount1;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (missions != nullptr)
		*missions = params.missions;
	if (MissionCount1 != nullptr)
		*MissionCount1 = params.MissionCount1;
}


// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.GetMissionsForBiome
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UGeneratedMission*> Array                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<class UGeneratedMission*> missions                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UITM_MisSel_Biome_C::GetMissionsForBiome(TArray<class UGeneratedMission*>* Array, TArray<class UGeneratedMission*>* missions)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.GetMissionsForBiome");

	struct
	{
		TArray<class UGeneratedMission*> Array;
		TArray<class UGeneratedMission*> missions;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Array != nullptr)
		*Array = params.Array;
	if (missions != nullptr)
		*missions = params.missions;
}


// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.Unselect
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_MisSel_Biome_C::Unselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.Unselect");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.Select
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_MisSel_Biome_C::Select()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.Select");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_MisSel_Biome_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.BndEvt__Button_229_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_MisSel_Biome_C::BndEvt__Button_229_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.BndEvt__Button_229_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.BndEvt__Button_229_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_MisSel_Biome_C::BndEvt__Button_229_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.BndEvt__Button_229_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.SetData
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UGeneratedMission*> missions                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UITM_MisSel_Biome_C::SetData(TArray<class UGeneratedMission*> missions)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.SetData");

	struct
	{
		TArray<class UGeneratedMission*> missions;
	} params;

	params.missions = missions;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_MisSel_Biome_C::BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.ExecuteUbergraph_ITM_MisSel_Biome
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_MisSel_Biome_C::ExecuteUbergraph_ITM_MisSel_Biome(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.ExecuteUbergraph_ITM_MisSel_Biome");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.BiomeSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_MisSel_Biome_C*     Biome                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_MisSel_Biome_C::BiomeSelected__DelegateSignature(class UITM_MisSel_Biome_C* Biome)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.BiomeSelected__DelegateSignature");

	struct
	{
		class UITM_MisSel_Biome_C*     Biome;
	} params;

	params.Biome = Biome;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
