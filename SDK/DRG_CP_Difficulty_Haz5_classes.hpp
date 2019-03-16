#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_CP_Difficulty_Haz5_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CP_Difficulty_Haz5.CP_Difficulty_Haz5_C
// 0x0000 (0x0160 - 0x0160)
class UCP_Difficulty_Haz5_C : public UCampaign
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass CP_Difficulty_Haz5.CP_Difficulty_Haz5_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
