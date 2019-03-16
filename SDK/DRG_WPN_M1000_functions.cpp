// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WPN_M1000_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WPN_M1000.WPN_M1000_C.GetGearStatEntry
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AFSDPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void AWPN_M1000_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_M1000.WPN_M1000_C.GetGearStatEntry");

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


// Function WPN_M1000.WPN_M1000_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWPN_M1000_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_M1000.WPN_M1000_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_M1000.WPN_M1000_C.RecieveEquipped
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWPN_M1000_C::RecieveEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_M1000.WPN_M1000_C.RecieveEquipped");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_M1000.WPN_M1000_C.Recieve_UpdateMeshses
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsFirstPerson                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_M1000_C::Recieve_UpdateMeshses(bool IsFirstPerson)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_M1000.WPN_M1000_C.Recieve_UpdateMeshses");

	struct
	{
		bool                           IsFirstPerson;
	} params;

	params.IsFirstPerson = IsFirstPerson;

	UObject::ProcessEvent(fn, &params);
}


// Function WPN_M1000.WPN_M1000_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWPN_M1000_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_M1000.WPN_M1000_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_M1000.WPN_M1000_C.ExecuteUbergraph_WPN_M1000
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_M1000_C::ExecuteUbergraph_WPN_M1000(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_M1000.WPN_M1000_C.ExecuteUbergraph_WPN_M1000");

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
