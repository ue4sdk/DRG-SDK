// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_AOE_Grenade_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_AOE_Grenade_Base.ITM_AOE_Grenade_Base_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AITM_AOE_Grenade_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_AOE_Grenade_Base.ITM_AOE_Grenade_Base_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_AOE_Grenade_Base.ITM_AOE_Grenade_Base_C.OnExploded
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AITM_AOE_Grenade_Base_C::OnExploded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_AOE_Grenade_Base.ITM_AOE_Grenade_Base_C.OnExploded");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_AOE_Grenade_Base.ITM_AOE_Grenade_Base_C.ExecuteUbergraph_ITM_AOE_Grenade_Base
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AITM_AOE_Grenade_Base_C::ExecuteUbergraph_ITM_AOE_Grenade_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_AOE_Grenade_Base.ITM_AOE_Grenade_Base_C.ExecuteUbergraph_ITM_AOE_Grenade_Base");

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
