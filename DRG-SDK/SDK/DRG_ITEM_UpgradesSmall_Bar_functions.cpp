// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITEM_UpgradesSmall_Bar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITEM_UpgradesSmall_Bar.ITEM_UpgradesSmall_Bar_C.GetFSDPlayerState
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AFSDPlayerState*         AsFSDPlayer_State              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_UpgradesSmall_Bar_C::GetFSDPlayerState(class AFSDPlayerState** AsFSDPlayer_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_UpgradesSmall_Bar.ITEM_UpgradesSmall_Bar_C.GetFSDPlayerState");

	struct
	{
		class AFSDPlayerState*         AsFSDPlayer_State;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AsFSDPlayer_State != nullptr)
		*AsFSDPlayer_State = params.AsFSDPlayer_State;
}


// Function ITEM_UpgradesSmall_Bar.ITEM_UpgradesSmall_Bar_C.ShowUpgradeBar
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_UpgradesSmall_Bar_C::ShowUpgradeBar(class UClass* Item, class AFSDPlayerState* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_UpgradesSmall_Bar.ITEM_UpgradesSmall_Bar_C.ShowUpgradeBar");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
	} params;

	params.Item = Item;
	params.Player = Player;

	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_UpgradesSmall_Bar.ITEM_UpgradesSmall_Bar_C.OnUpgradeClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UItemUpgrade*            Upgrade                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_UpgradesSmall_Bar_C::OnUpgradeClicked(class UItemUpgrade* Upgrade)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_UpgradesSmall_Bar.ITEM_UpgradesSmall_Bar_C.OnUpgradeClicked");

	struct
	{
		class UItemUpgrade*            Upgrade;
	} params;

	params.Upgrade = Upgrade;

	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_UpgradesSmall_Bar.ITEM_UpgradesSmall_Bar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UITEM_UpgradesSmall_Bar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_UpgradesSmall_Bar.ITEM_UpgradesSmall_Bar_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_UpgradesSmall_Bar.ITEM_UpgradesSmall_Bar_C.OnHoverStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UItemUpgrade*            Upgrade                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_UpgradesSmall_Bar_C::OnHoverStart(class UItemUpgrade* Upgrade)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_UpgradesSmall_Bar.ITEM_UpgradesSmall_Bar_C.OnHoverStart");

	struct
	{
		class UItemUpgrade*            Upgrade;
	} params;

	params.Upgrade = Upgrade;

	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_UpgradesSmall_Bar.ITEM_UpgradesSmall_Bar_C.OnHoverEnd
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UItemUpgrade*            Upgrade                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_UpgradesSmall_Bar_C::OnHoverEnd(class UItemUpgrade* Upgrade)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_UpgradesSmall_Bar.ITEM_UpgradesSmall_Bar_C.OnHoverEnd");

	struct
	{
		class UItemUpgrade*            Upgrade;
	} params;

	params.Upgrade = Upgrade;

	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_UpgradesSmall_Bar.ITEM_UpgradesSmall_Bar_C.OnItemUpgraded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITEM_UpgradesSmall_Bar_C::OnItemUpgraded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_UpgradesSmall_Bar.ITEM_UpgradesSmall_Bar_C.OnItemUpgraded");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_UpgradesSmall_Bar.ITEM_UpgradesSmall_Bar_C.OnCreditsChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITEM_UpgradesSmall_Bar_C::OnCreditsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_UpgradesSmall_Bar.ITEM_UpgradesSmall_Bar_C.OnCreditsChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_UpgradesSmall_Bar.ITEM_UpgradesSmall_Bar_C.ExecuteUbergraph_ITEM_UpgradesSmall_Bar
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_UpgradesSmall_Bar_C::ExecuteUbergraph_ITEM_UpgradesSmall_Bar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_UpgradesSmall_Bar.ITEM_UpgradesSmall_Bar_C.ExecuteUbergraph_ITEM_UpgradesSmall_Bar");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_UpgradesSmall_Bar.ITEM_UpgradesSmall_Bar_C.OnUpgradeHover__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UItemUpgrade*            Upgrade                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_UpgradesSmall_Bar_C::OnUpgradeHover__DelegateSignature(class UItemUpgrade* Upgrade)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_UpgradesSmall_Bar.ITEM_UpgradesSmall_Bar_C.OnUpgradeHover__DelegateSignature");

	struct
	{
		class UItemUpgrade*            Upgrade;
	} params;

	params.Upgrade = Upgrade;

	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_UpgradesSmall_Bar.ITEM_UpgradesSmall_Bar_C.OnUpgradeSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UItemUpgrade*            Upgrade                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_UpgradesSmall_Bar_C::OnUpgradeSelected__DelegateSignature(class UItemUpgrade* Upgrade)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_UpgradesSmall_Bar.ITEM_UpgradesSmall_Bar_C.OnUpgradeSelected__DelegateSignature");

	struct
	{
		class UItemUpgrade*            Upgrade;
	} params;

	params.Upgrade = Upgrade;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
