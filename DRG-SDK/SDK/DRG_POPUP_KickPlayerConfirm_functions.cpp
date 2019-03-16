// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_POPUP_KickPlayerConfirm_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPOPUP_KickPlayerConfirm_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPOPUP_KickPlayerConfirm_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.BndEvt__Basic_CheckBox_C_1_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           IsChecked                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPOPUP_KickPlayerConfirm_C::BndEvt__Basic_CheckBox_C_1_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.BndEvt__Basic_CheckBox_C_1_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature");

	struct
	{
		bool                           IsChecked;
	} params;

	params.IsChecked = IsChecked;

	UObject::ProcessEvent(fn, &params);
}


// Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.BndEvt__Basic_CheckBox_AFK_K2Node_ComponentBoundEvent_12_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           IsChecked                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPOPUP_KickPlayerConfirm_C::BndEvt__Basic_CheckBox_AFK_K2Node_ComponentBoundEvent_12_OnCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.BndEvt__Basic_CheckBox_AFK_K2Node_ComponentBoundEvent_12_OnCheckStateChanged__DelegateSignature");

	struct
	{
		bool                           IsChecked;
	} params;

	params.IsChecked = IsChecked;

	UObject::ProcessEvent(fn, &params);
}


// Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.BndEvt__Basic_CheckBox_Private_K2Node_ComponentBoundEvent_16_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           IsChecked                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPOPUP_KickPlayerConfirm_C::BndEvt__Basic_CheckBox_Private_K2Node_ComponentBoundEvent_16_OnCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.BndEvt__Basic_CheckBox_Private_K2Node_ComponentBoundEvent_16_OnCheckStateChanged__DelegateSignature");

	struct
	{
		bool                           IsChecked;
	} params;

	params.IsChecked = IsChecked;

	UObject::ProcessEvent(fn, &params);
}


// Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.BndEvt__BTN_Kick_K2Node_ComponentBoundEvent_37_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UPOPUP_KickPlayerConfirm_C::BndEvt__BTN_Kick_K2Node_ComponentBoundEvent_37_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.BndEvt__BTN_Kick_K2Node_ComponentBoundEvent_37_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.SetPlayer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerController*       Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPOPUP_KickPlayerConfirm_C::SetPlayer(class APlayerController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.SetPlayer");

	struct
	{
		class APlayerController*       Player;
	} params;

	params.Player = Player;

	UObject::ProcessEvent(fn, &params);
}


// Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.BndEvt__BTN_Cancel_K2Node_ComponentBoundEvent_86_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UPOPUP_KickPlayerConfirm_C::BndEvt__BTN_Cancel_K2Node_ComponentBoundEvent_86_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.BndEvt__BTN_Cancel_K2Node_ComponentBoundEvent_86_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.ExecuteUbergraph_POPUP_KickPlayerConfirm
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPOPUP_KickPlayerConfirm_C::ExecuteUbergraph_POPUP_KickPlayerConfirm(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.ExecuteUbergraph_POPUP_KickPlayerConfirm");

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
