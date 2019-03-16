// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Basic_Popup_YesNoPrompt_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UBasic_Popup_YesNoPrompt_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.OnKeyUp");

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


// Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.OnShow
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Title                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText                   Message                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBasic_Popup_YesNoPrompt_C::OnShow(const struct FText& Title, const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.OnShow");

	struct
	{
		struct FText                   Title;
		struct FText                   Message;
	} params;

	params.Title = Title;
	params.Message = Message;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UBasic_Popup_YesNoPrompt_C::BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UBasic_Popup_YesNoPrompt_C::BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_Popup_YesNoPrompt_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.Yes
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBasic_Popup_YesNoPrompt_C::Yes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.Yes");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.No
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBasic_Popup_YesNoPrompt_C::No()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.No");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.Clear Resources
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBasic_Popup_YesNoPrompt_C::Clear_Resources()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.Clear Resources");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.Add Resource
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UResourceData*           InResource                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InAmount                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_Popup_YesNoPrompt_C::Add_Resource(class UResourceData* InResource, float InAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.Add Resource");

	struct
	{
		class UResourceData*           InResource;
		float                          InAmount;
	} params;

	params.InResource = InResource;
	params.InAmount = InAmount;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.SetResources
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FCraftingCost>   resources                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UBasic_Popup_YesNoPrompt_C::SetResources(TArray<struct FCraftingCost> resources)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.SetResources");

	struct
	{
		TArray<struct FCraftingCost>   resources;
	} params;

	params.resources = resources;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.ExecuteUbergraph_Basic_Popup_YesNoPrompt
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_Popup_YesNoPrompt_C::ExecuteUbergraph_Basic_Popup_YesNoPrompt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Popup_YesNoPrompt.Basic_Popup_YesNoPrompt_C.ExecuteUbergraph_Basic_Popup_YesNoPrompt");

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
