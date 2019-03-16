#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_RadarPointInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RadarPointInterface.RadarPointInterface_C
// 0x0000 (0x0028 - 0x0028)
class URadarPointInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass RadarPointInterface.RadarPointInterface_C");
		return ptr;
	}


	void UpdatePoint(float Alpha, float verticalDist, bool* destroy);
	void Get3dPosition(struct FVector* Pos);
	void InitPoint(class URadarPointComponent* RadarComponent, bool* success);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
