// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_GameState_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GameState.BP_GameState_C.GetPlayableCharacters
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class UClass*>          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<class UClass*> ABP_GameState_C::GetPlayableCharacters()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.GetPlayableCharacters");

	struct
	{
		TArray<class UClass*>          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_GameState.BP_GameState_C.GetRandomIntialHero
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  HeroClass                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_GameState_C::GetRandomIntialHero(class UClass** HeroClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.GetRandomIntialHero");

	struct
	{
		class UClass*                  HeroClass;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (HeroClass != nullptr)
		*HeroClass = params.HeroClass;
}


// Function BP_GameState.BP_GameState_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_GameState_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameState.BP_GameState_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_GameState_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameState.BP_GameState_C.StartGame
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_GameState_C::StartGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.StartGame");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameState.BP_GameState_C.HandleSeamlessTravelEvent
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_GameState_C::HandleSeamlessTravelEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.HandleSeamlessTravelEvent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameState.BP_GameState_C.ExecuteUbergraph_BP_GameState
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_GameState_C::ExecuteUbergraph_BP_GameState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.ExecuteUbergraph_BP_GameState");

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
