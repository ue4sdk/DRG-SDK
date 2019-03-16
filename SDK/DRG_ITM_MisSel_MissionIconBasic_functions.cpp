// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_MisSel_MissionIconBasic_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.SetMission
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UGeneratedMission*       InMission                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_MisSel_MissionIconBasic_C::SetMission(class UGeneratedMission* InMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.SetMission");

	struct
	{
		class UGeneratedMission*       InMission;
	} params;

	params.InMission = InMission;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.SetData
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMissionTemplate*        MissionTemplate                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_MisSel_MissionIconBasic_C::SetData(class UMissionTemplate* MissionTemplate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.SetData");

	struct
	{
		class UMissionTemplate*        MissionTemplate;
	} params;

	params.MissionTemplate = MissionTemplate;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_MisSel_MissionIconBasic_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UITM_MisSel_MissionIconBasic_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.ExecuteUbergraph_ITM_MisSel_MissionIconBasic
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_MisSel_MissionIconBasic_C::ExecuteUbergraph_ITM_MisSel_MissionIconBasic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.ExecuteUbergraph_ITM_MisSel_MissionIconBasic");

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
