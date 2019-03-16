// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WND_JobsEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WND_JobsEntry.WND_JobsEntry_C.CanStartCampaign
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UCampaign*               InCampaign                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWND_JobsEntry_C::CanStartCampaign(class UCampaign* InCampaign)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.CanStartCampaign");

	struct
	{
		class UCampaign*               InCampaign;
		bool                           ReturnValue;
	} params;

	params.InCampaign = InCampaign;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WND_JobsEntry.WND_JobsEntry_C.CreateWeeklyRequirement
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWeeklyTimerCampaignRequirement* Requirement                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_JobsEntry_C::CreateWeeklyRequirement(class UWeeklyTimerCampaignRequirement* Requirement)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.CreateWeeklyRequirement");

	struct
	{
		class UWeeklyTimerCampaignRequirement* Requirement;
	} params;

	params.Requirement = Requirement;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_JobsEntry.WND_JobsEntry_C.CreatePlayerRankBox
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            RequiredRank                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_JobsEntry_C::CreatePlayerRankBox(int RequiredRank)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.CreatePlayerRankBox");

	struct
	{
		int                            RequiredRank;
	} params;

	params.RequiredRank = RequiredRank;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_JobsEntry.WND_JobsEntry_C.VisibleAndEnabled
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWND_JobsEntry_C::VisibleAndEnabled(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.VisibleAndEnabled");

	struct
	{
		class UWidget*                 Widget;
		bool                           ReturnValue;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WND_JobsEntry.WND_JobsEntry_C.CreateLevelRequirementBox
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            RequiredLevel                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPlayerCharacterID*      ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_JobsEntry_C::CreateLevelRequirementBox(int RequiredLevel, class UPlayerCharacterID* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.CreateLevelRequirementBox");

	struct
	{
		int                            RequiredLevel;
		class UPlayerCharacterID*      ID;
	} params;

	params.RequiredLevel = RequiredLevel;
	params.ID = ID;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_JobsEntry.WND_JobsEntry_C.HandleAbortMissionButton
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_JobsEntry_C::HandleAbortMissionButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.HandleAbortMissionButton");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_JobsEntry.WND_JobsEntry_C.SetInfo
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_JobsEntry_C::SetInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.SetInfo");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_JobsEntry.WND_JobsEntry_C.IsActiveCampaign
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWND_JobsEntry_C::IsActiveCampaign()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.IsActiveCampaign");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WND_JobsEntry.WND_JobsEntry_C.CreateRequirements
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_JobsEntry_C::CreateRequirements()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.CreateRequirements");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_JobsEntry.WND_JobsEntry_C.SetActiveLook
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_JobsEntry_C::SetActiveLook()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.SetActiveLook");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_JobsEntry.WND_JobsEntry_C.SetInactiveLook
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_JobsEntry_C::SetInactiveLook()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.SetInactiveLook");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_JobsEntry.WND_JobsEntry_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_JobsEntry_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_JobsEntry.WND_JobsEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWND_JobsEntry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_JobsEntry.WND_JobsEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWND_JobsEntry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_JobsEntry.WND_JobsEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWND_JobsEntry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_JobsEntry.WND_JobsEntry_C.BndEvt__BTN_Accept_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UWND_JobsEntry_C::BndEvt__BTN_Accept_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.BndEvt__BTN_Accept_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_JobsEntry.WND_JobsEntry_C.BndEvt__BTN_Abort_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UWND_JobsEntry_C::BndEvt__BTN_Abort_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.BndEvt__BTN_Abort_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_JobsEntry.WND_JobsEntry_C.Fold
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_JobsEntry_C::Fold()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.Fold");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_JobsEntry.WND_JobsEntry_C.Answer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Yes                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_JobsEntry_C::Answer(bool Yes)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.Answer");

	struct
	{
		bool                           Yes;
	} params;

	params.Yes = Yes;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_JobsEntry.WND_JobsEntry_C.SkipAnswer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Yes                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_JobsEntry_C::SkipAnswer(bool Yes)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.SkipAnswer");

	struct
	{
		bool                           Yes;
	} params;

	params.Yes = Yes;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_JobsEntry.WND_JobsEntry_C.SetData
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCampaign*               Campaign                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_JobsEntry_C::SetData(class UCampaign* Campaign)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.SetData");

	struct
	{
		class UCampaign*               Campaign;
	} params;

	params.Campaign = Campaign;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_JobsEntry.WND_JobsEntry_C.Refresh
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_JobsEntry_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.Refresh");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_JobsEntry.WND_JobsEntry_C.ExecuteUbergraph_WND_JobsEntry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_JobsEntry_C::ExecuteUbergraph_WND_JobsEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JobsEntry.WND_JobsEntry_C.ExecuteUbergraph_WND_JobsEntry");

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
