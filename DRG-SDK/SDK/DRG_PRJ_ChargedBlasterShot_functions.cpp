// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_PRJ_ChargedBlasterShot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.OnRep_AoEEnabled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRJ_ChargedBlasterShot_C::OnRep_AoEEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.OnRep_AoEEnabled");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRJ_ChargedBlasterShot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.Grow Time Line__FinishedFunc
// (FUNC_BlueprintEvent)

void APRJ_ChargedBlasterShot_C::Grow_Time_Line__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.Grow Time Line__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.Grow Time Line__UpdateFunc
// (FUNC_BlueprintEvent)

void APRJ_ChargedBlasterShot_C::Grow_Time_Line__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.Grow Time Line__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UHealthComponentBase*    HealthComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void APRJ_ChargedBlasterShot_C::BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature");

	struct
	{
		class UHealthComponentBase*    HealthComponent;
	} params;

	params.HealthComponent = HealthComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.BndEvt__AoEDamageSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bFromSweep                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void APRJ_ChargedBlasterShot_C::BndEvt__AoEDamageSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.BndEvt__AoEDamageSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

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


// Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.OnAoEDamageEnabled
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void APRJ_ChargedBlasterShot_C::OnAoEDamageEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.OnAoEDamageEnabled");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APRJ_ChargedBlasterShot_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.OnImpacted
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void APRJ_ChargedBlasterShot_C::OnImpacted(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.OnImpacted");

	struct
	{
		struct FHitResult              HitResult;
	} params;

	params.HitResult = HitResult;

	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void APRJ_ChargedBlasterShot_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.ExecuteUbergraph_PRJ_ChargedBlasterShot
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APRJ_ChargedBlasterShot_C::ExecuteUbergraph_PRJ_ChargedBlasterShot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ChargedBlasterShot.PRJ_ChargedBlasterShot_C.ExecuteUbergraph_PRJ_ChargedBlasterShot");

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
