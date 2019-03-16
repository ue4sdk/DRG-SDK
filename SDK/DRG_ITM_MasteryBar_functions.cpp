// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_MasteryBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_MasteryBar.ITM_MasteryBar_C.SetMasteryData
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           HasMasteryLevels               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_MasteryBar_C::SetMasteryData(class AFSDPlayerState* Player, class UClass* Item, bool* HasMasteryLevels)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MasteryBar.ITM_MasteryBar_C.SetMasteryData");

	struct
	{
		class AFSDPlayerState*         Player;
		class UClass*                  Item;
		bool                           HasMasteryLevels;
	} params;

	params.Player = Player;
	params.Item = Item;

	UObject::ProcessEvent(fn, &params);

	if (HasMasteryLevels != nullptr)
		*HasMasteryLevels = params.HasMasteryLevels;
}


// Function ITM_MasteryBar.ITM_MasteryBar_C.AddMasteryBox
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Content                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_MasteryBar_C::AddMasteryBox(class UWidget* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MasteryBar.ITM_MasteryBar_C.AddMasteryBox");

	struct
	{
		class UWidget*                 Content;
	} params;

	params.Content = Content;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_MasteryBar.ITM_MasteryBar_C.CreateMasteryLevels
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            maxMastery                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            CurrentMastery                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FMasteryItem>    masteryLevels                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UITM_MasteryBar_C::CreateMasteryLevels(int maxMastery, int CurrentMastery, class UClass* Item, TArray<struct FMasteryItem>* masteryLevels)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MasteryBar.ITM_MasteryBar_C.CreateMasteryLevels");

	struct
	{
		int                            maxMastery;
		int                            CurrentMastery;
		class UClass*                  Item;
		TArray<struct FMasteryItem>    masteryLevels;
	} params;

	params.maxMastery = maxMastery;
	params.CurrentMastery = CurrentMastery;
	params.Item = Item;

	UObject::ProcessEvent(fn, &params);

	if (masteryLevels != nullptr)
		*masteryLevels = params.masteryLevels;
}


// Function ITM_MasteryBar.ITM_MasteryBar_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_MasteryBar_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MasteryBar.ITM_MasteryBar_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_MasteryBar.ITM_MasteryBar_C.SetPlayerState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_MasteryBar_C::SetPlayerState(class AFSDPlayerState* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MasteryBar.ITM_MasteryBar_C.SetPlayerState");

	struct
	{
		class AFSDPlayerState*         Player;
	} params;

	params.Player = Player;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_MasteryBar.ITM_MasteryBar_C.OnItemUpgradeCrafted_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UItemUpgrade*            Upgrade                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_MasteryBar_C::OnItemUpgradeCrafted_Event(class UItemUpgrade* Upgrade)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MasteryBar.ITM_MasteryBar_C.OnItemUpgradeCrafted_Event");

	struct
	{
		class UItemUpgrade*            Upgrade;
	} params;

	params.Upgrade = Upgrade;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_MasteryBar.ITM_MasteryBar_C.ExecuteUbergraph_ITM_MasteryBar
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_MasteryBar_C::ExecuteUbergraph_ITM_MasteryBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MasteryBar.ITM_MasteryBar_C.ExecuteUbergraph_ITM_MasteryBar");

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
