#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_PRJ_ZipLineGun_Safe_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PRJ_ZipLineGun_Safe.PRJ_ZipLineGun_Safe_C
// 0x0000 (0x0450 - 0x0450)
class APRJ_ZipLineGun_Safe_C : public APRJ_ZipLineGun_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass PRJ_ZipLineGun_Safe.PRJ_ZipLineGun_Safe_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
