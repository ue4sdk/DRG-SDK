// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_MissionStat_Preview_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_MissionStat_Preview.UI_MissionStat_Preview_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_MissionStat_Preview_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStat_Preview.UI_MissionStat_Preview_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_MissionStat_Preview.UI_MissionStat_Preview_C.SetMissionStat
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMissionStat*            MissionStat                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_MissionStat_Preview_C::SetMissionStat(class UMissionStat* MissionStat)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStat_Preview.UI_MissionStat_Preview_C.SetMissionStat");

	struct
	{
		class UMissionStat*            MissionStat;
	} params;

	params.MissionStat = MissionStat;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_MissionStat_Preview.UI_MissionStat_Preview_C.ExecuteUbergraph_UI_MissionStat_Preview
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_MissionStat_Preview_C::ExecuteUbergraph_UI_MissionStat_Preview(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStat_Preview.UI_MissionStat_Preview_C.ExecuteUbergraph_UI_MissionStat_Preview");

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
