// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_EWC_SW_Macteras_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EWC_SW_Macteras.EWC_SW_Macteras_C.StartWave
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UEWC_SW_Macteras_C::StartWave()
{
	static auto fn = UObject::FindObject<UFunction>("Function EWC_SW_Macteras.EWC_SW_Macteras_C.StartWave");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EWC_SW_Macteras.EWC_SW_Macteras_C.StopConstantPreassure
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEWC_SW_Macteras_C::StopConstantPreassure()
{
	static auto fn = UObject::FindObject<UFunction>("Function EWC_SW_Macteras.EWC_SW_Macteras_C.StopConstantPreassure");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EWC_SW_Macteras.EWC_SW_Macteras_C.ExecuteUbergraph_EWC_SW_Macteras
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEWC_SW_Macteras_C::ExecuteUbergraph_EWC_SW_Macteras(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EWC_SW_Macteras.EWC_SW_Macteras_C.ExecuteUbergraph_EWC_SW_Macteras");

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
