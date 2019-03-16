// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_EscMenu_Briefing_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_EscMenu_Briefing.ITM_EscMenu_Briefing_C.SetMutatorInfo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMissionMutator*         Mutator                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_EscMenu_Briefing_C::SetMutatorInfo(class UMissionMutator* Mutator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_Briefing.ITM_EscMenu_Briefing_C.SetMutatorInfo");

	struct
	{
		class UMissionMutator*         Mutator;
	} params;

	params.Mutator = Mutator;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_EscMenu_Briefing.ITM_EscMenu_Briefing_C.SetWarningInfo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMissionWarning*         Warning                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_EscMenu_Briefing_C::SetWarningInfo(class UMissionWarning* Warning)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_Briefing.ITM_EscMenu_Briefing_C.SetWarningInfo");

	struct
	{
		class UMissionWarning*         Warning;
	} params;

	params.Warning = Warning;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_EscMenu_Briefing.ITM_EscMenu_Briefing_C.UpdateMissionInfo
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBiome*                  Biome                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UGeneratedMission*       Mission                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_EscMenu_Briefing_C::UpdateMissionInfo(class UBiome* Biome, class UGeneratedMission* Mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_Briefing.ITM_EscMenu_Briefing_C.UpdateMissionInfo");

	struct
	{
		class UBiome*                  Biome;
		class UGeneratedMission*       Mission;
	} params;

	params.Biome = Biome;
	params.Mission = Mission;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_EscMenu_Briefing.ITM_EscMenu_Briefing_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_EscMenu_Briefing_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_Briefing.ITM_EscMenu_Briefing_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_EscMenu_Briefing.ITM_EscMenu_Briefing_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_EscMenu_Briefing_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_Briefing.ITM_EscMenu_Briefing_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_EscMenu_Briefing.ITM_EscMenu_Briefing_C.ExecuteUbergraph_ITM_EscMenu_Briefing
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_EscMenu_Briefing_C::ExecuteUbergraph_ITM_EscMenu_Briefing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_Briefing.ITM_EscMenu_Briefing_C.ExecuteUbergraph_ITM_EscMenu_Briefing");

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
