// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_SpaceRig_GamemOde_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.PlayerCanRestart
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerController*       Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ABP_SpaceRig_Gamemode_C::PlayerCanRestart(class APlayerController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.PlayerCanRestart");

	struct
	{
		class APlayerController*       Player;
		bool                           ReturnValue;
	} params;

	params.Player = Player;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.SendMissionStartAnalytics
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SpaceRig_Gamemode_C::SendMissionStartAnalytics()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.SendMissionStartAnalytics");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.FindOwnedCabin
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AController*             Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ABP_CabinController_C*   Cabin                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SpaceRig_Gamemode_C::FindOwnedCabin(class AController* Player, class ABP_CabinController_C** Cabin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.FindOwnedCabin");

	struct
	{
		class AController*             Player;
		class ABP_CabinController_C*   Cabin;
	} params;

	params.Player = Player;

	UObject::ProcessEvent(fn, &params);

	if (Cabin != nullptr)
		*Cabin = params.Cabin;
}


// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.FreeCabin
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_PlayerController_SpaceRig_C* Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SpaceRig_Gamemode_C::FreeCabin(class ABP_PlayerController_SpaceRig_C* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.FreeCabin");

	struct
	{
		class ABP_PlayerController_SpaceRig_C* Player;
	} params;

	params.Player = Player;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.AssignCabin
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AController*             Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ABP_CabinController_C*   Cabin                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SpaceRig_Gamemode_C::AssignCabin(class AController* Player, class ABP_CabinController_C** Cabin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.AssignCabin");

	struct
	{
		class AController*             Player;
		class ABP_CabinController_C*   Cabin;
	} params;

	params.Player = Player;

	UObject::ProcessEvent(fn, &params);

	if (Cabin != nullptr)
		*Cabin = params.Cabin;
}


// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.FindCabins
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SpaceRig_Gamemode_C::FindCabins()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.FindCabins");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.SelectRandomAvailableClass
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SpaceRig_Gamemode_C::SelectRandomAvailableClass(class AFSDPlayerState* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.SelectRandomAvailableClass");

	struct
	{
		class AFSDPlayerState*         Player;
	} params;

	params.Player = Player;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.ChoosePlayerStart
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AController*             Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* ABP_SpaceRig_Gamemode_C::ChoosePlayerStart(class AController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.ChoosePlayerStart");

	struct
	{
		class AController*             Player;
		class AActor*                  ReturnValue;
	} params;

	params.Player = Player;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.GetGameState
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ABP_GameState_SpaceRig_C* GameState                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SpaceRig_Gamemode_C::GetGameState(class ABP_GameState_SpaceRig_C** GameState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.GetGameState");

	struct
	{
		class ABP_GameState_SpaceRig_C* GameState;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (GameState != nullptr)
		*GameState = params.GameState;
}


// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.GetDefaultPawnClassForController
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AController*             InController                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UClass* ABP_SpaceRig_Gamemode_C::GetDefaultPawnClassForController(class AController* InController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.GetDefaultPawnClassForController");

	struct
	{
		class AController*             InController;
		class UClass*                  ReturnValue;
	} params;

	params.InController = InController;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SpaceRig_Gamemode_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.OnFailure_1E75EB674DDE2C1E6C7EC18D18AFDB55
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SpaceRig_Gamemode_C::OnFailure_1E75EB674DDE2C1E6C7EC18D18AFDB55()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.OnFailure_1E75EB674DDE2C1E6C7EC18D18AFDB55");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.OnSuccess_1E75EB674DDE2C1E6C7EC18D18AFDB55
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SpaceRig_Gamemode_C::OnSuccess_1E75EB674DDE2C1E6C7EC18D18AFDB55()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.OnSuccess_1E75EB674DDE2C1E6C7EC18D18AFDB55");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_SpaceRig_Gamemode_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.OnCountdownComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SpaceRig_Gamemode_C::OnCountdownComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.OnCountdownComplete");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.K2_OnLogout
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AController*             ExitingController              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SpaceRig_Gamemode_C::K2_OnLogout(class AController* ExitingController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.K2_OnLogout");

	struct
	{
		class AController*             ExitingController;
	} params;

	params.ExitingController = ExitingController;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.K2_OnRestartPlayer
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AController*             NewPlayer                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SpaceRig_Gamemode_C::K2_OnRestartPlayer(class AController* NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.K2_OnRestartPlayer");

	struct
	{
		class AController*             NewPlayer;
	} params;

	params.NewPlayer = NewPlayer;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.ControllerReady
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFSDPlayerController*    Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SpaceRig_Gamemode_C::ControllerReady(class AFSDPlayerController* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.ControllerReady");

	struct
	{
		class AFSDPlayerController*    Target;
	} params;

	params.Target = Target;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.InstantlyStartMission
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SpaceRig_Gamemode_C::InstantlyStartMission()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.InstantlyStartMission");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.ExecuteUbergraph_BP_SpaceRig_Gamemode
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SpaceRig_Gamemode_C::ExecuteUbergraph_BP_SpaceRig_Gamemode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.ExecuteUbergraph_BP_SpaceRig_Gamemode");

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
