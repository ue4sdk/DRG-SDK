// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WeaponDisplay_CryoSpray_Ammo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponDisplay_CryoSpray_Ammo.WeaponDisplay_CryoSpray_Ammo_C.Set Progress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponDisplay_CryoSpray_Ammo_C::Set_Progress(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_CryoSpray_Ammo.WeaponDisplay_CryoSpray_Ammo_C.Set Progress");

	struct
	{
		float                          Progress;
	} params;

	params.Progress = Progress;

	UObject::ProcessEvent(fn, &params);
}


// Function WeaponDisplay_CryoSpray_Ammo.WeaponDisplay_CryoSpray_Ammo_C.ExecuteUbergraph_WeaponDisplay_CryoSpray_Ammo
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponDisplay_CryoSpray_Ammo_C::ExecuteUbergraph_WeaponDisplay_CryoSpray_Ammo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_CryoSpray_Ammo.WeaponDisplay_CryoSpray_Ammo_C.ExecuteUbergraph_WeaponDisplay_CryoSpray_Ammo");

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
