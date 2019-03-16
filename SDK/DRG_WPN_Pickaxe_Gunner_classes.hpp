#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WPN_Pickaxe_Gunner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WPN_Pickaxe_Gunner.WPN_Pickaxe_Gunner_C
// 0x0000 (0x067C - 0x067C)
class AWPN_Pickaxe_Gunner_C : public AWPN_Pickaxe_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass WPN_Pickaxe_Gunner.WPN_Pickaxe_Gunner_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
