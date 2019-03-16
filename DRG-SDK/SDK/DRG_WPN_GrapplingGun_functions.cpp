// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WPN_GrapplingGun_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WPN_GrapplingGun.WPN_GrapplingGun_C.GetGearStatEntry
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AFSDPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void AWPN_GrapplingGun_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.GetGearStatEntry");

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


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.OnRep_Pulling
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWPN_GrapplingGun_C::OnRep_Pulling()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.OnRep_Pulling");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.GetCableTransform
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTransform AWPN_GrapplingGun_C::GetCableTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.GetCableTransform");

	struct
	{
		struct FTransform              ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.SetCableEndPoint
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_GrapplingGun_C::SetCableEndPoint(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.SetCableEndPoint");

	struct
	{
		struct FVector                 Location;
	} params;

	params.Location = Location;

	UObject::ProcessEvent(fn, &params);
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.GetCableParent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class USceneComponent*         Muzzle                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void AWPN_GrapplingGun_C::GetCableParent(class USceneComponent** Muzzle)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.GetCableParent");

	struct
	{
		class USceneComponent*         Muzzle;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Muzzle != nullptr)
		*Muzzle = params.Muzzle;
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.ToggleCable
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bNewVisibility                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_GrapplingGun_C::ToggleCable(bool bNewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.ToggleCable");

	struct
	{
		bool                           bNewVisibility;
	} params;

	params.bNewVisibility = bNewVisibility;

	UObject::ProcessEvent(fn, &params);
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.GetAimView
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 Location                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Forward                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_GrapplingGun_C::GetAimView(struct FVector* Location, struct FVector* Forward)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.GetAimView");

	struct
	{
		struct FVector                 Location;
		struct FVector                 Forward;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Location != nullptr)
		*Location = params.Location;
	if (Forward != nullptr)
		*Forward = params.Forward;
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWPN_GrapplingGun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.ProjectileMovement__FinishedFunc
// (FUNC_BlueprintEvent)

void AWPN_GrapplingGun_C::ProjectileMovement__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.ProjectileMovement__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.ProjectileMovement__UpdateFunc
// (FUNC_BlueprintEvent)

void AWPN_GrapplingGun_C::ProjectileMovement__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.ProjectileMovement__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.RecieveEquipped
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWPN_GrapplingGun_C::RecieveEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.RecieveEquipped");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_GrapplingGun_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.Multicast Shoot
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Point                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_GrapplingGun_C::Multicast_Shoot(const struct FVector& Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.Multicast Shoot");

	struct
	{
		struct FVector                 Point;
	} params;

	params.Point = Point;

	UObject::ProcessEvent(fn, &params);
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.RecieveStartUsing
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWPN_GrapplingGun_C::RecieveStartUsing()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.RecieveStartUsing");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.RecieveUnequipped
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWPN_GrapplingGun_C::RecieveUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.RecieveUnequipped");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.RecieveStopUsing
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWPN_GrapplingGun_C::RecieveStopUsing()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.RecieveStopUsing");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.Stop Pulling
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWPN_GrapplingGun_C::Stop_Pulling()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.Stop Pulling");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.ServerShoot
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Point                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_GrapplingGun_C::ServerShoot(const struct FVector& Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.ServerShoot");

	struct
	{
		struct FVector                 Point;
	} params;

	params.Point = Point;

	UObject::ProcessEvent(fn, &params);
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.AddedToInventory
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        ItemOwner                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_GrapplingGun_C::AddedToInventory(class APlayerCharacter* ItemOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.AddedToInventory");

	struct
	{
		class APlayerCharacter*        ItemOwner;
	} params;

	params.ItemOwner = ItemOwner;

	UObject::ProcessEvent(fn, &params);
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWPN_GrapplingGun_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.Init Character
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWPN_GrapplingGun_C::Init_Character()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.Init Character");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.OnDeath
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UHealthComponentBase*    HealthComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void AWPN_GrapplingGun_C::OnDeath(class UHealthComponentBase* HealthComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.OnDeath");

	struct
	{
		class UHealthComponentBase*    HealthComponent;
	} params;

	params.HealthComponent = HealthComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.RecieveCycledItem
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWPN_GrapplingGun_C::RecieveCycledItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.RecieveCycledItem");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.Gunsling
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWPN_GrapplingGun_C::Gunsling()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.Gunsling");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_GrapplingGun.WPN_GrapplingGun_C.ExecuteUbergraph_WPN_GrapplingGun
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_GrapplingGun_C::ExecuteUbergraph_WPN_GrapplingGun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.ExecuteUbergraph_WPN_GrapplingGun");

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
