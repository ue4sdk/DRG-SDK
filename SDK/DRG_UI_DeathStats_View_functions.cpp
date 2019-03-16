// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_DeathStats_View_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_DeathStats_View.UI_DeathStats_View_C.SortStats
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UMissionStat*>    InStats                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<class UTexture2D*>      Categories                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// TArray<class UMissionStat*>    Sorted_Stats                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UUI_DeathStats_View_C::SortStats(TArray<class UMissionStat*>* InStats, TArray<class UTexture2D*>* Categories, TArray<class UMissionStat*>* Sorted_Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathStats_View.UI_DeathStats_View_C.SortStats");

	struct
	{
		TArray<class UMissionStat*>    InStats;
		TArray<class UTexture2D*>      Categories;
		TArray<class UMissionStat*>    Sorted_Stats;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (InStats != nullptr)
		*InStats = params.InStats;
	if (Categories != nullptr)
		*Categories = params.Categories;
	if (Sorted_Stats != nullptr)
		*Sorted_Stats = params.Sorted_Stats;
}


// Function UI_DeathStats_View.UI_DeathStats_View_C.GetMissionStats
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class UMissionStat*>    Assets                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UUI_DeathStats_View_C::GetMissionStats(TArray<class UMissionStat*>* Assets)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathStats_View.UI_DeathStats_View_C.GetMissionStats");

	struct
	{
		TArray<class UMissionStat*>    Assets;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Assets != nullptr)
		*Assets = params.Assets;
}


// Function UI_DeathStats_View.UI_DeathStats_View_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_DeathStats_View_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathStats_View.UI_DeathStats_View_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_DeathStats_View.UI_DeathStats_View_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_DeathStats_View_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathStats_View.UI_DeathStats_View_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_DeathStats_View.UI_DeathStats_View_C.Store Mode
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_DeathStats_View_C::Store_Mode(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathStats_View.UI_DeathStats_View_C.Store Mode");

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_DeathStats_View.UI_DeathStats_View_C.Set Selected Item
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_InfirmaryStats_Item_C* SelectedLine                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_DeathStats_View_C::Set_Selected_Item(class UUI_InfirmaryStats_Item_C* SelectedLine)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathStats_View.UI_DeathStats_View_C.Set Selected Item");

	struct
	{
		class UUI_InfirmaryStats_Item_C* SelectedLine;
	} params;

	params.SelectedLine = SelectedLine;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_DeathStats_View.UI_DeathStats_View_C.SetStatsOwner
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFSDPlayerState*         Player_State                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_DeathStats_View_C::SetStatsOwner(class AFSDPlayerState* Player_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathStats_View.UI_DeathStats_View_C.SetStatsOwner");

	struct
	{
		class AFSDPlayerState*         Player_State;
	} params;

	params.Player_State = Player_State;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_DeathStats_View.UI_DeathStats_View_C.ChangeName
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 NewName                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UUI_DeathStats_View_C::ChangeName(const struct FString& NewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathStats_View.UI_DeathStats_View_C.ChangeName");

	struct
	{
		struct FString                 NewName;
	} params;

	params.NewName = NewName;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_DeathStats_View.UI_DeathStats_View_C.Rebuild
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_DeathStats_View_C::Rebuild()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathStats_View.UI_DeathStats_View_C.Rebuild");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_DeathStats_View.UI_DeathStats_View_C.ExecuteUbergraph_UI_DeathStats_View
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_DeathStats_View_C::ExecuteUbergraph_UI_DeathStats_View(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathStats_View.UI_DeathStats_View_C.ExecuteUbergraph_UI_DeathStats_View");

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
