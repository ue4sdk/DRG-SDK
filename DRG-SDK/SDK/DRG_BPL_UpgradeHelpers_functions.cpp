// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BPL_UpgradeHelpers_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ArmorStat
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  armorClass                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPawnStat*               Stat                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TEnumAsByte<EFormatWeaponStatType> Format                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)
// bool                           Changed                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBPL_UpgradeHelpers_C::UPGDESC_ArmorStat(class AFSDPlayerState* Player, class UClass* armorClass, class UPawnStat* Stat, const struct FText& Text, TEnumAsByte<EFormatWeaponStatType> Format, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* Changed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ArmorStat");

	struct
	{
		class AFSDPlayerState*         Player;
		class UClass*                  armorClass;
		class UPawnStat*               Stat;
		struct FText                   Text;
		TEnumAsByte<EFormatWeaponStatType> Format;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
		bool                           Changed;
	} params;

	params.Player = Player;
	params.armorClass = armorClass;
	params.Stat = Stat;
	params.Text = Text;
	params.Format = Format;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (Changed != nullptr)
		*Changed = params.Changed;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_TriggeredStat
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  Status_Effect                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// ETriggeredStatusEffectType     Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EFormatWeaponStatType> Format                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          gear_stat_entry                (CPF_Parm, CPF_OutParm)
// bool                           is_upgraded                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBPL_UpgradeHelpers_C::UPGDESC_TriggeredStat(class AFSDPlayerState* Player, class UClass* Item, class UClass* Status_Effect, const struct FText& Text, ETriggeredStatusEffectType Type, TEnumAsByte<EFormatWeaponStatType> Format, class UObject* __WorldContext, struct FGearStatEntry* gear_stat_entry, bool* is_upgraded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_TriggeredStat");

	struct
	{
		class AFSDPlayerState*         Player;
		class UClass*                  Item;
		class UClass*                  Status_Effect;
		struct FText                   Text;
		ETriggeredStatusEffectType     Type;
		TEnumAsByte<EFormatWeaponStatType> Format;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          gear_stat_entry;
		bool                           is_upgraded;
	} params;

	params.Player = Player;
	params.Item = Item;
	params.Status_Effect = Status_Effect;
	params.Text = Text;
	params.Type = Type;
	params.Format = Format;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (gear_stat_entry != nullptr)
		*gear_stat_entry = params.gear_stat_entry;
	if (is_upgraded != nullptr)
		*is_upgraded = params.is_upgraded;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_PlatformGun
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EPlatformGunUpgrades           upgradeType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)
// bool                           Should_show_text               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBPL_UpgradeHelpers_C::UPGDESC_PlatformGun(class UClass* Item, class AFSDPlayerState* Player, EPlatformGunUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* Should_show_text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_PlatformGun");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		EPlatformGunUpgrades           upgradeType;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
		bool                           Should_show_text;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (Should_show_text != nullptr)
		*Should_show_text = params.Should_show_text;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Bosco
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  upgradedItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EBoscoUpgrades                 upgradeType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)
// bool                           HasChanged                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBPL_UpgradeHelpers_C::UPGDESC_Bosco(class UClass* upgradedItem, class AFSDPlayerState* Player, EBoscoUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Bosco");

	struct
	{
		class UClass*                  upgradedItem;
		class AFSDPlayerState*         Player;
		EBoscoUpgrades                 upgradeType;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
		bool                           HasChanged;
	} params;

	params.upgradedItem = upgradedItem;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasChanged != nullptr)
		*HasChanged = params.HasChanged;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_CoooldownAggregator
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)
// bool                           HasUpgradedValue               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBPL_UpgradeHelpers_C::UPGDESC_CoooldownAggregator(class UClass* Item, class AFSDPlayerState* Player, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_CoooldownAggregator");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
		bool                           HasUpgradedValue;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_GrapplingHook
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EGrapplingHookUpgrade          upgradeType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)
// bool                           HasUpgradedValue               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBPL_UpgradeHelpers_C::UPGDESC_GrapplingHook(class UClass* Item, class AFSDPlayerState* Player, EGrapplingHookUpgrade upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_GrapplingHook");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		EGrapplingHookUpgrade          upgradeType;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
		bool                           HasUpgradedValue;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_FlaregunProjectile
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EFlaregunProjectileUpgrades    upgradeType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  upgradedActor                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)
// bool                           HasUpgradedValue               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBPL_UpgradeHelpers_C::UPGDESC_FlaregunProjectile(class UClass* Item, class AFSDPlayerState* Player, EFlaregunProjectileUpgrades upgradeType, class UClass* upgradedActor, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_FlaregunProjectile");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		EFlaregunProjectileUpgrades    upgradeType;
		class UClass*                  upgradedActor;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
		bool                           HasUpgradedValue;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.upgradedActor = upgradedActor;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ZiplineGun
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EZiplineGunUpgrades            upgradeType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)
// bool                           HasUpgradedValue               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBPL_UpgradeHelpers_C::UPGDESC_ZiplineGun(class UClass* Item, class AFSDPlayerState* Player, EZiplineGunUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ZiplineGun");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		EZiplineGunUpgrades            upgradeType;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
		bool                           HasUpgradedValue;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Grenades
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EGrenadeUpgradeType            upgradeType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)

