// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Screen_LoadLevel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Screen_LoadLevel.Screen_LoadLevel_C.SetSeed
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTextBlock*              Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScreen_LoadLevel_C::SetSeed(class UTextBlock* Widget, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Screen_LoadLevel.Screen_LoadLevel_C.SetSeed");

	struct
	{
		class UTextBlock*              Widget;
		int                            Value;
	} params;

	params.Widget = Widget;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function Screen_LoadLevel.Screen_LoadLevel_C.AllPlayersHaveDifferentClass
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           AllClassesUniuqe               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScreen_LoadLevel_C::AllPlayersHaveDifferentClass(bool* AllClassesUniuqe)
{
	static auto fn = UObject::FindObject<UFunction>("Function Screen_LoadLevel.Screen_LoadLevel_C.AllPlayersHaveDifferentClass");

	struct
	{
		bool                           AllClassesUniuqe;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AllClassesUniuqe != nullptr)
		*AllClassesUniuqe = params.AllClassesUniuqe;
}


// Function Screen_LoadLevel.Screen_LoadLevel_C.RemovePlayer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_PlayerState_C*       PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScreen_LoadLevel_C::RemovePlayer(class ABP_PlayerState_C* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Screen_LoadLevel.Screen_LoadLevel_C.RemovePlayer");

	struct
	{
		class ABP_PlayerState_C*       PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function Screen_LoadLevel.Screen_LoadLevel_C.AreAllPlayersReady
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScreen_LoadLevel_C::AreAllPlayersReady(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Screen_LoadLevel.Screen_LoadLevel_C.AreAllPlayersReady");

	struct
	{
		bool                           Result;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Screen_LoadLevel.Screen_LoadLevel_C.AddPlayer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_PlayerState_C*       PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScreen_LoadLevel_C::AddPlayer(class ABP_PlayerState_C* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Screen_LoadLevel.Screen_LoadLevel_C.AddPlayer");

	struct
	{
		class ABP_PlayerState_C*       PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function Screen_LoadLevel.Screen_LoadLevel_C.GetPlayerState
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ABP_PlayerState_C*       AsBP_Player_State              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScreen_LoadLevel_C::GetPlayerState(class ABP_PlayerState_C** AsBP_Player_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Screen_LoadLevel.Screen_LoadLevel_C.GetPlayerState");

	struct
	{
		class ABP_PlayerState_C*       AsBP_Player_State;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AsBP_Player_State != nullptr)
		*AsBP_Player_State = params.AsBP_Player_State;
}


// Function Screen_LoadLevel.Screen_LoadLevel_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UScreen_LoadLevel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Screen_LoadLevel.Screen_LoadLevel_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Screen_LoadLevel.Screen_LoadLevel_C.PlayerJoined
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFSDPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScreen_LoadLevel_C::PlayerJoined(class AFSDPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Screen_LoadLevel.Screen_LoadLevel_C.PlayerJoined");

	struct
	{
		class AFSDPlayerState*         PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function Screen_LoadLevel.Screen_LoadLevel_C.PlayerLeft
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFSDPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScreen_LoadLevel_C::PlayerLeft(class AFSDPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Screen_LoadLevel.Screen_LoadLevel_C.PlayerLeft");

	struct
	{
		class AFSDPlayerState*         PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function Screen_LoadLevel.Screen_LoadLevel_C.StopLoader
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScreen_LoadLevel_C::StopLoader()
{
	static auto fn = UObject::FindObject<UFunction>("Function Screen_LoadLevel.Screen_LoadLevel_C.StopLoader");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Screen_LoadLevel.Screen_LoadLevel_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UScreen_LoadLevel_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Screen_LoadLevel.Screen_LoadLevel_C.Destruct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Screen_LoadLevel.Screen_LoadLevel_C.StartLoadSeq
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScreen_LoadLevel_C::StartLoadSeq()
{
	static auto fn = UObject::FindObject<UFunction>("Function Screen_LoadLevel.Screen_LoadLevel_C.StartLoadSeq");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Screen_LoadLevel.Screen_LoadLevel_C.ExecuteUbergraph_Screen_LoadLevel
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScreen_LoadLevel_C::ExecuteUbergraph_Screen_LoadLevel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Screen_LoadLevel.Screen_LoadLevel_C.ExecuteUbergraph_Screen_LoadLevel");

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
