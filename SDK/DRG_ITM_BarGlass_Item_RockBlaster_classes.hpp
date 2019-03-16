#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_BarGlass_Item_RockBlaster_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ITM_BarGlass_Item_RockBlaster.ITM_BarGlass_Item_RockBlaster_C
// 0x0000 (0x0478 - 0x0478)
class AITM_BarGlass_Item_RockBlaster_C : public AITM_BarGlass_Item_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ITM_BarGlass_Item_RockBlaster.ITM_BarGlass_Item_RockBlaster_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
