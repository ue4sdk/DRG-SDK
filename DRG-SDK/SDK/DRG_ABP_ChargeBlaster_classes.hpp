#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ABP_ChargeBlaster_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_ChargeBlaster.ABP_ChargeBlaster_C
// 0x04E8 (0x0868 - 0x0380)
class UABP_ChargeBlaster_C : public UChargedWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_CD81317C41161B9AAED073BF2AEBE4F3;      // 0x0388(0x0040)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_21145CD44DBBC439C8B2E3B2DB2E9E84;      // 0x03C8(0x0068)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2F37BD164B774ECAE83436B3A71A5E9D;// 0x0430(0x00A0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_293193934D4A6302A9A2ADB422D46190;// 0x04D0(0x00F0)
	struct FAnimNode_MakeDynamicAdditive               AnimGraphNode_MakeDynamicAdditive_83856D1D46DC07FB34525D9CFE9BD42F;// 0x05C0(0x0058)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_73DEE4EA40602B46A3B86FB3B40B525E;// 0x0618(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_455AA4194155162D20F4D2ADBDE1ADBA;// 0x0688(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C40ADB064F1A923879BA0892E74BF287;// 0x0728(0x00D0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_4FB380AC4F05648B780391BD369D50D5;// 0x07F8(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_ChargeBlaster.ABP_ChargeBlaster_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_ChargeBlaster(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
