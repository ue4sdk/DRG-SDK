#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_DEC_AttackStanceGuard_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DEC_AttackStanceGuard.DEC_AttackStanceGuard_C
// 0x0008 (0x00A8 - 0x00A0)
class UDEC_AttackStanceGuard_C : public UBTDecorator_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass DEC_AttackStanceGuard.DEC_AttackStanceGuard_C");
		return ptr;
	}


	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, TEnumAsByte<EBTNodeResult> NodeResult);
	void ExecuteUbergraph_DEC_AttackStanceGuard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