void UBPL_UpgradeHelpers_C::UPGDESC_Grenades(class UClass* Item, class AFSDPlayerState* Player, EGrenadeUpgradeType upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Grenades");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		EGrenadeUpgradeType            upgradeType;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Pickaxe
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EManualMiningUpgradeType       upgradeType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)
// bool                           HasUpgradedValue               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBPL_UpgradeHelpers_C::UPGDESC_Pickaxe(class UClass* Item, class AFSDPlayerState* Player, EManualMiningUpgradeType upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Pickaxe");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		EManualMiningUpgradeType       upgradeType;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
		bool                           HasUpgradedValue;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_LineCutter
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// ELineCutterUpgradeType         upgradeType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)
// bool                           HasUpgradedValue               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBPL_UpgradeHelpers_C::UPGDESC_LineCutter(class UClass* Item, class AFSDPlayerState* Player, ELineCutterUpgradeType upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_LineCutter");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		ELineCutterUpgradeType         upgradeType;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
		bool                           HasUpgradedValue;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_CombatShotgun
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EAutoShotgunUpgrades           upgradeType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)
// bool                           HasUpgradedValue               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBPL_UpgradeHelpers_C::UPGDESC_CombatShotgun(class UClass* Item, class AFSDPlayerState* Player, EAutoShotgunUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_CombatShotgun");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		EAutoShotgunUpgrades           upgradeType;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
		bool                           HasUpgradedValue;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ChargedProjectile
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EChargedProjectileUpgrades     upgradeType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  upgradedActor                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)
// bool                           HasUpgradedValue               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBPL_UpgradeHelpers_C::UPGDESC_ChargedProjectile(class UClass* Item, class AFSDPlayerState* Player, EChargedProjectileUpgrades upgradeType, class UClass* upgradedActor, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ChargedProjectile");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		EChargedProjectileUpgrades     upgradeType;
		class UClass*                  upgradedActor;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
		bool                           HasUpgradedValue;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.upgradedActor = upgradedActor;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_StickyFlame
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  StatusEffect                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)
// bool                           HasUpgradedValue               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBPL_UpgradeHelpers_C::UPGDESC_StickyFlame(class UClass* Item, class AFSDPlayerState* Player, class UClass* StatusEffect, const struct FText& Text, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_StickyFlame");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		class UClass*                  StatusEffect;
		struct FText                   Text;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
		bool                           HasUpgradedValue;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.StatusEffect = StatusEffect;
	params.Text = Text;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_SawedOff
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// ESawedOffShotgunUpgrades       upgradeType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)
// bool                           HasUpgradedValue               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBPL_UpgradeHelpers_C::UPGDESC_SawedOff(class UClass* Item, class AFSDPlayerState* Player, ESawedOffShotgunUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_SawedOff");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		ESawedOffShotgunUpgrades       upgradeType;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
		bool                           HasUpgradedValue;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Armor
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  armorClass                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EArmorUpgradeType              Armor_Upgrade_Type             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TEnumAsByte<EFormatWeaponStatType> Format                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)

