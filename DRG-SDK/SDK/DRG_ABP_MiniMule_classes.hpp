#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ABP_MiniMule_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_MiniMule.ABP_MiniMule_C
// 0x0B24 (0x0EF4 - 0x03D0)
class UABP_MiniMule_C : public USimpleMovingEnemyAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D0BA742242B8C1372015DDB2416B0910;      // 0x03D8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7405A8154A544084A023AD9F445A3F2A;// 0x0418(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_85C001CE42A8AA0722A483A34FA6D550;// 0x0460(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_34CD39DE40ABABE192C5138CCEE0816E;// 0x04A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9C32A3A94978AEF082102B888E5DB3E0;// 0x04F0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_19E656D143BE44BBA89C8F9F137BC6BF;// 0x0538(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8219616141383B4DA5A893BAB5420886;// 0x0580(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D057A16C491442997BFD0F8A6886330B;// 0x06B8(0x0138)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3C6E473B4EB3B6209183858D1FE395D0;// 0x07F0(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E2B807C04A579CF342B5D7AB52B71A5B;// 0x0830(0x0138)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_908019DB473C01DE5DC3B4B9537D7905;// 0x0968(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E3CAF6CD42100CB50D9403BC842BAEBA;// 0x09A8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_0A60A4B04A7E050F98B0C4B29BC2A555;// 0x0A48(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5F9DD77B410727D3F212D1A6A6EFA2DE;// 0x0A88(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_C525A7A6430A7EDAC4456AB1539C23BD;// 0x0B28(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E29B2C2742374B8E47954981B9C15CA5;// 0x0B68(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_F9F0839F47C82BC02476008014841799;// 0x0C08(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1FDCE6A64E44850FB917EB996F2B0B52;// 0x0C48(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3568F60E414B7F4CD4DB3AA8B01BD789;// 0x0CE8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6281EAEB40FD509E7CD5F5B4DC2BA6BA;// 0x0D28(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_05E550954AF6C318E2CFD8A42D84483A;// 0x0DC8(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_1CADE8DD460469C5BBD7519045FD9F61;// 0x0E08(0x00E0)
	class ABP_MiniMule_Salvage_C*                      MULE;                                                     // 0x0EE8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LegTwist;                                                 // 0x0EF0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_MiniMule.ABP_MiniMule_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniMule_AnimGraphNode_TransitionResult_19E656D143BE44BBA89C8F9F137BC6BF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniMule_AnimGraphNode_TransitionResult_34CD39DE40ABABE192C5138CCEE0816E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniMule_AnimGraphNode_ModifyBone_8219616141383B4DA5A893BAB5420886();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniMule_AnimGraphNode_ModifyBone_D057A16C491442997BFD0F8A6886330B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniMule_AnimGraphNode_ModifyBone_E2B807C04A579CF342B5D7AB52B71A5B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniMule_AnimGraphNode_TransitionResult_85C001CE42A8AA0722A483A34FA6D550();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniMule_AnimGraphNode_TransitionResult_7405A8154A544084A023AD9F445A3F2A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniMule_AnimGraphNode_TransitionResult_9C32A3A94978AEF082102B888E5DB3E0();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_ABP_MiniMule(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
