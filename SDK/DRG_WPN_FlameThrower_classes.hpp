#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WPN_FlameThrower_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WPN_FlameThrower.WPN_FlameThrower_C
// 0x0068 (0x0838 - 0x07D0)
class AWPN_FlameThrower_C : public AFlameThrowerItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UImpactComponent*                            Impact;                                                   // 0x07D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystemR;                                          // 0x07E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystemL;                                          // 0x07E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPointLightComponent*                        PointLight1;                                              // 0x07F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x07F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFirstPersonPointLightComponent*             FirstPersonPointLight;                                    // 0x0800(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFirstPersonParticleSystemComponent*         FirstPersonParticleSystemR;                               // 0x0808(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFirstPersonParticleSystemComponent*         FirstPersonParticleSystemL;                               // 0x0810(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFirstPersonStaticMeshComponent*             FirstPerson_Gauge;                                        // 0x0818(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFirstPersonWidgetComponent*                 FirstPersonWidget;                                        // 0x0820(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPointLightComponent*                        MuzzleLight;                                              // 0x0828(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCrosshairAggregator*                        CrosshairAggregator;                                      // 0x0830(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass WPN_FlameThrower.WPN_FlameThrower_C");
		return ptr;
	}


	void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void RecieveEquipped();
	void RecieveUnequipped();
	void Receive_ReloadBegin();
	void Receive_ReloadEnd();
	void Recieve_UpdateMeshses(bool IsFirstPerson);
	void AddedToInventory(class APlayerCharacter* ItemOwner);
	void BndEvt__Impact_K2Node_ComponentBoundEvent_0_HightAccelerationSignature__DelegateSignature();
	void ExecuteUbergraph_WPN_FlameThrower(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
