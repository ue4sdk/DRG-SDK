#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_TSK_SpawnEnemiesAtLocation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TSK_SpawnEnemiesAtLocation.TSK_SpawnEnemiesAtLocation_C
// 0x0040 (0x00E0 - 0x00A0)
class UTSK_SpawnEnemiesAtLocation_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	int                                                Count;                                                    // 0x00A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	class UEnemyDescriptor*                            EnemyToSpawn;                                             // 0x00B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBlackboardKeySelector                      LocationKey;                                              // 0x00B8(0x0028) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass TSK_SpawnEnemiesAtLocation.TSK_SpawnEnemiesAtLocation_C");
		return ptr;
	}


	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_TSK_SpawnEnemiesAtLocation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
