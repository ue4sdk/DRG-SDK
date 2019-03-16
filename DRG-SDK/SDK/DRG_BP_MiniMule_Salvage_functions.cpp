// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_MiniMule_Salvage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.TryDestroyComponent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UActorComponent*         Component                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void ABP_MiniMule_Salvage_C::TryDestroyComponent(class UActorComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.TryDestroyComponent");

	struct
	{
		class UActorComponent*         Component;
	} params;

	params.Component = Component;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.GetState
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<EMiniMule_State>   NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MiniMule_Salvage_C::GetState(TEnumAsByte<EMiniMule_State>* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.GetState");

	struct
	{
		TEnumAsByte<EMiniMule_State>   NewParam;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.SetState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EMiniMule_State>   EnumValue                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MiniMule_Salvage_C::SetState(TEnumAsByte<EMiniMule_State> EnumValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.SetState");

	struct
	{
		TEnumAsByte<EMiniMule_State>   EnumValue;
	} params;

	params.EnumValue = EnumValue;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MiniMule_Salvage_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Sphere Timeline__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_MiniMule_Salvage_C::Sphere_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Sphere Timeline__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Sphere Timeline__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_MiniMule_Salvage_C::Sphere_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Sphere Timeline__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Intensity__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_MiniMule_Salvage_C::Intensity__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Intensity__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Intensity__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_MiniMule_Salvage_C::Intensity__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Intensity__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.GotoDropPod
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 DroppodLocation                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MiniMule_Salvage_C::GotoDropPod(const struct FVector& DroppodLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.GotoDropPod");

	struct
	{
		struct FVector                 DroppodLocation;
	} params;

	params.DroppodLocation = DroppodLocation;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Cheat_TeleportPlayer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MiniMule_Salvage_C::Cheat_TeleportPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Cheat_TeleportPlayer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_MiniMule_Salvage_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bFromSweep                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void ABP_MiniMule_Salvage_C::BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

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


// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        user                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MiniMule_Salvage_C::BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");

	struct
	{
		class APlayerCharacter*        user;
	} params;

	params.user = user;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Stop Beacon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MiniMule_Salvage_C::Stop_Beacon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Stop Beacon");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Cheat_Repair
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MiniMule_Salvage_C::Cheat_Repair()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Cheat_Repair");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__Repairable_K2Node_ComponentBoundEvent_0_RepairedDelegate__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class URepairableComponent*    Component                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void ABP_MiniMule_Salvage_C::BndEvt__Repairable_K2Node_ComponentBoundEvent_0_RepairedDelegate__DelegateSignature(class URepairableComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__Repairable_K2Node_ComponentBoundEvent_0_RepairedDelegate__DelegateSignature");

	struct
	{
		class URepairableComponent*    Component;
	} params;

	params.Component = Component;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__Repairable_K2Node_ComponentBoundEvent_1_RepairedDelegate__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class URepairableComponent*    Component                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void ABP_MiniMule_Salvage_C::BndEvt__Repairable_K2Node_ComponentBoundEvent_1_RepairedDelegate__DelegateSignature(class URepairableComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__Repairable_K2Node_ComponentBoundEvent_1_RepairedDelegate__DelegateSignature");

	struct
	{
		class URepairableComponent*    Component;
	} params;

	params.Component = Component;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__Repairable_K2Node_ComponentBoundEvent_2_RepairedDelegate__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class URepairableComponent*    Component                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void ABP_MiniMule_Salvage_C::BndEvt__Repairable_K2Node_ComponentBoundEvent_2_RepairedDelegate__DelegateSignature(class URepairableComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__Repairable_K2Node_ComponentBoundEvent_2_RepairedDelegate__DelegateSignature");

	struct
	{
		class URepairableComponent*    Component;
	} params;

	params.Component = Component;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__RepairableUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        user                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MiniMule_Salvage_C::BndEvt__RepairableUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__RepairableUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");

	struct
	{
		class APlayerCharacter*        user;
	} params;

	params.user = user;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.OnMessageAI
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   TriggerName                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MiniMule_Salvage_C::OnMessageAI(const struct FName& TriggerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.OnMessageAI");

	struct
	{
		struct FName                   TriggerName;
	} params;

	params.TriggerName = TriggerName;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.ExecuteUbergraph_BP_MiniMule_Salvage
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MiniMule_Salvage_C::ExecuteUbergraph_BP_MiniMule_Salvage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.ExecuteUbergraph_BP_MiniMule_Salvage");

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
