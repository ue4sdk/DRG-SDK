// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Basic_HUD_BracketWindowBig_Single_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_HUD_BracketWindowBig_Single.Basic_HUD_BracketWindowBig_Single_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_HUD_BracketWindowBig_Single_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_HUD_BracketWindowBig_Single.Basic_HUD_BracketWindowBig_Single_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_HUD_BracketWindowBig_Single.Basic_HUD_BracketWindowBig_Single_C.Set Edge Color
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Edge_Tint                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_HUD_BracketWindowBig_Single_C::Set_Edge_Color(const struct FLinearColor& Edge_Tint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_HUD_BracketWindowBig_Single.Basic_HUD_BracketWindowBig_Single_C.Set Edge Color");

	struct
	{
		struct FLinearColor            Edge_Tint;
	} params;

	params.Edge_Tint = Edge_Tint;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_HUD_BracketWindowBig_Single.Basic_HUD_BracketWindowBig_Single_C.Set Background Opacity
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          BG_Opacity                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_HUD_BracketWindowBig_Single_C::Set_Background_Opacity(float BG_Opacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_HUD_BracketWindowBig_Single.Basic_HUD_BracketWindowBig_Single_C.Set Background Opacity");

	struct
	{
		float                          BG_Opacity;
	} params;

	params.BG_Opacity = BG_Opacity;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_HUD_BracketWindowBig_Single.Basic_HUD_BracketWindowBig_Single_C.ExecuteUbergraph_Basic_HUD_BracketWindowBig_Single
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_HUD_BracketWindowBig_Single_C::ExecuteUbergraph_Basic_HUD_BracketWindowBig_Single(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_HUD_BracketWindowBig_Single.Basic_HUD_BracketWindowBig_Single_C.ExecuteUbergraph_Basic_HUD_BracketWindowBig_Single");

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
