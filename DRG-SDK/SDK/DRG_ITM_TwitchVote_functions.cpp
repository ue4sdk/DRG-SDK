// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_TwitchVote_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_TwitchVote.ITM_TwitchVote_C.SetVotes
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_TwitchVote_C::SetVotes()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TwitchVote.ITM_TwitchVote_C.SetVotes");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_TwitchVote.ITM_TwitchVote_C.SetBiomes
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_TwitchVote_C::SetBiomes()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TwitchVote.ITM_TwitchVote_C.SetBiomes");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_TwitchVote.ITM_TwitchVote_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_TwitchVote_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TwitchVote.ITM_TwitchVote_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_TwitchVote.ITM_TwitchVote_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UITM_TwitchVote_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TwitchVote.ITM_TwitchVote_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_TwitchVote.ITM_TwitchVote_C.OnCommandCalled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Command                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UITM_TwitchVote_C::OnCommandCalled(const struct FString& Command)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TwitchVote.ITM_TwitchVote_C.OnCommandCalled");

	struct
	{
		struct FString                 Command;
	} params;

	params.Command = Command;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_TwitchVote.ITM_TwitchVote_C.HandleClock
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_TwitchVote_C::HandleClock()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TwitchVote.ITM_TwitchVote_C.HandleClock");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_TwitchVote.ITM_TwitchVote_C.ExecuteUbergraph_ITM_TwitchVote
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_TwitchVote_C::ExecuteUbergraph_ITM_TwitchVote(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TwitchVote.ITM_TwitchVote_C.ExecuteUbergraph_ITM_TwitchVote");

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
