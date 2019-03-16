// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WPN_PlatformGun_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WPN_PlatformGun.WPN_PlatformGun_C.GetGearStatEntry
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AFSDPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void AWPN_PlatformGun_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_PlatformGun.WPN_PlatformGun_C.GetGearStatEntry");

	struct
	{
		class AFSDPlayerState*         PlayerState;
		TArray<struct FGearStatEntry>  Stats;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function WPN_PlatformGun.WPN_PlatformGun_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWPN_PlatformGun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_PlatformGun.WPN_PlatformGun_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_PlatformGun.WPN_PlatformGun_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWPN_PlatformGun_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_PlatformGun.WPN_PlatformGun_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_PlatformGun.WPN_PlatformGun_C.BndEvt__ProjectileLauncher_K2Node_ComponentBoundEvent_4_WeaponFiredDelegate__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 fireDirection                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void AWPN_PlatformGun_C::BndEvt__ProjectileLauncher_K2Node_ComponentBoundEvent_4_WeaponFiredDelegate__DelegateSignature(const struct FVector& fireDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_PlatformGun.WPN_PlatformGun_C.BndEvt__ProjectileLauncher_K2Node_ComponentBoundEvent_4_WeaponFiredDelegate__DelegateSignature");

	struct
	{
		struct FVector                 fireDirection;
	} params;

	params.fireDirection = fireDirection;

	UObject::ProcessEvent(fn, &params);
}


// Function WPN_PlatformGun.WPN_PlatformGun_C.Upgraded_Blueprint_Implementation
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UItemUpgrade*>    upgrades                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void AWPN_PlatformGun_C::Upgraded_Blueprint_Implementation(TArray<class UItemUpgrade*> upgrades)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_PlatformGun.WPN_PlatformGun_C.Upgraded_Blueprint_Implementation");

	struct
	{
		TArray<class UItemUpgrade*>    upgrades;
	} params;

	params.upgrades = upgrades;

	UObject::ProcessEvent(fn, &params);
}


// Function WPN_PlatformGun.WPN_PlatformGun_C.BndEvt__ProjectileLauncher_K2Node_ComponentBoundEvent_0_ProjectileSpawned__DelegateSignature
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintEvent)
// Parameters:
// class AProjectileBase*         Projectile                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_PlatformGun_C::BndEvt__ProjectileLauncher_K2Node_ComponentBoundEvent_0_ProjectileSpawned__DelegateSignature(class AProjectileBase* Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_PlatformGun.WPN_PlatformGun_C.BndEvt__ProjectileLauncher_K2Node_ComponentBoundEvent_0_ProjectileSpawned__DelegateSignature");

	struct
	{
		class AProjectileBase*         Projectile;
	} params;

	params.Projectile = Projectile;

	UObject::ProcessEvent(fn, &params);
}


// Function WPN_PlatformGun.WPN_PlatformGun_C.ExecuteUbergraph_WPN_PlatformGun
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_PlatformGun_C::ExecuteUbergraph_WPN_PlatformGun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_PlatformGun.WPN_PlatformGun_C.ExecuteUbergraph_WPN_PlatformGun");

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
