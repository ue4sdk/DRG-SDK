// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_Bulkhead01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Bulkhead01.BP_Bulkhead01_C.HasPlayersNearby
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           AnyPlayers                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Bulkhead01_C::HasPlayersNearby(bool* AnyPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bulkhead01.BP_Bulkhead01_C.HasPlayersNearby");

	struct
	{
		bool                           AnyPlayers;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AnyPlayers != nullptr)
		*AnyPlayers = params.AnyPlayers;
}


// Function BP_Bulkhead01.BP_Bulkhead01_C.OnRep_IsOpen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Bulkhead01_C::OnRep_IsOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bulkhead01.BP_Bulkhead01_C.OnRep_IsOpen");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Bulkhead01.BP_Bulkhead01_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Bulkhead01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bulkhead01.BP_Bulkhead01_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Bulkhead01.BP_Bulkhead01_C.Driver__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_Bulkhead01_C::Driver__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bulkhead01.BP_Bulkhead01_C.Driver__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Bulkhead01.BP_Bulkhead01_C.Driver__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_Bulkhead01_C::Driver__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bulkhead01.BP_Bulkhead01_C.Driver__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Bulkhead01.BP_Bulkhead01_C.TL_Open__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_Bulkhead01_C::TL_Open__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bulkhead01.BP_Bulkhead01_C.TL_Open__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Bulkhead01.BP_Bulkhead01_C.TL_Open__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_Bulkhead01_C::TL_Open__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bulkhead01.BP_Bulkhead01_C.TL_Open__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Bulkhead01.BP_Bulkhead01_C.BndEvt__TriggerBox_K2Node_ComponentBoundEvent_222_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bFromSweep                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void ABP_Bulkhead01_C::BndEvt__TriggerBox_K2Node_ComponentBoundEvent_222_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bulkhead01.BP_Bulkhead01_C.BndEvt__TriggerBox_K2Node_ComponentBoundEvent_222_ComponentBeginOverlapSignature__DelegateSignature");

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


// Function BP_Bulkhead01.BP_Bulkhead01_C.BndEvt__TriggerBox_K2Node_ComponentBoundEvent_233_ComponentEndOverlapSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Bulkhead01_C::BndEvt__TriggerBox_K2Node_ComponentBoundEvent_233_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bulkhead01.BP_Bulkhead01_C.BndEvt__TriggerBox_K2Node_ComponentBoundEvent_233_ComponentEndOverlapSignature__DelegateSignature");

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


// Function BP_Bulkhead01.BP_Bulkhead01_C.Open
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Bulkhead01_C::Open()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bulkhead01.BP_Bulkhead01_C.Open");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Bulkhead01.BP_Bulkhead01_C.Close
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Bulkhead01_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bulkhead01.BP_Bulkhead01_C.Close");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Bulkhead01.BP_Bulkhead01_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Bulkhead01_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bulkhead01.BP_Bulkhead01_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Bulkhead01.BP_Bulkhead01_C.ExecuteUbergraph_BP_Bulkhead01
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Bulkhead01_C::ExecuteUbergraph_BP_Bulkhead01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bulkhead01.BP_Bulkhead01_C.ExecuteUbergraph_BP_Bulkhead01");

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
