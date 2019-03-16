// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ConsoleScreen_BGtemplate_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.SetText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UConsoleScreen_BGtemplate_C::SetText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.SetText");

	struct
	{
		struct FText                   InText;
	} params;

	params.InText = InText;

	UObject::ProcessEvent(fn, &params);
}


// Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UConsoleScreen_BGtemplate_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UConsoleScreen_BGtemplate_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.ExecuteUbergraph_ConsoleScreen_BGtemplate
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UConsoleScreen_BGtemplate_C::ExecuteUbergraph_ConsoleScreen_BGtemplate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.ExecuteUbergraph_ConsoleScreen_BGtemplate");

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
