// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_NetworkErrorScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_NetworkErrorScreen.UI_NetworkErrorScreen_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_NetworkErrorScreen_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NetworkErrorScreen.UI_NetworkErrorScreen_C.OnKeyUp");

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


// Function UI_NetworkErrorScreen.UI_NetworkErrorScreen_C.FadeIt
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           FadeIn                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Duration                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_NetworkErrorScreen_C::FadeIt(bool FadeIn, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NetworkErrorScreen.UI_NetworkErrorScreen_C.FadeIt");

	struct
	{
		bool                           FadeIn;
		float                          Duration;
	} params;

	params.FadeIn = FadeIn;

	UObject::ProcessEvent(fn, &params);

	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function UI_NetworkErrorScreen.UI_NetworkErrorScreen_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_NetworkErrorScreen_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NetworkErrorScreen.UI_NetworkErrorScreen_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_NetworkErrorScreen.UI_NetworkErrorScreen_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_NetworkErrorScreen_C::BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NetworkErrorScreen.UI_NetworkErrorScreen_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_NetworkErrorScreen.UI_NetworkErrorScreen_C.Close
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_NetworkErrorScreen_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NetworkErrorScreen.UI_NetworkErrorScreen_C.Close");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_NetworkErrorScreen.UI_NetworkErrorScreen_C.ExecuteUbergraph_UI_NetworkErrorScreen
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_NetworkErrorScreen_C::ExecuteUbergraph_UI_NetworkErrorScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NetworkErrorScreen.UI_NetworkErrorScreen_C.ExecuteUbergraph_UI_NetworkErrorScreen");

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
