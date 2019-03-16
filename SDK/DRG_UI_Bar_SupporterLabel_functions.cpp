// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_Bar_SupporterLabel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Bar_SupporterLabel.UI_Bar_SupporterLabel_C.SetDrinkable
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDrinkableDataAsset*     Drinkable                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsSupporterEdition             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UDrinkableDataAsset*     OutDrinkable                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Bar_SupporterLabel_C::SetDrinkable(class UDrinkableDataAsset* Drinkable, bool* IsSupporterEdition, class UDrinkableDataAsset** OutDrinkable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_SupporterLabel.UI_Bar_SupporterLabel_C.SetDrinkable");

	struct
	{
		class UDrinkableDataAsset*     Drinkable;
		bool                           IsSupporterEdition;
		class UDrinkableDataAsset*     OutDrinkable;
	} params;

	params.Drinkable = Drinkable;

	UObject::ProcessEvent(fn, &params);

	if (IsSupporterEdition != nullptr)
		*IsSupporterEdition = params.IsSupporterEdition;
	if (OutDrinkable != nullptr)
		*OutDrinkable = params.OutDrinkable;
}


// Function UI_Bar_SupporterLabel.UI_Bar_SupporterLabel_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Bar_SupporterLabel_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_SupporterLabel.UI_Bar_SupporterLabel_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_SupporterLabel.UI_Bar_SupporterLabel_C.ExecuteUbergraph_UI_Bar_SupporterLabel
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Bar_SupporterLabel_C::ExecuteUbergraph_UI_Bar_SupporterLabel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_SupporterLabel.UI_Bar_SupporterLabel_C.ExecuteUbergraph_UI_Bar_SupporterLabel");

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
