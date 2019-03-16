// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_Milestone_Notification_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Milestone_Notification_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.Init Widget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_Milestone_Notification_C::Init_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.Init Widget");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_Milestone_Notification_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.OnMilestoneReached_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMilestoneAsset*         Milestone                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReachedTier                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Milestone_Notification_C::OnMilestoneReached_Event(class UMilestoneAsset* Milestone, int ReachedTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.OnMilestoneReached_Event");

	struct
	{
		class UMilestoneAsset*         Milestone;
		int                            ReachedTier;
	} params;

	params.Milestone = Milestone;
	params.ReachedTier = ReachedTier;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.ExecuteUbergraph_HUD_Milestone_Notification
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Milestone_Notification_C::ExecuteUbergraph_HUD_Milestone_Notification(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.ExecuteUbergraph_HUD_Milestone_Notification");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.OnMilestoneReached__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_Milestone_Notification_C::OnMilestoneReached__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Milestone_Notification.HUD_Milestone_Notification_C.OnMilestoneReached__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
