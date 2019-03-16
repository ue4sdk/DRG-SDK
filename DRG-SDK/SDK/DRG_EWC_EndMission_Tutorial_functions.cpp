// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_EWC_EndMission_Tutorial_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EWC_EndMission_Tutorial.EWC_EndMission_Tutorial_C.StartWave
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UEWC_EndMission_Tutorial_C::StartWave()
{
	static auto fn = UObject::FindObject<UFunction>("Function EWC_EndMission_Tutorial.EWC_EndMission_Tutorial_C.StartWave");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EWC_EndMission_Tutorial.EWC_EndMission_Tutorial_C.ExecuteUbergraph_EWC_EndMission_Tutorial
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEWC_EndMission_Tutorial_C::ExecuteUbergraph_EWC_EndMission_Tutorial(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EWC_EndMission_Tutorial.EWC_EndMission_Tutorial_C.ExecuteUbergraph_EWC_EndMission_Tutorial");

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
