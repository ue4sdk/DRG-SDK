// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG__MENU_Trading_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function _MENU_Trading._MENU_Trading_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply U_MENU_Trading_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading._MENU_Trading_C.OnKeyUp");

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


// Function _MENU_Trading._MENU_Trading_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void U_MENU_Trading_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading._MENU_Trading_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_Trading._MENU_Trading_C.Back
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void U_MENU_Trading_C::Back()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading._MENU_Trading_C.Back");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_Trading._MENU_Trading_C.OnClosed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void U_MENU_Trading_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading._MENU_Trading_C.OnClosed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_Trading._MENU_Trading_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void U_MENU_Trading_C::BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading._MENU_Trading_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_Trading._MENU_Trading_C.ExecuteUbergraph__MENU_Trading
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_MENU_Trading_C::ExecuteUbergraph__MENU_Trading(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Trading._MENU_Trading_C.ExecuteUbergraph__MENU_Trading");

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
