// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_PRW_LockedWeapon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PRW_LockedWeapon.PRW_LockedWeapon_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRW_LockedWeapon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRW_LockedWeapon.PRW_LockedWeapon_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRW_LockedWeapon.PRW_LockedWeapon_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void APRW_LockedWeapon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRW_LockedWeapon.PRW_LockedWeapon_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRW_LockedWeapon.PRW_LockedWeapon_C.ExecuteUbergraph_PRW_LockedWeapon
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APRW_LockedWeapon_C::ExecuteUbergraph_PRW_LockedWeapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRW_LockedWeapon.PRW_LockedWeapon_C.ExecuteUbergraph_PRW_LockedWeapon");

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
