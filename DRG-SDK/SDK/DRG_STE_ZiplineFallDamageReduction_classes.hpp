#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_STE_ZiplineFallDamageReduction_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass STE_ZiplineFallDamageReduction.STE_ZiplineFallDamageReduction_C
// 0x0000 (0x00A0 - 0x00A0)
class USTE_ZiplineFallDamageReduction_C : public UStatusEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass STE_ZiplineFallDamageReduction.STE_ZiplineFallDamageReduction_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
