// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_GameMode_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GameMode.BP_GameMode_C.LoadToMission
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMissionTemplate*        Mission                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_GameMode_C::LoadToMission(class UMissionTemplate* Mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.LoadToMission");

	struct
	{
		class UMissionTemplate*        Mission;
	} params;

	params.Mission = Mission;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameMode.BP_GameMode_C.GetDefaultPawnClassForController
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AController*             InController                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UClass* ABP_GameMode_C::GetDefaultPawnClassForController(class AController* InController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.GetDefaultPawnClassForController");

	struct
	{
		class AController*             InController;
		class UClass*                  ReturnValue;
	} params;

	params.InController = InController;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_GameMode.BP_GameMode_C.PlayersAreReady
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ABP_GameMode_C::PlayersAreReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.PlayersAreReady");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_GameMode.BP_GameMode_C.SetDesiredDifficulty
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_GameMode_C::SetDesiredDifficulty()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.SetDesiredDifficulty");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameMode.BP_GameMode_C.ChoosePlayerStart
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AController*             Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* ABP_GameMode_C::ChoosePlayerStart(class AController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.ChoosePlayerStart");

	struct
	{
		class AController*             Player;
		class AActor*                  ReturnValue;
	} params;

	params.Player = Player;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_GameMode.BP_GameMode_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_GameMode_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameMode.BP_GameMode_C.RecieveEndLevel
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_GameMode_C::RecieveEndLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.RecieveEndLevel");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameMode.BP_GameMode_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_GameMode_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameMode.BP_GameMode_C.WaitForGeneration
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_GameMode_C::WaitForGeneration()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.WaitForGeneration");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameMode.BP_GameMode_C.Recieve_ContinueTimerEnded
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_GameMode_C::Recieve_ContinueTimerEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.Recieve_ContinueTimerEnded");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameMode.BP_GameMode_C.Call DropPod
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_GameMode_C::Call_DropPod()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.Call DropPod");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameMode.BP_GameMode_C.Trigger End Wave
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           cancelAllWaves                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_GameMode_C::Trigger_End_Wave(bool cancelAllWaves)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.Trigger End Wave");

	struct
	{
		bool                           cancelAllWaves;
	} params;

	params.cancelAllWaves = cancelAllWaves;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameMode.BP_GameMode_C.SpawnBosco
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform              Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void ABP_GameMode_C::SpawnBosco(const struct FTransform& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.SpawnBosco");

	struct
	{
		struct FTransform              Location;
	} params;

	params.Location = Location;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameMode.BP_GameMode_C.RemoveBosco
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_GameMode_C::RemoveBosco()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.RemoveBosco");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameMode.BP_GameMode_C.OnPlayerJoined_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFSDPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_GameMode_C::OnPlayerJoined_Event_1(class AFSDPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.OnPlayerJoined_Event_1");

	struct
	{
		class AFSDPlayerState*         PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameMode.BP_GameMode_C.DonkeyButtonPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_GameMode_C::DonkeyButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.DonkeyButtonPressed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameMode.BP_GameMode_C.Handle Bosco Respawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_GameMode_C::Handle_Bosco_Respawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.Handle Bosco Respawn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameMode.BP_GameMode_C.OnPlayerLeave
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFSDPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_GameMode_C::OnPlayerLeave(class AFSDPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.OnPlayerLeave");

	struct
	{
		class AFSDPlayerState*         PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameMode.BP_GameMode_C.ExecuteUbergraph_BP_GameMode
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_GameMode_C::ExecuteUbergraph_BP_GameMode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.ExecuteUbergraph_BP_GameMode");

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
