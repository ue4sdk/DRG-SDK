#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ABP_ZipLineGun_A_AnimBlueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_ZipLineGun_A_AnimBlueprint.ABP_ZipLineGun_A_AnimBlueprint_C
// 0x0120 (0x0480 - 0x0360)
class UABP_ZipLineGun_A_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_03CB9F6946BDDFAEBF8686A6A0247A82;      // 0x0368(0x0040)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_96BA853040D0F18ACAE460917E5CF19D;      // 0x03A8(0x0068)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_AA14AA924A5062411411BBB2280C03D1;// 0x0410(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_ZipLineGun_A_AnimBlueprint.ABP_ZipLineGun_A_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_ZipLineGun_A_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
