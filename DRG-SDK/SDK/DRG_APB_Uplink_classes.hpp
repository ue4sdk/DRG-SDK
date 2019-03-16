#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_APB_Uplink_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass APB_Uplink.APB_Uplink_C
// 0x042E (0x078E - 0x0360)
class UAPB_Uplink_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_BB03E7C9468CD49D5B77D18EC1843EA7;      // 0x0368(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5D423D83452C0E0EA88FA2BBF072F3C4;// 0x03A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2AA3BAF54839D4248F51C18A40BD0BF3;// 0x03F0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DB62E4DC4A8E5075BD35D894294735BD;// 0x0438(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3E6D14A7410193BD825EFD8744578C26;// 0x04D8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_46544DB7426AAAFF81287A8270339C1A;// 0x0518(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_E5072F1B4DFB01976B8DA292EB9CFBD6;// 0x05B8(0x0040)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_B6DEFD964EEB66FC6AA8069268090D08;// 0x05F8(0x0070)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_EEF29738484F2B83D6C490ACD6952BDC;// 0x0668(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_DAD666A341ED30B35ED0FE9D7CBBB089;// 0x06A8(0x00E0)
	float                                              UplinkProgress;                                           // 0x0788(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsUplinking;                                              // 0x078C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Uplinked;                                                 // 0x078D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass APB_Uplink.APB_Uplink_C");
		return ptr;
	}


	void SetProgress(float Progress);
	void ExecuteUbergraph_APB_Uplink(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
