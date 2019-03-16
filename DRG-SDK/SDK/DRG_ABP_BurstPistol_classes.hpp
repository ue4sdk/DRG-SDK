#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ABP_BurstPistol_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_BurstPistol.ABP_BurstPistol_C
// 0x0120 (0x0480 - 0x0360)
class UABP_BurstPistol_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B1DB4BE54342FA1FC13ACDBE738492F0;      // 0x0368(0x0040)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_40DAFF904DB74D3973ED228ECCEE1BE2;// 0x03A8(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_97913C164F7193BBF8BA60A01C3C6249;      // 0x0418(0x0068)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_BurstPistol.ABP_BurstPistol_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_BurstPistol(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
