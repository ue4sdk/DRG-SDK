// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_PlayerController_SpaceRig_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.SetIsEscapeMenuEnabled
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InEscapeMenuEnabled            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::SetIsEscapeMenuEnabled(bool InEscapeMenuEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.SetIsEscapeMenuEnabled");

	struct
	{
		bool                           InEscapeMenuEnabled;
	} params;

	params.InEscapeMenuEnabled = InEscapeMenuEnabled;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.hudVisible
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ABP_PlayerController_SpaceRig_C::hudVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.hudVisible");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ChangeHUDVisible
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsHUDVisible                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EHUDVisibilityReason           reason                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::ChangeHUDVisible(bool IsHUDVisible, EHUDVisibilityReason reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ChangeHUDVisible");

	struct
	{
		bool                           IsHUDVisible;
		EHUDVisibilityReason           reason;
	} params;

	params.IsHUDVisible = IsHUDVisible;
	params.reason = reason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.SelectLastPlayedCharacter
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::SelectLastPlayedCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.SelectLastPlayedCharacter");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.AddWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_ReferenceParm, CPF_IsPlainOldData)
// int                            ZOrder                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// ESlateVisibility               InVisibility                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::AddWidget(int ZOrder, ESlateVisibility InVisibility, class UUserWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.AddWidget");

	struct
	{
		class UUserWidget*             Widget;
		int                            ZOrder;
		ESlateVisibility               InVisibility;
	} params;

	params.ZOrder = ZOrder;
	params.InVisibility = InVisibility;

	UObject::ProcessEvent(fn, &params);

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ChangeCharacter
// (FUNC_Protected, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  NewCharacter                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::ChangeCharacter(class UClass* NewCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ChangeCharacter");

	struct
	{
		class UClass*                  NewCharacter;
	} params;

	params.NewCharacter = NewCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.CreateUI
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::CreateUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.CreateUI");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_PushToTalk_K2Node_InputActionEvent_6
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_PlayerController_SpaceRig_C::InpActEvt_PushToTalk_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_PushToTalk_K2Node_InputActionEvent_6");

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_PushToTalk_K2Node_InputActionEvent_5
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_PlayerController_SpaceRig_C::InpActEvt_PushToTalk_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_PushToTalk_K2Node_InputActionEvent_5");

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_O_K2Node_InputKeyEvent_2
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_PlayerController_SpaceRig_C::InpActEvt_O_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_O_K2Node_InputKeyEvent_2");

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_MenuButton_K2Node_InputActionEvent_4
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_PlayerController_SpaceRig_C::InpActEvt_MenuButton_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_MenuButton_K2Node_InputActionEvent_4");

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Chat_K2Node_InputActionEvent_3
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_PlayerController_SpaceRig_C::InpActEvt_Chat_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Chat_K2Node_InputActionEvent_3");

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_P_K2Node_InputKeyEvent_1
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_PlayerController_SpaceRig_C::InpActEvt_P_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_P_K2Node_InputKeyEvent_1");

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_CallDonkey_K2Node_InputActionEvent_2
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_PlayerController_SpaceRig_C::InpActEvt_CallDonkey_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_CallDonkey_K2Node_InputActionEvent_2");

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_MapTool_K2Node_InputActionEvent_1
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_PlayerController_SpaceRig_C::InpActEvt_MapTool_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_MapTool_K2Node_InputActionEvent_1");

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowServerBrowser
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::ShowServerBrowser()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowServerBrowser");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowMissionSelect
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::ShowMissionSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowMissionSelect");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Client_OpenMap
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::Client_OpenMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Client_OpenMap");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.PlayerChangeCharacter
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  NewCharacter                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::PlayerChangeCharacter(class UClass* NewCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.PlayerChangeCharacter");

	struct
	{
		class UClass*                  NewCharacter;
	} params;

	params.NewCharacter = NewCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.RecievePreClientTravel
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::RecievePreClientTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.RecievePreClientTravel");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCharacterSelect
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::ShowCharacterSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCharacterSelect");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowItemScreen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  itemClass                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::ShowItemScreen(class UClass* itemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowItemScreen");

	struct
	{
		class UClass*                  itemClass;
	} params;

	params.itemClass = itemClass;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ControllerReady
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::ControllerReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ControllerReady");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.RecieveOnControllerReady
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::RecieveOnControllerReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.RecieveOnControllerReady");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowBuyItemPopup
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UItemUpgrade*            Upgrade                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::ShowBuyItemPopup(class UClass* Item, class UItemUpgrade* Upgrade)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowBuyItemPopup");

	struct
	{
		class UClass*                  Item;
		class UItemUpgrade*            Upgrade;
	} params;

	params.Item = Item;
	params.Upgrade = Upgrade;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ReceiveDestroyed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ReceiveDestroyed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnCharacterPossesd
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::OnCharacterPossesd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnCharacterPossesd");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCharCustomization
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::ShowCharCustomization()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCharCustomization");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCrafting
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::ShowCrafting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCrafting");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCharacterScreenAndWorld
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::ShowCharacterScreenAndWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCharacterScreenAndWorld");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCraftingAndWorld
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::ShowCraftingAndWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCraftingAndWorld");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCustomizationAndWorld
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::ShowCustomizationAndWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCustomizationAndWorld");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.SpawnPlayer
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::SpawnPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.SpawnPlayer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowFirstCharacterSelect
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::ShowFirstCharacterSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowFirstCharacterSelect");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowMatchMakingRandom
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::ShowMatchMakingRandom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowMatchMakingRandom");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OpenCharacterSelector
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           OpenVideo                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           AllowBack                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::OpenCharacterSelector(bool OpenVideo, bool AllowBack)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OpenCharacterSelector");

	struct
	{
		bool                           OpenVideo;
		bool                           AllowBack;
	} params;

	params.OpenVideo = OpenVideo;
	params.AllowBack = AllowBack;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowReconnectController
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::ShowReconnectController()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowReconnectController");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnFirstWindowOpened
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::OnFirstWindowOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnFirstWindowOpened");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnLastWindowClosed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::OnLastWindowClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnLastWindowClosed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowNetworkError
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::ShowNetworkError()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowNetworkError");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowTrading
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::ShowTrading()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowTrading");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowWindowByClass
// (FUNC_Net, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  windowClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ZOrder                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::ShowWindowByClass(class UClass* windowClass, int ZOrder)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowWindowByClass");

	struct
	{
		class UClass*                  windowClass;
		int                            ZOrder;
	} params;

	params.windowClass = windowClass;
	params.ZOrder = ZOrder;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCheatMenu
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::ShowCheatMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCheatMenu");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowBarMenu
// (FUNC_Net, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASpaceRigBar*            Bar                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::ShowBarMenu(class ASpaceRigBar* Bar)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowBarMenu");

	struct
	{
		class ASpaceRigBar*            Bar;
	} params;

	params.Bar = Bar;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnRoundSelected_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASpaceRigBar*            Bar                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UDrinkableDataAsset*     RequestedDrink                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::OnRoundSelected_Event(class ASpaceRigBar* Bar, class UDrinkableDataAsset* RequestedDrink)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnRoundSelected_Event");

	struct
	{
		class ASpaceRigBar*            Bar;
		class UDrinkableDataAsset*     RequestedDrink;
	} params;

	params.Bar = Bar;
	params.RequestedDrink = RequestedDrink;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OrderBarRound
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASpaceRigBar*            Bar                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UDrinkableDataAsset*     Drink                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::OrderBarRound(class ASpaceRigBar* Bar, class UDrinkableDataAsset* Drink)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OrderBarRound");

	struct
	{
		class ASpaceRigBar*            Bar;
		class UDrinkableDataAsset*     Drink;
	} params;

	params.Bar = Bar;
	params.Drink = Drink;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Deduct Credits On Client
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::Deduct_Credits_On_Client(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Deduct Credits On Client");

	struct
	{
		int                            Amount;
	} params;

	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowJobs
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::ShowJobs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowJobs");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowItemUpgradeScreen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  CharacterClass                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  itemClass                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EItemCategory                  ItemCategory                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::ShowItemUpgradeScreen(class UClass* CharacterClass, class UClass* itemClass, EItemCategory ItemCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowItemUpgradeScreen");

	struct
	{
		class UClass*                  CharacterClass;
		class UClass*                  itemClass;
		EItemCategory                  ItemCategory;
	} params;

	params.CharacterClass = CharacterClass;
	params.itemClass = itemClass;
	params.ItemCategory = ItemCategory;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowBoscoUpgrades
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::ShowBoscoUpgrades()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowBoscoUpgrades");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnPlayerSpawnBegin
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            PlayerId                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::OnPlayerSpawnBegin(int PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnPlayerSpawnBegin");

	struct
	{
		int                            PlayerId;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Back_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::Back_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Back_Event_1");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnCharacterSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::OnCharacterSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnCharacterSelected");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnHostTimerChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          newTime                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::OnHostTimerChanged(float newTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnHostTimerChanged");

	struct
	{
		float                          newTime;
	} params;

	params.newTime = newTime;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnMissionTimerChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          newTime                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::OnMissionTimerChanged(float newTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnMissionTimerChanged");

	struct
	{
		float                          newTime;
	} params;

	params.newTime = newTime;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.DoCountDown
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          newTime                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::DoCountDown(float newTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.DoCountDown");

	struct
	{
		float                          newTime;
	} params;

	params.newTime = newTime;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowReconnect
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Show                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::ShowReconnect(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowReconnect");

	struct
	{
		bool                           Show;
	} params;

	params.Show = Show;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnGravityChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          CurrentGravity                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Change                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::OnGravityChanged(float CurrentGravity, float Change)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnGravityChanged");

	struct
	{
		float                          CurrentGravity;
		float                          Change;
	} params;

	params.CurrentGravity = CurrentGravity;
	params.Change = Change;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ExecuteUbergraph_BP_PlayerController_SpaceRig
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::ExecuteUbergraph_BP_PlayerController_SpaceRig(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ExecuteUbergraph_BP_PlayerController_SpaceRig");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnToggleHUD__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::OnToggleHUD__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnToggleHUD__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
