// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WPN_ChargeBlaster_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.FadeOutIfValid
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAudioComponent*         AC                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_ReferenceParm, CPF_IsPlainOldData)

void AWPN_ChargeBlaster_C::FadeOutIfValid(class UAudioComponent** AC)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.FadeOutIfValid");

	struct
	{
		class UAudioComponent*         AC;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AC != nullptr)
		*AC = params.AC;
}


// Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.HandleHeatAudio
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWPN_ChargeBlaster_C::HandleHeatAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.HandleHeatAudio");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.HandleChargeAudio
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          charge                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_ChargeBlaster_C::HandleChargeAudio(float charge)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.HandleChargeAudio");

	struct
	{
		float                          charge;
	} params;

	params.charge = charge;

	UObject::ProcessEvent(fn, &params);
}


// Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.GetGearStatEntry
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AFSDPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void AWPN_ChargeBlaster_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.GetGearStatEntry");

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


// Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWPN_ChargeBlaster_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWPN_ChargeBlaster_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.OnHeatChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          charge                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_ChargeBlaster_C::OnHeatChanged_Event_1(float charge)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.OnHeatChanged_Event_1");

	struct
	{
		float                          charge;
	} params;

	params.charge = charge;

	UObject::ProcessEvent(fn, &params);
}


// Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.ChargeChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          charge                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_ChargeBlaster_C::ChargeChanged(float charge)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.ChargeChanged");

	struct
	{
		float                          charge;
	} params;

	params.charge = charge;

	UObject::ProcessEvent(fn, &params);
}


// Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.RecieveUnequipped
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWPN_ChargeBlaster_C::RecieveUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.RecieveUnequipped");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.ReceiveOverheatedChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsOverheated                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_ChargeBlaster_C::ReceiveOverheatedChanged(bool IsOverheated)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.ReceiveOverheatedChanged");

	struct
	{
		bool                           IsOverheated;
	} params;

	params.IsOverheated = IsOverheated;

	UObject::ProcessEvent(fn, &params);
}


// Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.ExecuteUbergraph_WPN_ChargeBlaster
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_ChargeBlaster_C::ExecuteUbergraph_WPN_ChargeBlaster(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.ExecuteUbergraph_WPN_ChargeBlaster");

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
