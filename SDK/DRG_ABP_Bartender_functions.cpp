// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ABP_Bartender_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Bartender.ABP_Bartender_C.ExecuteUbergraph_ABP_Bartender
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UABP_Bartender_C::ExecuteUbergraph_ABP_Bartender(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Bartender.ABP_Bartender_C.ExecuteUbergraph_ABP_Bartender");

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
