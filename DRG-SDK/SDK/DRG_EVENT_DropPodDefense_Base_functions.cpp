// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_EVENT_DropPodDefense_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.OnRep_DefendingPlayerCount
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEVENT_DropPodDefense_Base_C::OnRep_DefendingPlayerCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.OnRep_DefendingPlayerCount");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.UpdateDefenderCount
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEVENT_DropPodDefense_Base_C::UpdateDefenderCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.UpdateDefenderCount");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.GetDefenderBonus
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            DefendingPlayers               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float AEVENT_DropPodDefense_Base_C::GetDefenderBonus(int DefendingPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.GetDefenderBonus");

	struct
	{
		int                            DefendingPlayers;
		float                          ReturnValue;
	} params;

	params.DefendingPlayers = DefendingPlayers;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.AnyPlayersDefending
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AEVENT_DropPodDefense_Base_C::AnyPlayersDefending()
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.AnyPlayersDefending");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.OnRep_Progress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEVENT_DropPodDefense_Base_C::OnRep_Progress()
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.OnRep_Progress");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEVENT_DropPodDefense_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AEVENT_DropPodDefense_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AEVENT_DropPodDefense_Base_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bFromSweep                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void AEVENT_DropPodDefense_Base_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

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


// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AEVENT_DropPodDefense_Base_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

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


// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.EventSucceded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEVENT_DropPodDefense_Base_C::EventSucceded()
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.EventSucceded");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.EventFailed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEVENT_DropPodDefense_Base_C::EventFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.EventFailed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.ExecuteUbergraph_EVENT_DropPodDefense_Base
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AEVENT_DropPodDefense_Base_C::ExecuteUbergraph_EVENT_DropPodDefense_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.ExecuteUbergraph_EVENT_DropPodDefense_Base");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.DefenderCountUpdated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            DefenderCount                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AEVENT_DropPodDefense_Base_C::DefenderCountUpdated__DelegateSignature(int DefenderCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.DefenderCountUpdated__DelegateSignature");

	struct
	{
		int                            DefenderCount;
	} params;

	params.DefenderCount = DefenderCount;

	UObject::ProcessEvent(fn, &params);
}


// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.ProgressUpdated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          NewProgress                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AEVENT_DropPodDefense_Base_C::ProgressUpdated__DelegateSignature(float NewProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.ProgressUpdated__DelegateSignature");

	struct
	{
		float                          NewProgress;
	} params;

	params.NewProgress = NewProgress;

	UObject::ProcessEvent(fn, &params);
}


// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.DefendFailed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEVENT_DropPodDefense_Base_C::DefendFailed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.DefendFailed__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.DefendSucceded__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEVENT_DropPodDefense_Base_C::DefendSucceded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.DefendSucceded__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
