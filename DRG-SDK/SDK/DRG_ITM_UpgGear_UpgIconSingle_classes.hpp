#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_UpgGear_UpgIconSingle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C
// 0x0088 (0x0290 - 0x0208)
class UITM_UpgGear_UpgIconSingle_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UITM_BaseUpgradeIcon_C*                      UpgradeIcon;                                              // 0x0210(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UItemUpgrade*                                Upgrade;                                                  // 0x0218(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	EItemUpgradeStatus                                 status;                                                   // 0x0220(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0221(0x0007) MISSED OFFSET
	class UClass*                                      itemClass;                                                // 0x0228(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class AFSDPlayerState*                             PlayerState;                                              // 0x0230(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      CharacterClass;                                           // 0x0238(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               IsItemHovered;                                            // 0x0240(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0241(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnUpgradeHovered;                                         // 0x0248(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUpgradeUnhovered;                                       // 0x0258(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUpgradeClicked;                                         // 0x0268(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	bool                                               OverrideStatus;                                           // 0x0278(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ShowEquippedAsBorder;                                     // 0x0279(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x027A(0x0006) MISSED OFFSET
	class UPlayerCharacterID*                          CharacerID;                                               // 0x0280(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTOOLTIP_UpgradeIcon_C*                      IconToolTip;                                              // 0x0288(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C");
		return ptr;
	}


	class UWidget* Get_UpgradeIcon_ToolTip();
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void ToggleStatPreview(bool Preview);
	void GetTierLock(class AFSDPlayerState* InPlayerState, const struct FUpgradeTier& InTierUpgrades, int* LockLevel, class UTexture2D** LockIcon, TEnumAsByte<ENUM_MenuColors>* LockBackgroundTint);
	void TryUnequipUpgrade(bool* success);
	void GetUpgradeCategory(class UItemUpgradeCategory** Category);
	class UTexture2D* GetUpgradeIcon();
	void GetGoogleAnalytics(class UItemUpgrade* Upgrade);
	bool IsInteractable();
	void GetTierStatus(const struct FUpgradeTier& InTier, int InTierIndex, class UClass* InCharacter, class UClass* InItem, class AFSDPlayerState* InPlayer, EItemUpgradeStatus* DefaultStatus);
	void IsTierIsAffordable(class UClass* InItemClass, class AFSDPlayerState* InPlayer, class UClass* InCharacter, struct FUpgradeTier* TierUpgrades, bool* Is_Affordable);
	void ShowTier(class UClass* InItemClass, class UClass* InCharacterClass, int InTierIndex, const struct FUpgradeTier& InTier, class AFSDPlayerState* InPlayerState, bool InShowLockRequirement);
	void GetPlayerState(class AFSDPlayerState** PlayerState);
	void GetItemClass(class UClass** itemClass);
	void GetItemUpgrade(class UItemUpgrade** Upgrade);
	void TryEquipUpgrade(bool* Equipped);
	void TryPurchaseUpgrade(bool* Purchased);
	void GetUpgradeStatus(EItemUpgradeStatus* status);
	void Show(class UItemUpgrade* InUpgrade, class UClass* InItemClass, class UPlayerCharacterID* PlayerCharacterID, class AFSDPlayerState* InPlayerState, bool ShowEquipAsBorder);
	void Refresh();
	void BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_122_OnHoverBegin__DelegateSignature(class UITM_BaseUpgradeIcon_C* Widget);
	void BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_129_OnHoverEnd__DelegateSignature(class UITM_BaseUpgradeIcon_C* Widget);
	void BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_137_OnClicked__DelegateSignature(class UITM_BaseUpgradeIcon_C* Widget);
	void Refresh_Tool_Tip();
	void ExecuteUbergraph_ITM_UpgGear_UpgIconSingle(int EntryPoint);
	void OnUpgradeClicked__DelegateSignature(class UITM_UpgGear_UpgIconSingle_C* Widget);
	void OnUpgradeUnhovered__DelegateSignature(class UITM_UpgGear_UpgIconSingle_C* Widget);
	void OnUpgradeHovered__DelegateSignature(class UITM_UpgGear_UpgIconSingle_C* Widget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
