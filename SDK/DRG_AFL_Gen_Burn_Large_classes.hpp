#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_AFL_Gen_Burn_Large_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AFL_Gen_Burn_Large.AFL_Gen_Burn_Large_C
// 0x0000 (0x0030 - 0x0030)
class UAFL_Gen_Burn_Large_C : public UBurningAfflictionEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass AFL_Gen_Burn_Large.AFL_Gen_Burn_Large_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
