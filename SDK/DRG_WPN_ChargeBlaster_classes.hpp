#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WPN_ChargeBlaster_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WPN_ChargeBlaster.WPN_ChargeBlaster_C
// 0x00C8 (0x07E0 - 0x0718)
class AWPN_ChargeBlaster_C : public AChargedWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0718(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UAudioComponent*                             AC_ChargeLevel;                                           // 0x0720(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFirstPersonWidgetComponent*                 Widget_ChargeNew;                                         // 0x0728(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFirstPersonStaticMeshComponent*             FirstPersonStaticMesh2;                                   // 0x0730(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFirstPersonWidgetComponent*                 Widget_Ammo;                                              // 0x0738(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFirstPersonWidgetComponent*                 Widget_HeatNew;                                           // 0x0740(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFirstPersonStaticMeshComponent*             FirstPersonStaticMesh1;                                   // 0x0748(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFirstPersonStaticMeshComponent*             FirstPersonStaticMesh;                                    // 0x0750(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFirstPersonParticleSystemComponent*         FirstPersonParticleSystem_Arc;                            // 0x0758(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFirstPersonParticleSystemComponent*         FirstPersonParticleSystem_Right;                          // 0x0760(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFirstPersonParticleSystemComponent*         FirstPersonParticleSystem_Left;                           // 0x0768(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UChargedProjectileLauncherComponent*         ChargedProjectileLauncher;                                // 0x0770(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPointLightComponent*                        MuzzlePointLight;                                         // 0x0778(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCrosshairAggregator*                        CrosshairAggregator;                                      // 0x0780(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWeaponDisplay_ChargeBlaster_Charge_C*       ChargeUI;                                                 // 0x0788(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWeaponDisplay_ChargeBlaster_Heat_C*         OverheatUI;                                               // 0x0790(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWeaponDisplay_ChargeBlaster_AmmoCounter_C*  AmmoUI;                                                   // 0x0798(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                ChargeLevel;                                              // 0x07A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x07A4(0x0004) MISSED OFFSET
	class UAudioComponent*                             AC_Heat;                                                  // 0x07A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class USoundBase*                                  TemperatureAudio;                                         // 0x07B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  OverheatedAudio;                                          // 0x07B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAudioComponent*                             AC_ChargeLevel_1;                                         // 0x07C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAudioComponent*                             AC_ChargeSpinUp;                                          // 0x07C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    OverheatEmitterInstance;                                  // 0x07D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    SlideParameter;                                           // 0x07D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass WPN_ChargeBlaster.WPN_ChargeBlaster_C");
		return ptr;
	}


	void FadeOutIfValid(class UAudioComponent** AC);
	void HandleHeatAudio();
	void HandleChargeAudio(float charge);
	void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnHeatChanged_Event_1(float charge);
	void ChargeChanged(float charge);
	void RecieveUnequipped();
	void ReceiveOverheatedChanged(bool IsOverheated);
	void ExecuteUbergraph_WPN_ChargeBlaster(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
