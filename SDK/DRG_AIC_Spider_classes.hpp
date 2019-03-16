#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_AIC_Spider_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AIC_Spider.AIC_Spider_C
// 0x001C (0x046C - 0x0450)
class AAIC_Spider_C : public AFSDAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UBehaviorTree*                               BehaviorTree;                                             // 0x0458(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UEnemyHealthComponent*                       EnemyHealthComponent;                                     // 0x0460(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              SpeedModifier;                                            // 0x0468(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass AIC_Spider.AIC_Spider_C");
		return ptr;
	}


	void HasLineOfSightTo(class AActor* Other, bool* Result);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(class APawn* Pawn);
	void OnDeath(class UHealthComponentBase* HealthComponent);
	void OnPossess(class APawn* PossessedPawn);
	void Speed_Changer();
	void OnAttackingChanged(bool IsAttacking);
	void ExecuteUbergraph_AIC_Spider(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
