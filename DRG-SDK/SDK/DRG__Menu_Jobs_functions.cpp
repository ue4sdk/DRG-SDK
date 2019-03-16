// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG__Menu_Jobs_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function _Menu_Jobs._Menu_Jobs_C.CreateJobWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerController*       OwningPlayer                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCampaign*               Campaign                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsWeejly                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UWND_Jobs_Entry_Base_C*  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UWND_Jobs_Entry_Base_C* U_Menu_Jobs_C::CreateJobWidget(class APlayerController* OwningPlayer, class UCampaign* Campaign, bool IsWeejly)
{
	static auto fn = UObject::FindObject<UFunction>("Function _Menu_Jobs._Menu_Jobs_C.CreateJobWidget");

	struct
	{
		class APlayerController*       OwningPlayer;
		class UCampaign*               Campaign;
		bool                           IsWeejly;
		class UWND_Jobs_Entry_Base_C*  ReturnValue;
	} params;

	params.OwningPlayer = OwningPlayer;
	params.Campaign = Campaign;
	params.IsWeejly = IsWeejly;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function _Menu_Jobs._Menu_Jobs_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply U_Menu_Jobs_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function _Menu_Jobs._Menu_Jobs_C.OnKeyUp");

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


// Function _Menu_Jobs._Menu_Jobs_C.RefreshJobs
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void U_Menu_Jobs_C::RefreshJobs()
{
	static auto fn = UObject::FindObject<UFunction>("Function _Menu_Jobs._Menu_Jobs_C.RefreshJobs");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _Menu_Jobs._Menu_Jobs_C.JobUnfolded
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWND_Jobs_Entry_Base_C*  Window                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void U_Menu_Jobs_C::JobUnfolded(class UWND_Jobs_Entry_Base_C* Window)
{
	static auto fn = UObject::FindObject<UFunction>("Function _Menu_Jobs._Menu_Jobs_C.JobUnfolded");

	struct
	{
		class UWND_Jobs_Entry_Base_C*  Window;
	} params;

	params.Window = Window;

	UObject::ProcessEvent(fn, &params);
}


// Function _Menu_Jobs._Menu_Jobs_C.AddJobEntry
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCampaign*               Campaign                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_Menu_Jobs_C::AddJobEntry(class UCampaign* Campaign)
{
	static auto fn = UObject::FindObject<UFunction>("Function _Menu_Jobs._Menu_Jobs_C.AddJobEntry");

	struct
	{
		class UCampaign*               Campaign;
	} params;

	params.Campaign = Campaign;

	UObject::ProcessEvent(fn, &params);
}


// Function _Menu_Jobs._Menu_Jobs_C.GetFSDPlayer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AFSDPlayerController*    AsFSDPlayer_Controller         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_Menu_Jobs_C::GetFSDPlayer(class AFSDPlayerController** AsFSDPlayer_Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function _Menu_Jobs._Menu_Jobs_C.GetFSDPlayer");

	struct
	{
		class AFSDPlayerController*    AsFSDPlayer_Controller;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AsFSDPlayer_Controller != nullptr)
		*AsFSDPlayer_Controller = params.AsFSDPlayer_Controller;
}


// Function _Menu_Jobs._Menu_Jobs_C.BndEvt__BTN_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void U_Menu_Jobs_C::BndEvt__BTN_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _Menu_Jobs._Menu_Jobs_C.BndEvt__BTN_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _Menu_Jobs._Menu_Jobs_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void U_Menu_Jobs_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function _Menu_Jobs._Menu_Jobs_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _Menu_Jobs._Menu_Jobs_C.Back
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void U_Menu_Jobs_C::Back()
{
	static auto fn = UObject::FindObject<UFunction>("Function _Menu_Jobs._Menu_Jobs_C.Back");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _Menu_Jobs._Menu_Jobs_C.OnClosed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void U_Menu_Jobs_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function _Menu_Jobs._Menu_Jobs_C.OnClosed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _Menu_Jobs._Menu_Jobs_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_Menu_Jobs_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function _Menu_Jobs._Menu_Jobs_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function _Menu_Jobs._Menu_Jobs_C.ExecuteUbergraph__Menu_Jobs
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_Menu_Jobs_C::ExecuteUbergraph__Menu_Jobs(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function _Menu_Jobs._Menu_Jobs_C.ExecuteUbergraph__Menu_Jobs");

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
