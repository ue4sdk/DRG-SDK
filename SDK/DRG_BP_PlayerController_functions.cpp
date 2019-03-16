// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_PlayerController_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PlayerController.BP_PlayerController_C.DestroyCharacter
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerController_C::DestroyCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.DestroyCharacter");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController.BP_PlayerController_C.IsHUDVisible
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Visible                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerController_C::IsHUDVisible(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.IsHUDVisible");

	struct
	{
		bool                           Visible;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Visible != nullptr)
		*Visible = params.Visible;
}


// Function BP_PlayerController.BP_PlayerController_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_O_K2Node_InputKeyEvent_12
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_PlayerController_C::InpActEvt_O_K2Node_InputKeyEvent_12(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_O_K2Node_InputKeyEvent_12");

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_PushToTalk_K2Node_InputActionEvent_4
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_PlayerController_C::InpActEvt_PushToTalk_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_PushToTalk_K2Node_InputActionEvent_4");

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_PushToTalk_K2Node_InputActionEvent_3
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_PlayerController_C::InpActEvt_PushToTalk_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_PushToTalk_K2Node_InputActionEvent_3");

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_MenuButton_K2Node_InputActionEvent_2
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_PlayerController_C::InpActEvt_MenuButton_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_MenuButton_K2Node_InputActionEvent_2");

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Eight_K2Node_InputKeyEvent_11
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_PlayerController_C::InpActEvt_Eight_K2Node_InputKeyEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Eight_K2Node_InputKeyEvent_11");

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Eight_K2Node_InputKeyEvent_10
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_PlayerController_C::InpActEvt_Eight_K2Node_InputKeyEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Eight_K2Node_InputKeyEvent_10");

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Nine_K2Node_InputKeyEvent_9
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_PlayerController_C::InpActEvt_Nine_K2Node_InputKeyEvent_9(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Nine_K2Node_InputKeyEvent_9");

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Nine_K2Node_InputKeyEvent_8
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_PlayerController_C::InpActEvt_Nine_K2Node_InputKeyEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Nine_K2Node_InputKeyEvent_8");

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Zero_K2Node_InputKeyEvent_7
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_PlayerController_C::InpActEvt_Zero_K2Node_InputKeyEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Zero_K2Node_InputKeyEvent_7");

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Zero_K2Node_InputKeyEvent_6
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_PlayerController_C::InpActEvt_Zero_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Zero_K2Node_InputKeyEvent_6");

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Chat_K2Node_InputActionEvent_1
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_PlayerController_C::InpActEvt_Chat_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Chat_K2Node_InputActionEvent_1");

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_5
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_PlayerController_C::InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_5");

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_4
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_PlayerController_C::InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_4");

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_3
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_PlayerController_C::InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_3");

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_2
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_PlayerController_C::InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_2");

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_H_K2Node_InputKeyEvent_1
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_PlayerController_C::InpActEvt_H_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_H_K2Node_InputKeyEvent_1");

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController.BP_PlayerController_C.SelectNewHero
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Hero                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerController_C::SelectNewHero(class UClass* Hero)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.SelectNewHero");

	struct
	{
		class UClass*                  Hero;
	} params;

	params.Hero = Hero;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController.BP_PlayerController_C.Proxy_Generate Landscape From Data
// (FUNC_Net, FUNC_NetReliable, FUNC_HasOutParms, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Seed                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FRoomNode>       Rooms                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FPathObstacle>   Obstacles                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FTunnelNode>     Tunnels                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void ABP_PlayerController_C::Proxy_Generate_Landscape_From_Data(int Seed, TArray<struct FRoomNode> Rooms, TArray<struct FPathObstacle> Obstacles, TArray<struct FTunnelNode> Tunnels)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Proxy_Generate Landscape From Data");

	struct
	{
		int                            Seed;
		TArray<struct FRoomNode>       Rooms;
		TArray<struct FPathObstacle>   Obstacles;
		TArray<struct FTunnelNode>     Tunnels;
	} params;

	params.Seed = Seed;
	params.Rooms = Rooms;
	params.Obstacles = Obstacles;
	params.Tunnels = Tunnels;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController.BP_PlayerController_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_PlayerController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController.BP_PlayerController_C.OnGenerationDone
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_PlayerController_C::OnGenerationDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnGenerationDone");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController.BP_PlayerController_C.Server_RestartLevel
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerController_C::Server_RestartLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Server_RestartLevel");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController.BP_PlayerController_C.ReceiveEndLevel
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_PlayerController_C::ReceiveEndLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.ReceiveEndLevel");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController.BP_PlayerController_C.Server_ClientReady
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerController_C::Server_ClientReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Server_ClientReady");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController.BP_PlayerController_C.SelectLateJoinCharacter
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Hero                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerController_C::SelectLateJoinCharacter(class UClass* Hero)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.SelectLateJoinCharacter");

	struct
	{
		class UClass*                  Hero;
	} params;

	params.Hero = Hero;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController.BP_PlayerController_C.RequestLoadScreen
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerController_C::RequestLoadScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.RequestLoadScreen");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController.BP_PlayerController_C.ShowSelectCharacterScreen
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerController_C::ShowSelectCharacterScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.ShowSelectCharacterScreen");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController.BP_PlayerController_C.ShowLoadingScrren
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerController_C::ShowLoadingScrren()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.ShowLoadingScrren");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController.BP_PlayerController_C.Receive_EndLevel_WaitForData
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_PlayerController_C::Receive_EndLevel_WaitForData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Receive_EndLevel_WaitForData");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController.BP_PlayerController_C.Server_RequestPLSData
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerController_C::Server_RequestPLSData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Server_RequestPLSData");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController.BP_PlayerController_C.RequestPLSData
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerController_C::RequestPLSData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.RequestPLSData");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController.BP_PlayerController_C.ExecuteUbergraph_BP_PlayerController
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerController_C::ExecuteUbergraph_BP_PlayerController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.ExecuteUbergraph_BP_PlayerController");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController.BP_PlayerController_C.ToggleFPS__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerController_C::ToggleFPS__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.ToggleFPS__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController.BP_PlayerController_C.CheatMenuRequested__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerController_C::CheatMenuRequested__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.CheatMenuRequested__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController.BP_PlayerController_C.MainMenuRequested__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerController_C::MainMenuRequested__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.MainMenuRequested__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
