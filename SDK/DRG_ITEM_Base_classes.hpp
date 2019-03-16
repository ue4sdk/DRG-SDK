#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITEM_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ITEM_Base.ITEM_Base_C
// 0x0030 (0x0258 - 0x0228)
class UITEM_Base_C : public UFSDUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UClass*                                      itemClass;                                                // 0x0230(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    OnClicked;                                                // 0x0238(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	int                                                ItemEquipIndex;                                           // 0x0248(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EItemCategory                                      ItemCategory;                                             // 0x024C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x024D(0x0003) MISSED OFFSET
	class UClass*                                      PlayerCharacter;                                          // 0x0250(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass ITEM_Base.ITEM_Base_C");
		return ptr;
	}


	void GetNumberOfItems(class UClass* playerClass, int* ItemCount);
	void GetItemCountString(class UClass* playerClass, struct FText* Result);
	void Clear();
	void Construct();
	void OnClear();
	void UpdateEquipment(class UClass* PlayerCharacter);
	void OnItemUpdated();
	void ExecuteUbergraph_ITEM_Base(int EntryPoint);
	void OnClicked__DelegateSignature(class UClass* Item);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
