// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_PerkIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_PerkIcon.UI_PerkIcon_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_PerkIcon_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PerkIcon.UI_PerkIcon_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_PerkIcon.UI_PerkIcon_C.Set Perk Asset
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPerkAsset*              PerkAsset                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Rank                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_PerkIcon_C::Set_Perk_Asset(class UPerkAsset* PerkAsset, int Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PerkIcon.UI_PerkIcon_C.Set Perk Asset");

	struct
	{
		class UPerkAsset*              PerkAsset;
		int                            Rank;
	} params;

	params.PerkAsset = PerkAsset;
	params.Rank = Rank;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_PerkIcon.UI_PerkIcon_C.Set Perk Asset Last Claimed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPerkAsset*              PerkAsset                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_PerkIcon_C::Set_Perk_Asset_Last_Claimed(class UPerkAsset* PerkAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PerkIcon.UI_PerkIcon_C.Set Perk Asset Last Claimed");

	struct
	{
		class UPerkAsset*              PerkAsset;
	} params;

	params.PerkAsset = PerkAsset;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_PerkIcon.UI_PerkIcon_C.ExecuteUbergraph_UI_PerkIcon
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_PerkIcon_C::ExecuteUbergraph_UI_PerkIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PerkIcon.UI_PerkIcon_C.ExecuteUbergraph_UI_PerkIcon");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_PerkIcon.UI_PerkIcon_C.NewEventDispatcher_0__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_PerkIcon_C::NewEventDispatcher_0__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PerkIcon.UI_PerkIcon_C.NewEventDispatcher_0__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
