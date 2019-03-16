// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_Loadout_UpgradeBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.ShowItemUpgrades
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  InCharacterClass               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// class UClass*                  InItemClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         InPlayerState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Loadout_UpgradeBar_C::ShowItemUpgrades(class UClass* InItemClass, class AFSDPlayerState* InPlayerState, class UClass** InCharacterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.ShowItemUpgrades");

	struct
	{
		class UClass*                  InCharacterClass;
		class UClass*                  InItemClass;
		class AFSDPlayerState*         InPlayerState;
	} params;

	params.InItemClass = InItemClass;
	params.InPlayerState = InPlayerState;

	UObject::ProcessEvent(fn, &params);

	if (InCharacterClass != nullptr)
		*InCharacterClass = params.InCharacterClass;
}


// Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.GetUpgradeFromList
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class UItemUpgrade*>    upgrades                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// class UItemUpgrade*            Output                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Loadout_UpgradeBar_C::GetUpgradeFromList(int Index, TArray<class UItemUpgrade*>* upgrades, class UItemUpgrade** Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.GetUpgradeFromList");

	struct
	{
		int                            Index;
		TArray<class UItemUpgrade*>    upgrades;
		class UItemUpgrade*            Output;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);

	if (upgrades != nullptr)
		*upgrades = params.upgrades;
	if (Output != nullptr)
		*Output = params.Output;
}


// Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UITM_Loadout_UpgradeBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Loadout_UpgradeBar_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.ExecuteUbergraph_ITM_Loadout_UpgradeBar
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Loadout_UpgradeBar_C::ExecuteUbergraph_ITM_Loadout_UpgradeBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.ExecuteUbergraph_ITM_Loadout_UpgradeBar");

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
