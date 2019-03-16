#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ABP_GrenadeLauncher_A_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_GrenadeLauncher_A.ABP_GrenadeLauncher_A_C
// 0x0120 (0x0480 - 0x0360)
class UABP_GrenadeLauncher_A_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_1D813FE04EBF906D72749C8475AFA7B4;      // 0x0368(0x0040)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_1A0B6F78403E0FDA65FEEDA8726814DD;      // 0x03A8(0x0068)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_82701F594269FA858317FEB806DD55FD;// 0x0410(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_GrenadeLauncher_A.ABP_GrenadeLauncher_A_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_GrenadeLauncher_A(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
