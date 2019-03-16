// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_GM_Mining_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GM_Mining.GM_Mining_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AGM_Mining_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Mining.GM_Mining_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GM_Mining.GM_Mining_C.BndEvt__ObjectivesManager_K2Node_ComponentBoundEvent_0_DelegateEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void AGM_Mining_C::BndEvt__ObjectivesManager_K2Node_ComponentBoundEvent_0_DelegateEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Mining.GM_Mining_C.BndEvt__ObjectivesManager_K2Node_ComponentBoundEvent_0_DelegateEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GM_Mining.GM_Mining_C.DonkeyButtonPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AGM_Mining_C::DonkeyButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Mining.GM_Mining_C.DonkeyButtonPressed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GM_Mining.GM_Mining_C.ExecuteUbergraph_GM_Mining
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AGM_Mining_C::ExecuteUbergraph_GM_Mining(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Mining.GM_Mining_C.ExecuteUbergraph_GM_Mining");

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
