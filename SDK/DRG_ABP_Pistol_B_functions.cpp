// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ABP_Pistol_B_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Pistol_B.ABP_Pistol_B_C.ExecuteUbergraph_ABP_Pistol_B
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UABP_Pistol_B_C::ExecuteUbergraph_ABP_Pistol_B(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Pistol_B.ABP_Pistol_B_C.ExecuteUbergraph_ABP_Pistol_B");

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
