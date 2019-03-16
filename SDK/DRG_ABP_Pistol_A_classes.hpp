#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ABP_Pistol_A_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Pistol_A.ABP_Pistol_A_C
// 0x0120 (0x0480 - 0x0360)
class UABP_Pistol_A_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_406FCE9C482C94B520A73BA9246B3F8B;      // 0x0368(0x0040)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3D46F60346B232FBA3AE9AA474BD7C54;      // 0x03A8(0x0068)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_EC9ED7B6471DBF353F283A974A361E3F;// 0x0410(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_Pistol_A.ABP_Pistol_A_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_Pistol_A(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
