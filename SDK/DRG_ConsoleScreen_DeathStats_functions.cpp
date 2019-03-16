// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ConsoleScreen_DeathStats_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConsoleScreen_DeathStats.ConsoleScreen_DeathStats_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UConsoleScreen_DeathStats_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_DeathStats.ConsoleScreen_DeathStats_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ConsoleScreen_DeathStats.ConsoleScreen_DeathStats_C.Update
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UConsoleScreen_DeathStats_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_DeathStats.ConsoleScreen_DeathStats_C.Update");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ConsoleScreen_DeathStats.ConsoleScreen_DeathStats_C.SetStatsOwner
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFSDPlayerState*         Player_State                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UConsoleScreen_DeathStats_C::SetStatsOwner(class AFSDPlayerState* Player_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_DeathStats.ConsoleScreen_DeathStats_C.SetStatsOwner");

	struct
	{
		class AFSDPlayerState*         Player_State;
	} params;

	params.Player_State = Player_State;

	UObject::ProcessEvent(fn, &params);
}


// Function ConsoleScreen_DeathStats.ConsoleScreen_DeathStats_C.ExecuteUbergraph_ConsoleScreen_DeathStats
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UConsoleScreen_DeathStats_C::ExecuteUbergraph_ConsoleScreen_DeathStats(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_DeathStats.ConsoleScreen_DeathStats_C.ExecuteUbergraph_ConsoleScreen_DeathStats");

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
