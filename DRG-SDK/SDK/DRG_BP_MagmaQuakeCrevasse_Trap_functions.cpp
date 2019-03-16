// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_MagmaQuakeCrevasse_Trap_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MagmaQuakeCrevasse_Trap.BP_MagmaQuakeCrevasse_Trap_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MagmaQuakeCrevasse_Trap_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MagmaQuakeCrevasse_Trap.BP_MagmaQuakeCrevasse_Trap_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MagmaQuakeCrevasse_Trap.BP_MagmaQuakeCrevasse_Trap_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_MagmaQuakeCrevasse_Trap_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MagmaQuakeCrevasse_Trap.BP_MagmaQuakeCrevasse_Trap_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MagmaQuakeCrevasse_Trap.BP_MagmaQuakeCrevasse_Trap_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bFromSweep                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void ABP_MagmaQuakeCrevasse_Trap_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MagmaQuakeCrevasse_Trap.BP_MagmaQuakeCrevasse_Trap_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
		bool                           bFromSweep;
		struct FHitResult              SweepResult;
	} params;

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MagmaQuakeCrevasse_Trap.BP_MagmaQuakeCrevasse_Trap_C.BndEvt__CrevasseOpen_K2Node_ComponentBoundEvent_4_StateDelegate__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UActorStateComponent*    State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void ABP_MagmaQuakeCrevasse_Trap_C::BndEvt__CrevasseOpen_K2Node_ComponentBoundEvent_4_StateDelegate__DelegateSignature(class UActorStateComponent* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MagmaQuakeCrevasse_Trap.BP_MagmaQuakeCrevasse_Trap_C.BndEvt__CrevasseOpen_K2Node_ComponentBoundEvent_4_StateDelegate__DelegateSignature");

	struct
	{
		class UActorStateComponent*    State;
	} params;

	params.State = State;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MagmaQuakeCrevasse_Trap.BP_MagmaQuakeCrevasse_Trap_C.SetCrevasseActive
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsActive                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MagmaQuakeCrevasse_Trap_C::SetCrevasseActive(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MagmaQuakeCrevasse_Trap.BP_MagmaQuakeCrevasse_Trap_C.SetCrevasseActive");

	struct
	{
		bool                           IsActive;
	} params;

	params.IsActive = IsActive;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MagmaQuakeCrevasse_Trap.BP_MagmaQuakeCrevasse_Trap_C.ExecuteUbergraph_BP_MagmaQuakeCrevasse_Trap
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MagmaQuakeCrevasse_Trap_C::ExecuteUbergraph_BP_MagmaQuakeCrevasse_Trap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MagmaQuakeCrevasse_Trap.BP_MagmaQuakeCrevasse_Trap_C.ExecuteUbergraph_BP_MagmaQuakeCrevasse_Trap");

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
