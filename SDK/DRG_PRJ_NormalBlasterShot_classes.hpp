#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_PRJ_NormalBlasterShot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PRJ_NormalBlasterShot.PRJ_NormalBlasterShot_C
// 0x002C (0x03E4 - 0x03B8)
class APRJ_NormalBlasterShot_C : public AProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UProjectileExplosion*                        ProjectileExplosion;                                      // 0x03C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UDamageComponent*                            Damage;                                                   // 0x03C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x03D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x03D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                MaxBounces;                                               // 0x03E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass PRJ_NormalBlasterShot.PRJ_NormalBlasterShot_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnImpacted(const struct FHitResult& HitResult);
	void MakeBouncy();
	void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	void ExecuteUbergraph_PRJ_NormalBlasterShot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
