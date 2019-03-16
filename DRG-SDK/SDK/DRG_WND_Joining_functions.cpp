// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WND_Joining_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WND_Joining.WND_Joining_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWND_Joining_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Joining.WND_Joining_C.OnKeyUp");

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


// Function WND_Joining.WND_Joining_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWND_Joining_C::BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Joining.WND_Joining_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Joining.WND_Joining_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_Joining_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Joining.WND_Joining_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_Joining.WND_Joining_C.HideCancel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_Joining_C::HideCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Joining.WND_Joining_C.HideCancel");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Joining.WND_Joining_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWND_Joining_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Joining.WND_Joining_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Joining.WND_Joining_C.Close
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_Joining_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Joining.WND_Joining_C.Close");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Joining.WND_Joining_C.ExecuteUbergraph_WND_Joining
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_Joining_C::ExecuteUbergraph_WND_Joining(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Joining.WND_Joining_C.ExecuteUbergraph_WND_Joining");

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
