#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ABP_BoltActionRifle_A_Skeleton_AnimBlueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_BoltActionRifle_A_Skeleton_AnimBlueprint.ABP_BoltActionRifle_A_Skeleton_AnimBlueprint_C
// 0x0120 (0x0480 - 0x0360)
class UABP_BoltActionRifle_A_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_08DA284B44FD3674AEBC4083A2400163;      // 0x0368(0x0040)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C0746F804421A754BF55FEB6BFA96331;      // 0x03A8(0x0068)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_F67B86A54B61FB66D27203B700073FD7;// 0x0410(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_BoltActionRifle_A_Skeleton_AnimBlueprint.ABP_BoltActionRifle_A_Skeleton_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_BoltActionRifle_A_Skeleton_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
