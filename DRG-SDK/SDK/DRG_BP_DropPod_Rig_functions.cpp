// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_DropPod_Rig_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DropPod_Rig.BP_DropPod_Rig_C.DetectAndStoreBarrels
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DropPod_Rig_C::DetectAndStoreBarrels()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Rig.BP_DropPod_Rig_C.DetectAndStoreBarrels");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Rig.BP_DropPod_Rig_C.ActivePlayerCount
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int ABP_DropPod_Rig_C::ActivePlayerCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Rig.BP_DropPod_Rig_C.ActivePlayerCount");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_DropPod_Rig.BP_DropPod_Rig_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DropPod_Rig_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Rig.BP_DropPod_Rig_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Rig.BP_DropPod_Rig_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_DropPod_Rig_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Rig.BP_DropPod_Rig_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Rig.BP_DropPod_Rig_C.OnMissionSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UGeneratedMission*       Mission                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_DropPod_Rig_C::OnMissionSelected(class UGeneratedMission* Mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Rig.BP_DropPod_Rig_C.OnMissionSelected");

	struct
	{
		class UGeneratedMission*       Mission;
	} params;

	params.Mission = Mission;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Rig.BP_DropPod_Rig_C.OnAllDwavesInsidePod
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           AllInside                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_DropPod_Rig_C::OnAllDwavesInsidePod(bool AllInside)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Rig.BP_DropPod_Rig_C.OnAllDwavesInsidePod");

	struct
	{
		bool                           AllInside;
	} params;

	params.AllInside = AllInside;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Rig.BP_DropPod_Rig_C.OnHostInsidePod
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           isInside                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_DropPod_Rig_C::OnHostInsidePod(bool isInside)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Rig.BP_DropPod_Rig_C.OnHostInsidePod");

	struct
	{
		bool                           isInside;
	} params;

	params.isInside = isInside;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Rig.BP_DropPod_Rig_C.OnCountdownCompleted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DropPod_Rig_C::OnCountdownCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Rig.BP_DropPod_Rig_C.OnCountdownCompleted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Rig.BP_DropPod_Rig_C.BndEvt__DwarfChecker_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bFromSweep                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void ABP_DropPod_Rig_C::BndEvt__DwarfChecker_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Rig.BP_DropPod_Rig_C.BndEvt__DwarfChecker_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

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


// Function BP_DropPod_Rig.BP_DropPod_Rig_C.BndEvt__DwarfChecker_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_DropPod_Rig_C::BndEvt__DwarfChecker_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Rig.BP_DropPod_Rig_C.BndEvt__DwarfChecker_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");

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


// Function BP_DropPod_Rig.BP_DropPod_Rig_C.OnHostTimerChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          newTime                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_DropPod_Rig_C::OnHostTimerChanged(float newTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Rig.BP_DropPod_Rig_C.OnHostTimerChanged");

	struct
	{
		float                          newTime;
	} params;

	params.newTime = newTime;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Rig.BP_DropPod_Rig_C.ExecuteUbergraph_BP_DropPod_Rig
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_DropPod_Rig_C::ExecuteUbergraph_BP_DropPod_Rig(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Rig.BP_DropPod_Rig_C.ExecuteUbergraph_BP_DropPod_Rig");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPod_Rig.BP_DropPod_Rig_C.OnLeaveSpacerig__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DropPod_Rig_C::OnLeaveSpacerig__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPod_Rig.BP_DropPod_Rig_C.OnLeaveSpacerig__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
