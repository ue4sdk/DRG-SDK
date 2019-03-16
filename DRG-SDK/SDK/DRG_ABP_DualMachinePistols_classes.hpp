#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ABP_DualMachinePistols_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_DualMachinePistols.ABP_DualMachinePistols_C
// 0x00B0 (0x0410 - 0x0360)
class UABP_DualMachinePistols_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D03F715B4D6DB84C5AB535848D75FF7D;      // 0x0368(0x0040)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7BB5B8A747C7289DEBBFD4A116828E21;      // 0x03A8(0x0068)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_DualMachinePistols.ABP_DualMachinePistols_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_DualMachinePistols(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
