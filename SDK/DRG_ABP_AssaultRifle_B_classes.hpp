#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ABP_AssaultRifle_B_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_AssaultRifle_B.ABP_AssaultRifle_B_C
// 0x0120 (0x0480 - 0x0360)
class UABP_AssaultRifle_B_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_5C59CECF410247AB3792C9B8A0133D3A;      // 0x0368(0x0040)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_40492AD4430E9D8366E2AC9A3E4D4B4E;      // 0x03A8(0x0068)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_D1F2F8F24967B9B2CBBE21BB34502648;// 0x0410(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_AssaultRifle_B.ABP_AssaultRifle_B_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_AssaultRifle_B(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
