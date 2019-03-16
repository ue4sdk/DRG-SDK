// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_UpgGear_UpgIconSingle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.Get_UpgradeIcon_ToolTip
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UWidget* UITM_UpgGear_UpgIconSingle_C::Get_UpgradeIcon_ToolTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.Get_UpgradeIcon_ToolTip");

	struct
	{
		class UWidget*                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UITM_UpgGear_UpgIconSingle_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnKeyDown");

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


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.ToggleStatPreview
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Preview                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::ToggleStatPreview(bool Preview)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.ToggleStatPreview");

	struct
	{
		bool                           Preview;
	} params;

	params.Preview = Preview;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetTierLock
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AFSDPlayerState*         InPlayerState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FUpgradeTier            InTierUpgrades                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            LockLevel                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UTexture2D*              LockIcon                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<ENUM_MenuColors>   LockBackgroundTint             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::GetTierLock(class AFSDPlayerState* InPlayerState, const struct FUpgradeTier& InTierUpgrades, int* LockLevel, class UTexture2D** LockIcon, TEnumAsByte<ENUM_MenuColors>* LockBackgroundTint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetTierLock");

	struct
	{
		class AFSDPlayerState*         InPlayerState;
		struct FUpgradeTier            InTierUpgrades;
		int                            LockLevel;
		class UTexture2D*              LockIcon;
		TEnumAsByte<ENUM_MenuColors>   LockBackgroundTint;
	} params;

	params.InPlayerState = InPlayerState;
	params.InTierUpgrades = InTierUpgrades;

	UObject::ProcessEvent(fn, &params);

	if (LockLevel != nullptr)
		*LockLevel = params.LockLevel;
	if (LockIcon != nullptr)
		*LockIcon = params.LockIcon;
	if (LockBackgroundTint != nullptr)
		*LockBackgroundTint = params.LockBackgroundTint;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.TryUnequipUpgrade
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::TryUnequipUpgrade(bool* success)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.TryUnequipUpgrade");

	struct
	{
		bool                           success;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (success != nullptr)
		*success = params.success;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetUpgradeCategory
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UItemUpgradeCategory*    Category                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::GetUpgradeCategory(class UItemUpgradeCategory** Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetUpgradeCategory");

	struct
	{
		class UItemUpgradeCategory*    Category;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Category != nullptr)
		*Category = params.Category;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetUpgradeIcon
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UTexture2D*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UTexture2D* UITM_UpgGear_UpgIconSingle_C::GetUpgradeIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetUpgradeIcon");

	struct
	{
		class UTexture2D*              ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetGoogleAnalytics
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UItemUpgrade*            Upgrade                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::GetGoogleAnalytics(class UItemUpgrade* Upgrade)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetGoogleAnalytics");

	struct
	{
		class UItemUpgrade*            Upgrade;
	} params;

	params.Upgrade = Upgrade;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.IsInteractable
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UITM_UpgGear_UpgIconSingle_C::IsInteractable()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.IsInteractable");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetTierStatus
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FUpgradeTier            InTier                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            InTierIndex                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  InCharacter                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  InItem                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         InPlayer                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EItemUpgradeStatus             DefaultStatus                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::GetTierStatus(const struct FUpgradeTier& InTier, int InTierIndex, class UClass* InCharacter, class UClass* InItem, class AFSDPlayerState* InPlayer, EItemUpgradeStatus* DefaultStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetTierStatus");

	struct
	{
		struct FUpgradeTier            InTier;
		int                            InTierIndex;
		class UClass*                  InCharacter;
		class UClass*                  InItem;
		class AFSDPlayerState*         InPlayer;
		EItemUpgradeStatus             DefaultStatus;
	} params;

	params.InTier = InTier;
	params.InTierIndex = InTierIndex;
	params.InCharacter = InCharacter;
	params.InItem = InItem;
	params.InPlayer = InPlayer;

	UObject::ProcessEvent(fn, &params);

	if (DefaultStatus != nullptr)
		*DefaultStatus = params.DefaultStatus;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.IsTierIsAffordable
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FUpgradeTier            TierUpgrades                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UClass*                  InItemClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         InPlayer                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  InCharacter                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Is_Affordable                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::IsTierIsAffordable(class UClass* InItemClass, class AFSDPlayerState* InPlayer, class UClass* InCharacter, struct FUpgradeTier* TierUpgrades, bool* Is_Affordable)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.IsTierIsAffordable");

	struct
	{
		struct FUpgradeTier            TierUpgrades;
		class UClass*                  InItemClass;
		class AFSDPlayerState*         InPlayer;
		class UClass*                  InCharacter;
		bool                           Is_Affordable;
	} params;

	params.InItemClass = InItemClass;
	params.InPlayer = InPlayer;
	params.InCharacter = InCharacter;

	UObject::ProcessEvent(fn, &params);

	if (TierUpgrades != nullptr)
		*TierUpgrades = params.TierUpgrades;
	if (Is_Affordable != nullptr)
		*Is_Affordable = params.Is_Affordable;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.ShowTier
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  InItemClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  InCharacterClass               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            InTierIndex                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FUpgradeTier            InTier                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class AFSDPlayerState*         InPlayerState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           InShowLockRequirement          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::ShowTier(class UClass* InItemClass, class UClass* InCharacterClass, int InTierIndex, const struct FUpgradeTier& InTier, class AFSDPlayerState* InPlayerState, bool InShowLockRequirement)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.ShowTier");

	struct
	{
		class UClass*                  InItemClass;
		class UClass*                  InCharacterClass;
		int                            InTierIndex;
		struct FUpgradeTier            InTier;
		class AFSDPlayerState*         InPlayerState;
		bool                           InShowLockRequirement;
	} params;

	params.InItemClass = InItemClass;
	params.InCharacterClass = InCharacterClass;
	params.InTierIndex = InTierIndex;
	params.InTier = InTier;
	params.InPlayerState = InPlayerState;
	params.InShowLockRequirement = InShowLockRequirement;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetPlayerState
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AFSDPlayerState*         PlayerState                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::GetPlayerState(class AFSDPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetPlayerState");

	struct
	{
		class AFSDPlayerState*         PlayerState;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (PlayerState != nullptr)
		*PlayerState = params.PlayerState;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetItemClass
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UClass*                  itemClass                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::GetItemClass(class UClass** itemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetItemClass");

	struct
	{
		class UClass*                  itemClass;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (itemClass != nullptr)
		*itemClass = params.itemClass;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetItemUpgrade
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UItemUpgrade*            Upgrade                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::GetItemUpgrade(class UItemUpgrade** Upgrade)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetItemUpgrade");

	struct
	{
		class UItemUpgrade*            Upgrade;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Upgrade != nullptr)
		*Upgrade = params.Upgrade;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.TryEquipUpgrade
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Equipped                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::TryEquipUpgrade(bool* Equipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.TryEquipUpgrade");

	struct
	{
		bool                           Equipped;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Equipped != nullptr)
		*Equipped = params.Equipped;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.TryPurchaseUpgrade
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Purchased                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::TryPurchaseUpgrade(bool* Purchased)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.TryPurchaseUpgrade");

	struct
	{
		bool                           Purchased;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Purchased != nullptr)
		*Purchased = params.Purchased;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetUpgradeStatus
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EItemUpgradeStatus             status                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::GetUpgradeStatus(EItemUpgradeStatus* status)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetUpgradeStatus");

	struct
	{
		EItemUpgradeStatus             status;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (status != nullptr)
		*status = params.status;
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.Show
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UItemUpgrade*            InUpgrade                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  InItemClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPlayerCharacterID*      PlayerCharacterID              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         InPlayerState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ShowEquipAsBorder              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::Show(class UItemUpgrade* InUpgrade, class UClass* InItemClass, class UPlayerCharacterID* PlayerCharacterID, class AFSDPlayerState* InPlayerState, bool ShowEquipAsBorder)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.Show");

	struct
	{
		class UItemUpgrade*            InUpgrade;
		class UClass*                  InItemClass;
		class UPlayerCharacterID*      PlayerCharacterID;
		class AFSDPlayerState*         InPlayerState;
		bool                           ShowEquipAsBorder;
	} params;

	params.InUpgrade = InUpgrade;
	params.InItemClass = InItemClass;
	params.PlayerCharacterID = PlayerCharacterID;
	params.InPlayerState = InPlayerState;
	params.ShowEquipAsBorder = ShowEquipAsBorder;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.Refresh
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_UpgGear_UpgIconSingle_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.Refresh");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_122_OnHoverBegin__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UITM_BaseUpgradeIcon_C*  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_122_OnHoverBegin__DelegateSignature(class UITM_BaseUpgradeIcon_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_122_OnHoverBegin__DelegateSignature");

	struct
	{
		class UITM_BaseUpgradeIcon_C*  Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_129_OnHoverEnd__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UITM_BaseUpgradeIcon_C*  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_129_OnHoverEnd__DelegateSignature(class UITM_BaseUpgradeIcon_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_129_OnHoverEnd__DelegateSignature");

	struct
	{
		class UITM_BaseUpgradeIcon_C*  Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_137_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UITM_BaseUpgradeIcon_C*  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_137_OnClicked__DelegateSignature(class UITM_BaseUpgradeIcon_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_137_OnClicked__DelegateSignature");

	struct
	{
		class UITM_BaseUpgradeIcon_C*  Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.Refresh Tool Tip
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_UpgGear_UpgIconSingle_C::Refresh_Tool_Tip()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.Refresh Tool Tip");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.ExecuteUbergraph_ITM_UpgGear_UpgIconSingle
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::ExecuteUbergraph_ITM_UpgGear_UpgIconSingle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.ExecuteUbergraph_ITM_UpgGear_UpgIconSingle");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnUpgradeClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_UpgGear_UpgIconSingle_C* Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::OnUpgradeClicked__DelegateSignature(class UITM_UpgGear_UpgIconSingle_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnUpgradeClicked__DelegateSignature");

	struct
	{
		class UITM_UpgGear_UpgIconSingle_C* Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnUpgradeUnhovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_UpgGear_UpgIconSingle_C* Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::OnUpgradeUnhovered__DelegateSignature(class UITM_UpgGear_UpgIconSingle_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnUpgradeUnhovered__DelegateSignature");

	struct
	{
		class UITM_UpgGear_UpgIconSingle_C* Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnUpgradeHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_UpgGear_UpgIconSingle_C* Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_UpgGear_UpgIconSingle_C::OnUpgradeHovered__DelegateSignature(class UITM_UpgGear_UpgIconSingle_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnUpgradeHovered__DelegateSignature");

	struct
	{
		class UITM_UpgGear_UpgIconSingle_C* Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
