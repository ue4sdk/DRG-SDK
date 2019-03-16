// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_DropPod_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DropPod_Base.BP_DropPod_Base_C.SetAllPlayersAnsel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Active                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_DropPod_Base_C::SetAllPlayersAnsel(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.SetAllPlayersAnsel");

	struct
	{
		bool                           Active;
	} params;

	params.Active = Active;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.GetDonkeyReturnPickupLocation
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector ABP_DropPod_Base_C::GetDonkeyReturnPickupLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.GetDonkeyReturnPickupLocation");

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.SetDoorState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EDroppodDoorState> DoorState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_DropPod_Base_C::SetDoorState(TEnumAsByte<EDroppodDoorState> DoorState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.SetDoorState");

	struct
	{
		TEnumAsByte<EDroppodDoorState> DoorState;
	} params;

	params.DoorState = DoorState;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.GetCountDown
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           first                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ABP_CountDownActor_C*    AsBP_Count_Down_Actor          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_DropPod_Base_C::GetCountDown(bool first, class ABP_CountDownActor_C** AsBP_Count_Down_Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.GetCountDown");

	struct
	{
		bool                           first;
		class ABP_CountDownActor_C*    AsBP_Count_Down_Actor;
	} params;

	params.first = first;

	UObject::ProcessEvent(fn, &params);

	if (AsBP_Count_Down_Actor != nullptr)
		*AsBP_Count_Down_Actor = params.AsBP_Count_Down_Actor;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.OnRep_MuleInstance
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DropPod_Base_C::OnRep_MuleInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.OnRep_MuleInstance");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.OnMuleLoaded
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DropPod_Base_C::OnMuleLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.OnMuleLoaded");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.GetMule
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ABP_Donkey_C*            Donkey                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_DropPod_Base_C::GetMule(class ABP_Donkey_C** Donkey)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.GetMule");

	struct
	{
		class ABP_Donkey_C*            Donkey;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Donkey != nullptr)
		*Donkey = params.Donkey;
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.SetStandingDown
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsStandingDown                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_DropPod_Base_C::SetStandingDown(bool IsStandingDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.SetStandingDown");

	struct
	{
		bool                           IsStandingDown;
	} params;

	params.IsStandingDown = IsStandingDown;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.CloseRamp
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DropPod_Base_C::CloseRamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.CloseRamp");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.OpenRamp
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DropPod_Base_C::OpenRamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.OpenRamp");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.OnAllPlayersLeftPod
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DropPod_Base_C::OnAllPlayersLeftPod()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.OnAllPlayersLeftPod");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.SetPreferredCharacter
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UChildActorComponent*    Spawn                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// TSoftObjectPtr<class UClass>   Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_DropPod_Base_C::SetPreferredCharacter(class UChildActorComponent* Spawn, TSoftObjectPtr<class UClass> Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.SetPreferredCharacter");

	struct
	{
		class UChildActorComponent*    Spawn;
		TSoftObjectPtr<class UClass>   Class;
	} params;

	params.Spawn = Spawn;
	params.Class = Class;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DropPod_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_1__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_DropPod_Base_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_1__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_1__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_DropPod_Base_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_1__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_2__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_DropPod_Base_C::Timeline_2__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_2__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_2__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_DropPod_Base_C::Timeline_2__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_2__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_3__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_DropPod_Base_C::Timeline_3__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_3__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_3__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_DropPod_Base_C::Timeline_3__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_3__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_4__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_DropPod_Base_C::Timeline_4__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_4__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_4__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_DropPod_Base_C::Timeline_4__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_4__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_0__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_DropPod_Base_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_0__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_0__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_DropPod_Base_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_0__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_DropPod_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.ReceiveActorBeginOverlap
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_DropPod_Base_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.ReceiveActorBeginOverlap");

	struct
	{
		class AActor*                  OtherActor;
	} params;

	params.OtherActor = OtherActor;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.ReceiveActorEndOverlap
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_DropPod_Base_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.ReceiveActorEndOverlap");

	struct
	{
		class AActor*                  OtherActor;
	} params;

	params.OtherActor = OtherActor;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.StartDeparture
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DropPod_Base_C::StartDeparture()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.StartDeparture");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.OnDroppodImpact
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_DropPod_Base_C::OnDroppodImpact()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.OnDroppodImpact");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.Start Donkey Unload Sequence
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DropPod_Base_C::Start_Donkey_Unload_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.Start Donkey Unload Sequence");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.Unload Donkey
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DropPod_Base_C::Unload_Donkey()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.Unload Donkey");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.OnDrillingStarted
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_DropPod_Base_C::OnDrillingStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.OnDrillingStarted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.Load Donkey
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DropPod_Base_C::Load_Donkey()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.Load Donkey");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.Fade to Black
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DropPod_Base_C::Fade_to_Black()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.Fade to Black");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.BndEvt__DwarfChecker_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bFromSweep                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void ABP_DropPod_Base_C::BndEvt__DwarfChecker_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.BndEvt__DwarfChecker_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

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


// Function BP_DropPod_Base.BP_DropPod_Base_C.BndEvt__DwarfChecker_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_DropPod_Base_C::BndEvt__DwarfChecker_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.BndEvt__DwarfChecker_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
	} params;

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.BndEvt__KillSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bFromSweep                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void ABP_DropPod_Base_C::BndEvt__KillSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.BndEvt__KillSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

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


// Function BP_DropPod_Base.BP_DropPod_Base_C.DrillRotate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DropPod_Base_C::DrillRotate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.DrillRotate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.OnCharacterEnter
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_DropPod_Base_C::OnCharacterEnter(class APlayerCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.OnCharacterEnter");

	struct
	{
		class APlayerCharacter*        Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.OnCharacterExit
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_DropPod_Base_C::OnCharacterExit(class APlayerCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.OnCharacterExit");

	struct
	{
		class APlayerCharacter*        Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.SetMuleInstance
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ADonkeyCharacter*        Donkey                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_DropPod_Base_C::SetMuleInstance(class ADonkeyCharacter* Donkey)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.SetMuleInstance");

	struct
	{
		class ADonkeyCharacter*        Donkey;
	} params;

	params.Donkey = Donkey;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Base.BP_DropPod_Base_C.ExecuteUbergraph_BP_DropPod_Base
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_DropPod_Base_C::ExecuteUbergraph_BP_DropPod_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.ExecuteUbergraph_BP_DropPod_Base");

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
