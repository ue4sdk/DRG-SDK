#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WPN_DualMPs_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WPN_DualMPs.WPN_DualMPs_C
// 0x0048 (0x0708 - 0x06C0)
class AWPN_DualMPs_C : public ADualMachinePistols
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UFirstPersonWidgetComponent*                 FirstPersonWidgetLeft;                                    // 0x06C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFirstPersonStaticMeshComponent*             FirstPersonStaticMesh1;                                   // 0x06D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFirstPersonWidgetComponent*                 FirstPersonWidget;                                        // 0x06D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFirstPersonStaticMeshComponent*             FirstPersonStaticMesh;                                    // 0x06E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UHitscanComponent*                           HitScan;                                                  // 0x06E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCrosshairAggregator*                        CrosshairAggregator;                                      // 0x06F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UDamageComponent*                            Damage;                                                   // 0x06F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPointLightComponent*                        MuzzleFlash;                                              // 0x0700(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass WPN_DualMPs.WPN_DualMPs_C");
		return ptr;
	}


	void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_WPN_DualMPs(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
