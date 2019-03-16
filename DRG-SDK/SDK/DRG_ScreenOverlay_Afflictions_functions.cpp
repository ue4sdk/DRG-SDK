// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ScreenOverlay_Afflictions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UScreenOverlay_Afflictions_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.Begin Overlay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScreenOverlay_Afflictions_C::Begin_Overlay(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.Begin Overlay");

	struct
	{
		struct FLinearColor            Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.End Overlay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScreenOverlay_Afflictions_C::End_Overlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.End Overlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.OnAffliction
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScreenOverlay_Afflictions_C::OnAffliction(class UTexture2D* Texture, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.OnAffliction");

	struct
	{
		class UTexture2D*              Texture;
		struct FLinearColor            Color;
	} params;

	params.Texture = Texture;
	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.ExecuteUbergraph_ScreenOverlay_Afflictions
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScreenOverlay_Afflictions_C::ExecuteUbergraph_ScreenOverlay_Afflictions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.ExecuteUbergraph_ScreenOverlay_Afflictions");

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
