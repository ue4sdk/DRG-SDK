// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ENE_Spider_Tank_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ENE_Spider_Tank.ENE_Spider_Tank_C.BeginSpecialAttack
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            AttackMontage                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AENE_Spider_Tank_C::BeginSpecialAttack(class UAnimMontage** AttackMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Spider_Tank.ENE_Spider_Tank_C.BeginSpecialAttack");

	struct
	{
		class UAnimMontage*            AttackMontage;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AttackMontage != nullptr)
		*AttackMontage = params.AttackMontage;
}


// Function ENE_Spider_Tank.ENE_Spider_Tank_C.PopFlameDot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AENE_Spider_Tank_C::PopFlameDot(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Spider_Tank.ENE_Spider_Tank_C.PopFlameDot");

	struct
	{
		class AActor*                  Target;
	} params;

	params.Target = Target;

	UObject::ProcessEvent(fn, &params);
}


// Function ENE_Spider_Tank.ENE_Spider_Tank_C.PushFlameDoT
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AENE_Spider_Tank_C::PushFlameDoT(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Spider_Tank.ENE_Spider_Tank_C.PushFlameDoT");

	struct
	{
		class AActor*                  Target;
	} params;

	params.Target = Target;

	UObject::ProcessEvent(fn, &params);
}


// Function ENE_Spider_Tank.ENE_Spider_Tank_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AENE_Spider_Tank_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Spider_Tank.ENE_Spider_Tank_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_Spider_Tank.ENE_Spider_Tank_C.Timeline_1_0__FinishedFunc
// (FUNC_BlueprintEvent)

void AENE_Spider_Tank_C::Timeline_1_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Spider_Tank.ENE_Spider_Tank_C.Timeline_1_0__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_Spider_Tank.ENE_Spider_Tank_C.Timeline_1_0__UpdateFunc
// (FUNC_BlueprintEvent)

void AENE_Spider_Tank_C::Timeline_1_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Spider_Tank.ENE_Spider_Tank_C.Timeline_1_0__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_Spider_Tank.ENE_Spider_Tank_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AENE_Spider_Tank_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Spider_Tank.ENE_Spider_Tank_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_Spider_Tank.ENE_Spider_Tank_C.OnRagdoll
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AENE_Spider_Tank_C::OnRagdoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Spider_Tank.ENE_Spider_Tank_C.OnRagdoll");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_Spider_Tank.ENE_Spider_Tank_C.OnDeathBase
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AENE_Spider_Tank_C::OnDeathBase()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Spider_Tank.ENE_Spider_Tank_C.OnDeathBase");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_Spider_Tank.ENE_Spider_Tank_C.StartFadeBody
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AENE_Spider_Tank_C::StartFadeBody()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Spider_Tank.ENE_Spider_Tank_C.StartFadeBody");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_Spider_Tank.ENE_Spider_Tank_C.SpecialAttackFlow
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AENE_Spider_Tank_C::SpecialAttackFlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Spider_Tank.ENE_Spider_Tank_C.SpecialAttackFlow");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_Spider_Tank.ENE_Spider_Tank_C.BndEvt__Capsule1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bFromSweep                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void AENE_Spider_Tank_C::BndEvt__Capsule1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Spider_Tank.ENE_Spider_Tank_C.BndEvt__Capsule1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

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


// Function ENE_Spider_Tank.ENE_Spider_Tank_C.BndEvt__Capsule1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AENE_Spider_Tank_C::BndEvt__Capsule1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Spider_Tank.ENE_Spider_Tank_C.BndEvt__Capsule1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

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


// Function ENE_Spider_Tank.ENE_Spider_Tank_C.CancelSpecialAttack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AENE_Spider_Tank_C::CancelSpecialAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Spider_Tank.ENE_Spider_Tank_C.CancelSpecialAttack");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_Spider_Tank.ENE_Spider_Tank_C.ExecuteUbergraph_ENE_Spider_Tank
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AENE_Spider_Tank_C::ExecuteUbergraph_ENE_Spider_Tank(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Spider_Tank.ENE_Spider_Tank_C.ExecuteUbergraph_ENE_Spider_Tank");

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
