// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_CSC_IceCaves_SnowStorm_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CSC_IceCaves_SnowStorm.CSC_IceCaves_SnowStorm_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UCSC_IceCaves_SnowStorm_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CSC_IceCaves_SnowStorm.CSC_IceCaves_SnowStorm_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CSC_IceCaves_SnowStorm.CSC_IceCaves_SnowStorm_C.MatchStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCSC_IceCaves_SnowStorm_C::MatchStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function CSC_IceCaves_SnowStorm.CSC_IceCaves_SnowStorm_C.MatchStart");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CSC_IceCaves_SnowStorm.CSC_IceCaves_SnowStorm_C.ExecuteUbergraph_CSC_IceCaves_SnowStorm
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCSC_IceCaves_SnowStorm_C::ExecuteUbergraph_CSC_IceCaves_SnowStorm(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CSC_IceCaves_SnowStorm.CSC_IceCaves_SnowStorm_C.ExecuteUbergraph_CSC_IceCaves_SnowStorm");

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
