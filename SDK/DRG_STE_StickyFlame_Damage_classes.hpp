#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_STE_StickyFlame_Damage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass STE_StickyFlame_Damage.STE_StickyFlame_Damage_C
// 0x0000 (0x00A0 - 0x00A0)
class USTE_StickyFlame_Damage_C : public UStatusEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass STE_StickyFlame_Damage.STE_StickyFlame_Damage_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