void UBPL_UpgradeHelpers_C::UPGDESC_Armor(class AFSDPlayerState* Player, class UClass* armorClass, EArmorUpgradeType Armor_Upgrade_Type, const struct FText& Text, TEnumAsByte<EFormatWeaponStatType> Format, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Armor");

	struct
	{
		class AFSDPlayerState*         Player;
		class UClass*                  armorClass;
		EArmorUpgradeType              Armor_Upgrade_Type;
		struct FText                   Text;
		TEnumAsByte<EFormatWeaponStatType> Format;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
	} params;

	params.Player = Player;
	params.armorClass = armorClass;
	params.Armor_Upgrade_Type = Armor_Upgrade_Type;
	params.Text = Text;
	params.Format = Format;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_BurstWeapon
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EBurstWeaponUpgrades           upgradeType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)
// bool                           HasUpgradedValue               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBPL_UpgradeHelpers_C::UPGDESC_BurstWeapon(class UClass* Item, class AFSDPlayerState* Player, EBurstWeaponUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_BurstWeapon");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		EBurstWeaponUpgrades           upgradeType;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
		bool                           HasUpgradedValue;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_AoEFear
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   StatName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)
// bool                           HasUpgradedValue               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBPL_UpgradeHelpers_C::UPGDESC_DamageBonus_AoEFear(class UClass* Item, class AFSDPlayerState* Player, const struct FText& StatName, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_AoEFear");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		struct FText                   StatName;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
		bool                           HasUpgradedValue;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.StatName = StatName;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_HotBullets
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UDamageClass*            DamageClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   StatName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)
// bool                           HasUpgradedValue               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBPL_UpgradeHelpers_C::UPGDESC_DamageBonus_HotBullets(class UClass* Item, class AFSDPlayerState* Player, class UDamageClass* DamageClass, const struct FText& StatName, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_HotBullets");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		class UDamageClass*            DamageClass;
		struct FText                   StatName;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
		bool                           HasUpgradedValue;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.DamageClass = DamageClass;
	params.StatName = StatName;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_BeltDriven
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EBeltDrivenWeaponUpgrade       upgradeType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)
// bool                           HasUpgradedValue               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBPL_UpgradeHelpers_C::UPGDESC_BeltDriven(class UClass* Item, class AFSDPlayerState* Player, EBeltDrivenWeaponUpgrade upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_BeltDriven");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		EBeltDrivenWeaponUpgrade       upgradeType;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
		bool                           HasUpgradedValue;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_AutoCannon
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EAutoCannonUpgrades            upgradeType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)
// bool                           HasUpgradedValue               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBPL_UpgradeHelpers_C::UPGDESC_AutoCannon(class UClass* Item, class AFSDPlayerState* Player, EAutoCannonUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_AutoCannon");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		EAutoCannonUpgrades            upgradeType;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
		bool                           HasUpgradedValue;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatValues
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FUpgradeValues          UpgradeValues                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<EFormatWeaponStatType> Format                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   BaseText                       (CPF_Parm, CPF_OutParm)
// struct FText                   UpgradeText                    (CPF_Parm, CPF_OutParm)
// struct FText                   Value                          (CPF_Parm, CPF_OutParm)

