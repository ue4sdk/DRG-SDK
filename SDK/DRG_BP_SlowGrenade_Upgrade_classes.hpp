#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_SlowGrenade_Upgrade_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SlowGrenade_Upgrade.BP_SlowGrenade_Upgrade_C
// 0x0000 (0x0130 - 0x0130)
class UBP_SlowGrenade_Upgrade_C : public UItemUpgrade
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_SlowGrenade_Upgrade.BP_SlowGrenade_Upgrade_C");
		return ptr;
	}


	void AddToItem(class AActor* Item);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
