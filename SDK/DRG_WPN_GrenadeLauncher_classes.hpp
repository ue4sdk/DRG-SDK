#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WPN_GrenadeLauncher_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WPN_GrenadeLauncher.WPN_GrenadeLauncher_C
// 0x0020 (0x06A8 - 0x0688)
class AWPN_GrenadeLauncher_C : public AAmmoDrivenWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0688(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UFirstPersonWidgetComponent*                 FirstPersonWidget;                                        // 0x0690(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCrosshairAggregator*                        CrosshairAggregator;                                      // 0x0698(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UProjectileLauncherComponent*                ProjectileLauncher;                                       // 0x06A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass WPN_GrenadeLauncher.WPN_GrenadeLauncher_C");
		return ptr;
	}


	void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_WPN_GrenadeLauncher(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
