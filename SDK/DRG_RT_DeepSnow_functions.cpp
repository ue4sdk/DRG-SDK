// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_RT_DeepSnow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RT_DeepSnow.RT_DeepSnow_C.Receive_OnActorEntered
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UStatusEffectsComponent* StatusEffects                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void URT_DeepSnow_C::Receive_OnActorEntered(class UStatusEffectsComponent* StatusEffects)
{
	static auto fn = UObject::FindObject<UFunction>("Function RT_DeepSnow.RT_DeepSnow_C.Receive_OnActorEntered");

	struct
	{
		class UStatusEffectsComponent* StatusEffects;
	} params;

	params.StatusEffects = StatusEffects;

	UObject::ProcessEvent(fn, &params);
}


// Function RT_DeepSnow.RT_DeepSnow_C.Receive_OnActorLeft
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UStatusEffectsComponent* StatusEffects                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void URT_DeepSnow_C::Receive_OnActorLeft(class UStatusEffectsComponent* StatusEffects)
{
	static auto fn = UObject::FindObject<UFunction>("Function RT_DeepSnow.RT_DeepSnow_C.Receive_OnActorLeft");

	struct
	{
		class UStatusEffectsComponent* StatusEffects;
	} params;

	params.StatusEffects = StatusEffects;

	UObject::ProcessEvent(fn, &params);
}


// Function RT_DeepSnow.RT_DeepSnow_C.ExecuteUbergraph_RT_DeepSnow
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URT_DeepSnow_C::ExecuteUbergraph_RT_DeepSnow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RT_DeepSnow.RT_DeepSnow_C.ExecuteUbergraph_RT_DeepSnow");

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