void UBPL_UpgradeHelpers_C::FormatValues(TEnumAsByte<EFormatWeaponStatType> Format, class UObject* __WorldContext, struct FUpgradeValues* UpgradeValues, struct FText* BaseText, struct FText* UpgradeText, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatValues");

	struct
	{
		struct FUpgradeValues          UpgradeValues;
		TEnumAsByte<EFormatWeaponStatType> Format;
		class UObject*                 __WorldContext;
		struct FText                   BaseText;
		struct FText                   UpgradeText;
		struct FText                   Value;
	} params;

	params.Format = Format;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (UpgradeValues != nullptr)
		*UpgradeValues = params.UpgradeValues;
	if (BaseText != nullptr)
		*BaseText = params.BaseText;
	if (UpgradeText != nullptr)
		*UpgradeText = params.UpgradeText;
	if (Value != nullptr)
		*Value = params.Value;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_AssaultRifle
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EAssaultRifleUpgrade           upgradeType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)
// bool                           HasUpgradedValue               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBPL_UpgradeHelpers_C::UPGDESC_AssaultRifle(class UClass* Item, class AFSDPlayerState* Player, EAssaultRifleUpgrade upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_AssaultRifle");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		EAssaultRifleUpgrade           upgradeType;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
		bool                           HasUpgradedValue;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_GatlingGun
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EGatlingGunUpgrade             upgradeType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)
// bool                           HasUpgradedValue               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBPL_UpgradeHelpers_C::UPGDESC_GatlingGun(class UClass* Item, class AFSDPlayerState* Player, EGatlingGunUpgrade upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_GatlingGun");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		EGatlingGunUpgrade             upgradeType;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
		bool                           HasUpgradedValue;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ShieldRegenerator
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EArmorRegeneratorUpgrades      upgradeType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)
// bool                           HasUpgradedValue               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBPL_UpgradeHelpers_C::UPGDESC_ShieldRegenerator(class UClass* Item, class AFSDPlayerState* Player, EArmorRegeneratorUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ShieldRegenerator");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		EArmorRegeneratorUpgrades      upgradeType;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
		bool                           HasUpgradedValue;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatCmtoM
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Base_Value                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Upgrade_Value                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Old_Upgrade_Value              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Final_Value                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Base_Text                      (CPF_Parm, CPF_OutParm)
// struct FText                   Upgrade_Text                   (CPF_Parm, CPF_OutParm)
// struct FText                   Value                          (CPF_Parm, CPF_OutParm)

void UBPL_UpgradeHelpers_C::FormatCmtoM(float Base_Value, float Upgrade_Value, float Old_Upgrade_Value, float Final_Value, class UObject* __WorldContext, struct FText* Base_Text, struct FText* Upgrade_Text, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatCmtoM");

	struct
	{
		float                          Base_Value;
		float                          Upgrade_Value;
		float                          Old_Upgrade_Value;
		float                          Final_Value;
		class UObject*                 __WorldContext;
		struct FText                   Base_Text;
		struct FText                   Upgrade_Text;
		struct FText                   Value;
	} params;

	params.Base_Value = Base_Value;
	params.Upgrade_Value = Upgrade_Value;
	params.Old_Upgrade_Value = Old_Upgrade_Value;
	params.Final_Value = Final_Value;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Base_Text != nullptr)
		*Base_Text = params.Base_Text;
	if (Upgrade_Text != nullptr)
		*Upgrade_Text = params.Upgrade_Text;
	if (Value != nullptr)
		*Value = params.Value;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatPercentage
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Base_Value                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Upgraded_Value                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Old_Upgraded_Value             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Final_Value                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EFormatWeaponStatType> Format                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Base_Text                      (CPF_Parm, CPF_OutParm)
// struct FText                   Upgrade_Text                   (CPF_Parm, CPF_OutParm)
// struct FText                   Value                          (CPF_Parm, CPF_OutParm)

