// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WPN_Cryospray_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WPN_Cryospray.WPN_Cryospray_C.GetGearStatEntry
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class AFSDPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void AWPN_Cryospray_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Cryospray.WPN_Cryospray_C.GetGearStatEntry");

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


// Function WPN_Cryospray.WPN_Cryospray_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWPN_Cryospray_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Cryospray.WPN_Cryospray_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_Cryospray.WPN_Cryospray_C.OnTemperatureChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          Temperature                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Overheated                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_Cryospray_C::OnTemperatureChanged(float Temperature, bool Overheated)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Cryospray.WPN_Cryospray_C.OnTemperatureChanged");

	struct
	{
		float                          Temperature;
		bool                           Overheated;
	} params;

	params.Temperature = Temperature;
	params.Overheated = Overheated;

	UObject::ProcessEvent(fn, &params);
}


// Function WPN_Cryospray.WPN_Cryospray_C.BndEvt__Aggregator_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_Cryospray_C::BndEvt__Aggregator_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Cryospray.WPN_Cryospray_C.BndEvt__Aggregator_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature");

	struct
	{
		int                            Amount;
	} params;

	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);
}


// Function WPN_Cryospray.WPN_Cryospray_C.Update Ammo Display
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWPN_Cryospray_C::Update_Ammo_Display()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Cryospray.WPN_Cryospray_C.Update Ammo Display");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_Cryospray.WPN_Cryospray_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWPN_Cryospray_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Cryospray.WPN_Cryospray_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_Cryospray.WPN_Cryospray_C.ReceiveRepressurisingChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_Cryospray_C::ReceiveRepressurisingChanged(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Cryospray.WPN_Cryospray_C.ReceiveRepressurisingChanged");

	struct
	{
		bool                           Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WPN_Cryospray.WPN_Cryospray_C.RecieveEquipped
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWPN_Cryospray_C::RecieveEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Cryospray.WPN_Cryospray_C.RecieveEquipped");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_Cryospray.WPN_Cryospray_C.RecieveUnequipped
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWPN_Cryospray_C::RecieveUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Cryospray.WPN_Cryospray_C.RecieveUnequipped");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_Cryospray.WPN_Cryospray_C.Toggle RepressurerisingFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           on                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_Cryospray_C::Toggle_RepressurerisingFX(bool on)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Cryospray.WPN_Cryospray_C.Toggle RepressurerisingFX");

	struct
	{
		bool                           on;
	} params;

	params.on = on;

	UObject::ProcessEvent(fn, &params);
}


// Function WPN_Cryospray.WPN_Cryospray_C.ExecuteUbergraph_WPN_Cryospray
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_Cryospray_C::ExecuteUbergraph_WPN_Cryospray(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Cryospray.WPN_Cryospray_C.ExecuteUbergraph_WPN_Cryospray");

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
