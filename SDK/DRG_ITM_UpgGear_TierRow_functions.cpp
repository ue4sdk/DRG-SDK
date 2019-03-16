// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_UpgGear_TierRow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.HandleUpgradeClicked
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_UpgGear_UpgIconSingle_C* UpgradeWidget                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_UpgGear_TierRow_C::HandleUpgradeClicked(class UITM_UpgGear_UpgIconSingle_C* UpgradeWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.HandleUpgradeClicked");

	struct
	{
		class UITM_UpgGear_UpgIconSingle_C* UpgradeWidget;
	} params;

	params.UpgradeWidget = UpgradeWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.GetIsRowLocked
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UITM_UpgGear_TierRow_C::GetIsRowLocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.GetIsRowLocked");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_UpgGear_TierRow_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UITM_UpgGear_TierRow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Initialize Upgrade Widget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_UpgGear_UpgIconSingle_C* Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_UpgGear_TierRow_C::Initialize_Upgrade_Widget(class UITM_UpgGear_UpgIconSingle_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Initialize Upgrade Widget");

	struct
	{
		class UITM_UpgGear_UpgIconSingle_C* Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Refresh
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_UpgGear_TierRow_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Refresh");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.EquipUpgrade
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_UpgGear_UpgIconSingle_C* UpgradeWidget                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_UpgGear_TierRow_C::EquipUpgrade(class UITM_UpgGear_UpgIconSingle_C* UpgradeWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.EquipUpgrade");

	struct
	{
		class UITM_UpgGear_UpgIconSingle_C* UpgradeWidget;
	} params;

	params.UpgradeWidget = UpgradeWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.PurchaseUpgrade
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_UpgGear_UpgIconSingle_C* UpgradeWidget                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_UpgGear_TierRow_C::PurchaseUpgrade(class UITM_UpgGear_UpgIconSingle_C* UpgradeWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.PurchaseUpgrade");

	struct
	{
		class UITM_UpgGear_UpgIconSingle_C* UpgradeWidget;
	} params;

	params.UpgradeWidget = UpgradeWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.OnUpgradeClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_UpgGear_UpgIconSingle_C* Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_UpgGear_TierRow_C::OnUpgradeClicked(class UITM_UpgGear_UpgIconSingle_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.OnUpgradeClicked");

	struct
	{
		class UITM_UpgGear_UpgIconSingle_C* Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.OnPurchaseConfirmation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Yes                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_UpgGear_TierRow_C::OnPurchaseConfirmation(bool Yes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.OnPurchaseConfirmation");

	struct
	{
		bool                           Yes;
	} params;

	params.Yes = Yes;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Refresh Tier Icon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_UpgGear_TierRow_C::Refresh_Tier_Icon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Refresh Tier Icon");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Unequip Upgrade
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_UpgGear_UpgIconSingle_C* Upgrade                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_UpgGear_TierRow_C::Unequip_Upgrade(class UITM_UpgGear_UpgIconSingle_C* Upgrade)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Unequip Upgrade");

	struct
	{
		class UITM_UpgGear_UpgIconSingle_C* Upgrade;
	} params;

	params.Upgrade = Upgrade;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.OnUpgradeHoverChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_UpgGear_UpgIconSingle_C* Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_UpgGear_TierRow_C::OnUpgradeHoverChanged(class UITM_UpgGear_UpgIconSingle_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.OnUpgradeHoverChanged");

	struct
	{
		class UITM_UpgGear_UpgIconSingle_C* Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.ExecuteUbergraph_ITM_UpgGear_TierRow
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_UpgGear_TierRow_C::ExecuteUbergraph_ITM_UpgGear_TierRow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.ExecuteUbergraph_ITM_UpgGear_TierRow");

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
