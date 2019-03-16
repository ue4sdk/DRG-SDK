// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_LVL_CharacterSelection_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LVL_CharacterSelection.LVL_CharacterSelection_C.StopPlayer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ALVL_CharacterSelection_C::StopPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_CharacterSelection.LVL_CharacterSelection_C.StopPlayer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LVL_CharacterSelection.LVL_CharacterSelection_C.StartPlayer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ALVL_CharacterSelection_C::StartPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_CharacterSelection.LVL_CharacterSelection_C.StartPlayer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LVL_CharacterSelection.LVL_CharacterSelection_C.StarPlay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ALVL_CharacterSelection_C::StarPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_CharacterSelection.LVL_CharacterSelection_C.StarPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LVL_CharacterSelection.LVL_CharacterSelection_C.StopPlay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ALVL_CharacterSelection_C::StopPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_CharacterSelection.LVL_CharacterSelection_C.StopPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LVL_CharacterSelection.LVL_CharacterSelection_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ALVL_CharacterSelection_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_CharacterSelection.LVL_CharacterSelection_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LVL_CharacterSelection.LVL_CharacterSelection_C.ExecuteUbergraph_LVL_CharacterSelection
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALVL_CharacterSelection_C::ExecuteUbergraph_LVL_CharacterSelection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LVL_CharacterSelection.LVL_CharacterSelection_C.ExecuteUbergraph_LVL_CharacterSelection");

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
