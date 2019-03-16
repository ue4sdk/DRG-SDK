// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_IntoxicationComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ToPercentStr
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 PercentString                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UBP_IntoxicationComponent_C::ToPercentStr(float Progress, struct FString* PercentString)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ToPercentStr");

	struct
	{
		float                          Progress;
		struct FString                 PercentString;
	} params;

	params.Progress = Progress;

	UObject::ProcessEvent(fn, &params);

	if (PercentString != nullptr)
		*PercentString = params.PercentString;
}


// Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.MyLerp
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Current_Value                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Target_Value                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Delta_Time                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_IntoxicationComponent_C::MyLerp(float Current_Value, float Target_Value, float Delta_Time, float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.MyLerp");

	struct
	{
		float                          Current_Value;
		float                          Target_Value;
		float                          Delta_Time;
		float                          Result;
	} params;

	params.Current_Value = Current_Value;
	params.Target_Value = Target_Value;
	params.Delta_Time = Delta_Time;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.SetPostProcessStrength
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          NewStrength                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_IntoxicationComponent_C::SetPostProcessStrength(float NewStrength)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.SetPostProcessStrength");

	struct
	{
		float                          NewStrength;
	} params;

	params.NewStrength = NewStrength;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.GetAlcoholPct
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// EDrinkableAlcoholStrength      Strength                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UBP_IntoxicationComponent_C::GetAlcoholPct(EDrinkableAlcoholStrength Strength)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.GetAlcoholPct");

	struct
	{
		EDrinkableAlcoholStrength      Strength;
		int                            ReturnValue;
	} params;

	params.Strength = Strength;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.Lerp Movement Stength
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_IntoxicationComponent_C::Lerp_Movement_Stength(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.Lerp Movement Stength");

	struct
	{
		float                          DeltaTime;
	} params;

	params.DeltaTime = DeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.Push Effects
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_IntoxicationComponent_C::Push_Effects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.Push Effects");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.Pop Effects
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 DebugReason                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UBP_IntoxicationComponent_C::Pop_Effects(const struct FString& DebugReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.Pop Effects");

	struct
	{
		struct FString                 DebugReason;
	} params;

	params.DebugReason = DebugReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ReceiveDrunkTick
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          DrunkTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_IntoxicationComponent_C::ReceiveDrunkTick(float DeltaTime, float DrunkTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ReceiveDrunkTick");

	struct
	{
		float                          DeltaTime;
		float                          DrunkTime;
	} params;

	params.DeltaTime = DeltaTime;
	params.DrunkTime = DrunkTime;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ReceivePassOutDrunk
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_IntoxicationComponent_C::ReceivePassOutDrunk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ReceivePassOutDrunk");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.Lerp Post Process Strength
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_IntoxicationComponent_C::Lerp_Post_Process_Strength(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.Lerp Post Process Strength");

	struct
	{
		float                          DeltaTime;
	} params;

	params.DeltaTime = DeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ReceiveDrunkEnd
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_IntoxicationComponent_C::ReceiveDrunkEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ReceiveDrunkEnd");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ReceiveDrunkBegin
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_IntoxicationComponent_C::ReceiveDrunkBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ReceiveDrunkBegin");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ExecuteUbergraph_BP_IntoxicationComponent
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_IntoxicationComponent_C::ExecuteUbergraph_BP_IntoxicationComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ExecuteUbergraph_BP_IntoxicationComponent");

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