void UBPL_UpgradeHelpers_C::FormatPercentage(float Base_Value, float Upgraded_Value, float Old_Upgraded_Value, float Final_Value, TEnumAsByte<EFormatWeaponStatType> Format, class UObject* __WorldContext, struct FText* Base_Text, struct FText* Upgrade_Text, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatPercentage");

	struct
	{
		float                          Base_Value;
		float                          Upgraded_Value;
		float                          Old_Upgraded_Value;
		float                          Final_Value;
		TEnumAsByte<EFormatWeaponStatType> Format;
		class UObject*                 __WorldContext;
		struct FText                   Base_Text;
		struct FText                   Upgrade_Text;
		struct FText                   Value;
	} params;

	params.Base_Value = Base_Value;
	params.Upgraded_Value = Upgraded_Value;
	params.Old_Upgraded_Value = Old_Upgraded_Value;
	params.Final_Value = Final_Value;
	params.Format = Format;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Base_Text != nullptr)
		*Base_Text = params.Base_Text;
	if (Upgrade_Text != nullptr)
		*Upgrade_Text = params.Upgrade_Text;
	if (Value != nullptr)
		*Value = params.Value;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Cryospray
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// ECryoSprayUpgrades             upgradeType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)
// bool                           HasUpgradedValue               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBPL_UpgradeHelpers_C::UPGDESC_Cryospray(class UClass* Item, class AFSDPlayerState* Player, ECryoSprayUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Cryospray");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		ECryoSprayUpgrades             upgradeType;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
		bool                           HasUpgradedValue;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_FlameThrower
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EFlameThrowerUpgradeType       upgradeType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)
// bool                           HasUpgradedValue               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBPL_UpgradeHelpers_C::UPGDESC_FlameThrower(class UClass* Item, class AFSDPlayerState* Player, EFlameThrowerUpgradeType upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_FlameThrower");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		EFlameThrowerUpgradeType       upgradeType;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
		bool                           HasUpgradedValue;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ChargedWeapon
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EChargedWeaponUpgrades         upgradeType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)
// bool                           HasUpgradedValue               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBPL_UpgradeHelpers_C::UPGDESC_ChargedWeapon(class UClass* Item, class AFSDPlayerState* Player, EChargedWeaponUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ChargedWeapon");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		EChargedWeaponUpgrades         upgradeType;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
		bool                           HasUpgradedValue;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Projectile
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  upgradedItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EProjectileUpgrade             upgradeType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)
// bool                           HasUpgradedValue               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBPL_UpgradeHelpers_C::UPGDESC_Projectile(class UClass* Item, class UClass* upgradedItem, class AFSDPlayerState* Player, EProjectileUpgrade upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Projectile");

	struct
	{
		class UClass*                  Item;
		class UClass*                  upgradedItem;
		class AFSDPlayerState*         Player;
		EProjectileUpgrade             upgradeType;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
		bool                           HasUpgradedValue;
	} params;

	params.Item = Item;
	params.upgradedItem = upgradedItem;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_BoltAction
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EBoltActionRifleUpgrades       upgradeType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)
// bool                           HasUpgradedValue               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBPL_UpgradeHelpers_C::UPGDESC_BoltAction(class UClass* Item, class AFSDPlayerState* Player, EBoltActionRifleUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_BoltAction");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		EBoltActionRifleUpgrades       upgradeType;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
		bool                           HasUpgradedValue;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_TargetStateBonus
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   StatName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// ETargetStateDamageBonusType    TargetState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)
// bool                           HasUpgradedValue               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBPL_UpgradeHelpers_C::UPGDESC_DamageBonus_TargetStateBonus(class UClass* Item, class AFSDPlayerState* Player, const struct FText& StatName, ETargetStateDamageBonusType TargetState, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_TargetStateBonus");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		struct FText                   StatName;
		ETargetStateDamageBonusType    TargetState;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
		bool                           HasUpgradedValue;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.StatName = StatName;
	params.TargetState = TargetState;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_TargetTypeBonus
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   StatName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FName                   Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)
// bool                           HasUpgradedValue               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBPL_UpgradeHelpers_C::UPGDESC_DamageBonus_TargetTypeBonus(class UClass* Item, class AFSDPlayerState* Player, const struct FText& StatName, const struct FName& Key, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_TargetTypeBonus");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		struct FText                   StatName;
		struct FName                   Key;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
		bool                           HasUpgradedValue;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.StatName = StatName;
	params.Key = Key;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_StatusBonus
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  SstatusEffectIn                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   StatName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)
// bool                           HasUpgradedValue               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBPL_UpgradeHelpers_C::UPGDESC_DamageBonus_StatusBonus(class UClass* Item, class AFSDPlayerState* Player, class UClass* SstatusEffectIn, const struct FText& StatName, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_StatusBonus");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		class UClass*                  SstatusEffectIn;
		struct FText                   StatName;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
		bool                           HasUpgradedValue;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.SstatusEffectIn = SstatusEffectIn;
	params.StatName = StatName;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ElectricalSMG
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EElectricalSMGUpgrades         upgradeType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)
// bool                           HasUpgradedValue               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBPL_UpgradeHelpers_C::UPGDESC_ElectricalSMG(class UClass* Item, class AFSDPlayerState* Player, EElectricalSMGUpgrades upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_ElectricalSMG");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		EElectricalSMGUpgrades         upgradeType;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
		bool                           HasUpgradedValue;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_Flat
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UDamageClass*            DamageClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   StatName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)
// bool                           HasUpgradedValue               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBPL_UpgradeHelpers_C::UPGDESC_DamageBonus_Flat(class UClass* Item, class AFSDPlayerState* Player, class UDamageClass* DamageClass, const struct FText& StatName, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_Flat");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		class UDamageClass*            DamageClass;
		struct FText                   StatName;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
		bool                           HasUpgradedValue;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.DamageClass = DamageClass;
	params.StatName = StatName;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_DamageConversion
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  upgradedItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UDamageClass*            DamageClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   StatName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)
// bool                           HasUpgradedValue               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBPL_UpgradeHelpers_C::UPGDESC_DamageBonus_DamageConversion(class UClass* Item, class UClass* upgradedItem, class AFSDPlayerState* Player, class UDamageClass* DamageClass, const struct FText& StatName, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_DamageConversion");

	struct
	{
		class UClass*                  Item;
		class UClass*                  upgradedItem;
		class AFSDPlayerState*         Player;
		class UDamageClass*            DamageClass;
		struct FText                   StatName;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
		bool                           HasUpgradedValue;
	} params;

	params.Item = Item;
	params.upgradedItem = upgradedItem;
	params.Player = Player;
	params.DamageClass = DamageClass;
	params.StatName = StatName;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_PushStatus
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  StatusEffect                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   StatName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)
// bool                           HasUpgradedValue               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBPL_UpgradeHelpers_C::UPGDESC_DamageBonus_PushStatus(class UClass* Item, class AFSDPlayerState* Player, class UClass* StatusEffect, const struct FText& StatName, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_DamageBonus_PushStatus");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		class UClass*                  StatusEffect;
		struct FText                   StatName;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
		bool                           HasUpgradedValue;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.StatusEffect = StatusEffect;
	params.StatName = StatName;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_AmmoDriven
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EAmmoDrivenWeapnUpgradeType    upgradeType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)
// bool                           HasAnyUpgrades                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBPL_UpgradeHelpers_C::UPGDESC_AmmoDriven(class UClass* Item, class AFSDPlayerState* Player, EAmmoDrivenWeapnUpgradeType upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasAnyUpgrades)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_AmmoDriven");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		EAmmoDrivenWeapnUpgradeType    upgradeType;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
		bool                           HasAnyUpgrades;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasAnyUpgrades != nullptr)
		*HasAnyUpgrades = params.HasAnyUpgrades;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatValue
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          BaseValue                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          UpgradeValue                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          OldUpgradeValue                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EItemPreviewStatus             PreviewStatus                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          FinalValue                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EFormatWeaponStatType> Format                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   BaseText                       (CPF_Parm, CPF_OutParm)
// struct FText                   UpgradeText                    (CPF_Parm, CPF_OutParm)
// struct FText                   Value                          (CPF_Parm, CPF_OutParm)

