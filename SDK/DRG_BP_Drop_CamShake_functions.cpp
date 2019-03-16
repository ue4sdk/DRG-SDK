// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_Drop_CamShake_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Drop_CamShake.BP_Drop_CamShake_C.SetStandingDown
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsStandingDown                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Drop_CamShake_C::SetStandingDown(bool IsStandingDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Drop_CamShake.BP_Drop_CamShake_C.SetStandingDown");

	struct
	{
		bool                           IsStandingDown;
	} params;

	params.IsStandingDown = IsStandingDown;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Drop_CamShake.BP_Drop_CamShake_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Drop_CamShake_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Drop_CamShake.BP_Drop_CamShake_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Drop_CamShake.BP_Drop_CamShake_C.TriggerShakeSequence
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Drop_CamShake_C::TriggerShakeSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Drop_CamShake.BP_Drop_CamShake_C.TriggerShakeSequence");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Drop_CamShake.BP_Drop_CamShake_C.ExecuteUbergraph_BP_Drop_CamShake
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Drop_CamShake_C::ExecuteUbergraph_BP_Drop_CamShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Drop_CamShake.BP_Drop_CamShake_C.ExecuteUbergraph_BP_Drop_CamShake");

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
