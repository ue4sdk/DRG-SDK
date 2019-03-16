// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Popup_GearUpgrade_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Popup_GearUpgrade.Popup_GearUpgrade_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UPopup_GearUpgrade_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Popup_GearUpgrade.Popup_GearUpgrade_C.OnKeyUp");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FKeyEvent               InKeyEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Popup_GearUpgrade.Popup_GearUpgrade_C.TryPurchaseItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UItemUpgrade*            Upgrade                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  itemClass                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPopup_GearUpgrade_C::TryPurchaseItem(class UItemUpgrade* Upgrade, class UClass* itemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Popup_GearUpgrade.Popup_GearUpgrade_C.TryPurchaseItem");

	struct
	{
		class UItemUpgrade*            Upgrade;
		class UClass*                  itemClass;
	} params;

	params.Upgrade = Upgrade;
	params.itemClass = itemClass;

	UObject::ProcessEvent(fn, &params);
}


// Function Popup_GearUpgrade.Popup_GearUpgrade_C.ShowSelectedUpgrade
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UItemUpgrade*            ItemUpgrade                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPopup_GearUpgrade_C::ShowSelectedUpgrade(class UItemUpgrade* ItemUpgrade)
{
	static auto fn = UObject::FindObject<UFunction>("Function Popup_GearUpgrade.Popup_GearUpgrade_C.ShowSelectedUpgrade");

	struct
	{
		class UItemUpgrade*            ItemUpgrade;
	} params;

	params.ItemUpgrade = ItemUpgrade;

	UObject::ProcessEvent(fn, &params);
}


// Function Popup_GearUpgrade.Popup_GearUpgrade_C.GetPlayerState
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AFSDPlayerState*         AsFSDPlayer_State              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPopup_GearUpgrade_C::GetPlayerState(class AFSDPlayerState** AsFSDPlayer_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Popup_GearUpgrade.Popup_GearUpgrade_C.GetPlayerState");

	struct
	{
		class AFSDPlayerState*         AsFSDPlayer_State;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AsFSDPlayer_State != nullptr)
		*AsFSDPlayer_State = params.AsFSDPlayer_State;
}


// Function Popup_GearUpgrade.Popup_GearUpgrade_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPopup_GearUpgrade_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Popup_GearUpgrade.Popup_GearUpgrade_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Popup_GearUpgrade.Popup_GearUpgrade_C.Show
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPopup_GearUpgrade_C::Show(class UClass* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Popup_GearUpgrade.Popup_GearUpgrade_C.Show");

	struct
	{
		class UClass*                  Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function Popup_GearUpgrade.Popup_GearUpgrade_C.OnItemUpgradeSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UItemUpgrade*            Upgrade                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPopup_GearUpgrade_C::OnItemUpgradeSelected(class UItemUpgrade* Upgrade)
{
	static auto fn = UObject::FindObject<UFunction>("Function Popup_GearUpgrade.Popup_GearUpgrade_C.OnItemUpgradeSelected");

	struct
	{
		class UItemUpgrade*            Upgrade;
	} params;

	params.Upgrade = Upgrade;

	UObject::ProcessEvent(fn, &params);
}


// Function Popup_GearUpgrade.Popup_GearUpgrade_C.OnItemUpgradeHover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UItemUpgrade*            Upgrade                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPopup_GearUpgrade_C::OnItemUpgradeHover(class UItemUpgrade* Upgrade)
{
	static auto fn = UObject::FindObject<UFunction>("Function Popup_GearUpgrade.Popup_GearUpgrade_C.OnItemUpgradeHover");

	struct
	{
		class UItemUpgrade*            Upgrade;
	} params;

	params.Upgrade = Upgrade;

	UObject::ProcessEvent(fn, &params);
}


// Function Popup_GearUpgrade.Popup_GearUpgrade_C.OnUpgradesChagned
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPopup_GearUpgrade_C::OnUpgradesChagned()
{
	static auto fn = UObject::FindObject<UFunction>("Function Popup_GearUpgrade.Popup_GearUpgrade_C.OnUpgradesChagned");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Popup_GearUpgrade.Popup_GearUpgrade_C.BackPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPopup_GearUpgrade_C::BackPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Popup_GearUpgrade.Popup_GearUpgrade_C.BackPressed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Popup_GearUpgrade.Popup_GearUpgrade_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPopup_GearUpgrade_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Popup_GearUpgrade.Popup_GearUpgrade_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function Popup_GearUpgrade.Popup_GearUpgrade_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UPopup_GearUpgrade_C::BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Popup_GearUpgrade.Popup_GearUpgrade_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Popup_GearUpgrade.Popup_GearUpgrade_C.ExecuteUbergraph_Popup_GearUpgrade
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPopup_GearUpgrade_C::ExecuteUbergraph_Popup_GearUpgrade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Popup_GearUpgrade.Popup_GearUpgrade_C.ExecuteUbergraph_Popup_GearUpgrade");

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
