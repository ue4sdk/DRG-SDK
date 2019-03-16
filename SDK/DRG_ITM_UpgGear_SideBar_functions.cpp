// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_UpgGear_SideBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.SetItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  InCharacterClass               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// class UClass*                  InItemClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// EItemCategory                  InCategory                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UITM_UpgGear_SideBar_C::SetItem(class UClass** InCharacterClass, class UClass** InItemClass, EItemCategory* InCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.SetItem");

	struct
	{
		class UClass*                  InCharacterClass;
		class UClass*                  InItemClass;
		EItemCategory                  InCategory;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (InCharacterClass != nullptr)
		*InCharacterClass = params.InCharacterClass;
	if (InItemClass != nullptr)
		*InItemClass = params.InItemClass;
	if (InCategory != nullptr)
		*InCategory = params.InCategory;
}


// Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.SetYesNoPrompt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBasic_Popup_YesNoPrompt_C* Prompt                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_UpgGear_SideBar_C::SetYesNoPrompt(class UBasic_Popup_YesNoPrompt_C* Prompt)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.SetYesNoPrompt");

	struct
	{
		class UBasic_Popup_YesNoPrompt_C* Prompt;
	} params;

	params.Prompt = Prompt;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.BndEvt__Basic_FlatButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UBasic_FlatButton_C*     Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_UpgGear_SideBar_C::BndEvt__Basic_FlatButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UBasic_FlatButton_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.BndEvt__Basic_FlatButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
		class UBasic_FlatButton_C*     Button;
	} params;

	params.Button = Button;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.BuyConfirmation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Yes                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_UpgGear_SideBar_C::BuyConfirmation(bool Yes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.BuyConfirmation");

	struct
	{
		bool                           Yes;
	} params;

	params.Yes = Yes;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.Row Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_UpgGear_TierRow_C*  Row                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_UpgGear_SideBar_C::Row_Changed(class UITM_UpgGear_TierRow_C* Row)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.Row Changed");

	struct
	{
		class UITM_UpgGear_TierRow_C*  Row;
	} params;

	params.Row = Row;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.ExecuteUbergraph_ITM_UpgGear_SideBar
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_UpgGear_SideBar_C::ExecuteUbergraph_ITM_UpgGear_SideBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.ExecuteUbergraph_ITM_UpgGear_SideBar");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.OnItemPurchased__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_UpgGear_SideBar_C::OnItemPurchased__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.OnItemPurchased__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.OnRefreshGearStats__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_UpgGear_SideBar_C::OnRefreshGearStats__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.OnRefreshGearStats__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
