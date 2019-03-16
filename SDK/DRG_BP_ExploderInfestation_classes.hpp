#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_ExploderInfestation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ExploderInfestation.BP_ExploderInfestation_C
// 0x0010 (0x0038 - 0x0028)
class UBP_ExploderInfestation_C : public URunningMissionBP
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UEnemyGroupDescriptor*                       EnemyDescriptor;                                          // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_ExploderInfestation.BP_ExploderInfestation_C");
		return ptr;
	}


	void StartLogic();
	void StartTimer();
	void SpawnExploders();
	void ExecuteUbergraph_BP_ExploderInfestation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
