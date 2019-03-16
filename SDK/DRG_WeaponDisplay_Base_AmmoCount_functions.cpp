// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WeaponDisplay_Base_AmmoCount_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.SetMaxAmmo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponDisplay_Base_AmmoCount_C::SetMaxAmmo(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.SetMaxAmmo");

	struct
	{
		int                            Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.RequestRedraw
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponDisplay_Base_AmmoCount_C::RequestRedraw()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.RequestRedraw");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.SetTotalCount
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponDisplay_Base_AmmoCount_C::SetTotalCount(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.SetTotalCount");

	struct
	{
		int                            Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.SetClipCount
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponDisplay_Base_AmmoCount_C::SetClipCount(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.SetClipCount");

	struct
	{
		int                            Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnTotalAmountChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponDisplay_Base_AmmoCount_C::OnTotalAmountChanged(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnTotalAmountChanged");

	struct
	{
		int                            Amount;
	} params;

	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnClipEmountChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponDisplay_Base_AmmoCount_C::OnClipEmountChanged(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnClipEmountChanged");

	struct
	{
		int                            Amount;
	} params;

	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnCarriedAmountChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponDisplay_Base_AmmoCount_C::OnCarriedAmountChanged(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnCarriedAmountChanged");

	struct
	{
		int                            Amount;
	} params;

	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnTotalAmountChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponDisplay_Base_AmmoCount_C::OnTotalAmountChange(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnTotalAmountChange");

	struct
	{
		int                            Amount;
	} params;

	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.Initialize
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AItem*                   OwningItem                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UWidgetComponent*        WidgetComp                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UWeaponDisplay_Base_AmmoCount_C::Initialize(class AItem* OwningItem, class UWidgetComponent* WidgetComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.Initialize");

	struct
	{
		class AItem*                   OwningItem;
		class UWidgetComponent*        WidgetComp;
	} params;

	params.OwningItem = OwningItem;
	params.WidgetComp = WidgetComp;

	UObject::ProcessEvent(fn, &params);
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnReloadStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponDisplay_Base_AmmoCount_C::OnReloadStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnReloadStarted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnReloadComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponDisplay_Base_AmmoCount_C::OnReloadComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnReloadComplete");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.Max Ammo Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponDisplay_Base_AmmoCount_C::Max_Ammo_Changed(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.Max Ammo Changed");

	struct
	{
		int                            Amount;
	} params;

	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.Total Ammo left changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponDisplay_Base_AmmoCount_C::Total_Ammo_left_changed(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.Total Ammo left changed");

	struct
	{
		int                            Amount;
	} params;

	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.Reload Time Tick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponDisplay_Base_AmmoCount_C::Reload_Time_Tick(float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.Reload Time Tick");

	struct
	{
		float                          Amount;
	} params;

	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);
}


// Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_Base_AmmoCount
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponDisplay_Base_AmmoCount_C::ExecuteUbergraph_WeaponDisplay_Base_AmmoCount(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_Base_AmmoCount");

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
