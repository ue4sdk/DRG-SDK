#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_TentacleMonsterCarver_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TentacleMonsterCarver.BP_TentacleMonsterCarver_C
// 0x0008 (0x0358 - 0x0350)
class ABP_TentacleMonsterCarver_C : public AInstantMeshCarver
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0350(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_TentacleMonsterCarver.BP_TentacleMonsterCarver_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_TentacleMonsterCarver(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
