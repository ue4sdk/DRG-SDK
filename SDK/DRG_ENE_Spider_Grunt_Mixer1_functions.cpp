// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ENE_Spider_Grunt_Mixer1_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ENE_Spider_Grunt_Mixer1.ENE_Spider_Grunt_Mixer1_C.OnRep_MixerName
// (FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AENE_Spider_Grunt_Mixer1_C::OnRep_MixerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Spider_Grunt_Mixer1.ENE_Spider_Grunt_Mixer1_C.OnRep_MixerName");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_Spider_Grunt_Mixer1.ENE_Spider_Grunt_Mixer1_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AENE_Spider_Grunt_Mixer1_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Spider_Grunt_Mixer1.ENE_Spider_Grunt_Mixer1_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_Spider_Grunt_Mixer1.ENE_Spider_Grunt_Mixer1_C.OnRagdoll
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AENE_Spider_Grunt_Mixer1_C::OnRagdoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Spider_Grunt_Mixer1.ENE_Spider_Grunt_Mixer1_C.OnRagdoll");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_Spider_Grunt_Mixer1.ENE_Spider_Grunt_Mixer1_C.OnMixerNameChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 mixerName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void AENE_Spider_Grunt_Mixer1_C::OnMixerNameChanged(const struct FString& mixerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Spider_Grunt_Mixer1.ENE_Spider_Grunt_Mixer1_C.OnMixerNameChanged");

	struct
	{
		struct FString                 mixerName;
	} params;

	params.mixerName = mixerName;

	UObject::ProcessEvent(fn, &params);
}


// Function ENE_Spider_Grunt_Mixer1.ENE_Spider_Grunt_Mixer1_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AENE_Spider_Grunt_Mixer1_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Spider_Grunt_Mixer1.ENE_Spider_Grunt_Mixer1_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_Spider_Grunt_Mixer1.ENE_Spider_Grunt_Mixer1_C.ExecuteUbergraph_ENE_Spider_Grunt_Mixer1
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AENE_Spider_Grunt_Mixer1_C::ExecuteUbergraph_ENE_Spider_Grunt_Mixer1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Spider_Grunt_Mixer1.ENE_Spider_Grunt_Mixer1_C.ExecuteUbergraph_ENE_Spider_Grunt_Mixer1");

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
