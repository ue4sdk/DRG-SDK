#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ABP_DroppodAirlock_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_DroppodAirlock.ABP_DroppodAirlock_C
// 0x0949 (0x0CA9 - 0x0360)
class UABP_DroppodAirlock_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D93767F4414FF91DB98B1294C522EE3D;      // 0x0368(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FF52676E464408D0F87B8896DB086C30;// 0x03A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_77833B774B5C8EBED97DF28E0828A928;// 0x03F0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DA02B05C48F4979EE9EB048CCA476804;// 0x0438(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_151E387F4C4DD4F4047315A3F4BC6F9A;// 0x0480(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9A6651BD4959480DE96FD7850D4B9C88;// 0x04C8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_913A7FDE43295CFEF6CBB5BD21F70C1E;// 0x0510(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_998CEC1D48D750AB6485E4960624C6ED;// 0x0558(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_ADD508C2463CB0A96B3C2C937BF3E3CD;// 0x05A0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E0EEFEF0404DE7071F245BBBAD686353;// 0x05E8(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_A3A02653407135E68F7D28B02B294229;// 0x0630(0x0070)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6EB777C24D58DABC71BC14A06872C3BD;// 0x06A0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8492327947DC47C8DD06B285325AFC49;// 0x06E0(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_94C298A742328AB0107CCCAB725D4973;// 0x0780(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_34800F304497BD85DDFC7C8E447E3D8D;// 0x07C0(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_A7F690F24ED0E8D82980BCA31271AB69;// 0x0860(0x0040)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_26060AD543896C199C71D798DEE29426;// 0x08A0(0x0070)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7C2FADB4451D143A8805DDA136959C47;// 0x0910(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D4EFA86343AFC3ACEC36AB845306D457;// 0x0950(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2261FF974E8BD7FF73CFE88D39B2B624;// 0x09F0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3870D5E04E1599BBF1EF9DB57489C9E2;// 0x0A30(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_ED31F1E74C0059C4A1987F91BC8BF38F;// 0x0AD0(0x0040)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_D682E6A8458DC9309CF65CA46A6A9B91;// 0x0B10(0x0070)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6C8E7CE342476580BF150B9696C8327F;// 0x0B80(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_7A79C546477695D1762CA5B1BF93164E;// 0x0BC0(0x00E0)
	class ABP_DropPod_Base_C*                          DropPod;                                                  // 0x0CA0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EDroppodDoorState>                     TestDoorState;                                            // 0x0CA8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_DroppodAirlock.ABP_DroppodAirlock_C");
		return ptr;
	}


	void GetDoorState(TEnumAsByte<EDroppodDoorState>* DoorState);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DroppodAirlock_AnimGraphNode_TransitionResult_9A6651BD4959480DE96FD7850D4B9C88();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DroppodAirlock_AnimGraphNode_TransitionResult_913A7FDE43295CFEF6CBB5BD21F70C1E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DroppodAirlock_AnimGraphNode_TransitionResult_998CEC1D48D750AB6485E4960624C6ED();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DroppodAirlock_AnimGraphNode_TransitionResult_DA02B05C48F4979EE9EB048CCA476804();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DroppodAirlock_AnimGraphNode_TransitionResult_ADD508C2463CB0A96B3C2C937BF3E3CD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DroppodAirlock_AnimGraphNode_TransitionResult_E0EEFEF0404DE7071F245BBBAD686353();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DroppodAirlock_AnimGraphNode_TransitionResult_77833B774B5C8EBED97DF28E0828A928();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DroppodAirlock_AnimGraphNode_TransitionResult_FF52676E464408D0F87B8896DB086C30();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DroppodAirlock_AnimGraphNode_TransitionResult_151E387F4C4DD4F4047315A3F4BC6F9A();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_ABP_DroppodAirlock(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
