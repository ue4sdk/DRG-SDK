// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_FreezeCloud_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FreezeCloud_Base.BP_FreezeCloud_Base_C.PushMixAtDistance
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Max_Distance                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Min_Distance                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_FreezeCloud_Base_C::PushMixAtDistance(float Max_Distance, float Min_Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreezeCloud_Base.BP_FreezeCloud_Base_C.PushMixAtDistance");

	struct
	{
		float                          Max_Distance;
		float                          Min_Distance;
	} params;

	params.Max_Distance = Max_Distance;
	params.Min_Distance = Min_Distance;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_FreezeCloud_Base.BP_FreezeCloud_Base_C.OnRep_Actice
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_FreezeCloud_Base_C::OnRep_Actice()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreezeCloud_Base.BP_FreezeCloud_Base_C.OnRep_Actice");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_FreezeCloud_Base.BP_FreezeCloud_Base_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_FreezeCloud_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreezeCloud_Base.BP_FreezeCloud_Base_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_FreezeCloud_Base.BP_FreezeCloud_Base_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_FreezeCloud_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreezeCloud_Base.BP_FreezeCloud_Base_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_FreezeCloud_Base.BP_FreezeCloud_Base_C.BndEvt__StatusEffectTrigger_K2Node_ComponentBoundEvent_0_EffectTriggeredDelegate__DelegateSignature
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  targetActor                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           entered                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_FreezeCloud_Base_C::BndEvt__StatusEffectTrigger_K2Node_ComponentBoundEvent_0_EffectTriggeredDelegate__DelegateSignature(class AActor* targetActor, bool entered)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreezeCloud_Base.BP_FreezeCloud_Base_C.BndEvt__StatusEffectTrigger_K2Node_ComponentBoundEvent_0_EffectTriggeredDelegate__DelegateSignature");

	struct
	{
		class AActor*                  targetActor;
		bool                           entered;
	} params;

	params.targetActor = targetActor;
	params.entered = entered;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_FreezeCloud_Base.BP_FreezeCloud_Base_C.ActiveWeakeningEffect
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_FreezeCloud_Base_C::ActiveWeakeningEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreezeCloud_Base.BP_FreezeCloud_Base_C.ActiveWeakeningEffect");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_FreezeCloud_Base.BP_FreezeCloud_Base_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bFromSweep                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void ABP_FreezeCloud_Base_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreezeCloud_Base.BP_FreezeCloud_Base_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

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


// Function BP_FreezeCloud_Base.BP_FreezeCloud_Base_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_FreezeCloud_Base_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreezeCloud_Base.BP_FreezeCloud_Base_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

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


// Function BP_FreezeCloud_Base.BP_FreezeCloud_Base_C.ExecuteUbergraph_BP_FreezeCloud_Base
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_FreezeCloud_Base_C::ExecuteUbergraph_BP_FreezeCloud_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FreezeCloud_Base.BP_FreezeCloud_Base_C.ExecuteUbergraph_BP_FreezeCloud_Base");

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
