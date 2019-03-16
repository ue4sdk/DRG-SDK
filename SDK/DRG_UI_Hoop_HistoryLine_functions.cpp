// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_Hoop_HistoryLine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Hoop_HistoryLine.UI_Hoop_HistoryLine_C.SetScore
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Score                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Hoop_HistoryLine_C::SetScore(int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Hoop_HistoryLine.UI_Hoop_HistoryLine_C.SetScore");

	struct
	{
		int                            Score;
	} params;

	params.Score = Score;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Hoop_HistoryLine.UI_Hoop_HistoryLine_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_Hoop_HistoryLine_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Hoop_HistoryLine.UI_Hoop_HistoryLine_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Hoop_HistoryLine.UI_Hoop_HistoryLine_C.ExecuteUbergraph_UI_Hoop_HistoryLine
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Hoop_HistoryLine_C::ExecuteUbergraph_UI_Hoop_HistoryLine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Hoop_HistoryLine.UI_Hoop_HistoryLine_C.ExecuteUbergraph_UI_Hoop_HistoryLine");

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
