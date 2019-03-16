// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_CampaignNotificationManager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_CampaignNotificationManager_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.OnKeyUp");

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


// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.SetFrameColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_MenuColors>   Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CampaignNotificationManager_C::SetFrameColor(TEnumAsByte<ENUM_MenuColors> Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.SetFrameColor");

	struct
	{
		TEnumAsByte<ENUM_MenuColors>   Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.GetMissionCompleteShout
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UDialogDataAsset*        MissionCompleteShout           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CampaignNotificationManager_C::GetMissionCompleteShout(class UDialogDataAsset** MissionCompleteShout)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.GetMissionCompleteShout");

	struct
	{
		class UDialogDataAsset*        MissionCompleteShout;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (MissionCompleteShout != nullptr)
		*MissionCompleteShout = params.MissionCompleteShout;
}


// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.CreateRewardWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UReward*                 Reward                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class URewardWidget*           Widget                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_CampaignNotificationManager_C::CreateRewardWidget(class UReward* Reward, class URewardWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.CreateRewardWidget");

	struct
	{
		class UReward*                 Reward;
		class URewardWidget*           Widget;
	} params;

	params.Reward = Reward;

	UObject::ProcessEvent(fn, &params);

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.Add Reward List
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UReward*>         List                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UUI_CampaignNotificationManager_C::Add_Reward_List(TArray<class UReward*> List)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.Add Reward List");

	struct
	{
		TArray<class UReward*>         List;
	} params;

	params.List = List;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.Add Reward
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UReward*                 Reward                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CampaignNotificationManager_C::Add_Reward(class UReward* Reward)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.Add Reward");

	struct
	{
		class UReward*                 Reward;
	} params;

	params.Reward = Reward;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CampaignNotificationManager_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_CampaignNotificationManager_C::BndEvt__ContinueButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_CampaignNotificationManager_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_CampaignNotificationManager_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.OnAudioFinished_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CampaignNotificationManager_C::OnAudioFinished_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.OnAudioFinished_Event");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.OnClosed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_CampaignNotificationManager_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.OnClosed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.SetMissionControlPaused
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsPaused                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CampaignNotificationManager_C::SetMissionControlPaused(bool IsPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.SetMissionControlPaused");

	struct
	{
		bool                           IsPaused;
	} params;

	params.IsPaused = IsPaused;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.Continue
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CampaignNotificationManager_C::Continue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.Continue");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.CursorInputHack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CampaignNotificationManager_C::CursorInputHack()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.CursorInputHack");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.ExecuteUbergraph_UI_CampaignNotificationManager
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CampaignNotificationManager_C::ExecuteUbergraph_UI_CampaignNotificationManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CampaignNotificationManager.UI_CampaignNotificationManager_C.ExecuteUbergraph_UI_CampaignNotificationManager");

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
