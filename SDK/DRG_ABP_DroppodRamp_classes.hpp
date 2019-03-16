#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ABP_DroppodRamp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_DroppodRamp.ABP_DroppodRamp_C
// 0x0568 (0x08C8 - 0x0360)
class UABP_DroppodRamp_C : public UMiningPodAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D22EDA5846249066CF9FA38DA2F5B255;      // 0x0368(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B178AD27426F23F1EE7CCFBBAE4B7D38;// 0x03A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D963559D4F7D338C844A7B8D11940AE4;// 0x03F0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4C3FEBDE4E195AF67C9CDBA7D7290FAA;// 0x0438(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_41AF7652437F3C10561791958CD250B8;// 0x0480(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_9E7CF86E47E3EC5876195585894A5A32;// 0x04C8(0x0070)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9FA9EFCC419FE606DFCDC18894308178;// 0x0538(0x0040)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_CFB5F62C4AE1834FBE8B009B16E86394;// 0x0578(0x0070)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4B27B5E44FB8C94E86DB86AAF6860624;// 0x05E8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B41C293E4F05622A306120B9BF251F31;// 0x0628(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_CA87E2074A9AEA367E8320B07CAE737C;// 0x06C8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3341101A4310DB8F3003C49A637A3000;// 0x0708(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_D7E70E4041A229D9947BBDBBC9963239;// 0x07A8(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_40A062734F028E5093D24BAA739A09C9;// 0x07E8(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_DroppodRamp.ABP_DroppodRamp_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DroppodRamp_AnimGraphNode_TransitionResult_4C3FEBDE4E195AF67C9CDBA7D7290FAA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DroppodRamp_AnimGraphNode_TransitionResult_D963559D4F7D338C844A7B8D11940AE4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DroppodRamp_AnimGraphNode_TransitionResult_41AF7652437F3C10561791958CD250B8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DroppodRamp_AnimGraphNode_TransitionResult_B178AD27426F23F1EE7CCFBBAE4B7D38();
	void ExecuteUbergraph_ABP_DroppodRamp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
