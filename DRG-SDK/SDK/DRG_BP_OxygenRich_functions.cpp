// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_OxygenRich_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_OxygenRich.BP_OxygenRich_C.StartLogic
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_OxygenRich_C::StartLogic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OxygenRich.BP_OxygenRich_C.StartLogic");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_OxygenRich.BP_OxygenRich_C.PlayerSpawned
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        PlayerCharacter                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_OxygenRich_C::PlayerSpawned(class APlayerCharacter* PlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OxygenRich.BP_OxygenRich_C.PlayerSpawned");

	struct
	{
		class APlayerCharacter*        PlayerCharacter;
	} params;

	params.PlayerCharacter = PlayerCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_OxygenRich.BP_OxygenRich_C.ExecuteUbergraph_BP_OxygenRich
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_OxygenRich_C::ExecuteUbergraph_BP_OxygenRich(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OxygenRich.BP_OxygenRich_C.ExecuteUbergraph_BP_OxygenRich");

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
