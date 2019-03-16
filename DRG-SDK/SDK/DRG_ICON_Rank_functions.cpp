// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ICON_Rank_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ICON_Rank.ICON_Rank_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UICON_Rank_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_Rank.ICON_Rank_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ICON_Rank.ICON_Rank_C.Update
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFSDPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UICON_Rank_C::Update(class AFSDPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_Rank.ICON_Rank_C.Update");

	struct
	{
		class AFSDPlayerState*         PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function ICON_Rank.ICON_Rank_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UICON_Rank_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_Rank.ICON_Rank_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ICON_Rank.ICON_Rank_C.SetRankAndStars
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Rank                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Stars                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UICON_Rank_C::SetRankAndStars(int Rank, int Stars)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_Rank.ICON_Rank_C.SetRankAndStars");

	struct
	{
		int                            Rank;
		int                            Stars;
	} params;

	params.Rank = Rank;
	params.Stars = Stars;

	UObject::ProcessEvent(fn, &params);
}


// Function ICON_Rank.ICON_Rank_C.ExecuteUbergraph_ICON_Rank
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UICON_Rank_C::ExecuteUbergraph_ICON_Rank(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_Rank.ICON_Rank_C.ExecuteUbergraph_ICON_Rank");

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
