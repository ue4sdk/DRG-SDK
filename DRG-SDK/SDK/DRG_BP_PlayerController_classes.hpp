#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_PlayerController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerController.BP_PlayerController_C
// 0x0048 (0x08D0 - 0x0888)
class ABP_PlayerController_C : public ABP_PlayerControllerBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0888(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FScriptMulticastDelegate                    MainMenuRequested;                                        // 0x0890(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	bool                                               HUD_Visible;                                              // 0x08A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x08A1(0x0003) MISSED OFFSET
	int                                                CheatCounter;                                             // 0x08A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    CheatMenuRequested;                                       // 0x08A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	class UClass*                                      MouseCursor_DO_NOT_DELETE;                                // 0x08B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    ToggleFPS;                                                // 0x08C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_PlayerController.BP_PlayerController_C");
		return ptr;
	}


	void DestroyCharacter();
	void IsHUDVisible(bool* Visible);
	void UserConstructionScript();
	void InpActEvt_O_K2Node_InputKeyEvent_12(const struct FKey& Key);
	void InpActEvt_PushToTalk_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_PushToTalk_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_MenuButton_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Eight_K2Node_InputKeyEvent_11(const struct FKey& Key);
	void InpActEvt_Eight_K2Node_InputKeyEvent_10(const struct FKey& Key);
	void InpActEvt_Nine_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void InpActEvt_Nine_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_Zero_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_Zero_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_Chat_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_H_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void SelectNewHero(class UClass* Hero);
	void Proxy_Generate_Landscape_From_Data(int Seed, TArray<struct FRoomNode> Rooms, TArray<struct FPathObstacle> Obstacles, TArray<struct FTunnelNode> Tunnels);
	void ReceiveBeginPlay();
	void OnGenerationDone();
	void Server_RestartLevel();
	void ReceiveEndLevel();
	void Server_ClientReady();
	void SelectLateJoinCharacter(class UClass* Hero);
	void RequestLoadScreen();
	void ShowSelectCharacterScreen();
	void ShowLoadingScrren();
	void Receive_EndLevel_WaitForData();
	void Server_RequestPLSData();
	void RequestPLSData();
	void ExecuteUbergraph_BP_PlayerController(int EntryPoint);
	void ToggleFPS__DelegateSignature();
	void CheatMenuRequested__DelegateSignature();
	void MainMenuRequested__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
