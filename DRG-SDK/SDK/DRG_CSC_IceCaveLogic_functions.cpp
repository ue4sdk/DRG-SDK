// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_CSC_IceCaveLogic_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CSC_IceCaveLogic.CSC_IceCaveLogic_C.spawnParticles
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCSC_IceCaveLogic_C::spawnParticles(class APlayerCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function CSC_IceCaveLogic.CSC_IceCaveLogic_C.spawnParticles");

	struct
	{
		class APlayerCharacter*        Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function CSC_IceCaveLogic.CSC_IceCaveLogic_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UCSC_IceCaveLogic_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CSC_IceCaveLogic.CSC_IceCaveLogic_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CSC_IceCaveLogic.CSC_IceCaveLogic_C.OnPlayerCharacterRegistered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        PlayerCharacter                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCSC_IceCaveLogic_C::OnPlayerCharacterRegistered(class APlayerCharacter* PlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function CSC_IceCaveLogic.CSC_IceCaveLogic_C.OnPlayerCharacterRegistered");

	struct
	{
		class APlayerCharacter*        PlayerCharacter;
	} params;

	params.PlayerCharacter = PlayerCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function CSC_IceCaveLogic.CSC_IceCaveLogic_C.ExecuteUbergraph_CSC_IceCaveLogic
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCSC_IceCaveLogic_C::ExecuteUbergraph_CSC_IceCaveLogic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CSC_IceCaveLogic.CSC_IceCaveLogic_C.ExecuteUbergraph_CSC_IceCaveLogic");

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
