#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ABP_Spider_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Spider.ABP_Spider_C
// 0x1C98 (0x2188 - 0x04F0)
class UABP_Spider_C : public USpiderAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3D33A8F54C5BB32F4EDD79B75FF6DA22;      // 0x04F8(0x0068)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_BBC3C8CC41A0B4D6BDD5BAA83E39FF32;      // 0x0560(0x0068)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_01F5649D410D138FA08AF28549DBFF26;// 0x05C8(0x00D0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_FCC0C4D4449CA5E9E1448DA8F17D76E3;// 0x0698(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C1E2644E41C302990A911B9143D60369;      // 0x0708(0x0068)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D99714B44F7603AA22D132A1A66F0345;// 0x0770(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CF0DCD5B45F1749B25039B97A0DA7811;// 0x07B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_85D7C594436A35CA3623199FD986780F;// 0x0800(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C534D9A54BC83E02AFE92A89E6D95D90;// 0x0848(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1FD8BB0243B55CDBD72532B082188499;// 0x0890(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0F2CE7DA42252A540D32709D379077A6;// 0x08D8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_86DF74B745ADDE5F11C7BBBA8F529DFB;// 0x0920(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DC2B0CD34B4093ADFBD6BAB03871A8FE;// 0x0968(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0409831E41EE89C4F30C919139E387CC;// 0x09B0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BD919A8E415910A10C3EC893CF6D01EA;// 0x09F8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0DA12EB440B3FE57D76C508BF981E442;// 0x0A40(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BCAD17E14300FAAEFB114192EA281BBD;// 0x0A88(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_821EDAEF41BB5C58CBD5589BAC8674BA;// 0x0AD0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_924CDAE541B39FBD622FB7911E10C059;// 0x0B18(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1055B85D4460F989857E329F131EA80B;// 0x0B60(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_88CC47C041612042C77C9FB055435344;// 0x0BA8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_72E3AC5341334073CC6C95BDB66EAAC0;// 0x0BF0(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F80137274B41F5A67D4DD28BA8DE0FBA;// 0x0C90(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_1114F0314F02B8D36A68D59337EE0888;// 0x0D60(0x0128)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_3821D60F49DFAFD49B8F8BAE12AD9A70;// 0x0E88(0x00F0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_119AD68F441FBBACBC56EAA4CA9A240E;// 0x0F78(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ACBCAA9346750EC7EB0209A50D597590;// 0x1018(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7546188F49CA118D34D794807FEA3224;// 0x10B8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B0C57FEB4C778C5844F122866D0A833E;// 0x1158(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_83EFE13B4D5D8410EFD750BA1463D6DB;// 0x11F8(0x00A0)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_50C2E9CA432A06D3209C2FAAD7351A9F;// 0x1298(0x00D0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9C71AE6A4623F406326F01BB222296B1;// 0x1368(0x0040)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4DEE340C43EC5D266E03ADBA64280F5A;// 0x13A8(0x0128)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_CDAB15854AC0E952C424CFA9257C88BC;// 0x14D0(0x0040)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D86176E143563ADFEDA6D69C3235588B;// 0x1510(0x0128)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_F54F46B64EB098C65D8C22877E8F582F;// 0x1638(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F5BBB01A4F5E3087244ED5854D53A268;// 0x1678(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_CDC250224E04168EBF38BEA3D4BC70B7;// 0x1718(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C81D0F7E4FB6B73D48FE779EB08811DC;// 0x1758(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_75D00AAC4B52F4168FF015B03DAA8C97;// 0x17F8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_42B06C354C377A2AD9BFFF8A0389FB98;// 0x1898(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0924A2B2401B6244A39085BE8EBB0499;// 0x1938(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_44FB826E485C5B1D86DDE0B2EC0EB485;// 0x19D8(0x00A0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_8C8C7FD544818FA461DB39BA79F546E8;// 0x1A78(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_690510ED48BEDB34B6F5B697CACC64D8;// 0x1B58(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B5005FE8467AE9FEEE00E69557CB84D4;// 0x1C28(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_51BD51F9482B7CDD562A03BF857981FF;// 0x1CC8(0x00A0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_EF782760431D196246122BB0051D62FE;// 0x1D68(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6CCE5F7C4139BA796CB0EA9B3E826DAD;// 0x1E48(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A164508644A60E8207A46C8DBAB5A853;// 0x1EE8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_830751E5480A6ACD5000BF9C32463DE0;// 0x1F88(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_BE2313DB4A3BEBD0C7DA29B73CFA7529;// 0x2028(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_D3806169421CE5EFBE4531AA91693853;// 0x2068(0x00E0)
	struct FAnimNode_Root                              AnimGraphNode_Root_AE31654040DEA746A31AA985423EDE35;      // 0x2148(0x0040)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_Spider.ABP_Spider_C");
		return ptr;
	}


	void AnimNotify_Hide();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_ABP_Spider(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
