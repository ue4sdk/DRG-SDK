#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BPL_UpgradeHelpers_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPL_UpgradeHelpers.BPL_UpgradeHelpers_C
// 0x0000 (0x0028 - 0x0028)
class UBPL_UpgradeHelpers_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BPL_UpgradeHelpers.BPL_UpgradeHelpers_C");
		return ptr;
	}


	static void UPGDESC_ArmorStat(class AFSDPlayerState* Player, class UClass* armorClass, class UPawnStat* Stat, const struct FText& Text, TEnumAsByte<EFormatWeaponStatType> Format, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* Changed);
	static void UPGDESC_TriggeredStat(class AFSDPlayerState* Player, class UClass* Item, class UClass* Status_Effect, const struct FText& Text, ETriggeredStatusEffectType Type, TEnumAsByte<EFormatWeaponStatType> Format, class UObject* __WorldContext, struct FGearStatEntry* gear_stat_entry, bool* is_upgraded);
	static void UPGDESC_PlatformGun(class UClass* Item, class AFSDPlayerState* Player, EPlatformGunUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* Should_show_text);
	static void UPGDESC_Bosco(class UClass* upgradedItem, class AFSDPlayerState* Player, EBoscoUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasChanged);
	static void UPGDESC_CoooldownAggregator(class UClass* Item, class AFSDPlayerState* Player, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_GrapplingHook(class UClass* Item, class AFSDPlayerState* Player, EGrapplingHookUpgrade upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_FlaregunProjectile(class UClass* Item, class AFSDPlayerState* Player, EFlaregunProjectileUpgrades upgradeType, class UClass* upgradedActor, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_ZiplineGun(class UClass* Item, class AFSDPlayerState* Player, EZiplineGunUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_Grenades(class UClass* Item, class AFSDPlayerState* Player, EGrenadeUpgradeType upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry);
	static void UPGDESC_Pickaxe(class UClass* Item, class AFSDPlayerState* Player, EManualMiningUpgradeType upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_LineCutter(class UClass* Item, class AFSDPlayerState* Player, ELineCutterUpgradeType upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_CombatShotgun(class UClass* Item, class AFSDPlayerState* Player, EAutoShotgunUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_ChargedProjectile(class UClass* Item, class AFSDPlayerState* Player, EChargedProjectileUpgrades upgradeType, class UClass* upgradedActor, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_StickyFlame(class UClass* Item, class AFSDPlayerState* Player, class UClass* StatusEffect, const struct FText& Text, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_SawedOff(class UClass* Item, class AFSDPlayerState* Player, ESawedOffShotgunUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_Armor(class AFSDPlayerState* Player, class UClass* armorClass, EArmorUpgradeType Armor_Upgrade_Type, const struct FText& Text, TEnumAsByte<EFormatWeaponStatType> Format, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry);
	static void UPGDESC_BurstWeapon(class UClass* Item, class AFSDPlayerState* Player, EBurstWeaponUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_DamageBonus_AoEFear(class UClass* Item, class AFSDPlayerState* Player, const struct FText& StatName, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_DamageBonus_HotBullets(class UClass* Item, class AFSDPlayerState* Player, class UDamageClass* DamageClass, const struct FText& StatName, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_BeltDriven(class UClass* Item, class AFSDPlayerState* Player, EBeltDrivenWeaponUpgrade upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_AutoCannon(class UClass* Item, class AFSDPlayerState* Player, EAutoCannonUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void FormatValues(TEnumAsByte<EFormatWeaponStatType> Format, class UObject* __WorldContext, struct FUpgradeValues* UpgradeValues, struct FText* BaseText, struct FText* UpgradeText, struct FText* Value);
	static void UPGDESC_AssaultRifle(class UClass* Item, class AFSDPlayerState* Player, EAssaultRifleUpgrade upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_GatlingGun(class UClass* Item, class AFSDPlayerState* Player, EGatlingGunUpgrade upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_ShieldRegenerator(class UClass* Item, class AFSDPlayerState* Player, EArmorRegeneratorUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void FormatCmtoM(float Base_Value, float Upgrade_Value, float Old_Upgrade_Value, float Final_Value, class UObject* __WorldContext, struct FText* Base_Text, struct FText* Upgrade_Text, struct FText* Value);
	static void FormatPercentage(float Base_Value, float Upgraded_Value, float Old_Upgraded_Value, float Final_Value, TEnumAsByte<EFormatWeaponStatType> Format, class UObject* __WorldContext, struct FText* Base_Text, struct FText* Upgrade_Text, struct FText* Value);
	static void UPGDESC_Cryospray(class UClass* Item, class AFSDPlayerState* Player, ECryoSprayUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_FlameThrower(class UClass* Item, class AFSDPlayerState* Player, EFlameThrowerUpgradeType upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_ChargedWeapon(class UClass* Item, class AFSDPlayerState* Player, EChargedWeaponUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_Projectile(class UClass* Item, class UClass* upgradedItem, class AFSDPlayerState* Player, EProjectileUpgrade upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_BoltAction(class UClass* Item, class AFSDPlayerState* Player, EBoltActionRifleUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_DamageBonus_TargetStateBonus(class UClass* Item, class AFSDPlayerState* Player, const struct FText& StatName, ETargetStateDamageBonusType TargetState, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_DamageBonus_TargetTypeBonus(class UClass* Item, class AFSDPlayerState* Player, const struct FText& StatName, const struct FName& Key, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_DamageBonus_StatusBonus(class UClass* Item, class AFSDPlayerState* Player, class UClass* SstatusEffectIn, const struct FText& StatName, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_ElectricalSMG(class UClass* Item, class AFSDPlayerState* Player, EElectricalSMGUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_DamageBonus_Flat(class UClass* Item, class AFSDPlayerState* Player, class UDamageClass* DamageClass, const struct FText& StatName, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_DamageBonus_DamageConversion(class UClass* Item, class UClass* upgradedItem, class AFSDPlayerState* Player, class UDamageClass* DamageClass, const struct FText& StatName, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_DamageBonus_PushStatus(class UClass* Item, class AFSDPlayerState* Player, class UClass* StatusEffect, const struct FText& StatName, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_AmmoDriven(class UClass* Item, class AFSDPlayerState* Player, EAmmoDrivenWeapnUpgradeType upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasAnyUpgrades);
	static void FormatValue(float BaseValue, float UpgradeValue, float OldUpgradeValue, EItemPreviewStatus PreviewStatus, float FinalValue, TEnumAsByte<EFormatWeaponStatType> Format, class UObject* __WorldContext, struct FText* BaseText, struct FText* UpgradeText, struct FText* Value);
	static void UPGDESC_Damage(class UClass* upgradedItem, EDamageUpgrade upgradeType, const struct FText& Prefix, class UObject* __WorldContext, class UClass** Item, class AFSDPlayerState** Player, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue);
	static void UPGDESC_HitScan(class UClass* Item, class AFSDPlayerState* Player, EHitScanBaseUpgradeType upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasAnyUpgrades);
	static void UPGDESC_SingleUsable_UseDuration(class UClass* Item, class UClass* subItem, class AFSDPlayerState* Player, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry);
	static void UPGDESC_SentryGun_Capacity(class UClass* Item, class AFSDPlayerState* Player, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry);
	static void UPGDESC_Item(class AFSDPlayerState* Player, class UClass* Item, EInventoryItemUpgradeType upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry);
	static void UPGDESC_Flare_Base(class UClass* flareClass, class AFSDPlayerState* Player, EFlareUpgradeType upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry);
	static void UPGDESC_Drills(class UClass* Item, class AFSDPlayerState* Player, EAutoMinerUpgradeType upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* Has_Upgraded_Value);
	static void UPGDESC_Capacity(class UClass* upgradedItem, class AFSDPlayerState* Player, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry);
	static void UPGDESC_Explosion_Damage(class UClass* upgradedItem, class UClass* componentItem, class AFSDPlayerState* Player, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry);
	static void UPGDESC_Explosion_Radius(class UClass* upgradedItem, class UClass* componentItem, class AFSDPlayerState* Player, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry);
	static void UPGDESC_HitScan_Bullets(class UClass* Item, class AFSDPlayerState* Player, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry);
	static void UPGDESC_AmmoDriven_Reload(class UClass* Item, class AFSDPlayerState* Player, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry);
	static void UPGDESC_AmmoDriven_Base(class UClass* Item, class AFSDPlayerState* Player, EAmmoDrivenWeapnUpgradeType upgradeType, const struct FText& Description, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry);
	static void UPGDESC_AmmoDriven_RateOfFire(class UClass* Item, class AFSDPlayerState* Player, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry);
	static void UPGDESC_AmmoDriven_ClipSize(class UClass* Item, class AFSDPlayerState* Player, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry);
	static void UPGDESC_AmmoDriven_MaxAmmo(class UClass* Item, class AFSDPlayerState* Player, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
