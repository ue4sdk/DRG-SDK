// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_LIB_Intoxication_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LIB_Intoxication.LIB_Intoxication_C.GetAlcoholStrengthPct
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EDrinkableAlcoholStrength      Strength                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APlayerCharacter*        Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Percent                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULIB_Intoxication_C::GetAlcoholStrengthPct(EDrinkableAlcoholStrength Strength, class APlayerCharacter* Character, class UObject* __WorldContext, int* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Intoxication.LIB_Intoxication_C.GetAlcoholStrengthPct");

	struct
	{
		EDrinkableAlcoholStrength      Strength;
		class APlayerCharacter*        Character;
		class UObject*                 __WorldContext;
		int                            Percent;
	} params;

	params.Strength = Strength;
	params.Character = Character;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Percent != nullptr)
		*Percent = params.Percent;
}


// Function LIB_Intoxication.LIB_Intoxication_C.GetAlcoholStrengthName
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EDrinkableAlcoholStrength      Strength                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           UpperCase                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Name                           (CPF_Parm, CPF_OutParm)

void ULIB_Intoxication_C::GetAlcoholStrengthName(EDrinkableAlcoholStrength Strength, bool UpperCase, class UObject* __WorldContext, struct FText* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Intoxication.LIB_Intoxication_C.GetAlcoholStrengthName");

	struct
	{
		EDrinkableAlcoholStrength      Strength;
		bool                           UpperCase;
		class UObject*                 __WorldContext;
		struct FText                   Name;
	} params;

	params.Strength = Strength;
	params.UpperCase = UpperCase;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Name != nullptr)
		*Name = params.Name;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
