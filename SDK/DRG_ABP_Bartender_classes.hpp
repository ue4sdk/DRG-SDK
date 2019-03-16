#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ABP_Bartender_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Bartender.ABP_Bartender_C
// 0x0140 (0x04A0 - 0x0360)
class UABP_Bartender_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E75B983D409255D3B7C6D99DDCC418F6;      // 0x0368(0x0040)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4EBA418549CA1E1AF10899A42E032C57;      // 0x03A8(0x0068)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_0EF21D0E4FDC6F5BEA671BAB28569ACA;// 0x0410(0x0090)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_Bartender.ABP_Bartender_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_Bartender(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
