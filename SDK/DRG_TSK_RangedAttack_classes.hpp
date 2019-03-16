#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_TSK_RangedAttack_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TSK_RangedAttack.TSK_RangedAttack_C
// 0x0088 (0x0128 - 0x00A0)
class UTSK_RangedAttack_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	bool                                               ProjectileClassFromBB;                                    // 0x00A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	class UEnemyRangedAttack*                          RangedAttack;                                             // 0x00B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBlackboardKeySelector                      ProjectileType;                                           // 0x00B8(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FBlackboardKeySelector                      TargetKey;                                                // 0x00E0(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	class UEnemyRangedAttack*                          AttackToExecute;                                          // 0x0108(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class APawn*                                       CurrentControlledPawn;                                    // 0x0110(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USkeletalMeshComponent*                      CurrentSkeletalMesh;                                      // 0x0118(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class AActor*                                      CurrentTarget;                                            // 0x0120(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass TSK_RangedAttack.TSK_RangedAttack_C");
		return ptr;
	}


	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void OnRangeAttack();
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_TSK_RangedAttack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
