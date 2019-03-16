#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ABP_FlameThrower_A_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_FlameThrower_A.ABP_FlameThrower_A_C
// 0x07F8 (0x0B68 - 0x0370)
class UABP_FlameThrower_A_C : public UAmmoDrivenWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_DB82507A42D011EDDC1E11AD8848E2DD;      // 0x0378(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_66BB6F0949FE6F04245E00A253298972;// 0x03B8(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8607AC0E4BFC05400FEE388C07D8362E;// 0x0458(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_62E178AE4811A314FCE440A2EA19563D;// 0x0528(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_F739136E429082EFAFC312A4B89A23B1;// 0x05C8(0x00D8)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_93C032B24F1164618280B29A070721ED;// 0x06A0(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_09BA7E904202D5E78224C4BE1D2782F8;// 0x0710(0x00D0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_C01DC380406AFB976173B3AEB4A26D40;// 0x07E0(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_FF8B823A4EF687E5EFCD9D9060A550B8;// 0x0820(0x0138)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_1A010E1B46D6B34F9259838FF1F2C579;// 0x0958(0x0040)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_E120AF3A4653802EA5BEF09B4CC53F30;// 0x0998(0x00D8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_23281FA94E0A8C93039D33812A7B9DDF;// 0x0A70(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D4AC0D4A45580EFF86B9DF9E473C5DD3;// 0x0AB8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_15FE05F642867A5161396FB07956BC2A;      // 0x0B00(0x0068)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_FlameThrower_A.ABP_FlameThrower_A_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FlameThrower_A_AnimGraphNode_ModifyBone_FF8B823A4EF687E5EFCD9D9060A550B8();
	void ExecuteUbergraph_ABP_FlameThrower_A(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
