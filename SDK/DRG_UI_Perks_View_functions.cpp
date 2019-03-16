// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_Perks_View_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Perks_View.UI_Perks_View_C.SelectPerkWidget
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_Perks_Item_C*        PerkWidget                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_Perks_View_C::SelectPerkWidget(class UUI_Perks_Item_C* PerkWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_View.UI_Perks_View_C.SelectPerkWidget");

	struct
	{
		class UUI_Perks_Item_C*        PerkWidget;
	} params;

	params.PerkWidget = PerkWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perks_View.UI_Perks_View_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perks_View_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_View.UI_Perks_View_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perks_View.UI_Perks_View_C.OnPerkClicked_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_Perks_Item_C*        PerkWidget                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_Perks_View_C::OnPerkClicked_Event(class UUI_Perks_Item_C* PerkWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_View.UI_Perks_View_C.OnPerkClicked_Event");

	struct
	{
		class UUI_Perks_Item_C*        PerkWidget;
	} params;

	params.PerkWidget = PerkWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perks_View.UI_Perks_View_C.BndEvt__UI_Perks_Buy_K2Node_ComponentBoundEvent_0_OnPerkClaimed__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_Perks_View_C::BndEvt__UI_Perks_Buy_K2Node_ComponentBoundEvent_0_OnPerkClaimed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_View.UI_Perks_View_C.BndEvt__UI_Perks_Buy_K2Node_ComponentBoundEvent_0_OnPerkClaimed__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perks_View.UI_Perks_View_C.ExecuteUbergraph_UI_Perks_View
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perks_View_C::ExecuteUbergraph_UI_Perks_View(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_View.UI_Perks_View_C.ExecuteUbergraph_UI_Perks_View");

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
