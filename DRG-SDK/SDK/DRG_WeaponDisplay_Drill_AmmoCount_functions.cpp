// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WeaponDisplay_Drill_AmmoCount_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponDisplay_Drill_AmmoCount.WeaponDisplay_Drill_AmmoCount_C.AdjustProgressBar
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponDisplay_Drill_AmmoCount_C::AdjustProgressBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Drill_AmmoCount.WeaponDisplay_Drill_AmmoCount_C.AdjustProgressBar");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WeaponDisplay_Drill_AmmoCount.WeaponDisplay_Drill_AmmoCount_C.SetClipCount
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponDisplay_Drill_AmmoCount_C::SetClipCount(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Drill_AmmoCount.WeaponDisplay_Drill_AmmoCount_C.SetClipCount");

	struct
	{
		int                            Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WeaponDisplay_Drill_AmmoCount.WeaponDisplay_Drill_AmmoCount_C.Check AmmoLow
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponDisplay_Drill_AmmoCount_C::Check_AmmoLow()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Drill_AmmoCount.WeaponDisplay_Drill_AmmoCount_C.Check AmmoLow");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WeaponDisplay_Drill_AmmoCount.WeaponDisplay_Drill_AmmoCount_C.BndEvt__AmmoLow_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UWeaponDisplay_Drill_AmmoCount_C::BndEvt__AmmoLow_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Drill_AmmoCount.WeaponDisplay_Drill_AmmoCount_C.BndEvt__AmmoLow_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WeaponDisplay_Drill_AmmoCount.WeaponDisplay_Drill_AmmoCount_C.SetTotalCount
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponDisplay_Drill_AmmoCount_C::SetTotalCount(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Drill_AmmoCount.WeaponDisplay_Drill_AmmoCount_C.SetTotalCount");

	struct
	{
		int                            Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WeaponDisplay_Drill_AmmoCount.WeaponDisplay_Drill_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_Drill_AmmoCount
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponDisplay_Drill_AmmoCount_C::ExecuteUbergraph_WeaponDisplay_Drill_AmmoCount(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Drill_AmmoCount.WeaponDisplay_Drill_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_Drill_AmmoCount");

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
