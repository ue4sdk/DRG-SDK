// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_SpaceRig_NotificationsManager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_SpaceRig_NotificationsManager_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.OnAvailableCraftingItems
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<TScriptInterface<class UCraftable>> NewItems                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UHUD_SpaceRig_NotificationsManager_C::OnAvailableCraftingItems(TArray<TScriptInterface<class UCraftable>>* NewItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.OnAvailableCraftingItems");

	struct
	{
		TArray<TScriptInterface<class UCraftable>> NewItems;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (NewItems != nullptr)
		*NewItems = params.NewItems;
}


// Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.CheckForNewNotifications
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFSDGameInstance*        GameInstance                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_SpaceRig_NotificationsManager_C::CheckForNewNotifications(class UFSDGameInstance* GameInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.CheckForNewNotifications");

	struct
	{
		class UFSDGameInstance*        GameInstance;
	} params;

	params.GameInstance = GameInstance;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.CreateNotificationWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSpaceRigNotification   Notification                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UHUD_SpaceRig_NotificationsManager_C::CreateNotificationWidget(const struct FSpaceRigNotification& Notification)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.CreateNotificationWidget");

	struct
	{
		struct FSpaceRigNotification   Notification;
	} params;

	params.Notification = Notification;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.ExecuteUbergraph_HUD_SpaceRig_NotificationsManager
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_SpaceRig_NotificationsManager_C::ExecuteUbergraph_HUD_SpaceRig_NotificationsManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SpaceRig_NotificationsManager.HUD_SpaceRig_NotificationsManager_C.ExecuteUbergraph_HUD_SpaceRig_NotificationsManager");

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
