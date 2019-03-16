// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_SkipAssignmentPopup_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SkipAssignmentPopup.SkipAssignmentPopup_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply USkipAssignmentPopup_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkipAssignmentPopup.SkipAssignmentPopup_C.OnKeyUp");

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


// Function SkipAssignmentPopup.SkipAssignmentPopup_C.OnShow
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Title                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText                   Message                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void USkipAssignmentPopup_C::OnShow(const struct FText& Title, const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkipAssignmentPopup.SkipAssignmentPopup_C.OnShow");

	struct
	{
		struct FText                   Title;
		struct FText                   Message;
	} params;

	params.Title = Title;
	params.Message = Message;

	UObject::ProcessEvent(fn, &params);
}


// Function SkipAssignmentPopup.SkipAssignmentPopup_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void USkipAssignmentPopup_C::BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkipAssignmentPopup.SkipAssignmentPopup_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkipAssignmentPopup.SkipAssignmentPopup_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void USkipAssignmentPopup_C::BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkipAssignmentPopup.SkipAssignmentPopup_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkipAssignmentPopup.SkipAssignmentPopup_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkipAssignmentPopup_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkipAssignmentPopup.SkipAssignmentPopup_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function SkipAssignmentPopup.SkipAssignmentPopup_C.Yes
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkipAssignmentPopup_C::Yes()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkipAssignmentPopup.SkipAssignmentPopup_C.Yes");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkipAssignmentPopup.SkipAssignmentPopup_C.No
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkipAssignmentPopup_C::No()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkipAssignmentPopup.SkipAssignmentPopup_C.No");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkipAssignmentPopup.SkipAssignmentPopup_C.ExecuteUbergraph_SkipAssignmentPopup
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkipAssignmentPopup_C::ExecuteUbergraph_SkipAssignmentPopup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkipAssignmentPopup.SkipAssignmentPopup_C.ExecuteUbergraph_SkipAssignmentPopup");

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
