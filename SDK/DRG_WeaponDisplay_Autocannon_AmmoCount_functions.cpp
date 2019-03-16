// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WeaponDisplay_Autocannon_AmmoCount_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponDisplay_Autocannon_AmmoCount.WeaponDisplay_Autocannon_AmmoCount_C.SetClipCount
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponDisplay_Autocannon_AmmoCount_C::SetClipCount(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Autocannon_AmmoCount.WeaponDisplay_Autocannon_AmmoCount_C.SetClipCount");

	struct
	{
		int                            Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WeaponDisplay_Autocannon_AmmoCount.WeaponDisplay_Autocannon_AmmoCount_C.OnReloadStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponDisplay_Autocannon_AmmoCount_C::OnReloadStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Autocannon_AmmoCount.WeaponDisplay_Autocannon_AmmoCount_C.OnReloadStarted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WeaponDisplay_Autocannon_AmmoCount.WeaponDisplay_Autocannon_AmmoCount_C.OnReloadComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponDisplay_Autocannon_AmmoCount_C::OnReloadComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Autocannon_AmmoCount.WeaponDisplay_Autocannon_AmmoCount_C.OnReloadComplete");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WeaponDisplay_Autocannon_AmmoCount.WeaponDisplay_Autocannon_AmmoCount_C.SetTotalCount
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponDisplay_Autocannon_AmmoCount_C::SetTotalCount(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Autocannon_AmmoCount.WeaponDisplay_Autocannon_AmmoCount_C.SetTotalCount");

	struct
	{
		int                            Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WeaponDisplay_Autocannon_AmmoCount.WeaponDisplay_Autocannon_AmmoCount_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWeaponDisplay_Autocannon_AmmoCount_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Autocannon_AmmoCount.WeaponDisplay_Autocannon_AmmoCount_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WeaponDisplay_Autocannon_AmmoCount.WeaponDisplay_Autocannon_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_Autocannon_AmmoCount
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponDisplay_Autocannon_AmmoCount_C::ExecuteUbergraph_WeaponDisplay_Autocannon_AmmoCount(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Autocannon_AmmoCount.WeaponDisplay_Autocannon_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_Autocannon_AmmoCount");

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
