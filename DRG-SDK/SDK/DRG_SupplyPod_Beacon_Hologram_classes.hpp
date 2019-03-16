#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_SupplyPod_Beacon_Hologram_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass SupplyPod_Beacon_Hologram.SupplyPod_Beacon_Hologram_C
// 0x0000 (0x0208 - 0x0208)
class USupplyPod_Beacon_Hologram_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass SupplyPod_Beacon_Hologram.SupplyPod_Beacon_Hologram_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
