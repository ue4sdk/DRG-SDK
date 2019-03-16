// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_DropPodScreenWidget4_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DropPodScreenWidget4.BP_DropPodScreenWidget4_C.SetGeneratedMission
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UGeneratedMission*       In_Mission                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_DropPodScreenWidget4_C::SetGeneratedMission(class UGeneratedMission* In_Mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenWidget4.BP_DropPodScreenWidget4_C.SetGeneratedMission");

	struct
	{
		class UGeneratedMission*       In_Mission;
	} params;

	params.In_Mission = In_Mission;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPodScreenWidget4.BP_DropPodScreenWidget4_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_DropPodScreenWidget4_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenWidget4.BP_DropPodScreenWidget4_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPodScreenWidget4.BP_DropPodScreenWidget4_C.OnGeneratedMissionChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UGeneratedMission*       OutGeneratedMission            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_DropPodScreenWidget4_C::OnGeneratedMissionChanged(class UGeneratedMission* OutGeneratedMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenWidget4.BP_DropPodScreenWidget4_C.OnGeneratedMissionChanged");

	struct
	{
		class UGeneratedMission*       OutGeneratedMission;
	} params;

	params.OutGeneratedMission = OutGeneratedMission;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPodScreenWidget4.BP_DropPodScreenWidget4_C.ExecuteUbergraph_BP_DropPodScreenWidget4
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_DropPodScreenWidget4_C::ExecuteUbergraph_BP_DropPodScreenWidget4(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenWidget4.BP_DropPodScreenWidget4_C.ExecuteUbergraph_BP_DropPodScreenWidget4");

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
