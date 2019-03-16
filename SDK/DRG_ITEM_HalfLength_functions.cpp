// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITEM_HalfLength_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITEM_HalfLength.ITEM_HalfLength_C.OnMouseButtonUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UITEM_HalfLength_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_HalfLength.ITEM_HalfLength_C.OnMouseButtonUp");

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


// Function ITEM_HalfLength.ITEM_HalfLength_C.SetSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_HalfLength_C::SetSelected(bool IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_HalfLength.ITEM_HalfLength_C.SetSelected");

	struct
	{
		bool                           IsSelected;
	} params;

	params.IsSelected = IsSelected;

	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_HalfLength.ITEM_HalfLength_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UITEM_HalfLength_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_HalfLength.ITEM_HalfLength_C.OnMouseLeave");

	struct
	{
		struct FPointerEvent           MouseEvent;
	} params;

	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_HalfLength.ITEM_HalfLength_C.BndEvt__BasicWindow_MenuWithHeader_K2Node_ComponentBoundEvent_6_On Clicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UITEM_HalfLength_C::BndEvt__BasicWindow_MenuWithHeader_K2Node_ComponentBoundEvent_6_On_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_HalfLength.ITEM_HalfLength_C.BndEvt__BasicWindow_MenuWithHeader_K2Node_ComponentBoundEvent_6_On Clicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_HalfLength.ITEM_HalfLength_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_HalfLength_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_HalfLength.ITEM_HalfLength_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_HalfLength.ITEM_HalfLength_C.BndEvt__BTN_NextITem_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UITEM_HalfLength_C::BndEvt__BTN_NextITem_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_HalfLength.ITEM_HalfLength_C.BndEvt__BTN_NextITem_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_HalfLength.ITEM_HalfLength_C.OnItemUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITEM_HalfLength_C::OnItemUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_HalfLength.ITEM_HalfLength_C.OnItemUpdated");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_HalfLength.ITEM_HalfLength_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UITEM_HalfLength_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_HalfLength.ITEM_HalfLength_C.OnMouseEnter");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_HalfLength.ITEM_HalfLength_C.OnClear
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITEM_HalfLength_C::OnClear()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_HalfLength.ITEM_HalfLength_C.OnClear");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_HalfLength.ITEM_HalfLength_C.ExecuteUbergraph_ITEM_HalfLength
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_HalfLength_C::ExecuteUbergraph_ITEM_HalfLength(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_HalfLength.ITEM_HalfLength_C.ExecuteUbergraph_ITEM_HalfLength");

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
