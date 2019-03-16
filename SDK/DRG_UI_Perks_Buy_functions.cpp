// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_Perks_Buy_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Perks_Buy.UI_Perks_Buy_C.CanBuyPerk
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Can_Buy                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perks_Buy_C::CanBuyPerk(bool* Can_Buy)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Buy.UI_Perks_Buy_C.CanBuyPerk");

	struct
	{
		bool                           Can_Buy;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Can_Buy != nullptr)
		*Can_Buy = params.Can_Buy;
}


// Function UI_Perks_Buy.UI_Perks_Buy_C.SetPerk
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPerkAsset*              InPerk                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            InTier                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perks_Buy_C::SetPerk(class UPerkAsset* InPerk, int InTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Buy.UI_Perks_Buy_C.SetPerk");

	struct
	{
		class UPerkAsset*              InPerk;
		int                            InTier;
	} params;

	params.InPerk = InPerk;
	params.InTier = InTier;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perks_Buy.UI_Perks_Buy_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perks_Buy_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Buy.UI_Perks_Buy_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perks_Buy.UI_Perks_Buy_C.BndEvt__ButtonBuy_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UBasic_FlatButton_C*     Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_Perks_Buy_C::BndEvt__ButtonBuy_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UBasic_FlatButton_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Buy.UI_Perks_Buy_C.BndEvt__ButtonBuy_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
		class UBasic_FlatButton_C*     Button;
	} params;

	params.Button = Button;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perks_Buy.UI_Perks_Buy_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_Perks_Buy_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Buy.UI_Perks_Buy_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perks_Buy.UI_Perks_Buy_C.OnPerkPointsChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PerkPoints                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Change                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perks_Buy_C::OnPerkPointsChanged(int PerkPoints, int Change)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Buy.UI_Perks_Buy_C.OnPerkPointsChanged");

	struct
	{
		int                            PerkPoints;
		int                            Change;
	} params;

	params.PerkPoints = PerkPoints;
	params.Change = Change;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perks_Buy.UI_Perks_Buy_C.ExecuteUbergraph_UI_Perks_Buy
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perks_Buy_C::ExecuteUbergraph_UI_Perks_Buy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Buy.UI_Perks_Buy_C.ExecuteUbergraph_UI_Perks_Buy");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perks_Buy.UI_Perks_Buy_C.OnPerkClaimed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_Perks_Buy_C::OnPerkClaimed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Buy.UI_Perks_Buy_C.OnPerkClaimed__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
