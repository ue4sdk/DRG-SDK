// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_TopBar_PlayerRank_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.FromPlayerState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_TopBar_PlayerRank_C::FromPlayerState(class APlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.FromPlayerState");

	struct
	{
		class APlayerState*            PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UITM_TopBar_PlayerRank_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_TopBar_PlayerRank_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.SetRankAndStars
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Rank                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Stars                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_TopBar_PlayerRank_C::SetRankAndStars(int Rank, int Stars)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.SetRankAndStars");

	struct
	{
		int                            Rank;
		int                            Stars;
	} params;

	params.Rank = Rank;
	params.Stars = Stars;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.OnPlayerProgressChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFSDPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FPlayerProgress         Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UITM_TopBar_PlayerRank_C::OnPlayerProgressChanged(class AFSDPlayerState* PlayerState, const struct FPlayerProgress& Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.OnPlayerProgressChanged");

	struct
	{
		class AFSDPlayerState*         PlayerState;
		struct FPlayerProgress         Progress;
	} params;

	params.PlayerState = PlayerState;
	params.Progress = Progress;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.ExecuteUbergraph_ITM_TopBar_PlayerRank
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_TopBar_PlayerRank_C::ExecuteUbergraph_ITM_TopBar_PlayerRank(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.ExecuteUbergraph_ITM_TopBar_PlayerRank");

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
