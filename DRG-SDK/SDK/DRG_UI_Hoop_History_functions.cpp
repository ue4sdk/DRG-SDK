// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_Hoop_History_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Hoop_History.UI_Hoop_History_C.GetHistoryCount
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            History_Count                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Hoop_History_C::GetHistoryCount(int* History_Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Hoop_History.UI_Hoop_History_C.GetHistoryCount");

	struct
	{
		int                            History_Count;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (History_Count != nullptr)
		*History_Count = params.History_Count;
}


// Function UI_Hoop_History.UI_Hoop_History_C.OnRep_Scores
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_Hoop_History_C::OnRep_Scores()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Hoop_History.UI_Hoop_History_C.OnRep_Scores");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Hoop_History.UI_Hoop_History_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_Hoop_History_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Hoop_History.UI_Hoop_History_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Hoop_History.UI_Hoop_History_C.UpdateScores
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<int>                    Scores                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UUI_Hoop_History_C::UpdateScores(TArray<int> Scores)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Hoop_History.UI_Hoop_History_C.UpdateScores");

	struct
	{
		TArray<int>                    Scores;
	} params;

	params.Scores = Scores;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Hoop_History.UI_Hoop_History_C.ExecuteUbergraph_UI_Hoop_History
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Hoop_History_C::ExecuteUbergraph_UI_Hoop_History(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Hoop_History.UI_Hoop_History_C.ExecuteUbergraph_UI_Hoop_History");

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
