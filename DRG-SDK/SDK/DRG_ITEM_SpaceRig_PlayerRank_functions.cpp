// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITEM_SpaceRig_PlayerRank_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UITEM_SpaceRig_PlayerRank_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.Update
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITEM_SpaceRig_PlayerRank_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.Update");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.OnCreditsChanged_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITEM_SpaceRig_PlayerRank_C::OnCreditsChanged_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.OnCreditsChanged_Event");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.OnPlayerProgressChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFSDPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FPlayerProgress         Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UITEM_SpaceRig_PlayerRank_C::OnPlayerProgressChanged(class AFSDPlayerState* PlayerState, const struct FPlayerProgress& Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.OnPlayerProgressChanged");

	struct
	{
		class AFSDPlayerState*         PlayerState;
		struct FPlayerProgress         Progress;
	} params;

	params.PlayerState = PlayerState;
	params.Progress = Progress;

	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_SpaceRig_PlayerRank_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.ExecuteUbergraph_ITEM_SpaceRig_PlayerRank
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_SpaceRig_PlayerRank_C::ExecuteUbergraph_ITEM_SpaceRig_PlayerRank(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.ExecuteUbergraph_ITEM_SpaceRig_PlayerRank");

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
