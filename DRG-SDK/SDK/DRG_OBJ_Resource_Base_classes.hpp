#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_OBJ_Resource_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OBJ_Resource_Base.OBJ_Resource_Base_C
// 0x0000 (0x01B0 - 0x01B0)
class UOBJ_Resource_Base_C : public UResourceObjective
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass OBJ_Resource_Base.OBJ_Resource_Base_C");
		return ptr;
	}


	class UTexture2D* GetObjectiveIcon();
	int GetObjectiveAmount(float missionLength);
	struct FText GetInMissionText();
	struct FText GetObjectiveDescription(float missionLength);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
