#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ENE_PF_SpiderBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ENE_PF_SpiderBase.ENE_PF_SpiderBase_C
// 0x0078 (0x0500 - 0x0488)
class AENE_PF_SpiderBase_C : public ASpiderEnemy
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0488(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UImpactAudioComponent*                       ImpactAudio;                                              // 0x0490(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPathfinderReactiveTerrainTrackerComponent*  PathfinderReactiveTerrainTracker;                         // 0x0498(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UOutlineComponent*                           Outline;                                                  // 0x04A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UEnemyComponent*                             enemy;                                                    // 0x04A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPawnSensingComponent*                       PawnSensing;                                              // 0x04B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UParticleSystem*                             Death_Particles;                                          // 0x04B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundCue*                                   Death_Sound;                                              // 0x04C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeathDuration;                                            // 0x04C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04CC(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                          // 0x04D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AlertOthersRadius;                                        // 0x04D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MeshScale;                                                // 0x04DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                SpawnMontage;                                             // 0x04E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DecalSize;                                                // 0x04E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04EC(0x0004) MISSED OFFSET
	class USoundCue*                                   FleeSound;                                                // 0x04F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  AlertedScream;                                            // 0x04F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ENE_PF_SpiderBase.ENE_PF_SpiderBase_C");
		return ptr;
	}


	void ChangeVisibility(bool bNewVisibility);
	void AlertNearbySpiders();
	void ActivateSpider(class AActor* Target);
	void InitBlackboard();
	void PlayDeathEffects();
	void UserConstructionScript();
	void OnNotifyEnd_994DB7944B827DB8A3582CB9C470D4B6(const struct FName& NotifyName);
	void OnNotifyBegin_994DB7944B827DB8A3582CB9C470D4B6(const struct FName& NotifyName);
	void OnInterrupted_994DB7944B827DB8A3582CB9C470D4B6(const struct FName& NotifyName);
	void OnBlendOut_994DB7944B827DB8A3582CB9C470D4B6(const struct FName& NotifyName);
	void OnCompleted_994DB7944B827DB8A3582CB9C470D4B6(const struct FName& NotifyName);
	void ReceiveBeginPlay();
	void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_3_SeePawnDelegate__DelegateSignature(class APawn* Pawn);
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
	void OnDeathBase();
	void AlertNearbyEnemies();
	void Spawn();
	void OnFrozen();
	void OnUnFrozen();
	void OnStartedFleeing();
	void PlayFleeSound();
	void ExecuteUbergraph_ENE_PF_SpiderBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
