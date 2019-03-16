// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_Milestone_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Milestone_Item.UI_Milestone_Item_C.UpdateRewardStar
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Milestone_Item_C::UpdateRewardStar(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.UpdateRewardStar");

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Milestone_Item.UI_Milestone_Item_C.GetIsClaimable
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ItemClaimable                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Milestone_Item_C::GetIsClaimable(bool* ItemClaimable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.GetIsClaimable");

	struct
	{
		bool                           ItemClaimable;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ItemClaimable != nullptr)
		*ItemClaimable = params.ItemClaimable;
}


// Function UI_Milestone_Item.UI_Milestone_Item_C.GetIcon
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UTexture2D*              Icon                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Milestone_Item_C::GetIcon(class UTexture2D** Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.GetIcon");

	struct
	{
		class UTexture2D*              Icon;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Icon != nullptr)
		*Icon = params.Icon;
}


// Function UI_Milestone_Item.UI_Milestone_Item_C.SetCategoryFilter
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UTexture2D*>      Filter                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UUI_Milestone_Item_C::SetCategoryFilter(TArray<class UTexture2D*>* Filter)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.SetCategoryFilter");

	struct
	{
		TArray<class UTexture2D*>      Filter;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Filter != nullptr)
		*Filter = params.Filter;
}


// Function UI_Milestone_Item.UI_Milestone_Item_C.OnMouseButtonUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_Milestone_Item_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.OnMouseButtonUp");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_Milestone_Item.UI_Milestone_Item_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_Milestone_Item_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.OnMouseButtonDown");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_Milestone_Item.UI_Milestone_Item_C.SetHovered
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Hovered                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Milestone_Item_C::SetHovered(bool Hovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.SetHovered");

	struct
	{
		bool                           Hovered;
	} params;

	params.Hovered = Hovered;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Milestone_Item.UI_Milestone_Item_C.SetProgress
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Tier                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          CurrentCount                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          TargetCount                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsClaimable                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Milestone_Item_C::SetProgress(int Tier, float Progress, float CurrentCount, float TargetCount, bool IsClaimable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.SetProgress");

	struct
	{
		int                            Tier;
		float                          Progress;
		float                          CurrentCount;
		float                          TargetCount;
		bool                           IsClaimable;
	} params;

	params.Tier = Tier;
	params.Progress = Progress;
	params.CurrentCount = CurrentCount;
	params.TargetCount = TargetCount;
	params.IsClaimable = IsClaimable;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Milestone_Item.UI_Milestone_Item_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Milestone_Item_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Milestone_Item.UI_Milestone_Item_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_Milestone_Item_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Milestone_Item.UI_Milestone_Item_C.UpdateItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_Milestone_Item_C::UpdateItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.UpdateItem");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Milestone_Item.UI_Milestone_Item_C.OnCountChanged_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMissionStat*            MissionStat                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Milestone_Item_C::OnCountChanged_Event(class UMissionStat* MissionStat, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.OnCountChanged_Event");

	struct
	{
		class UMissionStat*            MissionStat;
		float                          Value;
	} params;

	params.MissionStat = MissionStat;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Milestone_Item.UI_Milestone_Item_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUI_Milestone_Item_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.OnMouseEnter");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Milestone_Item.UI_Milestone_Item_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUI_Milestone_Item_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.OnMouseLeave");

	struct
	{
		struct FPointerEvent           MouseEvent;
	} params;

	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Milestone_Item.UI_Milestone_Item_C.Claim KPI
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_Milestone_Item_C::Claim_KPI()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.Claim KPI");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Milestone_Item.UI_Milestone_Item_C.BndEvt__ClaimAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_Milestone_Item_C::BndEvt__ClaimAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.BndEvt__ClaimAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Milestone_Item.UI_Milestone_Item_C.BndEvt__CompletedAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_Milestone_Item_C::BndEvt__CompletedAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.BndEvt__CompletedAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Milestone_Item.UI_Milestone_Item_C.CreateRewardStars
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            StarCount                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Milestone_Item_C::CreateRewardStars(int StarCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.CreateRewardStars");

	struct
	{
		int                            StarCount;
	} params;

	params.StarCount = StarCount;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Milestone_Item.UI_Milestone_Item_C.SetAnimClaimProgress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Milestone_Item_C::SetAnimClaimProgress(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.SetAnimClaimProgress");

	struct
	{
		float                          Progress;
	} params;

	params.Progress = Progress;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Milestone_Item.UI_Milestone_Item_C.BndEvt__CompletedAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_Milestone_Item_C::BndEvt__CompletedAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.BndEvt__CompletedAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Milestone_Item.UI_Milestone_Item_C.ExecuteUbergraph_UI_Milestone_Item
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Milestone_Item_C::ExecuteUbergraph_UI_Milestone_Item(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.ExecuteUbergraph_UI_Milestone_Item");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Milestone_Item.UI_Milestone_Item_C.OnItemClaimableChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_Milestone_Item_C*    Milestone_Item                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_Milestone_Item_C::OnItemClaimableChanged__DelegateSignature(class UUI_Milestone_Item_C* Milestone_Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.OnItemClaimableChanged__DelegateSignature");

	struct
	{
		class UUI_Milestone_Item_C*    Milestone_Item;
	} params;

	params.Milestone_Item = Milestone_Item;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
