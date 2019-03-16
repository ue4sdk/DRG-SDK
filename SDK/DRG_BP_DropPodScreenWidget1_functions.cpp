// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_DropPodScreenWidget1_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DropPodScreenWidget1.BP_DropPodScreenWidget1_C.SetGeneratedMission
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UGeneratedMission*       In_Mission                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_DropPodScreenWidget1_C::SetGeneratedMission(class UGeneratedMission* In_Mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenWidget1.BP_DropPodScreenWidget1_C.SetGeneratedMission");

	struct
	{
		class UGeneratedMission*       In_Mission;
	} params;

	params.In_Mission = In_Mission;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPodScreenWidget1.BP_DropPodScreenWidget1_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_DropPodScreenWidget1_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenWidget1.BP_DropPodScreenWidget1_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPodScreenWidget1.BP_DropPodScreenWidget1_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_DropPodScreenWidget1_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenWidget1.BP_DropPodScreenWidget1_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPodScreenWidget1.BP_DropPodScreenWidget1_C.OnGeneratedMissionChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UGeneratedMission*       OutGeneratedMission            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_DropPodScreenWidget1_C::OnGeneratedMissionChanged(class UGeneratedMission* OutGeneratedMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenWidget1.BP_DropPodScreenWidget1_C.OnGeneratedMissionChanged");

	struct
	{
		class UGeneratedMission*       OutGeneratedMission;
	} params;

	params.OutGeneratedMission = OutGeneratedMission;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPodScreenWidget1.BP_DropPodScreenWidget1_C.ExecuteUbergraph_BP_DropPodScreenWidget1
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_DropPodScreenWidget1_C::ExecuteUbergraph_BP_DropPodScreenWidget1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenWidget1.BP_DropPodScreenWidget1_C.ExecuteUbergraph_BP_DropPodScreenWidget1");

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
