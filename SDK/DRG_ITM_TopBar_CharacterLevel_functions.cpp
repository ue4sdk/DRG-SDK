// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_TopBar_CharacterLevel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.FromPlayerState
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_TopBar_CharacterLevel_C::FromPlayerState(class APlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.FromPlayerState");

	struct
	{
		class APlayerState*            PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.SetCharacterLevel
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            CharacterLevel                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_TopBar_CharacterLevel_C::SetCharacterLevel(int CharacterLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.SetCharacterLevel");

	struct
	{
		int                            CharacterLevel;
	} params;

	params.CharacterLevel = CharacterLevel;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_TopBar_CharacterLevel_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UITM_TopBar_CharacterLevel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.OnPlayerCharacterSpawned
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        PlayerCharacter                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_TopBar_CharacterLevel_C::OnPlayerCharacterSpawned(class APlayerCharacter* PlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.OnPlayerCharacterSpawned");

	struct
	{
		class APlayerCharacter*        PlayerCharacter;
	} params;

	params.PlayerCharacter = PlayerCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.OnCharacterStatsChanged_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFSDPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_TopBar_CharacterLevel_C::OnCharacterStatsChanged_Event(class AFSDPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.OnCharacterStatsChanged_Event");

	struct
	{
		class AFSDPlayerState*         PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.ExecuteUbergraph_ITM_TopBar_CharacterLevel
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_TopBar_CharacterLevel_C::ExecuteUbergraph_ITM_TopBar_CharacterLevel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.ExecuteUbergraph_ITM_TopBar_CharacterLevel");

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
