// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_EWC_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EWC_Base.EWC_Base_C.PlayWaveMusic
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEWC_Base_C::PlayWaveMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function EWC_Base.EWC_Base_C.PlayWaveMusic");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EWC_Base.EWC_Base_C.PlayEndWaveMusic
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEWC_Base_C::PlayEndWaveMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function EWC_Base.EWC_Base_C.PlayEndWaveMusic");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EWC_Base.EWC_Base_C.StopWaveMusic
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEWC_Base_C::StopWaveMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function EWC_Base.EWC_Base_C.StopWaveMusic");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EWC_Base.EWC_Base_C.ExecuteUbergraph_EWC_Base
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEWC_Base_C::ExecuteUbergraph_EWC_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EWC_Base.EWC_Base_C.ExecuteUbergraph_EWC_Base");

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
