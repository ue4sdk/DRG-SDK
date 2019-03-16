#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WPN_ShieldRegeneratorItem_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C
// 0x0010 (0x04D0 - 0x04C0)
class AWPN_ShieldRegeneratorItem_C : public AArmorRegeneratorItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UAudioComponent*                             Audio;                                                    // 0x04C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C");
		return ptr;
	}


	void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats);
	void UserConstructionScript();
	void RecieveStartUsing();
	void ReceiveItemThrown(class AThrowableActor* thrownActor);
	void RecieveEquipped();
	void RecieveUnequipped();
	void ExecuteUbergraph_WPN_ShieldRegeneratorItem(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
