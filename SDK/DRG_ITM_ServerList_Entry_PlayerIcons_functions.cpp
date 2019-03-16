// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_ServerList_Entry_PlayerIcons_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.Get Player Details
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class UClass*>          Players                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// int                            PlayerIndex                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsClassLocked                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            OutColor                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UTexture2D*              OutIcon                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  OutPlayer                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_ServerList_Entry_PlayerIcons_C::Get_Player_Details(int PlayerIndex, bool IsClassLocked, TArray<class UClass*>* Players, struct FLinearColor* OutColor, class UTexture2D** OutIcon, class UClass** OutPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.Get Player Details");

	struct
	{
		TArray<class UClass*>          Players;
		int                            PlayerIndex;
		bool                           IsClassLocked;
		struct FLinearColor            OutColor;
		class UTexture2D*              OutIcon;
		class UClass*                  OutPlayer;
	} params;

	params.PlayerIndex = PlayerIndex;
	params.IsClassLocked = IsClassLocked;

	UObject::ProcessEvent(fn, &params);

	if (Players != nullptr)
		*Players = params.Players;
	if (OutColor != nullptr)
		*OutColor = params.OutColor;
	if (OutIcon != nullptr)
		*OutIcon = params.OutIcon;
	if (OutPlayer != nullptr)
		*OutPlayer = params.OutPlayer;
}


// Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.GetToolTip
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UTOOLTIP_ServerEntry_Team_C* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UTOOLTIP_ServerEntry_Team_C* UITM_ServerList_Entry_PlayerIcons_C::GetToolTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.GetToolTip");

	struct
	{
		class UTOOLTIP_ServerEntry_Team_C* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.SetIndexBrush
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NumPlayers                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            EntryNum                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UImage*                  Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// TArray<class UClass*>          Players                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// bool                           IsClassLocked                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_ServerList_Entry_PlayerIcons_C::SetIndexBrush(int NumPlayers, int EntryNum, class UImage* Target, bool IsClassLocked, TArray<class UClass*>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.SetIndexBrush");

	struct
	{
		int                            NumPlayers;
		int                            EntryNum;
		class UImage*                  Target;
		TArray<class UClass*>          Players;
		bool                           IsClassLocked;
	} params;

	params.NumPlayers = NumPlayers;
	params.EntryNum = EntryNum;
	params.Target = Target;
	params.IsClassLocked = IsClassLocked;

	UObject::ProcessEvent(fn, &params);

	if (Players != nullptr)
		*Players = params.Players;
}


// Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.SetNumPlayers
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NumPlayers                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class UClass*>          Players                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// bool                           IsClassLocked                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_ServerList_Entry_PlayerIcons_C::SetNumPlayers(int NumPlayers, bool IsClassLocked, TArray<class UClass*>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.SetNumPlayers");

	struct
	{
		int                            NumPlayers;
		TArray<class UClass*>          Players;
		bool                           IsClassLocked;
	} params;

	params.NumPlayers = NumPlayers;
	params.IsClassLocked = IsClassLocked;

	UObject::ProcessEvent(fn, &params);

	if (Players != nullptr)
		*Players = params.Players;
}


// Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UITM_ServerList_Entry_PlayerIcons_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_ServerList_Entry_PlayerIcons_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.ExecuteUbergraph_ITM_ServerList_Entry_PlayerIcons
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_ServerList_Entry_PlayerIcons_C::ExecuteUbergraph_ITM_ServerList_Entry_PlayerIcons(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.ExecuteUbergraph_ITM_ServerList_Entry_PlayerIcons");

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
