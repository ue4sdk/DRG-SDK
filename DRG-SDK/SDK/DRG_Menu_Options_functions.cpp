// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Menu_Options_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Menu_Options.Menu_Options_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UMenu_Options_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Options.Menu_Options_C.OnKeyUp");

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


// Function Menu_Options.Menu_Options_C.DeselectTab
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBasic_ButtonTab_C*      Tab                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UMenu_Options_C::DeselectTab(class UBasic_ButtonTab_C* Tab)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Options.Menu_Options_C.DeselectTab");

	struct
	{
		class UBasic_ButtonTab_C*      Tab;
	} params;

	params.Tab = Tab;

	UObject::ProcessEvent(fn, &params);
}


// Function Menu_Options.Menu_Options_C.SelectTab
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UBasic_ButtonTab_C*      TabButton                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UMenu_Options_C::SelectTab(int Index, class UBasic_ButtonTab_C* TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Options.Menu_Options_C.SelectTab");

	struct
	{
		int                            Index;
		class UBasic_ButtonTab_C*      TabButton;
	} params;

	params.Index = Index;
	params.TabButton = TabButton;

	UObject::ProcessEvent(fn, &params);
}


// Function Menu_Options.Menu_Options_C.BndEvt__Button_Apply_K2Node_ComponentBoundEvent_340_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UMenu_Options_C::BndEvt__Button_Apply_K2Node_ComponentBoundEvent_340_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Options.Menu_Options_C.BndEvt__Button_Apply_K2Node_ComponentBoundEvent_340_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Menu_Options.Menu_Options_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMenu_Options_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Options.Menu_Options_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Menu_Options.Menu_Options_C.SelectFirstTab
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMenu_Options_C::SelectFirstTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Options.Menu_Options_C.SelectFirstTab");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Menu_Options.Menu_Options_C.Init Tabs
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMenu_Options_C::Init_Tabs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Options.Menu_Options_C.Init Tabs");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Menu_Options.Menu_Options_C.BndEvt__BTN_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UMenu_Options_C::BndEvt__BTN_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Options.Menu_Options_C.BndEvt__BTN_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Menu_Options.Menu_Options_C.BndEvt__BTN_Controls_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UMenu_Options_C::BndEvt__BTN_Controls_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Options.Menu_Options_C.BndEvt__BTN_Controls_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Menu_Options.Menu_Options_C.BndEvt__BTN_Audio_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UMenu_Options_C::BndEvt__BTN_Audio_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Options.Menu_Options_C.BndEvt__BTN_Audio_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Menu_Options.Menu_Options_C.BndEvt__BTN_Graphics_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UMenu_Options_C::BndEvt__BTN_Graphics_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Options.Menu_Options_C.BndEvt__BTN_Graphics_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Menu_Options.Menu_Options_C.BndEvt__BTN_UI_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UMenu_Options_C::BndEvt__BTN_UI_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Options.Menu_Options_C.BndEvt__BTN_UI_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Menu_Options.Menu_Options_C.Back
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMenu_Options_C::Back()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Options.Menu_Options_C.Back");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Menu_Options.Menu_Options_C.BndEvt__BTN_Gameplay_K2Node_ComponentBoundEvent_29_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UMenu_Options_C::BndEvt__BTN_Gameplay_K2Node_ComponentBoundEvent_29_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Options.Menu_Options_C.BndEvt__BTN_Gameplay_K2Node_ComponentBoundEvent_29_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Menu_Options.Menu_Options_C.BndEvt__BTN_Privacy_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UMenu_Options_C::BndEvt__BTN_Privacy_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Options.Menu_Options_C.BndEvt__BTN_Privacy_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Menu_Options.Menu_Options_C.ExecuteUbergraph_Menu_Options
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMenu_Options_C::ExecuteUbergraph_Menu_Options(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Options.Menu_Options_C.ExecuteUbergraph_Menu_Options");

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
