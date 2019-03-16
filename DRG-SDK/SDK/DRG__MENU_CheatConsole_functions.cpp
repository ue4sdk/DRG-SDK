// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG__MENU_CheatConsole_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function _MENU_CheatConsole._MENU_CheatConsole_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply U_MENU_CheatConsole_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CheatConsole._MENU_CheatConsole_C.OnKeyUp");

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


// Function _MENU_CheatConsole._MENU_CheatConsole_C.Back Pressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void U_MENU_CheatConsole_C::Back_Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CheatConsole._MENU_CheatConsole_C.Back Pressed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_CheatConsole._MENU_CheatConsole_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_MENU_CheatConsole_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CheatConsole._MENU_CheatConsole_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_CheatConsole._MENU_CheatConsole_C.BndEvt__BTN_Back2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void U_MENU_CheatConsole_C::BndEvt__BTN_Back2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CheatConsole._MENU_CheatConsole_C.BndEvt__BTN_Back2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_CheatConsole._MENU_CheatConsole_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void U_MENU_CheatConsole_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CheatConsole._MENU_CheatConsole_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_CheatConsole._MENU_CheatConsole_C.BndEvt__Button_XP_K2Node_ComponentBoundEvent_238_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void U_MENU_CheatConsole_C::BndEvt__Button_XP_K2Node_ComponentBoundEvent_238_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CheatConsole._MENU_CheatConsole_C.BndEvt__Button_XP_K2Node_ComponentBoundEvent_238_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_CheatConsole._MENU_CheatConsole_C.BndEvt__Button_Credits_K2Node_ComponentBoundEvent_239_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void U_MENU_CheatConsole_C::BndEvt__Button_Credits_K2Node_ComponentBoundEvent_239_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CheatConsole._MENU_CheatConsole_C.BndEvt__Button_Credits_K2Node_ComponentBoundEvent_239_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_CheatConsole._MENU_CheatConsole_C.BndEvt__Button_Resources_K2Node_ComponentBoundEvent_242_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void U_MENU_CheatConsole_C::BndEvt__Button_Resources_K2Node_ComponentBoundEvent_242_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CheatConsole._MENU_CheatConsole_C.BndEvt__Button_Resources_K2Node_ComponentBoundEvent_242_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_CheatConsole._MENU_CheatConsole_C.BndEvt__Button_Perks_K2Node_ComponentBoundEvent_246_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void U_MENU_CheatConsole_C::BndEvt__Button_Perks_K2Node_ComponentBoundEvent_246_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CheatConsole._MENU_CheatConsole_C.BndEvt__Button_Perks_K2Node_ComponentBoundEvent_246_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_CheatConsole._MENU_CheatConsole_C.BndEvt__Basic_RotateMissions_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void U_MENU_CheatConsole_C::BndEvt__Basic_RotateMissions_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CheatConsole._MENU_CheatConsole_C.BndEvt__Basic_RotateMissions_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_CheatConsole._MENU_CheatConsole_C.BndEvt__Basic_Connect_K2Node_ComponentBoundEvent_54_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void U_MENU_CheatConsole_C::BndEvt__Basic_Connect_K2Node_ComponentBoundEvent_54_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CheatConsole._MENU_CheatConsole_C.BndEvt__Basic_Connect_K2Node_ComponentBoundEvent_54_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_CheatConsole._MENU_CheatConsole_C.BndEvt__Basic_UnlockAllWeapons_K2Node_ComponentBoundEvent_44_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void U_MENU_CheatConsole_C::BndEvt__Basic_UnlockAllWeapons_K2Node_ComponentBoundEvent_44_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CheatConsole._MENU_CheatConsole_C.BndEvt__Basic_UnlockAllWeapons_K2Node_ComponentBoundEvent_44_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_CheatConsole._MENU_CheatConsole_C.BndEvt__Basic_ResetUpgrades_K2Node_ComponentBoundEvent_58_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void U_MENU_CheatConsole_C::BndEvt__Basic_ResetUpgrades_K2Node_ComponentBoundEvent_58_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CheatConsole._MENU_CheatConsole_C.BndEvt__Basic_ResetUpgrades_K2Node_ComponentBoundEvent_58_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_CheatConsole._MENU_CheatConsole_C.BndEvt__Basic_AdvanceCampaign_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void U_MENU_CheatConsole_C::BndEvt__Basic_AdvanceCampaign_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CheatConsole._MENU_CheatConsole_C.BndEvt__Basic_AdvanceCampaign_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_CheatConsole._MENU_CheatConsole_C.BndEvt__Basic_UnlockAllUpgrades_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void U_MENU_CheatConsole_C::BndEvt__Basic_UnlockAllUpgrades_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CheatConsole._MENU_CheatConsole_C.BndEvt__Basic_UnlockAllUpgrades_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_CheatConsole._MENU_CheatConsole_C.ExecuteUbergraph__MENU_CheatConsole
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_MENU_CheatConsole_C::ExecuteUbergraph__MENU_CheatConsole(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_CheatConsole._MENU_CheatConsole_C.ExecuteUbergraph__MENU_CheatConsole");

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
