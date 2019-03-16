// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Basic_Menu_MinimalWindow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.IsMouseOver
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           MouseOver                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_Menu_MinimalWindow_C::IsMouseOver(bool* MouseOver)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.IsMouseOver");

	struct
	{
		bool                           MouseOver;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (MouseOver != nullptr)
		*MouseOver = params.MouseOver;
}


// Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnFocusReceived
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FFocusEvent             InFocusEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UBasic_Menu_MinimalWindow_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnFocusReceived");

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


// Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_Menu_MinimalWindow_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnFocusLost
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UBasic_Menu_MinimalWindow_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnFocusLost");

	struct
	{
		struct FFocusEvent             InFocusEvent;
	} params;

	params.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBasic_Menu_MinimalWindow_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnMouseEnter");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBasic_Menu_MinimalWindow_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnMouseLeave");

	struct
	{
		struct FPointerEvent           MouseEvent;
	} params;

	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.ExecuteUbergraph_Basic_Menu_MinimalWindow
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_Menu_MinimalWindow_C::ExecuteUbergraph_Basic_Menu_MinimalWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.ExecuteUbergraph_Basic_Menu_MinimalWindow");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnLostFocus__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBasic_Menu_MinimalWindow_C* Window                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UBasic_Menu_MinimalWindow_C::OnLostFocus__DelegateSignature(class UBasic_Menu_MinimalWindow_C* Window)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnLostFocus__DelegateSignature");

	struct
	{
		class UBasic_Menu_MinimalWindow_C* Window;
	} params;

	params.Window = Window;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnReceivedFocus__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBasic_Menu_MinimalWindow_C* Window                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UBasic_Menu_MinimalWindow_C::OnReceivedFocus__DelegateSignature(class UBasic_Menu_MinimalWindow_C* Window)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnReceivedFocus__DelegateSignature");

	struct
	{
		class UBasic_Menu_MinimalWindow_C* Window;
	} params;

	params.Window = Window;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnCursorLeave__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBasic_Menu_MinimalWindow_C* Window                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UBasic_Menu_MinimalWindow_C::OnCursorLeave__DelegateSignature(class UBasic_Menu_MinimalWindow_C* Window)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnCursorLeave__DelegateSignature");

	struct
	{
		class UBasic_Menu_MinimalWindow_C* Window;
	} params;

	params.Window = Window;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnCursorEnter__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBasic_Menu_MinimalWindow_C* Window                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UBasic_Menu_MinimalWindow_C::OnCursorEnter__DelegateSignature(class UBasic_Menu_MinimalWindow_C* Window)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnCursorEnter__DelegateSignature");

	struct
	{
		class UBasic_Menu_MinimalWindow_C* Window;
	} params;

	params.Window = Window;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.ThickBars__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBasic_Menu_MinimalWindow_C::ThickBars__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.ThickBars__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.On Clicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBasic_Menu_MinimalWindow_C::On_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.On Clicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
