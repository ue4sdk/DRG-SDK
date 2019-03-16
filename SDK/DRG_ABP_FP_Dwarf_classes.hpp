#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ABP_FP_Dwarf_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_FP_Dwarf.ABP_FP_Dwarf_C
// 0x1D78 (0x21F8 - 0x0480)
class UABP_FP_Dwarf_C : public UPlayerFPAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0480(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_939B71D14952B358AE9AC78891745E1B;      // 0x0488(0x0040)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_23FE83D84D22CD9EE4ACB7921C4A4CF2;      // 0x04C8(0x0068)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_57234F204280EDCDDD85608B124CE868;// 0x0530(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_70F2A2474AA7E859D099CBB702E05624;// 0x0578(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_19510B71447168F478551E94D0BAAD52;// 0x05C0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A80151F24B011A2CCA08A9846E9A149F;// 0x0608(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6892F0614D4C71917CA0599A5943D378;// 0x0650(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_069A231241D9B9F643CA13906486F3BC;// 0x0698(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AF3FFA514BB354788D2B29A8612BAEE3;// 0x06E0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_855D3DCF449114D56F38DAB30610D222;// 0x0728(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EB65D84C41981591720740B3B3929496;// 0x0770(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_62F523CA41A6601CEE4096A550BA16A9;// 0x07B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_843BC645460E6F916ECCD8ABC0A0625C;// 0x0800(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1D72EE224DC9E7672F467694451A25BF;// 0x0848(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FF9FEB8A42961DB8B1F06A9D42C5CEB8;// 0x0890(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_406F1A12494A7224FC1396A7D566F007;// 0x08D8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9EA54B8E4CCD6FA0297AD3A958314161;// 0x0920(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3BAF855D4EA2D46607E5FC9F238B45F5;// 0x0968(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_40B8A71542B8FA00D00746AF31C9BC4B;// 0x09B0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AA63C49F4C9B352448B8F3958E416319;// 0x09F8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_731B774B408562CB8FB4D99BEBA26509;// 0x0A40(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3ACB2C45445B9DB7E6FF37971A1B8A32;// 0x0A88(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_58D7B94047584F53AD2852974608177D;// 0x0B28(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_65A96F0B48CC78F4456C2CBC35EDDFDD;// 0x0B68(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_D342A63A42498D8B61B8BE8944AA2124;// 0x0C08(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6EB6D61D40D976871B94AA8251FAD582;// 0x0C48(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_66BD629A45CEA015ECCA01ABA753F625;// 0x0CE8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4FD0827B450AB5BEFA6FFB98B01A0A08;// 0x0D28(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_C40B30394015C80BD08B8DB8F0E37F7B;// 0x0DC8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F3B09174490F2F1CC8200CB58FE65BCF;// 0x0E08(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_253306814112D60D2C001C9C9AA13AAD;// 0x0EA8(0x0040)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_020EB2F54FB21CC493AAF7B033E1756E;// 0x0EE8(0x0040)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5FE808644428625A66E22EB73481B622;// 0x0F28(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_66ECD03D489F4AA72104D7BEEB3E4990;// 0x0F68(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_25578B1C49649B4AA420CF922982B2C2;// 0x1008(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_57A7EDF04D3E6ACA59E51B9226F6B3AF;// 0x10D8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2C6191D24C513A14CAEDD99D6D140CF6;// 0x1178(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A74D4F5E4BC12E3F032A1B94CDE7E1FF;// 0x11B8(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_BF5A92C04A6814B21B73DA905E20CBB3;// 0x1258(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0D25EEFC462716412642788FFEEBEFDA;// 0x1328(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_DAFB98D54CBD76B2A429A8828B03CFD5;// 0x13C8(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5934B0174AF3D99EDC9C16A89A91F884;// 0x1408(0x0138)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_474A84A74BD3F1D325486A9567B3CF2A;// 0x1540(0x0040)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_D8A5CF0546C3A85AEE27259AD40B993F;// 0x1580(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0072D2CD4DA4D455439303B47B562719;// 0x15C0(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8B72B9B947379DD3F396EAADE5EFCA70;// 0x1660(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_91F8FA14472F042B97E523A4AED27E22;// 0x1700(0x00D0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4509A0DC42DFA87EE15C14B0D06B0CD2;// 0x17D0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_82FADB9E405B613DCC15F7A4B6289FBB;// 0x1810(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_C9095CBF48BAE93B2ED0C8B72A7B22B6;// 0x18B0(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_6896B9064A018A3D4EFFB9BC08FEBE4B;// 0x18F0(0x00E0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_125E1CD84444AB2440069BBD027D1847;// 0x19D0(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_249D5B1842C687C20F93A2B98A15CCBF;// 0x1A10(0x0138)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_05552877466DC9AE378DEEB4D1BF6D23;// 0x1B48(0x0040)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_51A9F3D4440EC181C8DCA3B63629B724;// 0x1B88(0x00D8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_80C7E59343417D4435DCC480E345E405;// 0x1C60(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_689B68F4480F17E06E88D184FA3F3690;      // 0x1CA8(0x0068)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_CDBAC8D6436A35107DD33A99D73AECEC;// 0x1D10(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_CCA8BF3B47B9BF0BAA058C8B81FF66BC;// 0x1E48(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_BB3D1C2749DDF84D5B194A8DB620955E;// 0x1F80(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_ADDC45BF43C81BBCDDF09EA00F7946F9;// 0x20B8(0x0138)
	class ABP_PlayerCharacter_C*                       BPCharacter;                                              // 0x21F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_FP_Dwarf.ABP_FP_Dwarf_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FP_Dwarf_AnimGraphNode_TransitionResult_EB65D84C41981591720740B3B3929496();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FP_Dwarf_AnimGraphNode_SequencePlayer_F3B09174490F2F1CC8200CB58FE65BCF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FP_Dwarf_AnimGraphNode_SequencePlayer_66ECD03D489F4AA72104D7BEEB3E4990();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FP_Dwarf_AnimGraphNode_SequencePlayer_57A7EDF04D3E6ACA59E51B9226F6B3AF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FP_Dwarf_AnimGraphNode_TransitionResult_855D3DCF449114D56F38DAB30610D222();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FP_Dwarf_AnimGraphNode_SequencePlayer_A74D4F5E4BC12E3F032A1B94CDE7E1FF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FP_Dwarf_AnimGraphNode_SequencePlayer_0D25EEFC462716412642788FFEEBEFDA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FP_Dwarf_AnimGraphNode_TransitionResult_069A231241D9B9F643CA13906486F3BC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FP_Dwarf_AnimGraphNode_SequencePlayer_0072D2CD4DA4D455439303B47B562719();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FP_Dwarf_AnimGraphNode_SequencePlayer_8B72B9B947379DD3F396EAADE5EFCA70();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FP_Dwarf_AnimGraphNode_TransitionResult_6892F0614D4C71917CA0599A5943D378();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FP_Dwarf_AnimGraphNode_TransitionResult_AA63C49F4C9B352448B8F3958E416319();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FP_Dwarf_AnimGraphNode_SequencePlayer_82FADB9E405B613DCC15F7A4B6289FBB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FP_Dwarf_AnimGraphNode_TransitionResult_A80151F24B011A2CCA08A9846E9A149F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FP_Dwarf_AnimGraphNode_TransitionResult_3BAF855D4EA2D46607E5FC9F238B45F5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FP_Dwarf_AnimGraphNode_TransitionResult_406F1A12494A7224FC1396A7D566F007();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FP_Dwarf_AnimGraphNode_TransitionResult_FF9FEB8A42961DB8B1F06A9D42C5CEB8();
	void AnimNotify_Mine();
	void BlueprintInitializeAnimation();
	void StartInspectWeapon();
	void StopInspectWeapon();
	void AnimNotify_BeginBuild();
	void AnimNotify_EndBuild();
	void ExecuteUbergraph_ABP_FP_Dwarf(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
