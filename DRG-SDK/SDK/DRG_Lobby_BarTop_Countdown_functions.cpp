// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Lobby_BarTop_Countdown_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULobby_BarTop_Countdown_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.CountDownChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsActive                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobby_BarTop_Countdown_C::CountDownChanged(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.CountDownChanged");

	struct
	{
		bool                           IsActive;
	} params;

	params.IsActive = IsActive;

	UObject::ProcessEvent(fn, &params);
}


// Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.TimerChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          newTime                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobby_BarTop_Countdown_C::TimerChanged(float newTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.TimerChanged");

	struct
	{
		float                          newTime;
	} params;

	params.newTime = newTime;

	UObject::ProcessEvent(fn, &params);
}


// Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.HostCoundownChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsActive                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobby_BarTop_Countdown_C::HostCoundownChanged(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.HostCoundownChanged");

	struct
	{
		bool                           IsActive;
	} params;

	params.IsActive = IsActive;

	UObject::ProcessEvent(fn, &params);
}


// Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.CustomEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          newTime                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobby_BarTop_Countdown_C::CustomEvent(float newTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.CustomEvent");

	struct
	{
		float                          newTime;
	} params;

	params.newTime = newTime;

	UObject::ProcessEvent(fn, &params);
}


// Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobby_BarTop_Countdown_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.ExecuteUbergraph_Lobby_BarTop_Countdown
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobby_BarTop_Countdown_C::ExecuteUbergraph_Lobby_BarTop_Countdown(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.ExecuteUbergraph_Lobby_BarTop_Countdown");

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
