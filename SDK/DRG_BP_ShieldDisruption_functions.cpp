// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_ShieldDisruption_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ShieldDisruption.BP_ShieldDisruption_C.StartLogic
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_ShieldDisruption_C::StartLogic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldDisruption.BP_ShieldDisruption_C.StartLogic");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_ShieldDisruption.BP_ShieldDisruption_C.PlayerSpawned
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        PlayerCharacter                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_ShieldDisruption_C::PlayerSpawned(class APlayerCharacter* PlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldDisruption.BP_ShieldDisruption_C.PlayerSpawned");

	struct
	{
		class APlayerCharacter*        PlayerCharacter;
	} params;

	params.PlayerCharacter = PlayerCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ShieldDisruption.BP_ShieldDisruption_C.ExecuteUbergraph_BP_ShieldDisruption
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_ShieldDisruption_C::ExecuteUbergraph_BP_ShieldDisruption(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldDisruption.BP_ShieldDisruption_C.ExecuteUbergraph_BP_ShieldDisruption");

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
