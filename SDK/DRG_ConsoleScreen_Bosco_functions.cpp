// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ConsoleScreen_Bosco_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConsoleScreen_Bosco.ConsoleScreen_Bosco_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UConsoleScreen_Bosco_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Bosco.ConsoleScreen_Bosco_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ConsoleScreen_Bosco.ConsoleScreen_Bosco_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UConsoleScreen_Bosco_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Bosco.ConsoleScreen_Bosco_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ConsoleScreen_Bosco.ConsoleScreen_Bosco_C.ExecuteUbergraph_ConsoleScreen_Bosco
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UConsoleScreen_Bosco_C::ExecuteUbergraph_ConsoleScreen_Bosco(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Bosco.ConsoleScreen_Bosco_C.ExecuteUbergraph_ConsoleScreen_Bosco");

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
