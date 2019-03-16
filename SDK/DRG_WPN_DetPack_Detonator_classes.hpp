#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WPN_DetPack_Detonator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WPN_DetPack_Detonator.WPN_DetPack_Detonator_C
// 0x0000 (0x04F8 - 0x04F8)
class AWPN_DetPack_Detonator_C : public ADetPackItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass WPN_DetPack_Detonator.WPN_DetPack_Detonator_C");
		return ptr;
	}


	void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
