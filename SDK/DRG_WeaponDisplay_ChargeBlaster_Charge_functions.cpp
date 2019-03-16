// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WeaponDisplay_ChargeBlaster_Charge_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponDisplay_ChargeBlaster_Charge.WeaponDisplay_ChargeBlaster_Charge_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWeaponDisplay_ChargeBlaster_Charge_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_ChargeBlaster_Charge.WeaponDisplay_ChargeBlaster_Charge_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WeaponDisplay_ChargeBlaster_Charge.WeaponDisplay_ChargeBlaster_Charge_C.SetChargeValue
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ChargeValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Overheated                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Ready                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           FullCharge                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponDisplay_ChargeBlaster_Charge_C::SetChargeValue(float ChargeValue, bool Overheated, bool Ready, bool FullCharge)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_ChargeBlaster_Charge.WeaponDisplay_ChargeBlaster_Charge_C.SetChargeValue");

	struct
	{
		float                          ChargeValue;
		bool                           Overheated;
		bool                           Ready;
		bool                           FullCharge;
	} params;

	params.ChargeValue = ChargeValue;
	params.Overheated = Overheated;
	params.Ready = Ready;
	params.FullCharge = FullCharge;

	UObject::ProcessEvent(fn, &params);
}


// Function WeaponDisplay_ChargeBlaster_Charge.WeaponDisplay_ChargeBlaster_Charge_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponDisplay_ChargeBlaster_Charge_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_ChargeBlaster_Charge.WeaponDisplay_ChargeBlaster_Charge_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WeaponDisplay_ChargeBlaster_Charge.WeaponDisplay_ChargeBlaster_Charge_C.ExecuteUbergraph_WeaponDisplay_ChargeBlaster_Charge
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponDisplay_ChargeBlaster_Charge_C::ExecuteUbergraph_WeaponDisplay_ChargeBlaster_Charge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_ChargeBlaster_Charge.WeaponDisplay_ChargeBlaster_Charge_C.ExecuteUbergraph_WeaponDisplay_ChargeBlaster_Charge");

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
