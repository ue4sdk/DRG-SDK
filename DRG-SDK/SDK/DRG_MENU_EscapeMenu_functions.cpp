// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_MENU_EscapeMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.SetHUDVisible
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Visible                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMENU_EscapeMenu_C::SetHUDVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.SetHUDVisible");

	struct
	{
		bool                           Visible;
	} params;

	params.Visible = Visible;

	UObject::ProcessEvent(fn, &params);
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.NotInParty
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMENU_EscapeMenu_C::NotInParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.NotInParty");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.UpdateDebugTerrainHash
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMENU_EscapeMenu_C::UpdateDebugTerrainHash()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.UpdateDebugTerrainHash");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.SetupLeaveButton
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMENU_EscapeMenu_C::SetupLeaveButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.SetupLeaveButton");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UMENU_EscapeMenu_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnKeyUp");

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


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnFailure_C683F28B449A36320FC36D96F11FEA56
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMENU_EscapeMenu_C::OnFailure_C683F28B449A36320FC36D96F11FEA56()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnFailure_C683F28B449A36320FC36D96F11FEA56");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnSuccess_C683F28B449A36320FC36D96F11FEA56
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMENU_EscapeMenu_C::OnSuccess_C683F28B449A36320FC36D96F11FEA56()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnSuccess_C683F28B449A36320FC36D96F11FEA56");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMENU_EscapeMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnCloseLayout
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMENU_EscapeMenu_C::OnCloseLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnCloseLayout");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.SetFocus
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMENU_EscapeMenu_C::SetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.SetFocus");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnQuitGame
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Yes                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMENU_EscapeMenu_C::OnQuitGame(bool Yes)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnQuitGame");

	struct
	{
		bool                           Yes;
	} params;

	params.Yes = Yes;

	UObject::ProcessEvent(fn, &params);
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnLeaveTeam
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Yes                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMENU_EscapeMenu_C::OnLeaveTeam(bool Yes)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnLeaveTeam");

	struct
	{
		bool                           Yes;
	} params;

	params.Yes = Yes;

	UObject::ProcessEvent(fn, &params);
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_LeaveTeam_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UMENU_EscapeMenu_C::BndEvt__BTN_LeaveTeam_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_LeaveTeam_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Options_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UMENU_EscapeMenu_C::BndEvt__BTN_Options_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Options_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Controls_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UMENU_EscapeMenu_C::BndEvt__BTN_Controls_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Controls_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Discord_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UMENU_EscapeMenu_C::BndEvt__BTN_Discord_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Discord_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Newsletter_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UMENU_EscapeMenu_C::BndEvt__BTN_Newsletter_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Newsletter_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Exit_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UMENU_EscapeMenu_C::BndEvt__BTN_Exit_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Exit_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Credits_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UMENU_EscapeMenu_C::BndEvt__BTN_Credits_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Credits_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Tutorial_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UMENU_EscapeMenu_C::BndEvt__BTN_Tutorial_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Tutorial_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMENU_EscapeMenu_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_InviteFriends_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UMENU_EscapeMenu_C::BndEvt__BTN_InviteFriends_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_InviteFriends_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMENU_EscapeMenu_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnClosed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMENU_EscapeMenu_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnClosed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Resume2_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UMENU_EscapeMenu_C::BndEvt__BTN_Resume2_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Resume2_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__Basic_ChangeProfile_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UMENU_EscapeMenu_C::BndEvt__Basic_ChangeProfile_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__Basic_ChangeProfile_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnXBoxAccountPickerClosed_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMENU_EscapeMenu_C::OnXBoxAccountPickerClosed_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnXBoxAccountPickerClosed_Event_1");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.Answer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Yes                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMENU_EscapeMenu_C::Answer(bool Yes)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.Answer");

	struct
	{
		bool                           Yes;
	} params;

	params.Yes = Yes;

	UObject::ProcessEvent(fn, &params);
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.ExecuteUbergraph_MENU_EscapeMenu
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMENU_EscapeMenu_C::ExecuteUbergraph_MENU_EscapeMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.ExecuteUbergraph_MENU_EscapeMenu");

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
