#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ABP_Flaregun_A_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Flaregun_A.ABP_Flaregun_A_C
// 0x0120 (0x0480 - 0x0360)
class UABP_Flaregun_A_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_3002C21C46EEE2227E0E5F9666098331;      // 0x0368(0x0040)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_3B1D5D7C48982A0173F5CD827BE94197;// 0x03A8(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C11FF28C4465EC43555B47B96F98DB9A;      // 0x0418(0x0068)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_Flaregun_A.ABP_Flaregun_A_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_Flaregun_A(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
