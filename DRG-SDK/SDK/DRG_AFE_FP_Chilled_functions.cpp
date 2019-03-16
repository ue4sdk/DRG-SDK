// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_AFE_FP_Chilled_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AFE_FP_Chilled.AFE_FP_Chilled_C.ReceiveBeginEffect
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UPawnAfflictionComponent* Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UAFE_FP_Chilled_C::ReceiveBeginEffect(class UPawnAfflictionComponent* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function AFE_FP_Chilled.AFE_FP_Chilled_C.ReceiveBeginEffect");

	struct
	{
		class UPawnAfflictionComponent* Target;
	} params;

	params.Target = Target;

	UObject::ProcessEvent(fn, &params);
}


// Function AFE_FP_Chilled.AFE_FP_Chilled_C.ReceiveEndEffect
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UPawnAfflictionComponent* Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UAFE_FP_Chilled_C::ReceiveEndEffect(class UPawnAfflictionComponent* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function AFE_FP_Chilled.AFE_FP_Chilled_C.ReceiveEndEffect");

	struct
	{
		class UPawnAfflictionComponent* Target;
	} params;

	params.Target = Target;

	UObject::ProcessEvent(fn, &params);
}


// Function AFE_FP_Chilled.AFE_FP_Chilled_C.ExecuteUbergraph_AFE_FP_Chilled
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAFE_FP_Chilled_C::ExecuteUbergraph_AFE_FP_Chilled(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AFE_FP_Chilled.AFE_FP_Chilled_C.ExecuteUbergraph_AFE_FP_Chilled");

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
