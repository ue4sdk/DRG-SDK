#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_Flare_Small_Driller_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ITM_Flare_Small_Driller.ITM_Flare_Small_Driller_C
// 0x0000 (0x03ED - 0x03ED)
class AITM_Flare_Small_Driller_C : public AITM_Flare_Small_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ITM_Flare_Small_Driller.ITM_Flare_Small_Driller_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
