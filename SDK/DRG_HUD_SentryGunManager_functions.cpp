// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_SentryGunManager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_SentryGunManager.HUD_SentryGunManager_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_SentryGunManager_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunManager.HUD_SentryGunManager_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SentryGunManager.HUD_SentryGunManager_C.AddSentry
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_SentryGunManager_C::AddSentry(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunManager.HUD_SentryGunManager_C.AddSentry");

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SentryGunManager.HUD_SentryGunManager_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_SentryGunManager_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunManager.HUD_SentryGunManager_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnItemsLoaded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_SentryGunManager_C::OnItemsLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnItemsLoaded");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnActiveItemsChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ARecallableSentryGunItem* Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_SentryGunManager_C::OnActiveItemsChanged(class ARecallableSentryGunItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnActiveItemsChanged");

	struct
	{
		class ARecallableSentryGunItem* Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnItemCurrentAmountChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_SentryGunManager_C::OnItemCurrentAmountChanged(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnItemCurrentAmountChanged");

	struct
	{
		int                            Amount;
	} params;

	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SentryGunManager.HUD_SentryGunManager_C.ExecuteUbergraph_HUD_SentryGunManager
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_SentryGunManager_C::ExecuteUbergraph_HUD_SentryGunManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunManager.HUD_SentryGunManager_C.ExecuteUbergraph_HUD_SentryGunManager");

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
