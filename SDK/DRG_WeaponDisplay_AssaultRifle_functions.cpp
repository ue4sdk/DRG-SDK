// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WeaponDisplay_AssaultRifle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponDisplay_AssaultRifle.WeaponDisplay_AssaultRifle_C.SetTotalCount
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponDisplay_AssaultRifle_C::SetTotalCount(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_AssaultRifle.WeaponDisplay_AssaultRifle_C.SetTotalCount");

	struct
	{
		int                            Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WeaponDisplay_AssaultRifle.WeaponDisplay_AssaultRifle_C.SetClipCount
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponDisplay_AssaultRifle_C::SetClipCount(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_AssaultRifle.WeaponDisplay_AssaultRifle_C.SetClipCount");

	struct
	{
		int                            Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WeaponDisplay_AssaultRifle.WeaponDisplay_AssaultRifle_C.ExecuteUbergraph_WeaponDisplay_AssaultRifle
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponDisplay_AssaultRifle_C::ExecuteUbergraph_WeaponDisplay_AssaultRifle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_AssaultRifle.WeaponDisplay_AssaultRifle_C.ExecuteUbergraph_WeaponDisplay_AssaultRifle");

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
