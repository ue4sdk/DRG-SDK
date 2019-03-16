// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ABP_Gatling_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Gatling.ABP_Gatling_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Gatling_AnimGraphNode_TransitionResult_C43F1AB0406296EBFD76D282EDD7538C
// (FUNC_BlueprintEvent)

void UABP_Gatling_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Gatling_AnimGraphNode_TransitionResult_C43F1AB0406296EBFD76D282EDD7538C()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Gatling.ABP_Gatling_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Gatling_AnimGraphNode_TransitionResult_C43F1AB0406296EBFD76D282EDD7538C");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ABP_Gatling.ABP_Gatling_C.ExecuteUbergraph_ABP_Gatling
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UABP_Gatling_C::ExecuteUbergraph_ABP_Gatling(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Gatling.ABP_Gatling_C.ExecuteUbergraph_ABP_Gatling");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
