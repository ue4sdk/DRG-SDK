#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_BarGlass_MacteraBrew_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BarGlass_MacteraBrew.BP_BarGlass_MacteraBrew_C
// 0x0000 (0x0370 - 0x0370)
class ABP_BarGlass_MacteraBrew_C : public ABP_BarGlass_Standard_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_BarGlass_MacteraBrew.BP_BarGlass_MacteraBrew_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
