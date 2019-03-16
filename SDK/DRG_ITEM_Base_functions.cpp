// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITEM_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITEM_Base.ITEM_Base_C.GetNumberOfItems
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UClass*                  playerClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ItemCount                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_Base_C::GetNumberOfItems(class UClass* playerClass, int* ItemCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_Base.ITEM_Base_C.GetNumberOfItems");

	struct
	{
		class UClass*                  playerClass;
		int                            ItemCount;
	} params;

	params.playerClass = playerClass;

	UObject::ProcessEvent(fn, &params);

	if (ItemCount != nullptr)
		*ItemCount = params.ItemCount;
}


// Function ITEM_Base.ITEM_Base_C.GetItemCountString
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UClass*                  playerClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Result                         (CPF_Parm, CPF_OutParm)

void UITEM_Base_C::GetItemCountString(class UClass* playerClass, struct FText* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_Base.ITEM_Base_C.GetItemCountString");

	struct
	{
		class UClass*                  playerClass;
		struct FText                   Result;
	} params;

	params.playerClass = playerClass;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ITEM_Base.ITEM_Base_C.Clear
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITEM_Base_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_Base.ITEM_Base_C.Clear");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_Base.ITEM_Base_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UITEM_Base_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_Base.ITEM_Base_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_Base.ITEM_Base_C.OnClear
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITEM_Base_C::OnClear()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_Base.ITEM_Base_C.OnClear");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_Base.ITEM_Base_C.UpdateEquipment
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  PlayerCharacter                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_Base_C::UpdateEquipment(class UClass* PlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_Base.ITEM_Base_C.UpdateEquipment");

	struct
	{
		class UClass*                  PlayerCharacter;
	} params;

	params.PlayerCharacter = PlayerCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_Base.ITEM_Base_C.OnItemUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITEM_Base_C::OnItemUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_Base.ITEM_Base_C.OnItemUpdated");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_Base.ITEM_Base_C.ExecuteUbergraph_ITEM_Base
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_Base_C::ExecuteUbergraph_ITEM_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_Base.ITEM_Base_C.ExecuteUbergraph_ITEM_Base");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_Base.ITEM_Base_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_Base_C::OnClicked__DelegateSignature(class UClass* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_Base.ITEM_Base_C.OnClicked__DelegateSignature");

	struct
	{
		class UClass*                  Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
