// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BTN_UnlockItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTN_UnlockItem.BTN_UnlockItem_C.SetData
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UCraftable> Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTN_UnlockItem_C::SetData(const TScriptInterface<class UCraftable>& Item, class UClass* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTN_UnlockItem.BTN_UnlockItem_C.SetData");

	struct
	{
		TScriptInterface<class UCraftable> Item;
		class UClass*                  Character;
	} params;

	params.Item = Item;
	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function BTN_UnlockItem.BTN_UnlockItem_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTN_UnlockItem_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTN_UnlockItem.BTN_UnlockItem_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function BTN_UnlockItem.BTN_UnlockItem_C.ExecuteUbergraph_BTN_UnlockItem
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTN_UnlockItem_C::ExecuteUbergraph_BTN_UnlockItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTN_UnlockItem.BTN_UnlockItem_C.ExecuteUbergraph_BTN_UnlockItem");

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
