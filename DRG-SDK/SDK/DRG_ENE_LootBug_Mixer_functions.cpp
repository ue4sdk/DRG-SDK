// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ENE_LootBug_Mixer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ENE_LootBug_Mixer.ENE_LootBug_Mixer_C.OnRep_MixerName
// (FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AENE_LootBug_Mixer_C::OnRep_MixerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_LootBug_Mixer.ENE_LootBug_Mixer_C.OnRep_MixerName");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_LootBug_Mixer.ENE_LootBug_Mixer_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AENE_LootBug_Mixer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_LootBug_Mixer.ENE_LootBug_Mixer_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_LootBug_Mixer.ENE_LootBug_Mixer_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AENE_LootBug_Mixer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_LootBug_Mixer.ENE_LootBug_Mixer_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_LootBug_Mixer.ENE_LootBug_Mixer_C.OnMixerNameChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 mixerName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void AENE_LootBug_Mixer_C::OnMixerNameChanged(const struct FString& mixerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_LootBug_Mixer.ENE_LootBug_Mixer_C.OnMixerNameChanged");

	struct
	{
		struct FString                 mixerName;
	} params;

	params.mixerName = mixerName;

	UObject::ProcessEvent(fn, &params);
}


// Function ENE_LootBug_Mixer.ENE_LootBug_Mixer_C.ExecuteUbergraph_ENE_LootBug_Mixer
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AENE_LootBug_Mixer_C::ExecuteUbergraph_ENE_LootBug_Mixer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_LootBug_Mixer.ENE_LootBug_Mixer_C.ExecuteUbergraph_ENE_LootBug_Mixer");

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
