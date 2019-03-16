// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WeaponDisplay_ChargeBlaster_AmmoCounter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponDisplay_ChargeBlaster_AmmoCounter.WeaponDisplay_ChargeBlaster_AmmoCounter_C.UpdateAmount
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponDisplay_ChargeBlaster_AmmoCounter_C::UpdateAmount(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_ChargeBlaster_AmmoCounter.WeaponDisplay_ChargeBlaster_AmmoCounter_C.UpdateAmount");

	struct
	{
		int                            Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WeaponDisplay_ChargeBlaster_AmmoCounter.WeaponDisplay_ChargeBlaster_AmmoCounter_C.SetTotalCount
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponDisplay_ChargeBlaster_AmmoCounter_C::SetTotalCount(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_ChargeBlaster_AmmoCounter.WeaponDisplay_ChargeBlaster_AmmoCounter_C.SetTotalCount");

	struct
	{
		int                            Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WeaponDisplay_ChargeBlaster_AmmoCounter.WeaponDisplay_ChargeBlaster_AmmoCounter_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWeaponDisplay_ChargeBlaster_AmmoCounter_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_ChargeBlaster_AmmoCounter.WeaponDisplay_ChargeBlaster_AmmoCounter_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WeaponDisplay_ChargeBlaster_AmmoCounter.WeaponDisplay_ChargeBlaster_AmmoCounter_C.Max Ammo Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponDisplay_ChargeBlaster_AmmoCounter_C::Max_Ammo_Changed(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_ChargeBlaster_AmmoCounter.WeaponDisplay_ChargeBlaster_AmmoCounter_C.Max Ammo Changed");

	struct
	{
		int                            Amount;
	} params;

	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);
}


// Function WeaponDisplay_ChargeBlaster_AmmoCounter.WeaponDisplay_ChargeBlaster_AmmoCounter_C.Total Ammo left changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponDisplay_ChargeBlaster_AmmoCounter_C::Total_Ammo_left_changed(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_ChargeBlaster_AmmoCounter.WeaponDisplay_ChargeBlaster_AmmoCounter_C.Total Ammo left changed");

	struct
	{
		int                            Amount;
	} params;

	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);
}


// Function WeaponDisplay_ChargeBlaster_AmmoCounter.WeaponDisplay_ChargeBlaster_AmmoCounter_C.SetClipCount
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponDisplay_ChargeBlaster_AmmoCounter_C::SetClipCount(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_ChargeBlaster_AmmoCounter.WeaponDisplay_ChargeBlaster_AmmoCounter_C.SetClipCount");

	struct
	{
		int                            Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WeaponDisplay_ChargeBlaster_AmmoCounter.WeaponDisplay_ChargeBlaster_AmmoCounter_C.ExecuteUbergraph_WeaponDisplay_ChargeBlaster_AmmoCounter
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponDisplay_ChargeBlaster_AmmoCounter_C::ExecuteUbergraph_WeaponDisplay_ChargeBlaster_AmmoCounter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_ChargeBlaster_AmmoCounter.WeaponDisplay_ChargeBlaster_AmmoCounter_C.ExecuteUbergraph_WeaponDisplay_ChargeBlaster_AmmoCounter");

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
