// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_SpiderEgg_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SpiderEgg_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_SpiderEgg_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void ABP_SpiderEgg_Base_C::BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.OnEggBroken
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SpiderEgg_Base_C::OnEggBroken()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.OnEggBroken");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.OnTerrainPointRemoved
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SpiderEgg_Base_C::OnTerrainPointRemoved()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.OnTerrainPointRemoved");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.OnPlayerProximityChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           enteredTrigger                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SpiderEgg_Base_C::OnPlayerProximityChanged(class APlayerCharacter* Player, bool enteredTrigger)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.OnPlayerProximityChanged");

	struct
	{
		class APlayerCharacter*        Player;
		bool                           enteredTrigger;
	} params;

	params.Player = Player;
	params.enteredTrigger = enteredTrigger;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.CrackEgg
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SpiderEgg_Base_C::CrackEgg()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.CrackEgg");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UHealthComponentBase*    HealthComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void ABP_SpiderEgg_Base_C::BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature");

	struct
	{
		class UHealthComponentBase*    HealthComponent;
	} params;

	params.HealthComponent = HealthComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.ChainReaction
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SpiderEgg_Base_C::ChainReaction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.ChainReaction");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.OnEnemySpawned
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   enemy                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SpiderEgg_Base_C::OnEnemySpawned(class APawn* enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.OnEnemySpawned");

	struct
	{
		class APawn*                   enemy;
	} params;

	params.enemy = enemy;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.OnSpawnedEnemyDeath
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UHealthComponentBase*    HealthComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void ABP_SpiderEgg_Base_C::OnSpawnedEnemyDeath(class UHealthComponentBase* HealthComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.OnSpawnedEnemyDeath");

	struct
	{
		class UHealthComponentBase*    HealthComponent;
	} params;

	params.HealthComponent = HealthComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.ExecuteUbergraph_BP_SpiderEgg_Base
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SpiderEgg_Base_C::ExecuteUbergraph_BP_SpiderEgg_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.ExecuteUbergraph_BP_SpiderEgg_Base");

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
