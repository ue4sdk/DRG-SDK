// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ABP_SMG_A_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_SMG_A.ABP_SMG_A_C.ExecuteUbergraph_ABP_SMG_A
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UABP_SMG_A_C::ExecuteUbergraph_ABP_SMG_A(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_SMG_A.ABP_SMG_A_C.ExecuteUbergraph_ABP_SMG_A");

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
