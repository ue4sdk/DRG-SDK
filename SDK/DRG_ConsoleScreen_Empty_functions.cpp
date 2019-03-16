// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ConsoleScreen_Empty_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConsoleScreen_Empty.ConsoleScreen_Empty_C.SetText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UConsoleScreen_Empty_C::SetText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Empty.ConsoleScreen_Empty_C.SetText");

	struct
	{
		struct FText                   InText;
	} params;

	params.InText = InText;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