void UBPL_UpgradeHelpers_C::FormatValue(float BaseValue, float UpgradeValue, float OldUpgradeValue, EItemPreviewStatus PreviewStatus, float FinalValue, TEnumAsByte<EFormatWeaponStatType> Format, class UObject* __WorldContext, struct FText* BaseText, struct FText* UpgradeText, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.FormatValue");

	struct
	{
		float                          BaseValue;
		float                          UpgradeValue;
		float                          OldUpgradeValue;
		EItemPreviewStatus             PreviewStatus;
		float                          FinalValue;
		TEnumAsByte<EFormatWeaponStatType> Format;
		class UObject*                 __WorldContext;
		struct FText                   BaseText;
		struct FText                   UpgradeText;
		struct FText                   Value;
	} params;

	params.BaseValue = BaseValue;
	params.UpgradeValue = UpgradeValue;
	params.OldUpgradeValue = OldUpgradeValue;
	params.PreviewStatus = PreviewStatus;
	params.FinalValue = FinalValue;
	params.Format = Format;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (BaseText != nullptr)
		*BaseText = params.BaseText;
	if (UpgradeText != nullptr)
		*UpgradeText = params.UpgradeText;
	if (Value != nullptr)
		*Value = params.Value;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Damage
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// class UClass*                  upgradedItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// EDamageUpgrade                 upgradeType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Prefix                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)
// bool                           HasUpgradedValue               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBPL_UpgradeHelpers_C::UPGDESC_Damage(class UClass* upgradedItem, EDamageUpgrade upgradeType, const struct FText& Prefix, class UObject* __WorldContext, class UClass** Item, class AFSDPlayerState** Player, struct FGearStatEntry* GearStatEntry, bool* HasUpgradedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Damage");

	struct
	{
		class UClass*                  Item;
		class UClass*                  upgradedItem;
		class AFSDPlayerState*         Player;
		EDamageUpgrade                 upgradeType;
		struct FText                   Prefix;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
		bool                           HasUpgradedValue;
	} params;

	params.upgradedItem = upgradedItem;
	params.upgradeType = upgradeType;
	params.Prefix = Prefix;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Item != nullptr)
		*Item = params.Item;
	if (Player != nullptr)
		*Player = params.Player;
	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasUpgradedValue != nullptr)
		*HasUpgradedValue = params.HasUpgradedValue;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_HitScan
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EHitScanBaseUpgradeType        upgradeType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)
// bool                           HasAnyUpgrades                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBPL_UpgradeHelpers_C::UPGDESC_HitScan(class UClass* Item, class AFSDPlayerState* Player, EHitScanBaseUpgradeType upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* HasAnyUpgrades)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_HitScan");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		EHitScanBaseUpgradeType        upgradeType;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
		bool                           HasAnyUpgrades;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (HasAnyUpgrades != nullptr)
		*HasAnyUpgrades = params.HasAnyUpgrades;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_SingleUsable_UseDuration
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  subItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)

