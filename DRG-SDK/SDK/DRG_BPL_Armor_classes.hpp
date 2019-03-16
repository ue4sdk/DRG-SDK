#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BPL_Armor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPL_Armor.BPL_Armor_C
// 0x0000 (0x0028 - 0x0028)
class UBPL_Armor_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BPL_Armor.BPL_Armor_C");
		return ptr;
	}


	static void AddBaseArmorStats(class AFSDPlayerState* Player, class UClass* armorClass, class UObject* __WorldContext, TArray<struct FGearStatEntry>* Stats);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
