// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_WeeklyRequirement_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_WeeklyRequirement.ITM_WeeklyRequirement_C.DoubleDigit
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UITM_WeeklyRequirement_C::DoubleDigit(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_WeeklyRequirement.ITM_WeeklyRequirement_C.DoubleDigit");

	struct
	{
		int                            Value;
		struct FText                   ReturnValue;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ITM_WeeklyRequirement.ITM_WeeklyRequirement_C.GetTimeText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   Message_                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FTimespan               Timespan                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// struct FText                   Result                         (CPF_Parm, CPF_OutParm)

void UITM_WeeklyRequirement_C::GetTimeText(const struct FText& Message_, const struct FTimespan& Timespan, struct FText* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_WeeklyRequirement.ITM_WeeklyRequirement_C.GetTimeText");

	struct
	{
		struct FText                   Message_;
		struct FTimespan               Timespan;
		struct FText                   Result;
	} params;

	params.Message_ = Message_;
	params.Timespan = Timespan;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ITM_WeeklyRequirement.ITM_WeeklyRequirement_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_WeeklyRequirement_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_WeeklyRequirement.ITM_WeeklyRequirement_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_WeeklyRequirement.ITM_WeeklyRequirement_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UITM_WeeklyRequirement_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_WeeklyRequirement.ITM_WeeklyRequirement_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_WeeklyRequirement.ITM_WeeklyRequirement_C.Update Time
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_WeeklyRequirement_C::Update_Time()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_WeeklyRequirement.ITM_WeeklyRequirement_C.Update Time");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_WeeklyRequirement.ITM_WeeklyRequirement_C.ExecuteUbergraph_ITM_WeeklyRequirement
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_WeeklyRequirement_C::ExecuteUbergraph_ITM_WeeklyRequirement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_WeeklyRequirement.ITM_WeeklyRequirement_C.ExecuteUbergraph_ITM_WeeklyRequirement");

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
