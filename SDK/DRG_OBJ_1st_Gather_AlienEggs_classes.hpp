#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_OBJ_1st_Gather_AlienEggs_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OBJ_1st_Gather_AlienEggs.OBJ_1st_Gather_AlienEggs_C
// 0x0000 (0x0180 - 0x0180)
class UOBJ_1st_Gather_AlienEggs_C : public UOBJ_Gather_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass OBJ_1st_Gather_AlienEggs.OBJ_1st_Gather_AlienEggs_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
