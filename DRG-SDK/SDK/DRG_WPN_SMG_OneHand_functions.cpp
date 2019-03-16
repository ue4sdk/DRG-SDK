// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WPN_SMG_OneHand_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.NewFunction_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGearStatEntry          GearStatEntry                  (CPF_Parm, CPF_OutParm)

void AWPN_SMG_OneHand_C::NewFunction_1(class UClass* Item, class AFSDPlayerState* Player, struct FGearStatEntry* GearStatEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.NewFunction_1");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		struct FGearStatEntry          GearStatEntry;
	} params;

	params.Item = Item;
	params.Player = Player;

	UObject::ProcessEvent(fn, &params);

	if (GearStatEntry != nullptr)
		*GearStatEntry = params.GearStatEntry;
}


// Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.GetGearStatEntry
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AFSDPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void AWPN_SMG_OneHand_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.GetGearStatEntry");

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


// Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWPN_SMG_OneHand_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.RecieveEquipped
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWPN_SMG_OneHand_C::RecieveEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.RecieveEquipped");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.Recieve_UpdateMeshses
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsFirstPerson                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_SMG_OneHand_C::Recieve_UpdateMeshses(bool IsFirstPerson)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.Recieve_UpdateMeshses");

	struct
	{
		bool                           IsFirstPerson;
	} params;

	params.IsFirstPerson = IsFirstPerson;

	UObject::ProcessEvent(fn, &params);
}


// Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWPN_SMG_OneHand_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.Receive_ReloadBegin
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AWPN_SMG_OneHand_C::Receive_ReloadBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.Receive_ReloadBegin");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.Receive_ReloadEnd
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AWPN_SMG_OneHand_C::Receive_ReloadEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.Receive_ReloadEnd");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.ExecuteUbergraph_WPN_SMG_OneHand
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_SMG_OneHand_C::ExecuteUbergraph_WPN_SMG_OneHand(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.ExecuteUbergraph_WPN_SMG_OneHand");

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
