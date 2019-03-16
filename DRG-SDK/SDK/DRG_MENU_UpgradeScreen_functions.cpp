// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_MENU_UpgradeScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.GetItemTabIndex
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UClass*                  InItemClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OutIndex                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMENU_UpgradeScreen_C::GetItemTabIndex(class UClass* InItemClass, int* OutIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.GetItemTabIndex");

	struct
	{
		class UClass*                  InItemClass;
		int                            OutIndex;
	} params;

	params.InItemClass = InItemClass;

	UObject::ProcessEvent(fn, &params);

	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.SelectNextTab
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Direction                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMENU_UpgradeScreen_C::SelectNextTab(int Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.SelectNextTab");

	struct
	{
		int                            Direction;
	} params;

	params.Direction = Direction;

	UObject::ProcessEvent(fn, &params);
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.GetYesNoPrompt
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBasic_Popup_YesNoPrompt_C* YesNoPrompt                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UMENU_UpgradeScreen_C::GetYesNoPrompt(class UBasic_Popup_YesNoPrompt_C** YesNoPrompt)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.GetYesNoPrompt");

	struct
	{
		class UBasic_Popup_YesNoPrompt_C* YesNoPrompt;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (YesNoPrompt != nullptr)
		*YesNoPrompt = params.YesNoPrompt;
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.RefreshGearStats
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMENU_UpgradeScreen_C::RefreshGearStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.RefreshGearStats");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.GetTabItems
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UClass*                  InCharacterClass               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EItemCategory                  InCategory                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class UClass*>          Tab_Items                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UMENU_UpgradeScreen_C::GetTabItems(class UClass* InCharacterClass, EItemCategory InCategory, TArray<class UClass*>* Tab_Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.GetTabItems");

	struct
	{
		class UClass*                  InCharacterClass;
		EItemCategory                  InCategory;
		TArray<class UClass*>          Tab_Items;
	} params;

	params.InCharacterClass = InCharacterClass;
	params.InCategory = InCategory;

	UObject::ProcessEvent(fn, &params);

	if (Tab_Items != nullptr)
		*Tab_Items = params.Tab_Items;
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BuildGearTabs
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMENU_UpgradeScreen_C::BuildGearTabs()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BuildGearTabs");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ChangeItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  InItemClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMENU_UpgradeScreen_C::ChangeItem(class UClass* InItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ChangeItem");

	struct
	{
		class UClass*                  InItemClass;
	} params;

	params.InItemClass = InItemClass;

	UObject::ProcessEvent(fn, &params);
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.RefreshItemDetails
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMENU_UpgradeScreen_C::RefreshItemDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.RefreshItemDetails");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.Show
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  InCharacterClass               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  InItemClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EItemCategory                  InItemCategory                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMENU_UpgradeScreen_C::Show(class UClass* InCharacterClass, class UClass* InItemClass, EItemCategory InItemCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.Show");

	struct
	{
		class UClass*                  InCharacterClass;
		class UClass*                  InItemClass;
		EItemCategory                  InItemCategory;
	} params;

	params.InCharacterClass = InCharacterClass;
	params.InItemClass = InItemClass;
	params.InItemCategory = InItemCategory;

	UObject::ProcessEvent(fn, &params);
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ReceiveSelectNextCommand
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UMENU_UpgradeScreen_C::ReceiveSelectNextCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ReceiveSelectNextCommand");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ReceiveSelectPreviousCommand
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UMENU_UpgradeScreen_C::ReceiveSelectPreviousCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ReceiveSelectPreviousCommand");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__ITM_UpgGear_Upgrades_K2Node_ComponentBoundEvent_17_OnRefreshGearStats__DelegateSignature
// (FUNC_BlueprintEvent)

void UMENU_UpgradeScreen_C::BndEvt__ITM_UpgGear_Upgrades_K2Node_ComponentBoundEvent_17_OnRefreshGearStats__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__ITM_UpgGear_Upgrades_K2Node_ComponentBoundEvent_17_OnRefreshGearStats__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMENU_UpgradeScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnClosed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMENU_UpgradeScreen_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnClosed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMENU_UpgradeScreen_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__ITM_UpgGear_Upgrades_K2Node_ComponentBoundEvent_1_OnItemPurchased__DelegateSignature
// (FUNC_BlueprintEvent)

void UMENU_UpgradeScreen_C::BndEvt__ITM_UpgGear_Upgrades_K2Node_ComponentBoundEvent_1_OnItemPurchased__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__ITM_UpgGear_Upgrades_K2Node_ComponentBoundEvent_1_OnItemPurchased__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UMENU_UpgradeScreen_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__BTN_Info_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UMENU_UpgradeScreen_C::BndEvt__BTN_Info_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__BTN_Info_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__BTN_Info_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UMENU_UpgradeScreen_C::BndEvt__BTN_Info_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__BTN_Info_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ReceiveCloseCommand
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UMENU_UpgradeScreen_C::ReceiveCloseCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ReceiveCloseCommand");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ReceiveOkCommand
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UMENU_UpgradeScreen_C::ReceiveOkCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ReceiveOkCommand");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_24_OnClosedClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UMENU_UpgradeScreen_C::BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_24_OnClosedClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_24_OnClosedClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMENU_UpgradeScreen_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ExecuteUbergraph_MENU_UpgradeScreen
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMENU_UpgradeScreen_C::ExecuteUbergraph_MENU_UpgradeScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ExecuteUbergraph_MENU_UpgradeScreen");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnItemChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  NewItemClass                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMENU_UpgradeScreen_C::OnItemChanged__DelegateSignature(class UClass* NewItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnItemChanged__DelegateSignature");

	struct
	{
		class UClass*                  NewItemClass;
	} params;

	params.NewItemClass = NewItemClass;

	UObject::ProcessEvent(fn, &params);
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnCloseClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMENU_UpgradeScreen_C::OnCloseClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnCloseClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
