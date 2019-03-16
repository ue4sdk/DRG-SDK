// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WidgetCabinPlayerName_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WidgetCabinPlayerName.WidgetCabinPlayerName_C.SetColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWidgetCabinPlayerName_C::SetColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetCabinPlayerName.WidgetCabinPlayerName_C.SetColor");

	struct
	{
		struct FLinearColor            Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function WidgetCabinPlayerName.WidgetCabinPlayerName_C.SetPlayerName
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   NewName                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWidgetCabinPlayerName_C::SetPlayerName(const struct FText& NewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetCabinPlayerName.WidgetCabinPlayerName_C.SetPlayerName");

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
