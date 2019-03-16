#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_OBJ_1st_Salvage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OBJ_1st_Salvage.OBJ_1st_Salvage_C
// 0x0008 (0x0240 - 0x0238)
class UOBJ_1st_Salvage_C : public USalvageObjective
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass OBJ_1st_Salvage.OBJ_1st_Salvage_C");
		return ptr;
	}


	int GetObjectiveAmount(float missionLength);
	struct FText GetInMissionText();
	struct FText GetObjectiveDescription(float missionLength);
	class UTexture2D* GetObjectiveIcon();
	void ReceiveBeginPlay();
	void AllActorsSalvaged();
	void ExecuteUbergraph_OBJ_1st_Salvage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
