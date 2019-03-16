// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_SentryGunWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.SetState
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UHUD_SentryGunWidget_C::SetState(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.SetState");

	struct
	{
		struct FText                   InText;
	} params;

	params.InText = InText;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.On Ammo Count Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            AmmoCount                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Change                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_SentryGunWidget_C::On_Ammo_Count_Changed(int AmmoCount, int Change)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.On Ammo Count Changed");

	struct
	{
		int                            AmmoCount;
		int                            Change;
	} params;

	params.AmmoCount = AmmoCount;
	params.Change = Change;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Init
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UInventoryComponent*     Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class ARecallableSentryGunItem* Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_SentryGunWidget_C::Init(class UInventoryComponent* Inventory, class ARecallableSentryGunItem* Item, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Init");

	struct
	{
		class UInventoryComponent*     Inventory;
		class ARecallableSentryGunItem* Item;
		int                            Index;
	} params;

	params.Inventory = Inventory;
	params.Item = Item;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnActiveItemsChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ARecallableSentryGunItem* Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_SentryGunWidget_C::OnActiveItemsChanged(class ARecallableSentryGunItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnActiveItemsChanged");

	struct
	{
		class ARecallableSentryGunItem* Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ARecallableActor*        Sender                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// ERecallableActorState          State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_SentryGunWidget_C::OnStateChanged(class ARecallableActor* Sender, ERecallableActorState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnStateChanged");

	struct
	{
		class ARecallableActor*        Sender;
		ERecallableActorState          State;
	} params;

	params.Sender = Sender;
	params.State = State;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Update State
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_SentryGunWidget_C::Update_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Update State");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnSelectedItemChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ARecallableSentryGun*    SentryGun                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_SentryGunWidget_C::OnSelectedItemChanged(class ARecallableSentryGun* SentryGun)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnSelectedItemChanged");

	struct
	{
		class ARecallableSentryGun*    SentryGun;
	} params;

	params.SentryGun = SentryGun;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Set Selected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Is_Selected                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_SentryGunWidget_C::Set_Selected(bool Is_Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Set Selected");

	struct
	{
		bool                           Is_Selected;
	} params;

	params.Is_Selected = Is_Selected;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnItemEquipped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_SentryGunWidget_C::OnItemEquipped(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnItemEquipped");

	struct
	{
		class AItem*                   Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Set Sentry Home
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_SentryGunWidget_C::Set_Sentry_Home()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Set Sentry Home");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_SentryGunWidget_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnGunStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ARedeployableSentryGun*  Sender                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// ERedeployableSentryGunState    NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_SentryGunWidget_C::OnGunStateChanged(class ARedeployableSentryGun* Sender, ERedeployableSentryGunState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnGunStateChanged");

	struct
	{
		class ARedeployableSentryGun*  Sender;
		ERedeployableSentryGunState    NewState;
	} params;

	params.Sender = Sender;
	params.NewState = NewState;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Set Sentry
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ARecallableSentryGun*    Sentry_Gun                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_SentryGunWidget_C::Set_Sentry(class ARecallableSentryGun* Sentry_Gun)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Set Sentry");

	struct
	{
		class ARecallableSentryGun*    Sentry_Gun;
	} params;

	params.Sentry_Gun = Sentry_Gun;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.BndEvt__AmmoDepleted_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UHUD_SentryGunWidget_C::BndEvt__AmmoDepleted_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.BndEvt__AmmoDepleted_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Check For Ammo Depletion
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_SentryGunWidget_C::Check_For_Ammo_Depletion()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Check For Ammo Depletion");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnDeployProgress_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_SentryGunWidget_C::OnDeployProgress_Event(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnDeployProgress_Event");

	struct
	{
		float                          Progress;
	} params;

	params.Progress = Progress;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.ExecuteUbergraph_HUD_SentryGunWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_SentryGunWidget_C::ExecuteUbergraph_HUD_SentryGunWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.ExecuteUbergraph_HUD_SentryGunWidget");

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
