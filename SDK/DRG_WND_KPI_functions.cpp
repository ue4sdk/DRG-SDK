// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WND_KPI_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WND_KPI.WND_KPI_C.SelectNextTab
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Direction                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_KPI_C::SelectNextTab(int Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_KPI.WND_KPI_C.SelectNextTab");

	struct
	{
		int                            Direction;
	} params;

	params.Direction = Direction;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_KPI.WND_KPI_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWND_KPI_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_KPI.WND_KPI_C.OnKeyUp");

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


// Function WND_KPI.WND_KPI_C.SelectTab
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBasic_ButtonTab_C*      Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UWidget*                 Content                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UWND_KPI_C::SelectTab(class UBasic_ButtonTab_C* Button, class UWidget* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_KPI.WND_KPI_C.SelectTab");

	struct
	{
		class UBasic_ButtonTab_C*      Button;
		class UWidget*                 Content;
	} params;

	params.Button = Button;
	params.Content = Content;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_KPI.WND_KPI_C.BndEvt__BTN_Controls_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UWND_KPI_C::BndEvt__BTN_Controls_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_KPI.WND_KPI_C.BndEvt__BTN_Controls_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_KPI.WND_KPI_C.BndEvt__BTN_KPI_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UWND_KPI_C::BndEvt__BTN_KPI_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_KPI.WND_KPI_C.BndEvt__BTN_KPI_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_KPI.WND_KPI_C.BndEvt__BTN_Perks_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UWND_KPI_C::BndEvt__BTN_Perks_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_KPI.WND_KPI_C.BndEvt__BTN_Perks_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_KPI.WND_KPI_C.SelectStatistics
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_KPI_C::SelectStatistics()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_KPI.WND_KPI_C.SelectStatistics");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_KPI.WND_KPI_C.BndEvt__KPIView_K2Node_ComponentBoundEvent_3_OnHasClaimableChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           HasClaimable                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_KPI_C::BndEvt__KPIView_K2Node_ComponentBoundEvent_3_OnHasClaimableChanged__DelegateSignature(bool HasClaimable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_KPI.WND_KPI_C.BndEvt__KPIView_K2Node_ComponentBoundEvent_3_OnHasClaimableChanged__DelegateSignature");

	struct
	{
		bool                           HasClaimable;
	} params;

	params.HasClaimable = HasClaimable;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_KPI.WND_KPI_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWND_KPI_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_KPI.WND_KPI_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_KPI.WND_KPI_C.Close Window
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_KPI_C::Close_Window()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_KPI.WND_KPI_C.Close Window");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_KPI.WND_KPI_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWND_KPI_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_KPI.WND_KPI_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_KPI.WND_KPI_C.ExecuteUbergraph_WND_KPI
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_KPI_C::ExecuteUbergraph_WND_KPI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_KPI.WND_KPI_C.ExecuteUbergraph_WND_KPI");

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
