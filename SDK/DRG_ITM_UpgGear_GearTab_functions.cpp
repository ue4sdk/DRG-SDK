// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_UpgGear_GearTab_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.GetItemClass
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UClass*                  itemClass                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_UpgGear_GearTab_C::GetItemClass(class UClass** itemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.GetItemClass");

	struct
	{
		class UClass*                  itemClass;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (itemClass != nullptr)
		*itemClass = params.itemClass;
}


// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.IsItemClass
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UClass*                  InItemClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UITM_UpgGear_GearTab_C::IsItemClass(class UClass* InItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.IsItemClass");

	struct
	{
		class UClass*                  InItemClass;
		bool                           ReturnValue;
	} params;

	params.InItemClass = InItemClass;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.ShowNewNotification
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShowNotification               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_UpgGear_GearTab_C::ShowNewNotification(bool ShowNotification)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.ShowNewNotification");

	struct
	{
		bool                           ShowNotification;
	} params;

	params.ShowNotification = ShowNotification;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.Refresh
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_UpgGear_GearTab_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.Refresh");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UITM_UpgGear_GearTab_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.SetHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InItemHovered                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_UpgGear_GearTab_C::SetHovered(bool InItemHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.SetHovered");

	struct
	{
		bool                           InItemHovered;
	} params;

	params.InItemHovered = InItemHovered;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_UpgGear_GearTab_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_UpgGear_GearTab_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_UpgGear_GearTab_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_UpgGear_GearTab_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.SetSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ItemSelected                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_UpgGear_GearTab_C::SetSelected(bool ItemSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.SetSelected");

	struct
	{
		bool                           ItemSelected;
	} params;

	params.ItemSelected = ItemSelected;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnItemChanged_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  NewItemClass                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_UpgGear_GearTab_C::OnItemChanged_Event(class UClass* NewItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnItemChanged_Event");

	struct
	{
		class UClass*                  NewItemClass;
	} params;

	params.NewItemClass = NewItemClass;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.ExecuteUbergraph_ITM_UpgGear_GearTab
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_UpgGear_GearTab_C::ExecuteUbergraph_ITM_UpgGear_GearTab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.ExecuteUbergraph_ITM_UpgGear_GearTab");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnUnhovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_UpgGear_GearTab_C*  Tab                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_UpgGear_GearTab_C::OnUnhovered__DelegateSignature(class UITM_UpgGear_GearTab_C* Tab)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnUnhovered__DelegateSignature");

	struct
	{
		class UITM_UpgGear_GearTab_C*  Tab;
	} params;

	params.Tab = Tab;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_UpgGear_GearTab_C*  Tab                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_UpgGear_GearTab_C::OnHovered__DelegateSignature(class UITM_UpgGear_GearTab_C* Tab)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnHovered__DelegateSignature");

	struct
	{
		class UITM_UpgGear_GearTab_C*  Tab;
	} params;

	params.Tab = Tab;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_UpgGear_GearTab_C*  Tab                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_UpgGear_GearTab_C::OnClicked__DelegateSignature(class UITM_UpgGear_GearTab_C* Tab)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnClicked__DelegateSignature");

	struct
	{
		class UITM_UpgGear_GearTab_C*  Tab;
	} params;

	params.Tab = Tab;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
