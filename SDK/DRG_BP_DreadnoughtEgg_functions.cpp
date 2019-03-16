// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_DreadnoughtEgg_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DreadnoughtEgg.BP_DreadnoughtEgg_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DreadnoughtEgg_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DreadnoughtEgg.BP_DreadnoughtEgg_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DreadnoughtEgg.BP_DreadnoughtEgg_C.OnEggBroken
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DreadnoughtEgg_C::OnEggBroken()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DreadnoughtEgg.BP_DreadnoughtEgg_C.OnEggBroken");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DreadnoughtEgg.BP_DreadnoughtEgg_C.OnSpawnedEnemyDeath
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UHealthComponentBase*    HealthComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void ABP_DreadnoughtEgg_C::OnSpawnedEnemyDeath(class UHealthComponentBase* HealthComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DreadnoughtEgg.BP_DreadnoughtEgg_C.OnSpawnedEnemyDeath");

	struct
	{
		class UHealthComponentBase*    HealthComponent;
	} params;

	params.HealthComponent = HealthComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DreadnoughtEgg.BP_DreadnoughtEgg_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_DreadnoughtEgg_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DreadnoughtEgg.BP_DreadnoughtEgg_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DreadnoughtEgg.BP_DreadnoughtEgg_C.OnMatchStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DreadnoughtEgg_C::OnMatchStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DreadnoughtEgg.BP_DreadnoughtEgg_C.OnMatchStarted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DreadnoughtEgg.BP_DreadnoughtEgg_C.ExecuteUbergraph_BP_DreadnoughtEgg
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_DreadnoughtEgg_C::ExecuteUbergraph_BP_DreadnoughtEgg(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DreadnoughtEgg.BP_DreadnoughtEgg_C.ExecuteUbergraph_BP_DreadnoughtEgg");

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
