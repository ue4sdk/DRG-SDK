// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_Itembar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Itembar.HUD_Itembar_C.OnItemAdded
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UItemsBarIcon*           ItemIcon                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UHUD_Itembar_C::OnItemAdded(class UItemsBarIcon* ItemIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Itembar.HUD_Itembar_C.OnItemAdded");

	struct
	{
		class UItemsBarIcon*           ItemIcon;
	} params;

	params.ItemIcon = ItemIcon;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Itembar.HUD_Itembar_C.OnClear
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UHUD_Itembar_C::OnClear()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Itembar.HUD_Itembar_C.OnClear");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Itembar.HUD_Itembar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_Itembar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Itembar.HUD_Itembar_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Itembar.HUD_Itembar_C.OnItemEquipped
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UItemsBarIcon*           ItemIcon                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UHUD_Itembar_C::OnItemEquipped(class UItemsBarIcon* ItemIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Itembar.HUD_Itembar_C.OnItemEquipped");

	struct
	{
		class UItemsBarIcon*           ItemIcon;
	} params;

	params.ItemIcon = ItemIcon;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Itembar.HUD_Itembar_C.Show
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_Itembar_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Itembar.HUD_Itembar_C.Show");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Itembar.HUD_Itembar_C.OnInputSourceChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EInputSource                   InputSource                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Itembar_C::OnInputSourceChanged(EInputSource InputSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Itembar.HUD_Itembar_C.OnInputSourceChanged");

	struct
	{
		EInputSource                   InputSource;
	} params;

	params.InputSource = InputSource;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Itembar.HUD_Itembar_C.OnItemClicked
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UHUD_Itembar_C::OnItemClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Itembar.HUD_Itembar_C.OnItemClicked");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Itembar.HUD_Itembar_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Itembar_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Itembar.HUD_Itembar_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Itembar.HUD_Itembar_C.BndEvt__FadeOut_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UHUD_Itembar_C::BndEvt__FadeOut_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Itembar.HUD_Itembar_C.BndEvt__FadeOut_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Itembar.HUD_Itembar_C.ExecuteUbergraph_HUD_Itembar
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Itembar_C::ExecuteUbergraph_HUD_Itembar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Itembar.HUD_Itembar_C.ExecuteUbergraph_HUD_Itembar");

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
