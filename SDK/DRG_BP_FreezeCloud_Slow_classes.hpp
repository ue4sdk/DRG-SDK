#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_FreezeCloud_Slow_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FreezeCloud_Slow.BP_FreezeCloud_Slow_C
// 0x0000 (0x0361 - 0x0361)
class ABP_FreezeCloud_Slow_C : public ABP_FreezeCloud_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_FreezeCloud_Slow.BP_FreezeCloud_Slow_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
