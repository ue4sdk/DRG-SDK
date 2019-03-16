#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ABP_Pistol_B_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Pistol_B.ABP_Pistol_B_C
// 0x0120 (0x0480 - 0x0360)
class UABP_Pistol_B_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_2B1E9E16433B87CFCBAAFC946775CE5A;      // 0x0368(0x0040)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_371753A244D3269082D07B958CD045DE;      // 0x03A8(0x0068)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_C26C69A34CE5B48A81AF9090A2DF383F;// 0x0410(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_Pistol_B.ABP_Pistol_B_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_Pistol_B(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
