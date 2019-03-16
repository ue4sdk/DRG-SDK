// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_TutorialWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_TutorialWidget.HUD_TutorialWidget_C.OnShow
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText                   ControllerOverrideText         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText                   Title                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UHUD_TutorialWidget_C::OnShow(const struct FText& Text, const struct FText& ControllerOverrideText, const struct FText& Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TutorialWidget.HUD_TutorialWidget_C.OnShow");

	struct
	{
		struct FText                   Text;
		struct FText                   ControllerOverrideText;
		struct FText                   Title;
	} params;

	params.Text = Text;
	params.ControllerOverrideText = ControllerOverrideText;
	params.Title = Title;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TutorialWidget.HUD_TutorialWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_TutorialWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TutorialWidget.HUD_TutorialWidget_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TutorialWidget.HUD_TutorialWidget_C.OnHide
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UHUD_TutorialWidget_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TutorialWidget.HUD_TutorialWidget_C.OnHide");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TutorialWidget.HUD_TutorialWidget_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_TutorialWidget_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TutorialWidget.HUD_TutorialWidget_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TutorialWidget.HUD_TutorialWidget_C.Exit_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UHUD_TutorialWidget_C::Exit_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TutorialWidget.HUD_TutorialWidget_C.Exit_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TutorialWidget.HUD_TutorialWidget_C.ExecuteUbergraph_HUD_TutorialWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_TutorialWidget_C::ExecuteUbergraph_HUD_TutorialWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TutorialWidget.HUD_TutorialWidget_C.ExecuteUbergraph_HUD_TutorialWidget");

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
