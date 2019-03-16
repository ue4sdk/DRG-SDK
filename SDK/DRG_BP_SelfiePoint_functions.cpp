// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_SelfiePoint_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SelfiePoint.BP_SelfiePoint_C.GetTargetTransform
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTransform UBP_SelfiePoint_C::GetTargetTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SelfiePoint.BP_SelfiePoint_C.GetTargetTransform");

	struct
	{
		struct FTransform              ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_SelfiePoint.BP_SelfiePoint_C.DeactivateCamera
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SelfiePoint_C::DeactivateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SelfiePoint.BP_SelfiePoint_C.DeactivateCamera");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SelfiePoint.BP_SelfiePoint_C.ActivateCamera
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_SelfiePoint_C::ActivateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SelfiePoint.BP_SelfiePoint_C.ActivateCamera");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SelfiePoint.BP_SelfiePoint_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_SelfiePoint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SelfiePoint.BP_SelfiePoint_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SelfiePoint.BP_SelfiePoint_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_SelfiePoint_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SelfiePoint.BP_SelfiePoint_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SelfiePoint.BP_SelfiePoint_C.ExecuteUbergraph_BP_SelfiePoint
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_SelfiePoint_C::ExecuteUbergraph_BP_SelfiePoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SelfiePoint.BP_SelfiePoint_C.ExecuteUbergraph_BP_SelfiePoint");

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
