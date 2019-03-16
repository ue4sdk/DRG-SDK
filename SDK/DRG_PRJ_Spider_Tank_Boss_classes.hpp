#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_PRJ_Spider_Tank_Boss_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PRJ_Spider_Tank_Boss.PRJ_Spider_Tank_Boss_C
// 0x0034 (0x03EC - 0x03B8)
class APRJ_Spider_Tank_Boss_C : public AProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UDamageComponent*                            Damage;                                                   // 0x03C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UProjectileExplosion*                        ProjectileExplosion;                                      // 0x03C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    ParticleComponent;                                        // 0x03D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAudioComponent*                             Audio;                                                    // 0x03D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x03E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              LightIntensity;                                           // 0x03E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass PRJ_Spider_Tank_Boss.PRJ_Spider_Tank_Boss_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnImpacted(const struct FHitResult& HitResult);
	void ExecuteUbergraph_PRJ_Spider_Tank_Boss(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
