#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ENE_Spider_Tank_Boss_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C
// 0x005E (0x05C0 - 0x0562)
class AENE_Spider_Tank_Boss_C : public AENE_SpiderBase_Large_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0562(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0568(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UDestructibleSubHealthComponent*             DestructibleSubHealth;                                    // 0x0570(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UDestructibleComponent*                      Armor_Back_TankBoss_DM;                                   // 0x0578(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        Armor_Back_TankBoss;                                      // 0x0580(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCapsuleComponent*                           Capsule;                                                  // 0x0588(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPointLightComponent*                        Light_BackBody;                                           // 0x0590(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              LightIntensityCache;                                      // 0x0598(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               TankArmorIntact;                                          // 0x059C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x059D(0x0003) MISSED OFFSET
	class UMaterialInstanceDynamic*                    ArmorBackDynamicMaterial;                                 // 0x05A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              HitGlow;                                                  // 0x05A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x05AC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnArmorDestroyed;                                         // 0x05B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ENE_Spider_Tank_Boss.ENE_Spider_Tank_Boss_C");
		return ptr;
	}


	float GetEnemyDamageResistance();
	void OnRep_TankArmorIntact();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void WaitForHit();
	void BndEvt__Armor_Back_TankBoss_DM_K2Node_ComponentBoundEvent_0_ComponentFractureSignature__DelegateSignature(const struct FVector& HitPoint, const struct FVector& HitDirection);
	void PlayEnragedAnimation();
	void BndEvt__DestructibleSubHealth_K2Node_ComponentBoundEvent_0_SubHealthDestroyed__DelegateSignature(class UDestructibleSubHealthComponent* subHealth);
	void BndEvt__DestructibleSubHealth_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float Amount);
	void OnRagdoll();
	void ExecuteUbergraph_ENE_Spider_Tank_Boss(int EntryPoint);
	void OnArmorDestroyed__DelegateSignature(float EnrageDuration);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
