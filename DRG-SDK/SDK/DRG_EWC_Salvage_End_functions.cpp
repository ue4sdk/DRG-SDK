// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_EWC_Salvage_End_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EWC_Salvage_End.EWC_Salvage_End_C.StartWave
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UEWC_Salvage_End_C::StartWave()
{
	static auto fn = UObject::FindObject<UFunction>("Function EWC_Salvage_End.EWC_Salvage_End_C.StartWave");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EWC_Salvage_End.EWC_Salvage_End_C.ExecuteUbergraph_EWC_Salvage_End
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEWC_Salvage_End_C::ExecuteUbergraph_EWC_Salvage_End(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EWC_Salvage_End.EWC_Salvage_End_C.ExecuteUbergraph_EWC_Salvage_End");

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
