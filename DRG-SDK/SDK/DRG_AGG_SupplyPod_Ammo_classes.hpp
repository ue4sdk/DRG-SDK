#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_AGG_SupplyPod_Ammo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AGG_SupplyPod_Ammo.AGG_SupplyPod_Ammo_C
// 0x0000 (0x0148 - 0x0148)
class UAGG_SupplyPod_Ammo_C : public UItemPlacerAggregator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass AGG_SupplyPod_Ammo.AGG_SupplyPod_Ammo_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
