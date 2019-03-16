// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_KeyCapture_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_KeyCapture.UI_KeyCapture_C.GetCurrentKeyName
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   InputKey                       (CPF_Parm, CPF_OutParm)

void UUI_KeyCapture_C::GetCurrentKeyName(struct FText* InputKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyCapture.UI_KeyCapture_C.GetCurrentKeyName");

	struct
	{
		struct FText                   InputKey;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (InputKey != nullptr)
		*InputKey = params.InputKey;
}


// Function UI_KeyCapture.UI_KeyCapture_C.UpdateClearButton
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_KeyCapture_C::UpdateClearButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyCapture.UI_KeyCapture_C.UpdateClearButton");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_KeyCapture.UI_KeyCapture_C.UpdateKeyLabel
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_KeyCapture_C::UpdateKeyLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyCapture.UI_KeyCapture_C.UpdateKeyLabel");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_KeyCapture.UI_KeyCapture_C.Receive Key
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_KeyCapture_C::Receive_Key(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyCapture.UI_KeyCapture_C.Receive Key");

	struct
	{
		struct FKey                    Key;
		struct FEventReply             ReturnValue;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_KeyCapture.UI_KeyCapture_C.OnMouseButtonUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_KeyCapture_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyCapture.UI_KeyCapture_C.OnMouseButtonUp");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_KeyCapture.UI_KeyCapture_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_KeyCapture_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyCapture.UI_KeyCapture_C.OnKeyUp");

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


// Function UI_KeyCapture.UI_KeyCapture_C.OnFocusReceived
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FFocusEvent             InFocusEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_KeyCapture_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyCapture.UI_KeyCapture_C.OnFocusReceived");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FFocusEvent             InFocusEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_KeyCapture.UI_KeyCapture_C.OnFocusLost
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUI_KeyCapture_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyCapture.UI_KeyCapture_C.OnFocusLost");

	struct
	{
		struct FFocusEvent             InFocusEvent;
	} params;

	params.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_KeyCapture.UI_KeyCapture_C.Initialize
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ActionName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EKeyBindingAxis                ActionAxis                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_KeyCapture_C::Initialize(const struct FName& ActionName, EKeyBindingAxis ActionAxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyCapture.UI_KeyCapture_C.Initialize");

	struct
	{
		struct FName                   ActionName;
		EKeyBindingAxis                ActionAxis;
	} params;

	params.ActionName = ActionName;
	params.ActionAxis = ActionAxis;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_KeyCapture.UI_KeyCapture_C.UpdateKeyBinding
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_KeyCapture_C::UpdateKeyBinding()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyCapture.UI_KeyCapture_C.UpdateKeyBinding");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_KeyCapture.UI_KeyCapture_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUI_KeyCapture_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyCapture.UI_KeyCapture_C.OnMouseEnter");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_KeyCapture.UI_KeyCapture_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUI_KeyCapture_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyCapture.UI_KeyCapture_C.OnMouseLeave");

	struct
	{
		struct FPointerEvent           MouseEvent;
	} params;

	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_KeyCapture.UI_KeyCapture_C.BndEvt__ClearButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_KeyCapture_C::BndEvt__ClearButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyCapture.UI_KeyCapture_C.BndEvt__ClearButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_KeyCapture.UI_KeyCapture_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_KeyCapture_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyCapture.UI_KeyCapture_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_KeyCapture.UI_KeyCapture_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_KeyCapture_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyCapture.UI_KeyCapture_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_KeyCapture.UI_KeyCapture_C.ExecuteUbergraph_UI_KeyCapture
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_KeyCapture_C::ExecuteUbergraph_UI_KeyCapture(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyCapture.UI_KeyCapture_C.ExecuteUbergraph_UI_KeyCapture");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_KeyCapture.UI_KeyCapture_C.OnKeyCaptureCancelled__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_KeyCapture_C::OnKeyCaptureCancelled__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyCapture.UI_KeyCapture_C.OnKeyCaptureCancelled__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_KeyCapture.UI_KeyCapture_C.OnKeyCaptureChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_KeyCapture_C::OnKeyCaptureChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyCapture.UI_KeyCapture_C.OnKeyCaptureChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_KeyCapture.UI_KeyCapture_C.OnKeyCaptureError__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_KeyCapture_C::OnKeyCaptureError__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyCapture.UI_KeyCapture_C.OnKeyCaptureError__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_KeyCapture.UI_KeyCapture_C.OnKeyCaptureFinished__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_KeyCapture_C::OnKeyCaptureFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyCapture.UI_KeyCapture_C.OnKeyCaptureFinished__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
