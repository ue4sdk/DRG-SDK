#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ABP_AutoCannon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_AutoCannon.ABP_AutoCannon_C
// 0x0120 (0x0480 - 0x0360)
class UABP_AutoCannon_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_98F1B40C4AB0C8A597A3DAAD8CD3F310;// 0x0368(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_Root_0B7B0E834858B29AA08D95AC1942FD8E;      // 0x03D8(0x0040)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C4F750984576EE95DE2B26B340E75179;      // 0x0418(0x0068)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_AutoCannon.ABP_AutoCannon_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_AutoCannon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
