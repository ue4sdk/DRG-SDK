// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_OnScreenIndicator_UsableItem_WithDescription_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.SetTitle
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOnScreenIndicator_UsableItem_WithDescription_C::SetTitle(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.SetTitle");

	struct
	{
		struct FText                   InText;
	} params;

	params.InText = InText;

	UObject::ProcessEvent(fn, &params);
}


// Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.SetAction
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   NewText                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   OverrideControllerText         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOnScreenIndicator_UsableItem_WithDescription_C::SetAction(const struct FText& NewText, const struct FText& OverrideControllerText)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.SetAction");

	struct
	{
		struct FText                   NewText;
		struct FText                   OverrideControllerText;
	} params;

	params.NewText = NewText;
	params.OverrideControllerText = OverrideControllerText;

	UObject::ProcessEvent(fn, &params);
}


// Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.OnDepositingBegin
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UResourceBank*           ResourceBank                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UOnScreenIndicator_UsableItem_WithDescription_C::OnDepositingBegin(class UResourceBank* ResourceBank)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.OnDepositingBegin");

	struct
	{
		class UResourceBank*           ResourceBank;
	} params;

	params.ResourceBank = ResourceBank;

	UObject::ProcessEvent(fn, &params);
}


// Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOnScreenIndicator_UsableItem_WithDescription_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOnScreenIndicator_UsableItem_WithDescription_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.On Initialize
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnScreenIndicator_UsableItem_WithDescription_C::On_Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.On Initialize");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOnScreenIndicator_UsableItem_WithDescription_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.ExecuteUbergraph_OnScreenIndicator_UsableItem_WithDescription
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOnScreenIndicator_UsableItem_WithDescription_C::ExecuteUbergraph_OnScreenIndicator_UsableItem_WithDescription(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.ExecuteUbergraph_OnScreenIndicator_UsableItem_WithDescription");

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
