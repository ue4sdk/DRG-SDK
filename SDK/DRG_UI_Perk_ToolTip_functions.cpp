// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_Perk_ToolTip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perk_ToolTip_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.OnPerkClaimed_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPerkAsset*              Perk                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ClaimedTier                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perk_ToolTip_C::OnPerkClaimed_Event(class UPerkAsset* Perk, int ClaimedTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.OnPerkClaimed_Event");

	struct
	{
		class UPerkAsset*              Perk;
		int                            ClaimedTier;
	} params;

	params.Perk = Perk;
	params.ClaimedTier = ClaimedTier;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.SetPerkAsset
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPerkAsset*              PerkAsset                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Rank                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perk_ToolTip_C::SetPerkAsset(class UPerkAsset* PerkAsset, int Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.SetPerkAsset");

	struct
	{
		class UPerkAsset*              PerkAsset;
		int                            Rank;
	} params;

	params.PerkAsset = PerkAsset;
	params.Rank = Rank;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_Perk_ToolTip_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.FancyDelayedIntro
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_Perk_ToolTip_C::FancyDelayedIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.FancyDelayedIntro");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.FadeInIntro
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_Perk_ToolTip_C::FadeInIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.FadeInIntro");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.ExecuteUbergraph_UI_Perk_ToolTip
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perk_ToolTip_C::ExecuteUbergraph_UI_Perk_ToolTip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.ExecuteUbergraph_UI_Perk_ToolTip");

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
