// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_Perks_Column_Unlocks_Arrow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Perks_Column_Unlocks_Arrow.UI_Perks_Column_Unlocks_Arrow_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perks_Column_Unlocks_Arrow_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Unlocks_Arrow.UI_Perks_Column_Unlocks_Arrow_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perks_Column_Unlocks_Arrow.UI_Perks_Column_Unlocks_Arrow_C.SetIsUnlocked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsUnlocked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perks_Column_Unlocks_Arrow_C::SetIsUnlocked(bool IsUnlocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Unlocks_Arrow.UI_Perks_Column_Unlocks_Arrow_C.SetIsUnlocked");

	struct
	{
		bool                           IsUnlocked;
	} params;

	params.IsUnlocked = IsUnlocked;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perks_Column_Unlocks_Arrow.UI_Perks_Column_Unlocks_Arrow_C.ExecuteUbergraph_UI_Perks_Column_Unlocks_Arrow
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perks_Column_Unlocks_Arrow_C::ExecuteUbergraph_UI_Perks_Column_Unlocks_Arrow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Unlocks_Arrow.UI_Perks_Column_Unlocks_Arrow_C.ExecuteUbergraph_UI_Perks_Column_Unlocks_Arrow");

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
