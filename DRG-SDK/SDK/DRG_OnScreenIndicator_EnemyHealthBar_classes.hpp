#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_OnScreenIndicator_EnemyHealthBar_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass OnScreenIndicator_EnemyHealthBar.OnScreenIndicator_EnemyHealthBar_C
// 0x0000 (0x02F8 - 0x02F8)
class UOnScreenIndicator_EnemyHealthBar_C : public UHUDHealthBar
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass OnScreenIndicator_EnemyHealthBar.OnScreenIndicator_EnemyHealthBar_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
