#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_GenericHero_Character_NewGuns_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GenericHero_Character_NewGuns.BP_GenericHero_Character_NewGuns_C
// 0x0000 (0x1008 - 0x1008)
class ABP_GenericHero_Character_NewGuns_C : public ABP_GenericHero_Character_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_GenericHero_Character_NewGuns.BP_GenericHero_Character_NewGuns_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
