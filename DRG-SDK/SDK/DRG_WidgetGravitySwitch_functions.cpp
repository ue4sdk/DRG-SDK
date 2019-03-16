// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WidgetGravitySwitch_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WidgetGravitySwitch.WidgetGravitySwitch_C.SetColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWidgetGravitySwitch_C::SetColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetGravitySwitch.WidgetGravitySwitch_C.SetColor");

	struct
	{
		struct FLinearColor            Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function WidgetGravitySwitch.WidgetGravitySwitch_C.SetPlayerName
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   NewName                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWidgetGravitySwitch_C::SetPlayerName(const struct FText& NewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetGravitySwitch.WidgetGravitySwitch_C.SetPlayerName");

	struct
	{
		struct FText                   NewName;
	} params;

	params.NewName = NewName;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
