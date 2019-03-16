// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_DrinksBox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DrinksBox.BP_DrinksBox_C.OnRep_DrinkableActor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DrinksBox_C::OnRep_DrinkableActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DrinksBox.BP_DrinksBox_C.OnRep_DrinkableActor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DrinksBox.BP_DrinksBox_C.IsAvailable
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsAvailable                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_DrinksBox_C::IsAvailable(bool* IsAvailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DrinksBox.BP_DrinksBox_C.IsAvailable");

	struct
	{
		bool                           IsAvailable;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsAvailable != nullptr)
		*IsAvailable = params.IsAvailable;
}


// Function BP_DrinksBox.BP_DrinksBox_C.OnRep_State
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DrinksBox_C::OnRep_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DrinksBox.BP_DrinksBox_C.OnRep_State");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DrinksBox.BP_DrinksBox_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DrinksBox_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DrinksBox.BP_DrinksBox_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DrinksBox.BP_DrinksBox_C.Spawn Drink
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDrinkableDataAsset*     Drinkable                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_DrinksBox_C::Spawn_Drink(class UDrinkableDataAsset* Drinkable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DrinksBox.BP_DrinksBox_C.Spawn Drink");

	struct
	{
		class UDrinkableDataAsset*     Drinkable;
	} params;

	params.Drinkable = Drinkable;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DrinksBox.BP_DrinksBox_C.OnDrinkableDestroyed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_DrinksBox_C::OnDrinkableDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DrinksBox.BP_DrinksBox_C.OnDrinkableDestroyed");

	struct
	{
		class AActor*                  DestroyedActor;
	} params;

	params.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DrinksBox.BP_DrinksBox_C.Fill DrinkableActor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DrinksBox_C::Fill_DrinkableActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DrinksBox.BP_DrinksBox_C.Fill DrinkableActor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DrinksBox.BP_DrinksBox_C.ExecuteUbergraph_BP_DrinksBox
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_DrinksBox_C::ExecuteUbergraph_BP_DrinksBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DrinksBox.BP_DrinksBox_C.ExecuteUbergraph_BP_DrinksBox");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DrinksBox.BP_DrinksBox_C.OnDrinkReady__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_DrinksBox_C*         DrinkBox                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_DrinksBox_C::OnDrinkReady__DelegateSignature(class ABP_DrinksBox_C* DrinkBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DrinksBox.BP_DrinksBox_C.OnDrinkReady__DelegateSignature");

	struct
	{
		class ABP_DrinksBox_C*         DrinkBox;
	} params;

	params.DrinkBox = DrinkBox;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DrinksBox.BP_DrinksBox_C.OnAvailableForNewDrink__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_DrinksBox_C*         DrinkBox                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_DrinksBox_C::OnAvailableForNewDrink__DelegateSignature(class ABP_DrinksBox_C* DrinkBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DrinksBox.BP_DrinksBox_C.OnAvailableForNewDrink__DelegateSignature");

	struct
	{
		class ABP_DrinksBox_C*         DrinkBox;
	} params;

	params.DrinkBox = DrinkBox;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
