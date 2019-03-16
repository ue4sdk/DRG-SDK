// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_CabinController_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CabinController.BP_CabinController_C.OnRep_OwnerState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_CabinController_C::OnRep_OwnerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CabinController.BP_CabinController_C.OnRep_OwnerState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CabinController.BP_CabinController_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_CabinController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CabinController.BP_CabinController_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CabinController.BP_CabinController_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_CabinController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CabinController.BP_CabinController_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CabinController.BP_CabinController_C.RemoveOwner
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_CabinController_C::RemoveOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CabinController.BP_CabinController_C.RemoveOwner");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CabinController.BP_CabinController_C.Set Cabin Owner
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFSDPlayerController*    Controller                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_CabinController_C::Set_Cabin_Owner(class AFSDPlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CabinController.BP_CabinController_C.Set Cabin Owner");

	struct
	{
		class AFSDPlayerController*    Controller;
	} params;

	params.Controller = Controller;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CabinController.BP_CabinController_C.Controller leave
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_CabinController_C::Controller_leave(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CabinController.BP_CabinController_C.Controller leave");

	struct
	{
		class AActor*                  DestroyedActor;
	} params;

	params.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CabinController.BP_CabinController_C.ExecuteUbergraph_BP_CabinController
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_CabinController_C::ExecuteUbergraph_BP_CabinController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CabinController.BP_CabinController_C.ExecuteUbergraph_BP_CabinController");

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