void UBPL_UpgradeHelpers_C::UPGDESC_SingleUsable_UseDuration(class UClass* Item, class UClass* subItem, class AFSDPlayerState* Player, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_SingleUsable_UseDuration");

	struct
	{
		class UClass*                  Item;
		class UClass*                  subItem;
		class AFSDPlayerState*         Player;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
	} params;

	params.Item = Item;
	params.subItem = subItem;
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_SentryGun_Capacity
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)

void UBPL_UpgradeHelpers_C::UPGDESC_SentryGun_Capacity(class UClass* Item, class AFSDPlayerState* Player, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_SentryGun_Capacity");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Item
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EInventoryItemUpgradeType      upgradeType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)

void UBPL_UpgradeHelpers_C::UPGDESC_Item(class AFSDPlayerState* Player, class UClass* Item, EInventoryItemUpgradeType upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Item");

	struct
	{
		class AFSDPlayerState*         Player;
		class UClass*                  Item;
		EInventoryItemUpgradeType      upgradeType;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
	} params;

	params.Player = Player;
	params.Item = Item;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Flare_Base
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  flareClass                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EFlareUpgradeType              upgradeType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)

void UBPL_UpgradeHelpers_C::UPGDESC_Flare_Base(class UClass* flareClass, class AFSDPlayerState* Player, EFlareUpgradeType upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Flare_Base");

	struct
	{
		class UClass*                  flareClass;
		class AFSDPlayerState*         Player;
		EFlareUpgradeType              upgradeType;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
	} params;

	params.flareClass = flareClass;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Drills
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EAutoMinerUpgradeType          upgradeType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)
// bool                           Has_Upgraded_Value             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBPL_UpgradeHelpers_C::UPGDESC_Drills(class UClass* Item, class AFSDPlayerState* Player, EAutoMinerUpgradeType upgradeType, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry, bool* Has_Upgraded_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Drills");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		EAutoMinerUpgradeType          upgradeType;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
		bool                           Has_Upgraded_Value;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
	if (Has_Upgraded_Value != nullptr)
		*Has_Upgraded_Value = params.Has_Upgraded_Value;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Capacity
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  upgradedItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)

