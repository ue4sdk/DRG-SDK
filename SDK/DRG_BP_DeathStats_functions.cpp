// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_DeathStats_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DeathStats.BP_DeathStats_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DeathStats_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeathStats.BP_DeathStats_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DeathStats.BP_DeathStats_C.Set Stats Owner
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFSDPlayerState*         Player_State                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_DeathStats_C::Set_Stats_Owner(class AFSDPlayerState* Player_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeathStats.BP_DeathStats_C.Set Stats Owner");

	struct
	{
		class AFSDPlayerState*         Player_State;
	} params;

	params.Player_State = Player_State;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DeathStats.BP_DeathStats_C.ExecuteUbergraph_BP_DeathStats
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_DeathStats_C::ExecuteUbergraph_BP_DeathStats(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeathStats.BP_DeathStats_C.ExecuteUbergraph_BP_DeathStats");

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
