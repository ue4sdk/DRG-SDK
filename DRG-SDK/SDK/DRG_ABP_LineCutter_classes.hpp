#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ABP_LineCutter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_LineCutter.ABP_LineCutter_C
// 0x0120 (0x0480 - 0x0360)
class UABP_LineCutter_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_0A52F9C94340082FDECFEB8D94AD05AC;      // 0x0368(0x0040)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C845A5674B8F800CF9A40792170B3C50;      // 0x03A8(0x0068)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_ACF29F1241B0B1147CAD329269383FBA;// 0x0410(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_LineCutter.ABP_LineCutter_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_LineCutter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
