// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ABP_LootBug_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_LootBug.ABP_LootBug_C.BlueprintInitializeAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UABP_LootBug_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_LootBug.ABP_LootBug_C.BlueprintInitializeAnimation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ABP_LootBug.ABP_LootBug_C.ExecuteUbergraph_ABP_LootBug
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UABP_LootBug_C::ExecuteUbergraph_ABP_LootBug(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_LootBug.ABP_LootBug_C.ExecuteUbergraph_ABP_LootBug");

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
