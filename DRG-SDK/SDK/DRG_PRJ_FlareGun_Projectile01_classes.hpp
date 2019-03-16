#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_PRJ_FlareGun_Projectile01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C
// 0x0094 (0x045C - 0x03C8)
class APRJ_FlareGun_Projectile01_C : public AFlareGunProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USpotLightComponent*                         SpotLight_Shadow_4;                                       // 0x03D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USpotLightComponent*                         SpotLight_Shadow_3;                                       // 0x03D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USpotLightComponent*                         SpotLight_Shadow_2;                                       // 0x03E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTerrainDetectComponent*                     TerrainDetect;                                            // 0x03E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x03F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x03F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPointLightComponent*                        PointLight_Dead;                                          // 0x0400(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        mesh_front;                                               // 0x0408(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        mesh_light;                                               // 0x0410(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPointLightComponent*                        PointLight_NoShadow;                                      // 0x0418(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0420(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              Light_Anim_ShadowMultiplier_7569FDBD44600A7270E9429A8EC6FB81;// 0x0428(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Light_Anim_NewTrack_0_7569FDBD44600A7270E9429A8EC6FB81;   // 0x042C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Light_Anim__Direction_7569FDBD44600A7270E9429A8EC6FB81;   // 0x0430(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0431(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Light_Anim;                                               // 0x0438(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              LightIntensity_Point;                                     // 0x0440(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Damage;                                                   // 0x0444(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FScaledEffect                               DamageEffect;                                             // 0x0448(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	float                                              LightIntensity_Spot;                                      // 0x0458(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C");
		return ptr;
	}


	void UpdateShadowRadius();
	void StartFadeOut(float* Time);
	void GetHealthBaseComponentFromActor(class AActor* Actor, class UHealthComponentBase** Health);
	void FallToGround();
	void UserConstructionScript();
	void Light_Anim__FinishedFunc();
	void Light_Anim__UpdateFunc();
	void ReceiveBeginPlay();
	void OnImpacted(const struct FHitResult& HitResult);
	void On_Destroyed(class AActor* DestroyedActor);
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
	void OnDroppodImpact(class AMiningPod* DropPod);
	void HideAll();
	void OnFlareExtinguish();
	void OnUpdateShadowRadius();
	void ReleaseFlare();
	void ExecuteUbergraph_PRJ_FlareGun_Projectile01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
