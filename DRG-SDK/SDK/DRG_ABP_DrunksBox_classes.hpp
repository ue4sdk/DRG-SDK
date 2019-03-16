#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ABP_DrunksBox_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_DrunksBox.ABP_DrunksBox_C
// 0x06CA (0x0A2A - 0x0360)
class UABP_DrunksBox_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_08A108424F848A64CAA7CFA3A9C2B717;      // 0x0368(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_95ABF56E43B362B4B6AC8EA8B4EF117C;// 0x03A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2D0B571345FB72043DF8B29C32D51C60;// 0x03F0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_543F48C744957F5CA814289898FE7F0A;// 0x0438(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_76F294AE43FE145A19264EAD7627681E;// 0x0480(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_838D206046DAD673CC35839E01E710A9;// 0x04C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A7CE10654BCC6509BC710E898471763C;// 0x0510(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_47652087442AE6072F25FC95690F7E34;// 0x05B0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8FEB094F45CDADB3214E6CBC2319BBA6;// 0x05F0(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9A2666D640DBB77DAF2EDBA2CF70AB49;// 0x0690(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_391D02EF41FE25CD62F525836A6797E2;// 0x06D0(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_09EC10174D9F0D1F2677879567FF7740;// 0x0770(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_023ED94E444F256DF6B008B6952418E3;// 0x07B0(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_E6C071D5446C9B283A67B3B22A5CA3A8;// 0x0850(0x0040)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_EA7BD9B0423555005588B69E42EFD7EC;// 0x0890(0x0070)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_EE23415B4801EF8642731F90D44A883F;// 0x0900(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_DC9367584A6EF7BEF930ECBE51DF5D76;// 0x0940(0x00E0)
	class ABP_DrinksBox_C*                             DrinkBox;                                                 // 0x0A20(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               DrinkBoxValid;                                            // 0x0A28(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      State;                                                    // 0x0A29(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_DrunksBox.ABP_DrunksBox_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DrunksBox_AnimGraphNode_TransitionResult_543F48C744957F5CA814289898FE7F0A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DrunksBox_AnimGraphNode_TransitionResult_838D206046DAD673CC35839E01E710A9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DrunksBox_AnimGraphNode_TransitionResult_95ABF56E43B362B4B6AC8EA8B4EF117C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DrunksBox_AnimGraphNode_TransitionResult_2D0B571345FB72043DF8B29C32D51C60();
	void BlueprintBeginPlay();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_DrunksBox(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
