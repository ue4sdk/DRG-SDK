#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_CP_WPN_BurstHandgun_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CP_WPN_BurstHandgun.CP_WPN_BurstHandgun_C
// 0x0000 (0x0160 - 0x0160)
class UCP_WPN_BurstHandgun_C : public UCampaign
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass CP_WPN_BurstHandgun.CP_WPN_BurstHandgun_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
