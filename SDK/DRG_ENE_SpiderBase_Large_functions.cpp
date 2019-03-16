// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ENE_SpiderBase_Large_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.SetDeathType
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ESpider_DeathType> DeathType                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AENE_SpiderBase_Large_C::SetDeathType(TEnumAsByte<ESpider_DeathType> DeathType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.SetDeathType");

	struct
	{
		TEnumAsByte<ESpider_DeathType> DeathType;
	} params;

	params.DeathType = DeathType;

	UObject::ProcessEvent(fn, &params);
}


// Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.OnRep_DeathType
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AENE_SpiderBase_Large_C::OnRep_DeathType()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.OnRep_DeathType");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.CreateDynamicMaterials
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AENE_SpiderBase_Large_C::CreateDynamicMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.CreateDynamicMaterials");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.SpawnLeg
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   InSocketName                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AENE_SpiderBase_Large_C::SpawnLeg(const struct FName& InSocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.SpawnLeg");

	struct
	{
		struct FName                   InSocketName;
	} params;

	params.InSocketName = InSocketName;

	UObject::ProcessEvent(fn, &params);
}


// Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.PlayDuckingSound
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AENE_SpiderBase_Large_C::PlayDuckingSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.PlayDuckingSound");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.SetRagdollImpulse
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDamageClass*            DamageClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFSDPhysicalMaterial*    PhysMat                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AENE_SpiderBase_Large_C::SetRagdollImpulse(class UDamageClass* DamageClass, class UFSDPhysicalMaterial* PhysMat)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.SetRagdollImpulse");

	struct
	{
		class UDamageClass*            DamageClass;
		class UFSDPhysicalMaterial*    PhysMat;
	} params;

	params.DamageClass = DamageClass;
	params.PhysMat = PhysMat;

	UObject::ProcessEvent(fn, &params);
}


// Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AENE_SpiderBase_Large_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.Timeline_0_0__FinishedFunc
// (FUNC_BlueprintEvent)

void AENE_SpiderBase_Large_C::Timeline_0_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.Timeline_0_0__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.Timeline_0_0__UpdateFunc
// (FUNC_BlueprintEvent)

void AENE_SpiderBase_Large_C::Timeline_0_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.Timeline_0_0__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.Timeline_1__FinishedFunc
// (FUNC_BlueprintEvent)

void AENE_SpiderBase_Large_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.Timeline_1__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.Timeline_1__UpdateFunc
// (FUNC_BlueprintEvent)

void AENE_SpiderBase_Large_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.Timeline_1__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.OnRagdoll
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AENE_SpiderBase_Large_C::OnRagdoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.OnRagdoll");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSigDetailed__DelegateSignature
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintEvent)
// Parameters:
// class UHealthComponent*        HealthComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// float                          damageAmount                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UDamageClass*            DamageClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  damageCause                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AController*             instigator                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFSDPhysicalMaterial*    PhysicalMaterial               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AENE_SpiderBase_Large_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSigDetailed__DelegateSignature(class UHealthComponent* HealthComponent, float damageAmount, class UDamageClass* DamageClass, class AActor* damageCause, class AController* instigator, class UFSDPhysicalMaterial* PhysicalMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSigDetailed__DelegateSignature");

	struct
	{
		class UHealthComponent*        HealthComponent;
		float                          damageAmount;
		class UDamageClass*            DamageClass;
		class AActor*                  damageCause;
		class AController*             instigator;
		class UFSDPhysicalMaterial*    PhysicalMaterial;
	} params;

	params.HealthComponent = HealthComponent;
	params.damageAmount = damageAmount;
	params.DamageClass = DamageClass;
	params.damageCause = damageCause;
	params.instigator = instigator;
	params.PhysicalMaterial = PhysicalMaterial;

	UObject::ProcessEvent(fn, &params);
}


// Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.OnDeathBase
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AENE_SpiderBase_Large_C::OnDeathBase()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.OnDeathBase");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.Spawn Headshot Gibs
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AENE_SpiderBase_Large_C::Spawn_Headshot_Gibs()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.Spawn Headshot Gibs");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.ChangeVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bNewVisibility                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AENE_SpiderBase_Large_C::ChangeVisibility(bool bNewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.ChangeVisibility");

	struct
	{
		bool                           bNewVisibility;
	} params;

	params.bNewVisibility = bNewVisibility;

	UObject::ProcessEvent(fn, &params);
}


// Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.SpawnLegGib
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AENE_SpiderBase_Large_C::SpawnLegGib()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.SpawnLegGib");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.StartFadeBody
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AENE_SpiderBase_Large_C::StartFadeBody()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.StartFadeBody");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.SpawnLegGib_Local
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AENE_SpiderBase_Large_C::SpawnLegGib_Local()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.SpawnLegGib_Local");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.Play Body Death Effects
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AENE_SpiderBase_Large_C::Play_Body_Death_Effects()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.Play Body Death Effects");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.OnFrozen
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AENE_SpiderBase_Large_C::OnFrozen()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.OnFrozen");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.OnUnFrozen
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AENE_SpiderBase_Large_C::OnUnFrozen()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.OnUnFrozen");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.Play Burn Death
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AENE_SpiderBase_Large_C::Play_Burn_Death()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.Play Burn Death");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.StartDissolve
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AENE_SpiderBase_Large_C::StartDissolve()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.StartDissolve");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.Play Frozen Death
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AENE_SpiderBase_Large_C::Play_Frozen_Death()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.Play Frozen Death");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.StartBurn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AENE_SpiderBase_Large_C::StartBurn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.StartBurn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.SendRagdollImpulse
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Impulse                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AENE_SpiderBase_Large_C::SendRagdollImpulse(const struct FVector& Impulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.SendRagdollImpulse");

	struct
	{
		struct FVector                 Impulse;
	} params;

	params.Impulse = Impulse;

	UObject::ProcessEvent(fn, &params);
}


// Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.ExecuteUbergraph_ENE_SpiderBase_Large
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AENE_SpiderBase_Large_C::ExecuteUbergraph_ENE_SpiderBase_Large(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_SpiderBase_Large.ENE_SpiderBase_Large_C.ExecuteUbergraph_ENE_SpiderBase_Large");

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
