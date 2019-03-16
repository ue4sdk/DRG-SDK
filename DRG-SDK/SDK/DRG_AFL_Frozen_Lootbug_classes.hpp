#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_AFL_Frozen_Lootbug_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AFL_Frozen_Lootbug.AFL_Frozen_Lootbug_C
// 0x0000 (0x0058 - 0x0058)
class UAFL_Frozen_Lootbug_C : public UFrozenAfflictionEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass AFL_Frozen_Lootbug.AFL_Frozen_Lootbug_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
