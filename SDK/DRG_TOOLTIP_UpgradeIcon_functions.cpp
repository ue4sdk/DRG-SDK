// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_TOOLTIP_UpgradeIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.UpdateDetailVisibility
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTOOLTIP_UpgradeIcon_C::UpdateDetailVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.UpdateDetailVisibility");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.Update
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UItemUpgradeCategory*    Category                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   InUpgradeName                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   InUpgradeDescription           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// EItemUpgradeStatus             InStatus                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FCraftingCost>   InCost                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UTOOLTIP_UpgradeIcon_C::Update(class UItemUpgradeCategory* Category, const struct FText& InUpgradeName, const struct FText& InUpgradeDescription, EItemUpgradeStatus InStatus, TArray<struct FCraftingCost>* InCost)
{
	static auto fn = UObject::FindObject<UFunction>("Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.Update");

	struct
	{
		class UItemUpgradeCategory*    Category;
		struct FText                   InUpgradeName;
		struct FText                   InUpgradeDescription;
		EItemUpgradeStatus             InStatus;
		TArray<struct FCraftingCost>   InCost;
	} params;

	params.Category = Category;
	params.InUpgradeName = InUpgradeName;
	params.InUpgradeDescription = InUpgradeDescription;
	params.InStatus = InStatus;

	UObject::ProcessEvent(fn, &params);

	if (InCost != nullptr)
		*InCost = params.InCost;
}


// Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTOOLTIP_UpgradeIcon_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTOOLTIP_UpgradeIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.OnShowUpgradeExtraDetailsChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           NewValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTOOLTIP_UpgradeIcon_C::OnShowUpgradeExtraDetailsChanged(bool NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.OnShowUpgradeExtraDetailsChanged");

	struct
	{
		bool                           NewValue;
	} params;

	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}


// Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.ExecuteUbergraph_TOOLTIP_UpgradeIcon
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTOOLTIP_UpgradeIcon_C::ExecuteUbergraph_TOOLTIP_UpgradeIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.ExecuteUbergraph_TOOLTIP_UpgradeIcon");

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
