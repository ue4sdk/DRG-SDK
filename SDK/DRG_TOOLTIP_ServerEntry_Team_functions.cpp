// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_TOOLTIP_ServerEntry_Team_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TOOLTIP_ServerEntry_Team.TOOLTIP_ServerEntry_Team_C.SetData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_ServerList_Entry_PlayerIcons_C* TeamWidget                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// TArray<class UClass*>          Players                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// bool                           IsClassLocked                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTOOLTIP_ServerEntry_Team_C::SetData(class UITM_ServerList_Entry_PlayerIcons_C* TeamWidget, bool IsClassLocked, TArray<class UClass*>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function TOOLTIP_ServerEntry_Team.TOOLTIP_ServerEntry_Team_C.SetData");

	struct
	{
		class UITM_ServerList_Entry_PlayerIcons_C* TeamWidget;
		TArray<class UClass*>          Players;
		bool                           IsClassLocked;
	} params;

	params.TeamWidget = TeamWidget;
	params.IsClassLocked = IsClassLocked;

	UObject::ProcessEvent(fn, &params);

	if (Players != nullptr)
		*Players = params.Players;
}


// Function TOOLTIP_ServerEntry_Team.TOOLTIP_ServerEntry_Team_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTOOLTIP_ServerEntry_Team_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TOOLTIP_ServerEntry_Team.TOOLTIP_ServerEntry_Team_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function TOOLTIP_ServerEntry_Team.TOOLTIP_ServerEntry_Team_C.ExecuteUbergraph_TOOLTIP_ServerEntry_Team
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTOOLTIP_ServerEntry_Team_C::ExecuteUbergraph_TOOLTIP_ServerEntry_Team(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TOOLTIP_ServerEntry_Team.TOOLTIP_ServerEntry_Team_C.ExecuteUbergraph_TOOLTIP_ServerEntry_Team");

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
