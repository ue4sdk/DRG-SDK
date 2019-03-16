// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_Salvage_FuelPod_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Salvage_FuelPod_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.OnDroppodImpact
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Salvage_FuelPod_C::OnDroppodImpact()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.OnDroppodImpact");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.OnDropStarted
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Salvage_FuelPod_C::OnDropStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.OnDropStarted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Salvage_FuelPod_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        user                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Salvage_FuelPod_C::BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");

	struct
	{
		class APlayerCharacter*        user;
	} params;

	params.user = user;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           canUse                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Salvage_FuelPod_C::BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature(bool canUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature");

	struct
	{
		bool                           canUse;
	} params;

	params.canUse = canUse;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.OnDefenseStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Salvage_FuelPod_C::OnDefenseStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.OnDefenseStart");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.OnDefenseComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Salvage_FuelPod_C::OnDefenseComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.OnDefenseComplete");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Salvage_FuelPod_C::BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature");

	struct
	{
		float                          Progress;
	} params;

	params.Progress = Progress;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.OnDefenseFailed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Salvage_FuelPod_C::OnDefenseFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.OnDefenseFailed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.ExecuteUbergraph_BP_Salvage_FuelPod
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Salvage_FuelPod_C::ExecuteUbergraph_BP_Salvage_FuelPod(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.ExecuteUbergraph_BP_Salvage_FuelPod");

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
