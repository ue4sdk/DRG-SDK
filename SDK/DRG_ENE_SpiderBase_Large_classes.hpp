#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ENE_SpiderBase_Large_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ENE_SpiderBase_Large.ENE_SpiderBase_Large_C
// 0x0062 (0x0562 - 0x0500)
class AENE_SpiderBase_Large_C : public AENE_PF_SpiderBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0500(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        DropShadow;                                               // 0x0508(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              Timeline_1_NewTrack_0_DF5913644CC13B7F1AD8C9A8CCB1F5DF;   // 0x0510(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_DF5913644CC13B7F1AD8C9A8CCB1F5DF;   // 0x0514(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0515(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x0518(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              Timeline_0_0_NewTrack_0_42965729460DC9FD5BB18F8640F0F5A0; // 0x0520(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0_0__Direction_42965729460DC9FD5BB18F8640F0F5A0; // 0x0524(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0525(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_0_1;                                             // 0x0528(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              RagdollImpulseSpeed;                                      // 0x0530(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0534(0x0004) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterials;                                         // 0x0538(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UParticleSystem*                             HeadshotParticle;                                         // 0x0548(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      FrontLegGib;                                              // 0x0550(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  HeadGibSound;                                             // 0x0558(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               DuckSound;                                                // 0x0560(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<ESpider_DeathType>                     DeathType;                                                // 0x0561(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ENE_SpiderBase_Large.ENE_SpiderBase_Large_C");
		return ptr;
	}


	void SetDeathType(TEnumAsByte<ESpider_DeathType> DeathType);
	void OnRep_DeathType();
	void CreateDynamicMaterials();
	void SpawnLeg(const struct FName& InSocketName);
	void PlayDuckingSound();
	void SetRagdollImpulse(class UDamageClass* DamageClass, class UFSDPhysicalMaterial* PhysMat);
	void UserConstructionScript();
	void Timeline_0_0__FinishedFunc();
	void Timeline_0_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void OnRagdoll();
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSigDetailed__DelegateSignature(class UHealthComponent* HealthComponent, float damageAmount, class UDamageClass* DamageClass, class AActor* damageCause, class AController* instigator, class UFSDPhysicalMaterial* PhysicalMaterial);
	void OnDeathBase();
	void Spawn_Headshot_Gibs();
	void ChangeVisibility(bool bNewVisibility);
	void SpawnLegGib();
	void StartFadeBody();
	void SpawnLegGib_Local();
	void Play_Body_Death_Effects();
	void OnFrozen();
	void OnUnFrozen();
	void Play_Burn_Death();
	void StartDissolve();
	void Play_Frozen_Death();
	void StartBurn();
	void SendRagdollImpulse(const struct FVector& Impulse);
	void ExecuteUbergraph_ENE_SpiderBase_Large(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
