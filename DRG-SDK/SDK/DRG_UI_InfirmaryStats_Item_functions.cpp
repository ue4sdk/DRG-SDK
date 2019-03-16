// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_InfirmaryStats_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.OwnedByLocal
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUI_InfirmaryStats_Item_C::OwnedByLocal()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.OwnedByLocal");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.GetPlayer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AFSDPlayerController*    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AFSDPlayerController* UUI_InfirmaryStats_Item_C::GetPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.GetPlayer");

	struct
	{
		class AFSDPlayerController*    ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.IsInteractable
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUI_InfirmaryStats_Item_C::IsInteractable()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.IsInteractable");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.SetCategoryFilter
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UTexture2D*>      Filter                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UUI_InfirmaryStats_Item_C::SetCategoryFilter(TArray<class UTexture2D*>* Filter)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.SetCategoryFilter");

	struct
	{
		TArray<class UTexture2D*>      Filter;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Filter != nullptr)
		*Filter = params.Filter;
}


// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.GetMissionStat
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UMissionStat*            Mission_Stat                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_InfirmaryStats_Item_C::GetMissionStat(class UMissionStat** Mission_Stat)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.GetMissionStat");

	struct
	{
		class UMissionStat*            Mission_Stat;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Mission_Stat != nullptr)
		*Mission_Stat = params.Mission_Stat;
}


// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_InfirmaryStats_Item_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.OnCountChanged_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMissionStat*            MissionStat                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_InfirmaryStats_Item_C::OnCountChanged_Event(class UMissionStat* MissionStat, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.OnCountChanged_Event");

	struct
	{
		class UMissionStat*            MissionStat;
		float                          Value;
	} params;

	params.MissionStat = MissionStat;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.Set Selected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Selected                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_InfirmaryStats_Item_C::Set_Selected(bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.Set Selected");

	struct
	{
		bool                           Selected;
	} params;

	params.Selected = Selected;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_InfirmaryStats_Item_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUI_InfirmaryStats_Item_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.OnMouseEnter");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUI_InfirmaryStats_Item_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.OnMouseLeave");

	struct
	{
		struct FPointerEvent           MouseEvent;
	} params;

	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.MissonStatUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 StatTitle                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// struct FString                 StatValue                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UUI_InfirmaryStats_Item_C::MissonStatUpdate(const struct FString& StatTitle, const struct FString& StatValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.MissonStatUpdate");

	struct
	{
		struct FString                 StatTitle;
		struct FString                 StatValue;
	} params;

	params.StatTitle = StatTitle;
	params.StatValue = StatValue;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.ExecuteUbergraph_UI_InfirmaryStats_Item
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_InfirmaryStats_Item_C::ExecuteUbergraph_UI_InfirmaryStats_Item(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.ExecuteUbergraph_UI_InfirmaryStats_Item");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.OnHoverEnd__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_MissionStats_Item_C* Sender                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_InfirmaryStats_Item_C::OnHoverEnd__DelegateSignature(class UUI_MissionStats_Item_C* Sender)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.OnHoverEnd__DelegateSignature");

	struct
	{
		class UUI_MissionStats_Item_C* Sender;
	} params;

	params.Sender = Sender;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.OnHoverBegin__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_MissionStats_Item_C* Sender                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_InfirmaryStats_Item_C::OnHoverBegin__DelegateSignature(class UUI_MissionStats_Item_C* Sender)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.OnHoverBegin__DelegateSignature");

	struct
	{
		class UUI_MissionStats_Item_C* Sender;
	} params;

	params.Sender = Sender;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
