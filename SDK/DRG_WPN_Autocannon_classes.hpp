#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WPN_Autocannon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WPN_Autocannon.WPN_Autocannon_C
// 0x0068 (0x0798 - 0x0730)
class AWPN_Autocannon_C : public AAutoCannon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0730(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UDamageComponent*                            Damage;                                                   // 0x0738(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             SensorPoint;                                              // 0x0740(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UImpactComponent*                            Impact;                                                   // 0x0748(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x0750(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFirstPersonParticleSystemComponent*         FirstPersonParticleSystem;                                // 0x0758(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFirstPersonPointLightComponent*             Light_MuzzleFlash;                                        // 0x0760(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFirstPersonWidgetComponent*                 Widget_Overheat;                                          // 0x0768(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0770(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFirstPersonWidgetComponent*                 Widget_Ammo;                                              // 0x0778(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCrosshairAggregator*                        CrosshairAggregator;                                      // 0x0780(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UHitscanComponent*                           HitScan;                                                  // 0x0788(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              SplashDamage;                                             // 0x0790(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SplashRadius;                                             // 0x0794(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass WPN_Autocannon.WPN_Autocannon_C");
		return ptr;
	}


	void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Receive_IsFiringChanged(bool NewValue);
	void BndEvt__Impact_K2Node_ComponentBoundEvent_0_HightAccelerationSignature__DelegateSignature();
	void RecieveEquipped();
	void RecieveUnequipped();
	void ExecuteUbergraph_WPN_Autocannon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
