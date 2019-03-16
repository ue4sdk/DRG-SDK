#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_BaseFlare_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ITM_BaseFlare.ITM_BaseFlare_C
// 0x006D (0x03ED - 0x0380)
class AITM_BaseFlare_C : public AFlare
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UPointLightComponent*                        Light_AfterGlow;                                          // 0x0388(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPointLightComponent*                        Light_NoShadow;                                           // 0x0390(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USpotLightComponent*                         SpotLight_Shadow_4;                                       // 0x0398(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USpotLightComponent*                         SpotLight_Shadow_3;                                       // 0x03A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USpotLightComponent*                         SpotLight_Shadow_2;                                       // 0x03A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UUpgradableGearComponent*                    UpgradableGear;                                           // 0x03B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x03B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x03C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x03C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              Timeline_0_BrightnessShadows_14DB2CD947ED9EE06017768CF842D625;// 0x03D0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Timeline_0_Brightness_14DB2CD947ED9EE06017768CF842D625;   // 0x03D4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_14DB2CD947ED9EE06017768CF842D625;   // 0x03D8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03D9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x03E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              BaseIntensity;                                            // 0x03E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               CanTriggerSound;                                          // 0x03EC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ITM_BaseFlare.ITM_BaseFlare_C");
		return ptr;
	}


	void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats);
	void UpdateShadowRadius();
	void StartFadeOut(float* Time);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void OnFlareExtinguish();
	void OnFlareIgnite();
	void BndEvt__Box_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnUpdateShadowRadius();
	void ExecuteUbergraph_ITM_BaseFlare(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
