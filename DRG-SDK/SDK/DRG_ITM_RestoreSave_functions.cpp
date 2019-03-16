// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_RestoreSave_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_RestoreSave.ITM_RestoreSave_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UITM_RestoreSave_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RestoreSave.ITM_RestoreSave_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_RestoreSave.ITM_RestoreSave_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_RestoreSave_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RestoreSave.ITM_RestoreSave_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_RestoreSave.ITM_RestoreSave_C.HideUIDelayed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_RestoreSave_C::HideUIDelayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RestoreSave.ITM_RestoreSave_C.HideUIDelayed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_RestoreSave.ITM_RestoreSave_C.ShowWindow
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_RestoreSave_C::ShowWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RestoreSave.ITM_RestoreSave_C.ShowWindow");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_RestoreSave.ITM_RestoreSave_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_RestoreSave_C::BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RestoreSave.ITM_RestoreSave_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_RestoreSave.ITM_RestoreSave_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_RestoreSave_C::BndEvt__BTN_No_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RestoreSave.ITM_RestoreSave_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_RestoreSave.ITM_RestoreSave_C.ExecuteUbergraph_ITM_RestoreSave
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_RestoreSave_C::ExecuteUbergraph_ITM_RestoreSave(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RestoreSave.ITM_RestoreSave_C.ExecuteUbergraph_ITM_RestoreSave");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_RestoreSave.ITM_RestoreSave_C.ImageReady__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 URL                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UITM_RestoreSave_C::ImageReady__DelegateSignature(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RestoreSave.ITM_RestoreSave_C.ImageReady__DelegateSignature");

	struct
	{
		struct FString                 URL;
	} params;

	params.URL = URL;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
