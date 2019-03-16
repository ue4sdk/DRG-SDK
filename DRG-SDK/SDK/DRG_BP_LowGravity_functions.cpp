// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_LowGravity_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LowGravity.BP_LowGravity_C.StartLogic
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_LowGravity_C::StartLogic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LowGravity.BP_LowGravity_C.StartLogic");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LowGravity.BP_LowGravity_C.ExecuteUbergraph_BP_LowGravity
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_LowGravity_C::ExecuteUbergraph_BP_LowGravity(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LowGravity.BP_LowGravity_C.ExecuteUbergraph_BP_LowGravity");

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
