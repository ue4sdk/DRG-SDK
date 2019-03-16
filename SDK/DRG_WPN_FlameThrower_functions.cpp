// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WPN_FlameThrower_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WPN_FlameThrower.WPN_FlameThrower_C.GetGearStatEntry
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AFSDPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void AWPN_FlameThrower_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_FlameThrower.WPN_FlameThrower_C.GetGearStatEntry");

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


// Function WPN_FlameThrower.WPN_FlameThrower_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWPN_FlameThrower_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_FlameThrower.WPN_FlameThrower_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_FlameThrower.WPN_FlameThrower_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWPN_FlameThrower_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_FlameThrower.WPN_FlameThrower_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_FlameThrower.WPN_FlameThrower_C.RecieveEquipped
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWPN_FlameThrower_C::RecieveEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_FlameThrower.WPN_FlameThrower_C.RecieveEquipped");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_FlameThrower.WPN_FlameThrower_C.RecieveUnequipped
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWPN_FlameThrower_C::RecieveUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_FlameThrower.WPN_FlameThrower_C.RecieveUnequipped");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_FlameThrower.WPN_FlameThrower_C.Receive_ReloadBegin
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AWPN_FlameThrower_C::Receive_ReloadBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_FlameThrower.WPN_FlameThrower_C.Receive_ReloadBegin");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_FlameThrower.WPN_FlameThrower_C.Receive_ReloadEnd
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AWPN_FlameThrower_C::Receive_ReloadEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_FlameThrower.WPN_FlameThrower_C.Receive_ReloadEnd");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_FlameThrower.WPN_FlameThrower_C.Recieve_UpdateMeshses
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsFirstPerson                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_FlameThrower_C::Recieve_UpdateMeshses(bool IsFirstPerson)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_FlameThrower.WPN_FlameThrower_C.Recieve_UpdateMeshses");

	struct
	{
		bool                           IsFirstPerson;
	} params;

	params.IsFirstPerson = IsFirstPerson;

	UObject::ProcessEvent(fn, &params);
}


// Function WPN_FlameThrower.WPN_FlameThrower_C.AddedToInventory
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        ItemOwner                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_FlameThrower_C::AddedToInventory(class APlayerCharacter* ItemOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_FlameThrower.WPN_FlameThrower_C.AddedToInventory");

	struct
	{
		class APlayerCharacter*        ItemOwner;
	} params;

	params.ItemOwner = ItemOwner;

	UObject::ProcessEvent(fn, &params);
}


// Function WPN_FlameThrower.WPN_FlameThrower_C.BndEvt__Impact_K2Node_ComponentBoundEvent_0_HightAccelerationSignature__DelegateSignature
// (FUNC_BlueprintEvent)

void AWPN_FlameThrower_C::BndEvt__Impact_K2Node_ComponentBoundEvent_0_HightAccelerationSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_FlameThrower.WPN_FlameThrower_C.BndEvt__Impact_K2Node_ComponentBoundEvent_0_HightAccelerationSignature__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_FlameThrower.WPN_FlameThrower_C.ExecuteUbergraph_WPN_FlameThrower
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_FlameThrower_C::ExecuteUbergraph_WPN_FlameThrower(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_FlameThrower.WPN_FlameThrower_C.ExecuteUbergraph_WPN_FlameThrower");

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
