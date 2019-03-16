// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_Milestone_View_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Milestone_View.UI_Milestone_View_C.Update Has Claimable State
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_Milestone_View_C::Update_Has_Claimable_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_View.UI_Milestone_View_C.Update Has Claimable State");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Milestone_View.UI_Milestone_View_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_Milestone_View_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_View.UI_Milestone_View_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Milestone_View.UI_Milestone_View_C.BndEvt__UI_MissionStats_Categories_K2Node_ComponentBoundEvent_14_OnSelectedChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_Milestone_View_C::BndEvt__UI_MissionStats_Categories_K2Node_ComponentBoundEvent_14_OnSelectedChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_View.UI_Milestone_View_C.BndEvt__UI_MissionStats_Categories_K2Node_ComponentBoundEvent_14_OnSelectedChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Milestone_View.UI_Milestone_View_C.Init Milestone Widget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_Milestone_Item_C*    Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_Milestone_View_C::Init_Milestone_Widget(class UUI_Milestone_Item_C* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_View.UI_Milestone_View_C.Init Milestone Widget");

	struct
	{
		class UUI_Milestone_Item_C*    Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Milestone_View.UI_Milestone_View_C.OnItemClaimableChanged_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_Milestone_Item_C*    Milestone_Item                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_Milestone_View_C::OnItemClaimableChanged_Event(class UUI_Milestone_Item_C* Milestone_Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_View.UI_Milestone_View_C.OnItemClaimableChanged_Event");

	struct
	{
		class UUI_Milestone_Item_C*    Milestone_Item;
	} params;

	params.Milestone_Item = Milestone_Item;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Milestone_View.UI_Milestone_View_C.Refresh
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_Milestone_View_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_View.UI_Milestone_View_C.Refresh");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Milestone_View.UI_Milestone_View_C.ExecuteUbergraph_UI_Milestone_View
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Milestone_View_C::ExecuteUbergraph_UI_Milestone_View(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_View.UI_Milestone_View_C.ExecuteUbergraph_UI_Milestone_View");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Milestone_View.UI_Milestone_View_C.OnHasClaimableChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           HasClaimable                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Milestone_View_C::OnHasClaimableChanged__DelegateSignature(bool HasClaimable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_View.UI_Milestone_View_C.OnHasClaimableChanged__DelegateSignature");

	struct
	{
		bool                           HasClaimable;
	} params;

	params.HasClaimable = HasClaimable;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
