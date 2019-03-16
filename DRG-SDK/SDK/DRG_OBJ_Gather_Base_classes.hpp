#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_OBJ_Gather_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OBJ_Gather_Base.OBJ_Gather_Base_C
// 0x0000 (0x0180 - 0x0180)
class UOBJ_Gather_Base_C : public UGatherGemsObjective
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass OBJ_Gather_Base.OBJ_Gather_Base_C");
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