void UBPL_UpgradeHelpers_C::UPGDESC_Capacity(class UClass* upgradedItem, class AFSDPlayerState* Player, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Capacity");

	struct
	{
		class UClass*                  upgradedItem;
		class AFSDPlayerState*         Player;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
	} params;

	params.upgradedItem = upgradedItem;
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Explosion_Damage
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  upgradedItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  componentItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)

void UBPL_UpgradeHelpers_C::UPGDESC_Explosion_Damage(class UClass* upgradedItem, class UClass* componentItem, class AFSDPlayerState* Player, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Explosion_Damage");

	struct
	{
		class UClass*                  upgradedItem;
		class UClass*                  componentItem;
		class AFSDPlayerState*         Player;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
	} params;

	params.upgradedItem = upgradedItem;
	params.componentItem = componentItem;
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Explosion_Radius
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  upgradedItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  componentItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)

void UBPL_UpgradeHelpers_C::UPGDESC_Explosion_Radius(class UClass* upgradedItem, class UClass* componentItem, class AFSDPlayerState* Player, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_Explosion_Radius");

	struct
	{
		class UClass*                  upgradedItem;
		class UClass*                  componentItem;
		class AFSDPlayerState*         Player;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
	} params;

	params.upgradedItem = upgradedItem;
	params.componentItem = componentItem;
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_HitScan_Bullets
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)

void UBPL_UpgradeHelpers_C::UPGDESC_HitScan_Bullets(class UClass* Item, class AFSDPlayerState* Player, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_HitScan_Bullets");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_AmmoDriven_Reload
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)

void UBPL_UpgradeHelpers_C::UPGDESC_AmmoDriven_Reload(class UClass* Item, class AFSDPlayerState* Player, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_AmmoDriven_Reload");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_AmmoDriven_Base
// (FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EAmmoDrivenWeapnUpgradeType    upgradeType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Description                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)

void UBPL_UpgradeHelpers_C::UPGDESC_AmmoDriven_Base(class UClass* Item, class AFSDPlayerState* Player, EAmmoDrivenWeapnUpgradeType upgradeType, const struct FText& Description, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_AmmoDriven_Base");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		EAmmoDrivenWeapnUpgradeType    upgradeType;
		struct FText                   Description;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.upgradeType = upgradeType;
	params.Description = Description;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_AmmoDriven_RateOfFire
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)

void UBPL_UpgradeHelpers_C::UPGDESC_AmmoDriven_RateOfFire(class UClass* Item, class AFSDPlayerState* Player, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_AmmoDriven_RateOfFire");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_AmmoDriven_ClipSize
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)

void UBPL_UpgradeHelpers_C::UPGDESC_AmmoDriven_ClipSize(class UClass* Item, class AFSDPlayerState* Player, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_AmmoDriven_ClipSize");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
}


// Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_AmmoDriven_MaxAmmo
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)

void UBPL_UpgradeHelpers_C::UPGDESC_AmmoDriven_MaxAmmo(class UClass* Item, class AFSDPlayerState* Player, class UObject* __WorldContext, struct FGearStatEntry* GearStatEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UpgradeHelpers.BPL_UpgradeHelpers_C.UPGDESC_AmmoDriven_MaxAmmo");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		class UObject*                 __WorldContext;
		struct FGearStatEntry          GearStatEntry;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
