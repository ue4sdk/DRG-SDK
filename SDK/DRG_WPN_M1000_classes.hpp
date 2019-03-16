#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WPN_M1000_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WPN_M1000.WPN_M1000_C
// 0x0030 (0x0728 - 0x06F8)
class AWPN_M1000_C : public ABoltActionWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06F8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UFirstPersonWidgetComponent*                 FirstPersonWidget;                                        // 0x0700(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UDamageComponent*                            Damage;                                                   // 0x0708(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPointLightComponent*                        MuzzleLight;                                              // 0x0710(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UHitscanComponent*                           HitScan;                                                  // 0x0718(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCrosshairAggregator*                        CrosshairAggregator;                                      // 0x0720(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass WPN_M1000.WPN_M1000_C");
		return ptr;
	}


	void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats);
	void UserConstructionScript();
	void RecieveEquipped();
	void Recieve_UpdateMeshses(bool IsFirstPerson);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_WPN_M1000(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
