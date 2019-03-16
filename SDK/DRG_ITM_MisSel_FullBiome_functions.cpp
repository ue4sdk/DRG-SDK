// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_MisSel_FullBiome_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.GetRandomFreeMissionSlot
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_MisSel_MissionMapIcon_C* Output                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_MisSel_FullBiome_C::GetRandomFreeMissionSlot(class UITM_MisSel_MissionMapIcon_C** Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.GetRandomFreeMissionSlot");

	struct
	{
		class UITM_MisSel_MissionMapIcon_C* Output;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Output != nullptr)
		*Output = params.Output;
}


// Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.ClearMissions
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_MisSel_FullBiome_C::ClearMissions()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.ClearMissions");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.GetAllAllMissionSlots
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class UITM_MisSel_MissionMapIcon_C*> Items1                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UITM_MisSel_FullBiome_C::GetAllAllMissionSlots(TArray<class UITM_MisSel_MissionMapIcon_C*>* Items1)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.GetAllAllMissionSlots");

	struct
	{
		TArray<class UITM_MisSel_MissionMapIcon_C*> Items1;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Items1 != nullptr)
		*Items1 = params.Items1;
}


// Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UITM_MisSel_FullBiome_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.SetData
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UGeneratedMission*> missions                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// class UBiome*                  Biome                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_MisSel_FullBiome_C::SetData(TArray<class UGeneratedMission*> missions, class UBiome* Biome)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.SetData");

	struct
	{
		TArray<class UGeneratedMission*> missions;
		class UBiome*                  Biome;
	} params;

	params.missions = missions;
	params.Biome = Biome;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.BndEvt__Button_BG_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_MisSel_FullBiome_C::BndEvt__Button_BG_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.BndEvt__Button_BG_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.ExecuteUbergraph_ITM_MisSel_FullBiome
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_MisSel_FullBiome_C::ExecuteUbergraph_ITM_MisSel_FullBiome(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.ExecuteUbergraph_ITM_MisSel_FullBiome");

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
