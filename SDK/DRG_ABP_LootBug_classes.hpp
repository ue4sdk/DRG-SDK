#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ABP_LootBug_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_LootBug.ABP_LootBug_C
// 0x04A0 (0x0870 - 0x03D0)
class UABP_LootBug_C : public USimpleMovingEnemyAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_451F109141A657DC5C7509A60136649A;      // 0x03D8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EFBB90434B4CBCB833C915A35D472625;// 0x0418(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6CC847414487B89F5B8B2E984F86B95D;// 0x0460(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_B944EE9A4CADF673F93933A99377B58A;// 0x0500(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_29017937469D44716E08C1AE2832DBFE;// 0x0540(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D2DC40FC45AC99FDFEE0D8B3505F5FBF;// 0x05E0(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_540CB3BB492F97A594D536B1D235AA63;// 0x0680(0x00D0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_A277B06C495514E3EA35FA81B7655744;// 0x0750(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_DA87045A4A90EC0971C2ABBE4880869C;// 0x0790(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_LootBug.ABP_LootBug_C");
		return ptr;
	}


	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_ABP_LootBug(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
