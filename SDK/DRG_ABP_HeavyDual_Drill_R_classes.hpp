#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ABP_HeavyDual_Drill_R_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_HeavyDual_Drill_R.ABP_HeavyDual_Drill_R_C
// 0x0780 (0x0AF0 - 0x0370)
class UABP_HeavyDual_Drill_R_C : public UAutoMinerAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_80A39D4C43FDA7EE0E9F9181983260A1;      // 0x0378(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D12FE6AB4B7BC9F94D60F68F1B91CF96;// 0x03B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_390E1F5847CCD80694ADF384F17BEFAF;// 0x0400(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7AAECE2A40886AE3B977B591F7BCC48F;// 0x0448(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5499A1474364E8433035ADBB00F361F8;// 0x04E8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7377B20248348464333A1FA9EF6E32BD;// 0x0528(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2E10DFB941ED17A98D389AA4E45FC783;// 0x05C8(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_0B3D996B42097D41139D00B55DFA3CB4;// 0x0608(0x00E0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F4C4F6FF4FBE3BF5A52C5D9F4A57E70F;// 0x06E8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1291E87A4762360DB6A73FA6408C64E0;// 0x0730(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C70733AE4843F1F6A076BA9892355186;// 0x0778(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_F1F0A2BA49F43AD657B25A8EB362F2FE;// 0x0818(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_71C610974231E7EB3F2B8EB58C8469DC;// 0x0858(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_AE4457F24CD6CA7C0FB5D69625539F39;// 0x08F8(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_410C1D19405F81DF8F9D67B9138266F2;// 0x0938(0x00E0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_F01FA9C24E7FD93A6A4C8E87ED160786;// 0x0A18(0x00D8)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_HeavyDual_Drill_R.ABP_HeavyDual_Drill_R_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeavyDual_Drill_R_AnimGraphNode_TransitionResult_390E1F5847CCD80694ADF384F17BEFAF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeavyDual_Drill_R_AnimGraphNode_TransitionResult_D12FE6AB4B7BC9F94D60F68F1B91CF96();
	void ExecuteUbergraph_ABP_HeavyDual_Drill_R(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
