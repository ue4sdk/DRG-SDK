#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_OBJ_Elimination_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OBJ_Elimination_Base.OBJ_Elimination_Base_C
// 0x0000 (0x01A0 - 0x01A0)
class UOBJ_Elimination_Base_C : public UEliminationObjective
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass OBJ_Elimination_Base.OBJ_Elimination_Base_C");
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
