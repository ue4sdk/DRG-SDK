// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_CSC_MagmaCaves_EarthQuakes_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CSC_MagmaCaves_EarthQuakes.CSC_MagmaCaves_EarthQuakes_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UCSC_MagmaCaves_EarthQuakes_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CSC_MagmaCaves_EarthQuakes.CSC_MagmaCaves_EarthQuakes_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CSC_MagmaCaves_EarthQuakes.CSC_MagmaCaves_EarthQuakes_C.MatchStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCSC_MagmaCaves_EarthQuakes_C::MatchStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function CSC_MagmaCaves_EarthQuakes.CSC_MagmaCaves_EarthQuakes_C.MatchStart");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CSC_MagmaCaves_EarthQuakes.CSC_MagmaCaves_EarthQuakes_C.ExecuteUbergraph_CSC_MagmaCaves_EarthQuakes
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCSC_MagmaCaves_EarthQuakes_C::ExecuteUbergraph_CSC_MagmaCaves_EarthQuakes(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CSC_MagmaCaves_EarthQuakes.CSC_MagmaCaves_EarthQuakes_C.ExecuteUbergraph_CSC_MagmaCaves_EarthQuakes");

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
