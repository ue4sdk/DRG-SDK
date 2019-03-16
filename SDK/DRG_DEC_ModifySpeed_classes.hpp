#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_DEC_ModifySpeed_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DEC_ModifySpeed.DEC_ModifySpeed_C
// 0x000C (0x00AC - 0x00A0)
class UDEC_ModifySpeed_C : public UBTDecorator_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              SpeedModifier;                                            // 0x00A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass DEC_ModifySpeed.DEC_ModifySpeed_C");
		return ptr;
	}


	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, TEnumAsByte<EBTNodeResult> NodeResult);
	void ExecuteUbergraph_DEC_ModifySpeed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
