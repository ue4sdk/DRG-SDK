#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BPL_SlowGrenade_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPL_SlowGrenade.BPL_SlowGrenade_C
// 0x0000 (0x0028 - 0x0028)
class UBPL_SlowGrenade_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BPL_SlowGrenade.BPL_SlowGrenade_C");
		return ptr;
	}


	static void GetUpgradedValue(class UClass* Item, class AFSDPlayerState* Player, class UObject* __WorldContext, bool* HasWeakening);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
