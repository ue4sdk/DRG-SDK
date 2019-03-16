// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_Countdown_Extraction_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.FormatTime
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Time                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Text                           (CPF_Parm, CPF_OutParm)

void UHUD_Countdown_Extraction_C::FormatTime(int Time, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.FormatTime");

	struct
	{
		int                            Time;
		struct FText                   Text;
	} params;

	params.Time = Time;

	UObject::ProcessEvent(fn, &params);

	if (Text != nullptr)
		*Text = params.Text;
}


// Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.CountdownStarted
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   countdownText                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UHUD_Countdown_Extraction_C::CountdownStarted(const struct FText& countdownText)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.CountdownStarted");

	struct
	{
		struct FText                   countdownText;
	} params;

	params.countdownText = countdownText;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.OnCountdownTimeChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SecondsLeft                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Countdown_Extraction_C::OnCountdownTimeChanged(int SecondsLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.OnCountdownTimeChanged");

	struct
	{
		int                            SecondsLeft;
	} params;

	params.SecondsLeft = SecondsLeft;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.OnCountdownFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_Countdown_Extraction_C::OnCountdownFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.OnCountdownFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_Countdown_Extraction_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Countdown_Extraction_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.ExecuteUbergraph_HUD_Countdown_Extraction
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Countdown_Extraction_C::ExecuteUbergraph_HUD_Countdown_Extraction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.ExecuteUbergraph_HUD_Countdown_Extraction");

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
