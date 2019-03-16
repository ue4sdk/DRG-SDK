// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITEM_Stats_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITEM_Stats.ITEM_Stats_C.Show
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   BonusValue                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UITEM_Stats_C::Show(const struct FText& Name, const struct FText& Value, const struct FText& BonusValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_Stats.ITEM_Stats_C.Show");

	struct
	{
		struct FText                   Name;
		struct FText                   Value;
		struct FText                   BonusValue;
	} params;

	params.Name = Name;
	params.Value = Value;
	params.BonusValue = BonusValue;

	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_Stats.ITEM_Stats_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_Stats_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_Stats.ITEM_Stats_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_Stats.ITEM_Stats_C.ExecuteUbergraph_ITEM_Stats
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_Stats_C::ExecuteUbergraph_ITEM_Stats(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_Stats.ITEM_Stats_C.ExecuteUbergraph_ITEM_Stats");

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
