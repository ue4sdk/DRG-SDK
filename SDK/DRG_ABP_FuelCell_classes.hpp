#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ABP_FuelCell_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_FuelCell.ABP_FuelCell_C
// 0x0238 (0x0598 - 0x0360)
class UABP_FuelCell_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_376FE0F9450837D059CE05A395FFA126;      // 0x0368(0x0040)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_33619B1E4F1A47A55EC7D891965D1490;// 0x03A8(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_9CBBC20146006789DFDC52A2BDB72434;// 0x0418(0x00D8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0D94F7924C125375CA80EB9FFBE6B239;// 0x04F0(0x00A0)
	float                                              BuildProgress;                                            // 0x0590(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DefendProgress;                                           // 0x0594(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_FuelCell.ABP_FuelCell_C");
		return ptr;
	}


	void SetBuildProgress(float Progress);
	void SetDefendProgress(float Progress);
	void ExecuteUbergraph_ABP_FuelCell(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
