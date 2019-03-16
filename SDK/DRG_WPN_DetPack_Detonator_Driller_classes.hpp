#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WPN_DetPack_Detonator_Driller_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WPN_DetPack_Detonator_Driller.WPN_DetPack_Detonator_Driller_C
// 0x0000 (0x04F8 - 0x04F8)
class AWPN_DetPack_Detonator_Driller_C : public AWPN_DetPack_Detonator_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass WPN_DetPack_Detonator_Driller.WPN_DetPack_Detonator_Driller_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
