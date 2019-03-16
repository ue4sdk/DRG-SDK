#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_Grenade_HE_Engineer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ITM_Grenade_HE_Engineer.ITM_Grenade_HE_Engineer_C
// 0x0000 (0x03C0 - 0x03C0)
class AITM_Grenade_HE_Engineer_C : public AITM_Grenade_HE_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ITM_Grenade_HE_Engineer.ITM_Grenade_HE_Engineer_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
