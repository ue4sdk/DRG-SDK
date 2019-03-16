// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WeaponDisplay_Drill_Heat_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponDisplay_Drill_Heat.WeaponDisplay_Drill_Heat_C.SetHeatValue
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          HeatPercentage                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Overheated                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponDisplay_Drill_Heat_C::SetHeatValue(float HeatPercentage, bool Overheated)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Drill_Heat.WeaponDisplay_Drill_Heat_C.SetHeatValue");

	struct
	{
		float                          HeatPercentage;
		bool                           Overheated;
	} params;

	params.HeatPercentage = HeatPercentage;
	params.Overheated = Overheated;

	UObject::ProcessEvent(fn, &params);
}


// Function WeaponDisplay_Drill_Heat.WeaponDisplay_Drill_Heat_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWeaponDisplay_Drill_Heat_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Drill_Heat.WeaponDisplay_Drill_Heat_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WeaponDisplay_Drill_Heat.WeaponDisplay_Drill_Heat_C.ExecuteUbergraph_WeaponDisplay_Drill_Heat
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponDisplay_Drill_Heat_C::ExecuteUbergraph_WeaponDisplay_Drill_Heat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Drill_Heat.WeaponDisplay_Drill_Heat_C.ExecuteUbergraph_WeaponDisplay_Drill_Heat");

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
