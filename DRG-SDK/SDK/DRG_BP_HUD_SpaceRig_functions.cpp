// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_HUD_SpaceRig_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_HUD_SpaceRig_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.PlayerSpawned
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_HUD_SpaceRig_C::PlayerSpawned(class APlayerCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.PlayerSpawned");

	struct
	{
		class APlayerCharacter*        Player;
	} params;

	params.Player = Player;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnVisibilityChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_HUD_SpaceRig_C::OnVisibilityChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnVisibilityChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.ReceiveDestroyed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_HUD_SpaceRig_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.ReceiveDestroyed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_HUD_SpaceRig_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnCountdownCompleted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_HUD_SpaceRig_C::OnCountdownCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnCountdownCompleted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Update Visibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_HUD_SpaceRig_C::Update_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Update Visibility");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Handle Count Down
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_HUD_SpaceRig_C::Handle_Count_Down()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Handle Count Down");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Campaign Notifications
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_HUD_SpaceRig_C::Setup_Campaign_Notifications()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Campaign Notifications");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnCampaignNotification_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCampaignNotification*   Notification                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_HUD_SpaceRig_C::OnCampaignNotification_Event(class UCampaignNotification* Notification)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnCampaignNotification_Event");

	struct
	{
		class UCampaignNotification*   Notification;
	} params;

	params.Notification = Notification;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Open Campaign Rewards Window
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_HUD_SpaceRig_C::Open_Campaign_Rewards_Window()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Open Campaign Rewards Window");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Retirement Shouts
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_HUD_SpaceRig_C::Setup_Retirement_Shouts()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Retirement Shouts");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnEligibleForRetirementAssignment
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_GameInstance_C*      GameInstance                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_HUD_SpaceRig_C::OnEligibleForRetirementAssignment(class UBP_GameInstance_C* GameInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnEligibleForRetirementAssignment");

	struct
	{
		class UBP_GameInstance_C*      GameInstance;
	} params;

	params.GameInstance = GameInstance;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Spacerig Notifications
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_HUD_SpaceRig_C::Setup_Spacerig_Notifications()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Spacerig Notifications");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup UI Notifications
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_HUD_SpaceRig_C::Setup_UI_Notifications()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup UI Notifications");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.ExecuteUbergraph_BP_HUD_SpaceRig
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_HUD_SpaceRig_C::ExecuteUbergraph_BP_HUD_SpaceRig(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.ExecuteUbergraph_BP_HUD_SpaceRig");

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
