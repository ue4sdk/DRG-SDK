// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ABP_CryoSpray_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_CryoSpray.ABP_CryoSpray_C.ExecuteUbergraph_ABP_CryoSpray
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UABP_CryoSpray_C::ExecuteUbergraph_ABP_CryoSpray(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_CryoSpray.ABP_CryoSpray_C.ExecuteUbergraph_ABP_CryoSpray");

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
