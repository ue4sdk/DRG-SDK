#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ABP_SMG_A_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_SMG_A.ABP_SMG_A_C
// 0x0120 (0x0480 - 0x0360)
class UABP_SMG_A_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_27544DAA454C9B91127A36804C6A20CF;      // 0x0368(0x0040)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_AB200C9042F5A1D4621FC0B64FB32CC3;      // 0x03A8(0x0068)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_E72EE8BD43346972995EF79A56202428;// 0x0410(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_SMG_A.ABP_SMG_A_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_SMG_A(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
