// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Popup_ReconnectController_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Popup_ReconnectController.Popup_ReconnectController_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UPopup_ReconnectController_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Popup_ReconnectController.Popup_ReconnectController_C.OnKeyUp");

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


// Function Popup_ReconnectController.Popup_ReconnectController_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UPopup_ReconnectController_C::BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Popup_ReconnectController.Popup_ReconnectController_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Popup_ReconnectController.Popup_ReconnectController_C.Close
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPopup_ReconnectController_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function Popup_ReconnectController.Popup_ReconnectController_C.Close");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Popup_ReconnectController.Popup_ReconnectController_C.ExecuteUbergraph_Popup_ReconnectController
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPopup_ReconnectController_C::ExecuteUbergraph_Popup_ReconnectController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Popup_ReconnectController.Popup_ReconnectController_C.ExecuteUbergraph_Popup_ReconnectController");

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
