// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WPN_DoubleDrills_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WPN_DoubleDrills.WPN_DoubleDrills_C.GetGearStatEntry
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class AFSDPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void AWPN_DoubleDrills_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.GetGearStatEntry");

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


// Function WPN_DoubleDrills.WPN_DoubleDrills_C.GetHeatingAudioSceneComponent
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USceneComponent*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class USceneComponent* AWPN_DoubleDrills_C::GetHeatingAudioSceneComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.GetHeatingAudioSceneComponent");

	struct
	{
		class USceneComponent*         ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WPN_DoubleDrills.WPN_DoubleDrills_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWPN_DoubleDrills_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_DoubleDrills.WPN_DoubleDrills_C.OnTemperatureChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          Temperature                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Overheated                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_DoubleDrills_C::OnTemperatureChanged(float Temperature, bool Overheated)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.OnTemperatureChanged");

	struct
	{
		float                          Temperature;
		bool                           Overheated;
	} params;

	params.Temperature = Temperature;
	params.Overheated = Overheated;

	UObject::ProcessEvent(fn, &params);
}


// Function WPN_DoubleDrills.WPN_DoubleDrills_C.Increase FOV
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWPN_DoubleDrills_C::Increase_FOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.Increase FOV");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_DoubleDrills.WPN_DoubleDrills_C.Decrease FOV
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWPN_DoubleDrills_C::Decrease_FOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.Decrease FOV");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_DoubleDrills.WPN_DoubleDrills_C.AddedToInventory
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        ItemOwner                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_DoubleDrills_C::AddedToInventory(class APlayerCharacter* ItemOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.AddedToInventory");

	struct
	{
		class APlayerCharacter*        ItemOwner;
	} params;

	params.ItemOwner = ItemOwner;

	UObject::ProcessEvent(fn, &params);
}


// Function WPN_DoubleDrills.WPN_DoubleDrills_C.BP_OnDrillDamage
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AWPN_DoubleDrills_C::BP_OnDrillDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.BP_OnDrillDamage");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_DoubleDrills.WPN_DoubleDrills_C.OnStartDrilling
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AWPN_DoubleDrills_C::OnStartDrilling()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.OnStartDrilling");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_DoubleDrills.WPN_DoubleDrills_C.OnStopDrilling
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AWPN_DoubleDrills_C::OnStopDrilling()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.OnStopDrilling");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_DoubleDrills.WPN_DoubleDrills_C.Receive_Overheated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWPN_DoubleDrills_C::Receive_Overheated()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.Receive_Overheated");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_DoubleDrills.WPN_DoubleDrills_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWPN_DoubleDrills_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_DoubleDrills.WPN_DoubleDrills_C.Gunsling
// (FUNC_Net, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWPN_DoubleDrills_C::Gunsling()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.Gunsling");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_DoubleDrills.WPN_DoubleDrills_C.RecieveCycledItem
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWPN_DoubleDrills_C::RecieveCycledItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.RecieveCycledItem");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_DoubleDrills.WPN_DoubleDrills_C.ExecuteUbergraph_WPN_DoubleDrills
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_DoubleDrills_C::ExecuteUbergraph_WPN_DoubleDrills(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.ExecuteUbergraph_WPN_DoubleDrills");

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
