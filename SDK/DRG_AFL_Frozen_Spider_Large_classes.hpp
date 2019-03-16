#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_AFL_Frozen_Spider_Large_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AFL_Frozen_Spider_Large.AFL_Frozen_Spider_Large_C
// 0x0000 (0x0058 - 0x0058)
class UAFL_Frozen_Spider_Large_C : public UFrozenAfflictionEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass AFL_Frozen_Spider_Large.AFL_Frozen_Spider_Large_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
