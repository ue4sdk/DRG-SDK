// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_CharacterIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_CharacterIcon.ITM_CharacterIcon_C.FromPlayerState
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_CharacterIcon_C::FromPlayerState(class APlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterIcon.ITM_CharacterIcon_C.FromPlayerState");

	struct
	{
		class APlayerState*            PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetHeroData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Icon                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          XP_Progress                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Times_Retired                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsHost                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_CharacterIcon_C::SetHeroData(class UTexture2D* Icon, float XP_Progress, int Times_Retired, bool IsHost)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetHeroData");

	struct
	{
		class UTexture2D*              Icon;
		float                          XP_Progress;
		int                            Times_Retired;
		bool                           IsHost;
	} params;

	params.Icon = Icon;
	params.XP_Progress = XP_Progress;
	params.Times_Retired = Times_Retired;
	params.IsHost = IsHost;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_CharacterIcon.ITM_CharacterIcon_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_CharacterIcon_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterIcon.ITM_CharacterIcon_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_CharacterIcon.ITM_CharacterIcon_C.ExecuteUbergraph_ITM_CharacterIcon
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_CharacterIcon_C::ExecuteUbergraph_ITM_CharacterIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterIcon.ITM_CharacterIcon_C.ExecuteUbergraph_ITM_CharacterIcon");

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
