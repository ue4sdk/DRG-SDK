// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ConsoleScreen_Crafting_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConsoleScreen_Crafting.ConsoleScreen_Crafting_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UConsoleScreen_Crafting_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Crafting.ConsoleScreen_Crafting_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ConsoleScreen_Crafting.ConsoleScreen_Crafting_C.OnAvailableCraftingItems
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<TScriptInterface<class UCraftable>> NewItems                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UConsoleScreen_Crafting_C::OnAvailableCraftingItems(TArray<TScriptInterface<class UCraftable>>* NewItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Crafting.ConsoleScreen_Crafting_C.OnAvailableCraftingItems");

	struct
	{
		TArray<TScriptInterface<class UCraftable>> NewItems;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (NewItems != nullptr)
		*NewItems = params.NewItems;
}


// Function ConsoleScreen_Crafting.ConsoleScreen_Crafting_C.ExecuteUbergraph_ConsoleScreen_Crafting
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UConsoleScreen_Crafting_C::ExecuteUbergraph_ConsoleScreen_Crafting(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Crafting.ConsoleScreen_Crafting_C.ExecuteUbergraph_ConsoleScreen_Crafting");

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
