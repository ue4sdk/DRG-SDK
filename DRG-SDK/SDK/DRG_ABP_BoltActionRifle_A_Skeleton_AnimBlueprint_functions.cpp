// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ABP_BoltActionRifle_A_Skeleton_AnimBlueprint_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_BoltActionRifle_A_Skeleton_AnimBlueprint.ABP_BoltActionRifle_A_Skeleton_AnimBlueprint_C.ExecuteUbergraph_ABP_BoltActionRifle_A_Skeleton_AnimBlueprint
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UABP_BoltActionRifle_A_Skeleton_AnimBlueprint_C::ExecuteUbergraph_ABP_BoltActionRifle_A_Skeleton_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_BoltActionRifle_A_Skeleton_AnimBlueprint.ABP_BoltActionRifle_A_Skeleton_AnimBlueprint_C.ExecuteUbergraph_ABP_BoltActionRifle_A_Skeleton_AnimBlueprint");

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
