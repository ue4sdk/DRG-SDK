// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_CSC_Sandblasted_SandStorm_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CSC_Sandblasted_SandStorm.CSC_Sandblasted_SandStorm_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UCSC_Sandblasted_SandStorm_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CSC_Sandblasted_SandStorm.CSC_Sandblasted_SandStorm_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CSC_Sandblasted_SandStorm.CSC_Sandblasted_SandStorm_C.MatchStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCSC_Sandblasted_SandStorm_C::MatchStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function CSC_Sandblasted_SandStorm.CSC_Sandblasted_SandStorm_C.MatchStart");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CSC_Sandblasted_SandStorm.CSC_Sandblasted_SandStorm_C.ExecuteUbergraph_CSC_Sandblasted_SandStorm
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCSC_Sandblasted_SandStorm_C::ExecuteUbergraph_CSC_Sandblasted_SandStorm(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CSC_Sandblasted_SandStorm.CSC_Sandblasted_SandStorm_C.ExecuteUbergraph_CSC_Sandblasted_SandStorm");

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
