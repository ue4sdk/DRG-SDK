// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ConsoleScreen_MissionTerminal_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConsoleScreen_MissionTerminal.ConsoleScreen_MissionTerminal_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UConsoleScreen_MissionTerminal_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_MissionTerminal.ConsoleScreen_MissionTerminal_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ConsoleScreen_MissionTerminal.ConsoleScreen_MissionTerminal_C.ExecuteUbergraph_ConsoleScreen_MissionTerminal
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UConsoleScreen_MissionTerminal_C::ExecuteUbergraph_ConsoleScreen_MissionTerminal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_MissionTerminal.ConsoleScreen_MissionTerminal_C.ExecuteUbergraph_ConsoleScreen_MissionTerminal");

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
