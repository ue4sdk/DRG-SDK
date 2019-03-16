#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ABP_CombatShotgun_A_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_CombatShotgun_A.ABP_CombatShotgun_A_C
// 0x0120 (0x0480 - 0x0360)
class UABP_CombatShotgun_A_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_03627CE34CBB5A64419825981046D514;      // 0x0368(0x0040)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_CCD6E844420D1947A3882B86B927452F;      // 0x03A8(0x0068)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_463DF5C748B51187F7674F8E422D5A40;// 0x0410(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_CombatShotgun_A.ABP_CombatShotgun_A_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_CombatShotgun_A(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
