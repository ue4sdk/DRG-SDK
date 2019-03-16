// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ENE_Spider_Tank_Boss_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.GetEnemyDamageResistance
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float AENE_Spider_Tank_Boss_C::GetEnemyDamageResistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.GetEnemyDamageResistance");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.OnRep_TankArmorIntact
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AENE_Spider_Tank_Boss_C::OnRep_TankArmorIntact()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.OnRep_TankArmorIntact");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AENE_Spider_Tank_Boss_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AENE_Spider_Tank_Boss_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.WaitForHit
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AENE_Spider_Tank_Boss_C::WaitForHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.WaitForHit");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.BndEvt__Armor_Back_TankBoss_DM_K2Node_ComponentBoundEvent_0_ComponentFractureSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 HitPoint                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 HitDirection                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void AENE_Spider_Tank_Boss_C::BndEvt__Armor_Back_TankBoss_DM_K2Node_ComponentBoundEvent_0_ComponentFractureSignature__DelegateSignature(const struct FVector& HitPoint, const struct FVector& HitDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.BndEvt__Armor_Back_TankBoss_DM_K2Node_ComponentBoundEvent_0_ComponentFractureSignature__DelegateSignature");

	struct
	{
		struct FVector                 HitPoint;
		struct FVector                 HitDirection;
	} params;

	params.HitPoint = HitPoint;
	params.HitDirection = HitDirection;

	UObject::ProcessEvent(fn, &params);
}


// Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.PlayEnragedAnimation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AENE_Spider_Tank_Boss_C::PlayEnragedAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.PlayEnragedAnimation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.BndEvt__DestructibleSubHealth_K2Node_ComponentBoundEvent_0_SubHealthDestroyed__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UDestructibleSubHealthComponent* subHealth                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void AENE_Spider_Tank_Boss_C::BndEvt__DestructibleSubHealth_K2Node_ComponentBoundEvent_0_SubHealthDestroyed__DelegateSignature(class UDestructibleSubHealthComponent* subHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.BndEvt__DestructibleSubHealth_K2Node_ComponentBoundEvent_0_SubHealthDestroyed__DelegateSignature");

	struct
	{
		class UDestructibleSubHealthComponent* subHealth;
	} params;

	params.subHealth = subHealth;

	UObject::ProcessEvent(fn, &params);
}


// Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.BndEvt__DestructibleSubHealth_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AENE_Spider_Tank_Boss_C::BndEvt__DestructibleSubHealth_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.BndEvt__DestructibleSubHealth_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature");

	struct
	{
		float                          Amount;
	} params;

	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);
}


// Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.OnRagdoll
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AENE_Spider_Tank_Boss_C::OnRagdoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.OnRagdoll");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.ExecuteUbergraph_ENE_Spider_Tank_Boss
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AENE_Spider_Tank_Boss_C::ExecuteUbergraph_ENE_Spider_Tank_Boss(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.ExecuteUbergraph_ENE_Spider_Tank_Boss");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.OnArmorDestroyed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          EnrageDuration                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AENE_Spider_Tank_Boss_C::OnArmorDestroyed__DelegateSignature(float EnrageDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C.OnArmorDestroyed__DelegateSignature");

	struct
	{
		float                          EnrageDuration;
	} params;

	params.EnrageDuration = EnrageDuration;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
