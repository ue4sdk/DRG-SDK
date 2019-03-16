// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_Perks_Column_Unlocks_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C.IsUnlocked
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Unlocked                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perks_Column_Unlocks_C::IsUnlocked(bool* Unlocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C.IsUnlocked");

	struct
	{
		bool                           Unlocked;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Unlocked != nullptr)
		*Unlocked = params.Unlocked;
}


// Function UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perks_Column_Unlocks_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C.Set Arrow Count
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ArrowCount                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            UnlockedCount                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perks_Column_Unlocks_C::Set_Arrow_Count(int ArrowCount, int UnlockedCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C.Set Arrow Count");

	struct
	{
		int                            ArrowCount;
		int                            UnlockedCount;
	} params;

	params.ArrowCount = ArrowCount;
	params.UnlockedCount = UnlockedCount;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C.Set Unlocked Count
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            UnlockedCount                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perks_Column_Unlocks_C::Set_Unlocked_Count(int UnlockedCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C.Set Unlocked Count");

	struct
	{
		int                            UnlockedCount;
	} params;

	params.UnlockedCount = UnlockedCount;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C.ExecuteUbergraph_UI_Perks_Column_Unlocks
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perks_Column_Unlocks_C::ExecuteUbergraph_UI_Perks_Column_Unlocks(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C.ExecuteUbergraph_UI_Perks_Column_Unlocks");

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
