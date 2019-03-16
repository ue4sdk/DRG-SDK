// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_Craft_ItemBox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.CreateResources
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UCraftable> Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Craft_ItemBox_C::CreateResources(const TScriptInterface<class UCraftable>& Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.CreateResources");

	struct
	{
		TScriptInterface<class UCraftable> Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetCostColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_Craft_ItemBox_C::SetCostColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetCostColor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetRankRequirements
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_Craft_ItemBox_C::SetRankRequirements()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetRankRequirements");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetTextAndIcon
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_Craft_ItemBox_C::SetTextAndIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetTextAndIcon");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetCanUnlock
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_Craft_ItemBox_C::SetCanUnlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetCanUnlock");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetData
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UCraftable> Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Craft_ItemBox_C::SetData(const TScriptInterface<class UCraftable>& Item, class UClass* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetData");

	struct
	{
		TScriptInterface<class UCraftable> Item;
		class UClass*                  Character;
	} params;

	params.Item = Item;
	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Craft_ItemBox_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_Craft_ItemBox_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_Craft_ItemBox_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_Craft_ItemBox_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.Update
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_Craft_ItemBox_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.Update");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.ExecuteUbergraph_ITM_Craft_ItemBox
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Craft_ItemBox_C::ExecuteUbergraph_ITM_Craft_ItemBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.ExecuteUbergraph_ITM_Craft_ItemBox");

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
