// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WPN_Autocannon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WPN_Autocannon.WPN_Autocannon_C.GetGearStatEntry
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AFSDPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void AWPN_Autocannon_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Autocannon.WPN_Autocannon_C.GetGearStatEntry");

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


// Function WPN_Autocannon.WPN_Autocannon_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWPN_Autocannon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Autocannon.WPN_Autocannon_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_Autocannon.WPN_Autocannon_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWPN_Autocannon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Autocannon.WPN_Autocannon_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_Autocannon.WPN_Autocannon_C.Receive_IsFiringChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           NewValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_Autocannon_C::Receive_IsFiringChanged(bool NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Autocannon.WPN_Autocannon_C.Receive_IsFiringChanged");

	struct
	{
		bool                           NewValue;
	} params;

	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}


// Function WPN_Autocannon.WPN_Autocannon_C.BndEvt__Impact_K2Node_ComponentBoundEvent_0_HightAccelerationSignature__DelegateSignature
// (FUNC_BlueprintEvent)

void AWPN_Autocannon_C::BndEvt__Impact_K2Node_ComponentBoundEvent_0_HightAccelerationSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Autocannon.WPN_Autocannon_C.BndEvt__Impact_K2Node_ComponentBoundEvent_0_HightAccelerationSignature__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_Autocannon.WPN_Autocannon_C.RecieveEquipped
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWPN_Autocannon_C::RecieveEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Autocannon.WPN_Autocannon_C.RecieveEquipped");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_Autocannon.WPN_Autocannon_C.RecieveUnequipped
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWPN_Autocannon_C::RecieveUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Autocannon.WPN_Autocannon_C.RecieveUnequipped");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_Autocannon.WPN_Autocannon_C.ExecuteUbergraph_WPN_Autocannon
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_Autocannon_C::ExecuteUbergraph_WPN_Autocannon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Autocannon.WPN_Autocannon_C.ExecuteUbergraph_WPN_Autocannon");

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
