// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Basic_HUD_BracketWindowSmall_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_HUD_BracketWindowSmall.Basic_HUD_BracketWindowSmall_C.SetEdgeColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_MenuColors>   Input                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_HUD_BracketWindowSmall_C::SetEdgeColor(TEnumAsByte<ENUM_MenuColors> Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_HUD_BracketWindowSmall.Basic_HUD_BracketWindowSmall_C.SetEdgeColor");

	struct
	{
		TEnumAsByte<ENUM_MenuColors>   Input;
	} params;

	params.Input = Input;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_HUD_BracketWindowSmall.Basic_HUD_BracketWindowSmall_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_HUD_BracketWindowSmall_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_HUD_BracketWindowSmall.Basic_HUD_BracketWindowSmall_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_HUD_BracketWindowSmall.Basic_HUD_BracketWindowSmall_C.ExecuteUbergraph_Basic_HUD_BracketWindowSmall
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_HUD_BracketWindowSmall_C::ExecuteUbergraph_Basic_HUD_BracketWindowSmall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_HUD_BracketWindowSmall.Basic_HUD_BracketWindowSmall_C.ExecuteUbergraph_Basic_HUD_BracketWindowSmall");

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
