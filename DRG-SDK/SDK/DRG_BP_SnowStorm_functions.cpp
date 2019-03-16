// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_SnowStorm_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SnowStorm.BP_SnowStorm_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SnowStorm_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SnowStorm.BP_SnowStorm_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SnowStorm.BP_SnowStorm_C.StormStart__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_SnowStorm_C::StormStart__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SnowStorm.BP_SnowStorm_C.StormStart__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SnowStorm.BP_SnowStorm_C.StormStart__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_SnowStorm_C::StormStart__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SnowStorm.BP_SnowStorm_C.StormStart__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SnowStorm.BP_SnowStorm_C.StormEnd__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_SnowStorm_C::StormEnd__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SnowStorm.BP_SnowStorm_C.StormEnd__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SnowStorm.BP_SnowStorm_C.StormEnd__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_SnowStorm_C::StormEnd__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SnowStorm.BP_SnowStorm_C.StormEnd__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SnowStorm.BP_SnowStorm_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_SnowStorm_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SnowStorm.BP_SnowStorm_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SnowStorm.BP_SnowStorm_C.OnPlayerCharacterRegistered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        PlayerCharacter                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SnowStorm_C::OnPlayerCharacterRegistered(class APlayerCharacter* PlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SnowStorm.BP_SnowStorm_C.OnPlayerCharacterRegistered");

	struct
	{
		class APlayerCharacter*        PlayerCharacter;
	} params;

	params.PlayerCharacter = PlayerCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SnowStorm.BP_SnowStorm_C.StopListeningForPlayers
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SnowStorm_C::StopListeningForPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SnowStorm.BP_SnowStorm_C.StopListeningForPlayers");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SnowStorm.BP_SnowStorm_C.ExecuteUbergraph_BP_SnowStorm
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SnowStorm_C::ExecuteUbergraph_BP_SnowStorm(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SnowStorm.BP_SnowStorm_C.ExecuteUbergraph_BP_SnowStorm");

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
