// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_MisSel_Timer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_MisSel_Timer.ITM_MisSel_Timer_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UITM_MisSel_Timer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Timer.ITM_MisSel_Timer_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_MisSel_Timer.ITM_MisSel_Timer_C.UpdateTime
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_MisSel_Timer_C::UpdateTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Timer.ITM_MisSel_Timer_C.UpdateTime");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_MisSel_Timer.ITM_MisSel_Timer_C.ExecuteUbergraph_ITM_MisSel_Timer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_MisSel_Timer_C::ExecuteUbergraph_ITM_MisSel_Timer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Timer.ITM_MisSel_Timer_C.ExecuteUbergraph_ITM_MisSel_Timer");

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
