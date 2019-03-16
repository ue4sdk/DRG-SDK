// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_FocusableCanvas_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_FocusableCanvas.UI_FocusableCanvas_C.OnFocusReceived
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FFocusEvent             InFocusEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_FocusableCanvas_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FocusableCanvas.UI_FocusableCanvas_C.OnFocusReceived");

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


// Function UI_FocusableCanvas.UI_FocusableCanvas_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_FocusableCanvas_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FocusableCanvas.UI_FocusableCanvas_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_FocusableCanvas.UI_FocusableCanvas_C.OnFocusLost
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUI_FocusableCanvas_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FocusableCanvas.UI_FocusableCanvas_C.OnFocusLost");

	struct
	{
		struct FFocusEvent             InFocusEvent;
	} params;

	params.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_FocusableCanvas.UI_FocusableCanvas_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUI_FocusableCanvas_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FocusableCanvas.UI_FocusableCanvas_C.OnMouseEnter");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_FocusableCanvas.UI_FocusableCanvas_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUI_FocusableCanvas_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FocusableCanvas.UI_FocusableCanvas_C.OnMouseLeave");

	struct
	{
		struct FPointerEvent           MouseEvent;
	} params;

	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_FocusableCanvas.UI_FocusableCanvas_C.ExecuteUbergraph_UI_FocusableCanvas
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_FocusableCanvas_C::ExecuteUbergraph_UI_FocusableCanvas(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FocusableCanvas.UI_FocusableCanvas_C.ExecuteUbergraph_UI_FocusableCanvas");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_FocusableCanvas.UI_FocusableCanvas_C.OnHoverChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           IsHovered                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_FocusableCanvas_C::OnHoverChanged__DelegateSignature(class UWidget* Widget, bool IsHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FocusableCanvas.UI_FocusableCanvas_C.OnHoverChanged__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
		bool                           IsHovered;
	} params;

	params.Widget = Widget;
	params.IsHovered = IsHovered;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_FocusableCanvas.UI_FocusableCanvas_C.OnFocusChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           IsFocused                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_FocusableCanvas_C::OnFocusChanged__DelegateSignature(class UWidget* Widget, bool IsFocused)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FocusableCanvas.UI_FocusableCanvas_C.OnFocusChanged__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
		bool                           IsFocused;
	} params;

	params.Widget = Widget;
	params.IsFocused = IsFocused;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
