// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_GravitySwitch_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GravitySwitch.BP_GravitySwitch_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_GravitySwitch_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GravitySwitch.BP_GravitySwitch_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GravitySwitch.BP_GravitySwitch_C.Timeline_0__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_GravitySwitch_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GravitySwitch.BP_GravitySwitch_C.Timeline_0__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GravitySwitch.BP_GravitySwitch_C.Timeline_0__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_GravitySwitch_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GravitySwitch.BP_GravitySwitch_C.Timeline_0__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GravitySwitch.BP_GravitySwitch_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        user                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_GravitySwitch_C::BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GravitySwitch.BP_GravitySwitch_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");

	struct
	{
		class APlayerCharacter*        user;
	} params;

	params.user = user;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GravitySwitch.BP_GravitySwitch_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_GravitySwitch_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GravitySwitch.BP_GravitySwitch_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GravitySwitch.BP_GravitySwitch_C.ChangeSkyLight
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_GravitySwitch_C::ChangeSkyLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GravitySwitch.BP_GravitySwitch_C.ChangeSkyLight");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GravitySwitch.BP_GravitySwitch_C.ResetSkyLight
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_GravitySwitch_C::ResetSkyLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GravitySwitch.BP_GravitySwitch_C.ResetSkyLight");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GravitySwitch.BP_GravitySwitch_C.ExecuteUbergraph_BP_GravitySwitch
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_GravitySwitch_C::ExecuteUbergraph_BP_GravitySwitch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GravitySwitch.BP_GravitySwitch_C.ExecuteUbergraph_BP_GravitySwitch");

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
