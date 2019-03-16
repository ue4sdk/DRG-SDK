// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ConsoleScreen_QuickJoin_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConsoleScreen_QuickJoin.ConsoleScreen_QuickJoin_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UConsoleScreen_QuickJoin_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_QuickJoin.ConsoleScreen_QuickJoin_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ConsoleScreen_QuickJoin.ConsoleScreen_QuickJoin_C.DisableConsole
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UConsoleScreen_QuickJoin_C::DisableConsole()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_QuickJoin.ConsoleScreen_QuickJoin_C.DisableConsole");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ConsoleScreen_QuickJoin.ConsoleScreen_QuickJoin_C.SetConsoleEnabled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enabled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UConsoleScreen_QuickJoin_C::SetConsoleEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_QuickJoin.ConsoleScreen_QuickJoin_C.SetConsoleEnabled");

	struct
	{
		bool                           Enabled;
	} params;

	params.Enabled = Enabled;

	UObject::ProcessEvent(fn, &params);
}


// Function ConsoleScreen_QuickJoin.ConsoleScreen_QuickJoin_C.ExecuteUbergraph_ConsoleScreen_QuickJoin
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UConsoleScreen_QuickJoin_C::ExecuteUbergraph_ConsoleScreen_QuickJoin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_QuickJoin.ConsoleScreen_QuickJoin_C.ExecuteUbergraph_ConsoleScreen_QuickJoin");

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
