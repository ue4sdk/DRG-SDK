// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_CampaignProgress_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_CampaignProgress.ITM_CampaignProgress_C.ShowCampaignProgress
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCampaign*               Campaign                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_CampaignProgress_C::ShowCampaignProgress(class UCampaign* Campaign, int Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CampaignProgress.ITM_CampaignProgress_C.ShowCampaignProgress");

	struct
	{
		class UCampaign*               Campaign;
		int                            Progress;
	} params;

	params.Campaign = Campaign;
	params.Progress = Progress;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_CampaignProgress.ITM_CampaignProgress_C.OnFailure_D80FA39747BC71CCDA8380BEC43EE214
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_CampaignProgress_C::OnFailure_D80FA39747BC71CCDA8380BEC43EE214()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CampaignProgress.ITM_CampaignProgress_C.OnFailure_D80FA39747BC71CCDA8380BEC43EE214");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_CampaignProgress.ITM_CampaignProgress_C.OnSuccess_D80FA39747BC71CCDA8380BEC43EE214
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_CampaignProgress_C::OnSuccess_D80FA39747BC71CCDA8380BEC43EE214()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CampaignProgress.ITM_CampaignProgress_C.OnSuccess_D80FA39747BC71CCDA8380BEC43EE214");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_CampaignProgress.ITM_CampaignProgress_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_CampaignProgress_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CampaignProgress.ITM_CampaignProgress_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_CampaignProgress.ITM_CampaignProgress_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UITM_CampaignProgress_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CampaignProgress.ITM_CampaignProgress_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_CampaignProgress.ITM_CampaignProgress_C.Update_Campaign
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCampaign*               Campaign                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_CampaignProgress_C::Update_Campaign(class UCampaign* Campaign)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CampaignProgress.ITM_CampaignProgress_C.Update_Campaign");

	struct
	{
		class UCampaign*               Campaign;
	} params;

	params.Campaign = Campaign;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_CampaignProgress.ITM_CampaignProgress_C.BndEvt__BTN_SoloMission_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_CampaignProgress_C::BndEvt__BTN_SoloMission_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CampaignProgress.ITM_CampaignProgress_C.BndEvt__BTN_SoloMission_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_CampaignProgress.ITM_CampaignProgress_C.Refresh
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_CampaignProgress_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CampaignProgress.ITM_CampaignProgress_C.Refresh");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_CampaignProgress.ITM_CampaignProgress_C.HideSoloMissionButton
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_CampaignProgress_C::HideSoloMissionButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CampaignProgress.ITM_CampaignProgress_C.HideSoloMissionButton");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_CampaignProgress.ITM_CampaignProgress_C.Answer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Yes                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_CampaignProgress_C::Answer(bool Yes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CampaignProgress.ITM_CampaignProgress_C.Answer");

	struct
	{
		bool                           Yes;
	} params;

	params.Yes = Yes;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_CampaignProgress.ITM_CampaignProgress_C.ExecuteUbergraph_ITM_CampaignProgress
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_CampaignProgress_C::ExecuteUbergraph_ITM_CampaignProgress(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CampaignProgress.ITM_CampaignProgress_C.ExecuteUbergraph_ITM_CampaignProgress");

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
