// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_Salvage_Point_Uplink_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Salvage_Point_Uplink_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Salvage_Point_Uplink_C::BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature");

	struct
	{
		float                          Progress;
	} params;

	params.Progress = Progress;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.OnDefenseComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Salvage_Point_Uplink_C::OnDefenseComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.OnDefenseComplete");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.OnDefenseStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Salvage_Point_Uplink_C::OnDefenseStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.OnDefenseStart");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Salvage_Point_Uplink_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.OnDefenseFail
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Salvage_Point_Uplink_C::OnDefenseFail()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.OnDefenseFail");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.ExecuteUbergraph_BP_Salvage_Point_Uplink
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Salvage_Point_Uplink_C::ExecuteUbergraph_BP_Salvage_Point_Uplink(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.ExecuteUbergraph_BP_Salvage_Point_Uplink");

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
